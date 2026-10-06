/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10293d534; end: 10293d673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293d534(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong *puStack_38;
  
  func_0x000100083b20(&puStack_38);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_38) + 0x90))();
  func_0x000107c61170(puStack_38);
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_fanPassSubscriptionOnViewPrivate_1125c5c78);
    if ((uVar1 & 1) != 0) {
      func_0x000107c42dec(param_1);
      func_0x000107c615e8(param_1);
      return;
    }
    func_0x000107c615e8(param_1);
  }
  puVar2 = &UNK_11056f5d8;
  func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11056f830;
  func_0x000107c613fc(&UNK_11056f830,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10daf3e48;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar4 = 1;
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf3e58,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 10293d674; end: 10293d703;  */

void FUN_10293d674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293d704,uVar2,uVar3);
  return;
}



/* Entry: 10293d704; end: 10293d89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293d704(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x90,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xd0) = lVar5;
  if (lVar5 != 0) {
    func_0x000100083b20(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(lVar5 + _DAT_113041e48);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar4;
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar5);
    func_0x000100083b20(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x50);
    puVar1 = (undefined8 *)(lVar5 + _DAT_112fef5b8);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61170(lVar5);
    func_0x000107c5fadc(uVar3,uVar2);
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
    func_0x000107c6142c(uVar2);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10293d89c;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar5,0);
    uVar3 = 0x112ece3b0;
    func_0x0001000285a8(0x112ece3b0,&UNK_10daf3e30);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(long *)(unaff_x22 + 0x70) = lVar5;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10293da28;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11056f7f8;
    func_0x000107c43fd8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010293d898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293d89c; end: 10293d8d7;  */

void FUN_10293d89c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10293d8d8,*(undefined8 *)(*unaff_x22 + 0xc0),*(undefined8 *)(*unaff_x22 + 200));
  return;
}



/* Entry: 10293d8d8; end: 10293da27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293d8d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  plVar4 = (long *)(unaff_x22 + 0xa8);
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + _DAT_113041e98) == '\x01') {
      func_0x000107c61428(lVar5 + _DAT_113041eb8,unaff_x22 + 0x50,0,0);
      func_0x000107c61170(lVar5);
    }
    else {
      func_0x000107c61170(lVar5);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61170(uVar1);
  puVar2 = &DAT_112ece2e0;
  func_0x00010293adf4(&DAT_112ece2e0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *(undefined **)(unaff_x22 + 0xa8) = puVar3;
  func_0x0001007d6d78(plVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(puVar3);
  puVar2 = &DAT_112ece2c8;
  func_0x00010293adf4(&DAT_112ece2c8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *(undefined **)(unaff_x22 + 0xa8) = puVar3;
  func_0x0001007d6d78(plVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010293da24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293da28; end: 10293da6b;  */

void FUN_10293da28(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *plVar1;
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 10293da6c; end: 10293dafb;  */

void FUN_10293da6c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293dafc,uVar2,uVar3);
  return;
}



/* Entry: 10293dafc; end: 10293dbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293dafc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar3 = (long *)(lVar4 + _DAT_112fef5b8);
  lVar1 = *plVar3;
  lVar2 = plVar3[1];
  *(long *)(unaff_x22 + 0x40) = lVar2;
  func_0x000107c61434(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000100083b20(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10293dbb8;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar4;
  plVar3[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029432fc,0,0);
  return;
}



/* Entry: 10293dbb8; end: 10293dc1f;  */

void FUN_10293dbb8(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined1 *)(lVar3 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10293dc20,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38));
  return;
}



/* Entry: 10293dc20; end: 10293dc53;  */

void FUN_10293dc20(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010293dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10293dc54; end: 10293dcfb;  */

void FUN_10293dc54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &DAT_112ece2d0;
    func_0x00010293adf4(&DAT_112ece2d0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_50 = puVar2;
    func_0x0001007d6d78(&puStack_50);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10293dcfc; end: 10293dd57;  */

void FUN_10293dcfc(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10293dd58(param_3 & 1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10293dd58; end: 10293df6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293dd58(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  if ((param_1 & 1) == 0) {
    func_0x0001029428c8();
  }
  else {
    func_0x0001029427fc();
  }
  puVar2 = PTR_PTR_1126afde0;
  func_0x000107c61168();
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  func_0x000100083b20(&puStack_80);
  uVar8 = *(undefined8 *)(puStack_80 + _DAT_112fef5c0);
  uVar1 = *(undefined8 *)((long)(puStack_80 + _DAT_112fef5c0) + 8);
  func_0x000107c61434(uVar1);
  func_0x000107c61170();
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined **)(lVar3 + 0x40) = puStack_80;
  *(undefined8 *)(lVar3 + 0x20) = uVar8;
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  uVar8 = param_2;
  func_0x000107c5fb00(param_1,param_2,lVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_1,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c409d8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  pcVar4 = "showStoryNotificationChangeFailure(optIn:)";
  func_0x0001000c10c0("showStoryNotificationChangeFailure(optIn:)");
  func_0x000107c61180();
  puVar5 = &UNK_11056f5d8;
  func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_11056fb00;
  func_0x000107c613fc(&UNK_11056fb00,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined **)(puVar6 + 0x18) = puVar2;
  uStack_60 = 0x102942618;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11056fb18;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(pcVar4);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 10293df70; end: 10293e053;  */

void FUN_10293df70(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x78) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
  uVar5 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293e054,uVar4,uVar5);
  return;
}



/* Entry: 10293e054; end: 10293e36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293e054(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x40,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar10 = *(long *)(unaff_x22 + 0x80);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined4 *)(unaff_x22 + 0x98) = 0x11;
    puVar3 = PTR___ss5Int32VN_11034ee20;
    puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c();
    func_0x000107c5fb78(0x3a3a,0xe200000000000000);
    func_0x000100083b20(unaff_x22 + 0x58);
    lVar8 = *(long *)(unaff_x22 + 0x58);
    puVar1 = (undefined8 *)(lVar8 + _DAT_112fef5b8);
    uVar11 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61170(lVar8);
    func_0x000107c5fb78(uVar11,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fb78(0x303a3a,0xe300000000000000);
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd000000000000032,0x800000010f0cd7d0);
    func_0x000107c5fb78(puVar3,puVar6);
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x6e69616d5f736926,0xed0000657572743d);
    func_0x000107c5edd0(uVar12,0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    (**(code **)(lVar10 + 0x30))(uVar12,1,uVar9);
    if ((int)uVar12 == 1) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x000107c61170(lVar7);
      func_0x0001000293e4(uVar9);
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x70),
                 *(undefined8 *)(unaff_x22 + 0x78));
      func_0x000100083b20(unaff_x22 + 0x60);
      lVar10 = *(long *)(unaff_x22 + 0x60);
      lVar8 = lVar10;
      func_0x000107c414e4();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      lVar4 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      lVar10 = *(long *)(unaff_x22 + 0x80);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
      if (lVar4 == 0) {
        (**(code **)(lVar10 + 8))(uVar9,uVar11);
        func_0x000107c61170(lVar7);
      }
      else {
        func_0x000107c5ed90();
        *(code **)(unaff_x22 + 0x30) = FUN_10293e36c;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x20) = &UNK_1010f39c4;
        *(undefined **)(unaff_x22 + 0x28) = &UNK_11056f848;
        lVar5 = unaff_x22 + 0x10;
        func_0x000107c60bc4(lVar5);
        func_0x000107c4462c(lVar4);
        func_0x000107c60bd0(lVar5);
        func_0x000107c61170(lVar8);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar7);
        (**(code **)(lVar10 + 8))(uVar9,uVar11);
      }
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010293e368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293e36c; end: 10293e36f;  */

void FUN_10293e36c(void)

{
  return;
}



/* Entry: 10293e370; end: 10293e3ab;  */

void FUN_10293e370(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010293e3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10293e3ac; end: 10293e48f;  */

void FUN_10293e3ac(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x78) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
  uVar5 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293e490,uVar4,uVar5);
  return;
}



/* Entry: 10293e490; end: 10293e6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293e490(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x40,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) goto LAB_10293e68c;
  func_0x000100083b20(unaff_x22 + 0x58);
  cVar1 = *(char *)(*(long *)(unaff_x22 + 0x58) + _DAT_112fef5c8);
  func_0x000107c61170();
  if (cVar1 == '\x01') {
    FUN_10293c8c4(0,0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar6 = *(long *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c5edd0(uVar8,0xd00000000000001f,0x800000010efb9280);
    (**(code **)(lVar6 + 0x30))(uVar8,1,uVar7);
    if ((int)uVar8 == 1) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x000107c61170(lVar5);
      func_0x0001000293e4(uVar7);
      goto LAB_10293e68c;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x70),
               *(undefined8 *)(unaff_x22 + 0x78));
    func_0x000100083b20(unaff_x22 + 0x60);
    lVar6 = *(long *)(unaff_x22 + 0x60);
    lVar2 = lVar6;
    func_0x000107c414e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar6 = *(long *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    if (lVar3 != 0) {
      func_0x000107c5ed90();
      *(code **)(unaff_x22 + 0x30) = FUN_10293e6d4;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_1010f39c4;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_11056f8c0;
      lVar4 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar4);
      func_0x000107c4462c(lVar3);
      func_0x000107c60bd0(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar6 + 8))(uVar7,uVar8);
      goto LAB_10293e68c;
    }
    (**(code **)(lVar6 + 8))(uVar7,uVar8);
  }
  func_0x000107c61170(lVar5);
LAB_10293e68c:
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010293e6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293e6d4; end: 10293e817;  */

void FUN_10293e6d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    ppuVar3 = &puStack_70;
    ppuVar4 = &puStack_70;
    ppuVar5 = &puStack_70;
    pcStack_50 = FUN_10293e818;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10006eb60;
    puStack_58 = &UNK_11056f9d8;
    func_0x000107c60bc4(&puStack_70);
    uVar2 = uStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61574(uVar2);
    pcStack_50 = (code *)0x10293e81c;
    uStack_48 = 0;
    puStack_70 = puVar1;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1010f3860;
    puStack_58 = &UNK_11056fa00;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(uStack_48);
    pcStack_50 = (code *)0x10293e820;
    uStack_48 = 0;
    puStack_70 = puVar1;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100e27b38;
    puStack_58 = &UNK_11056fa28;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(uStack_48);
    func_0x000107c4c654(param_1,param_2,ppuVar3,ppuVar4,ppuVar5,0);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10293e818; end: 10293e823;  */

void FUN_10293e818(void)

{
  return;
}



/* Entry: 10293e824; end: 10293e907;  */

void FUN_10293e824(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  uVar5 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293e908,uVar4,uVar5);
  return;
}



/* Entry: 10293e908; end: 10293eab3;  */

void FUN_10293e908(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar8 = *(long *)(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c61170();
    func_0x000107c5edd0(uVar7,0xd000000000000028,0x800000010f0cd810);
    (**(code **)(lVar8 + 0x30))(uVar7,1,uVar9);
    if ((int)uVar7 == 1) {
      func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0x30));
    }
    else {
      lVar8 = *(long *)(unaff_x22 + 0x40);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
      (**(code **)(lVar8 + 0x20))(uVar7,*(undefined8 *)(unaff_x22 + 0x30),uVar1);
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5ed90();
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar5 = 0;
      func_0x000100dfa6ec(0);
      uVar9 = 0x112d377a8;
      FUN_1029420b8(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
      puVar6 = puVar4;
      func_0x000107c5f9dc(puVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar9);
      func_0x000107c6142c(puVar4);
      func_0x000107c4de70(puVar2);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      (**(code **)(lVar8 + 8))(uVar7,uVar1);
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010293eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293eab4; end: 10293ed93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293eab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar1 = &puStack_d0;
  ppuVar4 = &puStack_d0;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar6 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar6 + _DAT_112ece300);
    if (lVar5 != 0) {
      func_0x000107c61174(lVar5);
      func_0x000107c61170(lVar6);
      func_0x000107c4218c(lVar5);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  lVar6 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000100083b20(&puStack_d0);
    func_0x000107c61170(lVar6);
    lVar6 = *(long *)(puStack_d0 + _DAT_112fef5b0);
    func_0x000107c615f0(lVar6);
    func_0x000107c61170(puStack_d0);
    if (lVar6 != 0) {
      puVar2 = &UNK_11056f5d8;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61618(param_1);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      func_0x000107c61170(param_1);
      puVar3 = &UNK_11056f998;
      func_0x000107c613fc(&UNK_11056f998,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = param_2;
      *(undefined8 *)(puVar3 + 0x20) = param_3;
      pcStack_b0 = FUN_1029421bc;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_1000b0c7c;
      puStack_b8 = &UNK_11056f9b0;
      puStack_a8 = puVar3;
      func_0x000107c60bc4(&puStack_d0);
      puVar2 = puStack_a8;
      func_0x000107c61434(param_3);
      func_0x000107c61574(puVar2);
      func_0x000107c41864(lVar6);
      func_0x000107c60bd0(ppuVar1);
      func_0x000107c615e8(lVar6);
      return;
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  lVar6 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    puVar2 = &UNK_11056f5d8;
    func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_a0,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c61170(param_1);
    puVar3 = &UNK_11056f948;
    func_0x000107c613fc(&UNK_11056f948,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    pcStack_b0 = (code *)0x102942660;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_11056f960;
    puStack_a8 = puVar3;
    func_0x000107c60bc4(&puStack_d0);
    puVar2 = puStack_a8;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c420a8(lVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10293ed94; end: 10293ee6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293ed94(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000100083b20(&puStack_50);
    func_0x000107c61170();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_50) + 0x90))();
    func_0x000107c61170(puStack_50);
    if (param_1 != 0) {
      uVar1 = 0;
      if (param_3 != 0) {
        func_0x000107c5fadc(param_2,param_3);
        uVar1 = param_2;
      }
      func_0x000107c41b28(param_1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar1);
    }
  }
  return;
}



/* Entry: 10293ee6c; end: 10293f0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293ee6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  puVar2 = puStack_80;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c40d0c();
    func_0x000107c615e8(puVar3);
    puVar2 = puVar3;
    if ((int)puVar4 != 0) {
      FUN_102942664();
      goto LAB_10293ef04;
    }
  }
  puVar3 = puVar2;
  func_0x000102942730();
LAB_10293ef04:
  puVar4 = PTR_PTR_1126afde0;
  func_0x000107c61168();
  lVar5 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  func_0x000100083b20(&puStack_80);
  uVar8 = *(undefined8 *)(puStack_80 + _DAT_112fef5c0);
  uVar1 = *(undefined8 *)((long)(puStack_80 + _DAT_112fef5c0) + 8);
  func_0x000107c61434(uVar1);
  func_0x000107c61170();
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined **)(lVar5 + 0x40) = puStack_80;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  uVar8 = param_2;
  func_0x000107c5fb00(puVar3,param_2,lVar5);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(puVar3,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c409d8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  pcVar6 = "showSubscriptionFailedNotification()";
  func_0x0001000c10c0("showSubscriptionFailedNotification()");
  func_0x000107c61180();
  puVar3 = &UNK_11056f5d8;
  func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar2 = &UNK_11056fb50;
  func_0x000107c613fc(&UNK_11056fb50,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar3;
  *(undefined **)(puVar2 + 0x18) = puVar4;
  pcStack_60 = FUN_102942230;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11056fb68;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar6);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(pcVar6);
  return;
}



/* Entry: 10293f0ec; end: 10293f25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10293f0ec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c42498();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4248c();
    func_0x000107c61180();
    lVar5 = param_2;
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar5 = param_2;
      func_0x000107c5fb5c(lVar3,param_2);
      func_0x000107c6142c(param_2);
      if (lVar3 < 1) goto LAB_10293f1c4;
LAB_10293f210:
      uVar6 = 0;
      goto LAB_10293f238;
    }
LAB_10293f1c4:
    lVar3 = lVar1;
    func_0x000107c4e4d8();
    func_0x000107c61180();
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar4 = lVar3;
      lVar2 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000107c5fb5c(lVar4,lVar2);
      func_0x000107c6142c(lVar2);
      if (0 < lVar4) goto LAB_10293f210;
    }
  }
  FUN_10293abd0();
  func_0x000107c4f034();
  func_0x000107c61170(lVar2);
  uVar6 = 1;
LAB_10293f238:
  func_0x000107c61170(lVar1);
  return uVar6;
}



/* Entry: 10293f25c; end: 10293f31f;  */

void FUN_10293f25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar2 = 0;
  FUN_102948bc0();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
  uVar5 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293f320,uVar4,uVar5);
  return;
}



/* Entry: 10293f320; end: 10293f467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293f320(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar5 + 0x10,lVar3,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x98) = lVar5;
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar1 = lVar5;
    func_0x000107c31808();
    *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
    func_0x000102942994();
    lVar2 = lVar1;
    func_0x00010293ae9c();
    uVar7 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c5fadc(lVar1,lVar3);
    func_0x000107c59c6c(uVar7);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(lVar2);
    uVar7 = *(undefined8 *)(lVar5 + _DAT_112ece2e8);
    func_0x000107c6157c(uVar7);
    FUN_102939d88();
    func_0x000107c61574(uVar7);
    func_0x000107c6142c();
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0xa8) = lVar3;
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10293f468,uVar6,uVar4);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010293f464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293f468; end: 10293f5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293f468(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  long *plVar14;
  
  func_0x000100083b20(unaff_x22 + 0x28);
  lVar13 = *(long *)(unaff_x22 + 0x28);
  lVar8 = lVar13;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  lVar13 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar13 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar13;
    func_0x000107c42ddc();
    func_0x000107c615e8(lVar13);
  }
  lVar12 = *(long *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar6 = &UNK_11056f5d8;
  func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,lVar12);
  puVar7 = &UNK_11056fc40;
  func_0x000107c613fc(&UNK_11056fc40,0x28,7);
  *(undefined **)(unaff_x22 + 0xc0) = puVar7;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = uVar1;
  *(undefined8 *)(puVar7 + 0x20) = uVar3;
  plVar14 = (long *)0x230;
  func_0x000107c61434(uVar3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_10293f5c4;
  lVar13 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  lVar11 = *(long *)(unaff_x22 + 0x48);
  plVar14[0x1a] = (long)puVar7;
  plVar14[0x19] = (long)&UNK_10daf3ef0;
  plVar14[0x18] = (long)&PTR_DAT_11056f5f0;
  plVar14[0x16] = lVar8;
  plVar14[0x17] = lVar12;
  *(undefined1 *)(plVar14 + 0x45) = 0;
  plVar14[0x14] = lVar5;
  plVar14[0x15] = lVar13;
  plVar14[0x12] = lVar11;
  plVar14[0x13] = lVar2;
  plVar14[0x11] = lVar4;
  lVar8 = 0;
  FUN_10294b0fc();
  plVar14[0x1b] = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x1c] = uVar9;
  lVar8 = 0;
  func_0x000107c5f93c();
  plVar14[0x1d] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar14[0x1e] = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar10 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x1f] = uVar10;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x20] = uVar9;
  lVar8 = 0;
  func_0x000107c5f890();
  plVar14[0x21] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar14[0x22] = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar10 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x23] = uVar10;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x24] = uVar9;
  lVar8 = 0;
  func_0x000107c5f950();
  plVar14[0x25] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar14[0x26] = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar10 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x27] = uVar10;
  uVar10 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x28] = uVar10;
  uVar10 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x29] = uVar10;
  uVar10 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x2a] = uVar10;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x2b] = uVar9;
  lVar8 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x2c] = uVar9;
  lVar8 = 0;
  func_0x000107c5eec8();
  plVar14[0x2d] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar14[0x2e] = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x2f] = uVar9;
  lVar8 = 0x112ece4d8;
  func_0x0001000285a8(0x112ece4d8,&UNK_10daf4018);
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x30] = uVar9;
  lVar8 = 0;
  func_0x000107c5f970();
  plVar14[0x31] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar14[0x32] = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar10 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x33] = uVar10;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar14[0x34] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1029447b8,0,0);
  return;
}



/* Entry: 10293f5c4; end: 10293f60f;  */

void FUN_10293f5c4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10293f610,*(undefined8 *)(lVar2 + 0xb0),*(undefined8 *)(lVar2 + 0xb8));
  return;
}



/* Entry: 10293f610; end: 10293f6f7;  */

void FUN_10293f610(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10293f648,*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 10293f6f8; end: 10293f747;  */

void FUN_10293f6f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(uVar2);
  FUN_10294248c(uVar1);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010293f744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293f748; end: 10293f7a3;  */

/* WARNING: Possible PIC construction at 0x00010293f778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010293f77c) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10293f748(long param_1,undefined8 param_2)

{
  func_0x00010293ae9c();
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x000107c4ff34(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    func_0x000107c41864(*(long *)(param_1 + 0x28),param_2,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10293f7a4; end: 10293f88b;  */

void FUN_10293f7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  lVar2 = 0;
  func_0x000107c5f918();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  lVar2 = 0;
  FUN_102948bc0();
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  uVar5 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293f88c,uVar4,uVar5);
  return;
}



/* Entry: 10293f88c; end: 10293fd43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293f88c(double param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  dVar16 = *(double *)(unaff_x22 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c31808();
  *(double *)(unaff_x22 + 0xa0) = param_1;
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar9 = *(long *)(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(lVar9 + _DAT_112fef5b8);
  uVar1 = ((undefined8 *)(lVar9 + _DAT_112fef5b8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c61170(lVar9);
  FUN_10293ad50();
  func_0x000100083b20(unaff_x22 + 0x18);
  lVar10 = *(long *)(unaff_x22 + 0x18);
  uVar14 = *(undefined8 *)(lVar10 + _DAT_112fef5d8);
  uVar12 = uVar14;
  func_0x000107c61174(uVar14);
  func_0x000107c61170(lVar10);
  FUN_102942f84(uVar13,uVar7,uVar1,0xef,uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61574(lVar9);
  func_0x0001029424c8(uVar13,uVar3);
  func_0x000107c614c4(uVar3,uVar11);
  iVar2 = (int)uVar3;
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x80),
                 *(undefined8 *)(unaff_x22 + 0x60));
      func_0x000100083b20(unaff_x22 + 0x20);
      lVar10 = *(long *)(unaff_x22 + 0x20);
      lVar9 = lVar10;
      func_0x000107c42e5c();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      lVar10 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar10 != 0) {
        lVar9 = lVar10;
        func_0x000107c42dc0();
        func_0x000107c615e8(lVar10);
        if (0 < lVar9) {
          uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
          uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
          FUN_1029409f8();
          func_0x000100083b20(unaff_x22 + 0x28);
          lVar9 = *(long *)(unaff_x22 + 0x28);
          uVar12 = *(undefined8 *)(lVar9 + _DAT_113041e48);
          func_0x000107c615f0(uVar12);
          func_0x000107c61170(lVar9);
          func_0x000107c5fadc(uVar7,uVar1);
          func_0x000107c6142c(uVar1);
          func_0x000107c5fadc(uVar11,uVar3);
          uVar3 = uVar11;
          func_0x000107c5f8f4();
          *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
          puVar5 = PTR___ss6UInt64VN_11034f048;
          puVar8 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
          func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                              PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
          func_0x000107c506b8(uVar12);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar7);
          func_0x000107c615e8(uVar12);
          dVar16 = *(double *)(unaff_x22 + 0xa0);
          lVar9 = *(long *)(unaff_x22 + 0x68);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
          dVar15 = *(double *)(unaff_x22 + 0x50);
          func_0x000103b68350(0xd00000000000001a,0x800000010f0cd8f0);
          func_0x000103b68540(dVar16 - dVar15,0x6c6c617265766f,0xe700000000000000);
          (**(code **)(lVar9 + 8))(uVar11,uVar7);
          goto LAB_10293fcbc;
        }
      }
      func_0x000107c6142c(uVar1);
      plVar4 = (long *)(ulong)*(uint *)(PTR___s8StoreKit11TransactionV6finishyyYaFTu_110347c38 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10293fe10;
                    /* WARNING: Could not recover jumptable at 0x00010bdb719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___s8StoreKit11TransactionV6finishyyYaF_110347c30)();
      return;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c6142c(uVar1);
    func_0x000107c61574(uVar7);
    func_0x00010294248c(uVar11);
    FUN_10293ee6c();
    uVar7 = 0x800000010f0cd910;
    uVar11 = 0xd000000000000011;
  }
  else {
    if (iVar2 == 2) {
      func_0x000107c6142c(uVar1);
      plVar4 = (long *)0x50;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa8) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10293fd44;
      lVar10 = *(long *)(unaff_x22 + 0x58);
      plVar4[5] = lVar10;
      lVar9 = 0;
      func_0x000107c5fcec();
      plVar4[6] = lVar9;
      func_0x000107c5fce8();
      plVar4[7] = lVar9;
      plVar6 = (long *)0xf0;
      func_0x000107c615b8();
      plVar4[8] = (long)plVar6;
      *plVar6 = (long)plVar4;
      plVar6[1] = (long)FUN_1029402f0;
      plVar6[0x10] = lVar10;
      lVar10 = 0;
      func_0x000107c5fcec();
      puVar5 = PTR___sScMMa_11034fc70;
      plVar6[0x11] = lVar10;
      lVar9 = lVar10;
      func_0x000107c5fce8();
      plVar6[0x12] = lVar9;
      lVar9 = 0x112d45220;
      FUN_1029420b8(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
      plVar6[0x13] = lVar9;
      func_0x000107c5fca8();
      plVar6[0x14] = lVar10;
      plVar6[0x15] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102940550,lVar10,lVar9);
      return;
    }
    if (iVar2 != 3) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
      func_0x000107c6142c(uVar1);
      func_0x000107c61574(uVar11);
      FUN_1029408b0();
      func_0x000103b6835c();
      goto LAB_10293fcbc;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c6142c(uVar1);
    func_0x000107c61574(uVar11);
    uVar11 = 0x6e61635f72657375;
    uVar7 = 0xee0064656c6c6563;
  }
  func_0x000103b68350(uVar11,uVar7);
  func_0x000103b68540(param_1 - dVar16,0x6c6c617265766f,0xe700000000000000);
LAB_10293fcbc:
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010293fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293fd44; end: 10293fd87;  */

void FUN_10293fd44(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10293fd88,*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 10293fd88; end: 10293fe0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293fd88(void)

{
  undefined8 uVar1;
  long unaff_x22;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(unaff_x22 + 0xa0);
  dVar3 = *(double *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000103b68300();
  func_0x000103b68534(dVar2 - dVar3,0x6c6c617265766f,0xe700000000000000);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010293fe0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293fe10; end: 10293feaf;  */

void FUN_10293fe10(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xb0));
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(lVar4 + 0xb8) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = 0x10293fe6c;
  lVar5 = *(long *)(lVar4 + 0x58);
  plVar2[5] = lVar5;
  lVar4 = 0;
  func_0x000107c5fcec();
  plVar2[6] = lVar4;
  func_0x000107c5fce8();
  plVar2[7] = lVar4;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar2[8] = (long)plVar3;
  *plVar3 = (long)plVar2;
  plVar3[1] = (long)FUN_1029402f0;
  plVar3[0x10] = lVar5;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar3[0x11] = lVar5;
  lVar4 = lVar5;
  func_0x000107c5fce8();
  plVar3[0x12] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar3[0x13] = lVar4;
  func_0x000107c5fca8();
  plVar3[0x14] = lVar5;
  plVar3[0x15] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102940550,lVar5,lVar4);
  return;
}



/* Entry: 10293feb0; end: 10293ff6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293feb0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  double dVar4;
  double dVar5;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  dVar4 = *(double *)(unaff_x22 + 0xa0);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  dVar5 = *(double *)(unaff_x22 + 0x50);
  func_0x000103b68350(0xd00000000000001a,0x800000010f0cd8f0);
  func_0x000103b68540(dVar4 - dVar5,0x6c6c617265766f,0xe700000000000000);
  (**(code **)(lVar1 + 8))(uVar3,uVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010293ff68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293ff6c; end: 1029400db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293ff6c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_58;
  
  uVar2 = param_1;
  FUN_10293ad50();
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_112fef5b8);
  uVar6 = ((undefined8 *)(lStack_58 + _DAT_112fef5b8))[1];
  func_0x000107c61434(uVar6);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  uVar7 = *(undefined8 *)(lStack_58 + _DAT_112fef5d8);
  uVar3 = uVar7;
  func_0x000107c61174(uVar7);
  func_0x000107c61170(lStack_58);
  FUN_102942e58(param_1,uVar5,uVar6,0xef,uVar7);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar6);
  func_0x000107c61170(uVar3);
  if ((param_1 & 1) == 0) {
    FUN_10293ee6c();
  }
  else {
    puVar4 = &UNK_11056f5d8;
    func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar5 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar6 = 0xcb;
    func_0x0001001ca524(0xcb,0,0x60,4,0,0,&UNK_10daf3ec0,puVar4,uVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 1029400dc; end: 10294016b;  */

void FUN_1029400dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294016c,uVar2,uVar3);
  return;
}



/* Entry: 10294016c; end: 102940203;  */

void FUN_10294016c(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar5;
  if (lVar5 != 0) {
    plVar2 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102940204;
    plVar2[5] = lVar5;
    lVar3 = 0;
    func_0x000107c5fcec();
    plVar2[6] = lVar3;
    func_0x000107c5fce8();
    plVar2[7] = lVar3;
    plVar4 = (long *)0xf0;
    func_0x000107c615b8();
    plVar2[8] = (long)plVar4;
    *plVar4 = (long)plVar2;
    plVar4[1] = (long)FUN_1029402f0;
    plVar4[0x10] = lVar5;
    lVar3 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    plVar4[0x11] = lVar3;
    lVar5 = lVar3;
    func_0x000107c5fce8();
    plVar4[0x12] = lVar5;
    lVar5 = 0x112d45220;
    FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    plVar4[0x13] = lVar5;
    func_0x000107c5fca8();
    plVar4[0x14] = lVar3;
    plVar4[0x15] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102940550,lVar3,lVar5);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102940200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102940204; end: 10294024f;  */

void FUN_102940204(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102940250,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48));
  return;
}



/* Entry: 102940250; end: 102940287;  */

void FUN_102940250(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102940284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102940288; end: 1029402ef;  */

void FUN_102940288(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x28) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1029402f0;
  plVar3[0x10] = unaff_x20;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar3[0x11] = lVar4;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar3[0x12] = lVar5;
  lVar5 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar3[0x13] = lVar5;
  func_0x000107c5fca8();
  plVar3[0x14] = lVar4;
  plVar3[0x15] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102940550,lVar4,lVar5);
  return;
}



/* Entry: 1029402f0; end: 102940373;  */

void FUN_1029402f0(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined1 *)(lVar2 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  uVar1 = 0x112d45220;
  FUN_1029420b8(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102940374,uVar3,uVar1);
  return;
}



/* Entry: 102940374; end: 1029404b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102940374(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  puVar1 = &DAT_112ece2d8;
  func_0x00010293adf4(&DAT_112ece2d8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *(undefined **)(unaff_x22 + 0x10) = puVar2;
  func_0x0001007d6d78();
  func_0x000107c61574(puVar1);
  func_0x000107c61170(puVar2);
  puVar1 = &DAT_112ece2c8;
  func_0x00010293adf4(&DAT_112ece2c8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *(undefined8 *)(unaff_x22 + 0x18) = puVar2;
  func_0x0001007d6d78((undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c61574(puVar1);
  func_0x000107c61170();
  func_0x000100083b20(unaff_x22 + 0x20);
  puVar3 = *(ulong **)(unaff_x22 + 0x20);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x90))();
  func_0x000107c61170(puVar3);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c61150(puVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_fanPassSubscriptionScopeDidSubsc_1125c5c80);
    if (((ulong)puVar1 & 1) != 0) {
      func_0x000107c42df0(puVar2);
    }
    func_0x000107c615e8(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001029404b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029404b8; end: 10294054f;  */

void FUN_1029404b8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102940550,uVar2,uVar3);
  return;
}



/* Entry: 102940550; end: 102940697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102940550(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(lVar2 + _DAT_11307edc0);
  lVar4 = lVar5;
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  if (lVar5 != 0) {
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb0) = lVar2;
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      func_0x000100083b20(unaff_x22 + 0x50);
      lVar4 = *(long *)(unaff_x22 + 0x50);
      puVar1 = (undefined8 *)(lVar4 + _DAT_112fef5b8);
      *(undefined8 *)(unaff_x22 + 0xb8) = *puVar1;
      *(undefined8 *)(unaff_x22 + 0xc0) = puVar1[1];
      func_0x000107c61434();
      func_0x000107c61170();
      func_0x000107c5fce8();
      *(long *)(unaff_x22 + 200) = lVar4;
      if (lVar4 == 0) {
        lVar4 = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
        func_0x000107c614f0();
        func_0x000107c5fca8();
      }
      *(long *)(unaff_x22 + 0xd0) = lVar4;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102940698,lVar4);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000102940668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102940698; end: 1029407f3;  */

void FUN_102940698(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 *puVar7;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xe0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1029407f4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  func_0x000107c5fadc(uVar2,uVar3);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0cd8d0);
  uVar4 = 0;
  FUN_1029421e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar5 = &UNK_11056fbc8;
  func_0x000107c613fc(&UNK_11056fbc8,0x18,7);
  puVar7 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar5 + 0x10) = lVar1;
  *(code **)(unaff_x22 + 0x70) = FUN_102942308;
  *(undefined **)(unaff_x22 + 0x78) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_1029415b4;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11056fbe0;
  func_0x000107c60bc4(puVar7);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c432d0(uVar6);
  func_0x000107c60bd0(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1029407f4; end: 1029408af;  */

void FUN_1029407f4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102940830,*(undefined8 *)(*unaff_x22 + 0xd0),*(undefined8 *)(*unaff_x22 + 0xd8));
  return;
}



/* Entry: 1029408b0; end: 1029409f7;  */

void FUN_1029408b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000102942a60();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c40930();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  pcVar3 = "showSubscriptionPendingNotification()";
  func_0x0001000c10c0("showSubscriptionPendingNotification()");
  func_0x000107c61180();
  puVar2 = &UNK_11056f5d8;
  func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar4 = &UNK_11056fc68;
  func_0x000107c613fc(&UNK_11056fc68,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined **)(puVar4 + 0x18) = puVar1;
  uStack_40 = 0x10294261c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11056fc80;
  puStack_38 = puVar4;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1029409f8; end: 102940c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029409f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  puVar2 = PTR_PTR_1126afde0;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000102942b28();
  lVar4 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  func_0x000100083b20(&puStack_80);
  uVar8 = *(undefined8 *)(puStack_80 + _DAT_112fef5c0);
  uVar1 = *(undefined8 *)((long)(puStack_80 + _DAT_112fef5c0) + 8);
  func_0x000107c61434(uVar1);
  func_0x000107c61170();
  *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined **)(lVar4 + 0x40) = puStack_80;
  *(undefined8 *)(lVar4 + 0x20) = uVar8;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  uVar8 = param_2;
  func_0x000107c5fb00(puVar3,param_2,lVar4);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(puVar3,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c409d8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  pcVar5 = "showSubscriptionActivationFailureNotification()";
  func_0x0001000c10c0("showSubscriptionActivationFailureNotification()");
  func_0x000107c61180();
  puVar3 = &UNK_11056f5d8;
  func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar6 = &UNK_11056fcb8;
  func_0x000107c613fc(&UNK_11056fcb8,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(undefined **)(puVar6 + 0x18) = puVar2;
  uStack_60 = 0x102942620;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11056fcd0;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 102940c04; end: 102940cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102940c04(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000100083b20(&lStack_50);
    func_0x000107c61170(param_1);
    lVar1 = lStack_50;
    func_0x000107c4d80c();
    func_0x000107c61180();
    func_0x000107c61170(lStack_50);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5c2e0(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 102940cc8; end: 102940d57;  */

void FUN_102940cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102940d58,uVar2,uVar3);
  return;
}



/* Entry: 102940d58; end: 102940ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102940d58(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar5 = *(long *)(unaff_x22 + 0xd8);
  lVar6 = unaff_x22 + 0x90;
  func_0x000107c61428(lVar5 + 0x10,lVar6,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar3 = lVar5;
    func_0x000102942bf4();
    lVar4 = lVar3;
    func_0x00010293ae9c();
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    func_0x000107c5fadc(lVar3,lVar6);
    func_0x000107c59c6c(uVar8);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(lVar4);
    uVar8 = *(undefined8 *)(lVar5 + _DAT_112ece2e8);
    func_0x000107c6157c(uVar8);
    FUN_102939d88();
    func_0x000107c61574(uVar8);
    func_0x000107c6142c(lVar6);
    func_0x000107c61170(lVar5);
  }
  lVar6 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0xa8,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0xd8);
    func_0x000100083b20(unaff_x22 + 0x50);
    func_0x000107c61170(lVar6);
    lVar6 = *(long *)(unaff_x22 + 0x50);
    uVar8 = *(undefined8 *)(lVar6 + _DAT_113041e48);
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar8;
    func_0x000107c615f0(uVar8);
    func_0x000107c61170(lVar6);
    func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0xc0,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 == 0) {
      uVar7 = 0;
    }
    else {
      func_0x000100083b20(unaff_x22 + 0x50);
      func_0x000107c61170(lVar5);
      lVar6 = *(long *)(unaff_x22 + 0x50);
      puVar1 = (undefined8 *)(lVar6 + _DAT_112fef5b8);
      uVar7 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434(uVar2);
      func_0x000107c61170(lVar6);
      func_0x000107c5fadc(uVar7,uVar2);
      func_0x000107c6142c(uVar2);
    }
    *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102940ff8;
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar6,0);
    uVar7 = 0x112d4e498;
    func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
    *(long *)(unaff_x22 + 0x70) = lVar6;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x1026a3c5c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11056fb90;
    func_0x000107c4d030(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  lVar6 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x50,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    FUN_10293f748();
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000102940f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102940ff8; end: 102941033;  */

void FUN_102940ff8(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102941034,*(undefined8 *)(*unaff_x22 + 0xe8),*(undefined8 *)(*unaff_x22 + 0xf0));
  return;
}



/* Entry: 102941034; end: 1029410ab;  */

void FUN_102941034(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
  lVar3 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x50,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_10293f748();
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001029410a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029410ac; end: 10294114b;  */

void FUN_1029410ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294114c,uVar2,uVar3);
  return;
}



/* Entry: 10294114c; end: 102941213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294114c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x90,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x100) = lVar2;
  if (lVar2 != 0) {
    func_0x000100083b20(unaff_x22 + 0x50);
    lVar2 = *(long *)(unaff_x22 + 0x50);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112fef5b8);
    *(undefined8 *)(unaff_x22 + 0x108) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0x110) = puVar1[1];
    func_0x000107c61434();
    func_0x000107c61170(lVar2);
    func_0x000107c31808();
    *(undefined8 *)(unaff_x22 + 0x118) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102941214,0,0);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x000102941210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(4);
  return;
}



/* Entry: 102941214; end: 10294127b;  */

void FUN_102941214(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x120) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294127c,uVar2,uVar1);
  return;
}



/* Entry: 10294127c; end: 1029412ff;  */

void FUN_10294127c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x120);
  func_0x000107c61574();
  func_0x00010293ae9c();
  lVar2 = lVar1;
  func_0x000102942bf4();
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(uVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102941300,*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xf8));
  return;
}



/* Entry: 102941300; end: 10294145b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102941300(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar8 = *(long *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(lVar8 + _DAT_113041e48);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar7;
  func_0x000107c615f0(uVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c5fadc(uVar4,uVar1);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar4;
  func_0x000107c6142c(uVar1);
  func_0x000107c5fadc(uVar5,uVar2);
  *(undefined8 *)(unaff_x22 + 0x138) = uVar5;
  func_0x000107c5fadc(uVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar6;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10294145c;
  lVar8 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar8,0);
  uVar4 = 0x112dc41b8;
  func_0x0001000285a8(0x112dc41b8,&UNK_10d981840);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(long *)(unaff_x22 + 0x70) = lVar8;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1017167a0;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11056fcf8;
  func_0x000107c5c338(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10294145c; end: 102941497;  */

void FUN_10294145c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102941498,*(undefined8 *)(*unaff_x22 + 0xf0),*(undefined8 *)(*unaff_x22 + 0xf8));
  return;
}



/* Entry: 102941498; end: 10294156b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102941498(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  double dVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  if ((int)uVar4 == 0) {
    dVar7 = *(double *)(unaff_x22 + 0x118);
    lVar6 = *(long *)(unaff_x22 + 0x100);
    func_0x000107c31808();
    uVar5 = *(undefined8 *)(lVar6 + _DAT_112ece2b8);
    func_0x000107c6157c(uVar5);
    func_0x000103b68534(param_1 - dVar7,0xd000000000000014,0x800000010f0cd990);
    func_0x000107c61170(lVar6);
    func_0x000107c61574(uVar5);
  }
  else {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
  }
                    /* WARNING: Could not recover jumptable at 0x000102941568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 10294156c; end: 1029415b3;  */

void FUN_10294156c(long param_1,long param_2,long param_3)

{
  bool bVar1;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x000107c4d8c0();
    bVar1 = 0 < param_1;
  }
  else {
    bVar1 = false;
  }
  *(bool *)*(undefined8 *)(*(long *)(param_3 + 0x40) + 0x28) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 1029415b4; end: 10294162b;  */

/* WARNING: Possible PIC construction at 0x000102941610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102941614) */

void FUN_1029415b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10294162c; end: 102941653; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController initWithCoder:] */

void FUN_10294162c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102941c84();
  return;
}



/* Entry: 102941654; end: 102941677;  */

/* WARNING: Possible PIC construction at 0x00010293b34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010293b350) */

void FUN_102941654(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11056f5d8;
  func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_11056f678;
  func_0x000107c613fc(&UNK_11056f678,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c615f0(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf3e00,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102941678; end: 1029416d7; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController initWithNibName:bundle:] */

void FUN_102941678(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionScopeImplementation.FanPassSubscriptionViewController",
                      0x48,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029416a4);
  (*pcVar1)();
}



/* Entry: 1029416d8; end: 102941937; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029417e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102941874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029417e8) */
/* WARNING: Removing unreachable block (ram,0x000102941878) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029416d8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece350));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece318));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece370));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece340));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece328));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece320));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece330));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece360));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece368));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece378));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece348));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece310));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece358));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece380));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece338));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ece2b0));
  return;
}



/* Entry: 102941938; end: 10294193f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102941938(void)

{
  long lVar1;
  long unaff_x20;
  ulong *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000100083b20(&puStack_40);
    func_0x000107c61170();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_40) + 0x90))();
    func_0x000107c61170(puStack_40);
    if (lVar1 != 0) {
      func_0x000107c41b28(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102941940; end: 102941a0b; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController cardTransitionWillBeginWithView:] */

void FUN_102941940(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_11056f5d8;
  func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_40 = 0x10294265c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11056f640;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102941a0c; end: 102941b03; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102941a0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + _DAT_112ece2f8);
  if (lVar3 != 0) {
    FUN_1029421e4(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar3);
    uVar1 = param_5;
    func_0x000107c60118(param_5,lVar3);
    if ((uVar1 & 1) != 0) {
      lVar2 = lVar3;
      func_0x000107c3f42c(param_1,param_2,lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_3);
      return (uint)lVar2 ^ 1;
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
  }
  return 1;
}



/* Entry: 102941b04; end: 102941b07; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController cardToExpandTransition] */

void FUN_102941b04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102941b08; end: 102941b0b; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController cardTransitionEndedWithView:transitionType:] */

void FUN_102941b08(void)

{
  return;
}



/* Entry: 102941b0c; end: 102941b4f;  */

void FUN_102941b0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102941b50; end: 102941c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102941b50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_58;
  
  uVar4 = param_1;
  FUN_10293ad50();
  func_0x000100083b20(&lStack_58);
  lVar3 = lStack_58;
  uVar1 = *(undefined8 *)(lStack_58 + _DAT_112fef5b8);
  uVar2 = ((undefined8 *)(lStack_58 + _DAT_112fef5b8))[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_112fef5d8);
  uVar5 = uVar6;
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lStack_58);
  FUN_102942cfc(7,uVar1,uVar2,0xef,uVar6,param_1,param_2);
  func_0x000107c61574(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 102941c40; end: 102941c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102941c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_58;
  
  uVar4 = param_1;
  FUN_10293ad50();
  func_0x000100083b20(&lStack_58);
  lVar3 = lStack_58;
  uVar1 = *(undefined8 *)(lStack_58 + _DAT_112fef5b8);
  uVar2 = ((undefined8 *)(lStack_58 + _DAT_112fef5b8))[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_112fef5d8);
  uVar5 = uVar6;
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lStack_58);
  FUN_102942cfc(7,uVar1,uVar2,0xef,uVar6,param_1,param_2);
  func_0x000107c61574(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 102941c64; end: 102941c83;  */

void FUN_102941c64(void)

{
  func_0x000107c61168(&PTR_PTR_112871be0);
  return;
}



/* Entry: 102941c84; end: 102941d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102941c84(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ece2b0) = 0;
  lVar1 = _DAT_112ece2b8;
  uVar3 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece300) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ece308) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FanPassSubscriptionScopeImplementation/FanPassSubscriptionViewController.swift"
                      ,0x4e,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102941d94);
  (*pcVar2)();
}



/* Entry: 102941d94; end: 102941df7;  */

void FUN_102941d94(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102942634;
  plVar4[6] = lVar3;
  plVar4[7] = lVar2;
  plVar4[5] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[8] = lVar3;
  lVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[9] = lVar2;
  plVar4[10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293b3fc,lVar2,lVar3);
  return;
}



/* Entry: 102941df8; end: 102941e17;  */

void FUN_102941df8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10293c8c4(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102941e18; end: 102941eaf;  */

void FUN_102941e18(void)

{
  FUN_10293d394();
  return;
}



/* Entry: 102941eb0; end: 102941eb7;  */

void FUN_102941eb0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10293d534();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102941eb8; end: 102941f0b;  */

void FUN_102941eb8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102941f0c;
  plVar4[0x16] = unaff_x20;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x17] = lVar3;
  lVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x18] = lVar2;
  plVar4[0x19] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293d704,lVar2,lVar3);
  return;
}



/* Entry: 102941f0c; end: 102941f8f;  */

void FUN_102941f0c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102941f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102941f90; end: 102941fff;  */

void FUN_102941f90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10294263c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102942000; end: 102942047;  */

void FUN_102942000(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar6 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102942640;
  plVar6[5] = unaff_x20;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[6] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar6[7] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[8] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[9] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar6[10] = lVar3;
  uVar5 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293e908,lVar4,uVar5);
  return;
}



/* Entry: 102942048; end: 1029420b7;  */

void FUN_102942048(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102942644;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1029420b8; end: 1029420f7;  */

void FUN_1029420b8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1029420f8; end: 10294213f;  */

void FUN_1029420f8(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar6 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102942648;
  plVar6[0xd] = unaff_x20;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xe] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar6[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[0x10] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x11] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar6[0x12] = lVar3;
  uVar5 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293e490,lVar4,uVar5);
  return;
}



/* Entry: 102942140; end: 1029421af;  */

void FUN_102942140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10294264c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1029421b0; end: 1029421bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029421b0(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar2 = &puStack_d0;
  ppuVar6 = &puStack_d0;
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar9 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar9 != 0) {
    lVar8 = *(long *)(lVar9 + _DAT_112ece300);
    if (lVar8 != 0) {
      func_0x000107c61174(lVar8);
      func_0x000107c61170(lVar9);
      func_0x000107c4218c(lVar8);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
  lVar9 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar9 != 0) {
    func_0x000100083b20(&puStack_d0);
    func_0x000107c61170(lVar9);
    lVar9 = *(long *)(puStack_d0 + _DAT_112fef5b0);
    func_0x000107c615f0(lVar9);
    func_0x000107c61170(puStack_d0);
    if (lVar9 != 0) {
      puVar3 = &UNK_11056f5d8;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
      lVar4 = lVar4 + 0x10;
      func_0x000107c61618(lVar4);
      func_0x000107c61614(puVar3 + 0x10,lVar4);
      func_0x000107c61170(lVar4);
      puVar5 = &UNK_11056f998;
      func_0x000107c613fc(&UNK_11056f998,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar3;
      *(undefined8 *)(puVar5 + 0x18) = uVar1;
      *(undefined8 *)(puVar5 + 0x20) = uVar7;
      pcStack_b0 = FUN_1029421bc;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_1000b0c7c;
      puStack_b8 = &UNK_11056f9b0;
      puStack_a8 = puVar5;
      func_0x000107c60bc4(&puStack_d0);
      puVar3 = puStack_a8;
      func_0x000107c61434(uVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c41864(lVar9);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar9);
      return;
    }
  }
  func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
  lVar9 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar9 != 0) {
    puVar3 = &UNK_11056f5d8;
    func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
    func_0x000107c61428(lVar4 + 0x10,auStack_a0,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618(lVar4);
    func_0x000107c61614(puVar3 + 0x10,lVar4);
    func_0x000107c61170(lVar4);
    puVar5 = &UNK_11056f948;
    func_0x000107c613fc(&UNK_11056f948,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    *(undefined8 *)(puVar5 + 0x20) = uVar7;
    pcStack_b0 = (code *)0x102942660;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_11056f960;
    puStack_a8 = puVar5;
    func_0x000107c60bc4(&puStack_d0);
    puVar3 = puStack_a8;
    func_0x000107c61434(uVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c420a8(lVar9);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar9);
  }
  return;
}



/* Entry: 1029421bc; end: 1029421d7;  */

void FUN_1029421bc(void)

{
  long unaff_x20;
  
  FUN_10293ed94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1029421d8; end: 1029421e3;  */

void FUN_1029421d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = &DAT_112ece2d0;
    func_0x00010293adf4(&DAT_112ece2d0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_50 = puVar2;
    func_0x0001007d6d78(&puStack_50);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1029421e4; end: 102942223;  */

void FUN_1029421e4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102942224; end: 10294222f;  */

void FUN_102942224(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10293dd58(bVar1 & 1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102942230; end: 102942247;  */

void FUN_102942230(void)

{
  long unaff_x20;
  
  FUN_102940c04(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


