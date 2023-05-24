%data edit
clear
cd C:\Users\sp_tamatsu\Documents\MATLAB\behavior_individual\no_Opt\6-OHDA\fixed3_obj\ %data file path
[file,path] = uigetfile('*.mat','Select One or More Files', 'MultiSelect', 'on');
if isequal(file,0)
   disp('User selected Cancel');
else
   disp(['User selected ', fullfile(path,file)]);
end
n=numel(file);
filename = cell(1,n);
cd (path)
for i=1:n
    cd (path)
    filename{i} = load(string(file{1,i}));
    eData=filename{1,i}.Data;
    misData = ismissing(eData);
    if misData(1,1)==0
        while eData(1,2)=="0"
            eData(1,:)=[];
        end
    else
        eData(1,1)="s3";
        eData(1,2)="0";
    end
    cd C:\Users\sp_tamatsu\Documents\MATLAB\edit_data\Injury\6-OHDA\fixed3
    save("edit_"+string(file{1,i}))

end