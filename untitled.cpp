#include<iostream>
#include<map>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<sstream>
#include<locale>
using namespace std;
map<string, string> dictionary; // 单词字典// 初始化字典
void initDictionary(){
dictionary["i"] = "我";
dictionary["am"] = "是";
dictionary["a"] = "一个";
dictionary["my"] = "我的";
dictionary["dream"] = "梦想";
dictionary["student"] = "学生";
dictionary["occupation"] = "职业"; 
dictionary["job"] = "工作"; 
dictionary["employee"] = "雇员"; 
dictionary["employer"] = "雇主"; 
dictionary["workplace"] = "工作场所"; 
dictionary["office"] = "办公室"; 
dictionary["company"] = "公司"; 
dictionary["business"] = "商业"; 
dictionary["professional"] = "专业人士"; 
dictionary["manager"] = "经理"; 
dictionary["supervisor"] = "主管";
dictionary["secretary"] = "秘书"; 
dictionary["receptionist"] = "接待员"; 
dictionary["salesperson"] = "销售员"; 
dictionary["accountant"] = "会计师"; 
dictionary["lawyer"] = "律师"; 
dictionary["doctor"] = "医生"; 
dictionary["nurse"] = "护士"; 
dictionary["teacher"] = "教师"; 
dictionary["engineer"] = "工程师"; 
dictionary["programmer"] = "程序员"; 
dictionary["designer"] = "设计师"; 
dictionary["writer"] = "作家"; 
dictionary["artist"] = "艺术家"; 
dictionary["musician"] = "音乐家"; 
dictionary["actor"] = "演员"; 
dictionary["athlete"] = "运动员"; 
dictionary["chef"] = "厨师"; 
dictionary["waiter"] = "服务员"; 
dictionary["driver"] = "司机"; 
dictionary["pilot"] = "飞行员"; 
dictionary["mechanic"] = "机械师"; 
dictionary["builder"] = "建筑工"; 
dictionary["farmer"] = "农民"; 
dictionary["travel"] ="旅行";
dictionary["tourism"] ="旅游";
dictionary["destination"] ="目的地";
dictionary["attraction"] ="景点";
dictionary["cruise"] ="游轮";
dictionary["hotel"] ="酒店";
dictionary["motel"] ="汽车旅馆";
dictionary["resort"] ="度假胜地";
dictionary["hostel"] ="青年旅社";
dictionary["campsite"] ="露营地";
dictionary["airplane"] ="飞机";
dictionary["airport"] ="机场";
dictionary["train"] ="火车";
dictionary["railway station"] ="火车站";
dictionary["bus"] ="公交车";
dictionary["bus station"] ="公交车站";
dictionary["taxi"] ="出租车";
dictionary["rental car"] ="租车";
dictionary["sightseeing"] ="观光";
dictionary["hiking"] ="徒步旅行";
dictionary["biking"] ="自行车旅行";
dictionary["backpacking"] ="背包旅行";
dictionary["beach"] ="海滩";
dictionary["mountain"] ="山";
dictionary["forest"] ="森林";
dictionary["waterfall"] = "瀑布";
dictionary["lake"] = "湖";
dictionary["river"] = "河";
dictionary["ocean"] = "海洋";
dictionary["island"] = "岛";
dictionary["museum"] = "博物馆";
dictionary["art gallery"] = "美术馆";
dictionary["theme park"] = "主题公园";
dictionary["zoo"] = "动物园";
dictionary["aquarium"] = "水族馆";
dictionary["food"] = "食品";
dictionary["fast food"] = "快餐";
dictionary["desserts"] = "甜点";
dictionary["cakes"] = "蛋糕";
dictionary["cookies"] = "饼干";
dictionary["pastries"] = "糕点";
dictionary["ice cream"] = "冰激凌";
dictionary["chocolate"] = "巧克力";
dictionary["coffee"] = "咖啡";
dictionary["tea"] = "茶";
dictionary["wine"] = "酒";
dictionary["beer"] = "啤酒";
dictionary["cocktails"] = "鸡尾酒";
dictionary["soft drinks"] = "软饮料";
dictionary["juices"] = "果汁";
dictionary["smoothies"] = "冰沙";
dictionary["vegetarian cuisine"] = "素食料理";
dictionary["work"] = "工作";
dictionary["study"] = "学习";
dictionary["play"] = "玩耍";
dictionary["read"] = "读书";
dictionary["write"] = "写作";
dictionary["listen"] = "听";
dictionary["speak"] = "说话";
dictionary["watch"] = "观看";
dictionary["play"] = "玩";
dictionary["exercise"] = "锻炼";
dictionary["run"] = "跑步";
dictionary["swim"] = "游泳";
dictionary["hike"] = "徒步旅行";
dictionary["travel"] = "旅行";
dictionary["drive"] = "开车";
dictionary["ride"] = "骑车或者骑马";
dictionary["fly"] = "飞行";
dictionary["dance"] = "跳舞";
dictionary["sing"] = "唱歌";
dictionary["draw"] = "画画";
dictionary["paint"] = "绘画";
dictionary["photograph"] = "摄影";
dictionary["cook"] = "烹饪";
dictionary["bake"] = "烘培";
dictionary["clean"] = "打扫卫生";
dictionary["gardening"] ="园艺";
dictionary["shopping"] ="购物";
dictionary["budget"] ="预算";
dictionary["saving"] ="储蓄";
dictionary["investment"] ="投资";
dictionary["stock"] ="股票";
dictionary["bond"] ="债券";
dictionary["mutual fund"] ="共同基金";
dictionary["retirement"] ="退休";
dictionary["family"] = "家庭"; 
dictionary["friendship"] = "友谊"; 
dictionary["love"] = "爱情"; 
dictionary["dating"] = "约会"; 
dictionary["marriage"] = "婚姻"; 
dictionary["divorce"] = "离婚"; 
dictionary["parenting"] = "育儿"; 
dictionary["education"] = "教育"; 
dictionary["school"] = "学校"; 
dictionary["college"] = "大学"; 
dictionary["graduate school"] = "研究生院"; 
dictionary["study abroad"] = "留学"; 
dictionary["distance education"] = "远程教育"; 
dictionary["online learning"] = "在线学习"; 
dictionary["vocational training"] = "职业培训"; 
dictionary["workforce development"] = "劳动力发展"; 
dictionary["economy"] = "经济"; 
dictionary["globalization"] = "全球化"; 
dictionary["trade"] = "贸易"; 
dictionary["commerce"] = "商业"; 
dictionary["business"] = "企业"; 
dictionary["entrepreneurship"] = "创业"; 
dictionary["finance"] = "金融"; 
dictionary["banking"] = "银行业"; 
dictionary["investing"] = "投资";
dictionary["love"] ="爱";
dictionary["hate"] ="恨";
dictionary["happy"] ="快乐";
dictionary["sad"] ="悲伤";
dictionary["excited"] ="兴奋";
dictionary["surprised"] ="惊讶";
dictionary["angry"] ="生气";
dictionary["calm"] ="平静";
dictionary["tired"] ="疲劳";
dictionary["rested"] ="精神饱满的";
dictionary["busy"] ="忙碌的";
dictionary["relaxed"] ="轻松的";
dictionary["difficult"] ="困难的";
dictionary["easy"] ="容易的";
dictionary["important"] ="重要的";
dictionary["unimportant"] ="不重要的";
dictionary["beautiful"] ="美丽的";
dictionary["ugly"] ="丑陋的";
dictionary["big"] ="大的";
dictionary["small"] ="小的";
dictionary["long"] ="长的";
dictionary["short"] ="短的";
dictionary["fast"] ="快的";
dictionary["slow"] ="慢的";
dictionary["hot"] ="热的";
dictionary["cold"] ="冷的";
dictionary["bright"] ="明亮的";
dictionary["dark"] ="暗的";
dictionary["heavy"] ="重的";
dictionary["light"] ="轻的";
dictionary["loud"] ="响亮的";
dictionary["quiet"] ="安静的";
dictionary["clean"] ="干净的";
dictionary["dirty"] ="脏的";
dictionary["new"] ="新的";
dictionary["old"] ="旧的";
dictionary["expensive"] ="昂贵的";
dictionary["cheap"] ="便宜的";
dictionary["morning"] ="早上";
dictionary["afternoon"] ="下午";
dictionary["evening"] ="晚上";
dictionary["breakfast"] ="早餐";
dictionary["lunch"] ="午餐";
dictionary["dinner"] ="晚餐";dictionary["water"] ="水";dictionary["coffee"] ="咖啡";
dictionary["tea"] ="茶";dictionary["milk"] ="牛奶";dictionary["beer"] ="啤酒";dictionary["wine"] ="葡萄酒";dictionary["vegetable"] ="蔬菜";dictionary["fruit"] ="水果";dictionary["meat"] ="肉";
dictionary["fish"] ="鱼";dictionary["chicken"] ="鸡肉";dictionary["beef"] ="牛肉";dictionary["pork"] ="猪肉";dictionary["rice"] ="米饭";dictionary["noodles"] ="面条";dictionary["bread"] ="面包";dictionary["cake"] ="蛋糕";dictionary["cookie"] ="饼干";dictionary["chocolate"] ="巧克力";
dictionary["you"] ="你";dictionary["your"] ="你的";dictionary["father"] ="爸爸";dictionary["are"] ="是";
dictionary["accept"] = "接受";dictionary["achieve"] = "实现";dictionary["act"] = "行动";dictionary["add"] = "添加";dictionary["admire"] = "赞美";dictionary["admit"] = "承认";dictionary["adopt"] = "采取";dictionary["affect"] = "影响";dictionary["agree"] = "同意";dictionary["allow"] = "允许";dictionary["appear"] = "出现";dictionary["apply"] = "申请";dictionary["argue"] = "争论";
dictionary["sugar"] = "糖";
}

// 向字典中添加更多单词和解释// 显示字典内容
void showDictionary(){

cout << "当前字典：" << endl;

for (const auto&word : dictionary) {
	
	cout << word.first << " " << word.second << endl;
	
}

}
// 添加单词到字典中
void addWordToDictionary(){

string word, translation;

cout << "请输入单词（英文）：";

cin >> word;

cout << "请输入解释（中文）：";

cin >> translation;

auto it = dictionary.find(word); 
if (it != dictionary.end()) {
	cout << "字典中已存在该单词，其翻译是：" << it->second << endl; 
} 
else{
dictionary[word] = translation;
cout << "添加成功！" << endl;
}
}

void chickword(){
	string word, translation;
	char choice;
	
	cout << "请输入单词（英文）：";
	cin >> word;
	
	auto it = dictionary.find(word); // 假设这是一个已经拥有一些键值对的字典 // 查询 travel 是否在字典中 
	if (it != dictionary.end()) {
		cout << "查询到词库里的单词存在此单词，其翻译为：" << it->second << endl; 
	} 
	else {
		cout << "词库里没有找到此单词。是否添加到字典中？（按 X 添加，按其他键跳过）";
		cin >> choice;
		
		if (toupper(choice) == 'X') {
			cout << "请输入解释（中文）：";
			cin >> translation;
			dictionary[word] = translation; 
			cout << "成功将新单词加入字典中！" << endl; 
		} else {
			cout << "未添加新单词。" << endl;
		}
	} 
}

// 移除字典中的单词
void removeWordFromDictionary(){

string word;


cout << "请输入要删除的单词：";

cin >> word;


if(dictionary.erase(word)) {
	
	cout << "删除成功！" << endl;
	
} else {
	
	cout << "字典中不存在该单词。" << endl;
	
}

}
// 翻译句子
string translateSentence(const string& sentence){

istringstream iss(sentence);

ostringstream oss;

string word;


while (iss >> word) {
	
	// 将单词翻译成中文 
	string translation = dictionary.find(word)->second;
	
	oss << translation << " ";
	
}
return oss.str(); // 返回翻译后的完整句子
}

void siji(){
	map<string, pair<string, string>> vocabulary = {
		
		// 声明并初始化四级词库 
		{"abandon", make_pair("v.", "放弃；抛弃")},
		
		{"abbreviate", make_pair("v.", "缩写；缩短")},
		
		{"absence", make_pair("n.", "缺席；不在场")},
		
		{"absorb", make_pair("v.", "吸收；吞并")},
		
		{"abstract", make_pair("adj.", "抽象的；难懂的")},
		
		{"academic", make_pair("adj.", "学术的；大学的")},
		
		{"access", make_pair("n.", "进入；通路")},
		
		{"accommodate", make_pair("v.", "容纳；适应")},
		
		{"accumulate", make_pair("v.", "积累；聚集")},
		
		{"accurate", make_pair("adj.", "准确的；精密的")},
		
		{"accustom", make_pair("v.", "使习惯于；适应")},
		
		{"achievement", make_pair("n.", "成就；成绩")},
		
		{"acknowledge", make_pair("v.", "承认；致谢")},
		
		{"acquaint", make_pair("v.", "使认识；使了解")},
		
		{"adapt", make_pair("v.", "适应；改编")},
		
		{"address", make_pair("v./n.", "向……发表演说；地址")},
		
		{"adequate", make_pair("adj.", "足够的；适当的")},
		
		{"adhere", make_pair("v.", "黏附；坚持")},
		
		{"adjacent", make_pair("adj.", "毗邻的；临近的")},
		
		{"jealous", make_pair("a.", "妒忌的；猜疑的")},
		
		{"adjust", make_pair("v.", "调整；适应")}
		
		
	};
	
	
	
	vector<string> words;
	
	// 将单词列表放到 vector 中方便随机选取 
	for (const auto& item : vocabulary)
		
	{
		
		words.push_back(item.first);
		
	}
	
	
	// 根据时间种子生成随机数算法
	srand(time(0));
	
	
	
	// 游戏开始 
	cout << "四级英语单词随机测试游戏" << endl;
	
	
	bool isPlaying = true;
	
	while (isPlaying)
		
	{
		
		// 随机选择一个单词
		int index = rand() % words.size();
		
		string word = words[index];
		
		// 输出问题并等待用户回答 
		cout << "请回答单词 \"" << word << "\" 的中文翻译：";
		
		string answer;
		
		cin >> answer;
		
		
		// 判断回答是否正确，并输出结果
		auto iter = vocabulary.find(word);
		
		if (iter != vocabulary.end())
			
		{
			
			if (answer == iter->second.second)
				
				cout << "回答正确！" << endl;
			
			
			else cout << "回答错误" << " 正确意思是：\""<< iter->second.second << endl;
			
		}
		
		else 
		{
			
			cout << "未找到该单词的释义及例句" << endl;
			
		}
		
		
		
		// 询问用户是否继续游戏 
		cout << "继续游戏请按任意键，退出请按 q：" << endl;
		
		char option;
		
		cin >> option;
		
		
		if (option == 'q' || option == 'Q')
			
		{
			
			isPlaying = false;
			
			cout << "欢迎下次再来！" << endl;
			
		}
		
		
		
		// 删除已经选过的单词，避免重复出现 
		words.erase(words.begin() + index);
		
	}
	
}
int main(){
int choice;
initDictionary();
while (true) {
	
	cout << endl;
	
	cout << "请选择以下操作：" << endl;
	
	cout << "1. 显示字典" << endl;
	
	cout << "2. 添加单词到字典" << endl;
	
	cout << "3. 从字典中移除单词" << endl;
	
	cout << "4. 翻译句子" << endl;
	
	cout << "5. 查询字典里是否存在该单词" << endl;
	
	cout << "6. 四级词汇挑战" << endl;
	
	cout << "7. 退出" << endl;
	cout << "> ";
	
	
	cin >> choice;
	
	
	switch (choice) {
		
		case 1:
			
			showDictionary();
			
			break;
			
			case 2:
				
				addWordToDictionary();
				
				break;
				
				case 3:
					
					removeWordFromDictionary();
					
					break;
					
					case 4: {
						
						string sentence;
						cin.ignore(10000, '\n');
						cout << "请输入要翻译的句子：";
						getline(cin, sentence);
						transform(sentence.begin(), sentence.end(), sentence.begin(), [](char c) { return std::tolower(c); });
						cout << translateSentence(sentence) << endl; // 输出翻译结果
						break;
						
					}
					case 5:
						chickword();
						break;
					case 6:
					     siji();
						break;
					case 7:
						
						cout << "谢谢使用，再见！" << endl;
						
						exit(0);
					
						
	default:
		
		cout << "无效的选项，请重新输入。" << endl;
		break;
		
	}
}

}


