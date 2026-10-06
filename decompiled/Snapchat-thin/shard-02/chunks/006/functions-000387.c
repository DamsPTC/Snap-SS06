/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f1c084; end: 101f1c10f;  */

undefined8 FUN_101f1c084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c436e4(param_1,uStack_48);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101f1c110; end: 101f1c11f;  */

undefined1  [16] FUN_101f1c110(void)

{
  return ZEXT816(0x11049f760);
}



/* Entry: 101f1c120; end: 101f1c13f;  */

void FUN_101f1c120(void)

{
  func_0x000107c61168(&PTR_PTR_112e40700);
  return;
}



/* Entry: 101f1c140; end: 101f1c28f;  */

void FUN_101f1c140(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_101f1df94();
  lVar1 = param_2;
  func_0x000107c613fc();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101f1dd04();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(auStack_90,uStack_50,lStack_48);
  FUN_101f1deb4(auStack_90,lVar1 + 0x18);
  func_0x0001000834e4(auStack_68);
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11049f848;
  *param_1 = lVar1;
  return;
}



/* Entry: 101f1c290; end: 101f1c313;  */

void FUN_101f1c290(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_101f1decc(unaff_x20 + 0x18,auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c6145c();
  return;
}



/* Entry: 101f1c314; end: 101f1c6fb;  */

void FUN_101f1c314(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_88 [40];
  
  lVar2 = 0x112e40768;
  func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&lStack_c0 - extraout_x8;
  lVar3 = 0x112e40770;
  func_0x0001000285a8(0x112e40770,&UNK_10da2e890);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar7 - extraout_x8_00;
  (**(code **)(lVar9 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___sScs12ContinuationV15BufferingPolicyO9unboundedyADyxq___GAFms5ErrorR_r0_lFWC_11034fee8
             ,lVar3);
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    FUN_101f1cde4(param_1,lVar7,lVar11);
  }
  else {
    func_0x000107c5fda0(param_1,lVar7,&UNK_1104a1250,lVar11,&UNK_1104a1250);
  }
  (**(code **)(lVar9 + 8))(lVar11,lVar3);
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  lStack_c0 = lVar3;
  lStack_a8 = lVar9;
  lStack_a0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar11 - uVar10;
  uStack_b0 = uVar10;
  func_0x000107c5eec4(lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar11 - uVar10;
  pcStack_b8 = *(code **)(lVar9 + 0x10);
  (*pcStack_b8)(lVar13,lVar11,lVar3);
  lVar3 = 0x112e40778;
  func_0x0001000285a8(0x112e40778,&UNK_10da2e898);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar13 - extraout_x8_01;
  (**(code **)(lVar6 + 0x10))(lVar3,lVar7,lVar2);
  (**(code **)(lVar6 + 0x38))(lVar3,0,1,lVar2);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0x21,0);
  FUN_101f1c6fc(lVar3,lVar13);
  func_0x000107c614a8(auStack_88);
  lVar3 = 0x112e40780;
  func_0x0001000285a8(0x112e40780,&UNK_10da2e8a0);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  auStack_88[0] = 0;
  func_0x000107c5fdb0(lVar11 - extraout_x8_02,auStack_88,lVar2);
  (**(code **)(lVar9 + 8))(lVar11 - extraout_x8_02,lVar3);
  puVar4 = &UNK_11049f808;
  func_0x000107c613fc(&UNK_11049f808,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,unaff_x20);
  FUN_101f1decc(unaff_x20 + 0x18,auStack_88);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lStack_c0;
  lVar13 = lVar11 - uStack_b0;
  (*pcStack_b8)(lVar13,lVar11,lStack_c0);
  lVar9 = lStack_a8;
  uVar10 = (ulong)*(byte *)(lStack_a8 + 0x50);
  uVar8 = uVar10 + 0x40 & (uVar10 ^ 0xffffffffffffffff);
  puVar5 = &UNK_11049f830;
  func_0x000107c613fc(&UNK_11049f830,uVar8 + lVar12,uVar10 | 7);
  FUN_101f1deb4(auStack_88,puVar5 + 0x10);
  *(undefined **)(puVar5 + 0x38) = puVar4;
  (**(code **)(lVar9 + 0x20))(puVar5 + uVar8,lVar13,lVar3);
  func_0x000107c5fda8(FUN_101f1df10,puVar5,lVar2);
  (**(code **)(lVar9 + 8))(lVar11,lVar3);
  (**(code **)(lVar6 + 8))(lVar7,lVar2);
  return;
}



/* Entry: 101f1c6fc; end: 101f1c8bb;  */

void FUN_101f1c6fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar2 = 0x112e40778;
  func_0x0001000285a8(0x112e40778,&UNK_10da2e898);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0x112e40768;
  func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000101f1e0ac(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101f1e0fc(lVar5,0x112e40778,&UNK_10da2e898);
    FUN_101f1d14c(puVar4,param_2);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    func_0x000101f1e0fc(puVar4,0x112e40778,&UNK_10da2e898);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5 - extraout_x8_00,lVar5,lVar2);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_58 = *unaff_x20;
    FUN_101f1d290(lVar5 - extraout_x8_00,param_2,uVar3);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    *unaff_x20 = uStack_58;
  }
  return;
}



/* Entry: 101f1c8bc; end: 101f1cac7;  */

void FUN_101f1c8bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)&lStack_70 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar11 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lStack_70 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  lVar3 = 0;
  lStack_68 = param_1;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar10,1,1,lVar3);
  (**(code **)(lVar8 + 0x10))(lVar11,param_3,lVar2);
  func_0x000107c5fcec(0);
  puVar6 = PTR___sScMMa_11034fc70;
  uVar4 = param_2;
  func_0x000107c6157c();
  func_0x000107c5fce8();
  uVar5 = 0x112d45220;
  FUN_101f1e06c(0x112d45220,puVar6,PTR___sScMScAsMc_11034fc78);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar12 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = &UNK_11049f898;
  func_0x000107c613fc(&UNK_11049f898,uVar12 + lVar13,uVar7 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  (**(code **)(lVar8 + 0x20))(puVar6 + uVar12,lVar11,lVar2);
  uVar5 = 0x112e40778;
  func_0x0001000285a8(0x112e40778,&UNK_10da2e898);
  lVar3 = *(long *)(lStack_70 + 8);
  pcVar9 = *(code **)(lVar3 + 8);
  func_0x000107c6157c(puVar6);
  (*pcVar9)(0,0,lVar10,&UNK_10da2e970,puVar6,uVar5,uVar1,lVar3);
  func_0x000107c61574();
  func_0x000107c61574(puVar6);
  func_0x000101f1e0fc(lVar10,0x112d453c8,&UNK_10d90ac60);
  return;
}



/* Entry: 101f1cac8; end: 101f1cb5b;  */

void FUN_101f1cac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101f1e06c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1cb5c,uVar2,uVar3);
  return;
}



/* Entry: 101f1cb5c; end: 101f1cc2f;  */

void FUN_101f1cb5c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar2 = 0x112e40768;
    func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,1,1,lVar2);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x28,0x21,0);
    FUN_101f1d14c(uVar3,uVar1);
    func_0x000107c614a8(unaff_x22 + 0x28);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101f1cc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101f1cc30; end: 101f1ccbf;  */

void FUN_101f1cc30(undefined1 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x18) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101f1e06c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1ccc0,uVar2,uVar3);
  return;
}



/* Entry: 101f1ccc0; end: 101f1cd2b;  */

void FUN_101f1ccc0(void)

{
  byte bVar1;
  ulong *puVar2;
  long unaff_x22;
  
  puVar2 = *(ulong **)(unaff_x22 + 0x10);
  bVar1 = *(byte *)(unaff_x22 + 0x18);
  func_0x000107c61574();
  func_0x000101f1df44();
  func_0x000107c613f8(&UNK_1104a1178,puVar2,0,0);
  *puVar2 = (ulong)bVar1;
  *(undefined1 *)(puVar2 + 1) = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101f1cd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101f1cd2c; end: 101f1cd4b;  */

void FUN_101f1cd2c(void)

{
  FUN_101f1c314();
  return;
}



/* Entry: 101f1cd4c; end: 101f1cd53;  */

undefined8 FUN_101f1cd4c(void)

{
  return 0;
}



/* Entry: 101f1cd54; end: 101f1cde3;  */

void FUN_101f1cd54(undefined1 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x18) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101f1e06c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1e18c,uVar2,uVar3);
  return;
}



/* Entry: 101f1cde4; end: 101f1d003;  */

void FUN_101f1cde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0x112e40770;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e40770,&UNK_10da2e890);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112e40840;
  func_0x0001000285a8(0x112e40840,&UNK_10da2e980);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112e40778;
  func_0x0001000285a8(0x112e40778,&UNK_10da2e898);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112e40768;
  func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fdc8(lVar7,&UNK_1104a1250,puVar11,FUN_101f1e13c,auStack_80,&UNK_1104a1250);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101f1e144(lVar9,lVar8,0x112e40778,&UNK_10da2e898);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000101f1e0fc(lVar9,0x112e40778,&UNK_10da2e898);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1d004);
  (*pcVar1)();
}



/* Entry: 101f1d004; end: 101f1d087;  */

void FUN_101f1d004(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000101f1e0fc(param_2,0x112e40778,&UNK_10da2e898);
  lVar1 = 0x112e40768;
  func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101f1d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 101f1d088; end: 101f1d14b;  */

void FUN_101f1d088(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  lVar3 = *(long *)(param_4 + 0x38);
  lVar2 = 0x112e40768;
  func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_3,lVar2);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1d14c);
  (*pcVar1)();
}



/* Entry: 101f1d14c; end: 101f1d28f;  */

void FUN_101f1d14c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x0001000c8928(param_2);
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0x112e40768;
    func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101f1d424();
    }
    lVar5 = *(long *)(lVar3 + 0x30);
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * param_2,lVar4);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0x112e40768;
    func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar4);
    func_0x000101f1da70(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101f1d27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 101f1d290; end: 101f1deb3;  */

void FUN_101f1d290(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar4 = param_2;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = *unaff_x20;
  uVar3 = param_2;
  func_0x0001000c8928(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1d3c0);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(lVar5 + uVar6)) {
    param_3 = param_3 & 1;
    func_0x000101f1d6b0();
    uVar3 = param_2;
    func_0x0001000c8928(param_2);
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1d424);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101f1d424();
    lVar5 = *unaff_x20;
  }
  else {
    lVar5 = *unaff_x20;
  }
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    lVar2 = 0x112e40768;
    func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
                    /* WARNING: Could not recover jumptable at 0x000101f1d3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * uVar3,param_1,lVar2);
    return;
  }
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_101f1d088(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar5);
  return;
}



/* Entry: 101f1deb4; end: 101f1decb;  */

undefined8 * FUN_101f1deb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101f1decc; end: 101f1df0f;  */

long FUN_101f1decc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101f1df10; end: 101f1df83;  */

void FUN_101f1df10(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lStack_70;
  long lStack_68;
  
  lVar7 = 0;
  func_0x000107c5eec8();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar3 = unaff_x20 + 0x10;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)&lStack_70 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar13 - extraout_x8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lStack_70 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(lVar3,uVar1);
  lVar7 = 0;
  lStack_68 = lVar3;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar12,1,1,lVar7);
  (**(code **)(lVar10 + 0x10))
            (lVar13,unaff_x20 + (uVar9 + 0x40 & (uVar9 ^ 0xffffffffffffffff)),lVar2);
  func_0x000107c5fcec(0);
  puVar6 = PTR___sScMMa_11034fc70;
  uVar4 = uVar8;
  func_0x000107c6157c();
  func_0x000107c5fce8();
  uVar5 = 0x112d45220;
  FUN_101f1e06c(0x112d45220,puVar6,PTR___sScMScAsMc_11034fc78);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar14 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  puVar6 = &UNK_11049f898;
  func_0x000107c613fc(&UNK_11049f898,uVar14 + lVar15,uVar9 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar14,lVar13,lVar2);
  uVar5 = 0x112e40778;
  func_0x0001000285a8(0x112e40778,&UNK_10da2e898);
  lVar7 = *(long *)(lStack_70 + 8);
  pcVar11 = *(code **)(lVar7 + 8);
  func_0x000107c6157c(puVar6);
  (*pcVar11)(0,0,lVar12,&UNK_10da2e970,puVar6,uVar5,uVar1,lVar7);
  func_0x000107c61574();
  func_0x000107c61574(puVar6);
  func_0x000101f1e0fc(lVar12,0x112d453c8,&UNK_10d90ac60);
  return;
}



/* Entry: 101f1df84; end: 101f1df93;  */

undefined1  [16] FUN_101f1df84(void)

{
  return ZEXT816(0x11049f878);
}



/* Entry: 101f1df94; end: 101f1dfb3;  */

void FUN_101f1df94(void)

{
  func_0x000107c61168(&PTR_PTR_112e407d0);
  return;
}



/* Entry: 101f1dfb4; end: 101f1e02f;  */

void FUN_101f1dfb4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101f1e030;
  plVar5[9] = lVar4;
  plVar5[10] = unaff_x20 + (uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff));
  plVar5[8] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar5[0xb] = lVar4;
  uVar3 = 0x112d45220;
  FUN_101f1e06c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1cb5c,lVar2,uVar3);
  return;
}



/* Entry: 101f1e030; end: 101f1e06b;  */

void FUN_101f1e030(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101f1e068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101f1e06c; end: 101f1e13b;  */

void FUN_101f1e06c(long *param_1,code *param_2,long param_3)

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



/* Entry: 101f1e13c; end: 101f1e143;  */

void FUN_101f1e13c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000101f1e0fc(uVar2,0x112e40778,&UNK_10da2e898);
  lVar1 = 0x112e40768;
  func_0x0001000285a8(0x112e40768,&UNK_10da2e888);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(uVar2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101f1d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(uVar2,0,1,lVar1);
  return;
}



/* Entry: 101f1e144; end: 101f1e18b;  */

undefined8 FUN_101f1e144(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101f1e18c; end: 101f1e18f;  */

void FUN_101f1e18c(void)

{
  byte bVar1;
  ulong *puVar2;
  long unaff_x22;
  
  puVar2 = *(ulong **)(unaff_x22 + 0x10);
  bVar1 = *(byte *)(unaff_x22 + 0x18);
  func_0x000107c61574();
  func_0x000101f1df44();
  func_0x000107c613f8(&UNK_1104a1178,puVar2,0,0);
  *puVar2 = (ulong)bVar1;
  *(undefined1 *)(puVar2 + 1) = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101f1cd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101f1e190; end: 101f1e203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f1e190(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_101f1f430();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e40858) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_11049f938;
  *param_1 = plVar3;
  return;
}



/* Entry: 101f1e204; end: 101f1e24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f1e204(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e40858) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f1e250; end: 101f1e2a7;  */

void FUN_101f1e250(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101f2073c;
  plVar1[0x18] = 0;
  plVar1[0x19] = unaff_x20;
  plVar1[0x16] = param_1;
  plVar1[0x17] = (long)FUN_101f1e2a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1e2ec,0,0);
  return;
}



/* Entry: 101f1e2a8; end: 101f1e2cf;  */

void FUN_101f1e2a8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5d890(param_1,param_2,6);
                    /* WARNING: Could not recover jumptable at 0x00010c28fdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_useArgosClientAttestationHeaders_1126819a0);
  return;
}



/* Entry: 101f1e2d0; end: 101f1e2eb;  */

void FUN_101f1e2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1e2ec,0,0);
  return;
}



/* Entry: 101f1e2ec; end: 101f1ec3b;  */

/* WARNING: Removing unreachable block (ram,0x000101f1e9cc) */
/* WARNING: Removing unreachable block (ram,0x000101f1e784) */
/* WARNING: Removing unreachable block (ram,0x000101f1ea0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f1e2ec(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_88;
  long lStack_80;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  lVar16 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar16;
  uVar4 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar4;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000107c5eaf0(uVar5);
  uVar7 = uVar5;
  (**(code **)(lVar16 + 0x30))(uVar5,1,lVar3);
  if ((int)uVar7 == 1) {
    func_0x0001000293e4(uVar5);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar4);
    lVar6 = 0;
    func_0x000107c5efd0();
    lVar16 = *(long *)(lVar6 + -8);
    uVar4 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar4);
    lVar3 = 0;
    func_0x000107c5efc8();
    uVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar7);
    func_0x000107c5efc0(uVar7);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar10 = puVar8;
    FUN_101f202a0();
    func_0x000107c5ed28(uVar4,uVar7,puVar8,lVar6,puVar10);
    func_0x000107c615c0(uVar7);
    func_0x000107c5efcc();
    func_0x000107c61654();
    (**(code **)(lVar16 + 8))(uVar4,lVar6);
  }
  else {
    (**(code **)(lVar16 + 0x20))(uVar4,uVar5,lVar3);
    func_0x000107c615c0(uVar5);
    func_0x000100083b20(unaff_x22 + 0xa0);
    lVar14 = *(long *)(unaff_x22 + 0xa0);
    *(long *)(unaff_x22 + 0xe8) = lVar14;
    lVar6 = lVar14;
    func_0x000107c44f60();
    func_0x000107c61180();
    lVar9 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xf0) = lVar9;
    func_0x000107c61170(lVar6);
    if (lVar9 != 0) {
      lVar6 = lVar14;
      func_0x000107c44f4c();
      func_0x000107c61180();
      lVar17 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0xf8) = lVar17;
      func_0x000107c61170(lVar6);
      if (lVar17 != 0) {
        puVar8 = (undefined *)0x686370616e732d78;
        lStack_80 = -0x109b968a8ad28b9f;
        func_0x000107c5eaf4();
        puStack_88 = puVar8;
        if (lStack_80 == 0) {
          lVar6 = 0;
          func_0x000107c5eec8();
          lVar3 = *(long *)(lVar6 + -8);
          puVar8 = (undefined *)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
          func_0x000107c615b8();
          puStack_88 = puVar8;
          func_0x000107c5eec4(puVar8);
          func_0x000107c5eeac();
          (**(code **)(lVar3 + 8))(puVar8,lVar6);
          func_0x000107c615c0();
        }
        func_0x000107c5eae4();
        lVar6 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        if (puVar8 == (undefined *)0x0) {
          func_0x000107c61408(lVar6 + 0x20,5,PTR___sSSN_11034da80);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8();
          func_0x000107c61434();
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar10 = puVar8;
          FUN_101f1ff48(puVar8,lVar6);
          func_0x000107c61408(lVar6 + 0x20,5,PTR___sSSN_11034da80);
          func_0x000107c6142c(puVar8);
          puVar8 = puVar10;
        }
        func_0x000107c61434(puVar10);
        puVar10 = puVar8;
        FUN_101f1f4c0();
        func_0x000107c61430(puVar8,2);
        func_0x000107c61434(lStack_80);
        puVar8 = puVar10;
        func_0x000107c61558(puVar10);
        lVar6 = lStack_80;
        func_0x00010018433c(puStack_88,lStack_80,0x686370616e532d58,0xef444955552d7461,puVar8);
        *(undefined **)(unaff_x22 + 0x100) = puVar10;
        func_0x000107c5eacc();
        FUN_101f202e4();
        func_0x000107c6142c();
        func_0x000107c5ed90();
        puVar11 = PTR___sSSN_11034da80;
        func_0x000107c5f9dc(puVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        puVar8 = puVar10;
        func_0x000107c5eafc();
        if ((ulong)puVar11 >> 0x3c < 0xf) {
          puVar13 = puVar8;
          func_0x000107c5ee20();
          func_0x0001000b44c0(puVar8,puVar11);
        }
        else {
          puVar13 = (undefined *)0x0;
        }
        puVar8 = &UNK_11049f980;
        func_0x000107c613fc(&UNK_11049f980,0x20,7);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xb8);
        *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(unaff_x22 + 0xc0);
        *(undefined8 *)(puVar8 + 0x10) = uVar19;
        *(code **)(unaff_x22 + 0x48) = FUN_101f205a0;
        *(undefined **)(unaff_x22 + 0x50) = puVar8;
        *(undefined **)(unaff_x22 + 0x28) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x30) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x38) = &UNK_101365b04;
        *(undefined **)(unaff_x22 + 0x40) = &UNK_11049f998;
        lVar3 = unaff_x22 + 0x28;
        func_0x000107c60bc4(lVar3);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x50);
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(uVar18);
        func_0x000107c3ecec();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0x108) = lVar9;
        func_0x000107c60bd0(lVar3);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar6);
        puVar10 = puVar8;
        func_0x000107c61544(puVar8,"",0x6d,0x35,0x1c,1);
        func_0x000107c61574(puVar8);
        if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1ec3c);
          (*pcVar1)();
        }
        func_0x000107c5ead8();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c466c0(uVar19);
        puVar10 = PTR_PTR_1126b5730;
        func_0x000107c610f8();
        func_0x000107c5fadc(puStack_88,lStack_80);
        func_0x000107c6142c(lStack_80);
        func_0x000107c46d5c();
        *(undefined **)(unaff_x22 + 0x110) = puVar10;
        func_0x000107c61170(puStack_88);
        func_0x000107c61170(puVar8);
        func_0x000107c5fd64();
        uVar18 = 0x112e40908;
        puVar8 = &UNK_10da2ea38;
        func_0x0001000285a8();
        uVar19 = uVar18;
        func_0x00010488bd80();
        *(undefined8 *)(unaff_x22 + 0x118) = uVar19;
        *(undefined **)(unaff_x22 + 0x120) = puVar8;
        func_0x0001000295c4(0);
        func_0x000107c61174(puVar10);
        puVar11 = puVar10;
        func_0x000107c5ffdc();
        *(undefined8 *)(unaff_x22 + 0x78) = 0x101f205dc;
        *(undefined **)(unaff_x22 + 0x80) = puVar8;
        *(undefined **)(unaff_x22 + 0x58) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x60) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_101365b40;
        *(undefined **)(unaff_x22 + 0x70) = &UNK_11049f9c0;
        lVar6 = unaff_x22 + 0x58;
        func_0x000107c60bc4(lVar6);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(uVar15);
        func_0x000107c5c2f4();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0x128) = lVar17;
        func_0x000107c60bd0(lVar6);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        *(long *)(unaff_x22 + 0x20) = lVar17;
        iVar2 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar2 != 0) {
          plVar12 = (long *)(ulong)*(uint *)(
                                            PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                            + 4);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x130) = plVar12;
          *plVar12 = unaff_x22;
          plVar12[1] = (long)FUN_101f1ec3c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
          )(plVar12,unaff_x22 + 0x88,&UNK_10da2ea48,uVar19,FUN_101f20684,unaff_x22 + 0x10,0,0,uVar18
           );
          return;
        }
        pcVar1 = FUN_101f20684;
        func_0x000107c615b4(FUN_101f20684,unaff_x22 + 0x10);
        *(code **)(unaff_x22 + 0x138) = pcVar1;
        *(undefined8 *)(unaff_x22 + 0xa8) = uVar19;
        plVar12 = (long *)0x90;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x140) = plVar12;
        lVar6 = 0x112e40910;
        func_0x0001000285a8(0x112e40910,&UNK_10da2ea50);
        lVar3 = lVar6;
        FUN_101f2068c();
        *plVar12 = unaff_x22;
        plVar12[1] = (long)FUN_101f1ec98;
        plVar12[0xe] = lVar3;
        plVar12[0xf] = unaff_x22 + 0xa8;
        plVar12[0xd] = lVar6;
        plVar12[7] = unaff_x22 + 0x88;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488e060,0,0);
        return;
      }
      func_0x000107c615e8(lVar9);
    }
    lVar6 = 0;
    func_0x000107c5efd0();
    lVar17 = *(long *)(lVar6 + -8);
    uVar7 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar7);
    lVar9 = 0;
    func_0x000107c5efc8();
    uVar5 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    func_0x000107c5efb4(uVar5);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar10 = puVar8;
    FUN_101f202a0();
    func_0x000107c5ed28(uVar7,uVar5,puVar8,lVar6,puVar10);
    func_0x000107c615c0(uVar5);
    func_0x000107c5efcc();
    func_0x000107c61654();
    func_0x000107c61170(lVar14);
    (**(code **)(lVar17 + 8))(uVar7,lVar6);
    (**(code **)(lVar16 + 8))(uVar4,lVar3);
    func_0x000107c615c0(uVar7);
  }
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101f1ea3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101f1ec3c; end: 101f1ec97;  */

void FUN_101f1ec3c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101f1ed74;
  }
  else {
    *(long *)(lVar2 + 0x150) = unaff_x20;
    pcVar1 = FUN_101f1ee4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101f1ec98; end: 101f1ed73;  */

void FUN_101f1ec98(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x148) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x140));
  if (unaff_x20 == 0) {
    uVar1 = 0x101f1ecf4;
  }
  else {
    uVar1 = 0x101f1ed30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101f1ed74; end: 101f1ee4b;  */

void FUN_101f1ed74(void)

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
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar10 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar7);
  func_0x000107c615e8(uVar6);
  func_0x000107c615e8(uVar8);
  func_0x000107c615e8(uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar10 + 8))(uVar4,uVar5);
  func_0x000107c61574(uVar11);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101f1ee48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar11);
  return;
}



/* Entry: 101f1ee4c; end: 101f1ef0f;  */

void FUN_101f1ee4c(void)

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
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar11 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c61170(uVar10);
  func_0x000107c61574(uVar8);
  func_0x000107c615e8(uVar7);
  func_0x000107c615e8(uVar9);
  func_0x000107c615e8(uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar11 + 8))(uVar5,uVar6);
  func_0x000107c61574(uVar3);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101f1ef0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101f1ef10; end: 101f1ef67;  */

void FUN_101f1ef10(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101f20740;
  plVar1[0x18] = 0;
  plVar1[0x19] = unaff_x20;
  plVar1[0x16] = param_1;
  plVar1[0x17] = (long)FUN_101f1ef68;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1e2ec,0,0);
  return;
}



/* Entry: 101f1ef68; end: 101f1ef6b;  */

void FUN_101f1ef68(void)

{
  return;
}



/* Entry: 101f1ef6c; end: 101f1efeb;  */

bool FUN_101f1ef6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  uStack_30 = *param_1;
  uStack_28 = param_1[1];
  uStack_40 = 0x686370616e732d78;
  uStack_38 = 0xef646975752d7461;
  func_0x000100e8b654();
  func_0x000107c60204(&uStack_40,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_1,param_1);
  return puVar1 != (undefined8 *)0x0;
}



/* Entry: 101f1efec; end: 101f1f1cb;  */

void FUN_101f1efec(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5efc8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5efd0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    lVar6 = param_4;
    if (param_4 == 0) {
      func_0x000107c5efc4(lVar5);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar4 = puVar3;
      FUN_101f202a0();
      func_0x000107c5ed28(lVar7,lVar5,puVar3,lVar2,puVar4);
      func_0x000107c5efcc();
      (**(code **)(lVar8 + 8))(lVar7,lVar2);
      lVar6 = lVar5;
    }
    uStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 1;
    lStack_70 = lVar6;
    func_0x000107c614b0(param_4);
    func_0x000107c614b0(lVar6);
    func_0x00010488e5d4(&lStack_70);
    func_0x000107c614ac(lVar6);
    func_0x000107c614ac(lVar6);
  }
  else {
    lVar2 = 0;
    if (param_3 >> 0x3c < 0xf) {
      lVar2 = param_2;
    }
    uVar1 = 0xc000000000000000;
    if (param_3 >> 0x3c < 0xf) {
      uVar1 = param_3;
    }
    uStack_58 = 0;
    lStack_70 = lVar2;
    uStack_68 = uVar1;
    lStack_60 = param_1;
    func_0x000107c61174();
    func_0x000100de78a0(param_2,param_3);
    func_0x00010006c00c(lVar2,uVar1);
    func_0x000107c61174(param_1);
    func_0x00010488e5d4(&lStack_70);
    func_0x00010006c090(lVar2,uVar1);
    func_0x000107c61170(param_1);
    func_0x00010006c090(lVar2,uVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101f1f1cc; end: 101f1f253;  */

void FUN_101f1f1cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  lVar2 = 0x112e40910;
  func_0x0001000285a8(0x112e40910,&UNK_10da2ea50);
  lVar3 = lVar2;
  FUN_101f2068c();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101f1f254;
  plVar1[0xe] = lVar3;
  plVar1[0xf] = unaff_x22 + 0x10;
  plVar1[0xd] = lVar2;
  plVar1[7] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488e060,0,0);
  return;
}



/* Entry: 101f1f254; end: 101f1f2b7;  */

void FUN_101f1f254(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x20) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1f2b8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101f1f2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101f1f2b8; end: 101f1f2c3;  */

void FUN_101f1f2b8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101f1f2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101f1f2c4; end: 101f1f2f7;  */

void FUN_101f1f2c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f1f2f8; end: 101f1f307; -[_TtC34LegacyNetworkServiceImplementation34LegacyNetworkServiceImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f1f2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e40858));
  return;
}



/* Entry: 101f1f308; end: 101f1f363;  */

void FUN_101f1f308(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101f20744;
  plVar1[0x18] = 0;
  plVar1[0x19] = lVar2;
  plVar1[0x16] = param_1;
  plVar1[0x17] = (long)FUN_101f1e2a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1e2ec,0,0);
  return;
}



/* Entry: 101f1f364; end: 101f1f3bf;  */

void FUN_101f1f364(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101f1f3c0;
  plVar1[0x18] = 0;
  plVar1[0x19] = lVar2;
  plVar1[0x16] = param_1;
  plVar1[0x17] = (long)FUN_101f1ef68;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f1e2ec,0,0);
  return;
}



/* Entry: 101f1f3c0; end: 101f1f41f;  */

void FUN_101f1f3c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101f1f41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101f1f420; end: 101f1f42f;  */

undefined1  [16] FUN_101f1f420(void)

{
  return ZEXT816(0x11049f960);
}



/* Entry: 101f1f430; end: 101f1f44f;  */

void FUN_101f1f430(void)

{
  func_0x000107c61168(&PTR_PTR_112809920);
  return;
}



/* Entry: 101f1f450; end: 101f1f4bf;  */

void FUN_101f1f450(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = auStack_78;
  func_0x000107c5fb58(puVar1,param_1,param_2);
  func_0x000107c606a8();
  FUN_101f1f6c8(param_1,param_2,puVar1);
  return;
}



/* Entry: 101f1f4c0; end: 101f1f6c7;  */

undefined1  [16] FUN_101f1f4c0(undefined *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lStack_60;
  long alStack_58 [2];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar10 = uVar9 * 8;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar4 == 0) || (uVar8 = uVar10, func_0x000107c61594(uVar10,8), (uVar8 & 1) == 0)) {
      func_0x000107c6158c(uVar10,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_101f1fce4(alStack_58,uVar10,uVar9,param_1,FUN_101f1ef6c,0,&lStack_60);
      lVar5 = alStack_58[0];
      if (unaff_x21 != 0) {
        lVar5 = lStack_60;
      }
      uVar9 = 0xffffffffffffffff;
      puVar7 = (undefined *)0xffffffffffffffff;
      func_0x000107c61590(uVar10);
      lVar3 = lVar5;
      goto joined_r0x000101f1f680;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)alStack_58 + (-8 - (uVar10 + 0xf & 0x3ffffffffffffff0));
  func_0x000107c60ee4(lVar5,uVar10);
  puVar7 = param_1;
  FUN_101f1f774();
  lVar3 = unaff_x21;
joined_r0x000101f1f680:
  if (unaff_x21 == 0) {
    func_0x000107c61574();
  }
  else {
    iVar4 = 2;
    uVar9 = 0x12;
    puVar7 = (undefined *)0x0;
    func_0x000100029b9c();
    if (iVar4 != 0) {
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c61658(&lStack_60);
    }
    func_0x000107c61574();
    lVar5 = lVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar11._8_8_ = uVar9;
    auVar11._0_8_ = lVar5;
    return auVar11;
  }
  func_0x000107c60e78();
  uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar8 = (ulong)puVar7 & (uVar10 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x40 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    do {
      plVar1 = (long *)(*(long *)(lVar5 + 0x30) + uVar8 * 0x10);
      puVar7 = (undefined *)*plVar1;
      uVar2 = plVar1[1];
      if ((puVar7 == param_1 && uVar2 == uVar9) ||
         (func_0x000107c605b8(puVar7,uVar2,param_1,uVar9,0), ((ulong)puVar7 & 1) != 0)) {
        uVar6 = 1;
        goto LAB_101f1f75c;
      }
      uVar8 = uVar8 + 1 & ~uVar10;
    } while ((*(ulong *)(lVar5 + 0x40 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = 0;
LAB_101f1f75c:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar8;
  return auVar12;
}



/* Entry: 101f1f6c8; end: 101f1f773;  */

undefined1  [16] FUN_101f1f6c8(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_101f1f75c;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_101f1f75c:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 101f1f774; end: 101f1f8f3;  */

void FUN_101f1f774(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  puVar1 = PTR___sSSN_11034da80;
  lStack_58 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  puVar4 = param_1;
  lVar7 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar11 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1f8f4);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          FUN_101f1fa90(param_1,param_2,lStack_58,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x40))[lVar11];
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar11 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6);
    puVar5 = (undefined8 *)(*(long *)(param_3 + 0x30) + (uVar6 | lVar11 << 6) * 0x10);
    uStack_70 = *puVar5;
    uStack_68 = puVar5[1];
    uStack_80 = 0x686370616e732d78;
    uStack_78 = 0xef646975752d7461;
    func_0x000100e8b654();
    puVar5 = &uStack_80;
    func_0x000107c60204(puVar5,puVar1,puVar1,puVar4,puVar4);
    puVar4 = puVar5;
    lVar7 = lVar11;
    if (puVar5 != (undefined8 *)0x0) {
      uVar8 = (uVar6 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
      *(ulong *)((long)param_1 + uVar8) = *(ulong *)((long)param_1 + uVar8) | 1L << (uVar6 & 0x3f);
      bVar3 = SCARRY8(lStack_58,1);
      lStack_58 = lStack_58 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1f8b8);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 101f1f8f4; end: 101f1fa8f;  */

void FUN_101f1f8f4(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x21;
  long lVar10;
  long lStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  
  lStack_98 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_58 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_58 = ~(-1L << (uVar9 & 0x3f));
  }
  uStack_58 = uStack_58 & *(ulong *)(param_3 + 0x40);
  lVar7 = 0;
  do {
    if (uStack_58 == 0) {
      do {
        lVar10 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101f1fa90);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar10) {
          FUN_101f1fa90(param_1,param_2,lStack_98,param_3);
          return;
        }
        uStack_58 = ((ulong *)(param_3 + 0x40))[lVar10];
        lVar7 = lVar7 + 1;
      } while (uStack_58 == 0);
      uVar6 = (uStack_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_58 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uStack_58 = uStack_58 - 1 & uStack_58;
    }
    else {
      uVar6 = (uStack_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_58 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uStack_58 = uStack_58 - 1 & uStack_58;
      lVar10 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6);
    lVar7 = (uVar6 | lVar10 << 6) * 0x10;
    puVar5 = (undefined8 *)(*(long *)(param_3 + 0x30) + lVar7);
    uStack_70 = *puVar5;
    uVar1 = puVar5[1];
    puVar5 = (undefined8 *)(*(long *)(param_3 + 0x38) + lVar7);
    uStack_80 = *puVar5;
    uVar2 = puVar5[1];
    uStack_78 = uVar2;
    uStack_68 = uVar1;
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    puVar5 = &uStack_70;
    (*param_4)(puVar5,&uStack_80);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar2);
    if (unaff_x21 != 0) {
      return;
    }
    lVar7 = lVar10;
    if (((ulong)puVar5 & 1) != 0) {
      uVar8 = (uVar6 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar6 & 0x3f);
      bVar4 = SCARRY8(lStack_98,1);
      lStack_98 = lStack_98 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101f1fa54);
        (*pcVar3)();
      }
    }
  } while( true );
}



/* Entry: 101f1fa90; end: 101f1fce3;  */

undefined * FUN_101f1fa90(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar9 = param_4;
    }
    else {
      func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
      puVar9 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar17 = 0;
      }
      else {
        uVar17 = *param_1;
      }
      lVar12 = 0;
      do {
        if (uVar17 == 0) {
          do {
            lVar16 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101f1fcdc);
              (*pcVar7)();
            }
            if (param_2 <= lVar16) {
              return puVar9;
            }
            uVar17 = param_1[lVar16];
            lVar12 = lVar12 + 1;
          } while (uVar17 == 0);
          uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar17 = uVar17 - 1 & uVar17;
        }
        else {
          uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar17 = uVar17 - 1 & uVar17;
          lVar16 = lVar12;
        }
        lVar12 = (LZCOUNT(uVar11) | lVar16 << 6) * 0x10;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + lVar12);
        puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + lVar12);
        uVar3 = *puVar1;
        uVar5 = puVar1[1];
        uVar4 = *puVar2;
        uVar6 = puVar2[1];
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar9 + 0x28));
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar6);
        puVar10 = auStack_a8;
        func_0x000107c5fb58(puVar10,uVar3,uVar5);
        func_0x000107c606a8();
        uVar15 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
        uVar14 = (ulong)puVar10 & (uVar15 ^ 0xffffffffffffffff);
        uVar13 = uVar14 >> 6;
        uVar11 = -1L << (uVar14 & 0x3f) &
                 (*(ulong *)(puVar9 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar8 = false;
          uVar11 = 0x3f - uVar15 >> 6;
          do {
            uVar14 = uVar13 + 1;
            if ((uVar14 == uVar11) && (bVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101f1fce0);
              (*pcVar7)();
            }
            uVar13 = 0;
            if (uVar14 != uVar11) {
              uVar13 = uVar14;
            }
            bVar8 = (bool)(uVar14 == uVar11 | bVar8);
          } while (*(ulong *)(puVar9 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar9 + uVar13 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 << 6;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 & 0x7fffffffffffffc0;
        }
        uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar9 + uVar13 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar9 + uVar13 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar9 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar11 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar6;
        *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
        bVar8 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101f1fce4);
          (*pcVar7)();
        }
        lVar12 = lVar16;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar9;
}



/* Entry: 101f1fce4; end: 101f1fdaf;  */

void FUN_101f1fce4(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1fdb0);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_101f1f8f4(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1fdac);
  (*pcVar1)();
}



/* Entry: 101f1fdb0; end: 101f1ff47;  */

void FUN_101f1fdb0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long lStack_78;
  
  lStack_78 = 0;
  lVar9 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_3 + 0x40);
joined_r0x000101f1fe18:
  if (uVar12 != 0) goto LAB_101f1fe5c;
LAB_101f1fe74:
  do {
    lVar10 = lVar9 + 1;
    if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1ff44);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
      FUN_101f1fa90(param_1,param_2,lStack_78,param_3);
      return;
    }
    uVar12 = ((ulong *)(param_3 + 0x40))[lVar10];
    lVar9 = lVar9 + 1;
  } while (uVar12 == 0);
  uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
  uVar12 = uVar12 - 1 & uVar12;
  lVar9 = lVar10;
  do {
    uVar7 = LZCOUNT(uVar6);
    puVar11 = (ulong *)(*(long *)(param_3 + 0x30) + (uVar7 | lVar9 << 6) * 0x10);
    uVar6 = *puVar11;
    uVar5 = puVar11[1];
    func_0x000107c5fb1c();
    lVar10 = *(long *)(param_4 + 0x10) + 1;
    puVar11 = (ulong *)(param_4 + 0x28);
    do {
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        func_0x000107c6142c(uVar5);
        uVar6 = (uVar7 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
        *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) | 1L << (uVar7 & 0x3f);
        bVar3 = SCARRY8(lStack_78,1);
        lStack_78 = lStack_78 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1ff48);
          (*pcVar2)();
        }
        goto joined_r0x000101f1fe18;
      }
      uVar4 = puVar11[-1];
      uVar1 = *puVar11;
      if (uVar4 == uVar6 && uVar1 == uVar5) break;
      puVar11 = puVar11 + 2;
      func_0x000107c605b8(uVar4,uVar1,uVar6,uVar5,0);
    } while ((uVar4 & 1) == 0);
    func_0x000107c6142c(uVar5);
    if (uVar12 == 0) goto LAB_101f1fe74;
LAB_101f1fe5c:
    uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar12 = uVar12 - 1 & uVar12;
  } while( true );
}



/* Entry: 101f1ff48; end: 101f20193;  */

undefined1 * FUN_101f1ff48(long param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined1 *unaff_x21;
  ulong uVar11;
  ulong uVar12;
  undefined1 *unaff_x26;
  undefined1 *puVar13;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [32];
  undefined1 *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *apuStack_80 [2];
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar12 = uVar11 * 8;
  lStack_60 = param_2;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_1);
LAB_101f1ffb8:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar5 = auStack_90 + -(uVar12 + 0xf & 0x3ffffffffffffff0);
    func_0x000107c60ee4(puVar5,uVar12);
    func_0x000107c61434(param_2);
    FUN_101f1fdb0(puVar5,uVar11,param_1,param_2);
    bVar3 = unaff_x21 != (undefined1 *)0x0;
    if (bVar3) {
      puVar5 = unaff_x21;
    }
    uVar11 = (ulong)(uint)bVar3;
    if (bVar3) {
      unaff_x21 = (undefined1 *)0x0;
    }
    func_0x000107c6142c(param_2);
    unaff_x26 = auStack_90;
    puVar13 = auStack_90;
    if (bVar3 != 1) {
LAB_101f20144:
      func_0x000107c6142c(param_2);
      func_0x000107c61574();
      goto LAB_101f20154;
    }
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar4 != 0) && (uVar7 = uVar12, func_0x000107c61594(uVar12,8), (uVar7 & 1) != 0))
    goto LAB_101f1ffb8;
    func_0x000107c6158c(uVar12,0xffffffffffffffff);
    func_0x000107c6157c(param_1);
    FUN_101f1fce4(apuStack_80,uVar12,uVar11,param_1,FUN_101f206dc,auStack_70,&puStack_88);
    bVar3 = unaff_x21 != (undefined1 *)0x0;
    puVar5 = apuStack_80[0];
    if (bVar3) {
      unaff_x21 = (undefined1 *)0x0;
      puVar5 = puStack_88;
    }
    uVar11 = (ulong)bVar3;
    func_0x000107c61590(uVar12,0xffffffffffffffff,0xffffffffffffffff);
    puVar13 = unaff_x26;
    if (!bVar3) goto LAB_101f20144;
  }
  iVar4 = 2;
  puStack_88 = puVar5;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    uVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(&puStack_88,uVar6,PTR___ss5ErrorWS_11034ee10);
  }
  func_0x000107c61574(param_1);
  func_0x000107c6142c();
  param_1 = param_2;
  unaff_x21 = puVar5;
  unaff_x26 = puVar13;
LAB_101f20154:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  func_0x000107c60e78();
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    puStack_e0 = unaff_x26;
    uStack_d8 = uVar11;
    uStack_d0 = uVar12;
    puStack_c8 = unaff_x21;
    puStack_c0 = puVar5;
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar8 = puVar10;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(param_1,&uStack_110);
      uVar11 = uStack_108;
      uVar12 = uStack_110;
      uVar7 = uStack_110;
      uVar9 = uStack_108;
      FUN_101f1f450();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f2029c);
        (*pcVar2)();
      }
      uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar9 + 0x40) = *(ulong *)(puVar8 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar12;
      puVar1[1] = uVar11;
      func_0x000100102924(auStack_100,*(long *)(puVar8 + 0x38) + uVar7 * 0x20);
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f202a0);
        (*pcVar2)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 101f20194; end: 101f2029f;  */

undefined * FUN_101f20194(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(param_1,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      FUN_101f1f450();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101f2029c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101f202a0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101f202a0; end: 101f202e3;  */

void FUN_101f202a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e40888 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5efd0(0xff);
  puVar2 = PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_110350ed8;
  func_0x000107c61520(PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_110350ed8,uVar1);
  puRam0000000112e40888 = puVar2;
  return;
}



/* Entry: 101f202e4; end: 101f2059f;  */

long FUN_101f202e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5efc8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5efd0();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_68 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x544547;
  if (param_2 != 0) {
    lVar2 = param_1;
  }
  lVar1 = -0x1d00000000000000;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  lVar6 = lVar1;
  func_0x000107c5fb24();
  func_0x000107c61434(param_2);
  func_0x000107c6142c(lVar1);
  if ((lVar2 != 0x544547) || (lVar6 != -0x1d00000000000000)) {
    uVar3 = 0x544547;
    func_0x000107c605b8(0x544547,0xe300000000000000,lVar2,lVar6,0);
    if ((uVar3 & 1) == 0) {
      if ((lVar2 != 0x54534f50) || (lVar6 != -0x1c00000000000000)) {
        uVar3 = 0;
        func_0x000107c605b8(0x54534f50,0xe400000000000000,lVar2,lVar6,0);
        if ((uVar3 & 1) == 0) {
          if ((lVar2 != 0x545550) || (lVar6 != -0x1d00000000000000)) {
            uVar3 = 0;
            func_0x000107c605b8(0x545550,0xe300000000000000,lVar2,lVar6,0);
            if ((uVar3 & 1) == 0) {
              uVar3 = 0;
              if (((lVar2 == 0x4554454c4544) && (lVar6 == -0x1a00000000000000)) ||
                 (func_0x000107c605b8(0x4554454c4544,0xe600000000000000,lVar2,lVar6,0),
                 (uVar3 & 1) != 0)) {
                lVar2 = 2;
              }
              else {
                if ((lVar2 != 0x44414548) || (lVar6 != -0x1c00000000000000)) {
                  uVar3 = 0;
                  func_0x000107c605b8(0x44414548,0xe400000000000000,lVar2,lVar6,0);
                  func_0x000107c6142c(lVar6);
                  if ((uVar3 & 1) != 0) {
                    return 4;
                  }
                  func_0x000107c5efac(puVar7);
                  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  FUN_101f20194(PTR___swiftEmptyArrayStorage_11034f1c8);
                  puVar5 = puVar4;
                  FUN_101f202a0();
                  lVar2 = lStack_68;
                  func_0x000107c5ed28(lVar8,puVar7,puVar4,lStack_68,puVar5);
                  func_0x000107c5efcc();
                  func_0x000107c61654();
                  (**(code **)(lVar9 + 8))(lVar8,lVar2);
                  return lVar8;
                }
                lVar2 = 4;
              }
              goto LAB_101f203e8;
            }
          }
          lVar2 = 3;
          goto LAB_101f203e8;
        }
      }
      lVar2 = 1;
      goto LAB_101f203e8;
    }
  }
  lVar2 = 0;
LAB_101f203e8:
  func_0x000107c6142c(lVar6);
  return lVar2;
}



/* Entry: 101f205a0; end: 101f205bf;  */

void FUN_101f205a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f205c0; end: 101f205f3;  */

void FUN_101f205c0(long param_1,long param_2)

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



/* Entry: 101f205f4; end: 101f20647;  */

void FUN_101f205f4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101f20648;
  plVar4[2] = unaff_x20;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar1;
  lVar2 = 0x112e40910;
  func_0x0001000285a8(0x112e40910,&UNK_10da2ea50);
  lVar3 = lVar2;
  FUN_101f2068c();
  *plVar1 = (long)plVar4;
  plVar1[1] = (long)FUN_101f1f254;
  plVar1[0xe] = lVar3;
  plVar1[0xf] = (long)(plVar4 + 2);
  plVar1[0xd] = lVar2;
  plVar1[7] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488e060,0,0);
  return;
}



/* Entry: 101f20648; end: 101f20683;  */

void FUN_101f20648(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101f20680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101f20684; end: 101f2068b;  */

void FUN_101f20684(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 101f2068c; end: 101f206db;  */

void FUN_101f2068c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e40918 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e40910;
  func_0x00010002969c(0x112e40910,&UNK_10da2ea50);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112e40918 = puVar2;
  return;
}



/* Entry: 101f206dc; end: 101f20733;  */

uint FUN_101f206dc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar3;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  func_0x000107c5fb1c(uVar2,uVar3);
  uVar1 = (uint)uVar2;
  func_0x000100077018();
  func_0x000107c6142c(uVar3);
  return (uVar1 ^ 0xffffffff) & 1;
}



/* Entry: 101f20734; end: 101f20747;  */

void FUN_101f20734(long param_1,long param_2)

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



/* Entry: 101f20748; end: 101f207b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f20748(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f20b3c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e40928) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f207b4; end: 101f2081f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f207b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e40928) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f20820; end: 101f2087f; -[_TtC46LensCreatorProfileScopedFactoryServiceProvider34SCLensCreatorProfileScopedServices init] */

void FUN_101f20820(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCreatorProfileScopedFactoryServiceProvider.SCLensCreatorProfileScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f2084c);
  (*pcVar1)();
}



/* Entry: 101f20880; end: 101f2088f; -[_TtC46LensCreatorProfileScopedFactoryServiceProvider34SCLensCreatorProfileScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f20880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e40928));
  return;
}



/* Entry: 101f20890; end: 101f208fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f20890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11049fbb8;
  func_0x000107c613fc(&UNK_11049fbb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f20bd4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f208fc; end: 101f20997;  */

void FUN_101f208fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11049fac8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11049fac8;
  return;
}



/* Entry: 101f20998; end: 101f209cf;  */

void FUN_101f20998(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101f209d0; end: 101f209d7;  */

undefined8 FUN_101f209d0(void)

{
  return 0x1b;
}



/* Entry: 101f209d8; end: 101f20b0b;  */

void FUN_101f209d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11049fbe0;
  func_0x000107c613fc(&UNK_11049fbe0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f20bac;
  func_0x00010058fa64(FUN_101f20bac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f20b0c; end: 101f20b3b;  */

undefined ** FUN_101f20b0c(void)

{
  return &PTR_DAT_113066c10;
}



/* Entry: 101f20b3c; end: 101f20b5b;  */

void FUN_101f20b3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128099e0);
  return;
}



/* Entry: 101f20b5c; end: 101f20bab;  */

undefined1  [16] FUN_101f20b5c(void)

{
  return ZEXT816(0x11049fb18);
}



/* Entry: 101f20bac; end: 101f20bd3;  */

void FUN_101f20bac(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f20bd4; end: 101f20be7;  */

void FUN_101f20bd4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f20be8; end: 101f20f4f;  */

void FUN_101f20be8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e409a0,&UNK_10da2ece0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101f21e58();
  func_0x000100082720("SCBusinessProfilesPresenterScopeExposerSubjectServiceProvider",0x3d,2);
  puVar3 = puVar2;
  FUN_101f21ee4();
  func_0x000100082720("SCBusinessProfilesPresenterScopeExposerObservableServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f20998;
  func_0x0001000823a8(FUN_101f20998,0);
  func_0x000100082720("SCLensCreatorProfileScopedServicesCleanupRelayServiceProvider",0x3d,2);
  puVar5 = puVar2;
  FUN_101f21d0c();
  func_0x000100082720("LensCreatorProfileScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e409a8,&UNK_10da2ecf0);
  puVar6 = &UNK_11049fc40;
  func_0x000107c613fc(&UNK_11049fc40,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x101f20f58;
  func_0x0001000823a8(0x101f20f58,puVar6);
  func_0x000100082720("SCLensCreatorProfileEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e409b0,&UNK_10da2ecf8);
  puVar6 = &UNK_11049fc68;
  func_0x000107c613fc(&UNK_11049fc68,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101f20f64;
  func_0x0001000823a8(0x101f20f64,puVar6);
  func_0x000100082720("SCLensCreatorProfileScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e40930,&UNK_10da2ea70);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101f20f70;
  func_0x0001000823a8(0x101f20f70,uVar7);
  func_0x000100082720("SCLensCreatorProfileScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e40920,&UNK_10da2ea60);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101f20f78;
  func_0x0001000823a8(0x101f20f78,uVar8);
  func_0x000100082720("SCLensCreatorProfileScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11049fc90;
  func_0x000107c613fc(&UNK_11049fc90,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x101f20f80;
  func_0x0001000823a8(0x101f20f80,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensCreatorProfileScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101f20f50; end: 101f20f87;  */

void FUN_101f20f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e409a0,&UNK_10da2ece0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101f21e58();
  func_0x000100082720("SCBusinessProfilesPresenterScopeExposerSubjectServiceProvider",0x3d,2);
  puVar3 = puVar2;
  FUN_101f21ee4();
  func_0x000100082720("SCBusinessProfilesPresenterScopeExposerObservableServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f20998;
  func_0x0001000823a8(FUN_101f20998,0);
  func_0x000100082720("SCLensCreatorProfileScopedServicesCleanupRelayServiceProvider",0x3d,2);
  puVar5 = puVar2;
  FUN_101f21d0c();
  func_0x000100082720("LensCreatorProfileScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e409a8,&UNK_10da2ecf0);
  puVar6 = &UNK_11049fc40;
  func_0x000107c613fc(&UNK_11049fc40,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x101f20f58;
  func_0x0001000823a8(0x101f20f58,puVar6);
  func_0x000100082720("SCLensCreatorProfileEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e409b0,&UNK_10da2ecf8);
  puVar6 = &UNK_11049fc68;
  func_0x000107c613fc(&UNK_11049fc68,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101f20f64;
  func_0x0001000823a8(0x101f20f64,puVar6);
  func_0x000100082720("SCLensCreatorProfileScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e40930,&UNK_10da2ea70);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101f20f70;
  func_0x0001000823a8(0x101f20f70,uVar7);
  func_0x000100082720("SCLensCreatorProfileScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e40920,&UNK_10da2ea60);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101f20f78;
  func_0x0001000823a8(0x101f20f78,uVar8);
  func_0x000100082720("SCLensCreatorProfileScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11049fc90;
  func_0x000107c613fc(&UNK_11049fc90,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x101f20f80;
  func_0x0001000823a8(0x101f20f80,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensCreatorProfileScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101f20f88; end: 101f21037;  */

void FUN_101f20f88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101f213c4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101f211cc(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f21038; end: 101f210a7;  */

undefined8 FUN_101f21038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101f211cc(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 101f210a8; end: 101f210db;  */

void FUN_101f210a8(void)

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



/* Entry: 101f210dc; end: 101f210e3;  */

undefined8 FUN_101f210dc(void)

{
  return 0x1b;
}



/* Entry: 101f210e4; end: 101f21167;  */

void FUN_101f210e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f21404,param_2,FUN_101f21408,param_2,FUN_101f21430,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f21168; end: 101f211b7;  */

undefined8 FUN_101f21168(void)

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



/* Entry: 101f211b8; end: 101f211cb;  */

void FUN_101f211b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11049fca8;
  return;
}



/* Entry: 101f211cc; end: 101f213a7;  */

void FUN_101f211cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112e40a90,&UNK_10db4bd70);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126a9a50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f01b650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f01b670);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f213a8; end: 101f213c3;  */

undefined ** FUN_101f213a8(void)

{
  return &PTR_DAT_113066c10;
}


