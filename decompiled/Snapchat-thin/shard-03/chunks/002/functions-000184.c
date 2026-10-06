/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026ad4f4; end: 1026ad4fb;  */

void FUN_1026ad4f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x48);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(lVar1);
    if (lVar3 != 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x48);
        *(undefined8 *)(lVar1 + 0x48) = 0;
        func_0x000107c61574();
        func_0x000107c615e8(uVar2);
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar1 != 0) {
        FUN_1026ac7dc(lVar3,0);
        func_0x000107c61574(lVar1);
      }
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1026ad4fc; end: 1026ad62b;  */

void FUN_1026ad4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105357c8;
  func_0x000107c613fc(&UNK_1105357c8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1026ad62c,puVar1);
  return;
}



/* Entry: 1026ad62c; end: 1026ad637;  */

/* WARNING: Possible PIC construction at 0x0001026ad600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ad610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ad604) */
/* WARNING: Removing unreachable block (ram,0x0001026ad614) */

void FUN_1026ad62c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  param_1[3] = &UNK_110535878;
  param_1[4] = &PTR_DAT_1105357e0;
  puVar5 = &UNK_1105358a8;
  func_0x000107c613fc(&UNK_1105358a8,0x30,7);
  *param_1 = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  *(undefined8 *)(puVar5 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1026ad638; end: 1026ad7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ad638(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  uVar4 = 0x112e4cce8;
  func_0x0001000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar4);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000100083b20(&lStack_58);
  lVar6 = lStack_58;
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_58);
  lVar5 = 0;
  FUN_102699420();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112eb3e10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(lVar6 + _DAT_112eb3e18) = puVar3;
  *(long *)(lVar6 + _DAT_112eb3e20) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112eb3e28) = uVar4;
  *(long *)(lVar6 + _DAT_112eb3e30) = lStack_58;
  plVar7 = &lStack_68;
  lStack_68 = lVar6;
  lStack_60 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  param_1[1] = (long)&PTR_DAT_1105348c0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026ad7a8; end: 1026ad7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ad7a8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x20;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  lVar2 = lStack_58;
  uVar4 = 0x112e4cce8;
  func_0x0001000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar4);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000100083b20(&lStack_58);
  lVar6 = lStack_58;
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_58);
  lVar5 = 0;
  FUN_102699420();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112eb3e10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(lVar6 + _DAT_112eb3e18) = puVar3;
  *(long *)(lVar6 + _DAT_112eb3e20) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112eb3e28) = uVar4;
  *(long *)(lVar6 + _DAT_112eb3e30) = lStack_58;
  plVar7 = &lStack_68;
  lStack_68 = lVar6;
  lStack_60 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  param_1[1] = (long)&PTR_DAT_1105348c0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026ad7c4; end: 1026ad827;  */

long FUN_1026ad7c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026ad828; end: 1026ad907;  */

undefined8 * FUN_1026ad828(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1026ad908; end: 1026ad95b;  */

undefined8 * FUN_1026ad908(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026ad95c; end: 1026ad9f3;  */

int FUN_1026ad95c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026ad9f4; end: 1026ada2f;  */

void FUN_1026ad9f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026ada30; end: 1026adb6f;  */

void FUN_1026ada30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105358d8;
  func_0x000107c613fc(&UNK_1105358d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1026adb70,puVar1);
  return;
}



/* Entry: 1026adb70; end: 1026adb7b;  */

void FUN_1026adb70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_48,uVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  param_1[3] = &UNK_110535988;
  param_1[4] = &PTR_DAT_1105358f0;
  puVar4 = &UNK_1105359b8;
  func_0x000107c613fc(&UNK_1105359b8,0x30,7);
  *param_1 = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uStack_48;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 1026adb7c; end: 1026add07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026adb7c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lStack_80;
  long alStack_78 [5];
  
  func_0x000100083b20(alStack_78);
  lVar2 = alStack_78[0];
  lVar1 = *(long *)(alStack_78[0] + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    ppuVar4 = (undefined **)0x0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar5 = 0xff;
    param_1[2] = 0;
  }
  else {
    uVar3 = 0;
    func_0x000102699b30(0);
    func_0x000107c6157c(param_2);
    func_0x000100083b20(alStack_78);
    uVar6 = *(undefined8 *)(alStack_78[0] + _DAT_112eb9c18);
    func_0x000107c6157c(uVar6);
    func_0x000107c61170(alStack_78[0]);
    func_0x0001000d224c(alStack_78);
    func_0x000107c61574(uVar6);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    func_0x000107c61174(lVar2);
    func_0x000100083b20(&lStack_80);
    func_0x000107c61170(lVar2);
    uVar6 = *(undefined8 *)(lStack_80 + _DAT_112eb7d80);
    func_0x000107c61174(uVar6);
    func_0x000107c61170(lStack_80);
    FUN_102699d20(param_2,alStack_78,lVar2,uVar6,uVar3,lVar1);
    *param_1 = param_2;
    uVar5 = 1;
    ppuVar4 = &PTR_DAT_1105348f0;
  }
  param_1[1] = ppuVar4;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return;
}



/* Entry: 1026add08; end: 1026add23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026add08(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  long lStack_80;
  long alStack_78 [5];
  
  uVar4 = *unaff_x20;
  func_0x000100083b20(alStack_78,uVar4,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  lVar2 = alStack_78[0];
  lVar1 = *(long *)(alStack_78[0] + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    ppuVar5 = (undefined **)0x0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar6 = 0xff;
    param_1[2] = 0;
  }
  else {
    uVar3 = 0;
    func_0x000102699b30(0);
    func_0x000107c6157c(uVar4);
    func_0x000100083b20(alStack_78);
    uVar7 = *(undefined8 *)(alStack_78[0] + _DAT_112eb9c18);
    func_0x000107c6157c(uVar7);
    func_0x000107c61170(alStack_78[0]);
    func_0x0001000d224c(alStack_78);
    func_0x000107c61574(uVar7);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    func_0x000107c61174(lVar2);
    func_0x000100083b20(&lStack_80);
    func_0x000107c61170(lVar2);
    uVar7 = *(undefined8 *)(lStack_80 + _DAT_112eb7d80);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lStack_80);
    FUN_102699d20(uVar4,alStack_78,lVar2,uVar7,uVar3,lVar1);
    *param_1 = uVar4;
    uVar6 = 1;
    ppuVar5 = &PTR_DAT_1105348f0;
  }
  param_1[1] = ppuVar5;
  *(undefined1 *)(param_1 + 5) = uVar6;
  return;
}



/* Entry: 1026add24; end: 1026add87;  */

long FUN_1026add24(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026add88; end: 1026ade67;  */

undefined8 * FUN_1026add88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1026ade68; end: 1026adebb;  */

undefined8 * FUN_1026ade68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026adebc; end: 1026adf53;  */

int FUN_1026adebc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026adf54; end: 1026adf8f;  */

void FUN_1026adf54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026adf90; end: 1026ae0cf;  */

void FUN_1026adf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105359e8;
  func_0x000107c613fc(&UNK_1105359e8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1026ae0d0,puVar1);
  return;
}



/* Entry: 1026ae0d0; end: 1026ae0db;  */

void FUN_1026ae0d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_48,uVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  param_1[3] = &UNK_110535a98;
  param_1[4] = &PTR_DAT_110535a00;
  puVar4 = &UNK_110535ac8;
  func_0x000107c613fc(&UNK_110535ac8,0x30,7);
  *param_1 = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uStack_48;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 1026ae0dc; end: 1026ae243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ae0dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  uVar1 = 0x112ea7850;
  func_0x0001000285a8(0x112ea7850,&UNK_10dabb4b0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  uVar4 = 0;
  FUN_1026a1380(0);
  func_0x000107c61174();
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000107c61174(puVar3);
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_112eb7d80);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lStack_58);
  uVar1 = uVar5;
  func_0x000107c614f0(uVar5);
  uVar6 = param_2;
  FUN_1026a16b4(param_2,lVar2,puVar3,uVar5,uVar4,uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  *param_1 = uVar6;
  param_1[1] = &PTR_DAT_110534fc0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026ae244; end: 1026ae25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ae244(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  long lStack_58;
  
  uVar5 = *unaff_x20;
  func_0x000100083b20(&lStack_58,uVar5,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  lVar2 = lStack_58;
  uVar1 = 0x112ea7850;
  func_0x0001000285a8(0x112ea7850,&UNK_10dabb4b0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  uVar4 = 0;
  FUN_1026a1380(0);
  func_0x000107c61174();
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000107c61174(puVar3);
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_112eb7d80);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lStack_58);
  uVar1 = uVar6;
  func_0x000107c614f0(uVar6);
  uVar7 = uVar5;
  FUN_1026a16b4(uVar5,lVar2,puVar3,uVar6,uVar4,uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  *param_1 = uVar7;
  param_1[1] = &PTR_DAT_110534fc0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026ae260; end: 1026ae2c3;  */

long FUN_1026ae260(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026ae2c4; end: 1026ae3a3;  */

undefined8 * FUN_1026ae2c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1026ae3a4; end: 1026ae3f7;  */

undefined8 * FUN_1026ae3a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026ae3f8; end: 1026ae48f;  */

int FUN_1026ae3f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026ae490; end: 1026ae50f;  */

void FUN_1026ae490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110535af8;
  func_0x000107c613fc(&UNK_110535af8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026ae510,puVar1);
  return;
}



/* Entry: 1026ae510; end: 1026ae54b;  */

/* WARNING: Possible PIC construction at 0x0001026ae538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ae53c) */

void FUN_1026ae510(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_110535ba8;
  param_1[4] = &PTR_DAT_110535b10;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026ae54c; end: 1026ae62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ae54c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000100083b20(&lStack_38);
  uVar3 = *(undefined8 *)(lStack_38 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar4 = 0;
  FUN_102699f5c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb3f20);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112eb3f38) = 0;
  *(long *)(lVar5 + _DAT_112eb3f28) = lVar2;
  *(undefined8 *)(lVar5 + _DAT_112eb3f30) = uVar3;
  plVar6 = &lStack_48;
  lStack_48 = lVar5;
  lStack_40 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  param_1[1] = (long)&PTR_DAT_110534920;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026ae62c; end: 1026ae643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ae62c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x20;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*unaff_x20,unaff_x20[1]);
  lVar2 = lStack_38;
  func_0x000100083b20(&lStack_38);
  uVar3 = *(undefined8 *)(lStack_38 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar4 = 0;
  FUN_102699f5c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb3f20);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112eb3f38) = 0;
  *(long *)(lVar5 + _DAT_112eb3f28) = lVar2;
  *(undefined8 *)(lVar5 + _DAT_112eb3f30) = uVar3;
  plVar6 = &lStack_48;
  lStack_48 = lVar5;
  lStack_40 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  param_1[1] = (long)&PTR_DAT_110534920;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026ae644; end: 1026ae69f;  */

/* WARNING: Possible PIC construction at 0x0001026ae658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ae65c) */

void FUN_1026ae644(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026ae6a0; end: 1026ae6fb;  */

undefined8 * FUN_1026ae6a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026ae6fc; end: 1026ae737;  */

undefined8 * FUN_1026ae6fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026ae738; end: 1026ae7d3;  */

int FUN_1026ae738(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026ae7d4; end: 1026ae8b3;  */

void FUN_1026ae7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110535bd8;
  func_0x000107c613fc(&UNK_110535bd8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_1026ae984,puVar1);
  return;
}



/* Entry: 1026ae8b4; end: 1026ae983;  */

void FUN_1026ae8b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  param_1[3] = &UNK_110535c88;
  param_1[4] = &PTR_DAT_110535bf0;
  puVar1 = &UNK_110535cc8;
  func_0x000107c613fc(&UNK_110535cc8,0x48,7);
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x10) = uStack_58;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  return;
}



/* Entry: 1026ae984; end: 1026ae997;  */

void FUN_1026ae984(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000100083b20(&uStack_58);
  param_1[3] = &UNK_110535c88;
  param_1[4] = &PTR_DAT_110535bf0;
  puVar6 = &UNK_110535cc8;
  func_0x000107c613fc(&UNK_110535cc8,0x48,7);
  *param_1 = puVar6;
  *(undefined8 *)(puVar6 + 0x38) = uVar4;
  *(undefined8 *)(puVar6 + 0x40) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar5;
  *(undefined8 *)(puVar6 + 0x30) = uVar3;
  *(undefined8 *)(puVar6 + 0x10) = uStack_58;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  return;
}



/* Entry: 1026ae998; end: 1026aebb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ae998(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *unaff_x20;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  uVar4 = 0x112e4d1b8;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar5,uVar4);
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar5);
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x18);
  func_0x000107c61434(uVar2);
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar7 = lStack_68;
  func_0x000107c4c448();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar11 = lStack_68;
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lVar11);
  func_0x000100083b20(&lStack_68);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar10 = 0;
  FUN_10269a4e4();
  lVar11 = lVar10;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar11 + _DAT_112eb3f68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112eb3f70);
  *puVar1 = uVar4;
  puVar1[1] = uVar2;
  *(long *)(lVar11 + _DAT_112eb3f78) = lVar7;
  *(long *)(lVar11 + _DAT_112eb3f80) = lVar3;
  *(long *)(lVar11 + _DAT_112eb3f88) = lVar5;
  *(undefined **)(lVar11 + _DAT_112eb3f90) = puVar6;
  *(undefined8 *)(lVar11 + _DAT_112eb3f98) = uVar8;
  *(undefined8 *)(lVar11 + _DAT_112eb3fa0) = uVar9;
  plVar12 = &lStack_78;
  lStack_78 = lVar11;
  lStack_70 = lVar10;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  *param_1 = (long)plVar12;
  param_1[1] = (long)&PTR_DAT_110534950;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026aebb8; end: 1026aebcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026aebb8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *unaff_x20;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  uVar4 = 0x112e4d1b8;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar5,uVar4);
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar5);
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x18);
  func_0x000107c61434(uVar2);
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  lVar7 = lStack_68;
  func_0x000107c4c448();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar11 = lStack_68;
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lVar11);
  func_0x000100083b20(&lStack_68);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar10 = 0;
  FUN_10269a4e4();
  lVar11 = lVar10;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar11 + _DAT_112eb3f68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112eb3f70);
  *puVar1 = uVar4;
  puVar1[1] = uVar2;
  *(long *)(lVar11 + _DAT_112eb3f78) = lVar7;
  *(long *)(lVar11 + _DAT_112eb3f80) = lVar3;
  *(long *)(lVar11 + _DAT_112eb3f88) = lVar5;
  *(undefined **)(lVar11 + _DAT_112eb3f90) = puVar6;
  *(undefined8 *)(lVar11 + _DAT_112eb3f98) = uVar8;
  *(undefined8 *)(lVar11 + _DAT_112eb3fa0) = uVar9;
  plVar12 = &lStack_78;
  lStack_78 = lVar11;
  lStack_70 = lVar10;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  *param_1 = (long)plVar12;
  param_1[1] = (long)&PTR_DAT_110534950;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026aebcc; end: 1026aec47;  */

long FUN_1026aebcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026aec48; end: 1026aecd3;  */

undefined8 * FUN_1026aec48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  uVar6 = param_2[6];
  param_1[6] = uVar6;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  return param_1;
}



/* Entry: 1026aecd4; end: 1026aeda7;  */

undefined8 * FUN_1026aecd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026aeda8; end: 1026aee23;  */

undefined8 * FUN_1026aeda8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026aee24; end: 1026aeec7;  */

int FUN_1026aee24(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026aeec8; end: 1026aef1b;  */

void FUN_1026aeec8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026aef1c; end: 1026af0a3;  */

void FUN_1026aef1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110535cf8;
  func_0x000107c613fc(&UNK_110535cf8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1026af0a4,puVar1);
  return;
}



/* Entry: 1026af0a4; end: 1026af0b3;  */

void FUN_1026af0a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000100083b20(&uStack_58);
  param_1[3] = &UNK_110535da8;
  param_1[4] = &PTR_DAT_110535d10;
  puVar6 = &UNK_110535de0;
  func_0x000107c613fc(&UNK_110535de0,0x40,7);
  *param_1 = puVar6;
  *(undefined8 *)(puVar6 + 0x10) = uStack_58;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar5;
  *(undefined8 *)(puVar6 + 0x30) = uVar3;
  *(undefined8 *)(puVar6 + 0x38) = uVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 1026af0b4; end: 1026af2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026af0b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = *(long *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar3 = lStack_68;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      uVar4 = 0;
      FUN_1026a27cc();
      uVar9 = *unaff_x20;
      func_0x000107c6157c(uVar9);
      func_0x000100083b20(&lStack_68);
      lVar3 = lStack_68;
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
      func_0x000107c61174(uVar5);
      func_0x000107c61170(lVar3);
      uVar6 = uVar5;
      func_0x000107c5d984(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      uVar5 = uVar6;
      func_0x000107c5faec(uVar6);
      func_0x000107c61170(uVar6);
      lVar7 = lVar1;
      func_0x000107c614f0();
      func_0x000107c615f0(lVar1);
      func_0x000100083b20(&lStack_68);
      lVar3 = lStack_68;
      lVar8 = lStack_68;
      func_0x000107c4c448(lStack_68);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000100083b20(&lStack_68);
      FUN_1026a29f8(uVar9,uVar5,param_3,lVar1,lVar8,lVar2,lStack_68,uVar4,lVar7);
      func_0x000107c615e8(lVar1);
      *param_1 = uVar9;
      param_1[1] = &PTR_DAT_110535018;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    func_0x000107c61170(lVar2);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Entry: 1026af2bc; end: 1026af2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026af2bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = *(long *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar3 = lStack_68;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      uVar4 = 0;
      FUN_1026a27cc();
      uVar9 = *unaff_x20;
      func_0x000107c6157c(uVar9);
      func_0x000100083b20(&lStack_68);
      lVar3 = lStack_68;
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
      func_0x000107c61174(uVar5);
      func_0x000107c61170(lVar3);
      uVar6 = uVar5;
      func_0x000107c5d984(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      uVar5 = uVar6;
      func_0x000107c5faec(uVar6);
      func_0x000107c61170(uVar6);
      lVar7 = lVar1;
      func_0x000107c614f0();
      func_0x000107c615f0(lVar1);
      func_0x000100083b20(&lStack_68);
      lVar3 = lStack_68;
      lVar8 = lStack_68;
      func_0x000107c4c448(lStack_68);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000100083b20(&lStack_68);
      FUN_1026a29f8(uVar9,uVar5,param_3,lVar1,lVar8,lVar2,lStack_68,uVar4,lVar7);
      func_0x000107c615e8(lVar1);
      *param_1 = uVar9;
      param_1[1] = &PTR_DAT_110535018;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    func_0x000107c61170(lVar2);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Entry: 1026af2d0; end: 1026af343;  */

long FUN_1026af2d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026af344; end: 1026af3b7;  */

undefined8 * FUN_1026af344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  return param_1;
}



/* Entry: 1026af3b8; end: 1026af473;  */

undefined8 * FUN_1026af3b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026af474; end: 1026af4df;  */

undefined8 * FUN_1026af474(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026af4e0; end: 1026af583;  */

int FUN_1026af4e0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026af584; end: 1026af5cf;  */

void FUN_1026af584(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026af5d0; end: 1026af76b;  */

void FUN_1026af5d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110535e10;
  func_0x000107c613fc(&UNK_110535e10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1026af650,puVar1);
  return;
}



/* Entry: 1026af76c; end: 1026af783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026af76c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  long lStack_38;
  
  uVar3 = *unaff_x20;
  func_0x000100083b20(&lStack_38,uVar3,unaff_x20[1]);
  lVar1 = *(long *)(lStack_38 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
    puVar6 = (undefined *)0x0;
    ppuVar4 = (undefined **)0x0;
    param_1[2] = 0;
    uVar5 = 0xff;
  }
  else {
    func_0x000107c61174();
    uVar5 = 2;
    ppuVar4 = &PTR_DAT_110534810;
    puVar6 = &UNK_1105347f8;
  }
  *param_1 = uVar3;
  param_1[1] = lVar2;
  param_1[3] = puVar6;
  param_1[4] = ppuVar4;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return;
}



/* Entry: 1026af784; end: 1026af7ab;  */

void FUN_1026af784(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1026af7ac; end: 1026af807;  */

undefined8 * FUN_1026af7ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026af808; end: 1026af843;  */

undefined8 * FUN_1026af808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026af844; end: 1026af8df;  */

int FUN_1026af844(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026af8e0; end: 1026afad7;  */

void FUN_1026af8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110535ef0;
  func_0x000107c613fc(&UNK_110535ef0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_1026afad8,puVar1);
  return;
}



/* Entry: 1026afad8; end: 1026afb0b;  */

void FUN_1026afad8(void)

{
  long unaff_x20;
  
  func_0x0001026af9e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1026afb0c; end: 1026afdff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026afb0c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = *(long *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 0xff;
  }
  else {
    uVar3 = *unaff_x20;
    func_0x000107c61174();
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar4 = lStack_68;
    func_0x000107c4b8d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar5 = lStack_68;
    func_0x000107c5d9dc();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar6 = lStack_68;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar7 = lStack_68;
    func_0x000107c43e84();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar8 = lStack_68;
    func_0x000107c4c448();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar9 = lStack_68;
    func_0x000107c4c350();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    func_0x000100083b20(&lStack_68);
    uVar10 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_68);
    uVar12 = uVar10;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    uVar12 = unaff_x20[8];
    lVar11 = 0;
    func_0x0001026a5b6c();
    func_0x000107c613fc();
    *(undefined1 *)(lVar11 + 0x98) = 0;
    *(undefined8 *)(lVar11 + 0xa0) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x30) = uVar3;
    *(long *)(lVar11 + 0x38) = lVar2;
    *(long *)(lVar11 + 0x40) = lVar4;
    *(long *)(lVar11 + 0x48) = lVar5;
    *(long *)(lVar11 + 0x50) = lVar6;
    *(long *)(lVar11 + 0x58) = lVar7;
    *(long *)(lVar11 + 0x60) = lVar8;
    *(long *)(lVar11 + 0x68) = lVar9;
    *(long *)(lVar11 + 0x70) = lVar1;
    *(undefined8 *)(lVar11 + 0x78) = uVar10;
    *(undefined8 *)(lVar11 + 0x80) = param_3;
    *(undefined8 *)(lVar11 + 0x88) = uVar12;
    func_0x000107c6157c(uVar12);
    func_0x000107c61174();
    lVar1 = lVar2;
    func_0x000107c3f140();
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar1);
    if ((int)lVar4 == 0) {
      func_0x000107c61170(lVar2);
      lVar1 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c3f140();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
    *(long *)(lVar11 + 0x90) = lVar1;
    *param_1 = lVar11;
    param_1[1] = (long)&PTR_DAT_110535098;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



/* Entry: 1026afe00; end: 1026afe13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026afe00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = *(long *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 0xff;
  }
  else {
    uVar3 = *unaff_x20;
    func_0x000107c61174();
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar4 = lStack_68;
    func_0x000107c4b8d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar5 = lStack_68;
    func_0x000107c5d9dc();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar6 = lStack_68;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar7 = lStack_68;
    func_0x000107c43e84();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar8 = lStack_68;
    func_0x000107c4c448();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar9 = lStack_68;
    func_0x000107c4c350();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    func_0x000100083b20(&lStack_68);
    uVar10 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_68);
    uVar12 = uVar10;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    uVar12 = unaff_x20[8];
    lVar11 = 0;
    func_0x0001026a5b6c();
    func_0x000107c613fc();
    *(undefined1 *)(lVar11 + 0x98) = 0;
    *(undefined8 *)(lVar11 + 0xa0) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x30) = uVar3;
    *(long *)(lVar11 + 0x38) = lVar2;
    *(long *)(lVar11 + 0x40) = lVar4;
    *(long *)(lVar11 + 0x48) = lVar5;
    *(long *)(lVar11 + 0x50) = lVar6;
    *(long *)(lVar11 + 0x58) = lVar7;
    *(long *)(lVar11 + 0x60) = lVar8;
    *(long *)(lVar11 + 0x68) = lVar9;
    *(long *)(lVar11 + 0x70) = lVar1;
    *(undefined8 *)(lVar11 + 0x78) = uVar10;
    *(undefined8 *)(lVar11 + 0x80) = param_3;
    *(undefined8 *)(lVar11 + 0x88) = uVar12;
    func_0x000107c6157c(uVar12);
    func_0x000107c61174();
    lVar1 = lVar2;
    func_0x000107c3f140();
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar1);
    if ((int)lVar4 == 0) {
      func_0x000107c61170(lVar2);
      lVar1 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c3f140();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
    *(long *)(lVar11 + 0x90) = lVar1;
    *param_1 = lVar11;
    param_1[1] = (long)&PTR_DAT_110535098;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



/* Entry: 1026afe14; end: 1026afe9f;  */

long FUN_1026afe14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026afea0; end: 1026aff4b;  */

undefined8 * FUN_1026afea0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  uVar3 = param_2[6];
  uVar7 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar7;
  uVar8 = param_2[8];
  param_1[8] = uVar8;
  func_0x000107c61174();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  return param_1;
}



/* Entry: 1026aff4c; end: 1026b004f;  */

undefined8 * FUN_1026aff4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b0050; end: 1026b00e3;  */

undefined8 * FUN_1026b0050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b00e4; end: 1026b018b;  */

int FUN_1026b00e4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b018c; end: 1026b0313;  */

void FUN_1026b018c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536018;
  func_0x000107c613fc(&UNK_110536018,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1026b0314,puVar1);
  return;
}



/* Entry: 1026b0314; end: 1026b0323;  */

void FUN_1026b0314(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000100083b20(&uStack_58);
  param_1[3] = &UNK_1105360c8;
  param_1[4] = &PTR_DAT_110536030;
  puVar6 = &UNK_110536100;
  func_0x000107c613fc(&UNK_110536100,0x40,7);
  *param_1 = puVar6;
  *(undefined8 *)(puVar6 + 0x10) = uStack_58;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar3;
  *(undefined8 *)(puVar6 + 0x38) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  return;
}



/* Entry: 1026b0324; end: 1026b04d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b0324(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar1 = 0x112dafb90;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  uVar4 = 0;
  FUN_1026a742c(0);
  uVar5 = *unaff_x20;
  func_0x000107c61174();
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lVar2);
  uVar7 = uVar6;
  func_0x000107c5d984(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5faec(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar7 = uVar8;
  func_0x000107c614f0();
  uVar9 = unaff_x20[5];
  func_0x000107c6157c(uVar9);
  FUN_1026a7b34(uVar5,uVar6,uVar1,lVar2,uVar8,puVar3,uVar9,uVar4,uVar7);
  *param_1 = uVar5;
  param_1[1] = &PTR_DAT_110535348;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b04d4; end: 1026b04e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b04d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar1 = 0x112dafb90;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  uVar4 = 0;
  FUN_1026a742c(0);
  uVar5 = *unaff_x20;
  func_0x000107c61174();
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lVar2);
  uVar7 = uVar6;
  func_0x000107c5d984(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5faec(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar7 = uVar8;
  func_0x000107c614f0();
  uVar9 = unaff_x20[5];
  func_0x000107c6157c(uVar9);
  FUN_1026a7b34(uVar5,uVar6,uVar1,lVar2,uVar8,puVar3,uVar9,uVar4,uVar7);
  *param_1 = uVar5;
  param_1[1] = &PTR_DAT_110535348;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b04e8; end: 1026b055b;  */

long FUN_1026b04e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b055c; end: 1026b05cf;  */

undefined8 * FUN_1026b055c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  return param_1;
}



/* Entry: 1026b05d0; end: 1026b068b;  */

undefined8 * FUN_1026b05d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b068c; end: 1026b06f7;  */

undefined8 * FUN_1026b068c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b06f8; end: 1026b079b;  */

int FUN_1026b06f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b079c; end: 1026b0923;  */

void FUN_1026b079c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536130;
  func_0x000107c613fc(&UNK_110536130,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1026b0924,puVar1);
  return;
}



/* Entry: 1026b0924; end: 1026b0933;  */

void FUN_1026b0924(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000100083b20(&uStack_58);
  param_1[3] = &UNK_1105361e0;
  param_1[4] = &PTR_DAT_110536148;
  puVar6 = &UNK_110536218;
  func_0x000107c613fc(&UNK_110536218,0x40,7);
  *param_1 = puVar6;
  *(undefined8 *)(puVar6 + 0x10) = uStack_58;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar3;
  *(undefined8 *)(puVar6 + 0x38) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  return;
}



/* Entry: 1026b0934; end: 1026b0b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b0934(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *unaff_x20;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = *(long *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar11 = 0xff;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    uVar3 = 0x112ea7848;
    func_0x0001000285a8(0x112ea7848,&UNK_10dabb4a8);
    func_0x000107c610f8();
    func_0x00010017da58(lVar1,uVar3);
    puVar4 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar1);
    uVar5 = 0;
    func_0x0001026a839c(0);
    uVar6 = *unaff_x20;
    func_0x000107c61174();
    lVar7 = lVar2;
    func_0x000107c4c334(lVar2);
    func_0x000107c61180();
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar8 = lStack_68;
    func_0x000107c4d1cc(lStack_68);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    func_0x000107c61174(puVar4);
    func_0x000100083b20(&lStack_68);
    uVar9 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
    func_0x000107c61174(uVar9);
    func_0x000107c61170(lStack_68);
    uVar3 = uVar9;
    func_0x000107c614f0(uVar9);
    uVar10 = uVar6;
    FUN_1026a8a84(uVar6,lVar7,lVar8,lVar1,puVar4,uVar9,uVar5,uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar9);
    uVar11 = 0;
    *param_1 = uVar10;
    param_1[1] = &PTR_DAT_1105353f0;
  }
  *(undefined1 *)(param_1 + 5) = uVar11;
  return;
}



/* Entry: 1026b0b64; end: 1026b0b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b0b64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *unaff_x20;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = *(long *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar11 = 0xff;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    uVar3 = 0x112ea7848;
    func_0x0001000285a8(0x112ea7848,&UNK_10dabb4a8);
    func_0x000107c610f8();
    func_0x00010017da58(lVar1,uVar3);
    puVar4 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar1);
    uVar5 = 0;
    func_0x0001026a839c(0);
    uVar6 = *unaff_x20;
    func_0x000107c61174();
    lVar7 = lVar2;
    func_0x000107c4c334(lVar2);
    func_0x000107c61180();
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    lVar8 = lStack_68;
    func_0x000107c4d1cc(lStack_68);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    func_0x000107c61174(puVar4);
    func_0x000100083b20(&lStack_68);
    uVar9 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
    func_0x000107c61174(uVar9);
    func_0x000107c61170(lStack_68);
    uVar3 = uVar9;
    func_0x000107c614f0(uVar9);
    uVar10 = uVar6;
    FUN_1026a8a84(uVar6,lVar7,lVar8,lVar1,puVar4,uVar9,uVar5,uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar9);
    uVar11 = 0;
    *param_1 = uVar10;
    param_1[1] = &PTR_DAT_1105353f0;
  }
  *(undefined1 *)(param_1 + 5) = uVar11;
  return;
}



/* Entry: 1026b0b78; end: 1026b0beb;  */

long FUN_1026b0b78(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b0bec; end: 1026b0c5f;  */

undefined8 * FUN_1026b0bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  return param_1;
}



/* Entry: 1026b0c60; end: 1026b0d1b;  */

undefined8 * FUN_1026b0c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b0d1c; end: 1026b0d87;  */

undefined8 * FUN_1026b0d1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b0d88; end: 1026b0e2b;  */

int FUN_1026b0d88(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b0e2c; end: 1026b103f;  */

void FUN_1026b0e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536248;
  func_0x000107c613fc(&UNK_110536248,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_1026b1040,puVar1);
  return;
}



/* Entry: 1026b1040; end: 1026b1073;  */

void FUN_1026b1040(void)

{
  long unaff_x20;
  
  func_0x0001026b0f40(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1026b1074; end: 1026b1367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b1074(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_113072718);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar5 = 0x112e99f48;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar6);
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar6);
  uVar15 = *unaff_x20;
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  uVar9 = uVar8;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  uVar8 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar10 = *(undefined8 *)(lStack_68 + _DAT_113072c10);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  uVar11 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar12 = 0;
  FUN_10269b654();
  lVar13 = lVar12;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar13 + _DAT_112eb3fd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar13 + _DAT_112eb3fd8) = uVar15;
  puVar1 = (undefined8 *)(lVar13 + _DAT_112eb3fe0);
  *puVar1 = uVar8;
  puVar1[1] = uVar5;
  *(long *)(lVar13 + _DAT_112eb3fe8) = lVar6;
  *(undefined8 *)(lVar13 + _DAT_112eb3ff0) = uVar9;
  *(long *)(lVar13 + _DAT_112eb3ff8) = lVar3;
  *(undefined8 *)(lVar13 + _DAT_112eb4000) = uVar4;
  *(undefined8 *)(lVar13 + _DAT_112eb4008) = uVar10;
  *(undefined **)(lVar13 + _DAT_112eb4010) = puVar7;
  *(long *)(lVar13 + _DAT_112eb4018) = lVar2;
  *(undefined8 *)(lVar13 + _DAT_112eb4020) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_78 = lVar13;
  lStack_70 = lVar12;
  func_0x000107c6157c(uVar15);
  plVar14 = &lStack_78;
  func_0x000107c61154(plVar14,puVar7);
  *param_1 = (long)plVar14;
  param_1[1] = (long)&PTR_DAT_110534980;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b1368; end: 1026b137b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b1368(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_113072718);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar5 = 0x112e99f48;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar6);
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar6);
  uVar15 = *unaff_x20;
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  uVar9 = uVar8;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  uVar8 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar10 = *(undefined8 *)(lStack_68 + _DAT_113072c10);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  uVar11 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar12 = 0;
  FUN_10269b654();
  lVar13 = lVar12;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar13 + _DAT_112eb3fd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar13 + _DAT_112eb3fd8) = uVar15;
  puVar1 = (undefined8 *)(lVar13 + _DAT_112eb3fe0);
  *puVar1 = uVar8;
  puVar1[1] = uVar5;
  *(long *)(lVar13 + _DAT_112eb3fe8) = lVar6;
  *(undefined8 *)(lVar13 + _DAT_112eb3ff0) = uVar9;
  *(long *)(lVar13 + _DAT_112eb3ff8) = lVar3;
  *(undefined8 *)(lVar13 + _DAT_112eb4000) = uVar4;
  *(undefined8 *)(lVar13 + _DAT_112eb4008) = uVar10;
  *(undefined **)(lVar13 + _DAT_112eb4010) = puVar7;
  *(long *)(lVar13 + _DAT_112eb4018) = lVar2;
  *(undefined8 *)(lVar13 + _DAT_112eb4020) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_78 = lVar13;
  lStack_70 = lVar12;
  func_0x000107c6157c(uVar15);
  plVar14 = &lStack_78;
  func_0x000107c61154(plVar14,puVar7);
  *param_1 = (long)plVar14;
  param_1[1] = (long)&PTR_DAT_110534980;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b137c; end: 1026b140f;  */

long FUN_1026b137c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b1410; end: 1026b14c3;  */

undefined8 * FUN_1026b1410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[2];
  uVar6 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  uVar2 = param_2[4];
  uVar7 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar7;
  uVar3 = param_2[6];
  uVar8 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar8;
  uVar4 = param_2[8];
  uVar9 = param_2[9];
  param_1[8] = uVar4;
  param_1[9] = uVar9;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  return param_1;
}



/* Entry: 1026b14c4; end: 1026b15df;  */

undefined8 * FUN_1026b14c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b15e0; end: 1026b167b;  */

undefined8 * FUN_1026b15e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[8]);
  uVar1 = param_1[9];
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b167c; end: 1026b1727;  */

int FUN_1026b167c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b1728; end: 1026b1793;  */

void FUN_1026b1728(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026b1794; end: 1026b17df;  */

void FUN_1026b1794(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026b17e0,param_1);
  return;
}


