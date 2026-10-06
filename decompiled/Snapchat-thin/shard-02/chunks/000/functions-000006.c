/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10168e590; end: 10168e5c3;  */

void FUN_10168e590(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10168e5c4; end: 10168e687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10168e5c4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112dbeae8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10169053c();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbeaf0) = param_1;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + _DAT_112dbeaf8) = uVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar4;
}



/* Entry: 10168e688; end: 10168e73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10168e688(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112dbeae8;
  puVar4 = &stack0xffffffffffffffc0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10169053c();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbeaf0) = param_1;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + _DAT_112dbeaf8) = uVar3;
  FUN_101690638();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar4;
}



/* Entry: 10168e73c; end: 10168e8c3; -[SCBitmojiAbusiveLanguageDetector initWithContentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10168e73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112dbeae8;
  plVar4 = &lStack_40;
  func_0x000107c61174();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10169053c();
  *(undefined **)(param_1 + lVar1) = puVar2;
  *(undefined8 *)(param_1 + _DAT_112dbeaf0) = param_3;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x00010006a360();
  *(undefined8 *)(param_1 + _DAT_112dbeaf8) = uVar3;
  FUN_101690638();
  lStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 10168e8c4; end: 10168e92b; -[SCBitmojiAbusiveLanguageDetector isDetectionAvailableForConfigUrl:] */

uint FUN_10168e8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x00010168e7f8(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 10168e92c; end: 10168e953;  */

/* WARNING: Removing unreachable block (ram,0x00010168f414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168e92c(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  ulong uStack_e0;
  undefined8 auStack_d8 [3];
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar5 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar5 = param_2 >> 0x38 & 0xf;
  }
  if (uVar5 != 0) {
    uStack_94 = 0;
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar13 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
    lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar3 = *(long *)(unaff_x20 + _DAT_112dbeaf0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b08b8;
      lStack_a8 = lVar3;
      func_0x000107c610f8();
      uVar5 = param_1;
      lStack_a0 = lVar2;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c4766c();
      puStack_c0 = puVar4;
      func_0x000107c61170(uVar5);
      uVar7 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      puVar6 = PTR_PTR_1126b1060;
      func_0x000107c610f8();
      func_0x000107c5fc48(uVar7,PTR___sSSN_11034da80);
      func_0x000107c47d08();
      puStack_b8 = puVar6;
      func_0x000107c61170(uVar7);
      puVar6 = PTR_PTR_1126b1058;
      func_0x000107c610f8();
      uVar5 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      uVar7 = 0x626f6c4261746144;
      func_0x000107c5fadc(0x626f6c4261746144,0xe800000000000000);
      lStack_b0 = lVar13;
      func_0x000107c46d48();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar7);
      puVar8 = PTR_PTR_1126b1378;
      func_0x000107c61168(PTR_PTR_1126b1378);
      func_0x000107c4c950(puVar4);
      func_0x000107c4ed5c(puVar8);
      func_0x000107c61180();
      puVar9 = PTR_PTR_1126b1050;
      func_0x000107c610f8();
      func_0x000107c61174();
      uVar5 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5fadc(param_1,param_2);
      *(undefined **)((long)auStack_d8 + lVar1 + 8) = puVar6;
      *(undefined1 *)((long)auStack_d8 + lVar1) = 0;
      *(ulong *)((long)&uStack_e0 + lVar1) = param_1;
      func_0x000107c4915c();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(param_1);
      func_0x000107c5ee80((long)&puStack_c0 + lVar1,0x4122750000000000);
      uVar7 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      uVar10 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c61174();
      puVar11 = puVar9;
      func_0x000107c5ee70();
      puVar4 = &UNK_1103f3818;
      func_0x000107c613fc(&UNK_1103f3818,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      pcStack_70 = FUN_101690a90;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100f17820;
      puStack_78 = &UNK_1103f3830;
      ppuVar12 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4();
      puVar4 = puStack_68;
      func_0x000101237340(0,0);
      func_0x000107c61574(puVar4);
      *(undefined **)((long)auStack_d8 + lVar1) = puVar11;
      *(undefined ***)((long)auStack_d8 + lVar1 + 8) = ppuVar12;
      *(undefined2 *)((long)&uStack_e0 + lVar1) = 0;
      lVar2 = lStack_a8;
      puVar4 = puStack_c0;
      func_0x000107c42260(lStack_a8);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puStack_b8);
      func_0x000107c61170(puVar8);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar11);
      (**(code **)(lStack_b0 + 8))((long)&puStack_c0 + lVar1,lStack_a0);
    }
    return;
  }
  return;
}



/* Entry: 10168e954; end: 10168e9e3; -[SCBitmojiAbusiveLanguageDetector downloadDetectionConfigForConfigUrl:] */

/* WARNING: Possible PIC construction at 0x00010168e9b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010168e9bc) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10168e954(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x000107c5faec();
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_10168f030(param_3,param_2,0,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10168e9e4; end: 10168eb87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10168e9e4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_90 [16];
  undefined8 uStack_58;
  
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4a8a4(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  else {
    uVar2 = 0x112dbeb00;
    func_0x0001000285a8(0x112dbeb00,&UNK_10d979f90);
    func_0x000100087bd4(&uStack_58,0x101690658,auStack_90,uVar2);
    puVar5 = &UNK_1103f3750;
    func_0x000107c613fc(&UNK_1103f3750,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar4 = &UNK_1103f3778;
    func_0x000107c613fc(&UNK_1103f3778,0x38,7);
    *(undefined **)(puVar4 + 0x10) = puVar5;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(ulong *)(puVar4 + 0x28) = param_3;
    *(ulong *)(puVar4 + 0x30) = param_4;
    uVar2 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    pcVar3 = FUN_101690678;
    func_0x0001000bfde0(FUN_101690678,puVar4,uVar2);
    func_0x000107c61574(puVar4);
    func_0x0001004575f0();
    func_0x000107c61574(uStack_58);
    func_0x000107c61574(pcVar3);
  }
  return puVar4;
}



/* Entry: 10168eb88; end: 10168ed53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168eb88(undefined8 *param_1,long param_2,long param_3,ulong param_4,byte param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112dbeae8;
  func_0x000107c61428(param_2 + _DAT_112dbeae8,auStack_78,0,0);
  lVar9 = *(long *)(param_2 + lVar1);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    lVar2 = param_3;
    uVar7 = param_4;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      pcVar10 = *(code **)(*(long *)(lVar9 + 0x38) + lVar2 * 8);
      func_0x000107c6157c(pcVar10);
      func_0x000107c6142c(lVar9);
      goto LAB_10168ed2c;
    }
    func_0x000107c6142c(lVar9);
  }
  puVar3 = &UNK_1103f3750;
  func_0x000107c613fc(&UNK_1103f3750,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  puVar4 = &UNK_1103f37c8;
  func_0x000107c613fc(&UNK_1103f37c8,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  puVar4[0x18] = param_5 & 1;
  *(long *)(puVar4 + 0x20) = param_3;
  *(ulong *)(puVar4 + 0x28) = param_4;
  func_0x0001000285a8(0x112dbeb98,&UNK_10d97a008);
  func_0x000107c613fc();
  func_0x000107c61434(param_4);
  pcVar5 = FUN_101690a74;
  func_0x0001000b64ac(FUN_101690a74,puVar4);
  pcVar10 = pcVar5;
  func_0x00010487f7f8();
  func_0x000107c61574(pcVar5);
  func_0x000107c61428(param_2 + lVar1,auStack_90,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(pcVar10);
  uVar6 = *(undefined8 *)(param_2 + lVar1);
  func_0x000107c61558(uVar6);
  uVar8 = *(undefined8 *)(param_2 + lVar1);
  *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
  FUN_1016900ec(pcVar10,param_3,param_4,uVar6);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(param_2 + lVar1) = uVar8;
  func_0x000107c614a8(auStack_90);
LAB_10168ed2c:
  *param_1 = pcVar10;
  return;
}



/* Entry: 10168ed54; end: 10168ee9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168ed54(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  cVar1 = *(char *)(param_2 + 8);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
  }
  else {
    if (cVar1 == '\x01') {
      uVar2 = 0x112dbeb90;
      lStack_90 = param_3;
      uStack_88 = param_6;
      uStack_80 = param_7;
      func_0x0001000285a8(0x112dbeb90,&UNK_10d97a000);
      func_0x000100087bd4(&uStack_70,FUN_101690a58,auStack_a0,uVar2);
      func_0x000107c61574(uStack_70);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
    }
    else {
      FUN_101690f40(param_4,param_5);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
    }
    func_0x000107c61170(param_3);
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10168ee9c; end: 10168ef93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168ee9c(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112dbeae8;
  func_0x000107c61428(param_2 + _DAT_112dbeae8,auStack_68,0x21,0);
  uVar4 = *(undefined8 *)(param_2 + lVar1);
  func_0x000107c61434(uVar4);
  func_0x000100029284();
  func_0x000107c6142c(uVar4);
  uVar4 = 0;
  if ((param_4 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + lVar1);
    func_0x000107c61558();
    lVar3 = *(long *)(param_2 + lVar1);
    if ((uVar2 & 1) == 0) {
      FUN_101691a98();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_3 * 0x10 + 8));
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_3 * 8);
    FUN_10169038c(param_3,lVar3);
    *(long *)(param_2 + lVar1) = lVar3;
  }
  *param_1 = uVar4;
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 10168ef94; end: 10168f02f; -[SCBitmojiAbusiveLanguageDetector isAbusiveLanguageDetectedForText:configUrl:skipDownload:] */

void FUN_10168ef94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_10168e9e4(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10168f030; end: 10168f43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168f030(undefined8 param_1,undefined8 param_2,undefined4 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [3];
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_94 = param_3;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112dbeaf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(0);
    }
  }
  else {
    puVar4 = PTR_PTR_1126b08b8;
    lStack_a8 = lVar3;
    func_0x000107c610f8();
    uVar9 = param_1;
    lStack_a0 = lVar2;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4766c();
    puStack_c0 = puVar4;
    func_0x000107c61170(uVar9);
    uVar9 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar5 = PTR_PTR_1126b1060;
    func_0x000107c610f8();
    func_0x000107c5fc48(uVar9,PTR___sSSN_11034da80);
    func_0x000107c47d08();
    puStack_b8 = puVar5;
    func_0x000107c61170(uVar9);
    puVar5 = PTR_PTR_1126b1058;
    func_0x000107c610f8();
    uVar9 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    uVar6 = 0x626f6c4261746144;
    func_0x000107c5fadc(0x626f6c4261746144,0xe800000000000000);
    lStack_b0 = lVar12;
    func_0x000107c46d48();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar6);
    puVar7 = PTR_PTR_1126b1378;
    func_0x000107c61168(PTR_PTR_1126b1378);
    func_0x000107c4c950(puVar4);
    func_0x000107c4ed5c(puVar7);
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126b1050;
    func_0x000107c610f8();
    func_0x000107c61174();
    uVar9 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_1,param_2);
    *(undefined **)((long)auStack_d8 + lVar1 + 8) = puVar5;
    *(undefined1 *)((long)auStack_d8 + lVar1) = 0;
    *(undefined8 *)((long)&uStack_e0 + lVar1) = param_1;
    func_0x000107c4915c();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(param_1);
    func_0x000107c5ee80((long)&puStack_c0 + lVar1,0x4122750000000000);
    uVar9 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar6 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c61174();
    puVar10 = puVar8;
    func_0x000107c5ee70();
    puVar4 = &UNK_1103f3818;
    func_0x000107c613fc(&UNK_1103f3818,0x20,7);
    *(code **)(puVar4 + 0x10) = param_4;
    *(undefined8 *)(puVar4 + 0x18) = param_5;
    pcStack_70 = FUN_101690a90;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f17820;
    puStack_78 = &UNK_1103f3830;
    ppuVar11 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4();
    puVar4 = puStack_68;
    func_0x000101237340(param_4,param_5);
    func_0x000107c61574(puVar4);
    *(undefined **)((long)auStack_d8 + lVar1) = puVar10;
    *(undefined ***)((long)auStack_d8 + lVar1 + 8) = ppuVar11;
    *(undefined2 *)((long)&uStack_e0 + lVar1) = 0;
    lVar2 = lStack_a8;
    puVar4 = puStack_c0;
    func_0x000107c42260(lStack_a8);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puStack_b8);
    func_0x000107c61170(puVar7);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
    (**(code **)(lStack_b0 + 8))((long)&puStack_c0 + lVar1,lStack_a0);
  }
  return;
}



/* Entry: 10168f440; end: 10168f8b7;  */

void FUN_10168f440(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    if ((param_3 & 1) == 0) {
      puVar1 = &UNK_1103f3750;
      func_0x000107c613fc(&UNK_1103f3750,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_2);
      puVar2 = &UNK_1103f37f0;
      func_0x000107c613fc(&UNK_1103f37f0,0x30,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_4;
      *(undefined8 *)(puVar2 + 0x28) = param_5;
      func_0x000107c6157c(puVar1);
      func_0x000107c6157c(param_1);
      func_0x000107c61434(param_5);
      FUN_10168f030(param_4,param_5,1,0x101690a84,puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(puVar2);
    }
    else {
      func_0x00010168f6fc(param_4,param_5,param_1);
    }
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10168f8b8; end: 10168ffff;  */

/* WARNING: Possible PIC construction at 0x00010168fc9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010168fca0) */
/* WARNING: Removing unreachable block (ram,0x00010168fcb8) */

void FUN_10168f8b8(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puStack_a8;
  undefined *apuStack_a0 [2];
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == (undefined8 *)0x0) {
    FUN_1016906ac();
    puVar7 = (undefined8 *)&UNK_1103f38c0;
    lVar6 = 0;
    ppuVar12 = (undefined **)0x0;
    func_0x000107c613f8();
    *param_1 = 0xd00000000000001e;
    param_1[1] = 0x800000010efb5320;
    uStack_88 = CONCAT71(uStack_88._1_7_,1);
    puStack_90 = puVar7;
    func_0x000100087f6c(&puStack_90);
    func_0x000107c614ac();
    func_0x000100c7f554();
LAB_10168fe14:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    func_0x000107c60e78();
  }
  else {
    puVar2 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    puVar7 = puVar2;
    func_0x000107c5ee20(puVar2,param_2);
    puStack_90 = (undefined8 *)0x0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puStack_90;
    if (puVar3 == (undefined *)0x0) {
      puVar8 = puStack_90;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170();
      func_0x000107c61654();
      FUN_1016906ac();
      puVar9 = (undefined8 *)&UNK_1103f38c0;
      lVar6 = 0;
      ppuVar12 = (undefined **)0x0;
      func_0x000107c613f8();
      *puVar8 = 0xd00000000000001b;
      puVar8[1] = 0x800000010efb5340;
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      puStack_90 = puVar9;
      func_0x000100087f6c(&puStack_90);
      func_0x000107c614ac(puVar9);
      func_0x000100c7f554();
      func_0x00010006c090(puVar2);
      func_0x000107c614ac();
      param_1 = param_2;
      goto LAB_10168fe14;
    }
    func_0x000107c61174();
    func_0x000107c60234(&puStack_90,puVar3);
    func_0x000107c615e8(puVar3);
    uVar4 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    puVar3 = PTR___sypN_11034f1a8;
    ppuVar5 = apuStack_a0;
    func_0x000107c6147c(ppuVar5,&puStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
    puVar11 = apuStack_a0[0];
    if (((ulong)ppuVar5 & 1) == 0) {
      FUN_1016906ac();
      puVar7 = (undefined8 *)&UNK_1103f38c0;
      lVar6 = 0;
      ppuVar12 = (undefined **)0x0;
      func_0x000107c613f8();
      *ppuVar5 = (undefined *)0xd00000000000001b;
      ppuVar5[1] = (undefined *)0x800000010efb5340;
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      puStack_90 = puVar7;
      func_0x000100087f6c(&puStack_90);
      func_0x000107c614ac(puVar7);
      func_0x000100c7f554();
      func_0x00010006c090();
      puVar7 = puVar2;
      param_1 = param_2;
      goto LAB_10168fe14;
    }
    if (*(long *)(apuStack_a0[0] + 0x10) == 0) {
LAB_10168fbc8:
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_101690820();
    }
    else {
      func_0x000107c61434(apuStack_a0[0]);
      lVar6 = 0x7574697473627573;
      uVar16 = 0;
      func_0x000100029284(0x7574697473627573);
      if ((uVar16 & 1) == 0) {
        func_0x000107c6142c(puVar11);
        goto LAB_10168fbc8;
      }
      func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar6 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar11);
      uVar4 = 0x112dbeb70;
      func_0x0001000285a8(0x112dbeb70,&UNK_10d979fe0);
      ppuVar12 = apuStack_a0;
      func_0x000107c6147c(ppuVar12,&puStack_90,puVar3 + 8,uVar4,6);
      puVar3 = apuStack_a0[0];
      if (((ulong)ppuVar12 & 1) == 0) goto LAB_10168fbc8;
    }
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10169091c();
    puVar18 = (ulong *)(puVar3 + 0x40);
    uVar13 = *puVar18;
    uVar17 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
    uVar16 = 0xffffffffffffffff;
    if (-uVar17 < 0x40) {
      uVar16 = ~(-1L << (-uVar17 & 0x3f));
    }
    apuStack_a0[0] = puVar14;
    func_0x000107c61434(puVar3);
    lVar6 = 0;
    lVar15 = 0;
    uVar16 = uVar16 & uVar13;
    while (uVar16 == 0) {
      lVar6 = lVar15 + 1;
      if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10168fe50);
        (*pcVar1)();
      }
      if ((long)(0x3f - uVar17 >> 6) <= lVar6) {
        func_0x000107c6142c(puVar3);
        ppuVar12 = (undefined **)0x0;
        FUN_101690a50(puVar3,puVar18,~uVar17,0,0);
        if (*(long *)(puVar11 + 0x10) == 0) {
          uStack_88 = 0;
          puStack_90 = (undefined8 *)0x0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          func_0x000107c61434(puVar11);
          lVar6 = 0x686374616d;
          uVar16 = 0;
          func_0x000100029284(0x686374616d);
          if ((uVar16 & 1) == 0) {
            func_0x000107c6142c(puVar11);
            uStack_88 = 0;
            puStack_90 = (undefined8 *)0x0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            func_0x0001000bb420(*(long *)(puVar11 + 0x38) + lVar6 * 0x20,&puStack_90);
            func_0x000107c6142c(puVar11);
          }
        }
        func_0x000107c6142c(puVar11);
        if (lStack_78 == 0) {
          func_0x00010006e7f4(&puStack_90);
          puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          ppuVar12 = (undefined **)0x112d38270;
          func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
          ppuVar10 = &puStack_a8;
          func_0x000107c6147c(ppuVar10,&puStack_90,PTR___sypN_11034f1a8 + 8,ppuVar12,6);
          puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
          if (((ulong)ppuVar10 & 1) != 0) {
            puVar9 = puStack_a8;
          }
        }
        puVar3 = apuStack_a0[0];
        func_0x000101691704(0);
        lVar6 = 7;
        func_0x000107c613fc();
        func_0x000107c61434(puVar3);
        puVar7 = puVar9;
        FUN_101692c6c(puVar9,puVar3);
        func_0x000107c6142c(puVar9);
        uStack_88 = uStack_88 & 0xffffffffffffff00;
        puStack_90 = puVar7;
        func_0x000100087f6c(&puStack_90);
        func_0x000100c7f554();
        func_0x00010006c090(puVar2);
        func_0x000107c6142c(puVar3);
        func_0x000107c61574();
        param_1 = param_2;
        goto LAB_10168fe14;
      }
      lVar15 = lVar15 + 1;
      uVar16 = puVar18[lVar6];
    }
    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar6 << 6;
    puVar2 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar16 * 0x10);
    puVar7 = (undefined8 *)*puVar2;
    param_1 = (undefined8 *)puVar2[1];
    lVar6 = *(long *)(*(long *)(puVar3 + 0x38) + uVar16 * 8);
    func_0x000107c61434(param_1);
    func_0x000107c61434(lVar6);
    ppuVar12 = apuStack_a0;
  }
  if (((ulong)param_1 >> 0x3d & 1) == 0) {
    if (((ulong)puVar7 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10168fffc);
      (*pcVar1)();
    }
    if (((ulong)puVar7 >> 0x3c & 1) == 0) {
      func_0x000100edbde8(puVar7,param_1);
      goto LAB_10168febc;
    }
  }
  else if (((ulong)param_1 & 0xf00000000000000) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101690000);
    (*pcVar1)();
  }
  func_0x000107c61434(param_1);
LAB_10168febc:
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar15 = *(long *)(lVar6 + 0x10);
  if (lVar15 != 0) {
    func_0x000101499164(0,lVar15,0);
    puVar18 = (ulong *)(lVar6 + 0x28);
    do {
      uVar16 = puVar18[-1];
      uVar13 = *puVar18;
      if ((uVar13 >> 0x3d & 1) == 0) {
        if ((uVar16 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10168fff4);
          (*pcVar1)();
        }
        if ((uVar16 >> 0x3c & 1) != 0) goto LAB_10168ff34;
        func_0x000107c61434(uVar13);
        uVar17 = uVar13;
        func_0x000100edbde8();
        func_0x000107c6142c(uVar13);
        uVar13 = uVar17;
      }
      else {
        if ((uVar13 & 0xf00000000000000) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10168fff8);
          (*pcVar1)();
        }
LAB_10168ff34:
        func_0x000107c61434(uVar13);
      }
      uVar17 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar17) {
        func_0x000101499164(1 < *(ulong *)(puVar3 + 0x18),uVar17 + 1,1);
      }
      puVar18 = puVar18 + 2;
      *(ulong *)(puVar3 + 0x10) = uVar17 + 1;
      *(ulong *)(puVar3 + uVar17 * 0x10 + 0x20) = uVar16;
      *(ulong *)(puVar3 + uVar17 * 0x10 + 0x28) = uVar13;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  puVar11 = *ppuVar12;
  func_0x000107c61558(puVar11);
  puVar14 = *ppuVar12;
  *ppuVar12 = (undefined *)0x8000000000000000;
  func_0x00010169023c(puVar3,puVar7,param_1,puVar11);
  func_0x000107c6142c(param_1);
  *ppuVar12 = puVar14;
  return;
}



/* Entry: 101690000; end: 10169005b; -[SCBitmojiAbusiveLanguageDetector init] */

void FUN_101690000(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiALDImplementation.BitmojiAbusiveLanguageDetector",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10169002c);
  (*pcVar1)();
}



/* Entry: 10169005c; end: 1016900cf; -[SCBitmojiAbusiveLanguageDetector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169005c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbeaf0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dbeaf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dbeae8));
  return;
}



/* Entry: 1016900d0; end: 1016900eb;  */

void FUN_1016900d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE13failureReasonSSSgvg_1103506b8)();
  return;
}



/* Entry: 1016900ec; end: 10169038b;  */

void FUN_1016900ec(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1016901c4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101691ee8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10169018c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101691a98();
    lVar6 = *unaff_x20;
    goto joined_r0x0001016901d8;
  }
  lVar6 = *unaff_x20;
joined_r0x0001016901d8:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10169023c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10169038c; end: 10169053b;  */

void FUN_10169038c(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_101690480:
          if ((long)param_1 < (long)uVar8) goto LAB_101690408;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_101690480;
LAB_101690408:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10169053c);
  (*pcVar5)();
}



/* Entry: 10169053c; end: 101690637;  */

undefined * FUN_10169053c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dbebd8,&UNK_10d97a010);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101690634);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101690638);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101690638; end: 101690677;  */

void FUN_101690638(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4118);
  return;
}



/* Entry: 101690678; end: 1016906ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101690678(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  cVar3 = *(char *)(param_2 + 8);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
  }
  else {
    if (cVar3 == '\x01') {
      uVar5 = 0x112dbeb90;
      lStack_90 = lVar4;
      uStack_88 = uVar2;
      uStack_80 = uVar7;
      func_0x0001000285a8(0x112dbeb90,&UNK_10d97a000);
      func_0x000100087bd4(&uStack_70,FUN_101690a58,auStack_a0,uVar5);
      func_0x000107c61574(uStack_70);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
    }
    else {
      FUN_101690f40(uVar1,uVar5);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
    }
    func_0x000107c61170(lVar4);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 1016906ac; end: 1016906eb;  */

void FUN_1016906ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbeb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97a070;
  func_0x000107c61520(&UNK_10d97a070,&UNK_1103f38c0);
  puRam0000000112dbeb68 = puVar1;
  return;
}



/* Entry: 1016906ec; end: 10169081f;  */

undefined * FUN_1016906ec(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112dbeb78,&UNK_10d97a120);
  puVar3 = puVar8;
  func_0x000107c60498();
  uVar10 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = uVar10;
  uVar7 = uVar5;
  FUN_1016917c4();
  if ((uVar7 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar10;
      puVar1[1] = uVar5;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101690820);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61434();
        func_0x000107c6157c(uVar9);
        return puVar3;
      }
      uVar10 = puVar6[-2];
      uVar5 = puVar6[-1];
      uVar11 = *puVar6;
      func_0x000107c61434();
      func_0x000107c6157c(uVar9);
      uVar4 = uVar10;
      uVar7 = uVar5;
      FUN_1016917c4();
      puVar6 = puVar6 + 3;
      uVar9 = uVar11;
    } while ((uVar7 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016907e4);
  (*pcVar2)();
}



/* Entry: 101690820; end: 10169091b;  */

undefined * FUN_101690820(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dbeb88,&UNK_10d9dac50);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101690918);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10169091c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10169091c; end: 101690a4f;  */

undefined * FUN_10169091c(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112dbeb80,&UNK_10d979ff0);
  puVar3 = puVar8;
  func_0x000107c60498();
  uVar10 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = uVar10;
  uVar7 = uVar5;
  FUN_1016917c4();
  if ((uVar7 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar10;
      puVar1[1] = uVar5;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101690a50);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61434();
        func_0x000107c61434(uVar9);
        return puVar3;
      }
      uVar10 = puVar6[-2];
      uVar5 = puVar6[-1];
      uVar11 = *puVar6;
      func_0x000107c61434();
      func_0x000107c61434(uVar9);
      uVar4 = uVar10;
      uVar7 = uVar5;
      FUN_1016917c4();
      puVar6 = puVar6 + 3;
      uVar9 = uVar11;
    } while ((uVar7 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101690a14);
  (*pcVar2)();
}



/* Entry: 101690a50; end: 101690a57;  */

void FUN_101690a50(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101690a58; end: 101690a73;  */

void FUN_101690a58(void)

{
  long unaff_x20;
  
  FUN_10168ee9c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101690a74; end: 101690a8f;  */

void FUN_101690a74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    if ((bVar3 & 1) == 0) {
      puVar4 = &UNK_1103f3750;
      func_0x000107c613fc(&UNK_1103f3750,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar6);
      puVar5 = &UNK_1103f37f0;
      func_0x000107c613fc(&UNK_1103f37f0,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = param_1;
      *(undefined8 *)(puVar5 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + 0x28) = uVar2;
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(param_1);
      func_0x000107c61434(uVar2);
      FUN_10168f030(uVar1,uVar2,1,0x101690a84,puVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
    }
    else {
      func_0x00010168f6fc(uVar1,uVar2,param_1);
    }
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 101690a90; end: 101690abf;  */

void FUN_101690a90(long param_1)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  }
  return;
}



/* Entry: 101690ac0; end: 101690ac7;  */

void FUN_101690ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101690ac8; end: 101690b37;  */

undefined8 * FUN_101690ac8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101690b38; end: 101690c07;  */

int FUN_101690b38(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101690c08; end: 101690f3f;  */

void FUN_101690c08(ulong *param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uVar3 = *param_1;
  uVar13 = param_1[1];
  func_0x000107c5fb1c();
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  uStack_68 = uVar3 & 0xffffffffffff;
  if ((uVar13 & 0x2000000000000000) != 0) {
    uStack_68 = uVar13 >> 0x38 & 0xf;
  }
  uStack_70 = 0;
  uStack_80 = uVar3;
  uStack_78 = uVar13;
  func_0x000107c5fb84();
  uVar4 = 0xe000000000000000;
  uVar7 = 0;
  while (uVar13 != 0) {
    uVar4 = uVar3;
    uVar7 = uVar13;
    func_0x000107c5fa5c();
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar13;
      func_0x000107c5fb74(uVar3);
    }
    func_0x000107c6142c();
    func_0x000107c5fb84();
    uVar4 = uStack_90;
    uVar3 = uVar13;
    uVar13 = uVar7;
    uVar7 = uStack_98;
  }
  uVar3 = 0;
  func_0x000107c6142c(uStack_78);
  uVar13 = *(ulong *)(param_2 + 0x18);
  uStack_68 = uVar7 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uStack_68 = uVar4 >> 0x38 & 0xf;
  }
  uStack_70 = 0;
  uVar5 = uVar13;
  uStack_80 = uVar7;
  uStack_78 = uVar4;
  func_0x000107c6157c();
  func_0x000107c5fb84();
  do {
    uVar4 = uVar13;
    if (uVar3 == 0) {
      func_0x000107c6142c(uStack_78);
      *(undefined1 *)(uVar4 + 0x10) = 1;
      func_0x000107c61574(uVar4);
      return;
    }
    func_0x000107c61428(uVar4 + 0x18,&uStack_98,0,0);
    lVar11 = *(long *)(uVar4 + 0x18);
    if ((*(long *)(lVar11 + 0x10) == 0) ||
       (uVar13 = uVar5, uVar7 = uVar3,
       FUN_1016917d8(uVar5,uVar3,PTR___sSJ4hash4intoys6HasherVz_tF_11034d7f8,0x101691850),
       (uVar7 & 1) == 0)) {
      uVar13 = 0;
      func_0x000101691748();
      func_0x000107c613fc();
      *(undefined1 *)(uVar13 + 0x10) = 0;
      *(undefined **)(uVar13 + 0x18) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    }
    else {
      uVar13 = *(ulong *)(*(long *)(lVar11 + 0x38) + uVar13 * 8);
      func_0x000107c6157c(uVar13);
    }
    func_0x000107c61428(uVar4 + 0x18,auStack_b0,0x21,0);
    func_0x000107c6157c(uVar13);
    uVar6 = *(ulong *)(uVar4 + 0x18);
    func_0x000107c61558();
    lVar12 = *(long *)(uVar4 + 0x18);
    *(undefined8 *)(uVar4 + 0x18) = 0x8000000000000000;
    uVar7 = uVar5;
    uVar8 = uVar3;
    FUN_1016917d8(uVar5,uVar3,PTR___sSJ4hash4intoys6HasherVz_tF_11034d7f8,0x101691850);
    uVar9 = (ulong)~(uint)uVar8 & 1;
    lVar11 = *(long *)(lVar12 + 0x10) + uVar9;
    if (SCARRY8(*(long *)(lVar12 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101690f2c);
      (*pcVar2)();
    }
    if (*(long *)(lVar12 + 0x18) < lVar11) {
      func_0x000101692420(lVar11,uVar6);
      uVar7 = uVar5;
      uVar9 = uVar3;
      FUN_1016917d8(uVar5,uVar3,PTR___sSJ4hash4intoys6HasherVz_tF_11034d7f8,0x101691850);
      if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) {
        func_0x000107c60624(PTR___sSJN_11034d818);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101690f40);
        (*pcVar2)();
      }
joined_r0x000101690ee0:
      uVar6 = uVar8 & 1;
      uVar8 = uVar9;
      if (uVar6 == 0) goto LAB_101690e90;
LAB_101690d04:
      uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar7 * 8);
      *(ulong *)(*(long *)(lVar12 + 0x38) + uVar7 * 8) = uVar13;
      func_0x000107c6142c(uVar3);
      func_0x000107c61574(uVar10);
    }
    else {
      uVar9 = uVar8;
      if ((uVar6 & 1) == 0) {
        func_0x000101691d78();
        goto joined_r0x000101690ee0;
      }
      if ((uVar8 & 1) != 0) goto LAB_101690d04;
LAB_101690e90:
      lVar11 = lVar12 + (uVar7 >> 6) * 8;
      *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar3;
      *(ulong *)(*(long *)(lVar12 + 0x38) + uVar7 * 8) = uVar13;
      if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101690f30);
        (*pcVar2)();
      }
      *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      uVar8 = uVar9;
    }
    *(long *)(uVar4 + 0x18) = lVar12;
    func_0x000107c614a8(auStack_b0);
    func_0x000107c61574();
    func_0x000107c5fb84();
    uVar5 = uVar4;
    uVar3 = uVar8;
  } while( true );
}



/* Entry: 101690f40; end: 1016914f3;  */

undefined8 FUN_101690f40(undefined *param_1,undefined *param_2)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long *plVar22;
  undefined *puVar23;
  undefined *puStack_d0;
  ulong *puStack_c8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined *puStack_98;
  ulong *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  func_0x000107c5fb1c();
  uStack_b0 = 0;
  uStack_a8 = 0xe000000000000000;
  uStack_70 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uStack_70 = (ulong)param_2 >> 0x38 & 0xf;
  }
  uStack_78 = 0;
  puStack_88 = param_1;
  puStack_80 = param_2;
  func_0x000107c5fb84();
  uVar12 = 0xe000000000000000;
  puVar4 = puStack_80;
  uVar18 = 0;
  while (puStack_80 = puVar4, param_2 != (undefined *)0x0) {
    puVar4 = param_1;
    puVar23 = param_2;
    func_0x000107c5fa5c();
    if (((ulong)puVar4 & 1) == 0) {
      puVar23 = param_2;
      func_0x000107c5fb74(param_1);
    }
    func_0x000107c6142c();
    func_0x000107c5fb84();
    uVar12 = uStack_a8;
    param_1 = param_2;
    param_2 = puVar23;
    puVar4 = puStack_80;
    uVar18 = uStack_b0;
  }
  puVar5 = (ulong *)0x0;
  func_0x000107c6142c();
  uStack_70 = uVar18 & 0xffffffffffff;
  if ((uVar12 & 0x2000000000000000) != 0) {
    uStack_70 = uVar12 >> 0x38 & 0xf;
  }
  uStack_78 = 0;
  lVar16 = *(long *)(unaff_x20 + 0x10);
  puStack_88 = (undefined *)uVar18;
  puStack_80 = (undefined *)uVar12;
  func_0x000107c5fb84();
  puVar9 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar5 != (ulong *)0x0) {
    puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar21 = PTR___sSJ4hash4intoys6HasherVz_tF_11034d7f8;
    do {
      puVar23 = (undefined *)0x112da2ff0;
      puStack_90 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001000285a8(0x112da2ff0,&UNK_10d947430);
      puVar10 = (ulong *)0x30;
      func_0x000107c613fc();
      *(undefined8 *)(puVar23 + 0x18) = 2;
      *(undefined8 *)(puVar23 + 0x10) = 1;
      *(undefined **)(puVar23 + 0x20) = puVar4;
      *(ulong **)(puVar23 + 0x28) = puVar5;
      if ((*(long *)(lVar16 + 0x10) != 0) &&
         (FUN_1016917d8(puVar4,puVar5,puVar21,0x101691850), puVar10 = puVar5,
         ((ulong)puVar5 & 1) != 0)) {
        func_0x000107c61434(*(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)puVar4 * 8));
        puVar10 = puVar5;
      }
      puStack_98 = puVar23;
      func_0x0001016915e0();
      puVar23 = puStack_98;
      lVar15 = *(long *)(puStack_d0 + 0x10);
      if (lVar15 != 0) {
        lVar17 = 0;
        plVar1 = (long *)(puStack_98 + 0x28);
        do {
          uVar12 = *(ulong *)(puStack_d0 + lVar17 * 0x10 + 0x20);
          puVar5 = *(ulong **)((long)(puStack_d0 + lVar17 * 0x10 + 0x20) + 8);
          lVar17 = lVar17 + 1;
          lVar19 = *(long *)(puVar23 + 0x10) + 1;
          plVar22 = plVar1;
LAB_101691110:
          lVar19 = lVar19 + -1;
          if (lVar19 != 0) {
            uVar18 = plVar22[-1];
            puVar10 = (ulong *)*plVar22;
            if (uVar18 != uVar12 || puVar10 != puVar5) goto code_r0x000101691128;
            goto LAB_101691164;
          }
          puVar21 = PTR___sSJ4hash4intoys6HasherVz_tF_11034d7f8;
        } while (lVar17 != lVar15);
      }
LAB_101691188:
      uVar12 = *(ulong *)(unaff_x20 + 0x18);
      func_0x000107c6157c(uVar12);
      puVar5 = puVar9;
      func_0x000107c61550();
      if ((((int)puVar5 == 0) || ((long)puVar9 < 0)) ||
         (puVar5 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar10 = *(ulong **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar10 = (ulong *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((ulong *)0x7fffffffffffffff < puVar9) {
            puVar10 = puVar9;
          }
          func_0x000107c60480();
        }
        puVar10 = (ulong *)((long)puVar10 + 1);
        puVar5 = (ulong *)0x0;
        func_0x0001016927ec(0,puVar10,1,puVar9);
      }
      puStack_c8 = (ulong *)((ulong)puVar5 & 0xffffffffffffff8);
      uVar18 = puStack_c8[2];
      puVar9 = (ulong *)(uVar18 + 1);
      puVar8 = puVar5;
      if (puStack_c8[3] >> 1 <= uVar18) {
        puVar8 = (ulong *)(ulong)(1 < puStack_c8[3]);
        puVar10 = puVar9;
        func_0x0001016927ec(puVar8,puVar9,1,puVar5);
        puStack_c8 = (ulong *)((ulong)puVar8 & 0xffffffffffffff8);
      }
      puStack_c8[2] = (ulong)puVar9;
      puStack_c8[uVar18 + 4] = uVar12;
      if ((ulong)puVar8 >> 0x3e == 0) {
LAB_101691204:
        puVar5 = (ulong *)0x0;
        uVar12 = *(ulong *)(puVar23 + 0x10);
        do {
          if (((ulong)puVar8 & 0xc000000000000001) == 0) {
            if ((ulong *)puStack_c8[2] <= puVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1016914f4);
              (*pcVar3)();
            }
            puVar13 = (ulong *)puVar8[(long)((long)puVar5 + 4)];
            func_0x000107c6157c(puVar13);
          }
          else {
            puVar13 = puVar5;
            puVar10 = puVar8;
            FUN_1016918fc();
          }
          if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016914f0);
            (*pcVar3)();
          }
          puVar5 = (ulong *)((long)puVar5 + 1);
          puVar7 = puStack_90;
          if (uVar12 != 0) {
            puVar10 = &uStack_b0;
            func_0x000107c61428(puVar13 + 3,puVar10,0,0);
            uVar18 = 0;
            puVar7 = puStack_90;
            puVar20 = (undefined8 *)(puVar23 + 0x28);
            do {
              if (*(ulong *)(puVar23 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1016914ec);
                (*pcVar3)();
              }
              uVar14 = puVar13[3];
              if (*(long *)(uVar14 + 0x10) != 0) {
                lVar15 = puVar20[-1];
                puVar10 = (ulong *)*puVar20;
                FUN_1016917d8(lVar15,puVar10,puVar21,0x101691850);
                if (((ulong)puVar10 & 1) != 0) {
                  lVar15 = *(long *)(*(long *)(uVar14 + 0x38) + lVar15 * 8);
                  if (*(char *)(lVar15 + 0x10) == '\x01') {
                    puStack_90 = puVar7;
                    func_0x000107c61574(puVar13);
                    func_0x000107c6142c(puVar23);
                    func_0x000107c6142c(puStack_d0);
                    puVar4 = puStack_80;
                    func_0x000107c6142c(puVar8);
                    func_0x000107c6142c(puVar7);
                    func_0x000107c6142c(puVar4);
                    return 1;
                  }
                  puVar10 = (ulong *)0x2;
                  func_0x000107c61580(lVar15);
                  puVar6 = puVar7;
                  func_0x000107c61550();
                  if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
                     (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar7 >> 0x3e == 0) {
                      puVar10 = *(ulong **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar10 = (ulong *)((ulong)puVar7 & 0xffffffffffffff8);
                      if ((ulong *)0x7fffffffffffffff < puVar7) {
                        puVar10 = puVar7;
                      }
                      func_0x000107c60480();
                    }
                    puVar10 = (ulong *)((long)puVar10 + 1);
                    puVar6 = (ulong *)0x0;
                    func_0x0001016927ec(0,puVar10,1,puVar7);
                  }
                  uVar11 = (ulong)puVar6 & 0xffffffffffffff8;
                  uVar14 = *(ulong *)(uVar11 + 0x10);
                  puVar2 = (ulong *)(uVar14 + 1);
                  puVar7 = puVar6;
                  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar14) {
                    puVar7 = (ulong *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
                    puVar10 = puVar2;
                    func_0x0001016927ec(puVar7,puVar2,1,puVar6);
                    uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
                  }
                  *(ulong **)(uVar11 + 0x10) = puVar2;
                  *(long *)(uVar11 + uVar14 * 8 + 0x20) = lVar15;
                  func_0x000107c61574(lVar15);
                  puVar21 = PTR___sSJ4hash4intoys6HasherVz_tF_11034d7f8;
                }
              }
              uVar18 = uVar18 + 1;
              puVar20 = puVar20 + 2;
            } while (uVar12 != uVar18);
          }
          puStack_90 = puVar7;
          func_0x000107c61574(puVar13);
        } while (puVar5 != puVar9);
      }
      else {
        puVar9 = puStack_c8;
        if ((ulong *)0x7fffffffffffffff < puVar8) {
          puVar9 = puVar8;
        }
        func_0x000107c60480();
        if (puVar9 != (ulong *)0x0) goto LAB_101691204;
      }
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c();
      puVar9 = puStack_90;
      func_0x000107c5fb84();
      puVar4 = puStack_d0;
      puVar5 = puVar10;
      puStack_d0 = puVar23;
    } while (puVar10 != (ulong *)0x0);
  }
  func_0x000107c6142c(puVar23);
  puVar4 = puStack_80;
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar4);
  return 0;
code_r0x000101691128:
  plVar22 = plVar22 + 2;
  func_0x000107c605b8(uVar18,puVar10,uVar12,puVar5,0);
  if ((uVar18 & 1) != 0) {
LAB_101691164:
    func_0x000107c61434(puVar9);
    func_0x0001016914f4();
    puVar21 = PTR___sSJ4hash4intoys6HasherVz_tF_11034d7f8;
    goto LAB_101691188;
  }
  goto LAB_101691110;
}



/* Entry: 1016914f4; end: 1016916d7;  */

void FUN_1016914f4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_10169273c(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_101692b14(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016915dc);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016915e0);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016915d8);
  (*pcVar1)();
}



/* Entry: 1016916d8; end: 1016917c3;  */

void FUN_1016916d8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016917c4; end: 1016917d7;  */

void FUN_1016917c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  puVar1 = PTR___sSJ4hash4intoys6HasherVz_tF_11034d7f8;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  puVar2 = auStack_88;
  (*(code *)puVar1)(puVar2,param_1,param_2);
  func_0x000107c606a8();
                    /* WARNING: Could not recover jumptable at 0x00010169184c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101691850)(param_1,param_2,puVar2);
  return;
}



/* Entry: 1016917d8; end: 1016918fb;  */

void FUN_1016917d8(undefined8 param_1,undefined8 param_2,code *param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = auStack_88;
  (*param_3)(puVar1,param_1,param_2);
  func_0x000107c606a8();
                    /* WARNING: Could not recover jumptable at 0x00010169184c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar1);
  return;
}



/* Entry: 1016918fc; end: 101691a97;  */

ulong FUN_1016918fc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016919cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016919d0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000101691748(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000101691748(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000002f,0x800000010efb53a0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101691a98);
  (*pcVar2)();
}



/* Entry: 101691a98; end: 101691ee7;  */

void FUN_101691a98(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112dbebd8,&UNK_10d97a010);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101691b74;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c6157c(uVar12);
        if (uVar8 != 0) break;
LAB_101691b74:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101691c08);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101691be0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101691be0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101691ee8; end: 1016926bb;  */

void FUN_101691ee8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112dbebd8;
  func_0x0001000285a8(0x112dbebd8,&UNK_10d97a010);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101692150:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101692180);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101692150;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101692184);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1016926bc; end: 10169273b;  */

undefined * FUN_1016926bc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101691768();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10169273c; end: 101692913;  */

void FUN_10169273c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x0001016927ec();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 101692914; end: 101692a1b;  */

undefined * FUN_101692914(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101692a1c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112da2ff0;
    func_0x0001000285a8(0x112da2ff0,&UNK_10d947430);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSJN_11034d818);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101692a1c; end: 101692b13;  */

long FUN_101692a1c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101692b10);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101692b14);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000101691748(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000101691748(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101692b0c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101692b14; end: 101692c6b;  */

ulong FUN_101692b14(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101692c6c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101692c60);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000101691748(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101692c64);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101692c68);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c6157c(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c6157c(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1016918fc(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101692c6c; end: 101692d17;  */

void FUN_101692c6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  lVar2 = 0;
  func_0x000101691748();
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1016906ec();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  *(long *)(unaff_x20 + 0x18) = lVar2;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      uStack_50 = puVar4[-1];
      uVar1 = *puVar4;
      uStack_48 = uVar1;
      func_0x000107c61434(uVar1);
      FUN_101690c08(&uStack_50);
      func_0x000107c6142c(uVar1);
      puVar4 = puVar4 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 101692d18; end: 101692d1f; -[_TtC45SCBitmojiFashionTrayPresentingServiceProviderP33_E1588ADA5B367F717D1F0A2A697BC47A29FashionTrayHostViewController shouldPreventOperaBackgroundDismiss] */

undefined8 FUN_101692d18(void)

{
  return 1;
}



/* Entry: 101692d20; end: 101692dd7; -[_TtC45SCBitmojiFashionTrayPresentingServiceProviderP33_E1588ADA5B367F717D1F0A2A697BC47A29FashionTrayHostViewController initWithNibName:bundle:] */

undefined1 * FUN_101692d20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 101692dd8; end: 101692e57; -[_TtC45SCBitmojiFashionTrayPresentingServiceProviderP33_E1588ADA5B367F717D1F0A2A697BC47A29FashionTrayHostViewController initWithCoder:] */

undefined1 * FUN_101692dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 101692e58; end: 101692eef;  */

void FUN_101692e58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101695948();
  func_0x000107c610f8();
  FUN_101692f38(uStack_48,uStack_50,uStack_58,param_2);
  *param_1 = uStack_48;
  param_1[1] = &PTR_DAT_1103f3a78;
  return;
}



/* Entry: 101692ef0; end: 101692f37;  */

void FUN_101692ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_101692f38(param_1,param_2,param_3);
  return;
}



/* Entry: 101692f38; end: 101693007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101692f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dbed78) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbed80);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112dbed88;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112dbed90) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dbed98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dbeda0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbeda8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbedb0) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101693008; end: 101693a83;  */

undefined * FUN_101693008(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [32];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar6 = 0x112d4b5f8;
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    func_0x000107c60498(puVar11,uVar6);
    puVar12 = puVar11;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar13 = 0;
  while( true ) {
    while (uVar15 != 0) {
      uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar13 << 6;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar8 * 0x10);
      uStack_e0 = *puVar2;
      uVar3 = puVar2[1];
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar8 * 8);
      uVar6 = 0;
      uStack_e8 = uVar14;
      uStack_d8 = uVar3;
      FUN_101695ab0(0,0x112dbee20,&PTR_PTR_1126a7800);
      func_0x000107c61438(uVar3,2);
      func_0x000107c61174(uVar14);
      func_0x000107c61174();
      func_0x000107c6147c(auStack_d0,&uStack_e8,uVar6,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c61170(uVar14);
      func_0x000107c6142c(uVar3);
      if (uStack_d8 == 0) {
        func_0x000107c61574(param_1);
        FUN_101695968(&uStack_e0);
        func_0x000107c61574(puVar12);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016932b8);
        (*pcVar4)();
      }
      uVar15 = uVar15 - 1 & uVar15;
      uStack_b0 = uStack_e0;
      uStack_a8 = uStack_d8;
      func_0x000100102924(auStack_d0,auStack_a0);
      uVar8 = uStack_a8;
      uVar3 = uStack_b0;
      func_0x000100102924(auStack_a0,auStack_80);
      uVar7 = uVar3;
      uVar9 = uVar8;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) {
        if (*(ulong *)(puVar12 + 0x18) <= *(ulong *)(puVar12 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101693298);
          (*pcVar4)();
        }
        uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar12 + uVar9 + 0x40) =
             *(ulong *)(puVar12 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar8;
        func_0x000100102924(auStack_80,*(long *)(puVar12 + 0x38) + uVar7 * 0x20);
        if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10169329c);
          (*pcVar4)();
        }
        *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x10);
        uVar9 = puVar2[1];
        *puVar2 = uVar3;
        puVar2[1] = uVar8;
        func_0x000107c6142c(uVar9);
        lVar1 = *(long *)(puVar12 + 0x38) + uVar7 * 0x20;
        func_0x000100183ab8(lVar1);
        func_0x000100102924(auStack_80,lVar1);
      }
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101693294);
      (*pcVar4)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar13) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return puVar12;
}



/* Entry: 101693a84; end: 101693b1f;  */

void FUN_101693a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_19;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_16;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_15;
  *(undefined8 *)(unaff_x22 + 200) = param_18;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_17;
  *(undefined8 *)(unaff_x22 + 0x98) = param_12;
  *(undefined8 *)(unaff_x22 + 0x90) = param_11;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_14;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_13;
  *(undefined8 *)(unaff_x22 + 0x88) = param_10;
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101693b20,uVar1,uVar2);
  return;
}



/* Entry: 101693b20; end: 101694543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101693b20(void)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar19 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  if (lVar19 == 0) {
LAB_101693b80:
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x40) + _DAT_112dbeda0);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar4 != 0) {
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x40) + _DAT_112dbedb0);
        func_0x000107c3dae4();
        func_0x000107c61180();
        lVar3 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar3 != 0) {
          lVar5 = *(long *)(unaff_x22 + 0x70);
          lVar7 = *(long *)(unaff_x22 + 0x78);
          lVar20 = *(long *)(unaff_x22 + 0x40);
          puVar1 = (undefined8 *)(lVar20 + _DAT_112dbed80);
          uVar18 = *puVar1;
          uVar8 = puVar1[1];
          uVar21 = *(undefined8 *)(unaff_x22 + 200);
          puVar1[1] = *(undefined8 *)(unaff_x22 + 0xd0);
          *puVar1 = uVar21;
          func_0x000100cb8860(uVar18,uVar8);
          *(undefined1 *)(lVar20 + _DAT_112dbed90) = 0;
          if ((lVar5 == -0x2fffffffffffffe6) && (lVar7 == -0x7ffffffef104abe0)) {
            bVar2 = 1;
          }
          else {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
            uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
            func_0x000107c605b8(uVar18,uVar8,0xd00000000000001a,0x800000010efb5420,0);
            bVar2 = (byte)uVar18;
          }
          uVar18 = *(undefined8 *)(unaff_x22 + 0xd0);
          lVar5 = *(long *)(unaff_x22 + 0x40);
          *(byte *)(lVar5 + _DAT_112dbed98) = bVar2 & 1;
          puVar6 = PTR_PTR_1126a7810;
          func_0x000107c610f8(PTR_PTR_1126a7810);
          func_0x000107c6157c(uVar18);
          func_0x000107c453e4(puVar6);
          lVar7 = *(long *)(lVar5 + _DAT_112dbeda8);
          func_0x000107c3e550();
          func_0x000107c61180();
          lVar5 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar5 == 0) {
LAB_101693d70:
            lVar5 = 0;
            uVar8 = 0xe000000000000000;
          }
          else {
            lVar7 = lVar5;
            func_0x000107c3e544();
            func_0x000107c61180();
            func_0x000107c615e8(lVar5);
            if (lVar7 == 0) goto LAB_101693d70;
            lVar5 = lVar7;
            func_0x000107c5faec(lVar7);
            func_0x000107c61170(lVar7);
          }
          lVar7 = *(long *)(unaff_x22 + 0xa0);
          func_0x000107c5fadc(lVar5,uVar8);
          func_0x000107c6142c(uVar8);
          func_0x000107c52ae0(puVar6);
          func_0x000107c61170(lVar5);
          if (lVar7 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined8 *)(unaff_x22 + 0xa0);
            func_0x000107c5fc48(uVar18,PTR___sSSN_11034da80);
          }
          lVar5 = *(long *)(unaff_x22 + 0x58);
          func_0x000107c52ae4(puVar6);
          func_0x000107c61170(uVar18);
          if (lVar5 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x50);
            func_0x000107c5fadc(uVar18,*(undefined8 *)(unaff_x22 + 0x58));
          }
          lVar5 = *(long *)(unaff_x22 + 0xa8);
          func_0x000107c59e18(puVar6);
          func_0x000107c61170(uVar18);
          func_0x000107c553dc(puVar6);
          if (lVar5 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
            uVar8 = 0;
            FUN_101695ab0(0,0x112dbee08,&PTR_PTR_1126a77f8);
            func_0x000107c5fc48(uVar18,uVar8);
          }
          lVar5 = *(long *)(unaff_x22 + 0x88);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
          func_0x000107c5707c(puVar6);
          func_0x000107c61170(uVar18);
          func_0x000107c5fadc(uVar8,uVar21);
          func_0x000107c59af4(puVar6);
          func_0x000107c61170(uVar8);
          if (lVar5 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x80);
            func_0x000107c5fadc(uVar18,*(undefined8 *)(unaff_x22 + 0x88));
          }
          lVar5 = *(long *)(unaff_x22 + 0x98);
          func_0x000107c54f30(puVar6);
          func_0x000107c61170(uVar18);
          if (lVar5 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
            func_0x000107c5fadc(uVar18,*(undefined8 *)(unaff_x22 + 0x98));
          }
          lVar7 = *(long *)(unaff_x22 + 0xb8);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x68);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x40);
          func_0x000107c55d70(puVar6);
          func_0x000107c61170(uVar18);
          func_0x000107c5fadc(uVar8,uVar21);
          func_0x000107c57220(puVar6);
          func_0x000107c61170(uVar8);
          puVar9 = &UNK_1103f3ac8;
          func_0x000107c613fc(&UNK_1103f3ac8,0x18,7);
          func_0x000107c61614(puVar9 + 0x10,uVar22);
          *(code **)(unaff_x22 + 0x30) = FUN_1016959b0;
          *(undefined **)(unaff_x22 + 0x38) = puVar9;
          puVar9 = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
          *(undefined **)(unaff_x22 + 0x28) = &UNK_1103f3ae0;
          lVar5 = unaff_x22 + 0x10;
          func_0x000107c60bc4(lVar5);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
          func_0x000107c54208(puVar6);
          func_0x000107c60bd0(lVar5);
          if (lVar7 != 0) {
            uVar18 = *(undefined8 *)(unaff_x22 + 0xb8);
            uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
            uVar21 = *(undefined8 *)(unaff_x22 + 0x40);
            puVar10 = &UNK_1103f3ac8;
            func_0x000107c613fc(&UNK_1103f3ac8,0x18,7);
            func_0x000107c61614(puVar10 + 0x10,uVar21);
            puVar11 = &UNK_1103f3b18;
            func_0x000107c613fc(&UNK_1103f3b18,0x28,7);
            *(undefined **)(puVar11 + 0x10) = puVar10;
            *(undefined8 *)(puVar11 + 0x18) = uVar18;
            *(undefined8 *)(puVar11 + 0x20) = uVar8;
            *(code **)(unaff_x22 + 0x30) = FUN_101695af0;
            *(undefined **)(unaff_x22 + 0x38) = puVar11;
            *(undefined **)(unaff_x22 + 0x10) = puVar9;
            *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
            *(undefined **)(unaff_x22 + 0x20) = &UNK_100c75f50;
            *(undefined **)(unaff_x22 + 0x28) = &UNK_1103f3b30;
            lVar5 = unaff_x22 + 0x10;
            func_0x000107c60bc4(lVar5);
            uVar21 = *(undefined8 *)(unaff_x22 + 0x38);
            FUN_101695bd8(uVar18,uVar8);
            func_0x000107c6157c(uVar8);
            func_0x000107c61574(uVar21);
            func_0x000107c56f60(puVar6);
            func_0x000107c60bd0(lVar5);
            func_0x000100cb8860(uVar18,uVar8);
          }
          uVar18 = *(undefined8 *)(*(long *)(unaff_x22 + 0x40) + _DAT_112dbed88);
          func_0x000107c5cb24(uVar18);
          func_0x000107c61180();
          func_0x000107c56e9c(puVar6);
          func_0x000107c61170(uVar18);
          puVar9 = PTR_PTR_1126afe50;
          func_0x000107c610f8();
          func_0x000107c4842c();
          puVar10 = puVar6;
          func_0x000107c569fc(puVar6);
          FUN_101695918();
          func_0x000107c614e8();
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar11 = PTR_PTR_1126aead8;
          func_0x000107c610f8();
          func_0x000107c61174(puVar10);
          func_0x000107c4807c();
          lVar5 = lVar3;
          func_0x000107c4c1e0(lVar3);
          func_0x000107c61180();
          func_0x000107c52604(puVar6);
          func_0x000107c615e8(lVar5);
          puVar12 = PTR_PTR_1126a7818;
          func_0x000107c610f8();
          func_0x000107c49520();
          puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
          func_0x000107c453e4();
          puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c3fa94();
          func_0x000107c61180();
          func_0x000107c52b50(puVar13);
          func_0x000107c61170(puVar14);
          puVar14 = puVar13;
          func_0x000107c4aba4(puVar13);
          func_0x000107c61180();
          func_0x000107c539d4(0x402e000000000000);
          func_0x000107c61170(puVar14);
          puVar14 = puVar13;
          func_0x000107c4aba4(puVar13);
          func_0x000107c61180();
          func_0x000107c562f8();
          func_0x000107c61170(puVar14);
          func_0x000107c61174();
          func_0x000107c5a050();
          func_0x000107c3d89c(puVar13);
          puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168();
          lVar5 = 0x112d360b8;
          FUN_101694b7c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                        &UNK_10d9011a0);
          func_0x000107c613fc();
          *(undefined8 *)(lVar5 + 0x18) = 9;
          *(undefined8 *)(lVar5 + 0x10) = 4;
          puVar15 = puVar12;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          puVar16 = puVar13;
          func_0x000107c5cbe4(puVar13);
          func_0x000107c61180();
          puVar17 = puVar15;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar15);
          *(undefined **)(lVar5 + 0x20) = puVar17;
          puVar15 = puVar12;
          func_0x000107c4acb0();
          func_0x000107c61180();
          puVar16 = puVar13;
          func_0x000107c4acb0(puVar13);
          func_0x000107c61180();
          puVar17 = puVar15;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar15);
          *(undefined **)(lVar5 + 0x28) = puVar17;
          puVar15 = puVar12;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          puVar16 = puVar13;
          func_0x000107c5ce8c(puVar13);
          func_0x000107c61180();
          puVar17 = puVar15;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar15);
          *(undefined **)(lVar5 + 0x30) = puVar17;
          puVar15 = puVar12;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          func_0x000107c61170(puVar12);
          puVar16 = puVar13;
          func_0x000107c3ec1c(puVar13);
          func_0x000107c61180();
          puVar17 = puVar15;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar15);
          *(undefined **)(lVar5 + 0x38) = puVar17;
          uVar18 = 0;
          FUN_101695ab0(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar7 = lVar5;
          func_0x000107c5fc48(lVar5,uVar18);
          func_0x000107c61574(lVar5);
          func_0x000107c3d048(puVar14);
          func_0x000107c61170(lVar7);
          func_0x000107c5a568(puVar10);
          puVar14 = PTR_PTR_1126b0a08;
          func_0x000107c610f8();
          func_0x000107c48e88();
          func_0x000107c61170(puVar10);
          func_0x000107c52684(puVar14);
          func_0x000107c52aa4(puVar14);
          if (lVar19 == 0) {
            uVar18 = *(undefined8 *)PTR__UIWindowLevelAlert_110345e80;
            puVar15 = PTR_PTR_1126b1c10;
            func_0x000107c610f8(PTR_PTR_1126b1c10);
            func_0x000107c495dc(uVar18);
          }
          else {
            puVar15 = PTR_PTR_1126aead8;
            func_0x000107c610f8(PTR_PTR_1126aead8);
            func_0x000107c4807c();
          }
          lVar19 = *(long *)(unaff_x22 + 0x40);
          func_0x000107c4ef3c(0x3fe6666666666666,puVar14);
          func_0x000107c5a074(puVar14);
          func_0x000107c615e8(puVar15);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar12);
          func_0x000107c615e8(lVar3);
          lVar3 = *(long *)(lVar19 + _DAT_112dbed78);
          *(undefined **)(lVar19 + _DAT_112dbed78) = puVar14;
          goto LAB_101694518;
        }
        func_0x000107c615e8(lVar4);
      }
    }
    (**(code **)(unaff_x22 + 200))();
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0xb0);
    func_0x000107c4f078();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_101693b80;
    lVar4 = lVar3;
    func_0x000107c49aa0();
    if ((int)lVar4 != 0) {
      func_0x000107c61170(lVar3);
      goto LAB_101693b80;
    }
    (**(code **)(unaff_x22 + 200))();
LAB_101694518:
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000101694540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101694544; end: 10169461f;  */

void FUN_101694544(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar19 = *(long *)(unaff_x20 + 0x58);
  lVar17 = *(long *)(unaff_x20 + 0x50);
  lVar14 = *(long *)(unaff_x20 + 0x68);
  lVar11 = *(long *)(unaff_x20 + 0x60);
  lVar20 = *(long *)(unaff_x20 + 0x78);
  lVar18 = *(long *)(unaff_x20 + 0x70);
  lVar15 = *(long *)(unaff_x20 + 0x88);
  lVar12 = *(long *)(unaff_x20 + 0x80);
  lVar16 = *(long *)(unaff_x20 + 0x98);
  lVar13 = *(long *)(unaff_x20 + 0x90);
  lVar10 = *(long *)(unaff_x20 + 0xa0);
  plVar9 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101695e8c;
  plVar9[0x1a] = lVar10;
  plVar9[0x17] = lVar15;
  plVar9[0x16] = lVar12;
  plVar9[0x19] = lVar16;
  plVar9[0x18] = lVar13;
  plVar9[0x13] = lVar14;
  plVar9[0x12] = lVar11;
  plVar9[0x15] = lVar20;
  plVar9[0x14] = lVar18;
  plVar9[0x11] = lVar19;
  plVar9[0x10] = lVar17;
  plVar9[0xe] = lVar2;
  plVar9[0xf] = lVar6;
  plVar9[0xc] = lVar1;
  plVar9[0xd] = lVar5;
  plVar9[10] = lVar7;
  plVar9[0xb] = lVar4;
  plVar9[8] = lVar8;
  plVar9[9] = lVar3;
  lVar7 = 0;
  func_0x000107c5fcec();
  lVar8 = lVar7;
  func_0x000107c5fce8();
  plVar9[0x1b] = lVar8;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar7,lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101693b20,lVar7,lVar8);
  return;
}



/* Entry: 101694620; end: 10169465b;  */

void FUN_101694620(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101694658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10169465c; end: 1016946cb;  */

void FUN_10169465c(undefined8 param_1)

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
  plVar3[1] = 0x101695e88;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1016946cc; end: 10169473f;  */

void FUN_1016946cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101694740,uVar1,uVar2);
  return;
}



/* Entry: 101694740; end: 101694843;  */

void FUN_101694740(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = &UNK_1103f3bb8;
    func_0x000107c613fc(&UNK_1103f3bb8,0x18,7);
    *(long *)(puVar1 + 0x10) = lVar3;
    puVar2 = &UNK_1103f3be0;
    func_0x000107c613fc(&UNK_1103f3be0,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10d97a268;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000107c61174(lVar3);
    func_0x0001001ca524(3,0,0x10,4,0,0,&UNK_10d97a270,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar3);
  }
  (**(code **)(unaff_x22 + 0x30))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000101694840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101694844; end: 101694847; -[_TtC45SCBitmojiFashionTrayPresentingServiceProvider27BitmojiFashionTrayPresenter tray:positionDidChange:] */

void FUN_101694844(void)

{
  return;
}



/* Entry: 101694848; end: 101694933;  */

/* WARNING: Possible PIC construction at 0x000101694980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101694984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101694848(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar3 = _DAT_112dbed90;
  if (*(long *)(unaff_x20 + _DAT_112dbed78) == 0 || param_1 != *(long *)(unaff_x20 + _DAT_112dbed78)
     ) {
    return;
  }
  if ((*(byte *)(unaff_x20 + _DAT_112dbed90) & 1) == 0) {
    bVar4 = *(char *)(unaff_x20 + _DAT_112dbed98) == '\0';
    uVar5 = 0x554f52474b434142;
    if (bVar4) {
      uVar5 = 0x4f445f4550495753;
    }
    uVar6 = 0xee005041545f444e;
    if (bVar4) {
      uVar6 = 0xea00000000004e57;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dbed88);
    func_0x000107c5fadc(uVar5,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x000107c4d664(uVar7);
    func_0x000107c61170(uVar5);
  }
  *(undefined1 *)(unaff_x20 + lVar3) = 0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbed78);
  *(undefined8 *)(unaff_x20 + _DAT_112dbed78) = 0;
  func_0x000107c61170(uVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbed80);
  pcVar2 = (code *)*puVar1;
  uVar5 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pcVar2 != (code *)0x0) {
    func_0x000107c6157c(uVar5);
    (*pcVar2)();
    if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 101694934; end: 1016949a3;  */

/* WARNING: Possible PIC construction at 0x000101694980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101694984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101694934(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dbed78);
  *(undefined8 *)(unaff_x20 + _DAT_112dbed78) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbed80);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  func_0x000107c6157c(uVar3);
  (*pcVar2)();
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1016949a4; end: 1016949f3; -[_TtC45SCBitmojiFashionTrayPresentingServiceProvider27BitmojiFashionTrayPresenter trayDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001016949dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016949e0) */

void FUN_1016949a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101694848(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1016949f4; end: 101694a5f;  */

void FUN_1016949f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101694a60,uVar1,uVar2);
  return;
}



/* Entry: 101694a60; end: 101694abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101694a60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  *(undefined1 *)(lVar1 + _DAT_112dbed90) = 1;
  lVar1 = *(long *)(lVar1 + _DAT_112dbed78);
  if (lVar1 != 0) {
    func_0x000107c42018(lVar1,param_2,1);
  }
  FUN_101694934();
                    /* WARNING: Could not recover jumptable at 0x000101694abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101694ac0; end: 101694ac3;  */

void FUN_101694ac0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101694ac4; end: 101694af7;  */

void FUN_101694ac4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101694af8; end: 101694b73; -[_TtC45SCBitmojiFashionTrayPresentingServiceProvider27BitmojiFashionTrayPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101694b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101694b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101694b18) */
/* WARNING: Removing unreachable block (ram,0x000101694b38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101694af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbeda0));
  return;
}



/* Entry: 101694b74; end: 101694b7b;  */

/* WARNING: Possible PIC construction at 0x000101693330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101693424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101693448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101693478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010169344c) */
/* WARNING: Removing unreachable block (ram,0x000101693428) */
/* WARNING: Removing unreachable block (ram,0x000101693334) */
/* WARNING: Removing unreachable block (ram,0x00010169347c) */
/* WARNING: Removing unreachable block (ram,0x000101693490) */
/* WARNING: Removing unreachable block (ram,0x000101693494) */
/* WARNING: Removing unreachable block (ram,0x000101693498) */
/* WARNING: Removing unreachable block (ram,0x000101693510) */
/* WARNING: Removing unreachable block (ram,0x000101693518) */
/* WARNING: Removing unreachable block (ram,0x0001016934a0) */
/* WARNING: Removing unreachable block (ram,0x0001016934a8) */
/* WARNING: Removing unreachable block (ram,0x0001016934c0) */
/* WARNING: Removing unreachable block (ram,0x0001016934ec) */
/* WARNING: Removing unreachable block (ram,0x0001016934d4) */
/* WARNING: Removing unreachable block (ram,0x0001016934e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101694b74(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  ulong uVar4;
  
  if (param_1 == 0) {
    if (param_13 == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(param_13 + 0x10) != 0) {
        uVar4 = *(ulong *)(param_13 + 0x20);
        puVar1 = PTR_PTR_1126a77f8;
        func_0x000107c610f8(PTR_PTR_1126a77f8);
        param_1 = uVar4 & 0x7fffffffffffffff;
        func_0x000107c61174(param_1);
        func_0x000107c453e4(puVar1);
        if ((long)uVar4 < 0) {
          FUN_1016953e0(param_1);
          func_0x000107c57110(puVar1);
        }
        else {
          puVar1 = PTR_PTR_1126a7800;
          func_0x000107c610f8(PTR_PTR_1126a7800);
          func_0x000107c453e4();
          func_0x000107c4223c(*(undefined8 *)(uVar4 + _DAT_113014778));
          func_0x000107c57060(puVar1);
          param_1 = *(ulong *)(uVar4 + _DAT_113014788);
          if (param_1 != 0) {
            uVar2 = 0;
            FUN_101695ab0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c5fc48(param_1,uVar2);
          }
          func_0x000107c59e98(puVar1);
        }
        goto code_r0x000107c61170;
      }
    }
    puVar3 = &UNK_1103f39e8;
    func_0x000107c613fc(&UNK_1103f39e8,0xa8,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    *(undefined8 *)(puVar3 + 0x30) = param_4;
    *(undefined8 *)(puVar3 + 0x38) = param_5;
    *(undefined8 *)(puVar3 + 0x40) = param_6;
    *(undefined8 *)(puVar3 + 0x48) = param_7;
    *(undefined8 *)(puVar3 + 0x50) = param_8;
    *(undefined8 *)(puVar3 + 0x58) = param_9;
    *(undefined8 *)(puVar3 + 0x60) = param_10;
    *(undefined8 *)(puVar3 + 0x68) = param_11;
    *(undefined8 *)(puVar3 + 0x70) = param_12;
    *(undefined **)(puVar3 + 0x78) = puVar1;
    *(undefined8 *)(puVar3 + 0x80) = param_14;
    *(undefined8 *)(puVar3 + 0x88) = 0;
    *(undefined8 *)(puVar3 + 0x90) = 0;
    *(undefined8 *)(puVar3 + 0x98) = param_15;
    *(undefined8 *)(puVar3 + 0xa0) = param_16;
    puVar1 = &UNK_1103f3a10;
    func_0x000107c613fc(&UNK_1103f3a10,0x20,7);
    *(undefined **)(puVar1 + 0x10) = &UNK_10d97a140;
    *(undefined **)(puVar1 + 0x18) = puVar3;
    func_0x000107c61174(param_14);
    func_0x000107c6157c(param_16);
    func_0x000107c61174(unaff_x20);
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61434(param_9);
    func_0x000107c61434(param_11);
    func_0x000107c61434(param_12);
    uVar2 = 3;
    func_0x0001001ca524(3,0,0x10,4,0,0,&UNK_10d97a150,puVar1);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
    param_1 = 0;
  }
  else {
    func_0x000107c61174();
    FUN_1016953e0();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101694b7c; end: 101694bf3;  */

void FUN_101694b7c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101695ab0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101694bf4; end: 101694d63;  */

void FUN_101694bf4(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112dbee18,&UNK_10d97a240);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101694cd0;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_101694cd0:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101694d64);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101694d3c;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101694d3c:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101694d64; end: 101694fff;  */

void FUN_101694d64(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112dbee18;
  func_0x0001000285a8(0x112dbee18,&UNK_10d97a240);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101694fcc:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101694ffc);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101694fcc;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101695000);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101695000; end: 101695127;  */

ulong FUN_101695000(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101695128);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101695128(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101695124);
      (*pcVar1)();
    }
    FUN_1016951c8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101695128; end: 1016951c7;  */

undefined * FUN_101695128(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112dbee08;
    FUN_101694b7c(0x112dbee08,&PTR_PTR_1126a77f8,0x112dbee10,&UNK_10d97a230);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1016951c8; end: 1016952df;  */

long FUN_1016951c8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016952dc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016952e0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101695ab0(0,0x112dbee08,&PTR_PTR_1126a77f8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101695ab0(0,0x112dbee08,&PTR_PTR_1126a77f8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016952d8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1016952e0; end: 1016953df;  */

undefined * FUN_1016952e0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dbee18,&UNK_10d97a240);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016953dc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016953e0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1016953e0; end: 101695747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016953e0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar6 = PTR_PTR_1126a7808;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1016952e0();
  lVar8 = *(long *)(param_1 + _DAT_113014790);
  uVar15 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(lVar8 + 0x40);
  func_0x000107c61434();
  lVar13 = 0;
  puVar10 = PTR_PTR_1126a7800;
  while( true ) {
    while (PTR_PTR_1126a7800 = puVar10, uVar19 != 0) {
      uVar3 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar13 << 6;
      puVar1 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar14 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      lVar17 = *(long *)(*(long *)(lVar8 + 0x38) + uVar14 * 8);
      func_0x000107c610f8();
      func_0x000107c61434(uVar2);
      func_0x000107c61174();
      func_0x000107c453e4();
      func_0x000107c4223c(*(undefined8 *)(lVar17 + _DAT_113014778));
      func_0x000107c57060(puVar10);
      lVar18 = *(long *)(lVar17 + _DAT_113014788);
      if (lVar18 != 0) {
        uVar9 = 0;
        FUN_101695ab0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c5fc48(lVar18,uVar9);
      }
      func_0x000107c59e98(puVar10);
      func_0x000107c61170(lVar18);
      uVar14 = uVar3;
      func_0x000107c5fadc(uVar3,uVar2);
      func_0x000107c53298(puVar10);
      func_0x000107c61170(uVar14);
      puVar11 = puVar7;
      func_0x000107c61558();
      uVar14 = uVar3;
      uVar12 = uVar2;
      func_0x000100029284();
      uVar16 = (ulong)~(uint)uVar12 & 1;
      lVar18 = *(long *)(puVar7 + 0x10) + uVar16;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101695734);
        (*pcVar4)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar18) {
        FUN_101694d64(lVar18,puVar11);
        uVar14 = uVar3;
        uVar16 = uVar2;
        func_0x000100029284();
        if (((uint)uVar12 & 1) != ((uint)uVar16 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101695748);
          (*pcVar4)();
        }
      }
      else if (((ulong)puVar11 & 1) == 0) {
        FUN_101694bf4();
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar12 & 1) == 0) {
        *(ulong *)(puVar7 + (uVar14 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar7 + (uVar14 >> 6) * 8 + 0x40) | 1L << (uVar14 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar14 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        *(undefined **)(*(long *)(puVar7 + 0x38) + uVar14 * 8) = puVar10;
        func_0x000107c61170(lVar17);
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101695738);
          (*pcVar4)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        puVar10 = PTR_PTR_1126a7800;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar14 * 8);
        *(undefined **)(*(long *)(puVar7 + 0x38) + uVar14 * 8) = puVar10;
        func_0x000107c6142c(uVar2);
        func_0x000107c61170(lVar17);
        func_0x000107c61170(uVar9);
        puVar10 = PTR_PTR_1126a7800;
      }
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101695730);
      (*pcVar4)();
    }
    if ((long)(uVar15 + 0x3f >> 6) <= lVar13) break;
    uVar19 = ((ulong *)(lVar8 + 0x40))[lVar13];
  }
  func_0x000107c61574(lVar8);
  puVar10 = puVar7;
  FUN_101693008(puVar7);
  puVar11 = puVar10;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar10);
  func_0x000107c57114(puVar6);
  func_0x000107c6142c(puVar7);
  func_0x000107c61170(puVar11);
  return puVar6;
}



/* Entry: 101695748; end: 1016957cb;  */

void FUN_101695748(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016957cc; end: 1016958a7;  */

void FUN_1016957cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  lVar19 = *(long *)(unaff_x20 + 0x58);
  lVar17 = *(long *)(unaff_x20 + 0x50);
  lVar14 = *(long *)(unaff_x20 + 0x68);
  lVar11 = *(long *)(unaff_x20 + 0x60);
  lVar20 = *(long *)(unaff_x20 + 0x78);
  lVar18 = *(long *)(unaff_x20 + 0x70);
  lVar15 = *(long *)(unaff_x20 + 0x88);
  lVar12 = *(long *)(unaff_x20 + 0x80);
  lVar16 = *(long *)(unaff_x20 + 0x98);
  lVar13 = *(long *)(unaff_x20 + 0x90);
  lVar10 = *(long *)(unaff_x20 + 0xa0);
  plVar9 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101695e94;
  plVar9[0x1a] = lVar10;
  plVar9[0x17] = lVar15;
  plVar9[0x16] = lVar12;
  plVar9[0x19] = lVar16;
  plVar9[0x18] = lVar13;
  plVar9[0x13] = lVar14;
  plVar9[0x12] = lVar11;
  plVar9[0x15] = lVar20;
  plVar9[0x14] = lVar18;
  plVar9[0x11] = lVar19;
  plVar9[0x10] = lVar17;
  plVar9[0xe] = lVar2;
  plVar9[0xf] = lVar6;
  plVar9[0xc] = lVar1;
  plVar9[0xd] = lVar5;
  plVar9[10] = lVar7;
  plVar9[0xb] = lVar4;
  plVar9[8] = lVar8;
  plVar9[9] = lVar3;
  lVar7 = 0;
  func_0x000107c5fcec();
  lVar8 = lVar7;
  func_0x000107c5fce8();
  plVar9[0x1b] = lVar8;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar7,lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101693b20,lVar7,lVar8);
  return;
}



/* Entry: 1016958a8; end: 101695917;  */

void FUN_1016958a8(undefined8 param_1)

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
  plVar3[1] = 0x101695e90;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101695918; end: 101695937;  */

void FUN_101695918(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4230);
  return;
}



/* Entry: 101695938; end: 101695947;  */

undefined1  [16] FUN_101695938(void)

{
  return ZEXT816(0x1103f3aa8);
}



/* Entry: 101695948; end: 101695967;  */

void FUN_101695948(void)

{
  func_0x000107c61168(&PTR_PTR_1127e42e0);
  return;
}



/* Entry: 101695968; end: 1016959af;  */

undefined8 FUN_101695968(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d74040;
  func_0x0001000285a8(0x112d74040,&UNK_10d934650);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1016959b0; end: 101695a93;  */

void FUN_1016959b0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103f3c08;
    func_0x000107c613fc(&UNK_1103f3c08,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    puVar3 = &UNK_1103f3c30;
    func_0x000107c613fc(&UNK_1103f3c30,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10d97a280;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174(lVar1);
    func_0x0001001ca524(3,0,0x10,4,0,0,&UNK_10d97a288,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101695a94; end: 101695aaf;  */

void FUN_101695a94(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101695ab0; end: 101695aef;  */

void FUN_101695ab0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101695af0; end: 101695bd7;  */

/* WARNING: Possible PIC construction at 0x000101695bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101695bbc) */

void FUN_101695af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_1103f3b68;
  func_0x000107c613fc(&UNK_1103f3b68,0x38,7);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  puVar2 = &UNK_1103f3b90;
  func_0x000107c613fc(&UNK_1103f3b90,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d97a250;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(3,0,0x10,4,0,0,&UNK_10d97a258,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 101695bd8; end: 101695be7;  */

void FUN_101695bd8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101695be8; end: 101695c5b;  */

void FUN_101695be8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101695e9c;
  plVar5[8] = lVar2;
  plVar5[9] = lVar6;
  plVar5[6] = lVar1;
  plVar5[7] = lVar3;
  plVar5[5] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[10] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101694740,lVar3,lVar4);
  return;
}



/* Entry: 101695c5c; end: 101695ccb;  */

void FUN_101695c5c(undefined8 param_1)

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
  plVar3[1] = 0x101695e98;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101695ccc; end: 101695d17;  */

void FUN_101695ccc(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101695ea4;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101694a60,lVar1,lVar3);
  return;
}



/* Entry: 101695d18; end: 101695d87;  */

void FUN_101695d18(undefined8 param_1)

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
  plVar3[1] = 0x101695ea0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101695d88; end: 101695e0f;  */

void FUN_101695d88(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101695dd4;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101694a60,lVar1,lVar3);
  return;
}



/* Entry: 101695e10; end: 101695e7f;  */

void FUN_101695e10(undefined8 param_1)

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
  plVar3[1] = 0x101695ea8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101695e80; end: 101695eaf;  */

void FUN_101695e80(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}


