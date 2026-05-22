import os  

file_path = "./Resources/setup_cpp.sh"
with open(file_path,'r') as file:
	data = file.read()
print("Hello sir ! ")
scode_name = input("\nEnter The Name of Source Code file (Without extension): ")
hfile_name = input("\nEnter The Name of Header file (Without extension): ")

replacements = {
	"scode_name": scode_name,
	"hfile_name": hfile_name
}

for old, new in replacements.items():
	data = data.replace(old, new)
	
with open(file_path,'w') as new_file:
	new_file.write(data)
	
print("Execution Sucessfull !\n ")

os.system(" ./Resources/setup_cpp.sh ")   


for old,new in replacements.items():
	data = data.replace(new, old)
	
with open(file_path,'w') as new_file:
	new_file.write(data)
	
print("\nshellScript ran Sucessfully ")
