#include <iostream>
using namespace std;
#include <map>
#include <vector>
#include <string>
#include <algorithm>
typedef struct tagStudentInfo
{
       int      nID;
       string   strName;
       bool operator < (tagStudentInfo const& _A) const
       {
              //这个函数指定排序策略，按nID排序，如果nID相等的话，按strName排序
              if(nID < _A.nID)  return true;
              if(nID == _A.nID) return strName.compare(_A.strName) < 0;
              return false;
       }
}StudentInfo, *PStudentInfo;  //学生信息
int main()
{
  vector<StudentInfo> vc;
  StudentInfo studentInfo;
  studentInfo.nID = 1;
  studentInfo.strName = "student_one";
  vc.push_back(studentInfo);
  StudentInfo studentInfo1;
  studentInfo1.nID = 2;
  studentInfo1.strName = "student_two";
  vc.push_back(studentInfo1);
  StudentInfo studentInfo2;
  studentInfo2.nID = 2;
  studentInfo2.strName = "student_two";
  vc.push_back(studentInfo2);
  //排序
  sort(vc.begin(),vc.end());
  //输出
  vector<StudentInfo>::iterator iter;
  for (iter=vc.begin(); iter!=vc.end(); iter++)
        cout<<iter->nID<<"  "<<iter->strName <<endl;
  return 0;
}
