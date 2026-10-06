/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10265c074; end: 10265c0e3;  */

void FUN_10265c074(undefined8 param_1)

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
  plVar3[1] = 0x10265c14c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10265c0e4; end: 10265c14f;  */

void FUN_10265c0e4(long param_1,long param_2)

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



/* Entry: 10265c150; end: 10265c19b;  */

void FUN_10265c150(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb1d40,&UNK_10dac6600);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c208,param_1);
  return;
}



/* Entry: 10265c19c; end: 10265c207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265c19c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10265c364();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eb1d48) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10265c208; end: 10265c20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265c208(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10265c364();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb1d48) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10265c210; end: 10265c25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265c210(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb1d48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10265c25c; end: 10265c2e3; -[_TtC27MapFocusCardsImplementation20MapFocusCardsBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265c25c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x0001000ad7c4();
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10265c2e4; end: 10265c343; -[_TtC27MapFocusCardsImplementation20MapFocusCardsBuilder init] */

void FUN_10265c2e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsImplementation.MapFocusCardsBuilder",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10265c310);
  (*pcVar1)();
}



/* Entry: 10265c344; end: 10265c353;  */

undefined1  [16] FUN_10265c344(void)

{
  return ZEXT816(0x11052e940);
}



/* Entry: 10265c354; end: 10265c363; -[_TtC27MapFocusCardsImplementation20MapFocusCardsBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265c354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb1d48));
  return;
}



/* Entry: 10265c364; end: 10265c383;  */

void FUN_10265c364(void)

{
  func_0x000107c61168(&PTR_PTR_112855af8);
  return;
}



/* Entry: 10265c384; end: 10265c423;  */

void FUN_10265c384(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb1d78,&UNK_10dac6660);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c424,param_1);
  return;
}



/* Entry: 10265c424; end: 10265c447;  */

void FUN_10265c424(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x0001026e3f98(0);
  func_0x000107c610f8();
  func_0x0001026e3f5c(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10265c448; end: 10265c46f;  */

void FUN_10265c448(void)

{
  FUN_10265c60c();
  return;
}



/* Entry: 10265c470; end: 10265c47b;  */

void FUN_10265c470(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c47c,param_1);
  return;
}



/* Entry: 10265c47c; end: 10265c4a3;  */

void FUN_10265c47c(void)

{
  FUN_10265c60c();
  return;
}



/* Entry: 10265c4a4; end: 10265c4af;  */

void FUN_10265c4a4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c4b0,param_1);
  return;
}



/* Entry: 10265c4b0; end: 10265c4d7;  */

void FUN_10265c4b0(void)

{
  FUN_10265c60c();
  return;
}



/* Entry: 10265c4d8; end: 10265c4e3;  */

void FUN_10265c4d8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c4e4,param_1);
  return;
}



/* Entry: 10265c4e4; end: 10265c50b;  */

void FUN_10265c4e4(void)

{
  FUN_10265c60c();
  return;
}



/* Entry: 10265c50c; end: 10265c517;  */

void FUN_10265c50c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c518,param_1);
  return;
}



/* Entry: 10265c518; end: 10265c53f;  */

void FUN_10265c518(void)

{
  FUN_10265c60c();
  return;
}



/* Entry: 10265c540; end: 10265c54b;  */

void FUN_10265c540(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c54c,param_1);
  return;
}



/* Entry: 10265c54c; end: 10265c573;  */

void FUN_10265c54c(void)

{
  FUN_10265c60c();
  return;
}



/* Entry: 10265c574; end: 10265c57f;  */

void FUN_10265c574(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c580,param_1);
  return;
}



/* Entry: 10265c580; end: 10265c5a7;  */

void FUN_10265c580(void)

{
  FUN_10265c60c();
  return;
}



/* Entry: 10265c5a8; end: 10265c5b3;  */

void FUN_10265c5a8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10265c6a8,param_1);
  return;
}



/* Entry: 10265c5b4; end: 10265c60b;  */

void FUN_10265c5b4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10265c60c; end: 10265c6a7;  */

void FUN_10265c60c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c610f8();
  uVar1 = uStack_48;
  func_0x000107c6157c(uStack_48);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uStack_48);
  *param_1 = puVar2;
  return;
}



/* Entry: 10265c6a8; end: 10265c6cf;  */

void FUN_10265c6a8(void)

{
  FUN_10265c60c();
  return;
}



/* Entry: 10265c6d0; end: 10265c74f;  */

undefined1  [16] FUN_10265c6d0(void)

{
  return ZEXT816(0x11052e980);
}



/* Entry: 10265c750; end: 10265cdcf;  */

undefined1  [16] FUN_10265c750(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef27d20);
  uVar3 = 0x7375636f4670614d;
  func_0x000107c5fadc(0x7375636f4670614d,0xed00007364726143);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10265c820);
  (*pcVar1)();
}



/* Entry: 10265cdd0; end: 10265ce23;  */

void FUN_10265cdd0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10265d7e0();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10265ce24; end: 10265d1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10265ce24(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c610f8();
  lVar3 = _DAT_112eb1d88;
  func_0x000107c61614(unaff_x20 + _DAT_112eb1d88,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1d90);
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1d98);
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1da0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1da8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1db0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(puVar1 + 2) = param_6;
  lVar4 = 0;
  func_0x00010265f080();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = param_7;
  plVar2 = (long *)(unaff_x20 + _DAT_112eb1db8);
  plVar2[3] = lVar4;
  plVar2[4] = (long)&PTR_DAT_11052ef00;
  *plVar2 = lVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1dc0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1dc8) = param_9;
  func_0x000107c61604(unaff_x20 + lVar3,param_10);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  uVar6 = param_9;
  FUN_1026eb7f0(0x404e000000000000,0x4045000000000000);
  func_0x000107c61180();
  FUN_10265d1a8();
  FUN_10265d388();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_10);
  return uVar6;
}



/* Entry: 10265d1a8; end: 10265d387;  */

/* WARNING: Possible PIC construction at 0x00010265d200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265d258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265d2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265d324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265d2a8) */
/* WARNING: Removing unreachable block (ram,0x00010265d25c) */
/* WARNING: Removing unreachable block (ram,0x00010265d204) */
/* WARNING: Removing unreachable block (ram,0x00010265d264) */
/* WARNING: Removing unreachable block (ram,0x00010265d2b0) */
/* WARNING: Removing unreachable block (ram,0x00010265d32c) */
/* WARNING: Removing unreachable block (ram,0x00010265d308) */
/* WARNING: Removing unreachable block (ram,0x00010265d278) */
/* WARNING: Removing unreachable block (ram,0x00010265d218) */
/* WARNING: Removing unreachable block (ram,0x00010265d328) */
/* WARNING: Removing unreachable block (ram,0x00010265d330) */

void FUN_10265d1a8(void)

{
  undefined *puVar1;
  
  func_0x000107c5a050();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10265d388; end: 10265d6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265d388(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  ppuVar8 = &puStack_b0;
  ppuVar11 = &puStack_b0;
  lVar12 = unaff_x20;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1da8);
  if ((*(char *)(puVar1 + 2) != '\x01') &&
     (puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb1db0), *(char *)(puVar2 + 2) != '\x01')) {
    uVar17 = *puVar1;
    uVar15 = puVar1[1];
    uVar18 = *puVar2;
    uVar16 = puVar2[1];
    plVar9 = (long *)(unaff_x20 + _DAT_112eb1db8);
    plVar3 = plVar9;
    func_0x0001000a8868(plVar9,plVar9[3]);
    puVar4 = &UNK_11052ebc0;
    func_0x000107c613fc(&UNK_11052ebc0,0x20,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(long *)(puVar4 + 0x18) = lVar12;
    lVar14 = *plVar3;
    lVar13 = *(long *)(lVar14 + 0x10);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar13 == 0) {
      func_0x000107c61574(puVar4);
    }
    else {
      uVar5 = 0;
      FUN_10265f0a0(uVar17,uVar15,uVar18,uVar16,0);
      puVar6 = &UNK_11052ec10;
      func_0x000107c613fc(&UNK_11052ec10,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,lVar14);
      puVar7 = &UNK_11052ec88;
      func_0x000107c613fc(&UNK_11052ec88,0x29,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(code **)(puVar7 + 0x18) = FUN_10265e2cc;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      puVar7[0x28] = 0;
      pcStack_90 = FUN_10265e3a8;
      puStack_b0 = puVar10;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_10111ef28;
      puStack_98 = &UNK_11052eca0;
      puStack_88 = puVar7;
      func_0x000107c60bc4(&puStack_b0);
      puVar10 = puStack_88;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar10);
      func_0x000107c4426c(lVar13);
      func_0x000107c61574(puVar4);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(uVar5);
    }
    func_0x0001000a8868(plVar9,plVar9[3]);
    puVar4 = &UNK_11052ebe8;
    func_0x000107c613fc(&UNK_11052ebe8,0x20,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(long *)(puVar4 + 0x18) = lVar12;
    lVar13 = *plVar9;
    lVar12 = *(long *)(lVar13 + 0x10);
    func_0x000107c61174(unaff_x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar12 == 0) {
      func_0x000107c61574(puVar4);
    }
    else {
      uVar5 = 1;
      FUN_10265f0a0(uVar17,uVar15,uVar18,uVar16,1);
      puVar10 = &UNK_11052ec10;
      func_0x000107c613fc(&UNK_11052ec10,0x18,7);
      func_0x000107c61644(puVar10 + 0x10,lVar13);
      puVar6 = &UNK_11052ec38;
      func_0x000107c613fc(&UNK_11052ec38,0x29,7);
      *(undefined **)(puVar6 + 0x10) = puVar10;
      *(undefined8 *)(puVar6 + 0x18) = 0x10265e310;
      *(undefined **)(puVar6 + 0x20) = puVar4;
      puVar6[0x28] = 1;
      pcStack_90 = FUN_10265e354;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_10111ef28;
      puStack_98 = &UNK_11052ec50;
      puStack_88 = puVar6;
      func_0x000107c60bc4(&puStack_b0);
      puVar10 = puStack_88;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar10);
      func_0x000107c4426c(lVar12);
      func_0x000107c61574(puVar4);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 10265d6dc; end: 10265d7df;  */

void FUN_10265d6dc(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  if ((param_3 & 0xff00) != 0x100) {
    ppuVar3 = &puStack_70;
    puVar1 = (undefined8 *)(param_4 + *param_6);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(char *)(puVar1 + 2) = (char)param_3;
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar4);
    func_0x0001000c10c0(param_7);
    func_0x000107c61180();
    puVar2 = &UNK_11052ecd8;
    func_0x000107c613fc(&UNK_11052ecd8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_4);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    uStack_58 = param_9;
    uStack_50 = param_8;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4e524(param_7);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(param_7);
  }
  return;
}



/* Entry: 10265d7e0; end: 10265dacf;  */

/* WARNING: Possible PIC construction at 0x00010265d904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265d96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265d990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265da5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265d994) */
/* WARNING: Removing unreachable block (ram,0x00010265d9a0) */
/* WARNING: Removing unreachable block (ram,0x00010265d9a4) */
/* WARNING: Removing unreachable block (ram,0x00010265d9a8) */
/* WARNING: Removing unreachable block (ram,0x00010265d9b4) */
/* WARNING: Removing unreachable block (ram,0x00010265d9b8) */
/* WARNING: Removing unreachable block (ram,0x00010265d9c4) */
/* WARNING: Removing unreachable block (ram,0x00010265d9c8) */
/* WARNING: Removing unreachable block (ram,0x00010265da0c) */
/* WARNING: Removing unreachable block (ram,0x00010265daa4) */
/* WARNING: Removing unreachable block (ram,0x00010265da20) */
/* WARNING: Removing unreachable block (ram,0x00010265d970) */
/* WARNING: Removing unreachable block (ram,0x00010265d908) */
/* WARNING: Removing unreachable block (ram,0x00010265da60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265d7e0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112eb1d90);
  lVar7 = *plVar1;
  lVar8 = plVar1[1];
  lVar6 = *(long *)(unaff_x20 + _DAT_112eb1d98);
  lVar2 = ((long *)(unaff_x20 + _DAT_112eb1d98))[1];
  uVar9 = (ulong)*(byte *)(plVar1 + 2);
  func_0x000107c61434(lVar2);
  func_0x000107c61434(lVar8);
  lVar5 = lVar8;
  FUN_10265e7c0();
  func_0x000107c6142c(lVar8);
  func_0x000107c6142c(lVar2);
  plVar1 = (long *)(unaff_x20 + _DAT_112eb1da0);
  lVar8 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  *plVar1 = lVar7;
  plVar1[1] = lVar5;
  plVar1[2] = uVar9;
  plVar1[3] = lVar6;
  func_0x00010265e29c(lVar7,lVar5,uVar9,lVar6);
  func_0x00010265dd88(lVar8,lVar3,lVar2,lVar4);
  lVar8 = lVar7;
  FUN_10265e728(lVar7,lVar5,uVar9,lVar6);
  func_0x00010265dd88(lVar7,lVar5,uVar9,lVar6);
  if (lVar8 == 0) {
    func_0x000107c55260();
    lVar7 = plVar1[2];
    if (lVar7 == 0) {
      func_0x000107c59e1c();
      func_0x000107c59e38(0x4018000000000000,0,0x4018000000000000,0x4020000000000000);
      FUN_1026ebb98(0x404e000000000000,0x4045000000000000);
      lVar8 = 0;
    }
    else {
      lVar8 = plVar1[1];
      func_0x000107c61434(plVar1[3]);
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(lVar8,lVar7);
      func_0x000107c6142c(lVar7);
      func_0x000107c59e1c();
    }
  }
  else {
    func_0x000107c45154(lVar8);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 10265dad0; end: 10265dcaf;  */

/* WARNING: Possible PIC construction at 0x00010265dc44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265dc80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265dc48) */
/* WARNING: Removing unreachable block (ram,0x00010265dc68) */
/* WARNING: Removing unreachable block (ram,0x00010265dc7c) */
/* WARNING: Removing unreachable block (ram,0x00010265dc84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265dad0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112eb1dc8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar7 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1db0);
    if (*(char *)(puVar1 + 2) == '\x01') {
      return;
    }
    uVar9 = *puVar1;
    uVar8 = puVar1[1];
    uVar10 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
    puVar6 = PTR_PTR_1126b1c10;
    func_0x000107c610f8(PTR_PTR_1126b1c10);
    func_0x000107c495dc(uVar10);
    puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c5fddc(uVar9,&uStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    func_0x000107c5fddc(uVar8,&uStack_80,puVar2,puVar3);
    uVar5 = uStack_78;
    uVar4 = uStack_80;
    uVar10 = 2;
    if (*(char *)(unaff_x20 + _DAT_112eb1da0) == '\x01') {
      uVar10 = 3;
    }
    if (*(long *)((char *)(unaff_x20 + _DAT_112eb1da0) + 0x10) == 0) {
      uVar10 = 1;
    }
    func_0x000107c61174(puVar6);
    func_0x00010438ae00(uVar9,uVar8,uVar4,uVar5,uVar10,puVar6);
    func_0x000107c6142c(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10265dcb0; end: 10265dcd7; -[_TtC32MapActionBarButtonImplementation25DirectionsActionBarButton directionsButtonTapped] */

void FUN_10265dcb0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10265dad0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10265dcd8; end: 10265dd63;  */

/* WARNING: Possible PIC construction at 0x00010265dd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265dda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265dd34) */
/* WARNING: Removing unreachable block (ram,0x00010265dd88) */
/* WARNING: Removing unreachable block (ram,0x00010265ddb4) */
/* WARNING: Removing unreachable block (ram,0x00010265dd8c) */
/* WARNING: Removing unreachable block (ram,0x00010265dda4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265dcd8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + _DAT_112eb1db8);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112eb1dc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112eb1dc8));
  FUN_10265dd64(unaff_x20 + _DAT_112eb1d88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(unaff_x20 + _DAT_112eb1d90 + 8));
  return;
}



/* Entry: 10265dd64; end: 10265ddb7;  */

undefined8 FUN_10265dd64(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10265ddb8; end: 10265de07;  */

void FUN_10265ddb8(void)

{
  func_0x00010265dde8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10265de08; end: 10265de9f; -[_TtC32MapActionBarButtonImplementation25DirectionsActionBarButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010265de68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265dda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265de6c) */
/* WARNING: Removing unreachable block (ram,0x00010265dd88) */
/* WARNING: Removing unreachable block (ram,0x00010265ddb4) */
/* WARNING: Removing unreachable block (ram,0x00010265dd8c) */
/* WARNING: Removing unreachable block (ram,0x00010265dda4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265de08(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112eb1db8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb1dc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb1dc8));
  FUN_10265dd64(param_1 + _DAT_112eb1d88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb1d90 + 8))
  ;
  return;
}



/* Entry: 10265dea0; end: 10265dfa7;  */

/* WARNING: Possible PIC construction at 0x00010265df0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265df3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265df80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265df40) */
/* WARNING: Removing unreachable block (ram,0x00010265df98) */
/* WARNING: Removing unreachable block (ram,0x00010265df54) */
/* WARNING: Removing unreachable block (ram,0x00010265df10) */
/* WARNING: Removing unreachable block (ram,0x00010265df84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265dea0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_112eb1d88;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dbdc();
    func_0x000107c615e8(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10265dfa8; end: 10265dfcb;  */

/* WARNING: Possible PIC construction at 0x00010265df0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265df3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265df80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265df40) */
/* WARNING: Removing unreachable block (ram,0x00010265df98) */
/* WARNING: Removing unreachable block (ram,0x00010265df54) */
/* WARNING: Removing unreachable block (ram,0x00010265df10) */
/* WARNING: Removing unreachable block (ram,0x00010265df84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265dfa8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar3 + _DAT_112eb1d88;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dbdc();
    func_0x000107c615e8(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(lVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10265dfcc; end: 10265e0af;  */

/* WARNING: Possible PIC construction at 0x00010265e014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265e044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265e088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265e048) */
/* WARNING: Removing unreachable block (ram,0x00010265e0a0) */
/* WARNING: Removing unreachable block (ram,0x00010265e05c) */
/* WARNING: Removing unreachable block (ram,0x00010265e018) */
/* WARNING: Removing unreachable block (ram,0x00010265e08c) */

void FUN_10265dfcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10265e0b0; end: 10265e0ff;  */

/* WARNING: Possible PIC construction at 0x00010265e014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265e044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265e088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265e048) */
/* WARNING: Removing unreachable block (ram,0x00010265e0a0) */
/* WARNING: Removing unreachable block (ram,0x00010265e05c) */
/* WARNING: Removing unreachable block (ram,0x00010265e018) */
/* WARNING: Removing unreachable block (ram,0x00010265e08c) */

void FUN_10265e0b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10265e100; end: 10265e1c7;  */

void FUN_10265e100(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 in_x4;
  long in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x0001000c10c0(in_x4);
  func_0x000107c61180();
  func_0x000107c613fc(in_x5,0x18,7);
  *(undefined8 *)(in_x5 + 0x10) = unaff_x20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = in_x7;
  uStack_50 = in_x6;
  lStack_48 = in_x5;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(in_x4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(in_x4);
  return;
}



/* Entry: 10265e1c8; end: 10265e26b;  */

/* WARNING: Possible PIC construction at 0x00010265e228: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265e1c8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb1dc8);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20 + _DAT_112eb1d88;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c4ffe8(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c41a98();
      lVar3 = lVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 10265e26c; end: 10265e2cb; -[_TtC32MapActionBarButtonImplementation25DirectionsActionBarButton didCloseDirectionsSheetWithAction:] */

void FUN_10265e26c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10265e1c8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10265e2cc; end: 10265e353;  */

void FUN_10265e2cc(void)

{
  FUN_10265d6dc();
  return;
}



/* Entry: 10265e354; end: 10265e363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265e354(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  puVar9 = auStack_78;
  func_0x000107c61428(lVar4 + 0x10,puVar9,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) goto LAB_10265eebc;
  if (param_1 != 0) {
    puVar11 = *(undefined1 **)(param_1 + _DAT_112fa97b8);
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar10 = *(undefined1 **)((undefined1 *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar10 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
      if (((ulong)puVar11 & 0x8000000000000000) != 0) {
        puVar10 = puVar11;
      }
      puVar8 = puVar10;
      func_0x000107c60480();
      if (puVar8 == (undefined1 *)0x0) goto LAB_10265eeb8;
      func_0x000107c60480();
    }
    if (puVar10 != (undefined1 *)0x0) {
      if (((ulong)puVar11 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10265f058);
          (*pcVar3)();
        }
        lVar12 = *(long *)(puVar11 + 0x20);
        func_0x000107c61174(param_1);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61174(param_1);
        func_0x000107c61434(puVar11);
        lVar12 = 0;
        puVar9 = puVar11;
        func_0x00010111c37c(0,puVar11);
        func_0x000107c6142c(puVar11);
      }
      lVar5 = *(long *)(lVar12 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(lVar12);
      lVar12 = *(long *)(lVar5 + _DAT_112fa98a8);
      func_0x000107c61174();
      func_0x000107c61170(lVar5);
      uVar13 = *(undefined8 *)(lVar12 + _DAT_112fa98e8);
      func_0x000107c61170(lVar12);
      if ((ulong)puVar11 >> 0x3e == 0) {
        puVar10 = *(undefined1 **)((undefined1 *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
        if (((ulong)puVar11 & 0x8000000000000000) != 0) {
          puVar10 = puVar11;
        }
        func_0x000107c60480();
      }
      if (puVar10 != (undefined1 *)0x0) {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10265f05c);
            (*pcVar3)();
          }
          lVar12 = *(long *)(puVar11 + 0x20);
          func_0x000107c61174();
        }
        else {
          func_0x000107c61434(puVar11);
          lVar12 = 0;
          func_0x00010111c37c(0,puVar11);
          func_0x000107c6142c(puVar11);
        }
        lVar5 = *(long *)(lVar12 + _DAT_112fa9758);
        func_0x000107c61174();
        func_0x000107c61170(lVar12);
        uVar7 = *(undefined8 *)(lVar5 + _DAT_112fa98b0);
        uVar1 = ((undefined8 *)(lVar5 + _DAT_112fa98b0))[1];
        func_0x000107c61434(uVar1);
        func_0x000107c61170(lVar5);
        FUN_1026608dc(uVar7,uVar1);
        func_0x000107c6142c(uVar1);
        (*pcVar3)(uVar13,uVar7,uVar2);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar7);
        return;
      }
      func_0x000107c61170(param_1);
    }
  }
LAB_10265eeb8:
  func_0x000107c61574();
LAB_10265eebc:
  func_0x00010265f080();
  func_0x000107c614e8();
  func_0x000107c60b14();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
  }
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c466bc();
  func_0x000107c61170(lVar4);
  (*pcVar3)(puVar6,0,0x100);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 10265e364; end: 10265e3a7;  */

void FUN_10265e364(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10265e3a8; end: 10265e3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265e3a8(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  puVar9 = auStack_78;
  func_0x000107c61428(lVar4 + 0x10,puVar9,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) goto LAB_10265eebc;
  if (param_1 != 0) {
    puVar11 = *(undefined1 **)(param_1 + _DAT_112fa97b8);
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar10 = *(undefined1 **)((undefined1 *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar10 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
      if (((ulong)puVar11 & 0x8000000000000000) != 0) {
        puVar10 = puVar11;
      }
      puVar8 = puVar10;
      func_0x000107c60480();
      if (puVar8 == (undefined1 *)0x0) goto LAB_10265eeb8;
      func_0x000107c60480();
    }
    if (puVar10 != (undefined1 *)0x0) {
      if (((ulong)puVar11 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10265f058);
          (*pcVar3)();
        }
        lVar12 = *(long *)(puVar11 + 0x20);
        func_0x000107c61174(param_1);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61174(param_1);
        func_0x000107c61434(puVar11);
        lVar12 = 0;
        puVar9 = puVar11;
        func_0x00010111c37c(0,puVar11);
        func_0x000107c6142c(puVar11);
      }
      lVar5 = *(long *)(lVar12 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(lVar12);
      lVar12 = *(long *)(lVar5 + _DAT_112fa98a8);
      func_0x000107c61174();
      func_0x000107c61170(lVar5);
      uVar13 = *(undefined8 *)(lVar12 + _DAT_112fa98e8);
      func_0x000107c61170(lVar12);
      if ((ulong)puVar11 >> 0x3e == 0) {
        puVar10 = *(undefined1 **)((undefined1 *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
        if (((ulong)puVar11 & 0x8000000000000000) != 0) {
          puVar10 = puVar11;
        }
        func_0x000107c60480();
      }
      if (puVar10 != (undefined1 *)0x0) {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10265f05c);
            (*pcVar3)();
          }
          lVar12 = *(long *)(puVar11 + 0x20);
          func_0x000107c61174();
        }
        else {
          func_0x000107c61434(puVar11);
          lVar12 = 0;
          func_0x00010111c37c(0,puVar11);
          func_0x000107c6142c(puVar11);
        }
        lVar5 = *(long *)(lVar12 + _DAT_112fa9758);
        func_0x000107c61174();
        func_0x000107c61170(lVar12);
        uVar7 = *(undefined8 *)(lVar5 + _DAT_112fa98b0);
        uVar1 = ((undefined8 *)(lVar5 + _DAT_112fa98b0))[1];
        func_0x000107c61434(uVar1);
        func_0x000107c61170(lVar5);
        FUN_1026608dc(uVar7,uVar1);
        func_0x000107c6142c(uVar1);
        (*pcVar3)(uVar13,uVar7,uVar2);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar7);
        return;
      }
      func_0x000107c61170(param_1);
    }
  }
LAB_10265eeb8:
  func_0x000107c61574();
LAB_10265eebc:
  func_0x00010265f080();
  func_0x000107c614e8();
  func_0x000107c60b14();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
  }
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c466bc();
  func_0x000107c61170(lVar4);
  (*pcVar3)(puVar6,0,0x100);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 10265e3e8; end: 10265e4b7;  */

long FUN_10265e3e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10265e4b8; end: 10265e597;  */

undefined8 * FUN_10265e4b8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[2];
  if (uVar1 < 0xffffffff) {
    if (0xfffffffe < (ulong)param_2[2]) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      uVar2 = param_2[3];
      param_1[3] = uVar2;
      func_0x000107c61434();
      func_0x000107c61434(uVar2);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < (ulong)param_2[2]) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      func_0x000107c61434();
      func_0x000107c6142c(uVar1);
      uVar2 = param_1[3];
      param_1[3] = param_2[3];
      func_0x000107c61434();
      func_0x000107c6142c(uVar2);
      return param_1;
    }
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(param_1[3]);
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 10265e598; end: 10265e62f;  */

undefined8 * FUN_10265e598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[2];
  if (uVar2 < 0xffffffff) {
    uVar1 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  else {
    uVar3 = param_2[2];
    if (uVar3 < 0xffffffff) {
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(param_1[3]);
      uVar1 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
    }
    else {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      param_1[2] = uVar3;
      func_0x000107c6142c(uVar2);
      uVar1 = param_1[3];
      param_1[3] = param_2[3];
      func_0x000107c6142c(uVar1);
    }
  }
  return param_1;
}



/* Entry: 10265e630; end: 10265e727;  */

int FUN_10265e630(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 10265e728; end: 10265e7bf;  */

undefined * FUN_10265e728(char param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar1 = 0x6f69746365726964;
    uVar3 = 0xea0000000000736e;
  }
  else {
    if (param_1 == '\x01') {
      uVar1 = 0x76697264;
    }
    else {
      uVar1 = 0x6b6c6177;
    }
    uVar1 = uVar1 | 0x676e6900000000;
    uVar3 = 0xe700000000000000;
  }
  func_0x000107c5fadc(uVar1,uVar3);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 10265e7c0; end: 10265e98b;  */

undefined8 FUN_10265e7c0(double param_1,long param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298;
  if ((param_2 == 0) || (2700.0 <= param_1)) {
    if (param_5 == 0) {
      return 0;
    }
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a190();
    if ((param_4 < 3600.0) || (((3600.0 <= param_4 && (param_4 < 86400.0)) || (86400.0 <= param_4)))
       ) {
      func_0x000107c52688(puVar1);
    }
    puVar2 = puVar1;
    func_0x000107c5c1c8(param_4);
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      func_0x000107c61434(param_5);
      return 1;
    }
  }
  else {
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a190();
    func_0x000107c52688(puVar1);
    puVar2 = puVar1;
    func_0x000107c5c1c8(0x404e000000000000,param_1);
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      func_0x000107c61434(param_2);
      return 0;
    }
  }
  func_0x000107c61170(puVar1);
  return 0;
}



/* Entry: 10265e98c; end: 10265e99f;  */

bool FUN_10265e98c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10265e9a0; end: 10265ea4b;  */

void FUN_10265e9a0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10265ea4c; end: 10265ea4f;  */

void FUN_10265ea4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb1df8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac68b0;
  func_0x000107c61520(&UNK_10dac68b0,&UNK_11052eef0);
  puRam0000000112eb1df8 = puVar1;
  return;
}



/* Entry: 10265ea50; end: 10265ea8f;  */

void FUN_10265ea50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb1df8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac68b0;
  func_0x000107c61520(&UNK_10dac68b0,&UNK_11052eef0);
  puRam0000000112eb1df8 = puVar1;
  return;
}



/* Entry: 10265ea90; end: 10265ea97;  */

void FUN_10265ea90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10265ea98; end: 10265eacb;  */

undefined8 * FUN_10265ea98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10265eacc; end: 10265eb1f;  */

undefined8 * FUN_10265eacc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10265eb20; end: 10265eb63;  */

undefined8 * FUN_10265eb20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10265eb64; end: 10265ed5f;  */

int FUN_10265eb64(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10265ed60; end: 10265f05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265ed60(long param_1,undefined8 param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined1 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) goto LAB_10265eebc;
  if (param_1 != 0) {
    puVar9 = *(undefined1 **)(param_1 + _DAT_112fa97b8);
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar8 = *(undefined1 **)((undefined1 *)((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar8 = (undefined1 *)((ulong)puVar9 & 0xffffffffffffff8);
      if (((ulong)puVar9 & 0x8000000000000000) != 0) {
        puVar8 = puVar9;
      }
      puVar6 = puVar8;
      func_0x000107c60480();
      if (puVar6 == (undefined1 *)0x0) goto LAB_10265eeb8;
      func_0x000107c60480();
    }
    if (puVar8 != (undefined1 *)0x0) {
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10265f058);
          (*pcVar2)();
        }
        lVar10 = *(long *)(puVar9 + 0x20);
        func_0x000107c61174(param_1);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61174(param_1);
        func_0x000107c61434(puVar9);
        lVar10 = 0;
        puVar7 = puVar9;
        func_0x00010111c37c(0,puVar9);
        func_0x000107c6142c(puVar9);
      }
      lVar3 = *(long *)(lVar10 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(lVar10);
      lVar10 = *(long *)(lVar3 + _DAT_112fa98a8);
      func_0x000107c61174();
      func_0x000107c61170(lVar3);
      uVar11 = *(undefined8 *)(lVar10 + _DAT_112fa98e8);
      func_0x000107c61170(lVar10);
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar8 = *(undefined1 **)((undefined1 *)((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined1 *)((ulong)puVar9 & 0xffffffffffffff8);
        if (((ulong)puVar9 & 0x8000000000000000) != 0) {
          puVar8 = puVar9;
        }
        func_0x000107c60480();
      }
      if (puVar8 != (undefined1 *)0x0) {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10265f05c);
            (*pcVar2)();
          }
          lVar10 = *(long *)(puVar9 + 0x20);
          func_0x000107c61174();
        }
        else {
          func_0x000107c61434(puVar9);
          lVar10 = 0;
          func_0x00010111c37c(0,puVar9);
          func_0x000107c6142c(puVar9);
        }
        lVar3 = *(long *)(lVar10 + _DAT_112fa9758);
        func_0x000107c61174();
        func_0x000107c61170(lVar10);
        uVar5 = *(undefined8 *)(lVar3 + _DAT_112fa98b0);
        uVar1 = ((undefined8 *)(lVar3 + _DAT_112fa98b0))[1];
        func_0x000107c61434(uVar1);
        func_0x000107c61170(lVar3);
        FUN_1026608dc(uVar5,uVar1);
        func_0x000107c6142c(uVar1);
        (*param_4)(uVar11,uVar5,param_6);
        func_0x000107c61574(param_3);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar5);
        return;
      }
      func_0x000107c61170(param_1);
    }
  }
LAB_10265eeb8:
  func_0x000107c61574();
LAB_10265eebc:
  func_0x00010265f080();
  func_0x000107c614e8();
  func_0x000107c60b14();
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c466bc();
  func_0x000107c61170(param_3);
  (*param_4)(puVar4,0,0x100);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10265f05c; end: 10265f09f;  */

void FUN_10265f05c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10265f0a0; end: 10265f28f;  */

ulong FUN_10265f0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   char param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  long lVar8;
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = 0;
  func_0x0001038be9b4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001038be638(param_1,param_2);
  uVar5 = 0;
  func_0x0001038bee3c(0);
  uVar6 = uVar5;
  func_0x000107c610f8();
  func_0x0001038bea34(lVar4,uVar6);
  func_0x000107c610f8();
  func_0x0001038be638(param_3,param_4);
  func_0x000107c610f8(uVar5);
  func_0x0001038bea34(lVar3,uVar5);
  lVar7 = lVar3;
  func_0x0001011452cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(long *)(lVar7 + 0x20) = lVar4;
  *(long *)(lVar7 + 0x28) = lVar3;
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar3);
  lVar8 = lVar3;
  func_0x000107c5ef04(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = (uint)lVar8;
  func_0x000107c5eee8();
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  uVar6 = 5;
  if (param_5 != '\0') {
    uVar6 = 10;
  }
  func_0x0001038bf720(0);
  func_0x000107c610f8();
  uVar9 = (ulong)~uVar1 & 1;
  func_0x0001038bf128(uVar9,uVar6,lVar7);
  func_0x0001038bd84c(0);
  func_0x000107c610f8();
  func_0x0001038bd198(uVar9);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  return uVar9;
}



/* Entry: 10265f290; end: 10265f29b;  */

undefined8 * FUN_10265f290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10265f29c; end: 10265f2d3;  */

void FUN_10265f29c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 10265f2d4; end: 10265f3af;  */

void FUN_10265f2d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10265f3b0; end: 10265f3b3;  */

void FUN_10265f3b0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x10,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 10265f3b4; end: 10265f50b;  */

long FUN_10265f3b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61614(unaff_x20 + 0x10,0);
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return unaff_x20;
}



/* Entry: 10265f50c; end: 10265f7ef;  */

void FUN_10265f50c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  
  uVar8 = param_2;
  func_0x00010006c804();
  uVar1 = *(ulong *)(unaff_x20 + 0x48);
  if (uVar1 != 0) {
    func_0x000107c44fd8();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      if (uVar2 == param_2 && uVar8 == param_3) {
        func_0x000107c6142c(uVar8);
        goto LAB_10265f7cc;
      }
      func_0x000107c605b8(uVar2,uVar8,param_2,param_3,0);
      func_0x000107c6142c(uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10265f7cc;
    }
  }
  uVar8 = *(ulong *)(unaff_x20 + 0x58);
  if (uVar8 == 0) {
    func_0x000100070bfc();
  }
  else {
    uVar1 = *(ulong *)(unaff_x20 + 0x50);
    if (uVar1 == param_2 && uVar8 == param_3) {
LAB_10265f7cc:
      func_0x000100070bfc();
      return;
    }
    func_0x000107c605b8(uVar1,uVar8,param_2,param_3,0);
    func_0x000100070bfc();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  func_0x00010265f980(0);
  func_0x00010006c804();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  *(ulong *)(unaff_x20 + 0x50) = param_2;
  *(ulong *)(unaff_x20 + 0x58) = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar9);
  func_0x000100070bfc();
  func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5dfcc(uVar9);
  func_0x000107c61180();
  uVar3 = uVar9;
  func_0x0001000b637c();
  func_0x000107c61170(uVar9);
  uVar9 = 0x112d5d480;
  func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
  pcVar4 = FUN_10265fe0c;
  func_0x0001000d5158(FUN_10265fe0c,0,uVar9);
  func_0x000107c61574(uVar3);
  puVar5 = &UNK_11052ef58;
  func_0x000107c613fc(&UNK_11052ef58,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_4;
  func_0x000107c61434(param_4);
  pcVar10 = FUN_102660cf4;
  func_0x0001000bfde0(FUN_102660cf4,puVar5,PTR___sSbN_11034dd40);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  pcVar4 = FUN_10265fe58;
  func_0x0001000c0ebc(FUN_10265fe58,0);
  func_0x000107c61574(pcVar10);
  plVar6 = (long *)0x1;
  func_0x00010061b458();
  func_0x000107c61574(pcVar4);
  puVar5 = &UNK_11052ef80;
  func_0x000107c613fc(&UNK_11052ef80,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar7 = &UNK_11052efa8;
  func_0x000107c613fc(&UNK_11052efa8,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(undefined8 *)(puVar7 + 0x18) = param_1;
  *(ulong *)(puVar7 + 0x20) = param_2;
  *(ulong *)(puVar7 + 0x28) = param_3;
  pcVar10 = *(code **)(*plVar6 + 0x60);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_1);
  pcVar4 = FUN_102660d24;
  puVar5 = puVar7;
  (*pcVar10)();
  func_0x000107c61574(plVar6);
  func_0x000107c61574(puVar7);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  *(code **)(unaff_x20 + 0x38) = pcVar4;
  *(undefined **)(unaff_x20 + 0x40) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar9);
  return;
}



/* Entry: 10265f7f0; end: 10265f8ab;  */

void FUN_10265f7f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102660d74(param_3,param_4,param_5);
    func_0x000107c61574(lVar1);
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x00010265fb08(param_3);
      func_0x000107c61574(param_2);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10265f8ac; end: 10265fe0b;  */

/* WARNING: Possible PIC construction at 0x00010265f900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265f904) */
/* WARNING: Removing unreachable block (ram,0x00010265f908) */
/* WARNING: Removing unreachable block (ram,0x00010265f90c) */
/* WARNING: Removing unreachable block (ram,0x00010265f954) */
/* WARNING: Removing unreachable block (ram,0x00010265f910) */
/* WARNING: Removing unreachable block (ram,0x00010265f95c) */
/* WARNING: Removing unreachable block (ram,0x00010265f938) */

void FUN_10265f8ac(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar2 = lVar1;
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5faec();
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10265fe0c; end: 10265fe57;  */

void FUN_10265fe0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x000107c5fe0c(*param_2,&uStack_28,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10265fe58; end: 10265fe5f;  */

undefined1 FUN_10265fe58(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10265fe60; end: 10265feb3;  */

void FUN_10265fe60(void)

{
  long unaff_x20;
  
  FUN_102660d30(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10265feb4; end: 10265fef7;  */

void FUN_10265feb4(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  func_0x000107c61618(lVar1 + 0x10);
  return;
}



/* Entry: 10265fef8; end: 1026600af;  */

void FUN_10265fef8(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x000107c61604(lVar1 + 0x10,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1026600b0; end: 10266010f;  */

void FUN_1026600b0(void)

{
  FUN_10265f50c();
  return;
}



/* Entry: 102660110; end: 10266017b;  */

void FUN_102660110(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10266017c; end: 1026602a3;  */

ulong FUN_10266017c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026602a4);
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
  FUN_1026602a4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026602a0);
      (*pcVar1)();
    }
    FUN_10266033c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1026602a4; end: 10266033b;  */

undefined * FUN_1026602a4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = &SUB_1038be9b4;
    FUN_102660110(&SUB_1038be9b4,0x112eb2018,&UNK_10dac6a68);
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



/* Entry: 10266033c; end: 102660433;  */

long FUN_10266033c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102660430);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102660434);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001038be9b4(0);
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
      func_0x0001038be9b4(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10266042c);
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



/* Entry: 102660434; end: 1026605e7;  */

ulong FUN_102660434(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102660518);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10266051c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bf1b8;
    func_0x000107c61168(PTR_PTR_1126bf1b8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bf1b8;
    func_0x000107c61168(PTR_PTR_1126bf1b8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102660fe8(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026605e8);
  (*pcVar2)();
}



/* Entry: 1026605e8; end: 102660783;  */

ulong FUN_1026605e8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026606b8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026606bc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001038be9b4(0);
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
    func_0x0001038be9b4(0);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010f0b42d0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102660784);
  (*pcVar2)();
}



/* Entry: 102660784; end: 10266079f;  */

void FUN_102660784(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1026607a0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1026607a0; end: 1026608db;  */

code * FUN_1026607a0(ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026608dc);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = FUN_102660fe8;
    FUN_102660110(FUN_102660fe8,0x112eb2010,&UNK_10dac6a60);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    FUN_102660fe8(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 1026608dc; end: 102660cf3;  */

undefined * FUN_1026608dc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_e8 [104];
  
  lVar5 = 0x112d36020;
  func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
  lVar6 = lVar5;
  func_0x000107c61534();
  puVar18 = (undefined8 *)(lVar6 + 0x20);
  *puVar18 = 0;
  *(undefined8 *)(lVar6 + 0x18) = 4;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  *(undefined8 *)(lVar6 + 0x28) = 0;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar1 != 0) {
    pbVar20 = (byte *)0xf;
    do {
      lVar7 = lVar5;
      func_0x000107c61534(lVar5,auStack_e8);
      uVar17 = 0;
      *(undefined8 *)(lVar7 + 0x18) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 2;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      do {
        uVar21 = 0;
        uVar19 = 0;
        do {
          pbVar8 = pbVar20;
          uVar15 = param_1;
          func_0x000107c5fbcc(pbVar20,param_1,param_2);
          if (((pbVar8 != (byte *)0xa0d) || (uVar15 != 0xe200000000000000)) &&
             (pbVar9 = pbVar8, func_0x000107c605b8(pbVar8,uVar15,0xa0d,0xe200000000000000,0),
             ((ulong)pbVar9 & 1) == 0)) {
            uVar2 = (ulong)pbVar8 & 0xffffffffffff;
            if ((uVar15 & 0x2000000000000000) != 0) {
              uVar2 = uVar15 >> 0x38 & 0xf;
            }
            if (uVar2 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102660cdc);
              (*pcVar3)();
            }
            if ((uVar15 >> 0x3c & 1) == 0) {
              if ((uVar15 >> 0x3d & 1) == 0) {
                if (((ulong)pbVar8 >> 0x3c & 1) == 0) {
                  pbVar9 = pbVar8;
                  func_0x000107c60358(pbVar8,uVar15);
                  uVar16 = (uint)*pbVar9;
                }
                else {
                  uVar16 = (uint)*(byte *)((uVar15 & 0xfffffffffffffff) + 0x20);
                }
              }
              else {
                uVar16 = (uint)pbVar8;
              }
              uVar10 = 0x10000;
              if (0x7fffffff < (uint)(int)(char)uVar16) {
                uVar10 = LZCOUNT(uVar16 << 0x18 ^ 0xffffffff) << 0x10;
              }
            }
            else {
              uVar10 = 0;
              func_0x000107c5fb40(0xf,pbVar8,uVar15);
            }
            if (uVar10 >> 0xe == uVar2 * 4) {
              pbVar9 = pbVar8;
              func_0x000100ed9fa0(pbVar8,uVar15);
              if (((ulong)pbVar9 & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102660cf0);
                (*pcVar3)();
              }
              if (((ulong)pbVar9 & 0xffffff80) == 0) {
                func_0x000100ed9fa0(pbVar8,uVar15);
                if (((ulong)pbVar8 & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102660cf4);
                  (*pcVar3)();
                }
                uVar16 = (uint)pbVar8;
                func_0x000107c6142c(uVar15);
                if (((ulong)pbVar8 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102660ce0);
                  (*pcVar3)();
                }
                goto LAB_102660ac4;
              }
            }
            func_0x000107c6142c(puVar14);
            func_0x000107c6142c(uVar15);
            func_0x000107c61588(lVar7);
            puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
            goto LAB_102660c9c;
          }
          func_0x000107c6142c(uVar15);
          uVar16 = 10;
LAB_102660ac4:
          uVar16 = (uVar16 & 0xff) - 0x3f;
          if ((uVar16 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102660cd4);
            (*pcVar3)();
          }
          func_0x000107c5fb60(pbVar20,param_1,param_2);
          if (SCARRY8(uVar21,5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102660cd8);
            (*pcVar3)();
          }
          uVar15 = 0;
          if (0xffffffffffffff7f < uVar21 - 0x40) {
            uVar15 = (ulong)(uVar16 & 0x1f) << (uVar21 & 0x3f);
          }
          uVar19 = uVar15 | uVar19;
          uVar21 = uVar21 + 5;
        } while (0x1f < (uVar16 & 0xff));
        if (*(ulong *)(lVar6 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102660ce4);
          (*pcVar3)();
        }
        uVar21 = -(uVar19 & 1) ^ (long)uVar19 >> 1;
        lVar22 = puVar18[uVar17] + uVar21;
        if (SCARRY8(puVar18[uVar17],uVar21)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102660ce8);
          (*pcVar3)();
        }
        if (*(ulong *)(lVar7 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102660cec);
          (*pcVar3)();
        }
        ((undefined8 *)(lVar7 + 0x20))[uVar17] = lVar22;
        puVar18[uVar17] = lVar22;
        bVar4 = uVar17 != 1;
        uVar17 = uVar17 + 1;
      } while (bVar4);
      lVar22 = *(long *)(lVar7 + 0x20);
      lVar23 = *(long *)(lVar7 + 0x28);
      uVar11 = 0;
      func_0x0001038be9b4();
      func_0x000107c610f8();
      func_0x0001038be638((double)lVar22 * 1e-06,(double)lVar23 * 1e-06);
      puVar13 = puVar14;
      func_0x000107c61550();
      if ((((int)puVar13 == 0) || ((long)puVar14 < 0)) ||
         (puVar13 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar14 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar14) {
            puVar12 = puVar14;
          }
          func_0x000107c60480(puVar12);
        }
        puVar13 = (undefined *)0x0;
        FUN_10266017c(0,puVar12 + 1,1,puVar14);
      }
      uVar21 = (ulong)puVar13 & 0xffffffffffffff8;
      uVar17 = *(ulong *)(uVar21 + 0x10);
      puVar14 = puVar13;
      if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar17) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar21 + 0x18));
        FUN_10266017c(puVar14,uVar17 + 1,1,puVar13);
        uVar21 = (ulong)puVar14 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar21 + 0x10) = uVar17 + 1;
      *(undefined8 *)(uVar21 + uVar17 * 8 + 0x20) = uVar11;
      func_0x000107c61588(lVar7);
    } while ((ulong)pbVar20 >> 0xe < uVar1 << 2);
  }
LAB_102660c9c:
  func_0x000107c6142c(lVar6);
  return puVar14;
}



/* Entry: 102660cf4; end: 102660d23;  */

void FUN_102660cf4(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  func_0x000101117e30(uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = (byte)uVar1 & 1;
  return;
}



/* Entry: 102660d24; end: 102660d2f;  */

void FUN_102660d24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar3 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    FUN_102660d74(uVar4,uVar1,uVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c61428(lVar5 + 0x10,auStack_70,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61648();
    if (lVar5 != 0) {
      func_0x00010265fb08(uVar4);
      func_0x000107c61574(lVar5);
    }
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 102660d30; end: 102660d53;  */

undefined8 FUN_102660d30(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102660d54; end: 102660d73;  */

void FUN_102660d54(void)

{
  func_0x000107c61168(&PTR_PTR_112eb1ee0);
  return;
}


