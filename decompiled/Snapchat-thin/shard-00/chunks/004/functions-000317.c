/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006a7a88; end: 1006a7d83;  */

void FUN_1006a7a88(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar3 = PTR_PTR_1126daa00;
  func_0x000107c610f4();
  lVar4 = param_1;
  FUN_1006a7d84();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = param_1 + 0x20;
  FUN_10060ab28();
  func_0x000107c61180();
  lVar6 = param_1 + 0x38;
  FUN_1006a7df8();
  func_0x000107c61180();
  iVar1 = *(int *)(param_1 + 0x58);
  lVar7 = param_1 + 0x5c;
  FUN_1006a7e58();
  func_0x000107c61180();
  lVar8 = param_1 + 0x68;
  FUN_1006a7e88();
  func_0x000107c61180();
  lVar9 = param_1 + 0x180;
  FUN_1006a8c64();
  func_0x000107c61180();
  lVar10 = param_1 + 0x1c0;
  FUN_1006a8e24();
  func_0x000107c61180();
  lVar11 = param_1 + 0x208;
  FUN_1006a8e50();
  func_0x000107c61180();
  lVar12 = param_1 + 0x230;
  FUN_1001011ec();
  func_0x000107c61180();
  iVar2 = *(int *)(param_1 + 0x240);
  lVar13 = param_1 + 0x248;
  FUN_1006a8018();
  func_0x000107c61180();
  lVar14 = param_1 + 0x268;
  FUN_1001011ec();
  func_0x000107c61180();
  lVar15 = param_1 + 0x278;
  FUN_1006a9128();
  func_0x000107c61180();
  param_1 = param_1 + 0x358;
  FUN_1006a9308();
  func_0x000107c61180();
  func_0x000107c46198(puVar3,param_2,lVar4,uVar16,lVar5,lVar6,(long)iVar1,lVar7,lVar8,lVar9,lVar10,
                      lVar11,lVar12,(long)iVar2,lVar13,lVar14,lVar15,param_1);
  func_0x000107c61170(param_1);
  func_0x0001006a9664();
  func_0x0001006a966c();
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x0001006a9674();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x0001006a967c();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x0001006a9684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1006a7d84; end: 1006a7de3;  */

void FUN_1006a7d84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x000107c610f4(PTR_PTR_1126b0cd8);
  func_0x000100101220(param_1);
  func_0x000107c61180();
  func_0x000107c46d34(puVar1,param_2,param_1);
  FUN_1006a7de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006a7de4; end: 1006a7df7;  */

void FUN_1006a7de4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006a7df8; end: 1006a7e27;  */

void FUN_1006a7df8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1001011a4();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a7e28; end: 1006a7e57;  */

void FUN_1006a7e28(int param_1,undefined8 param_2)

{
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a7e58; end: 1006a7e87;  */

void FUN_1006a7e58(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_1006a7e28(*param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a7e88; end: 1006a8017;  */

void FUN_1006a7e88(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_1126daa08;
  func_0x000107c610f4(PTR_PTR_1126daa08);
  puVar4 = param_1 + 4;
  uVar8 = *param_1;
  puVar3 = param_1 + 1;
  FUN_10060ab28();
  func_0x000107c61180();
  FUN_10060ab28(puVar4);
  func_0x000107c61180();
  puVar5 = param_1 + 7;
  FUN_1006a8018(puVar5);
  func_0x000107c61180();
  puVar6 = param_1 + 0xb;
  FUN_1006a8018(puVar6);
  func_0x000107c61180();
  puVar7 = param_1 + 0xf;
  FUN_1006a8048(puVar7);
  func_0x000107c61180();
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  FUN_1006a8a34();
  func_0x000107c61180();
  func_0x000107c465fc(puVar2,param_2,uVar8,puVar3,puVar4,puVar5,puVar6,puVar7,uVar1);
  FUN_1006a8c3c();
  func_0x0001006a8c44();
  func_0x0001006a8c4c();
  func_0x0001006a8c54();
  func_0x000107c61170(puVar4);
  func_0x0001006a8c5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006a8018; end: 1006a8047;  */

void FUN_1006a8018(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1006a7d84();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a8048; end: 1006a817f;  */

void FUN_1006a8048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126daa18;
  func_0x000107c610f4(PTR_PTR_1126daa18);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar2 = param_1;
    FUN_1006aae84(param_1);
    func_0x000107c61180();
  }
  else {
    lVar2 = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    lVar3 = param_1 + 0x48;
    FUN_1006a8180(lVar3);
    func_0x000107c61180();
  }
  else {
    lVar3 = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    lVar4 = param_1 + 0x70;
    func_0x00010861a578(lVar4);
    func_0x000107c61180();
  }
  else {
    lVar4 = 0;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    param_1 = param_1 + 0x7c;
    func_0x00010861d22c(param_1);
    func_0x000107c61180();
  }
  else {
    param_1 = 0;
  }
  func_0x000107c4871c(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  FUN_1006a8a10();
  func_0x0001006a8a1c();
  func_0x0001006a8a24();
  func_0x0001006a8a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006a8180; end: 1006a8237;  */

void FUN_1006a8180(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126da8e0;
  func_0x000107c610f4(PTR_PTR_1126da8e0);
  iVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1[1]);
    func_0x000107c61180();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  param_1 = param_1 + 4;
  FUN_1001011ec(param_1);
  func_0x000107c61180();
  func_0x000107c489b0(puVar2,param_2,(long)iVar1,puVar3,param_1);
  FUN_1006a88d8();
  func_0x0001006a88e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006a8238; end: 1006a8253;  */

void FUN_1006a8238(void)

{
  return;
}



/* Entry: 1006a8254; end: 1006a82bb;  */

void FUN_1006a8254(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x000107c29358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1006a82bc; end: 1006a82ef;  */

void FUN_1006a82bc(void)

{
  return;
}



/* Entry: 1006a82f0; end: 1006a850f;  */

void FUN_1006a82f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = param_1;
  func_0x0001006a82dc();
  FUN_1006a8510();
  if (lVar1 != 0) {
    FUN_1006a8610(auStack_b8,lVar1 + 0x78);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),6);
    uStack_d8 = uStack_d8 & 0xffffffffffffff00;
    bStack_c0 = 0;
    if (cStack_90 != '\0') {
      uStack_d0 = uStack_a0;
      uStack_d8 = uStack_a8;
      uStack_c8 = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      bStack_c0 = 1;
      FUN_1006aae54(&uStack_a8);
    }
    lStack_e0 = lStack_b0;
    lStack_b0 = 0;
    while (((bStack_c0 & 1) != 0 && (lStack_e0 != 0))) {
      if ((bStack_c0 & 1) == 0) {
        uVar2 = *(undefined8 *)(lStack_e0 + 8);
        func_0x000107c60c94(auStack_70,lStack_e0 + 0x58);
        FUN_1004c3cd0(auStack_58,&UNK_10f2e0451,auStack_70);
        func_0x000107c313a4(uVar2,0x65,auStack_58);
        func_0x000107c60ca0(auStack_58);
        func_0x000107c60ca0(auStack_70);
      }
      FUN_10054f8dc(auStack_88,&uStack_d8);
      FUN_10069c690();
      FUN_100100fec(auStack_88);
      FUN_1006a87ac(&lStack_e0);
    }
    FUN_1006aaf88();
    FUN_1006aaf94(&uStack_d8);
    FUN_1006aafb4(auStack_b8);
  }
  return;
}



/* Entry: 1006a8510; end: 1006a852b;  */

void FUN_1006a8510(void)

{
  FUN_1004b59e4();
  return;
}



/* Entry: 1006a852c; end: 1006a854f;  */

void FUN_1006a852c(undefined8 param_1)

{
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined1 uStack0000000000000010;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack0000000000000010 = 1;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)();
  return;
}



/* Entry: 1006a8550; end: 1006a860f;  */

long FUN_1006a8550(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  FUN_1006a852c();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x0001006a8634();
      func_0x0001006a863c();
      func_0x0001006a8644();
      func_0x0001006a864c();
      func_0x0001006a8654();
      func_0x0001006a8664();
      goto LAB_1006a85dc;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x0001086532f0();
  }
LAB_1006a85dc:
  func_0x0001006a8694();
  func_0x0001006a86a4();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x000108653354();
  func_0x00010865331c();
  FUN_1006a8550();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  FUN_1006a86dc(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 1006a8610; end: 1006a8633;  */

void FUN_1006a8610(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1006a8550();
  uStack_28 = param_2;
  FUN_1006a86dc(param_1,&uStack_28);
  return;
}



/* Entry: 1006a8634; end: 1006a86db;  */

undefined1 * FUN_1006a8634(void)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x19;
  byte in_stack_00000010;
  
  puVar2 = &stack0x00000008;
  if ((in_stack_00000010 & 1) != 0) {
    func_0x00010015b848();
    func_0x000107c60d8c();
    *(undefined1 *)(unaff_x19 + 8) = 0;
    return puVar2;
  }
  uVar3 = 1;
  func_0x000107c60d78(1,"unique_lock::unlock: not locked");
  uVar1 = (uint)uVar3;
  if (0x7f < uVar1) {
    func_0x000107c60e64();
    return (undefined1 *)(ulong)(uVar1 != 0);
  }
  return (undefined1 *)
         (ulong)((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (uVar3 & 0xffffffff) * 4 + 0x3c) &
                 0x4000) != 0);
}



/* Entry: 1006a86dc; end: 1006a8703;  */

void FUN_1006a86dc(void)

{
  func_0x0001006a86cc();
  FUN_1006a875c();
  FUN_1006a876c();
  return;
}



/* Entry: 1006a8704; end: 1006a875b;  */

void FUN_1006a8704(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_1006a86dc(param_1,&uStack_28);
  return;
}



/* Entry: 1006a875c; end: 1006a876b;  */

undefined1  [16] FUN_1006a875c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_2 + 1;
  *param_2 = param_1;
  auVar1._8_8_ = &stack0x00000008;
  return auVar1;
}



/* Entry: 1006a876c; end: 1006a87ab;  */

void FUN_1006a876c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001006a86cc();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1006a87ac();
  return;
}



/* Entry: 1006a87ac; end: 1006a880f;  */

void FUN_1006a87ac(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_10054c3a4(), (int)lVar1 != 0)) {
    func_0x000108652cac(auStack_38,*param_1);
    func_0x000108652c78(param_1 + 1,auStack_38);
    func_0x00010865335c();
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[4] == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(plVar2 + 3) = 0;
  }
  return;
}



/* Entry: 1006a8810; end: 1006a88d7; -[SCNMessagingChatItem initWithState:quotedMessageType:unreadChatCount:] */

undefined1 *
FUN_1006a8810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706e10;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1006a88d8; end: 1006a88e7;  */

void FUN_1006a88d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006a88e8; end: 1006a8a0f; -[SCNMessagingFeedItem initWithSnap:chat:call:conversation:] */

undefined1 *
FUN_1006a88e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112706f48;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006a8a10; end: 1006a8a33;  */

void FUN_1006a8a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006a8a34; end: 1006a8a5f;  */

void FUN_1006a8a34(long param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x01') {
    func_0x0001086194b4();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a8a60; end: 1006a8a67;  */

void FUN_1006a8a60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1006a8a68; end: 1006a8c3b; -[SCNMessagingFeedEntryDisplayInfo initWithDisplayTimestamp:lastUpdateActorUserIds:lastSenderUserIds:feedItemCreatorId:feedItemMutatedMessageSenderId:feedItem:viewed:isFriendLinkPending:isLocked:activityData:] */

undefined1 *
FUN_1006a8a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112706f38;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_9._2_1_;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1006a8c3c; end: 1006a8c63;  */

void FUN_1006a8c3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006a8c64; end: 1006a8d0f;  */

void FUN_1006a8c64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126daab0;
  func_0x000107c610f4(PTR_PTR_1126daab0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar2 = param_1;
    FUN_1006ab3d4(param_1);
    func_0x000107c61180();
  }
  else {
    lVar2 = 0;
  }
  func_0x000107c477a8(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x20),
                      (long)*(int *)(param_1 + 0x24),(long)*(int *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                      *(undefined2 *)(param_1 + 0x34));
  FUN_1006a8e18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006a8d10; end: 1006a8e17; -[SCNMessagingInteractionInfo initWithMessages:conversationDataState:tapActionState:longPressActionState:hasMessagesToReplay:numMessagesToSave:hasMessagesToRetry:hasMessagesToCancel:mayHaveSaveableSentSnap:messagesReplayableState:] */

undefined8 *
FUN_1006a8d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  puStack_68 = PTR_PTR_112706fd0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined4 *)((long)puVar1 + 0xc) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._2_1_;
    puVar1[5] = param_6;
    puVar1[6] = param_11;
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006a8e18; end: 1006a8e23;  */

void FUN_1006a8e18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006a8e24; end: 1006a8e4f;  */

void FUN_1006a8e24(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001086400fc();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a8e50; end: 1006a8eef;  */

void FUN_1006a8e50(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126dab28;
  func_0x000107c610f4(PTR_PTR_1126dab28);
  lVar3 = param_1;
  FUN_1006a8ef0(param_1);
  func_0x000107c61180();
  iVar1 = *(int *)(param_1 + 0x10);
  param_1 = param_1 + 0x18;
  FUN_1006a8ef0(param_1);
  func_0x000107c61180();
  func_0x000107c45d94(puVar2,param_2,lVar3,(long)iVar1,param_1);
  FUN_1006a9038();
  func_0x0001006a9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006a8ef0; end: 1006a8f23;  */

void FUN_1006a8ef0(void)

{
  func_0x000107c610f4(PTR_PTR_1126da9c8);
  func_0x000107c46480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a8f24; end: 1006a8f6f; -[SCNMessagingEnhancedNotificationPreference initWithDefaultNotificationPreference:temporaryMuteExpirationDeadlineMillis:] */

void FUN_1006a8f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706ef8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 1006a8f70; end: 1006a9037; -[SCNMessagingNotificationSettings initWithChatNotificationPreference:gameNotificationPreference:callingNotificationPreference:] */

undefined1 *
FUN_1006a8f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127070c0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006a9038; end: 1006a9047;  */

void FUN_1006a9038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006a9048; end: 1006a9127;  */

void FUN_1006a9048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126da990;
  func_0x000107c610f4(PTR_PTR_1126da990);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    lVar3 = param_1;
    FUN_1006aaae4(param_1);
    func_0x000107c61180();
  }
  else {
    lVar3 = 0;
  }
  lVar2 = param_1 + 0x78;
  func_0x0001006a9154(lVar2);
  func_0x000107c61180();
  if (*(char *)(param_1 + 0xd1) == '\x01') {
    param_1 = param_1 + 0xd0;
    FUN_1006a9184(param_1);
    func_0x000107c61180();
  }
  else {
    param_1 = 0;
  }
  func_0x000107c45cc8(puVar1,param_2,lVar3,lVar2,param_1);
  FUN_1006a92ec();
  func_0x0001006a92f8();
  func_0x0001006a9300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006a9128; end: 1006a9183;  */

void FUN_1006a9128(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_1006a9048();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a9184; end: 1006a91b3;  */

void FUN_1006a9184(void)

{
  func_0x000107c610f4(PTR_PTR_1126da8a8);
  func_0x000107c46f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a91b4; end: 1006a91fb; -[SCNMessagingBotConversationMetadata initWithIsCurrentlyReceivingStreamingResponse:] */

void FUN_1006a91b4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706dd8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1006a91fc; end: 1006a92eb; -[SCNMessagingConversationSubTypeMetadata initWithCampaignMetadata:publicGroupMetadata:botConversationMetadata:] */

undefined1 *
FUN_1006a91fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706eb0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006a92ec; end: 1006a9307;  */

void FUN_1006a92ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006a9308; end: 1006a9333;  */

void FUN_1006a9308(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010861d1c0();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006a9334; end: 1006a965b; -[SCNMessagingFeedEntry initWithConversationId:lastEventUpdateTimestamp:participants:conversationTitle:conversationType:conversationSubType:displayInfo:interactionInfo:streakMetadata:notificationSettings:pinnedTimestampMs:categoryType:categoryId:sequenceId:conversationSubTypeMetadata:conversationInvitationMetadata:] */

undefined8 *
FUN_1006a9334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  FUN_1006a965c();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  puStack_70 = PTR_PTR_112706f30;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1006a965c();
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar1[2] = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[5] = param_7;
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    puVar1[0xc] = param_14;
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    func_0x000107c61170(uVar2);
    FUN_1006a965c();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    func_0x000107c61170(uVar2);
    FUN_1006a965c();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006a965c; end: 1006a968b;  */

void FUN_1006a965c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1006a968c; end: 1006aa31b;  */

void FUN_1006a968c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001006a96a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1006aa31c; end: 1006aa323;  */

/* WARNING: Removing unreachable block (ram,0x0001006aa89c) */
/* WARNING: Removing unreachable block (ram,0x0001006aa900) */
/* WARNING: Removing unreachable block (ram,0x0001006aa90c) */
/* WARNING: Removing unreachable block (ram,0x0001006aa934) */
/* WARNING: Removing unreachable block (ram,0x0001006aa91c) */
/* WARNING: Removing unreachable block (ram,0x0001006aa948) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1006aa31c(long *param_1)

{
  undefined8 *puVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *******pppppppuVar6;
  long *******ppppppplVar7;
  ushort uVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  int iVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *plVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *******ppppppplVar24;
  undefined8 ******ppppppuVar25;
  undefined8 uVar26;
  undefined8 ******ppppppuVar27;
  undefined8 uVar28;
  undefined8 *******pppppppuStack_250;
  long ******pppppplStack_248;
  long ******pppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  undefined8 uStack_220;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *******pppppppuStack_c0;
  long ******pppppplStack_b8;
  long ******pppppplStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0xaaaaaaaaaaaaaaaa;
  uStack_118 = 0xaaaaaaaaaaaaaaaa;
  uStack_120 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  lStack_160 = -0x5555555555555556;
  FUN_10012dd4c(&uStack_220,&UNK_10f74557b,&UNK_10f7454e2,0x2b9);
  FUN_10012defc(&lStack_160,&uStack_220,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    pppppppuStack_c0 = (undefined8 *******)&uStack_220;
    func_0x000107c35cb0(&UNK_10f74523a,&pppppppuStack_c0);
  }
  ppppppplStack_238 = (long *******)0x0;
  ppppppplStack_230 = (long *******)0x0;
  ppppppplStack_228 = (long *******)0x0;
  pppppplStack_248 = (long ******)0xaaaaaaaaaaaaaaaa;
  pppppplStack_240 = (long ******)0xaaaaaaaaaaaaaaaa;
  pppppppuStack_250 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    FUN_100033dac(&pppppppuStack_250,*param_1,param_1[1]);
  }
  else {
    pppppplStack_248 = (long ******)param_1[1];
    pppppppuStack_250 = (undefined8 *******)*param_1;
    pppppplStack_240 = (long ******)param_1[2];
  }
  ppppppplVar12 = (long *******)&ppppppplStack_238;
  FUN_1006aa970(ppppppplVar12,param_1);
  pppppplStack_218 = (long ******)0xaaaaaaaaaaaaaaaa;
  pppppplStack_210 = (long ******)0xaaaaaaaaaaaaaaaa;
  uStack_220 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  ppppppplStack_230 = ppppppplVar12;
  FUN_100167340(&uStack_220,param_1);
  do {
    pppppplVar10 = pppppplStack_210;
    pppppplVar9 = pppppplStack_218;
    pppppppuVar6 = uStack_220;
    pppppplVar3 = pppppplStack_218;
    if (-1 < (long)pppppplStack_210) {
      pppppplVar3 = (long ******)((ulong)pppppplStack_210 >> 0x38);
    }
    pppppplVar2 = pppppplStack_248;
    if (-1 < (long)pppppplStack_240) {
      pppppplVar2 = (long ******)((ulong)pppppplStack_240 >> 0x38);
    }
    if (pppppplVar3 == pppppplVar2) {
      pppppppuVar15 = uStack_220;
      if (-1 < (long)pppppplStack_210) {
        pppppppuVar15 = (undefined8 *******)&uStack_220;
      }
      iVar11 = (int)pppppppuVar15;
      pppppppuVar15 = pppppppuStack_250;
      if (-1 < (long)pppppplStack_240) {
        pppppppuVar15 = &pppppppuStack_250;
      }
      func_0x000107c610b0();
      if (iVar11 == 0) break;
    }
    pppppplVar3 = pppppplStack_218;
    pppppppuVar6 = uStack_220;
    ppppppplVar12 = ppppppplStack_230;
    if (ppppppplStack_230 < ppppppplStack_228) {
      if ((long)pppppplVar10 < 0) {
        FUN_100033dac(ppppppplStack_230,uStack_220,pppppplVar9);
        ppppppplStack_230 = ppppppplVar12 + 3;
        cVar5 = (char)((ulong)pppppplStack_210 >> 0x38);
        goto joined_r0x0001006aa4d4;
      }
      ppppppplStack_230[2] = pppppplStack_210;
      ppppppplStack_230[1] = pppppplVar3;
      *ppppppplStack_230 = (long ******)pppppppuVar6;
      ppppppplStack_230 = ppppppplStack_230 + 3;
      cVar5 = (char)((ulong)pppppplStack_210 >> 0x38);
      if (-1 < (long)pppppplStack_240) goto LAB_1006aa4d8;
LAB_1006aa54c:
      pppppplVar3 = pppppplStack_218;
      pppppppuVar6 = uStack_220;
      if (-1 < (long)pppppplStack_210) {
        pppppplVar3 = (long ******)((ulong)pppppplStack_210 >> 0x38);
        pppppppuVar6 = (undefined8 *******)&uStack_220;
      }
      FUN_1006aabfc(&pppppppuStack_250,pppppppuVar6,pppppplVar3);
      FUN_100167340(&pppppppuStack_c0,&uStack_220);
    }
    else {
      ppppppplVar12 = (long *******)&ppppppplStack_238;
      FUN_1006aa970(ppppppplVar12,&uStack_220);
      cVar5 = (char)((ulong)pppppplStack_210 >> 0x38);
      ppppppplStack_230 = ppppppplVar12;
joined_r0x0001006aa4d4:
      if ((long)pppppplStack_240 < 0) goto LAB_1006aa54c;
LAB_1006aa4d8:
      if (cVar5 < '\0') {
        FUN_10014884c(&pppppppuStack_250,uStack_220,pppppplStack_218);
        FUN_100167340(&pppppppuStack_c0,&uStack_220);
      }
      else {
        pppppplStack_248 = pppppplStack_218;
        pppppppuStack_250 = uStack_220;
        pppppplStack_240 = pppppplStack_210;
        FUN_100167340(&pppppppuStack_c0,&uStack_220);
      }
    }
    if ((long)pppppplStack_210 < 0) {
      func_0x000107c60e14(uStack_220);
    }
    pppppplStack_218 = pppppplStack_b8;
    uStack_220 = pppppppuStack_c0;
    pppppplStack_210 = pppppplStack_b0;
  } while( true );
  if ((long)pppppplVar10 < 0) {
    func_0x000107c60e14(pppppppuVar6);
    ppppppplVar12 = ppppppplStack_230;
    ppppppplVar7 = ppppppplStack_238;
    if (ppppppplStack_230 != ppppppplStack_238) goto LAB_1006aa5ec;
  }
  else {
    ppppppplVar12 = ppppppplStack_230;
    ppppppplVar7 = ppppppplStack_238;
    if (ppppppplStack_230 != ppppppplStack_238) {
LAB_1006aa5ec:
      do {
        ppppppplVar24 = ppppppplVar12 + -3;
        uStack_d8 = 0xaaaaaaaaaaaaaaaa;
        uStack_e0 = 0xaaaaaaaaaaaaaaaa;
        uStack_c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_d0 = 0xaaaaaaaaaaaaaaaa;
        uStack_f8 = 0xaaaaaaaaaaaaaaaa;
        uStack_100 = 0xaaaaaaaaaaaaaaaa;
        uStack_e8 = 0xaaaaaaaaaaaaaaaa;
        uStack_f0 = 0xaaaaaaaaaaaaaaaa;
        uStack_108 = 0xaaaaaaaaaaaaaaaa;
        uStack_110 = 0xaaaaaaaaaaaaaaaa;
        FUN_10012dd4c(&uStack_220,&UNK_10f74551d,&UNK_10f7454e2,0x1c2);
        FUN_10012defc(&uStack_110,&uStack_220,0,0);
        if ((bRam000000011336f9a8 & 0x19) != 0) {
          pppppppuStack_c0 = (undefined8 *******)&uStack_220;
          func_0x000107c35cb0(&UNK_10f74523a,&pppppppuStack_c0);
        }
        uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
        uStack_198 = 0xaaaaaaaaaaaaaaaa;
        uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
        uStack_208 = 0xaaaaaaaaaaaaaaaa;
        pppppplStack_210 = (long ******)0xaaaaaaaaaaaaaaaa;
        uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
        uStack_200 = 0xaaaaaaaaaaaaaaaa;
        pppppplStack_218 = (long ******)0xaaaaaaaaaaaaaaaa;
        uStack_220 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
        ppppppplVar13 = (long *******)*ppppppplVar24;
        if (-1 < *(char *)((long)ppppppplVar12 + -1)) {
          ppppppplVar13 = ppppppplVar24;
        }
        iVar11 = (int)ppppppplVar13;
        uStack_88 = 0xaaaaaaaaaaaaaaaa;
        uStack_90 = 0xaaaaaaaaaaaaaaaa;
        uStack_78 = 0xaaaaaaaaaaaaaaaa;
        uStack_80 = 0xaaaaaaaaaaaaaaaa;
        uStack_a8 = 0xaaaaaaaaaaaaaaaa;
        pppppplStack_b0 = (long ******)0xaaaaaaaaaaaaaaaa;
        uStack_98 = 0xaaaaaaaaaaaaaaaa;
        uStack_a0 = 0xaaaaaaaaaaaaaaaa;
        pppppplStack_b8 = (long ******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_c0 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
        FUN_10012dd4c(auStack_188,&UNK_10f7454bc,&UNK_10f74542c,0x251);
        FUN_10012defc(&pppppppuStack_c0,auStack_188,0,0);
        if ((bRam000000011336f9a8 & 0x19) != 0) {
          puStack_168 = auStack_188;
          func_0x000107c35cb0(&UNK_10f74523a,&puStack_168);
        }
        pppppppuVar15 = (undefined8 *******)&uStack_220;
        func_0x000107c613b8();
        func_0x0001001331dc(&pppppppuStack_c0);
        uVar8 = uStack_220._4_2_;
        func_0x0001001331dc(&uStack_110);
        if ((iVar11 != 0) || ((uVar8 & 0xf000) != 0x4000)) {
          if (*(char *)((long)ppppppplVar12 + -1) < '\0') {
            iVar11 = (int)*ppppppplVar24;
            pppppppuVar15 = (undefined8 *******)0x1c0;
            func_0x000107c610dc();
          }
          else {
            pppppppuVar15 = (undefined8 *******)0x1c0;
            ppppppplVar13 = ppppppplVar24;
            func_0x000107c610dc();
            iVar11 = (int)ppppppplVar13;
          }
          if (iVar11 != 0) {
            func_0x000107c60e5c();
            uStack_d8 = 0xaaaaaaaaaaaaaaaa;
            uStack_e0 = 0xaaaaaaaaaaaaaaaa;
            uStack_c8 = 0xaaaaaaaaaaaaaaaa;
            uStack_d0 = 0xaaaaaaaaaaaaaaaa;
            uStack_f8 = 0xaaaaaaaaaaaaaaaa;
            uStack_100 = 0xaaaaaaaaaaaaaaaa;
            uStack_e8 = 0xaaaaaaaaaaaaaaaa;
            uStack_f0 = 0xaaaaaaaaaaaaaaaa;
            uStack_108 = 0xaaaaaaaaaaaaaaaa;
            uStack_110 = 0xaaaaaaaaaaaaaaaa;
            FUN_10012dd4c(&uStack_220,&UNK_10f74551d,&UNK_10f7454e2,0x1c2);
            FUN_10012defc(&uStack_110,&uStack_220,0,0);
            if ((bRam000000011336f9a8 & 0x19) != 0) {
              pppppppuStack_c0 = (undefined8 *******)&uStack_220;
              func_0x000107c35cb0(&UNK_10f74523a,&pppppppuStack_c0);
            }
            uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
            uStack_198 = 0xaaaaaaaaaaaaaaaa;
            uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
            uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
            uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
            uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
            uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
            uStack_208 = 0xaaaaaaaaaaaaaaaa;
            pppppplStack_210 = (long ******)0xaaaaaaaaaaaaaaaa;
            uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
            uStack_200 = 0xaaaaaaaaaaaaaaaa;
            pppppplStack_218 = (long ******)0xaaaaaaaaaaaaaaaa;
            uStack_220 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
            ppppppplVar13 = (long *******)*ppppppplVar24;
            if (-1 < *(char *)((long)ppppppplVar12 + -1)) {
              ppppppplVar13 = ppppppplVar24;
            }
            iVar11 = (int)ppppppplVar13;
            uStack_88 = 0xaaaaaaaaaaaaaaaa;
            uStack_90 = 0xaaaaaaaaaaaaaaaa;
            uStack_78 = 0xaaaaaaaaaaaaaaaa;
            uStack_80 = 0xaaaaaaaaaaaaaaaa;
            uStack_a8 = 0xaaaaaaaaaaaaaaaa;
            pppppplStack_b0 = (long ******)0xaaaaaaaaaaaaaaaa;
            uStack_98 = 0xaaaaaaaaaaaaaaaa;
            uStack_a0 = 0xaaaaaaaaaaaaaaaa;
            pppppplStack_b8 = (long ******)0xaaaaaaaaaaaaaaaa;
            pppppppuStack_c0 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
            FUN_10012dd4c(auStack_188,&UNK_10f7454bc,&UNK_10f74542c,0x251);
            FUN_10012defc(&pppppppuStack_c0,auStack_188,0,0);
            if ((bRam000000011336f9a8 & 0x19) != 0) {
              puStack_168 = auStack_188;
              func_0x000107c35cb0(&UNK_10f74523a,&puStack_168);
            }
            pppppppuVar15 = (undefined8 *******)&uStack_220;
            func_0x000107c613b8();
            func_0x0001001331dc(&pppppppuStack_c0);
            uVar8 = uStack_220._4_2_;
            func_0x0001001331dc(&uStack_110);
            if ((iVar11 != 0) || ((uVar8 & 0xf000) != 0x4000)) {
              puVar22 = (undefined8 *)0x0;
              goto LAB_1006aa85c;
            }
          }
        }
        ppppppplVar12 = ppppppplVar24;
      } while (ppppppplVar24 != ppppppplVar7);
    }
  }
  puVar22 = (undefined8 *)0x1;
LAB_1006aa85c:
  if ((long)pppppplStack_240 < 0) {
    func_0x000107c60e14(pppppppuStack_250);
  }
  if (ppppppplStack_238 != (long *******)0x0) {
    for (; ppppppplStack_230 != ppppppplStack_238; ppppppplStack_230 = ppppppplStack_230 + -3) {
    }
    ppppppplStack_230 = ppppppplStack_238;
    func_0x000107c60e14(ppppppplStack_238);
  }
  plVar14 = &lStack_160;
  func_0x0001001331dc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar22;
  }
  func_0x000107c60e78();
  puVar22 = (undefined8 *)(plVar14[1] - *plVar14);
  uVar20 = ((long)puVar22 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar20) {
    func_0x000107c2cae0();
LAB_1006aaae0:
    func_0x000107c35c58();
    puVar22 = (undefined8 *)PTR_PTR_1126da8d0;
    func_0x000107c610f4(PTR_PTR_1126da8d0);
    func_0x000100101220(plVar14);
    func_0x000107c61180();
    FUN_1006aaca4((long)plVar14 + 0x1c);
    func_0x000107c61180();
    FUN_1006a8018(plVar14 + 5);
    func_0x000107c61180();
    FUN_1006a7df8(plVar14 + 9);
    func_0x000107c61180();
    func_0x000107c455f8(puVar22);
    FUN_1006aae3c();
    func_0x0001006aae44();
    func_0x0001006aae4c();
    FUN_100606de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
    return puVar22;
  }
  lVar18 = plVar14[2] - *plVar14 >> 3;
  uVar21 = lVar18 * 0x5555555555555556;
  if (uVar21 < uVar20 || uVar21 - uVar20 == 0) {
    uVar21 = uVar20;
  }
  if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
    uVar21 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar21 == 0) {
    lVar18 = 0;
    cVar5 = *(char *)((long)pppppppuVar15 + 0x17);
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar21) goto LAB_1006aaae0;
    lVar18 = uVar21 * 0x18;
    func_0x000107c60e20();
    puVar22 = (undefined8 *)(lVar18 + (long)puVar22);
    cVar5 = *(char *)((long)pppppppuVar15 + 0x17);
  }
  if (cVar5 < '\0') {
    FUN_100033dac(puVar22,*pppppppuVar15,pppppppuVar15[1]);
  }
  else {
    ppppppuVar27 = pppppppuVar15[1];
    ppppppuVar25 = *pppppppuVar15;
    puVar22[2] = pppppppuVar15[2];
    puVar22[1] = ppppppuVar27;
    *puVar22 = ppppppuVar25;
  }
  puVar23 = (undefined8 *)*plVar14;
  puVar4 = (undefined8 *)plVar14[1];
  puVar1 = (undefined8 *)((long)puVar22 + ((long)puVar23 - (long)puVar4));
  puVar16 = puVar23;
  puVar19 = puVar1;
  if (puVar4 != puVar23) {
    do {
      uVar28 = puVar16[1];
      uVar26 = *puVar16;
      puVar19[2] = puVar16[2];
      puVar19[1] = uVar28;
      *puVar19 = uVar26;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar17 = puVar16 + 3;
      *puVar16 = 0;
      puVar16 = puVar17;
      puVar19 = puVar19 + 3;
    } while (puVar17 != puVar4);
    do {
      if (*(char *)((long)puVar23 + 0x17) < '\0') {
        func_0x000107c60e14(*puVar23);
      }
      puVar23 = puVar23 + 3;
    } while (puVar23 != puVar4);
    puVar23 = (undefined8 *)*plVar14;
  }
  *plVar14 = (long)puVar1;
  plVar14[1] = (long)(puVar22 + 3);
  plVar14[2] = lVar18 + uVar21 * 0x18;
  if (puVar23 != (undefined8 *)0x0) {
    func_0x000107c60e14(puVar23);
  }
  return puVar22 + 3;
}



/* Entry: 1006aa324; end: 1006aa96f;  */

/* WARNING: Removing unreachable block (ram,0x0001006aa89c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1006aa324(long *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint ******ppppppuVar2;
  uint ******ppppppuVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  uint *******pppppppuVar7;
  ushort uVar8;
  uint ******ppppppuVar9;
  uint ******ppppppuVar10;
  int iVar11;
  uint *******pppppppuVar12;
  uint *******pppppppuVar13;
  long *plVar14;
  undefined8 *******pppppppuVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *******pppppppuVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint *******pppppppuVar26;
  undefined8 ******ppppppuVar27;
  undefined8 uVar28;
  undefined8 ******ppppppuVar29;
  undefined8 uVar30;
  undefined8 *******pppppppuStack_250;
  uint ******ppppppuStack_248;
  uint ******ppppppuStack_240;
  uint *******pppppppuStack_238;
  uint *******pppppppuStack_230;
  uint *******pppppppuStack_228;
  undefined8 uStack_220;
  uint ******ppppppuStack_218;
  uint ******ppppppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *******pppppppuStack_c0;
  uint ******ppppppuStack_b8;
  uint ******ppppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0xaaaaaaaaaaaaaaaa;
  uStack_118 = 0xaaaaaaaaaaaaaaaa;
  uStack_120 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  lStack_160 = -0x5555555555555556;
  FUN_10012dd4c(&uStack_220,&UNK_10f74557b,&UNK_10f7454e2,0x2b9);
  FUN_10012defc(&lStack_160,&uStack_220,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    pppppppuStack_c0 = (undefined8 *******)&uStack_220;
    func_0x000107c35cb0(&UNK_10f74523a,&pppppppuStack_c0);
  }
  pppppppuStack_238 = (uint *******)0x0;
  pppppppuStack_230 = (uint *******)0x0;
  pppppppuStack_228 = (uint *******)0x0;
  ppppppuStack_248 = (uint ******)0xaaaaaaaaaaaaaaaa;
  ppppppuStack_240 = (uint ******)0xaaaaaaaaaaaaaaaa;
  pppppppuStack_250 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    FUN_100033dac(&pppppppuStack_250,*param_1,param_1[1]);
  }
  else {
    ppppppuStack_248 = (uint ******)param_1[1];
    pppppppuStack_250 = (undefined8 *******)*param_1;
    ppppppuStack_240 = (uint ******)param_1[2];
  }
  pppppppuVar12 = (uint *******)&pppppppuStack_238;
  FUN_1006aa970(pppppppuVar12,param_1);
  ppppppuStack_218 = (uint ******)0xaaaaaaaaaaaaaaaa;
  ppppppuStack_210 = (uint ******)0xaaaaaaaaaaaaaaaa;
  uStack_220 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  pppppppuStack_230 = pppppppuVar12;
  FUN_100167340(&uStack_220,param_1);
  do {
    ppppppuVar10 = ppppppuStack_210;
    ppppppuVar9 = ppppppuStack_218;
    pppppppuVar23 = uStack_220;
    ppppppuVar3 = ppppppuStack_218;
    if (-1 < (long)ppppppuStack_210) {
      ppppppuVar3 = (uint ******)((ulong)ppppppuStack_210 >> 0x38);
    }
    ppppppuVar2 = ppppppuStack_248;
    if (-1 < (long)ppppppuStack_240) {
      ppppppuVar2 = (uint ******)((ulong)ppppppuStack_240 >> 0x38);
    }
    if (ppppppuVar3 == ppppppuVar2) {
      pppppppuVar15 = uStack_220;
      if (-1 < (long)ppppppuStack_210) {
        pppppppuVar15 = (undefined8 *******)&uStack_220;
      }
      iVar11 = (int)pppppppuVar15;
      pppppppuVar15 = pppppppuStack_250;
      if (-1 < (long)ppppppuStack_240) {
        pppppppuVar15 = &pppppppuStack_250;
      }
      func_0x000107c610b0();
      if (iVar11 == 0) break;
    }
    ppppppuVar3 = ppppppuStack_218;
    pppppppuVar23 = uStack_220;
    pppppppuVar12 = pppppppuStack_230;
    if (pppppppuStack_230 < pppppppuStack_228) {
      if ((long)ppppppuVar10 < 0) {
        FUN_100033dac(pppppppuStack_230,uStack_220,ppppppuVar9);
        pppppppuStack_230 = pppppppuVar12 + 3;
        cVar6 = (char)((ulong)ppppppuStack_210 >> 0x38);
        goto joined_r0x0001006aa4d4;
      }
      pppppppuStack_230[2] = ppppppuStack_210;
      pppppppuStack_230[1] = ppppppuVar3;
      *pppppppuStack_230 = (uint ******)pppppppuVar23;
      pppppppuStack_230 = pppppppuStack_230 + 3;
      cVar6 = (char)((ulong)ppppppuStack_210 >> 0x38);
      if ((long)ppppppuStack_240 < 0) goto LAB_1006aa54c;
LAB_1006aa4d8:
      if (cVar6 < '\0') {
        FUN_10014884c(&pppppppuStack_250,uStack_220,ppppppuStack_218);
        FUN_100167340(&pppppppuStack_c0,&uStack_220);
      }
      else {
        ppppppuStack_248 = ppppppuStack_218;
        pppppppuStack_250 = uStack_220;
        ppppppuStack_240 = ppppppuStack_210;
        FUN_100167340(&pppppppuStack_c0,&uStack_220);
      }
    }
    else {
      pppppppuVar12 = (uint *******)&pppppppuStack_238;
      FUN_1006aa970(pppppppuVar12,&uStack_220);
      cVar6 = (char)((ulong)ppppppuStack_210 >> 0x38);
      pppppppuStack_230 = pppppppuVar12;
joined_r0x0001006aa4d4:
      if (-1 < (long)ppppppuStack_240) goto LAB_1006aa4d8;
LAB_1006aa54c:
      ppppppuVar3 = ppppppuStack_218;
      pppppppuVar23 = uStack_220;
      if (-1 < (long)ppppppuStack_210) {
        ppppppuVar3 = (uint ******)((ulong)ppppppuStack_210 >> 0x38);
        pppppppuVar23 = (undefined8 *******)&uStack_220;
      }
      FUN_1006aabfc(&pppppppuStack_250,pppppppuVar23,ppppppuVar3);
      FUN_100167340(&pppppppuStack_c0,&uStack_220);
    }
    if ((long)ppppppuStack_210 < 0) {
      func_0x000107c60e14(uStack_220);
    }
    ppppppuStack_218 = ppppppuStack_b8;
    uStack_220 = pppppppuStack_c0;
    ppppppuStack_210 = ppppppuStack_b0;
  } while( true );
  if ((long)ppppppuVar10 < 0) {
    func_0x000107c60e14(pppppppuVar23);
    pppppppuVar12 = pppppppuStack_230;
    pppppppuVar7 = pppppppuStack_238;
    if (pppppppuStack_230 != pppppppuStack_238) goto LAB_1006aa5ec;
  }
  else {
    pppppppuVar12 = pppppppuStack_230;
    pppppppuVar7 = pppppppuStack_238;
    if (pppppppuStack_230 != pppppppuStack_238) {
LAB_1006aa5ec:
      do {
        pppppppuVar26 = pppppppuVar12 + -3;
        uStack_d8 = 0xaaaaaaaaaaaaaaaa;
        uStack_e0 = 0xaaaaaaaaaaaaaaaa;
        uStack_c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_d0 = 0xaaaaaaaaaaaaaaaa;
        uStack_f8 = 0xaaaaaaaaaaaaaaaa;
        uStack_100 = 0xaaaaaaaaaaaaaaaa;
        uStack_e8 = 0xaaaaaaaaaaaaaaaa;
        uStack_f0 = 0xaaaaaaaaaaaaaaaa;
        uStack_108 = 0xaaaaaaaaaaaaaaaa;
        uStack_110 = 0xaaaaaaaaaaaaaaaa;
        FUN_10012dd4c(&uStack_220,&UNK_10f74551d,&UNK_10f7454e2,0x1c2);
        FUN_10012defc(&uStack_110,&uStack_220,0,0);
        if ((bRam000000011336f9a8 & 0x19) != 0) {
          pppppppuStack_c0 = (undefined8 *******)&uStack_220;
          func_0x000107c35cb0(&UNK_10f74523a,&pppppppuStack_c0);
        }
        uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
        uStack_198 = 0xaaaaaaaaaaaaaaaa;
        uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
        uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
        uStack_208 = 0xaaaaaaaaaaaaaaaa;
        ppppppuStack_210 = (uint ******)0xaaaaaaaaaaaaaaaa;
        uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
        uStack_200 = 0xaaaaaaaaaaaaaaaa;
        ppppppuStack_218 = (uint ******)0xaaaaaaaaaaaaaaaa;
        uStack_220 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
        pppppppuVar13 = (uint *******)*pppppppuVar26;
        if (-1 < *(char *)((long)pppppppuVar12 + -1)) {
          pppppppuVar13 = pppppppuVar26;
        }
        iVar11 = (int)pppppppuVar13;
        uStack_88 = 0xaaaaaaaaaaaaaaaa;
        uStack_90 = 0xaaaaaaaaaaaaaaaa;
        uStack_78 = 0xaaaaaaaaaaaaaaaa;
        uStack_80 = 0xaaaaaaaaaaaaaaaa;
        uStack_a8 = 0xaaaaaaaaaaaaaaaa;
        ppppppuStack_b0 = (uint ******)0xaaaaaaaaaaaaaaaa;
        uStack_98 = 0xaaaaaaaaaaaaaaaa;
        uStack_a0 = 0xaaaaaaaaaaaaaaaa;
        ppppppuStack_b8 = (uint ******)0xaaaaaaaaaaaaaaaa;
        pppppppuStack_c0 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
        FUN_10012dd4c(auStack_188,&UNK_10f7454bc,&UNK_10f74542c,0x251);
        FUN_10012defc(&pppppppuStack_c0,auStack_188,0,0);
        if ((bRam000000011336f9a8 & 0x19) != 0) {
          puStack_168 = auStack_188;
          func_0x000107c35cb0(&UNK_10f74523a,&puStack_168);
        }
        pppppppuVar15 = (undefined8 *******)&uStack_220;
        func_0x000107c613b8();
        func_0x0001001331dc(&pppppppuStack_c0);
        uVar8 = uStack_220._4_2_;
        func_0x0001001331dc(&uStack_110);
        if ((iVar11 != 0) || ((uVar8 & 0xf000) != 0x4000)) {
          if (*(char *)((long)pppppppuVar12 + -1) < '\0') {
            pppppppuVar13 = (uint *******)*pppppppuVar26;
            pppppppuVar15 = (undefined8 *******)0x1c0;
            func_0x000107c610dc();
            iVar11 = (int)pppppppuVar13;
          }
          else {
            pppppppuVar15 = (undefined8 *******)0x1c0;
            pppppppuVar13 = pppppppuVar26;
            func_0x000107c610dc();
            iVar11 = (int)pppppppuVar13;
          }
          if (iVar11 != 0) {
            func_0x000107c60e5c();
            uVar5 = *(uint *)pppppppuVar13;
            pppppppuVar23 = (undefined8 *******)(ulong)uVar5;
            uStack_d8 = 0xaaaaaaaaaaaaaaaa;
            uStack_e0 = 0xaaaaaaaaaaaaaaaa;
            uStack_c8 = 0xaaaaaaaaaaaaaaaa;
            uStack_d0 = 0xaaaaaaaaaaaaaaaa;
            uStack_f8 = 0xaaaaaaaaaaaaaaaa;
            uStack_100 = 0xaaaaaaaaaaaaaaaa;
            uStack_e8 = 0xaaaaaaaaaaaaaaaa;
            uStack_f0 = 0xaaaaaaaaaaaaaaaa;
            uStack_108 = 0xaaaaaaaaaaaaaaaa;
            uStack_110 = 0xaaaaaaaaaaaaaaaa;
            FUN_10012dd4c(&uStack_220,&UNK_10f74551d,&UNK_10f7454e2,0x1c2);
            FUN_10012defc(&uStack_110,&uStack_220,0,0);
            if ((bRam000000011336f9a8 & 0x19) != 0) {
              pppppppuStack_c0 = (undefined8 *******)&uStack_220;
              func_0x000107c35cb0(&UNK_10f74523a,&pppppppuStack_c0);
            }
            uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
            uStack_198 = 0xaaaaaaaaaaaaaaaa;
            uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
            uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
            uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
            uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
            uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
            uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
            uStack_208 = 0xaaaaaaaaaaaaaaaa;
            ppppppuStack_210 = (uint ******)0xaaaaaaaaaaaaaaaa;
            uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
            uStack_200 = 0xaaaaaaaaaaaaaaaa;
            ppppppuStack_218 = (uint ******)0xaaaaaaaaaaaaaaaa;
            uStack_220 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
            pppppppuVar13 = (uint *******)*pppppppuVar26;
            if (-1 < *(char *)((long)pppppppuVar12 + -1)) {
              pppppppuVar13 = pppppppuVar26;
            }
            iVar11 = (int)pppppppuVar13;
            uStack_88 = 0xaaaaaaaaaaaaaaaa;
            uStack_90 = 0xaaaaaaaaaaaaaaaa;
            uStack_78 = 0xaaaaaaaaaaaaaaaa;
            uStack_80 = 0xaaaaaaaaaaaaaaaa;
            uStack_a8 = 0xaaaaaaaaaaaaaaaa;
            ppppppuStack_b0 = (uint ******)0xaaaaaaaaaaaaaaaa;
            uStack_98 = 0xaaaaaaaaaaaaaaaa;
            uStack_a0 = 0xaaaaaaaaaaaaaaaa;
            ppppppuStack_b8 = (uint ******)0xaaaaaaaaaaaaaaaa;
            pppppppuStack_c0 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
            FUN_10012dd4c(auStack_188,&UNK_10f7454bc,&UNK_10f74542c,0x251);
            FUN_10012defc(&pppppppuStack_c0,auStack_188,0,0);
            if ((bRam000000011336f9a8 & 0x19) != 0) {
              puStack_168 = auStack_188;
              func_0x000107c35cb0(&UNK_10f74523a,&puStack_168);
            }
            pppppppuVar15 = (undefined8 *******)&uStack_220;
            func_0x000107c613b8();
            func_0x0001001331dc(&pppppppuStack_c0);
            uVar8 = uStack_220._4_2_;
            func_0x0001001331dc(&uStack_110);
            if ((iVar11 != 0) || ((uVar8 & 0xf000) != 0x4000)) {
              if (param_2 == (undefined4 *)0x0) {
                puVar24 = (undefined8 *)0x0;
              }
              else {
                uVar5 = uVar5 - 1;
                if ((uVar5 < 0x1e) && ((0x2ad99813U >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
                  uVar16 = *(undefined4 *)(&UNK_10e574a40 + (ulong)uVar5 * 4);
                  pppppppuVar23 = pppppppuVar15;
                }
                else {
                  func_0x000100220d50(&UNK_10f745488);
                  uVar16 = 0xffffffff;
                }
                puVar24 = (undefined8 *)0x0;
                *param_2 = uVar16;
                pppppppuVar15 = pppppppuVar23;
              }
              goto LAB_1006aa85c;
            }
          }
        }
        pppppppuVar12 = pppppppuVar26;
      } while (pppppppuVar26 != pppppppuVar7);
    }
  }
  puVar24 = (undefined8 *)0x1;
LAB_1006aa85c:
  if ((long)ppppppuStack_240 < 0) {
    func_0x000107c60e14(pppppppuStack_250);
  }
  if (pppppppuStack_238 != (uint *******)0x0) {
    for (; pppppppuStack_230 != pppppppuStack_238; pppppppuStack_230 = pppppppuStack_230 + -3) {
    }
    pppppppuStack_230 = pppppppuStack_238;
    func_0x000107c60e14(pppppppuStack_238);
  }
  plVar14 = &lStack_160;
  func_0x0001001331dc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar24;
  }
  func_0x000107c60e78();
  puVar24 = (undefined8 *)(plVar14[1] - *plVar14);
  uVar21 = ((long)puVar24 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar21) {
    func_0x000107c2cae0();
LAB_1006aaae0:
    func_0x000107c35c58();
    puVar24 = (undefined8 *)PTR_PTR_1126da8d0;
    func_0x000107c610f4(PTR_PTR_1126da8d0);
    func_0x000100101220(plVar14);
    func_0x000107c61180();
    FUN_1006aaca4((long)plVar14 + 0x1c);
    func_0x000107c61180();
    FUN_1006a8018(plVar14 + 5);
    func_0x000107c61180();
    FUN_1006a7df8(plVar14 + 9);
    func_0x000107c61180();
    func_0x000107c455f8(puVar24);
    FUN_1006aae3c();
    func_0x0001006aae44();
    func_0x0001006aae4c();
    FUN_100606de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
    return puVar24;
  }
  lVar19 = plVar14[2] - *plVar14 >> 3;
  uVar22 = lVar19 * 0x5555555555555556;
  if (uVar22 < uVar21 || uVar22 - uVar21 == 0) {
    uVar22 = uVar21;
  }
  if (0x555555555555554 < (ulong)(lVar19 * -0x5555555555555555)) {
    uVar22 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar22 == 0) {
    lVar19 = 0;
    cVar6 = *(char *)((long)pppppppuVar15 + 0x17);
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar22) goto LAB_1006aaae0;
    lVar19 = uVar22 * 0x18;
    func_0x000107c60e20();
    puVar24 = (undefined8 *)(lVar19 + (long)puVar24);
    cVar6 = *(char *)((long)pppppppuVar15 + 0x17);
  }
  if (cVar6 < '\0') {
    FUN_100033dac(puVar24,*pppppppuVar15,pppppppuVar15[1]);
  }
  else {
    ppppppuVar29 = pppppppuVar15[1];
    ppppppuVar27 = *pppppppuVar15;
    puVar24[2] = pppppppuVar15[2];
    puVar24[1] = ppppppuVar29;
    *puVar24 = ppppppuVar27;
  }
  puVar25 = (undefined8 *)*plVar14;
  puVar4 = (undefined8 *)plVar14[1];
  puVar1 = (undefined8 *)((long)puVar24 + ((long)puVar25 - (long)puVar4));
  puVar17 = puVar25;
  puVar20 = puVar1;
  if (puVar4 != puVar25) {
    do {
      uVar30 = puVar17[1];
      uVar28 = *puVar17;
      puVar20[2] = puVar17[2];
      puVar20[1] = uVar30;
      *puVar20 = uVar28;
      puVar17[1] = 0;
      puVar17[2] = 0;
      puVar18 = puVar17 + 3;
      *puVar17 = 0;
      puVar17 = puVar18;
      puVar20 = puVar20 + 3;
    } while (puVar18 != puVar4);
    do {
      if (*(char *)((long)puVar25 + 0x17) < '\0') {
        func_0x000107c60e14(*puVar25);
      }
      puVar25 = puVar25 + 3;
    } while (puVar25 != puVar4);
    puVar25 = (undefined8 *)*plVar14;
  }
  *plVar14 = (long)puVar1;
  plVar14[1] = (long)(puVar24 + 3);
  plVar14[2] = lVar19 + uVar22 * 0x18;
  if (puVar25 != (undefined8 *)0x0) {
    func_0x000107c60e14(puVar25);
  }
  return puVar24 + 3;
}



/* Entry: 1006aa970; end: 1006aaae3;  */

undefined8 * FUN_1006aa970(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined8 *)(param_1[1] - *param_1);
  uVar8 = ((long)puVar11 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar8) {
    func_0x000107c2cae0();
LAB_1006aaae0:
    func_0x000107c35c58();
    puVar11 = (undefined8 *)PTR_PTR_1126da8d0;
    func_0x000107c610f4(PTR_PTR_1126da8d0);
    func_0x000100101220(param_1);
    func_0x000107c61180();
    FUN_1006aaca4((long)param_1 + 0x1c);
    func_0x000107c61180();
    FUN_1006a8018(param_1 + 5);
    func_0x000107c61180();
    FUN_1006a7df8(param_1 + 9);
    func_0x000107c61180();
    func_0x000107c455f8(puVar11);
    FUN_1006aae3c();
    func_0x0001006aae44();
    func_0x0001006aae4c();
    FUN_100606de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar9 = lVar6 * 0x5555555555555556;
  if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
    uVar9 = uVar8;
  }
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar9 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar9 == 0) {
    lVar6 = 0;
    cVar3 = *(char *)((long)param_2 + 0x17);
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_1006aaae0;
    lVar6 = uVar9 * 0x18;
    func_0x000107c60e20();
    puVar11 = (undefined8 *)(lVar6 + (long)puVar11);
    cVar3 = *(char *)((long)param_2 + 0x17);
  }
  if (cVar3 < '\0') {
    FUN_100033dac(puVar11,*param_2,param_2[1]);
  }
  else {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar11[2] = param_2[2];
    puVar11[1] = uVar13;
    *puVar11 = uVar12;
  }
  puVar10 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar11 + ((long)puVar10 - (long)puVar2));
  puVar4 = puVar10;
  puVar7 = puVar1;
  if (puVar2 != puVar10) {
    do {
      uVar13 = puVar4[1];
      uVar12 = *puVar4;
      puVar7[2] = puVar4[2];
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar5 = puVar4 + 3;
      *puVar4 = 0;
      puVar4 = puVar5;
      puVar7 = puVar7 + 3;
    } while (puVar5 != puVar2);
    do {
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        func_0x000107c60e14(*puVar10);
      }
      puVar10 = puVar10 + 3;
    } while (puVar10 != puVar2);
    puVar10 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)(puVar11 + 3);
  param_1[2] = lVar6 + uVar9 * 0x18;
  if (puVar10 != (undefined8 *)0x0) {
    func_0x000107c60e14(puVar10);
  }
  return puVar11 + 3;
}



/* Entry: 1006aaae4; end: 1006aabef;  */

void FUN_1006aaae4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126da8d0;
  func_0x000107c610f4(PTR_PTR_1126da8d0);
  lVar3 = param_1;
  func_0x000100101220(param_1);
  func_0x000107c61180();
  iVar1 = *(int *)(param_1 + 0x18);
  lVar4 = param_1 + 0x1c;
  FUN_1006aaca4(lVar4);
  func_0x000107c61180();
  lVar5 = param_1 + 0x28;
  FUN_1006a8018(lVar5);
  func_0x000107c61180();
  lVar6 = param_1 + 0x48;
  FUN_1006a7df8(lVar6);
  func_0x000107c61180();
  func_0x000107c455f8(puVar2,param_2,lVar3,(long)iVar1,lVar4,lVar5,lVar6,
                      (long)*(int *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0x6c));
  FUN_1006aae3c();
  func_0x0001006aae44();
  func_0x0001006aae4c();
  FUN_100606de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006aabf0; end: 1006aabfb;  */

void FUN_1006aabf0(undefined8 param_1)

{
  undefined8 in_x7;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,in_x7);
  return;
}



/* Entry: 1006aabfc; end: 1006aac77;  */

long * FUN_1006aabfc(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1[2] & 0x7fffffffffffffff;
  if (param_3 < uVar1) {
    lVar2 = *param_1;
    param_1[1] = param_3;
    if (param_3 != 0) {
      FUN_1006aabf0(lVar2);
    }
    *(undefined1 *)(lVar2 + param_3) = 0;
  }
  else {
    func_0x000107c60c48(param_1,uVar1 - 1,(param_3 - uVar1) + 1,param_1[1],0,param_1[1],param_3,
                        param_2);
  }
  return param_1;
}



/* Entry: 1006aac78; end: 1006aaca3;  */

void FUN_1006aac78(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006aaca4; end: 1006aacd7;  */

void FUN_1006aaca4(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_1006aac78(*param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006aacd8; end: 1006aae3b; -[SCNMessagingCampaignMetadata initWithAdResponseBytes:responseInteractionSetting:feedInsertionIndex:adSyncAttemptId:chatHeadline:campaignDisplayMode:isNoFillAd:] */

undefined1 *
FUN_1006aacd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_112706e00;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006aae3c; end: 1006aae53;  */

void FUN_1006aae3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006aae54; end: 1006aae77;  */

void FUN_1006aae54(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1006aae78; end: 1006aae83;  */

void FUN_1006aae78(void)

{
  return;
}



/* Entry: 1006aae84; end: 1006aaf87;  */

void FUN_1006aae84(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  undefined *puVar5;
  
  puVar3 = PTR_PTR_1126dabf8;
  func_0x000107c610f4(PTR_PTR_1126dabf8);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if ((char)param_1[8] == '\x01') {
    piVar4 = param_1 + 2;
    FUN_1006ab0e8(piVar4);
    func_0x000107c61180();
  }
  else {
    piVar4 = (int *)0x0;
  }
  if ((char)param_1[0xb] == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1[10]);
    func_0x000107c61180();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  param_1 = param_1 + 0xc;
  FUN_1001011ec(param_1);
  func_0x000107c61180();
  func_0x000107c489a8(puVar3,param_2,(long)iVar1,(char)iVar2,piVar4,puVar5,param_1);
  FUN_1006ab3ac();
  func_0x000107c61170(puVar5);
  func_0x0001006ab3b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1006aaf88; end: 1006aaf93;  */

void FUN_1006aaf88(void)

{
  if (*(char *)(((ulong)&stack0x00000010 | 8) + 0x18) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006aaf94; end: 1006aafb3;  */

void FUN_1006aaf94(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006aafb4; end: 1006ab01f;  */

undefined8 * FUN_1006aafb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_1006aae54(param_1 + 2);
  }
  FUN_1006aaf94((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_1006aaf94(param_1 + 2);
  return param_1;
}



/* Entry: 1006ab020; end: 1006ab02f;  */

void FUN_1006ab020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 1006ab030; end: 1006ab04f;  */

void FUN_1006ab030(void)

{
  long unaff_x19;
  
  FUN_1006ab020();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1006ab050; end: 1006ab073;  */

void FUN_1006ab050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1006ab074; end: 1006ab0db;  */

void FUN_1006ab074(void)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x0001006ab068();
  func_0x000107c60c94();
  FUN_1006ab0dc();
  func_0x000107c60c94();
  lVar1 = unaff_x19 + 8;
  FUN_1005e3484(lVar1,auStack_38,auStack_50);
  FUN_100607298(unaff_x19 + 8,lVar1);
  FUN_1006ab190();
  func_0x0001006ab198();
  return;
}



/* Entry: 1006ab0dc; end: 1006ab0e7;  */

void FUN_1006ab0dc(void)

{
  return;
}



/* Entry: 1006ab0e8; end: 1006ab18f;  */

void FUN_1006ab0e8(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126da8f8;
  func_0x000107c610f4(PTR_PTR_1126da8f8);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  param_1 = param_1 + 8;
  FUN_1001011ec(param_1);
  func_0x000107c61180();
  func_0x000107c46c8c(puVar6,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,param_1);
  FUN_1006ab29c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1006ab190; end: 1006ab1d3;  */

void FUN_1006ab190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1006ab1d4; end: 1006ab29b; -[SCNMessagingComboSnapItem initWithHasNewChat:hasNewReaction:showSnapIconFirst:hasMultipleNewSnaps:hasMultipleNewChats:unreadChatCount:] */

undefined1 *
FUN_1006ab1d4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_112706e30;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ab29c; end: 1006ab2a3;  */

void FUN_1006ab29c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006ab2a4; end: 1006ab3ab; -[SCNMessagingSnapItem initWithState:hasAudio:comboSnapItemInfo:snapModeState:unviewedSnapCount:] */

undefined1 *
FUN_1006ab2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1127071c8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ab3ac; end: 1006ab3d3;  */

void FUN_1006ab3ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006ab3d4; end: 1006ab463;  */

void FUN_1006ab3d4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x0001006ab3bc();
  func_0x000107c3e170();
  func_0x000107c61180();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 0x5d8) {
    FUN_1006ab464(lVar2);
    func_0x000107c61180();
    func_0x0001006b119c();
    func_0x0001006b11ac();
  }
  func_0x000107c40794(param_1);
  func_0x0001006b11b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1006ab464; end: 1006ab5bb;  */

void FUN_1006ab464(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_PTR_1126b2d28;
  func_0x000107c610f4(PTR_PTR_1126b2d28);
  lVar4 = param_1;
  FUN_1006ab644(param_1);
  func_0x000107c61180();
  lVar5 = param_1 + 0x20;
  FUN_1006a7d84(lVar5);
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x3d0) == '\x01') {
    lVar8 = param_1 + 0x38;
    FUN_1006ab7d0(lVar8);
    func_0x000107c61180();
  }
  else {
    lVar8 = 0;
  }
  lVar6 = param_1 + 0x3d8;
  FUN_1006afe48(lVar6);
  func_0x000107c61180();
  iVar1 = *(int *)(param_1 + 0x5a0);
  iVar2 = *(int *)(param_1 + 0x5a4);
  lVar7 = param_1 + 0x5a8;
  FUN_1006b0ebc();
  func_0x000107c61180();
  func_0x000107c46514(puVar3,param_2,lVar4,lVar5,lVar8,lVar6,(long)iVar1,(long)iVar2,lVar7,
                      *(undefined8 *)(param_1 + 0x5d0));
  FUN_1006b1174();
  func_0x0001006b117c();
  func_0x0001006b1184();
  func_0x0001006b118c();
  func_0x0001006b1194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1006ab5bc; end: 1006ab5c3;  */

undefined1 * FUN_1006ab5bc(void)

{
  undefined **ppuStack0000000000000180;
  
  ppuStack0000000000000180 = &PTR_DAT_110a60a10;
  FUN_1000e30f4(&stack0x00000188);
  return (undefined1 *)&stack0x00000180;
}



/* Entry: 1006ab5c4; end: 1006ab643;  */

undefined8 * FUN_1006ab5c4(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lStack_38;
  
  func_0x0001005529b4(param_1 + 6);
  cVar1 = *(char *)(param_1 + 9);
  plVar3 = *(long **)*param_1;
  puVar2 = param_1 + 6;
  FUN_1005e3518();
  lStack_38 = 1000;
  if (cVar1 == '\0') {
    lStack_38 = 1;
  }
  lStack_38 = (long)puVar2 * lStack_38;
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 1,&lStack_38);
  FUN_1005505e4(param_1 + 1);
  return param_1;
}



/* Entry: 1006ab644; end: 1006ab6b7;  */

void FUN_1006ab644(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126be7f8;
  func_0x000107c610f4(PTR_PTR_1126be7f8);
  lVar2 = param_1;
  FUN_1006a7d84(param_1);
  func_0x000107c61180();
  func_0x000107c4619c(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x18));
  FUN_1006ab7c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006ab6b8; end: 1006ab6d3;  */

void FUN_1006ab6b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001006ab6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x80))();
  return;
}



/* Entry: 1006ab6d4; end: 1006ab71f;  */

void FUN_1006ab6d4(long param_1)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  *(undefined1 *)(param_1 + 0x489) = 0;
  if (*(char *)(param_1 + 0x488) == '\x01') {
    auStack_40[0] = 0;
    uStack_28 = 0;
    func_0x000107c29688(param_1,auStack_40);
    FUN_1001148fc(auStack_40);
  }
  return;
}



/* Entry: 1006ab720; end: 1006ab72f;  */

void FUN_1006ab720(void)

{
  return;
}



/* Entry: 1006ab730; end: 1006ab7c7; -[SCNMessagingMessageDescriptor initWithConversationId:messageId:] */

undefined1 *
FUN_1006ab730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112707068;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ab7c8; end: 1006ab7cf;  */

void FUN_1006ab7c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006ab7d0; end: 1006abadb;  */

void FUN_1006ab7d0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  puVar2 = PTR_PTR_1126daaf0;
  func_0x000107c610f4();
  lVar3 = param_1;
  func_0x000100101220();
  func_0x000107c61180();
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) / 0x48);
    func_0x000107c61180();
    lVar5 = *(long *)(param_1 + 0x28);
    for (lVar4 = *(long *)(param_1 + 0x20); lVar4 != lVar5; lVar4 = lVar4 + 0x48) {
      func_0x0001086383b8(lVar4);
      func_0x000107c61180();
      FUN_1006af640();
      func_0x0001006af67c();
    }
    func_0x000107c40794();
    func_0x0001006af684();
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  lVar4 = param_1 + 0x40;
  FUN_1006abd0c();
  func_0x000107c61180();
  lVar5 = param_1 + 0x60;
  FUN_1006ae34c();
  func_0x000107c61180();
  lVar6 = param_1 + 0x80;
  FUN_1006ae380();
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x2d0) == '\x01') {
    lVar11 = param_1 + 0x98;
    func_0x000108635a40();
    func_0x000107c61180();
  }
  else {
    lVar11 = 0;
  }
  if (*(char *)(param_1 + 0x2d9) == '\x01') {
    lVar10 = param_1 + 0x2d8;
    FUN_1006af69c();
    func_0x000107c61180();
  }
  else {
    lVar10 = 0;
  }
  lVar7 = param_1 + 0x2e0;
  FUN_1006afaa0();
  func_0x000107c61180();
  lVar8 = param_1 + 800;
  FUN_1006afad4();
  func_0x000107c61180();
  lVar9 = param_1 + 0x340;
  func_0x0001006afb00();
  func_0x000107c61180();
  param_1 = param_1 + 0x370;
  func_0x0001006afb2c();
  func_0x000107c61180();
  func_0x000107c46084(puVar2,param_2,lVar3,(long)iVar1,puVar12,lVar4,lVar5,lVar6,lVar11,lVar10,lVar7
                      ,lVar8,lVar9,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar9);
  func_0x0001006afe18();
  func_0x0001006afe20();
  func_0x0001006af684();
  func_0x0001006afe28();
  func_0x0001006afe30();
  func_0x0001006afe38();
  func_0x000107c61170(lVar4);
  func_0x0001006afe40();
  func_0x0001006af67c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006abadc; end: 1006abadf;  */

void FUN_1006abadc(void)

{
  return;
}



/* Entry: 1006abae0; end: 1006abb1f;  */

void FUN_1006abae0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c60d9c();
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  *(long *)(param_1 + 0x58) = lVar1;
  return;
}



/* Entry: 1006abb20; end: 1006abb2f;  */

void FUN_1006abb20(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  iVar9 = (int)*(undefined8 *)(param_1 + 0x68) + 0x10;
  FUN_1006716a8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x68) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar11 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar11 + 0xb8) == '\x01') {
      FUN_1006716e8(lVar11 + 0x10);
      uVar10 = 0x10;
      func_0x000107c60e30(0x10);
      func_0x0001086772d8();
      func_0x000107c60e54(uVar10,&PTR_DAT_110a61998,&DAT_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1006abc10);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar11 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar12 = *(ulong *)(lVar11 + 0xa0);
    uVar7 = 0;
    if (uVar12 != 0) {
      uVar7 = uVar2 / uVar12;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar2 - uVar7 * uVar12;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    *(undefined1 *)(*(long *)(lVar11 + 0xc0) + *(long *)(lVar11 + 0xd0) * lVar4) = 1;
    *pbVar1 = 0;
    FUN_1006716e8(*(long *)(param_1 + 0x68) + 0x58);
  }
  return;
}



/* Entry: 1006abb30; end: 1006abc67;  */

void FUN_1006abb30(long param_1,undefined1 param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  iVar9 = (int)*(undefined8 *)(param_1 + 0x70) + 0x10;
  FUN_1006716a8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x70) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar11 = *(long *)(param_1 + 0x70);
    if (*(char *)(lVar11 + 0xb8) == '\x01') {
      FUN_1006716e8(lVar11 + 0x10);
      uVar10 = 0x10;
      func_0x000107c60e30(0x10);
      func_0x0001086772d8();
      func_0x000107c60e54(uVar10,&PTR_DAT_110a61998,&DAT_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1006abc10);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar11 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar12 = *(ulong *)(lVar11 + 0xa0);
    uVar7 = 0;
    if (uVar12 != 0) {
      uVar7 = uVar2 / uVar12;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar2 - uVar7 * uVar12;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    *(undefined1 *)(*(long *)(lVar11 + 0xc0) + *(long *)(lVar11 + 0xd0) * lVar4) = param_2;
    *pbVar1 = 0;
    FUN_1006716e8(*(long *)(param_1 + 0x70) + 0x58);
  }
  return;
}



/* Entry: 1006abc68; end: 1006abc87;  */

undefined * FUN_1006abc68(void)

{
  return PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
}



/* Entry: 1006abc88; end: 1006abd0b;  */

void FUN_1006abc88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  FUN_1006abc68();
  func_0x000107c3e170();
  func_0x000107c61180();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_1006abd38(lVar2);
    func_0x000107c61180();
    func_0x0001006ae31c();
    func_0x0001006ae32c();
  }
  func_0x000107c40794(param_1);
  func_0x0001006ae334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1006abd0c; end: 1006abd37;  */

void FUN_1006abd0c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1006abc88();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006abd38; end: 1006abd9f;  */

void FUN_1006abd38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba690;
  func_0x000107c610f4(PTR_PTR_1126ba690);
  FUN_1006abecc(param_1);
  func_0x000107c61180();
  func_0x000107c476a0(puVar1,param_2,param_1);
  FUN_1006ae314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006abda0; end: 1006abdaf;  */

void FUN_1006abda0(void)

{
  return;
}



/* Entry: 1006abdb0; end: 1006abeb3;  */

undefined1 * FUN_1006abdb0(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  code *extraout_x8;
  undefined *in_stack_000000a8;
  code *in_stack_000000b0;
  undefined **in_stack_000000b8;
  undefined8 in_stack_00000110;
  
  FUN_1006a600c();
  FUN_100566694();
  func_0x0001006245f8();
  FUN_1006a612c();
  func_0x0001006a6134();
  in_stack_000000a8 = &UNK_10f4bcb5f;
  func_0x0001006a6140();
  FUN_1004b4e98();
  FUN_1006246d0();
  (*extraout_x8)();
  func_0x00010060e750();
  func_0x0001006a614c();
  FUN_100607368();
  func_0x0001006a6158();
  func_0x0001006a6160();
  func_0x0001006a6174();
  func_0x0001006a6180();
  in_stack_000000b0 = FUN_1006bc200;
  in_stack_000000b8 = &PTR_FUN_110a74b20;
  func_0x0001004a0340();
  func_0x0001006a61c4();
  func_0x0001006a620c();
  FUN_1006a623c();
  puVar1 = &stack0x00000030;
  FUN_1006ac0b4(puVar1);
  func_0x0001006a6284();
  func_0x0001006a628c();
  func_0x0001006a6294();
  func_0x0001004a0084(in_stack_00000110);
  if ((bool)in_ZR) {
    return puVar1;
  }
  func_0x000107c60e78();
  FUN_1006a623c();
  FUN_1006ac0b4();
  func_0x0001006a6284();
  func_0x0001006a628c();
  func_0x0001006a6294();
  func_0x000107c33930();
  return PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
}



/* Entry: 1006abeb4; end: 1006abecb;  */

undefined * FUN_1006abeb4(void)

{
  return PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
}


