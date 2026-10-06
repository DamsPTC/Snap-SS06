/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019e7fa8; end: 1019e7fe7;  */

void FUN_1019e7fa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b2e80;
  func_0x000107c61520(&UNK_10d9b2e80,&UNK_110429600);
  puRam0000000112de8328 = puVar1;
  return;
}



/* Entry: 1019e7fe8; end: 1019e7ffb;  */

void FUN_1019e7fe8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1019e7e18();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1019e7278();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1019e7ffc; end: 1019e802b;  */

void FUN_1019e7ffc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1019e802c; end: 1019e802f;  */

void FUN_1019e802c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b2ee8;
  func_0x000107c61520(&UNK_10d9b2ee8,&UNK_110429600);
  puRam0000000112de8330 = puVar1;
  return;
}



/* Entry: 1019e8030; end: 1019e806f;  */

void FUN_1019e8030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b2ee8;
  func_0x000107c61520(&UNK_10d9b2ee8,&UNK_110429600);
  puRam0000000112de8330 = puVar1;
  return;
}



/* Entry: 1019e8070; end: 1019e80c3;  */

long FUN_1019e8070(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1019e80c4; end: 1019e81b3;  */

undefined8 * FUN_1019e80c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_2[6];
  uVar1 = param_2[7];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 1019e81b4; end: 1019e820f;  */

undefined8 * FUN_1019e81b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar2 = param_1[6];
  uVar1 = param_1[7];
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1019e8210; end: 1019e8357;  */

int FUN_1019e8210(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019e8358; end: 1019e8397;  */

void FUN_1019e8358(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9b2e54;
  func_0x000107c61520(&DAT_10d9b2e54,&UNK_110429600);
  puRam0000000112de8340 = puVar1;
  return;
}



/* Entry: 1019e8398; end: 1019e854f;  */

long FUN_1019e8398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1104297f0;
  func_0x000107c613fc(&UNK_1104297f0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  puStack_70 = &UNK_100b9e860;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100b9e824;
  puStack_78 = &UNK_110429808;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126a8418;
  func_0x000107c610f8();
  func_0x000107c473dc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return unaff_x20;
}



/* Entry: 1019e8550; end: 1019e8557;  */

void FUN_1019e8550(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019e8558; end: 1019e857b;  */

void FUN_1019e8558(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019e857c; end: 1019e85a7;  */

void FUN_1019e857c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1019e85a8; end: 1019e866f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1019e85a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112de8478;
  lVar4 = *(long *)(unaff_x20 + _DAT_112de8478);
  lVar2 = lVar4;
  if (lVar4 != 1) goto LAB_1019e8650;
  lVar2 = *(long *)(unaff_x20 + _DAT_112de8428);
  if (lVar2 == 0) {
LAB_1019e8634:
    lVar2 = 0;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_1019e8634;
    lVar3 = lVar2;
    func_0x000107c5d2c0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar2;
  func_0x000107c615f0(lVar2);
  func_0x0001019e8588(uVar5);
LAB_1019e8650:
  func_0x0001019eb004(lVar4);
  return lVar2;
}



/* Entry: 1019e8670; end: 1019e86c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e8670(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112de8470) != 0) {
    func_0x000107c5d320();
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019e86c4; end: 1019e8737; -[_TtC35SCLensRemovalServicesImplementation18LensRemovalManager dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e86c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112de8470);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5d320(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019e8738; end: 1019e880f; -[_TtC35SCLensRemovalServicesImplementation18LensRemovalManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019e87a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019e87e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019e87a8) */
/* WARNING: Removing unreachable block (ram,0x0001019e87e8) */
/* WARNING: Removing unreachable block (ram,0x0001019e8588) */
/* WARNING: Removing unreachable block (ram,0x0001019e8594) */
/* WARNING: Removing unreachable block (ram,0x0001019e8590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e8738(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de8418));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de8420));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de8428));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de8430));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de8438));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112de8440));
  return;
}



/* Entry: 1019e8810; end: 1019e88ff;  */

void FUN_1019e8810(undefined8 param_1,long param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  
  if (param_2 != 0) {
    if (param_4 == (char *)0x0) {
      func_0x000107c6157c(param_3);
      pcVar1 = "removeLens(_:completionPerformer:completion:)";
      func_0x0001000c10c0("removeLens(_:completionPerformer:completion:)");
      func_0x000107c61180();
    }
    else {
      func_0x000107c6157c(param_3);
      pcVar1 = param_4;
    }
    pcVar2 = pcVar1;
    func_0x000107c614f0(pcVar1);
    puVar3 = &UNK_110429b50;
    func_0x000107c613fc(&UNK_110429b50,0x28,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    func_0x0001013c2988(param_2,param_3);
    func_0x000107c615f0(param_4);
    func_0x000107c614b0(param_1);
    func_0x00010090569c(0x1019eb04c,puVar3,pcVar2);
    func_0x0001013c2974(param_2,param_3);
    func_0x000107c615e8(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1019e8900; end: 1019e898f;  */

void FUN_1019e8900(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    FUN_1019e8990(param_4,param_5,param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1019e8990; end: 1019e8e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e8990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_c0 = param_1;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar13 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar14 - extraout_x12_00;
  puVar10 = *(undefined **)(unaff_x20 + _DAT_112de8460);
  puVar3 = puVar10;
  func_0x000107c614f0();
  puStack_b8 = puVar3;
  puStack_b0 = puVar10;
  func_0x000100bc7fa4();
  func_0x000100bcbc04();
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112de8440);
  puStack_68 = puVar3;
  func_0x000107c61434(param_2);
  func_0x000107c40ef8(uVar15);
  func_0x000107c61180();
  func_0x000107c5ee94(lVar12);
  func_0x000107c61170(uVar15);
  (**(code **)(lVar11 + 0x38))(lVar12,0,1,lVar2);
  func_0x0001003a4c00(lVar12,lVar14);
  lVar12 = lVar14;
  (**(code **)(lVar11 + 0x30))(lVar14,1,lVar2);
  if ((int)lVar12 == 1) {
    func_0x0001019eb0bc(lVar14,0x112d373d8,&UNK_10d9014c0);
    uVar15 = uStack_c0;
    func_0x000100fda9f8(lVar13,uStack_c0,param_2);
    func_0x000107c6142c(param_2);
    func_0x0001019eb0bc(lVar13,0x112d373d8,&UNK_10d9014c0);
    puVar3 = puStack_68;
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,lVar14,lVar2);
    puVar10 = puVar3;
    func_0x000107c61558(puVar3);
    uVar15 = uStack_c0;
    puStack_98 = puVar3;
    func_0x000100fdab18(lVar9,uStack_c0,param_2,puVar10);
    func_0x000107c6142c(param_2);
    puVar3 = puStack_98;
  }
  func_0x0001019e92e8(puVar3);
  puVar10 = &UNK_110429970;
  func_0x000107c613fc(&UNK_110429970,0x18,7);
  *(undefined8 *)(puVar10 + 0x10) = 0;
  puVar4 = puVar10;
  func_0x000107c60f34();
  func_0x000107c60f38();
  func_0x000107c6157c(puVar10);
  func_0x000107c61174();
  FUN_1019ea93c(uVar15,param_2);
  func_0x000107c61574(puVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c60f38(puVar4);
  puVar5 = &UNK_110429998;
  func_0x000107c613fc(&UNK_110429998,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar10;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c6157c(puVar10);
  func_0x000107c61174(puVar4);
  puVar1 = puStack_b0;
  func_0x000100bc7fa4(puStack_b8);
  lVar12 = *(long *)(unaff_x20 + _DAT_112de8430);
  if (lVar12 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar12 != 0) {
      uVar6 = uVar15;
      func_0x000107c5fadc(uVar15,param_2);
      lVar2 = lVar12;
      puStack_b8 = puVar3;
      func_0x000107c4b138(lVar12);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      puVar3 = &UNK_1104298a8;
      func_0x000107c613fc(&UNK_1104298a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar7 = &UNK_1104299e8;
      func_0x000107c613fc(&UNK_1104299e8,0x38,7);
      *(undefined **)(puVar7 + 0x10) = puVar3;
      *(code **)(puVar7 + 0x18) = FUN_1019eaf18;
      *(undefined **)(puVar7 + 0x20) = puVar5;
      *(undefined8 *)(puVar7 + 0x28) = uVar15;
      *(undefined8 *)(puVar7 + 0x30) = param_2;
      pcStack_78 = FUN_1019eaf70;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      uStack_88 = 0x1019eb2e0;
      puStack_80 = &UNK_110429a00;
      ppuVar8 = &puStack_98;
      puStack_70 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar3 = puStack_70;
      func_0x000107c61434(param_2);
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c5dc64(lVar2);
      func_0x000107c61574(puVar5);
      puVar3 = puStack_b8;
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(lVar2);
      goto LAB_1019e8dcc;
    }
  }
  func_0x000107c61428(puVar10 + 0x10,&puStack_98,1,0);
  func_0x000107c60f3c(puVar4);
  func_0x000107c61574(puVar5);
LAB_1019e8dcc:
  puVar5 = &UNK_1104299c0;
  func_0x000107c613fc(&UNK_1104299c0,0x28,7);
  uVar15 = uStack_a0;
  *(undefined8 *)(puVar5 + 0x10) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x18) = uStack_a0;
  *(undefined **)(puVar5 + 0x20) = puVar10;
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(uVar15);
  func_0x00010488b768(puVar1,FUN_1019eaf30,puVar5);
  func_0x000107c61574(puVar10);
  func_0x000107c6142c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1019e8e58; end: 1019e9007; -[_TtC35SCLensRemovalServicesImplementation18LensRemovalManager removeLens:completionPerformer:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e8e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar4 = &UNK_110429948;
    func_0x000107c613fc(&UNK_110429948,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    uVar5 = 0x1019ea934;
  }
  puVar1 = &UNK_1104298f8;
  func_0x000107c613fc(&UNK_1104298f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined **)(puVar1 + 0x18) = puVar4;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar6 = *(undefined8 *)(param_1 + _DAT_112de8460);
  func_0x000107c614f0();
  puVar2 = &UNK_1104298a8;
  func_0x000107c613fc(&UNK_1104298a8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110429920;
  func_0x000107c613fc(&UNK_110429920,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = 0x1019ea918;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174(param_1);
  func_0x0001013c2988(uVar5,puVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(0x1019ea924,puVar3,uVar6);
  func_0x0001013c2974(uVar5,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 1019e9008; end: 1019e90cb;  */

void FUN_1019e9008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    func_0x000107c61434(param_3);
    func_0x000100bce55c(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61588(lVar1);
    func_0x000100bcb1dc((undefined8 *)(lVar1 + 0x20));
  }
  return;
}



/* Entry: 1019e90cc; end: 1019e91bb; -[_TtC35SCLensRemovalServicesImplementation18LensRemovalManager restoreLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e90cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112de8460);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1104298a8;
  func_0x000107c613fc(&UNK_1104298a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1104298d0;
  func_0x000107c613fc(&UNK_1104298d0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(FUN_1019ea90c,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019e91bc; end: 1019e924b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e91bc(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c614f0(*(undefined8 *)(param_1 + _DAT_112de8460));
    func_0x000100bc7fa4();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100bcbf04(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x0001019e92e8();
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 1019e924c; end: 1019e94a3; -[_TtC35SCLensRemovalServicesImplementation18LensRemovalManager restoreAllLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e924c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112de8460);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_1104298a8;
  func_0x000107c613fc(&UNK_1104298a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(FUN_1019ea4e4,puVar1,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 1019e94a4; end: 1019e957f;  */

void FUN_1019e94a4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    puVar3 = auStack_88;
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined1 **)(lVar1 + 0x28) = puVar3;
    func_0x000100bce55c(lVar1);
    func_0x000107c61170(param_2);
    func_0x000107c61588(lVar1);
    func_0x000100bcb1dc((undefined8 *)(lVar1 + 0x20));
  }
  return;
}



/* Entry: 1019e9580; end: 1019e9787;  */

void FUN_1019e9580(undefined *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_78 [24];
  
  func_0x000107c42e10();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    return;
  }
  uVar4 = 0;
  func_0x000100bcdabc(0,0x112de84f8,&PTR_PTR_1126bbcc0);
  puVar5 = param_1;
  func_0x000107c5fc54(param_1,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) goto LAB_1019e975c;
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    if (puVar11 == (undefined *)0x0) goto LAB_1019e9738;
LAB_1019e9620:
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar9 = (undefined *)((ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,puVar9,0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019e9788);
      (*pcVar3)();
    }
    puVar12 = (undefined *)0x0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        puVar6 = *(undefined **)(puVar5 + (long)puVar12 * 8 + 0x20);
        func_0x000107c61174();
        puVar10 = puVar9;
      }
      else {
        puVar6 = puVar12;
        puVar10 = puVar5;
        FUN_1019ea4ec(puVar12,puVar5,&PTR_PTR_1126bbcc0,0x112de84f8);
      }
      func_0x000107c61174();
      puVar7 = puVar6;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x000107c5faec();
      puVar9 = puVar10;
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puVar6 = (undefined *)(uVar1 + 1);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        puVar9 = puVar6;
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),puVar6,1);
      }
      puVar12 = puVar12 + 1;
      *(undefined **)(puVar2 + 0x10) = puVar6;
      *(undefined **)(puVar2 + uVar1 * 0x10 + 0x20) = puVar8;
      *(undefined **)(puVar2 + uVar1 * 0x10 + 0x28) = puVar10;
    } while (puVar11 != puVar12);
    func_0x000107c6142c(puVar5);
    puVar5 = puVar2;
  }
  else {
    puVar11 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar11 = puVar5;
    }
    func_0x000107c60480();
    if (puVar11 != (undefined *)0x0) goto LAB_1019e9620;
LAB_1019e9738:
    func_0x000107c6142c(puVar5);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  func_0x000100bce55c(puVar5);
  func_0x000107c61170(param_2);
LAB_1019e975c:
  func_0x000107c6142c(puVar5);
  return;
}



/* Entry: 1019e9788; end: 1019e97d3;  */

void FUN_1019e9788(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1019e97d4; end: 1019e993b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019e97d4(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  func_0x000107c61434();
  uVar4 = 0;
  lVar1 = -0x2fffffffffffffdd;
  func_0x000100029284(0xd000000000000023);
  if ((uVar4 & 1) != 0) {
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_60);
    func_0x000107c6142c(param_1);
    uVar5 = 0x112de8500;
    func_0x0001000285a8(0x112de8500,&UNK_10d9b3118);
    plVar2 = &lStack_68;
    func_0x000107c6147c(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,uVar5,6);
    if (((ulong)plVar2 & 1) == 0) {
      return;
    }
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    param_1 = lStack_68;
    if (param_2 != 0) {
      func_0x000107c614f0(*(undefined8 *)(param_2 + _DAT_112de8460));
      func_0x000100bc7fa4();
      uVar5 = *(undefined8 *)(param_2 + _DAT_112de8450);
      lVar1 = lStack_68;
      func_0x000107c61434(lStack_68);
      func_0x000100bcc4c4();
      lVar3 = lVar1;
      func_0x000107c5fe08();
      func_0x000107c6142c(lVar1);
      func_0x000107c4d664(uVar5);
      func_0x000107c6142c(lStack_68);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar3);
      return;
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 1019e993c; end: 1019e99a7;  */

void FUN_1019e993c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019e99a8; end: 1019e9ea3;  */

undefined * FUN_1019e99a8(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  ulong *puVar11;
  long extraout_x8_02;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long extraout_x12;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  undefined *puStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  lVar17 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0x112de84a8;
  func_0x0001000285a8(0x112de84a8,&UNK_10da1a5d0);
  lStack_f8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&puStack_150 - extraout_x8) - extraout_x8_00;
  lVar17 = 0x112d53b50;
  lStack_100 = lVar10;
  func_0x0001000285a8(0x112d53b50,&UNK_10d91a730);
  lStack_108 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(lVar10 - extraout_x8_01);
  lVar10 = 0;
  puStack_110 = puVar11;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar13 = (long)puVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_118 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = *(undefined **)(param_1 + 0x10);
  puVar16 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar15 != (undefined *)0x0) {
    uVar6 = 0x112d52ae0;
    func_0x0001000285a8(0x112d52ae0,&UNK_10d9192a0);
    func_0x000107c60498(puVar15,uVar6);
    puVar16 = puVar15;
  }
  uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(param_1 + 0x40);
  puStack_150 = puVar16 + 0x40;
  func_0x000107c61434(param_1);
  lVar18 = 0;
  lStack_120 = lVar13 - extraout_x12;
  lStack_128 = lVar17;
  lStack_130 = param_1;
  puStack_138 = (undefined1 *)((long)&puStack_150 - extraout_x8);
  puStack_140 = (ulong *)(param_1 + 0x40);
  uStack_148 = uVar14 + 0x3f >> 6;
  while( true ) {
    while (lVar13 = lStack_130, puVar9 = puStack_138, uVar20 == 0) {
      bVar5 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1019e9e9c);
        (*pcVar19)();
      }
      if ((long)uStack_148 <= lVar18) {
        func_0x000107c61574(lStack_130);
        return puVar16;
      }
      uVar20 = puStack_140[lVar18];
    }
    uVar14 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar18 << 6;
    func_0x0001007bbd18(*(long *)(lStack_130 + 0x30) + uVar14 * 0x28,auStack_b0);
    func_0x0001000bb420(*(long *)(lVar13 + 0x38) + uVar14 * 0x20,auStack_88);
    func_0x0001007bbd18(auStack_b0,auStack_d8);
    puVar11 = &uStack_e8;
    func_0x000107c6147c(puVar11,auStack_d8,PTR___ss11AnyHashableVN_11034e448,PTR___sSSN_11034da80,6)
    ;
    uVar14 = uStack_e8;
    if ((int)puVar11 == 0) break;
    uStack_f0 = uStack_e0;
    func_0x0001000bb420(auStack_88,auStack_d8);
    func_0x0001019eb0bc(auStack_b0,0x112d69838,&UNK_10d92d0b0);
    puVar7 = puVar9;
    func_0x000107c6147c(puVar9,auStack_d8,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c61574(lVar13);
      func_0x000107c6142c(uStack_f0);
      (**(code **)(lVar17 + 0x38))(puVar9,1,1,lVar10);
      uVar6 = 0x112d373d8;
      puVar15 = &UNK_10d9014c0;
      goto LAB_1019e9e64;
    }
    uVar20 = uVar20 - 1 & uVar20;
    (**(code **)(lVar17 + 0x38))(puVar9,0,1,lVar10);
    lVar13 = lStack_118;
    pcVar19 = *(code **)(lVar17 + 0x20);
    (*pcVar19)(lStack_118,puVar9,lVar10);
    lVar4 = lStack_100;
    iVar2 = *(int *)(lStack_f8 + 0x30);
    (*pcVar19)(lStack_100 + iVar2,lVar13,lVar10);
    uVar1 = uStack_f0;
    lVar17 = lStack_108;
    puVar11 = puStack_110;
    iVar3 = *(int *)(lStack_108 + 0x30);
    *puStack_110 = uVar14;
    puVar11[1] = uVar1;
    (*pcVar19)((long)puVar11 + (long)iVar3,lVar4 + iVar2,lVar10);
    lVar13 = lStack_120;
    uVar14 = *puVar11;
    uVar1 = puVar11[1];
    (*pcVar19)(lStack_120,(long)puVar11 + (long)*(int *)(lVar17 + 0x30),lVar10);
    uVar8 = uVar14;
    uVar12 = uVar1;
    func_0x000100029284();
    lVar17 = lStack_128;
    if ((uVar12 & 1) == 0) {
      if (*(ulong *)(puVar16 + 0x18) <= *(ulong *)(puVar16 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1019e9ea0);
        (*pcVar19)();
      }
      uVar12 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puStack_150 + uVar12) = *(ulong *)(puStack_150 + uVar12) | 1L << (uVar8 & 0x3f);
      puVar11 = (ulong *)(*(long *)(puVar16 + 0x30) + uVar8 * 0x10);
      *puVar11 = uVar14;
      puVar11[1] = uVar1;
      (*pcVar19)(*(long *)(puVar16 + 0x38) + *(long *)(lStack_128 + 0x48) * uVar8,lVar13,lVar10);
      if (SCARRY8(*(long *)(puVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1019e9ea4);
        (*pcVar19)();
      }
      *(long *)(puVar16 + 0x10) = *(long *)(puVar16 + 0x10) + 1;
    }
    else {
      puVar11 = (ulong *)(*(long *)(puVar16 + 0x30) + uVar8 * 0x10);
      uVar12 = puVar11[1];
      *puVar11 = uVar14;
      puVar11[1] = uVar1;
      func_0x000107c6142c(uVar12);
      lVar17 = lStack_128;
      (**(code **)(lStack_128 + 0x28))
                (*(long *)(puVar16 + 0x38) + *(long *)(lStack_128 + 0x48) * uVar8,lVar13,lVar10);
    }
  }
  func_0x000107c61574(lVar13);
  uVar6 = 0x112d69838;
  puVar15 = &UNK_10d92d0b0;
  puVar9 = auStack_b0;
LAB_1019e9e64:
  func_0x0001019eb0bc(puVar9,uVar6,puVar15);
  func_0x000107c61574(puVar16);
  return (undefined *)0x0;
}



/* Entry: 1019e9ea4; end: 1019e9f1f;  */

void FUN_1019e9ea4(long *param_1,long param_2,code *param_3)

{
  undefined *puVar1;
  
  if (param_2 == 200) {
    (*param_3)(0);
    return;
  }
  FUN_1019eaf80();
  puVar1 = &UNK_110429cb0;
  func_0x000107c613f8(&UNK_110429cb0,param_1,0,0);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 1019e9f20; end: 1019ea06f;  */

void FUN_1019e9f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1019ea070; end: 1019ea1bf;  */

void FUN_1019ea070(long *param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  plVar1 = (long *)(param_3 + 0x10);
  func_0x000107c61618();
  if (plVar1 == (long *)0x0) {
    (*param_4)();
    return;
  }
  if (param_2 == 0) {
    if (param_1 != (long *)0x0) {
      func_0x000107c61174();
      plVar2 = param_1;
      func_0x000107c5bd00();
      if (plVar2 == (long *)0x2) {
        FUN_1019ea1c0(param_6,param_7,param_4,param_5);
      }
      else {
        (*param_4)(0);
      }
      func_0x000107c61170(plVar1);
      goto LAB_1019ea1a0;
    }
    plVar2 = plVar1;
    FUN_1019eaf80();
    puVar3 = &UNK_110429cb0;
    func_0x000107c613f8(&UNK_110429cb0,plVar2,0,0);
    *plVar2 = 0;
    *(undefined1 *)(plVar2 + 1) = 1;
  }
  else {
    plVar2 = plVar1;
    FUN_1019eaf80();
    puVar3 = &UNK_110429cb0;
    func_0x000107c613f8(&UNK_110429cb0,plVar2,0,0);
    *plVar2 = param_2;
    *(undefined1 *)(plVar2 + 1) = 1;
    func_0x000107c614b0(param_2);
  }
  (*param_4)();
  func_0x000107c614ac(puVar3);
  param_1 = plVar1;
LAB_1019ea1a0:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019ea1c0; end: 1019ea35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019ea1c0(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112de8460));
  func_0x000100bc7fa4();
  lVar1 = *(long *)(unaff_x20 + _DAT_112de8438);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      lVar2 = lVar1;
      func_0x000107c5d214(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      puVar5 = &UNK_110429a38;
      func_0x000107c613fc(&UNK_110429a38,0x20,7);
      *(code **)(puVar5 + 0x10) = param_3;
      *(undefined8 *)(puVar5 + 0x18) = param_4;
      pcStack_50 = FUN_1019eafc0;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      uStack_60 = 0x1019eb2e0;
      puStack_58 = &UNK_110429a50;
      puStack_48 = puVar5;
      func_0x000107c60bc4(&puStack_70);
      puVar5 = puStack_48;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(puVar5);
      func_0x000107c5dc64(lVar2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      return;
    }
  }
  puVar4 = (undefined8 *)0x0;
  FUN_1019eaf80();
  puVar5 = &UNK_110429cb0;
  func_0x000107c613f8(&UNK_110429cb0,puVar4,0,0);
  *puVar4 = 1;
  *(undefined1 *)(puVar4 + 1) = 3;
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar5);
  return;
}



/* Entry: 1019ea35c; end: 1019ea43f;  */

/* WARNING: Possible PIC construction at 0x0001019ea3f8: Changing call to branch */

void FUN_1019ea35c(long *param_1,long param_2,code *param_3)

{
  long *plVar1;
  undefined *puVar2;
  
  if (param_2 == 0) {
    if (param_1 != (long *)0x0) {
      func_0x000107c61174();
      plVar1 = param_1;
      func_0x000107c5bd00();
      if (plVar1 == (long *)0x3) {
        (*param_3)(0);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    FUN_1019eaf80();
    puVar2 = &UNK_110429cb0;
    func_0x000107c613f8(&UNK_110429cb0,param_1,0,0);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 2;
    (*param_3)();
  }
  else {
    FUN_1019eaf80();
    puVar2 = &UNK_110429cb0;
    func_0x000107c613f8(&UNK_110429cb0,param_1,0,0);
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 2;
    func_0x000107c614b0(param_2);
    (*param_3)(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 1019ea440; end: 1019ea4b7;  */

/* WARNING: Possible PIC construction at 0x0001019ea49c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019ea4a0) */

void FUN_1019ea440(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1019ea4b8; end: 1019ea4e3; -[_TtC35SCLensRemovalServicesImplementation18LensRemovalManager init] */

void FUN_1019ea4b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensRemovalServicesImplementation.LensRemovalManager",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ea4e4);
  (*pcVar1)();
}



/* Entry: 1019ea4e4; end: 1019ea4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019ea4e4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c614f0(*(undefined8 *)(lVar1 + _DAT_112de8460));
    func_0x000100bc7fa4();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100bcbf04(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x0001019e92e8();
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 1019ea4ec; end: 1019ea6a7;  */

ulong FUN_1019ea4ec(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ea5d0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ea5d4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000100bcdabc(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ea6a8);
  (*pcVar2)();
}



/* Entry: 1019ea6a8; end: 1019ea7bb;  */

undefined *
FUN_1019ea6a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ea7bc);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
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
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1019ea7bc; end: 1019ea90b;  */

long FUN_1019ea7bc(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1019ea90c);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019ea908);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_1019ea8cc;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      func_0x000107c61434();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434();
  }
LAB_1019ea8cc:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 1019ea90c; end: 1019ea93b;  */

void FUN_1019ea90c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    func_0x000107c61434(uVar4);
    func_0x000100bce55c(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61588(lVar3);
    func_0x000100bcb1dc((undefined8 *)(lVar3 + 0x20));
  }
  return;
}



/* Entry: 1019ea93c; end: 1019eaf17;  */

void FUN_1019ea93c(byte *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  undefined8 auStack_e0 [4];
  undefined1 auStack_c0 [8];
  byte *pbStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = 0;
  func_0x000107c5f804();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_c0 + lVar2;
  puVar5 = &UNK_110429a88;
  func_0x000107c613fc(&UNK_110429a88,0x20,7);
  *(long *)(puVar5 + 0x10) = param_4;
  *(undefined8 **)(puVar5 + 0x18) = param_5;
  puVar12 = (undefined8 *)((ulong)param_1 & 0xffffffffffff);
  puVar13 = (undefined8 *)((ulong)param_2 >> 0x38 & 0xf);
  puVar10 = puVar12;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    puVar10 = puVar13;
  }
  if (puVar10 == (undefined8 *)0x0) {
    func_0x000107c6157c(param_4);
    puVar10 = param_5;
    func_0x000107c61174();
    goto LAB_1019eae14;
  }
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        param_1 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        param_2 = puVar12;
      }
      if (*param_1 == 0x2b) {
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019eaf14);
          (*pcVar3)();
        }
        lVar19 = (long)param_2 + -1;
        if (lVar19 == 0) goto LAB_1019eac18;
        lVar18 = 0;
        do {
          param_1 = param_1 + 1;
          if (((9 < *param_1 - 0x30) ||
              (lVar15 = lVar18 * 10, SUB168(SEXT816(lVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*param_1 - 0x30), lVar18 = lVar15 + uVar1, SCARRY8(lVar15,uVar1)
             )) goto LAB_1019eac18;
          uVar20 = 0;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      else if (*param_1 == 0x2d) {
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019eaf0c);
          (*pcVar3)();
        }
        lVar19 = (long)param_2 + -1;
        if (lVar19 == 0) {
LAB_1019eac18:
          uVar20 = 1;
        }
        else {
          lVar18 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (lVar15 = lVar18 * 10, SUB168(SEXT816(lVar18) * SEXT816(10),8) != lVar15 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*param_1 - 0x30), lVar18 = lVar15 - uVar1,
                  SBORROW8(lVar15,uVar1))) goto LAB_1019eac18;
            uVar20 = 0;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
      }
      else {
        if (param_2 == (undefined8 *)0x0) goto LAB_1019eac18;
        lVar19 = 0;
        if (param_1 == (byte *)0x0) {
          uVar20 = 0;
        }
        else {
          do {
            if (((9 < *param_1 - 0x30) ||
                (lVar18 = lVar19 * 10, SUB168(SEXT816(lVar19) * SEXT816(10),8) != lVar18 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*param_1 - 0x30), lVar19 = lVar18 + uVar1,
                  SCARRY8(lVar18,uVar1))) goto LAB_1019eac18;
            uVar20 = 0;
            param_2 = (undefined8 *)((long)param_2 + -1);
            param_1 = param_1 + 1;
          } while (param_2 != (undefined8 *)0x0);
        }
      }
    }
    else {
      pbStack_b8 = param_1;
      uStack_b0 = (ulong)param_2 & 0xffffffffffffff;
      uVar20 = (uint)param_1 & 0xff;
      if (uVar20 == 0x2b) {
        if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019eaf18);
          (*pcVar3)();
        }
        lVar19 = (long)puVar13 + -1;
        if (lVar19 == 0) goto LAB_1019eac18;
        lVar18 = 0;
        pbVar14 = (byte *)((ulong)&pbStack_b8 | 1);
        do {
          if (((9 < *pbVar14 - 0x30) ||
              (lVar15 = lVar18 * 10, SUB168(SEXT816(lVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar14 - 0x30), lVar18 = lVar15 + uVar1, SCARRY8(lVar15,uVar1)
             )) goto LAB_1019eac18;
          uVar20 = 0;
          lVar19 = lVar19 + -1;
          pbVar14 = pbVar14 + 1;
        } while (lVar19 != 0);
      }
      else if (uVar20 == 0x2d) {
        if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019eaf10);
          (*pcVar3)();
        }
        lVar19 = (long)puVar13 + -1;
        if (lVar19 == 0) goto LAB_1019eac18;
        lVar18 = 0;
        pbVar14 = (byte *)((ulong)&pbStack_b8 | 1);
        do {
          if (((9 < *pbVar14 - 0x30) ||
              (lVar15 = lVar18 * 10, SUB168(SEXT816(lVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar14 - 0x30), lVar18 = lVar15 - uVar1,
             SBORROW8(lVar15,uVar1))) goto LAB_1019eac18;
          uVar20 = 0;
          lVar19 = lVar19 + -1;
          pbVar14 = pbVar14 + 1;
        } while (lVar19 != 0);
      }
      else {
        if (puVar13 == (undefined8 *)0x0) goto LAB_1019eac18;
        lVar19 = 0;
        ppbVar8 = &pbStack_b8;
        do {
          if (((9 < *(byte *)ppbVar8 - 0x30) ||
              (lVar18 = lVar19 * 10, SUB168(SEXT816(lVar19) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)ppbVar8 - 0x30), lVar19 = lVar18 + uVar1,
             SCARRY8(lVar18,uVar1))) goto LAB_1019eac18;
          uVar20 = 0;
          puVar13 = (undefined8 *)((long)puVar13 + -1);
          ppbVar8 = (byte **)((long)ppbVar8 + 1);
        } while (puVar13 != (undefined8 *)0x0);
      }
    }
    func_0x000107c6157c(param_4);
    param_2 = param_5;
    func_0x000107c61174();
  }
  else {
    func_0x000107c6157c(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61434(param_2);
    puVar10 = param_2;
    func_0x000100fb6b80(param_1,param_2,10);
    uVar20 = (uint)puVar10;
    func_0x000107c6142c();
  }
  puVar10 = param_2;
  if ((uVar20 & 0xff) != 1) {
    FUN_1019e85a8();
    puVar10 = (undefined8 *)0x0;
    if (param_2 != (undefined8 *)0x0) {
      puVar6 = PTR_PTR_1126bbee0;
      func_0x000107c610f8(PTR_PTR_1126bbee0);
      func_0x000107c47374();
      func_0x000100bcdabc(0,0x112d56378,&PTR_PTR_1126ae790);
      (**(code **)(lVar21 + 0x68))
                (puVar17,*(undefined4 *)
                          PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar4);
      puVar7 = puVar17;
      func_0x000104188018(puVar17,0,0);
      (**(code **)(lVar21 + 8))(puVar17,lVar4);
      puVar11 = &UNK_110429ab0;
      func_0x000107c613fc(&UNK_110429ab0,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = 0x1019eb2d4;
      *(undefined **)(puVar11 + 0x18) = puVar5;
      puVar16 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = FUN_1019eaff4;
      pbStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_1019e9f20;
      puStack_a0 = &UNK_110429ac8;
      ppbVar8 = &pbStack_b8;
      puStack_90 = puVar11;
      func_0x000107c60bc4();
      puVar11 = puStack_90;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar11);
      puVar11 = &UNK_110429b00;
      func_0x000107c613fc(&UNK_110429b00,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = 0x1019eb2d4;
      *(undefined **)(puVar11 + 0x18) = puVar5;
      pcStack_98 = (code *)0x1019eaffc;
      pbStack_b8 = puVar16;
      uStack_b0 = 0x42000000;
      pcStack_a8 = (code *)0x1019ea004;
      puStack_a0 = &UNK_110429b18;
      ppbVar9 = &pbStack_b8;
      puStack_90 = puVar11;
      func_0x000107c60bc4();
      puVar11 = puStack_90;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar11);
      *(byte ***)((long)auStack_e0 + lVar2 + 8) = ppbVar8;
      *(byte ***)((long)auStack_e0 + lVar2 + 0x10) = ppbVar9;
      *(undefined1 **)((long)auStack_e0 + lVar2) = puVar7;
      func_0x000107c3d92c(param_2);
      func_0x000107c60bd0(ppbVar9);
      func_0x000107c60bd0(ppbVar8);
      func_0x000107c61574(puVar5);
      func_0x000107c615e8(param_2);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      return;
    }
  }
LAB_1019eae14:
  FUN_1019eaf80();
  puVar11 = &UNK_110429cb0;
  func_0x000107c613f8(&UNK_110429cb0,puVar10,0,0);
  *puVar10 = 0;
  *(undefined1 *)(puVar10 + 1) = 3;
  func_0x000107c61428(param_4 + 0x10,&pbStack_b8,0,0);
  puVar16 = *(undefined **)(param_4 + 0x10);
  if (*(undefined **)(param_4 + 0x10) == (undefined *)0x0) {
    func_0x000107c614b0(puVar11);
    puVar16 = puVar11;
  }
  func_0x000107c61428(param_4 + 0x10,auStack_88,1,0);
  *(undefined **)(param_4 + 0x10) = puVar16;
  func_0x000107c60f3c(param_5);
  func_0x000107c614ac(puVar11);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1019eaf18; end: 1019eaf2f;  */

void FUN_1019eaf18(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001019e93c4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1019eaf30; end: 1019eaf3b;  */

void FUN_1019eaf30(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c614b0(uVar3);
  (*pcVar1)(uVar3);
  func_0x000107c614ac(uVar3);
  return;
}



/* Entry: 1019eaf3c; end: 1019eaf6f;  */

void FUN_1019eaf3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019eaf70; end: 1019eaf7f;  */

void FUN_1019eaf70(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  plVar5 = (long *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (plVar5 == (long *)0x0) {
    (*pcVar3)();
    return;
  }
  if (param_2 == 0) {
    if (param_1 != (long *)0x0) {
      func_0x000107c61174();
      plVar6 = param_1;
      func_0x000107c5bd00();
      if (plVar6 == (long *)0x2) {
        FUN_1019ea1c0(uVar4,uVar8,pcVar3,uVar2);
      }
      else {
        (*pcVar3)(0);
      }
      func_0x000107c61170(plVar5);
      goto LAB_1019ea1a0;
    }
    plVar6 = plVar5;
    FUN_1019eaf80();
    puVar7 = &UNK_110429cb0;
    func_0x000107c613f8(&UNK_110429cb0,plVar6,0,0);
    *plVar6 = 0;
    *(undefined1 *)(plVar6 + 1) = 1;
  }
  else {
    plVar6 = plVar5;
    FUN_1019eaf80();
    puVar7 = &UNK_110429cb0;
    func_0x000107c613f8(&UNK_110429cb0,plVar6,0,0);
    *plVar6 = param_2;
    *(undefined1 *)(plVar6 + 1) = 1;
    func_0x000107c614b0(param_2);
  }
  (*pcVar3)();
  func_0x000107c614ac(puVar7);
  param_1 = plVar5;
LAB_1019ea1a0:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019eaf80; end: 1019eafbf;  */

void FUN_1019eaf80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de84b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b312c;
  func_0x000107c61520(&UNK_10d9b312c,&UNK_110429cb0);
  puRam0000000112de84b0 = puVar1;
  return;
}



/* Entry: 1019eafc0; end: 1019eafc7;  */

/* WARNING: Possible PIC construction at 0x0001019ea3f8: Changing call to branch */

void FUN_1019eafc0(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 != (long *)0x0) {
      func_0x000107c61174();
      plVar2 = param_1;
      func_0x000107c5bd00();
      if (plVar2 == (long *)0x3) {
        (*pcVar1)(0);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    FUN_1019eaf80();
    puVar3 = &UNK_110429cb0;
    func_0x000107c613f8(&UNK_110429cb0,param_1,0,0);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 2;
    (*pcVar1)();
  }
  else {
    FUN_1019eaf80();
    puVar3 = &UNK_110429cb0;
    func_0x000107c613f8(&UNK_110429cb0,param_1,0,0);
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 2;
    func_0x000107c614b0(param_2);
    (*pcVar1)(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 1019eafc8; end: 1019eaff3;  */

void FUN_1019eafc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019eaff4; end: 1019eb013;  */

void FUN_1019eaff4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_2 == 200) {
    (*pcVar1)(0);
    return;
  }
  FUN_1019eaf80();
  puVar2 = &UNK_110429cb0;
  func_0x000107c613f8(&UNK_110429cb0,param_1,0,0);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 1019eb014; end: 1019eb0fb;  */

void FUN_1019eb014(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019eb0fc; end: 1019eb153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019eb0fc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  func_0x000107c61434();
  uVar5 = 0;
  lVar1 = -0x2fffffffffffffdd;
  func_0x000100029284(0xd000000000000023);
  if ((uVar5 & 1) != 0) {
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_60);
    func_0x000107c6142c(param_1);
    uVar6 = 0x112de8500;
    func_0x0001000285a8(0x112de8500,&UNK_10d9b3118);
    plVar2 = &lStack_68;
    func_0x000107c6147c(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,uVar6,6);
    if (((ulong)plVar2 & 1) == 0) {
      return;
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    param_1 = lStack_68;
    if (lVar1 != 0) {
      func_0x000107c614f0(*(undefined8 *)(lVar1 + _DAT_112de8460));
      func_0x000100bc7fa4();
      uVar6 = *(undefined8 *)(lVar1 + _DAT_112de8450);
      lVar3 = lStack_68;
      func_0x000107c61434(lStack_68);
      func_0x000100bcc4c4();
      lVar4 = lVar3;
      func_0x000107c5fe08();
      func_0x000107c6142c(lVar3);
      func_0x000107c4d664(uVar6);
      func_0x000107c6142c(lStack_68);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar4);
      return;
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 1019eb154; end: 1019eb1a3;  */

undefined8 * FUN_1019eb154(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0001019eb114(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001019eb13c(uVar3,uVar2);
  return param_1;
}



/* Entry: 1019eb1a4; end: 1019eb1df;  */

undefined8 * FUN_1019eb1a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001019eb13c(uVar3,uVar2);
  return param_1;
}



/* Entry: 1019eb1e0; end: 1019eb2eb;  */

int FUN_1019eb1e0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1019eb2ec; end: 1019eb43f;  */

long FUN_1019eb2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [40];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001003ca4b0(param_4,unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  func_0x0001003ca4b0(param_4,auStack_78);
  func_0x0001003ca500(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003ca588();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003ca5fc();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
  func_0x00010010c498(param_4);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  return unaff_x20;
}



/* Entry: 1019eb440; end: 1019eb48b;  */

void FUN_1019eb440(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010010c498(unaff_x20 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019eb48c; end: 1019eb4cf;  */

undefined1  [16] FUN_1019eb48c(void)

{
  return ZEXT816(0x110429db8);
}



/* Entry: 1019eb4d0; end: 1019eb523;  */

void FUN_1019eb4d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019eb524; end: 1019eb587;  */

undefined8
FUN_1019eb524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1019eb588(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 1019eb588; end: 1019eb7f7;  */

void FUN_1019eb588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8420;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 1019eb7f8; end: 1019eb83b;  */

void FUN_1019eb7f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019eb83c; end: 1019eb88b;  */

undefined8 FUN_1019eb83c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019eb88c; end: 1019eb8cf;  */

undefined1  [16] FUN_1019eb88c(void)

{
  return ZEXT816(0x110429e80);
}



/* Entry: 1019eb8d0; end: 1019eb8f7;  */

void FUN_1019eb8d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019eb8f8; end: 1019eb8ff;  */

undefined8 FUN_1019eb8f8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019eb900; end: 1019ebcd7;  */

void FUN_1019eb900(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x0001001f7284();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8428;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0x7672655363707267;
  func_0x000107c5fadc(0x7672655363707267,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85670);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc82a0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1019ebcd8; end: 1019ebce7;  */

void FUN_1019ebcd8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x0001001f7284();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a8428;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0x7672655363707267;
  func_0x000107c5fadc(0x7672655363707267,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85670);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc82a0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1019ebce8; end: 1019ec053;  */

long FUN_1019ebce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a8428;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0x7672655363707267;
  func_0x000107c5fadc(0x7672655363707267,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85670);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc82a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}



/* Entry: 1019ec054; end: 1019ec0bf;  */

void FUN_1019ec054(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1019ec0c0; end: 1019ec113;  */

void FUN_1019ec0c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1019ec114; end: 1019ec11b;  */

void FUN_1019ec114(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1019ec11c; end: 1019ec16b;  */

undefined8 FUN_1019ec11c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ec16c; end: 1019ec1af;  */

undefined1  [16] FUN_1019ec16c(void)

{
  return ZEXT816(0x110429f48);
}



/* Entry: 1019ec1b0; end: 1019ec1d7;  */

void FUN_1019ec1b0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019ec1d8; end: 1019ec1df;  */

undefined8 FUN_1019ec1d8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ec1e0; end: 1019ec22b;  */

undefined8 FUN_1019ec1e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006f9dec(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1019ec22c; end: 1019ec25f;  */

void FUN_1019ec22c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019ec260; end: 1019ec2af;  */

undefined8 FUN_1019ec260(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ec2b0; end: 1019ec2f3;  */

undefined1  [16] FUN_1019ec2b0(void)

{
  return ZEXT816(0x11042a010);
}



/* Entry: 1019ec2f4; end: 1019ec31b;  */

void FUN_1019ec2f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019ec31c; end: 1019ec323;  */

undefined8 FUN_1019ec31c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ec324; end: 1019ec387;  */

undefined8
FUN_1019ec324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1019ec388(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 1019ec388; end: 1019ec5eb;  */

void FUN_1019ec388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8438;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc82a0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 1019ec5ec; end: 1019ec62f;  */

void FUN_1019ec5ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019ec630; end: 1019ec67f;  */

undefined8 FUN_1019ec630(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ec680; end: 1019ec6c3;  */

undefined1  [16] FUN_1019ec680(void)

{
  return ZEXT816(0x11042a0d8);
}



/* Entry: 1019ec6c4; end: 1019ec6eb;  */

void FUN_1019ec6c4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019ec6ec; end: 1019ec6f3;  */

undefined8 FUN_1019ec6ec(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ec6f4; end: 1019ecde7;  */

long FUN_1019ec6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a8440;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef252f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x53656761726f7473;
  func_0x000107c5fadc(0x53656761726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc82e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc8300);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_12);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc8320);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc8340);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_12);
    *(undefined **)(unaff_x20 + 0x78) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ecde8);
  (*pcVar1)();
}



/* Entry: 1019ecde8; end: 1019ece8b;  */

void FUN_1019ecde8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1019ece8c; end: 1019ecedb;  */

undefined8 FUN_1019ece8c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ecedc; end: 1019ecf1f;  */

undefined1  [16] FUN_1019ecedc(void)

{
  return ZEXT816(0x11042a1a0);
}



/* Entry: 1019ecf20; end: 1019ecf47;  */

void FUN_1019ecf20(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019ecf48; end: 1019ecf4f;  */

undefined8 FUN_1019ecf48(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ecf50; end: 1019ecfbf;  */

undefined8 FUN_1019ecf50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100642ac0(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1019ecfc0; end: 1019ed003;  */

void FUN_1019ecfc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


