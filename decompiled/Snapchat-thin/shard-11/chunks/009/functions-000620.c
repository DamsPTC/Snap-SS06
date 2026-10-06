/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bdf5e4; end: 108bdf60b; -[SCSnapchatterCompletionGroup getCompletionQueue] */

void FUN_108bdf5e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bdf60c; end: 108bdf63b; -[SCSnapchatterCompletionGroup .cxx_destruct] */

void FUN_108bdf60c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bdf63c; end: 108bdf76b; -[SCSnapchattersBlockedSnapchatterProvider blockedSnapchatterWithUserId:completionQueue:completionHandler:] */

void FUN_108bdf63c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108bdf76c;
  puStack_70 = &UNK_110857fd0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x000107c2a728(uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bdf76c; end: 108bdf7a3;  */

void FUN_108bdf76c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be101c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bdf7a4; end: 108bdf8d3; -[SCSnapchattersBlockedSnapchatterProvider blockedSnapchatterWithUsername:completionQueue:completionHandler:] */

void FUN_108bdf7a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108bdf8d4;
  puStack_70 = &UNK_110857fd0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x000107c2a728(uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bdf8d4; end: 108bdf90b;  */

void FUN_108bdf8d4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be101e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bdf90c; end: 108bdf987; -[SCSnapchattersBlockedSnapchatterProvider isBlockedSnapchatterForUserId:] */

bool FUN_108bdf90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf1d7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 108bdf988; end: 108bdfa03; -[SCSnapchattersBlockedSnapchatterProvider isBlockedSnapchatterForUsername:] */

bool FUN_108bdf988(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf1d7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c244940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 108bdfa04; end: 108bdfb07; -[SCSnapchattersBlockedSnapchatterProvider _fetchBlockedSnapchatterWithUserId:completionQueue:completionHandler:] */

void FUN_108bdfa04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf1d7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108bdfb08;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar1;
  uStack_48 = param_5;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  func_0x000107c27d8c(param_4,&puStack_70);
  _objc_release(param_4);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 108bdfb08; end: 108bdfb1b;  */

void FUN_108bdfb08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bdfb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bdfb1c; end: 108bdfc1f; -[SCSnapchattersBlockedSnapchatterProvider _fetchBlockedSnapchatterWithUsername:completionQueue:completionHandler:] */

void FUN_108bdfb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf1d7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c244940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108bdfc20;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar1;
  uStack_48 = param_5;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  func_0x000107c27d8c(param_4,&puStack_70);
  _objc_release(param_4);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 108bdfc20; end: 108bdfc33;  */

void FUN_108bdfc20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bdfc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bdfc34; end: 108bdfc63; -[SCSnapchattersBlockedSnapchatterProvider .cxx_destruct] */

void FUN_108bdfc34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bdfc64; end: 108bdfdf7; -[SCSnapchattersDataProvider snapchatterWithUserId:completionQueue:completionHandler:] */

void FUN_108bdfc64(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_108bdfdf8;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_48 = param_5;
      func_0x000107c27d8c(param_4,&puStack_68);
      _objc_release(lStack_48);
    }
    else {
      _objc_initWeak(auStack_70,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_108bdfe0c;
      puStack_98 = &UNK_110857fd0;
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_4);
      lStack_90 = param_4;
      _objc_retain(param_5);
      lStack_80 = param_5;
      _objc_retain(param_3);
      lStack_88 = param_3;
      func_0x000107c2a728(uVar2,&puStack_b0);
      _objc_release(lStack_88);
      _objc_release(lStack_80);
      _objc_release(lStack_90);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bdfdf8; end: 108bdfe0b;  */

void FUN_108bdfdf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bdfe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108bdfe0c; end: 108bdfeb7;  */

void FUN_108bdfe0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108bdfeb8;
    puStack_40 = &UNK_110849530;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000107c27d8c(uVar3,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010bebd760(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108bdfeb8; end: 108bdfee3;  */

void FUN_108bdfeb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bdfec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108bdfee4; end: 108bdffeb; -[SCSnapchattersDataProvider outgoingSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108bdfee4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108bdffec;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c2a728(uVar1,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bdffec; end: 108be0097;  */

void FUN_108bdffec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be0098;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000107c27d8c(uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be6e840(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be0098; end: 108be00af;  */

void FUN_108be0098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be00b0; end: 108be01b7; -[SCSnapchattersDataProvider outgoingSnapchattersWithoutUserWithCompletionQueue:completionHandler:] */

void FUN_108be00b0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108be01b8;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c2a728(uVar1,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be01b8; end: 108be0263;  */

void FUN_108be01b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be0264;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000107c27d8c(uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be6e860(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be0264; end: 108be027b;  */

void FUN_108be0264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be0278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be027c; end: 108be03bb; -[SCSnapchattersDataProvider outgoingSnapchattersForLetterKey:includingMyself:completionQueue:completionHandler:] */

void FUN_108be027c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108be03bc;
    puStack_78 = &UNK_110866a30;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_5);
    lStack_70 = param_5;
    _objc_retain(param_6);
    lStack_60 = param_6;
    _objc_retain(param_3);
    uStack_68 = param_3;
    uStack_50 = param_4;
    func_0x000107c2a728(uVar1,&puStack_90);
    _objc_release(uStack_68);
    _objc_release(lStack_60);
    _objc_release(lStack_70);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108be03bc; end: 108be046b;  */

void FUN_108be03bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be046c;
    puStack_40 = &UNK_110849530;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000107c27d8c(uVar3,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be6e820(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be046c; end: 108be0483;  */

void FUN_108be046c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be0480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be0484; end: 108be0497; -[SCSnapchattersDataProvider mutualFriendSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be0484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d42d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_mutualFriendSnapchattersWithIncl_112612ac8,1,1,param_3,param_4);
  return;
}



/* Entry: 108be0498; end: 108be049b; -[SCSnapchattersDataProvider mutualFriendSnapchattersWithIncludingMyself:includingTeamSnapchat:completionQueue:completionHandler:] */

void FUN_108be0498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be61b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mutualFriendSnapchattersWithInc_112576080);
  return;
}



/* Entry: 108be049c; end: 108be049f; -[SCSnapchattersDataProvider DONOTUSE_mutualFriendSnapchattersWithIncludingMyself:includingTeamSnapchat:completionQueue:completionHandler:] */

void FUN_108be049c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be61b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mutualFriendSnapchattersWithInc_112576080);
  return;
}



/* Entry: 108be04a0; end: 108be05bf; -[SCSnapchattersDataProvider _mutualFriendSnapchattersWithIncludingMyself:includingTeamSnapchat:completionQueue:completionHandler:] */

void FUN_108be04a0(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108be05c0;
    puStack_70 = &UNK_110ab6ed0;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_5);
    lStack_68 = param_5;
    _objc_retain(param_6);
    lStack_60 = param_6;
    uStack_50 = param_3;
    uStack_4f = param_4;
    func_0x000107c2a728(uVar1,&puStack_88);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 108be05c0; end: 108be066b;  */

void FUN_108be05c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be066c;
    puStack_40 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000107c27d8c(uVar1,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be6aaa0(lVar3);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 108be066c; end: 108be0683;  */

void FUN_108be066c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be0680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be0684; end: 108be079b; -[SCSnapchattersDataProvider allIncomingSnapchattersWithShouldBypassSizeLimit:completionQueue:completionHandler:] */

void FUN_108be0684(long param_1,undefined8 param_2,undefined1 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108be079c;
    puStack_70 = &UNK_110849230;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_4);
    lStack_68 = param_4;
    _objc_retain(param_5);
    lStack_60 = param_5;
    uStack_50 = param_3;
    func_0x000107c2a728(uVar1,&puStack_88);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108be079c; end: 108be0843;  */

void FUN_108be079c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be0844;
    puStack_40 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000107c27d8c(uVar1,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010bdc9e60(lVar3);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 108be0844; end: 108be085b;  */

void FUN_108be0844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be0858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be085c; end: 108be095b; -[SCSnapchattersDataProvider rankedIncomingSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be085c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108be095c;
  puStack_58 = &UNK_110848378;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000107c2a728(uVar1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be095c; end: 108be0a07;  */

void FUN_108be095c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be0a08;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000107c27d8c(uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be85d20(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be0a08; end: 108be0a1f;  */

void FUN_108be0a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be0a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be0a20; end: 108be0b27; -[SCSnapchattersDataProvider displayIncomingSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be0a20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108be0b28;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c2a728(uVar1,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be0b28; end: 108be0bd3;  */

void FUN_108be0b28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be0bd4;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000107c27d8c(uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be046c0(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be0bd4; end: 108be0beb;  */

void FUN_108be0bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be0be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be0bec; end: 108be0d03; -[SCSnapchattersDataProvider suggestedSnapchattersForSuggestionPage:completionQueue:completionHandler:] */

void FUN_108be0bec(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108be0d04;
    puStack_70 = &UNK_11089a980;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_4);
    lStack_68 = param_4;
    _objc_retain(param_5);
    lStack_60 = param_5;
    uStack_50 = param_3;
    func_0x000107c2a728(uVar1,&puStack_88);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108be0d04; end: 108be0daf;  */

void FUN_108be0d04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be0db0;
    puStack_40 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000107c27d8c(uVar1,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010bec8de0(lVar3);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 108be0db0; end: 108be0dc7;  */

void FUN_108be0db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be0dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be0dc8; end: 108be0ef7; -[SCSnapchattersDataProvider pendingIncomingSnapchattersCountWithLimit:requireNonEmptyAddSource:unviewedOnly:completionQueue:completionHandler:] */

void FUN_108be0dc8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_6 != 0) && (param_7 != 0)) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108be0ef8;
    puStack_88 = &UNK_110ab6f00;
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(param_6);
    lStack_80 = param_6;
    _objc_retain(param_7);
    lStack_78 = param_7;
    uStack_68 = param_3;
    uStack_60 = param_4;
    uStack_5f = param_5;
    func_0x000107c2a728(uVar1,&puStack_a0);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 108be0ef8; end: 108be0ff3;  */

void FUN_108be0ef8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be0ff4;
    puStack_40 = &UNK_110849530;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x000107c27d8c(uVar4,&puStack_58);
    uVar4 = uStack_38;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c0f76a0();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x108be1004;
    puStack_70 = &UNK_110860cf8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    uStack_60 = uVar3;
    func_0x000107c27d8c(uVar4,&puStack_88);
    uVar4 = uStack_68;
  }
  _objc_release(uVar4);
  _objc_release(lVar2);
  return;
}



/* Entry: 108be0ff4; end: 108be1013;  */

void FUN_108be0ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be1000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be1014; end: 108be112b; -[SCSnapchattersDataProvider hasSuggestedSnapchattersForSuggestionPage:completionQueue:completionHandler:] */

void FUN_108be1014(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108be112c;
    puStack_70 = &UNK_11089a980;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_4);
    lStack_68 = param_4;
    _objc_retain(param_5);
    lStack_60 = param_5;
    uStack_50 = param_3;
    func_0x000107c2a728(uVar1,&puStack_88);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108be112c; end: 108be123f;  */

void FUN_108be112c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be1240;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x000107c27d8c(uVar3,&puStack_58);
    uVar3 = uStack_38;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfdcfa0();
    _objc_release(uVar3);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x108be1250;
    puStack_70 = &UNK_11084a9b8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_60 = (undefined1)uVar4;
    uStack_68 = uVar1;
    func_0x000107c27d8c(uVar3,&puStack_88);
    uVar3 = uStack_68;
  }
  _objc_release(uVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 108be1240; end: 108be1263;  */

void FUN_108be1240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be1264; end: 108be140f; -[SCSnapchattersDataProvider nonFriendsSuggestedSnapchattersForSuggestionPage:completionQueue:completionHandler:] */

void FUN_108be1264(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fc560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108be1410;
  puStack_70 = &UNK_11085a548;
  _objc_retain(uVar3);
  ppuVar4 = &puStack_88;
  uStack_68 = uVar3;
  _objc_retainBlock();
  _objc_initWeak(auStack_90,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x108be149c;
  puStack_c0 = &UNK_110ab6f30;
  _objc_copyWeak(auStack_a0,auStack_90);
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  uStack_98 = param_3;
  _objc_retain(ppuVar4);
  ppuStack_a8 = ppuVar4;
  func_0x000107c2a728(uVar2,&puStack_d8);
  _objc_release(ppuStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_release(ppuVar4);
  _objc_release(uStack_68);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108be1410; end: 108be1547;  */

long FUN_108be1410(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 1;
  }
  else {
    lVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 108be1548; end: 108be155f;  */

void FUN_108be1548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be155c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be1560; end: 108be1667; -[SCSnapchattersDataProvider contactSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be1560(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108be1668;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c2a728(uVar1,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be1668; end: 108be169b;  */

void FUN_108be1668(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde7280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108be169c; end: 108be17a3; -[SCSnapchattersDataProvider googleContactSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be169c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108be17a4;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c2a728(uVar1,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be17a4; end: 108be184f;  */

void FUN_108be17a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be1850;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000107c27d8c(uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be24360(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be1850; end: 108be1867;  */

void FUN_108be1850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be1864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be1868; end: 108be196f; -[SCSnapchattersDataProvider facebookContactSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be1868(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108be1970;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c2a728(uVar1,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be1970; end: 108be1a1b;  */

void FUN_108be1970(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be1a1c;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000107c27d8c(uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be0ddc0(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be1a1c; end: 108be1a33;  */

void FUN_108be1a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be1a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be1a34; end: 108be1b3b; -[SCSnapchattersDataProvider nonFriendContactSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be1a34(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108be1b3c;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c2a728(uVar1,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be1b3c; end: 108be1be7;  */

void FUN_108be1b3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be1be8;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000107c27d8c(uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be63f20(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be1be8; end: 108be1bff;  */

void FUN_108be1be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be1bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be1c00; end: 108be1dab; -[SCSnapchattersDataProvider rankedBestFriendSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be1c00(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x108be1ce8;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c27d8c(param_3,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be1dac; end: 108be1dc3;  */

void FUN_108be1dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be1dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be1dc4; end: 108be1f6f; -[SCSnapchattersDataProvider rankedExtendedBestFriendSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be1dc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x108be1eac;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c27d8c(param_3,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be1f70; end: 108be1f87;  */

void FUN_108be1f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be1f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be1f88; end: 108be1f8b; -[SCSnapchattersDataProvider recentAndSuggestedFriendSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be1f88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recentAndSuggestedFriendSnapcha_11257f500);
  return;
}



/* Entry: 108be1f8c; end: 108be1f8f; -[SCSnapchattersDataProvider DONOTUSE_recentAndSuggestedFriendSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be1f8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recentAndSuggestedFriendSnapcha_11257f500);
  return;
}



/* Entry: 108be1f90; end: 108be2097; -[SCSnapchattersDataProvider _recentAndSuggestedFriendSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be1f90(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108be2098;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c2a728(uVar1,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108be2098; end: 108be2147;  */

void FUN_108be2098(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be2148;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000107c27d8c(uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be86da0(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108be2148; end: 108be215f;  */

void FUN_108be2148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be215c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 108be2160; end: 108be222b; -[SCSnapchattersDataProvider latestIncomingAddedFriendsTimestamp] */

void FUN_108be2160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfec040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfec040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010befcae0();
  func_0x0001090216ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108be222c; end: 108be23db; -[SCSnapchattersDataProvider latestOutgoingAddFriendTimestamp] */

long FUN_108be222c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0eea00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c0eea00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  dVar6 = 0.0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar4 == 0) {
    dVar7 = 0.0;
  }
  else {
    lVar2 = *plStack_110;
    dVar7 = 0.0;
    do {
      lVar5 = 0;
      dVar8 = dVar7;
      do {
        dVar7 = dVar6;
        if (*plStack_110 != lVar2) {
          _objc_enumerationMutation(lVar3);
          dVar7 = dVar6;
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00010bfb8280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef89e0();
        dVar6 = dVar7;
        _objc_release(uVar1);
        if (dVar7 <= dVar8) {
          dVar7 = dVar8;
        }
        lVar5 = lVar5 + 1;
        dVar8 = dVar7;
      } while (lVar4 != lVar5);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
  lVar4 = lVar3;
  _objc_release();
  func_0x0001090216ac(dVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return lVar4;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(lVar3 + 0x38);
  func_0x00010c0ee9c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x38);
    func_0x00010c0eea00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18640();
    _objc_release(uVar1);
    lVar5 = *(long *)(lVar3 + 0x38);
    func_0x00010c0eea00(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c244400();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar5);
  }
  else {
    lVar3 = lVar4;
    func_0x00010c296d80(lVar4);
    lVar2 = (long)(int)lVar3;
  }
  _objc_release(lVar4);
  return lVar2;
}



/* Entry: 108be23dc; end: 108be2493; -[SCSnapchattersDataProvider outgoingFriendsCount] */

long FUN_108be23dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0ee9c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0eea00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18640();
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x00010c0eea00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c244400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    lVar4 = lVar1;
    func_0x00010c296d80(lVar1);
    lVar5 = (long)(int)lVar4;
  }
  _objc_release(lVar1);
  return lVar5;
}



/* Entry: 108be2494; end: 108be249b;  */

bool FUN_108be2494(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c439a8(param_2);
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c3a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3e1d0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  return lVar2 != 0;
}



/* Entry: 108be249c; end: 108be24d7; -[SCSnapchattersDataProvider bestFriendsCount] */

undefined8 FUN_108be249c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be85ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108be24d8; end: 108be25bb; -[SCSnapchattersDataProvider _snapchatterWithUserId:completionQueue:completionHandler:] */

void FUN_108be24d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108be25bc;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar1;
  uStack_48 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x000107c27d8c(param_4,&puStack_70);
  _objc_release(param_4);
  func_0x00010be58d00(param_1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 108be25bc; end: 108be25cf;  */

void FUN_108be25bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be25cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be25d0; end: 108be2703; -[SCSnapchattersDataProvider _outgoingSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be25d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0eea00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0eea00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108be2704;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_70);
  _objc_release(param_3);
  func_0x00010be56b20(param_1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108be2704; end: 108be2717;  */

void FUN_108be2704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be2714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be2718; end: 108be28c7; -[SCSnapchattersDataProvider _outgoingSnapchattersForLetterKey:includingMyself:completionQueue:completionHandler:] */

void FUN_108be2718(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0ee9a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar4);
  puVar1 = *(undefined **)(param_1 + 0x38);
  func_0x00010c0ee9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2442a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  puVar3 = puVar1;
  if ((param_4 & 1) == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108be28c8;
    puStack_60 = &UNK_11085a548;
    lStack_58 = param_1;
    func_0x000107c31910(puVar1,&puStack_78);
    _objc_release(puVar1);
  }
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108be2954;
  puStack_90 = &UNK_11084aaa8;
  puStack_88 = puVar3;
  uStack_80 = param_6;
  _objc_retain(puVar3);
  _objc_retain(param_6);
  func_0x000107c27d8c(param_5,&puStack_a8);
  func_0x00010be56b20(param_1);
  _objc_release(puStack_88);
  _objc_release(uStack_80);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 108be28c8; end: 108be2953;  */

uint FUN_108be28c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar3 ^ 1;
}



/* Entry: 108be2954; end: 108be2967;  */

void FUN_108be2954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be2964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be2968; end: 108be2acf; -[SCSnapchattersDataProvider _onPerformerMutualFriendSnapchattersWithIncludingMyself:includingTeamSnapchat:completionQueue:completionHandler:] */

void FUN_108be2968(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_5);
  func_0x00010c0eea00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0eea00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108be2ad0;
  puStack_78 = &UNK_110ab6f80;
  uVar3 = uVar4;
  lStack_70 = param_1;
  uStack_68 = param_3;
  uStack_67 = param_4;
  func_0x000107c31910();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108be2bd4;
  puStack_a8 = &UNK_11084aaa8;
  uStack_a0 = uVar3;
  uStack_98 = param_6;
  _objc_retain(uVar3);
  _objc_retain(param_6);
  func_0x000107c27d8c(param_5,&puStack_c0);
  _objc_release(param_5);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  _objc_release(uVar3);
  _objc_release(param_6);
  return;
}



/* Entry: 108be2ad0; end: 108be2bd3;  */

ulong FUN_108be2ad0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar4 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    if ((uVar3 & 1) == 0) goto LAB_108be2b64;
LAB_108be2ba0:
    uVar4 = 0;
  }
  else {
LAB_108be2b64:
    if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
      uVar4 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      if ((uVar3 & 1) != 0) goto LAB_108be2ba0;
    }
    uVar4 = param_2;
    func_0x000100bf119c(param_2);
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 108be2bd4; end: 108be2be7;  */

void FUN_108be2bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be2be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be2be8; end: 108be2d47; -[SCSnapchattersDataProvider _outgoingSnapchattersWithoutUserWithCompletionQueue:completionHandler:] */

void FUN_108be2be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0eea00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0eea00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108be2d48;
  puStack_70 = &UNK_11085a548;
  uVar3 = uVar4;
  lStack_68 = param_1;
  func_0x000107c31910();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108be2dd4;
  puStack_a0 = &UNK_11084aaa8;
  uStack_98 = uVar3;
  uStack_90 = param_4;
  _objc_retain(uVar3);
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_b8);
  _objc_release(param_3);
  func_0x00010be56b20(param_1);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 108be2d48; end: 108be2dd3;  */

uint FUN_108be2d48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar3 ^ 1;
}



/* Entry: 108be2dd4; end: 108be2de7;  */

void FUN_108be2dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be2de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be2de8; end: 108be2f9b; -[SCSnapchattersDataProvider _allIncomingSnapchattersWithShouldBypassSizeLimit:completionQueue:completionHandler:] */

void FUN_108be2de8(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 auStack_c0 [6];
  undefined8 auStack_90 [6];
  
  puVar4 = auStack_c0;
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010bfec040(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18640();
    _objc_release(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfec040();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c244400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = (code *)0x108be2fb0;
    uVar2 = param_5;
    uVar6 = uVar3;
  }
  else {
    func_0x00010bfec060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18640();
    _objc_release(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfec060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c244400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = FUN_108be2f9c;
    puVar4 = auStack_90;
    uVar3 = param_5;
    uVar6 = uVar2;
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4[1] = 0xc2000000;
  puVar4[2] = pcVar7;
  puVar4[3] = &UNK_11084aaa8;
  puVar4[4] = uVar6;
  puVar4[5] = param_5;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x000107c27d8c(param_4,puVar4);
  _objc_release(param_4);
  _objc_release(puVar4[4]);
  _objc_release(puVar4[5]);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108be2f9c; end: 108be2fc3;  */

void FUN_108be2f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be2fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be2fc4; end: 108be30ef; -[SCSnapchattersDataProvider _rankedIncomingSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be2fc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c11f7e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11f7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108be30f0;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108be30f0; end: 108be3103;  */

void FUN_108be30f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be3100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3104; end: 108be326f; -[SCSnapchattersDataProvider _displayIncomingSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be3104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bfec040(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108be3270;
  puStack_70 = &UNK_11085a548;
  ppuVar2 = &puStack_88;
  lStack_68 = param_1;
  _objc_retainBlock(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfec040();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x000107c31910();
  _objc_release(uVar5);
  _objc_release(uVar3);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108be3304;
  puStack_a0 = &UNK_11084aaa8;
  uStack_98 = uVar4;
  uStack_90 = param_4;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_b8);
  _objc_release(param_3);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  _objc_release(uVar4);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108be3270; end: 108be3303;  */

undefined8 FUN_108be3270(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bfebee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b4ca0();
  uVar3 = param_2;
  func_0x000108beec2c((double)lVar2 / 1000.0,param_2);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  return uVar3;
}



/* Entry: 108be3304; end: 108be3317;  */

void FUN_108be3304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be3314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3318; end: 108be355f; -[SCSnapchattersDataProvider _suggestedSnapchattersForSuggestionPage:filterBlock:completionQueue:completionHandler:] */

void FUN_108be3318(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_90 = 0;
  uVar5 = 0x2020000000;
  uStack_80 = 0x2020000000;
  puVar1 = PTR_PTR_1126ae4e8;
  puStack_88 = &uStack_90;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puStack_78 = puVar2;
  _objc_initWeak(auStack_98,param_1);
  _CACurrentMediaTime();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_108be3560;
  puStack_c0 = &UNK_110ab6fb0;
  puStack_b0 = &uStack_90;
  _objc_retain(param_6);
  uStack_b8 = param_6;
  _objc_copyWeak(auStack_a8,auStack_98);
  ppuVar3 = &puStack_d8;
  uStack_a0 = uVar5;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2622a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  if (param_4 != 0) {
    func_0x000107c31910(uVar5,param_4);
    _objc_release(uVar5);
  }
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108be3620;
  puStack_f0 = &UNK_11084aaa8;
  uStack_e8 = uVar4;
  ppuStack_e0 = ppuVar3;
  _objc_retain(uVar4);
  _objc_retain(ppuVar3);
  func_0x000107c27d8c(param_5,&puStack_108);
  _objc_release(uStack_e8);
  _objc_release(ppuStack_e0);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108be3560; end: 108be361f;  */

void FUN_108be3560(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  _CACurrentMediaTime();
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar2 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be53600(param_1 - *(double *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


