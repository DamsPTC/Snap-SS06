/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000c5df0; end: 1000c6517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1000c5df0(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                    long param_10,long param_11,long *param_12,long param_13,undefined4 param_14,
                    undefined4 param_15,undefined8 param_16)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined *puVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  long alStack_110 [4];
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  lStack_d8 = param_10;
  lStack_78 = param_13;
  uStack_70 = param_16;
  alStack_110[3] = param_6;
  plStack_d0 = param_1;
  uStack_c8 = param_5;
  FUN_1000c5db4(auStack_90);
  (**(code **)(*(long *)(param_13 + -8) + 0x20))();
  func_0x000107c613fc(param_12,(int)param_12[6],*(undefined2 *)((long)param_12 + 0x34));
  lVar6 = lStack_78;
  FUN_1000c6518(auStack_90,lStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  uVar15 = *puVar7;
  uVar4 = 0;
  FUN_1000c29e8();
  ppuStack_98 = &PTR_DAT_1107436e0;
  lVar5 = 0;
  auStack_b8[0] = uVar15;
  uStack_a0 = uVar4;
  func_0x0001000c6540();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = 0;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(lVar5 + 0x18) = uVar4;
  uVar4 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  lVar6 = 0;
  FUN_1000c65c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = 0x12;
  *(undefined1 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000029;
  *(undefined8 *)(lVar6 + 0x28) = 0x800000010f1ed9f0;
  uVar4 = 0x11305fc08;
  FUN_1000285a8(0x11305fc08,&UNK_10dcd4d88);
  func_0x000107c61538();
  *(undefined8 *)(lVar6 + 0x30) = uVar4;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  func_0x000107c61614(lVar6 + 0x38,0);
  *(long *)(lVar5 + 0x28) = lVar6;
  lVar6 = 0;
  FUN_1000c65f8();
  func_0x000107c613fc();
  *(undefined1 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0xd000000000000024;
  *(undefined8 *)(lVar6 + 0x20) = 0x800000010f1eda20;
  uVar4 = 0x11305fc58;
  FUN_1000285a8(0x11305fc58,&UNK_10dcd4d90);
  func_0x000107c61538();
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  func_0x000107c61614(lVar6 + 0x30,0);
  *(long *)(lVar5 + 0x30) = lVar6;
  lVar6 = 0;
  FUN_1000c6628();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 2;
  *(undefined8 *)(lVar6 + 0x28) = 0xd000000000000025;
  *(undefined8 *)(lVar6 + 0x30) = 0x800000010f1eda50;
  uVar4 = 0x11305fcd0;
  FUN_1000285a8(0x11305fcd0,&UNK_10dcd4d98);
  func_0x000107c61538();
  *(undefined8 *)(lVar6 + 0x38) = uVar4;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  func_0x000107c61614(lVar6 + 0x40,0);
  *(long *)(lVar5 + 0x38) = lVar6;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  func_0x000107c61614(lVar5 + 0x40,0);
  uVar4 = 0;
  FUN_1000c6658();
  func_0x000107c613fc();
  FUN_1000c66b0();
  uStack_c0 = uVar4;
  FUN_1000285a8(0x11305fcd8,&UNK_10dcd4da0);
  func_0x000107c613fc();
  puVar7 = &uStack_c0;
  FUN_10006c248();
  *(undefined8 **)(lVar5 + 0x50) = puVar7;
  param_12[0x12] = lVar5;
  lVar6 = _DAT_11305f908;
  lVar8 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))((long)param_12 + lVar6,1,1,lVar8);
  FUN_1000c69a4(auStack_b8,param_12 + 2);
  param_12[7] = param_2;
  param_12[8] = param_3;
  param_12[9] = param_4;
  uStack_f0 = param_8;
  FUN_1000c69a4(param_8,param_12 + 10);
  lVar6 = lStack_d8;
  param_12[0xf] = param_9;
  param_12[0x10] = lStack_d8;
  param_12[0x11] = param_11;
  *(undefined ***)(lVar5 + 0x48) = &PTR_DAT_1107436f0;
  func_0x000107c61604(lVar5 + 0x40,param_12);
  lVar8 = *(long *)(lVar5 + 0x28);
  *(undefined ***)(lVar8 + 0x40) = &PTR_DAT_110744010;
  func_0x000107c61604(lVar8 + 0x38,lVar5);
  lVar8 = *(long *)(lVar5 + 0x30);
  *(undefined ***)(lVar8 + 0x38) = &PTR_DAT_110744058;
  func_0x000107c61604(lVar8 + 0x30,lVar5);
  lVar8 = *(long *)(lVar5 + 0x38);
  *(undefined ***)(lVar8 + 0x48) = &PTR_DAT_110744040;
  func_0x000107c61604(lVar8 + 0x40,lVar5);
  puVar11 = &UNK_110743758;
  func_0x000107c613fc(&UNK_110743758,0x18,7);
  func_0x000107c61644(puVar11 + 0x10,lVar5);
  pcVar17 = *(code **)(*plStack_d0 + 0x60);
  func_0x000107c6157c(lVar5);
  alStack_110[2] = param_2;
  func_0x000107c615f0(param_2);
  alStack_110[1] = param_3;
  func_0x000107c615f0(param_3);
  lStack_e8 = param_9;
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(lVar6);
  lStack_e0 = param_11;
  func_0x000107c615f0(param_11);
  func_0x000107c6157c(param_12);
  uVar4 = 0x1000c6ca0;
  puVar9 = puVar11;
  (*pcVar17)(0x1000c6ca0);
  func_0x000107c61574(puVar11);
  uVar15 = uVar4;
  func_0x000107c614f0(uVar4);
  uVar16 = *(undefined8 *)(lVar5 + 0x18);
  (**(code **)(puVar9 + 0x10))(uVar16,uVar15,puVar9);
  func_0x000107c615e8(uVar4);
  pcVar17 = FUN_100877144;
  FUN_1000bfde0(FUN_100877144,0,&UNK_110743b70);
  puVar11 = &UNK_110743758;
  puVar9 = puVar11;
  func_0x000107c613fc(&UNK_110743758,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar5);
  pcVar10 = FUN_10087716c;
  puVar14 = puVar9;
  (**(code **)(*(long *)pcVar17 + 0x60))();
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(puVar9);
  pcVar17 = pcVar10;
  func_0x000107c614f0();
  lVar8 = alStack_110[3];
  (**(code **)(puVar14 + 0x10))(uVar16,pcVar17,puVar14);
  func_0x000107c615e8(pcVar10);
  pcVar17 = FUN_1002a6594;
  FUN_1000bfde0(FUN_1002a6594,0,&UNK_110743e78);
  func_0x000107c613fc(&UNK_110743758,0x18,7);
  func_0x000107c61644(puVar11 + 0x10,lVar5);
  pcVar10 = FUN_1002a664c;
  puVar9 = puVar11;
  (**(code **)(*(long *)pcVar17 + 0x60))(FUN_1002a664c);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(puVar11);
  pcVar17 = pcVar10;
  func_0x000107c614f0(pcVar10);
  (**(code **)(puVar9 + 0x10))(uVar16,pcVar17,puVar9);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(param_12);
  func_0x000107c615e8(pcVar10);
  plVar12 = param_12;
  func_0x0001000d26f8();
  FUN_1000d26fc();
  plVar13 = plStack_d0;
  lVar3 = lStack_d8;
  lVar2 = lStack_e0;
  lVar1 = lStack_e8;
  uVar4 = uStack_f0;
  lVar5 = alStack_110[2];
  lVar6 = alStack_110[1];
  if ((int)plVar12 == 0) {
    func_0x0001000834e4(uStack_f0);
    func_0x000107c615e8(alStack_110[2]);
    func_0x000107c615e8(alStack_110[1]);
    func_0x000107c615e8(lStack_e8);
    func_0x000107c615e8(lStack_d8);
    func_0x000107c615e8(lStack_e0);
    plVar13 = plStack_d0;
  }
  else {
    func_0x0001000d4e14();
    if ((*(byte *)(*plVar12 + _DAT_11307c8d0) & 1) == 0) {
      FUN_1000c2ae4(0);
      FUN_1000c911c();
      func_0x000107c615e8(lVar5);
      func_0x000107c615e8(lVar6);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(plVar13);
      func_0x000107c61574(uStack_c8);
      func_0x000107c61574(lVar8);
      func_0x0001000834e4(uVar4);
      goto LAB_1000c64e4;
    }
    func_0x0001000834e4(uVar4);
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61574(plVar13);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(lVar8);
LAB_1000c64e4:
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  return param_12;
}



/* Entry: 1000c6518; end: 1000c657f;  */

long FUN_1000c6518(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    func_0x000107c61560(param_1,param_2,uVar1 & 0xff);
    param_1 = param_2;
  }
  return param_1;
}



/* Entry: 1000c6580; end: 1000c65c7;  */

void FUN_1000c6580(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return;
}



/* Entry: 1000c65c8; end: 1000c65e7;  */

void FUN_1000c65c8(void)

{
  func_0x000107c61168(&PTR_PTR_11305ff18);
  return;
}



/* Entry: 1000c65e8; end: 1000c65f7;  */

undefined1  [16] FUN_1000c65e8(void)

{
  return ZEXT816(0x110743d48);
}



/* Entry: 1000c65f8; end: 1000c6617;  */

void FUN_1000c65f8(void)

{
  func_0x000107c61168(&PTR_PTR_11305fd30);
  return;
}



/* Entry: 1000c6618; end: 1000c6627;  */

undefined1  [16] FUN_1000c6618(void)

{
  return ZEXT816(0x1107438e8);
}



/* Entry: 1000c6628; end: 1000c6647;  */

void FUN_1000c6628(void)

{
  func_0x000107c61168(&PTR_PTR_11305fe18);
  return;
}



/* Entry: 1000c6648; end: 1000c6657;  */

undefined1  [16] FUN_1000c6648(void)

{
  return ZEXT816(0x110743a40);
}



/* Entry: 1000c6658; end: 1000c6677;  */

void FUN_1000c6658(void)

{
  func_0x000107c61168(&PTR_PTR_11305f2f8);
  return;
}



/* Entry: 1000c6678; end: 1000c66af;  */

void FUN_1000c6678(undefined1 *param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x30] = 1;
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(param_1 + 0x38) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(param_1 + 0x40) = puVar1;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x100;
  return;
}



/* Entry: 1000c66b0; end: 1000c6787;  */

void FUN_1000c66b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  FUN_1000c6678(&uStack_a0,0,0);
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_70;
  *(ulong *)(unaff_x20 + 0x58) = CONCAT44(uStack_54,uStack_58);
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_60;
  *(undefined8 *)(unaff_x20 + 100) = uStack_4c;
  *(ulong *)(unaff_x20 + 0x5c) = CONCAT44(uStack_50,uStack_54);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_90;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1000c6788();
  puVar2 = puVar4;
  FUN_1000c6878();
  puVar3 = puVar4;
  FUN_1000c6878();
  FUN_1000c6894();
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined1 *)(unaff_x20 + 0x78) = 1;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined1 *)(unaff_x20 + 0x88) = 0;
  *(undefined **)(unaff_x20 + 0x90) = puVar1;
  *(undefined **)(unaff_x20 + 0x98) = puVar2;
  *(undefined **)(unaff_x20 + 0xa0) = puVar3;
  *(undefined **)(unaff_x20 + 0xa8) = puVar4;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined1 *)(unaff_x20 + 0xb8) = 0xfc;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined1 *)(unaff_x20 + 200) = 1;
  *(undefined8 *)(unaff_x20 + 0xd4) = 0;
  *(undefined8 *)(unaff_x20 + 0xcc) = 0;
  *(undefined8 *)(unaff_x20 + 0xe4) = 0;
  *(undefined8 *)(unaff_x20 + 0xdc) = 0;
  *(undefined1 *)(unaff_x20 + 0xec) = 1;
  return;
}



/* Entry: 1000c6788; end: 1000c67a3;  */

undefined * FUN_1000c6788(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  uVar6 = 0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x11305f7d8);
    puVar4 = puVar8;
    func_0x000107c60498();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      uVar5 = uVar1;
      (*(code *)&UNK_1040b7fe4)();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6874);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6878);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 1000c67a4; end: 1000c6877;  */

undefined * FUN_1000c67a4(long param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    FUN_1000285a8(param_2);
    puVar4 = puVar7;
    func_0x000107c60498();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      uVar5 = uVar1;
      (*param_4)();
      if ((param_3 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6874);
        (*pcVar3)();
      }
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6878);
        (*pcVar3)();
      }
      puVar8 = puVar8 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 1000c6878; end: 1000c6893;  */

undefined * FUN_1000c6878(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  uVar6 = 0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x11305f7c8);
    puVar4 = puVar8;
    func_0x000107c60498();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      uVar5 = uVar1;
      FUN_100086a50();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6874);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6878);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 1000c6894; end: 1000c69a3;  */

undefined * FUN_1000c6894(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  FUN_1000285a8(0x11305f7b8);
  puVar3 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = uVar9;
  func_0x0001040b7fe8();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar9;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      *puVar1 = uVar11;
      puVar1[1] = uVar10;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c69a4);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61434();
        return puVar3;
      }
      uVar9 = puVar6[-2];
      uVar11 = puVar6[-1];
      uVar10 = *puVar6;
      func_0x000107c61434();
      uVar4 = uVar9;
      func_0x0001040b7fe8();
      puVar6 = puVar6 + 3;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c6974);
  (*pcVar2)();
}



/* Entry: 1000c69a4; end: 1000c69e7;  */

long FUN_1000c69a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1000c69e8; end: 1000c6b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c69e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  char cStack_68;
  undefined7 uStack_67;
  
  lVar5 = *unaff_x20;
  FUN_1000b69f8();
  uVar6 = *(undefined8 *)(lVar5 + 0x88);
  uVar2 = 0;
  uStack_80 = param_2;
  lStack_78 = param_3;
  func_0x000107c5fc80(0,uVar6);
  FUN_100087bd4(&cStack_68,FUN_1000c6b70,auStack_90,uVar2);
  uVar1 = CONCAT71(uStack_67,cStack_68);
  uVar4 = uVar6;
  FUN_1000c6bd0(param_1,uVar6,param_2,param_3);
  puVar3 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar2);
  func_0x000107c5fc14(param_1,uVar4,uVar2,puVar3);
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar4);
  uStack_80 = param_2;
  lStack_78 = param_3;
  FUN_100087bd4(&cStack_68,FUN_1000c9818,auStack_90,PTR___sSbN_11034dd40);
  if (cStack_68 == '\x01') {
    (**(code **)(param_3 + 0x20))(param_2,param_3);
  }
  FUN_1000b66c4(0,uVar6);
  func_0x000107c6157c();
  FUN_1000b6858();
  return;
}



/* Entry: 1000c6b70; end: 1000c6bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c6b70(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113096c18;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + _DAT_113096c18,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar2 + lVar1);
  func_0x000107c61434();
  return;
}



/* Entry: 1000c6bd0; end: 1000c6c97;  */

undefined1  [16]
FUN_1000c6bd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_1107aba30;
  func_0x000107c613fc(&UNK_1107aba30,uVar5 + lVar3,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = 0x1000c6cf4;
  return auVar6;
}



/* Entry: 1000c6c98; end: 1000c6ca7; -[SCSystemConfigurationImpl cameraCaptureFormatSelectionFrameworkConfiguration] */

undefined8 FUN_1000c6c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1000c6ca8; end: 1000c6d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c6ca8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_1130966f8))();
  return;
}



/* Entry: 1000c6d2c; end: 1000c6e4b;  */

void FUN_1000c6d2c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_48 = (undefined4)param_1[9];
  uStack_3c = *(undefined8 *)((long)param_1 + 0x54);
  uStack_44 = (undefined4)*(undefined8 *)((long)param_1 + 0x4c);
  uStack_40 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x4c) >> 0x20);
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    FUN_10006c804();
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_c0,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    FUN_1000c6e4c(&uStack_90);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_d8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_2);
    FUN_100070bfc();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1000c6e4c; end: 1000c7193;  */

/* WARNING: Possible PIC construction at 0x0001000c7130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000c7140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000c7188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000c7134) */
/* WARNING: Removing unreachable block (ram,0x0001000c718c) */

void FUN_1000c6e4c(ulong *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 auStack_e0 [2];
  ulong *puStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  uint uStack_68;
  
  uVar10 = *(ulong *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(uVar10 + 0x10);
  if (lVar8 != 0) {
    uStack_c0 = *param_1;
    uStack_80 = param_1[8];
    puVar9 = (undefined1 *)(uVar10 + 0x20);
    cVar2 = *(char *)(unaff_x20 + 0x10);
    do {
      if (cVar2 == puVar9[1]) {
        cVar3 = puVar9[2];
        uVar1 = (uint)param_1[0xb];
        uVar5 = uVar1 >> 0x1e;
        if (uVar5 < 2) {
          if (uVar5 == 0) {
            if (cVar3 == '\0') {
              *(undefined1 *)(unaff_x20 + 0x10) = *puVar9;
              uStack_88 = param_1[7];
              uStack_b0 = param_1[2];
              uStack_b8 = param_1[1];
              uStack_a0 = param_1[4];
              uStack_a8 = param_1[3];
              uStack_90 = param_1[6];
              uStack_98 = param_1[5];
              uStack_70 = param_1[10];
              uStack_78 = param_1[9];
LAB_1000c6fc4:
              uStack_68 = uVar1 & 0x3fffffff;
              lVar8 = unaff_x20 + 0x30;
              func_0x000107c61618();
              if (lVar8 == 0) {
                return;
              }
              func_0x000107c61434(uVar10);
              FUN_1000c7194(&uStack_c0);
LAB_1000c7044:
              func_0x000107c6142c(uVar10);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar8);
              return;
            }
          }
          else if (cVar3 == '\x01') {
            uVar4 = *puVar9;
            if ((uStack_c0 & 0xff00) == 0x200) {
              if (*(long *)(uStack_80 + 0x10) == 0) {
                return;
              }
              FUN_100086a50(0x3a);
              if ((param_2 & 1) == 0) {
                return;
              }
            }
            *(undefined1 *)(unaff_x20 + 0x10) = uVar4;
            uStack_88 = param_1[7];
            uStack_68 = uVar1 & 0x3fffffff;
            uStack_b0 = param_1[2];
            uStack_b8 = param_1[1];
            uStack_a0 = param_1[4];
            uStack_a8 = param_1[3];
            uStack_90 = param_1[6];
            uStack_98 = param_1[5];
            uStack_70 = param_1[10];
            uStack_78 = param_1[9];
            if (cVar2 != '\0') {
              if (cVar2 != '\x01') {
                return;
              }
              lVar8 = unaff_x20 + 0x30;
              func_0x000107c61618();
              if (lVar8 == 0) {
                return;
              }
              func_0x000107c61434(uVar10);
              func_0x000100c1d710(&uStack_c0);
              goto LAB_1000c7044;
            }
            goto LAB_1000c6fc4;
          }
        }
        else if (uVar5 == 2) {
          if (cVar3 == '\x02') {
            *(undefined1 *)(unaff_x20 + 0x10) = *puVar9;
            uStack_88 = param_1[7];
            uStack_68 = uVar1 & 0x3fffffff;
            uStack_b0 = param_1[2];
            uStack_b8 = param_1[1];
            uStack_a0 = param_1[4];
            uStack_a8 = param_1[3];
            uStack_90 = param_1[6];
            uStack_98 = param_1[5];
            uStack_70 = param_1[10];
            uStack_78 = param_1[9];
            lVar8 = unaff_x20 + 0x30;
            func_0x000107c61618();
            if (lVar8 == 0) {
              return;
            }
            func_0x000107c61434(uVar10);
            func_0x000100c7c1c8(&uStack_c0);
            goto LAB_1000c7044;
          }
        }
        else if (cVar3 == '\x03') {
          *(undefined1 *)(unaff_x20 + 0x10) = *puVar9;
          uStack_88 = param_1[7];
          uStack_68 = uVar1 & 0x3fffffff;
          uStack_b0 = param_1[2];
          uStack_b8 = param_1[1];
          uStack_a0 = param_1[4];
          uStack_a8 = param_1[3];
          uStack_90 = param_1[6];
          uStack_98 = param_1[5];
          uStack_70 = param_1[10];
          uStack_78 = param_1[9];
          lVar8 = unaff_x20 + 0x30;
          func_0x000107c61618();
          if (lVar8 == 0) {
            return;
          }
          lVar6 = lVar8 + 0x40;
          func_0x000107c61618();
          if (lVar6 != 0) {
            uVar7 = uVar10;
            func_0x000107c61434();
            func_0x0001002a6ed0();
            if ((uVar7 & 1) == 0) {
              FUN_1000c2ae4(0);
              FUN_1000c911c();
              func_0x000107c6142c(uVar10);
            }
            else {
              puStack_d0 = &uStack_c0;
              FUN_100075034(&UNK_1040b619c,auStack_e0,PTR___sytN_11034f1b0 + 8);
              func_0x0001000c74f0(auStack_e0);
              func_0x0001040b5900(auStack_e0[0]);
              func_0x000107c6142c(uVar10);
            }
          }
          goto code_r0x000107c615e8;
        }
      }
      puVar9 = puVar9 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 1000c7194; end: 1000c7383;  */

void FUN_1000c7194(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  byte bVar6;
  char *pcVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar5 = PTR___sytN_11034f1b0;
  lVar10 = *(long *)(unaff_x20 + 0x38);
  bVar6 = *(byte *)(lVar10 + 0x20);
  uStack_58 = 0;
  if (bVar6 < 2) {
    uStack_58 = *(undefined8 *)(lVar10 + 0x10);
  }
  uVar11 = 0x12;
  if (bVar6 < 2) {
    uVar11 = *(undefined8 *)(lVar10 + 0x10);
  }
  uStack_50 = CONCAT71(uStack_50._1_7_,1 < bVar6);
  uStack_60 = param_1;
  FUN_100075034(0x1000c7484,&uStack_70,PTR___sytN_11034f1b0 + 8);
  if (*(char *)(lVar10 + 0x20) == '\x01') {
    uVar11 = *(undefined8 *)(lVar10 + 0x10);
    FUN_100075034(&UNK_1040b7c40,0,puVar5 + 8);
    lVar10 = unaff_x20 + 0x40;
    func_0x000107c61618();
    if (lVar10 != 0) {
      FUN_1000c2ae4(0);
      FUN_1000c911c();
      func_0x000100c95c60(uVar11,0);
      func_0x000107c615e8(lVar10);
    }
  }
  else {
    lVar10 = unaff_x20 + 0x40;
    func_0x000107c61618();
    if (lVar10 != 0) {
      func_0x0001000c74f0(&uStack_70);
      FUN_1000c756c(uStack_70);
      func_0x000107c615e8(lVar10);
      func_0x000107c61574(uStack_70);
    }
    lVar12 = *(long *)(unaff_x20 + 0x28);
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    lVar8 = *(long *)(lVar12 + 0x30);
    lVar10 = *(long *)(lVar8 + 0x10);
    if (lVar10 != 0) {
      pcVar7 = (char *)(lVar8 + 0x20);
      uVar9 = *(undefined8 *)(lVar12 + 0x10);
      bVar6 = *(byte *)(lVar12 + 0x18);
      do {
        cVar3 = *pcVar7;
        cVar4 = pcVar7[1];
        if (bVar6 < 2) {
          if (bVar6 == 0) {
            if (cVar3 == '\x01' && cVar4 == '\0') {
LAB_1000c732c:
              pcVar1 = *(code **)(pcVar7 + 8);
              uVar2 = *(undefined8 *)(pcVar7 + 0x10);
              uStack_70 = uVar11;
              func_0x000107c61434(lVar8);
              func_0x000107c6157c(uVar2);
              (*pcVar1)(uVar9,bVar6,&uStack_70);
              *(undefined8 *)(lVar12 + 0x10) = uVar9;
              *(byte *)(lVar12 + 0x18) = bVar6;
              func_0x000107c6142c(lVar8);
              func_0x000107c61574(uVar2);
              return;
            }
          }
          else if (cVar3 == '\0' && cVar4 == '\0') goto LAB_1000c732c;
        }
        else if (bVar6 == 2) {
          if (cVar3 == '\x02' && cVar4 == '\0') goto LAB_1000c732c;
        }
        else if (cVar3 == '\x03' && cVar4 == '\0') goto LAB_1000c732c;
        pcVar7 = pcVar7 + 0x18;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}



/* Entry: 1000c7384; end: 1000c7467;  */

void FUN_1000c7384(long *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_100 [96];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  func_0x000107c61574(*param_1);
  lVar1 = 0;
  FUN_1000c6658();
  func_0x000107c613fc();
  FUN_1000c66b0();
  *param_1 = lVar1;
  uStack_98 = *(undefined8 *)(lVar1 + 0x18);
  uStack_a0 = *(undefined8 *)(lVar1 + 0x10);
  uStack_88 = *(undefined8 *)(lVar1 + 0x28);
  uStack_90 = *(undefined8 *)(lVar1 + 0x20);
  uStack_78 = *(undefined8 *)(lVar1 + 0x38);
  uStack_80 = *(undefined8 *)(lVar1 + 0x30);
  uStack_68 = *(undefined8 *)(lVar1 + 0x48);
  uStack_70 = *(undefined8 *)(lVar1 + 0x40);
  uStack_60 = *(undefined8 *)(lVar1 + 0x50);
  uStack_4c = *(undefined8 *)(lVar1 + 100);
  uStack_50 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x5c) >> 0x20);
  uStack_58 = (undefined4)*(undefined8 *)(lVar1 + 0x58);
  uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x58) >> 0x20);
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar8 = *(undefined8 *)((long)param_2 + 0x4c);
  *(undefined8 *)(lVar1 + 100) = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)(lVar1 + 0x5c) = uVar8;
  uVar10 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(lVar1 + 0x18) = param_2[1];
  *(undefined8 *)(lVar1 + 0x10) = uVar10;
  *(undefined8 *)(lVar1 + 0x28) = uVar9;
  *(undefined8 *)(lVar1 + 0x20) = uVar8;
  *(undefined8 *)(lVar1 + 0x38) = uVar7;
  *(undefined8 *)(lVar1 + 0x30) = uVar6;
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined8 *)(lVar1 + 0x58) = uVar3;
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  func_0x00010008718c(param_2,auStack_100);
  func_0x000100087254(&uStack_a0);
  func_0x000107c61428(lVar1 + 0x70,auStack_100,1,0);
  *(undefined8 *)(lVar1 + 0x70) = param_3;
  *(undefined1 *)(lVar1 + 0x78) = param_4;
  return;
}



/* Entry: 1000c7468; end: 1000c7497;  */

void FUN_1000c7468(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000c7384(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1000c7498; end: 1000c756b;  */

void FUN_1000c7498(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000100087254(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1000c756c; end: 1000c78e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c756c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_98 = param_1;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d68090;
  FUN_1000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar10 - extraout_x8_00;
  lVar6 = 0x112d3bc20;
  FUN_1000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = _DAT_11305f908;
  lVar12 = uVar11 - extraout_x12_00;
  func_0x000107c61428(unaff_x20 + _DAT_11305f908,auStack_78,0,0);
  pcStack_a8 = *(code **)(lVar13 + 0x38);
  (*pcStack_a8)(lVar12,1,1,lVar2);
  lVar7 = (long)*(int *)(lVar7 + 0x30);
  FUN_1000c78e8(unaff_x20 + lVar6,lVar9);
  FUN_1000c78e8(lVar12,lVar9 + lVar7);
  pcVar8 = *(code **)(lVar13 + 0x30);
  lVar3 = lVar9;
  (*pcVar8)(lVar9,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001000c7938(lVar12,0x112d3bc20,&UNK_10d904ef0);
    lVar7 = lVar9 + lVar7;
    (*pcVar8)(lVar7,1,lVar2);
    if ((int)lVar7 != 1) {
LAB_1000c7790:
      func_0x0001000c7938(lVar9,0x112d68090,&UNK_10da24400);
      goto LAB_1000c789c;
    }
    func_0x0001000c7938(lVar9,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    FUN_1000c78e8(lVar9,uVar11);
    lVar3 = lVar9 + lVar7;
    (*pcVar8)(lVar3,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x0001000c7938(lVar12,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lVar13 + 8))(uVar11,lVar2);
      goto LAB_1000c7790;
    }
    puVar4 = puVar10;
    (**(code **)(lVar13 + 0x20))(puVar10,lVar9 + lVar7,lVar2);
    func_0x000101207ba8();
    uVar5 = uVar11;
    func_0x000107c5fab8(uVar11,puVar10,lVar2,puVar4);
    pcVar8 = *(code **)(lVar13 + 8);
    (*pcVar8)(puVar10,lVar2);
    func_0x0001000c7938(lVar12,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar8)(uVar11,lVar2);
    func_0x0001000c7938(lVar9,0x112d3bc20,&UNK_10d904ef0);
    if ((uVar5 & 1) == 0) goto LAB_1000c789c;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar7 = *(long *)(unaff_x20 + 0x70);
  FUN_1000a8868(unaff_x20 + 0x50,uVar1);
  lVar3 = lStack_a0;
  (**(code **)(lVar7 + 8))(lStack_a0,uVar1,lVar7);
  (*pcStack_a8)(lVar3,0,1,lVar2);
  func_0x000107c61428(unaff_x20 + lVar6,auStack_90,0x21,0);
  FUN_1000c90cc(lVar3,unaff_x20 + lVar6);
  func_0x000107c614a8(auStack_90);
LAB_1000c789c:
  FUN_1000c2ae4(0);
  FUN_1000c911c();
  func_0x000107c5982c(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1000c78e8; end: 1000c7977;  */

undefined8 FUN_1000c78e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d3bc20;
  FUN_1000285a8(0x112d3bc20,&UNK_10d904ef0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000c7978; end: 1000c797f;  */

void FUN_1000c7978(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 1000c7980; end: 1000c7ac7;  */

void FUN_1000c7980(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = 0;
  func_0x000107c5f7f0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  plVar6 = (long *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  func_0x000107c5f83c();
  lVar9 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  iVar1 = (int)lVar4;
  lVar4 = (long)plVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar4 - extraout_x12;
  func_0x000107c5f830(lVar4);
  FUN_1000c7ae8();
  *plVar6 = (long)iVar1;
  (**(code **)(lVar8 + 0x68))
            (plVar6,*(undefined4 *)
                     PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_11034f778,lVar2);
  func_0x000107c5f834(lVar7,plVar6);
  (**(code **)(lVar8 + 8))(plVar6,lVar2);
  pcVar5 = *(code **)(lVar9 + 8);
  (*pcVar5)(lVar4,lVar3);
  FUN_1000c7b50(param_1,lVar7);
  (*pcVar5)(lVar7,lVar3);
  return;
}



/* Entry: 1000c7ac8; end: 1000c7ae7;  */

void FUN_1000c7ac8(void)

{
  FUN_1000c7980();
  return;
}



/* Entry: 1000c7ae8; end: 1000c7b4f;  */

undefined4 FUN_1000c7ae8(void)

{
  if (lRam00000001137fc0e8 != -1) {
    FUN_10002a2fc(0x1137fc0e8,&PTR___NSConcreteGlobalBlock_110d66518);
  }
  return uRam00000001137fc040;
}



/* Entry: 1000c7b50; end: 1000c820f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c7b50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  lVar2 = 0;
  uStack_a8 = param_1;
  FUN_1000c2d68();
  lStack_c0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x113060130;
  FUN_1000285a8(0x113060130,&UNK_10dcd5720);
  lStack_b8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar2 = 0;
  lStack_c8 = (long)puVar8 - extraout_x8_00;
  func_0x000107c5f83c();
  lVar11 = *(long *)(lVar2 + -8);
  lStack_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = ((long)puVar8 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar6 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = lVar5 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar9);
  func_0x000107c5f830(lVar6);
  func_0x0001000c7de0(lVar5,param_2,lVar6);
  pcStack_d0 = *(code **)(lVar11 + 8);
  (*pcStack_d0)(lVar6,lVar2);
  lStack_78 = lVar9;
  lStack_70 = lVar5;
  FUN_100075034(FUN_1000c8764,auStack_90,PTR___sytN_11034f1b0 + 8);
  lVar2 = 0x113060238;
  FUN_1000285a8(0x113060238,&UNK_10dcd57b0);
  iVar1 = *(int *)(lVar2 + 0x40);
  pcVar7 = *(code **)(lVar10 + 0x10);
  (*pcVar7)(puVar8,lVar9,lVar3);
  lVar2 = lStack_d8;
  (**(code **)(lVar11 + 0x10))(puVar8 + iVar1,param_2,lStack_d8);
  func_0x000107c6159c(puVar8,lStack_c0,0);
  uVar4 = 0x113060140;
  FUN_1000285a8(0x113060140,&UNK_10dcd5728);
  lVar6 = lStack_c8;
  func_0x000107c5fd28(lStack_c8,puVar8,uVar4);
  (**(code **)(lStack_b8 + 8))(lVar6,lStack_b0);
  (*pcVar7)(uStack_a8,lVar9,lVar3);
  (*pcStack_d0)(lVar5,lVar2);
  (**(code **)(lVar10 + 8))(lVar9,lVar3);
  return;
}



/* Entry: 1000c8210; end: 1000c83cb;  */

undefined1  [16] FUN_1000c8210(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long extraout_x8;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar3 = 0;
  func_0x000107c5f7f0();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  plVar6 = (long *)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar7 + 0x10))(plVar6);
  plVar4 = plVar6;
  (**(code **)(lVar7 + 0x58))(plVar6,lVar3);
  iVar2 = (int)plVar4;
  if (iVar2 == *(int *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788) {
    (**(code **)(lVar7 + 0x60))(plVar6,lVar3);
    lVar3 = *plVar6 * 1000000000;
    if (SUB168(SEXT816(*plVar6) * SEXT816(1000000000),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000c82c4);
      (*pcVar1)();
    }
  }
  else if (iVar2 == *(int *)PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_11034f778) {
    (**(code **)(lVar7 + 0x60))(plVar6,lVar3);
    lVar3 = *plVar6 * 1000000;
    if (SUB168(SEXT816(*plVar6) * SEXT816(1000000),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000c8308);
      (*pcVar1)();
    }
  }
  else {
    if (iVar2 != *(int *)PTR___s8Dispatch0A12TimeIntervalO12microsecondsyACSicACmFWC_11034f770) {
      if (iVar2 == *(int *)PTR___s8Dispatch0A12TimeIntervalO11nanosecondsyACSicACmFWC_11034f768) {
        (**(code **)(lVar7 + 0x60))(plVar6,lVar3);
        uVar5 = 0;
        lVar3 = *plVar6;
      }
      else if (iVar2 == *(int *)PTR___s8Dispatch0A12TimeIntervalO5neveryA2CmFWC_11034f780) {
        uVar5 = 0;
        lVar3 = 0x7fffffffffffffff;
      }
      else {
        (**(code **)(lVar7 + 8))(plVar6,lVar3);
        lVar3 = 0;
        uVar5 = 1;
      }
      goto LAB_1000c8348;
    }
    (**(code **)(lVar7 + 0x60))(plVar6,lVar3);
    lVar3 = *plVar6 * 1000;
    if (SUB168(SEXT816(*plVar6) * SEXT816(1000),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000c83cc);
      (*pcVar1)();
    }
  }
  uVar5 = 0;
LAB_1000c8348:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = lVar3;
  return auVar8;
}



/* Entry: 1000c83cc; end: 1000c8453;  */

undefined8 FUN_1000c83cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1000c8454; end: 1000c86eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c8454(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack_80 = *unaff_x20;
  lVar5 = 0x113060140;
  uStack_98 = param_2;
  uStack_90 = param_1;
  FUN_1000285a8(0x113060140,&UNK_10dcd5728);
  lStack_a0 = *(long *)(lVar5 + -8);
  lStack_88 = *(long *)(lStack_a0 + 0x40);
  lStack_68 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_88 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_70 = (long)&lStack_c0 - extraout_x8;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar5 + -8);
  lVar18 = *(long *)(lVar11 + 0x40);
  lStack_78 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = ((long)&lStack_c0 - extraout_x8) - (lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_b8 = lVar9;
  func_0x000107c5f83c();
  lVar12 = *(long *)(lVar6 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  lStack_c0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar9 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = _DAT_113060138;
  uStack_b0 = *(undefined8 *)((long)unaff_x20 + _DAT_113060128);
  lVar7 = 0;
  lStack_a8 = lVar17 - extraout_x8_00;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar17 - extraout_x8_00,1,1,lVar7);
  (**(code **)(lVar12 + 0x10))(lVar17,uStack_98,lVar6);
  (**(code **)(lVar11 + 0x10))(lVar9,uStack_90,lStack_78);
  lVar6 = lStack_a0;
  (**(code **)(lStack_a0 + 0x10))(lStack_70,(long)unaff_x20 + lVar5,lStack_68);
  bVar1 = *(byte *)(lVar12 + 0x50);
  uVar13 = (ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar15 = lVar14 + uVar13 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar10 = bVar2 + uVar15 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar6 + 0x50);
  uVar19 = lVar18 + (ulong)bVar3 + uVar10 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  uVar16 = lStack_88 + uVar19 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_1107442a8;
  func_0x000107c613fc(&UNK_1107442a8,uVar16 + 8,bVar1 | bVar2 | bVar3 | 7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  (**(code **)(lVar12 + 0x20))(puVar8 + uVar13,lVar17,lStack_c0);
  uVar4 = uStack_b0;
  *(undefined8 *)(puVar8 + uVar15) = uStack_b0;
  (**(code **)(lVar11 + 0x20))(puVar8 + uVar10,lStack_b8,lStack_78);
  (**(code **)(lVar6 + 0x20))(puVar8 + uVar19,lStack_70,lStack_68);
  *(undefined8 *)(puVar8 + uVar16) = uStack_80;
  func_0x000107c6157c(uVar4);
  FUN_1000abba4(0,0,lStack_a8,&UNK_10dcd57c8,puVar8);
  return;
}



/* Entry: 1000c86ec; end: 1000c8763;  */

void FUN_1000c86ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  FUN_1000c8454(param_3,param_4);
  uVar2 = *param_1;
  func_0x000107c61558(uVar2);
  uVar3 = *param_1;
  FUN_1000c87b8(uVar1,param_3,uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 1000c8764; end: 1000c877f;  */

void FUN_1000c8764(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000c86ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1000c8780; end: 1000c878f; -[SCSQLiteDocObjectContext enableImmediateWriteTransactions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c8780(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278eb3c) = param_3;
  return;
}



/* Entry: 1000c8790; end: 1000c87b7;  */

void FUN_1000c8790(long param_1)

{
  func_0x000107c61120(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1000c87b8; end: 1000c8927;  */

void FUN_1000c87b8(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = 0;
  uVar4 = param_2;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  FUN_1000c8928();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar9 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000c88c4);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar9) {
    param_3 = param_3 & 1;
    func_0x0001000c8afc(lVar9);
    uVar3 = param_2;
    FUN_1000c8928();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000c8884);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x0001040b83b8();
    lVar9 = *unaff_x20;
    goto joined_r0x0001000c88d8;
  }
  lVar9 = *unaff_x20;
joined_r0x0001000c88d8:
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar6);
    return;
  }
  (**(code **)(lVar10 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_1000c8e54(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar9);
  return;
}



/* Entry: 1000c8928; end: 1000c898b;  */

undefined1  [16] FUN_1000c8928(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  uVar1 = 0;
  func_0x000107c5eec8(0);
  uVar2 = 0x112d6c668;
  FUN_1000c898c(0x112d6c668,PTR___s10Foundation4UUIDVSHAAMc_110350c48);
  func_0x000107c5fa4c(uVar6,uVar1,uVar2);
  lVar3 = 0;
  uStack_68 = param_1;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar10 = 0;
  }
  else {
    lVar9 = *(long *)(lVar11 + 0x48);
    pcVar7 = *(code **)(lVar11 + 0x10);
    do {
      (*pcVar7)(puVar8,*(long *)(unaff_x20 + 0x30) + lVar9 * uVar6,lVar3);
      uVar2 = 0x112d68098;
      FUN_1000c898c(0x112d68098,PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      puVar4 = puVar8;
      func_0x000107c5fab8(puVar8,uStack_68,lVar3,uVar2);
      uVar10 = (uint)puVar4;
      (**(code **)(lVar11 + 8))(puVar8,lVar3);
      if (((ulong)puVar4 & 1) != 0) break;
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  auVar12._8_4_ = uVar10 & 1;
  auVar12._0_8_ = uVar6;
  auVar12._12_4_ = 0;
  return auVar12;
}



/* Entry: 1000c898c; end: 1000c89cb;  */

void FUN_1000c898c(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000107c5eec8(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1000c89cc; end: 1000c8e53;  */

undefined1  [16] FUN_1000c89cc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_1;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x48);
    pcVar5 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar5)(puVar6,*(long *)(unaff_x20 + 0x30) + lVar7 * param_2,lVar1);
      uVar2 = 0x112d68098;
      FUN_1000c898c(0x112d68098,PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      puVar3 = puVar6;
      func_0x000107c5fab8(puVar6,uStack_68,lVar1,uVar2);
      uVar8 = (uint)puVar3;
      (**(code **)(lVar9 + 8))(puVar6,lVar1);
      if (((ulong)puVar3 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar10._8_4_ = uVar8 & 1;
  auVar10._0_8_ = param_2;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 1000c8e54; end: 1000c8eeb;  */

void FUN_1000c8e54(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000c8eec);
  (*pcVar1)();
}



/* Entry: 1000c8eec; end: 1000c8f17; +[_TtC24SCCrashServicesImplSwift17MetadataConstants memoryUsageBytesKey] */

void FUN_1000c8eec(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef865e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000c8f18; end: 1000c8fa7;  */

/* WARNING: Possible PIC construction at 0x0001000c8f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000c8f90) */

void FUN_1000c8f18(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 == -0x8000000000000000) {
    return;
  }
  func_0x000107c61174(param_3);
  func_0x000107c51804(puVar1);
  func_0x000107c61180();
  func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000c8fa8; end: 1000c900b; -[SCPreferencesObservationGraph init] */

undefined1 * FUN_1000c8fa8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706560;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000c900c; end: 1000c90cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c900c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100083b20(&lStack_48);
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_113091b70);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_48);
  FUN_100083b20(&uStack_50);
  uVar1 = param_2;
  FUN_1000c9300(param_2,uVar2,uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000c90cc; end: 1000c911b;  */

undefined8 FUN_1000c90cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d3bc20;
  FUN_1000285a8(0x112d3bc20,&UNK_10d904ef0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000c911c; end: 1000c92a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c911c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [15];
  char cStack_51;
  
  lVar1 = 0;
  FUN_1000c2d68();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x113060130;
  FUN_1000285a8(0x113060130,&UNK_10dcd5720);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000113060118 != -1) {
    func_0x000107c61568(0x113060118,FUN_1000c92a8);
  }
  FUN_100075034(&cStack_51,FUN_1000c94b8,0,PTR___sSbN_11034dd40);
  if (cStack_51 == '\x01') {
    if (lRam0000000113060108 != -1) {
      func_0x000107c61568(0x113060108,FUN_1000c2b1c);
    }
    func_0x000107c6159c(puVar4,lVar1,2);
    uVar3 = 0x113060140;
    FUN_1000285a8(0x113060140,&UNK_10dcd5728);
    func_0x000107c5fd28((long)puVar4 - extraout_x8_00,puVar4,uVar3);
    (**(code **)(lVar5 + 8))((long)puVar4 - extraout_x8_00,lVar2);
  }
  return;
}



/* Entry: 1000c92a8; end: 1000c92ff;  */

void FUN_1000c92a8(void)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  FUN_1000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar1 = &uStack_21;
  FUN_10006c248();
  puRam0000000113060120 = puVar1;
  return;
}



/* Entry: 1000c9300; end: 1000c9497;  */

void FUN_1000c9300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126decc0;
  func_0x000107c610f4(PTR_PTR_1126decc0);
  func_0x000107c48a20();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1000c9498; end: 1000c94b7; -[SCAppStartExperimentReaderServices appStartExperimentReader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c9498(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113092298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000c94b8; end: 1000c94d7;  */

void FUN_1000c94b8(undefined1 *param_1,byte *param_2)

{
  if ((*param_2 & 1) != 0) {
    *param_1 = 0;
    return;
  }
  *param_2 = 1;
  *param_1 = 1;
  return;
}



/* Entry: 1000c94d8; end: 1000c9503; +[_TtC24SCCrashServicesImplSwift17MetadataConstants virtualMemoryBytesKey] */

void FUN_1000c94d8(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef86640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000c9504; end: 1000c9537; +[_TtC24SCCrashServicesImplSwift17MetadataConstants vmRegionCountKey] */

void FUN_1000c9504(void)

{
  func_0x000107c5fadc(0x4f494745525f4d56,0xef544e554f435f4e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000c9538; end: 1000c9633; -[_TtC34AppStartupViolationMonitorProvider26AppStartupViolationMonitor setStartupLaunchType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c9538(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11307cde0);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000c9634);
      (*pcVar1)();
    }
    func_0x000107c61174(param_1);
    uVar4 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
        func_0x000107c615f0(uVar5);
      }
      else {
        uVar5 = uVar4;
        func_0x0001044745d4(uVar4,uVar2);
      }
      uVar4 = uVar4 + 1;
      func_0x000107c5982c(uVar5);
      func_0x000107c615e8(uVar5);
    } while (uVar3 != uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1000c9634; end: 1000c9663; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor setStartupLaunchType:] */

void FUN_1000c9634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1000c9664(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000c9664; end: 1000c9797;  */

/* WARNING: Possible PIC construction at 0x0001000c9740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000c9754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000c9764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000c9758) */
/* WARNING: Removing unreachable block (ram,0x0001000c9744) */
/* WARNING: Removing unreachable block (ram,0x0001000c9768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c9664(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_1103b6950;
  func_0x000107c613fc(&UNK_1103b6950,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar3 != 0) {
    puVar2 = &UNK_1103b6978;
    func_0x000107c613fc(&UNK_1103b6978,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x1000f6d08;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(long *)(puVar2 + 0x20) = lVar3;
    uStack_50 = 0x1000f6d04;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1000f6b44;
    puStack_58 = &UNK_1103b6990;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61580(lVar3,2);
    func_0x000107c6157c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 1000c9798; end: 1000c979b;  */

void FUN_1000c9798(long param_1,long param_2)

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



/* Entry: 1000c979c; end: 1000c97c7; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl setStartupLaunchType:] */

void FUN_1000c979c(void)

{
  return;
}



/* Entry: 1000c97c8; end: 1000c9817;  */

void FUN_1000c97c8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000c9818; end: 1000c982f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c9818(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113096c20);
  return;
}



/* Entry: 1000c9830; end: 1000c985b; +[_TtC24SCCrashServicesImplSwift17MetadataConstants devicePhysicalMemoryBytesKey] */

void FUN_1000c9830(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef86620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000c985c; end: 1000c9887; +[_TtC24SCCrashServicesImplSwift17MetadataConstants appSessionDurationSecKey] */

void FUN_1000c985c(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef86600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000c9888; end: 1000c98a7;  */

void FUN_1000c9888(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uStack_50 = param_1;
  FUN_100087bd4(FUN_1000c99e4,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1000c98a8; end: 1000c98fb;  */

void FUN_1000c98a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = param_2;
  uStack_48 = param_1;
  uStack_40 = param_4;
  FUN_100087bd4(FUN_1000c99e4,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1000c98fc; end: 1000c99e3;  */

void FUN_1000c98fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x18,auStack_68,0x21,0);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar2 = uVar4;
  func_0x000107c61558();
  *(ulong *)(param_1 + 0x18) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1000c9a00(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_1 + 0x18) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1000c9a00(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(ulong *)(param_1 + 0x18) = uVar4;
  func_0x000107c614a8(auStack_68);
  func_0x000107c615f0(param_2);
  return;
}



/* Entry: 1000c99e4; end: 1000c99ff;  */

void FUN_1000c99e4(void)

{
  long unaff_x20;
  
  FUN_1000c98fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1000c9a00; end: 1000c9b2f;  */

undefined * FUN_1000c9a00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c9b30);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x113096100;
    FUN_1000285a8(0x113096100,&UNK_10dd3c3f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x113094ed8;
    FUN_1000285a8(0x113094ed8,&UNK_10dd3b9a0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1000c9b30; end: 1000c9b3b;  */

void FUN_1000c9b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820bd8);
  return;
}



/* Entry: 1000c9b3c; end: 1000c9c13;  */

undefined1  [16] FUN_1000c9b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  FUN_1000c9b30(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  FUN_1000b693c(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  func_0x000107c6157c(lVar2);
  FUN_1000c9e7c(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_10dd3b930;
  uStack_48 = param_2;
  func_0x000107c61520(&DAT_10dd3b930,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  func_0x000107c61574(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 1000c9c14; end: 1000c9c17;  */

void FUN_1000c9c14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000c9c18; end: 1000c9c9f;  */

void FUN_1000c9c18(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    func_0x000107c61524(param_1,0,3,&lStack_38,param_1 + 0x60);
  }
  return;
}



/* Entry: 1000c9ca0; end: 1000c9e7b; -[SCMemoryUsageMetadataListener initWithObservationQueue:appInsightsMetadataStorage:memoryUsageInfoProvider:metadataStore:appStartExperimentReader:didBecomeActive:didEnterBackground:] */

undefined1 *
FUN_1000c9ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_58 = PTR_PTR_1126e7370;
  uStack_60 = param_2;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if ((puVar1 != (undefined8 *)0x0) && (uVar2 = param_8, func_0x000107c3ebd4(), (int)uVar2 != 0)) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c3ebd4();
    *(char *)((long)puVar1 + 0x28) = (char)uVar2;
    FUN_100b6a110();
    *(undefined8 *)((long)puVar1 + 0x50) = param_1;
    func_0x000107c3ce4c(puVar1);
    func_0x000107c3ce50(puVar1);
    func_0x000107c3c99c(puVar1);
    func_0x000107c3c9a0(puVar1);
    func_0x000107c3c9bc(puVar1);
    uVar2 = param_8;
    func_0x000107c4980c();
    if (0 < (int)uVar2) {
      func_0x000107c3c8dc(puVar1);
    }
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1000c9e7c; end: 1000c9eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000c9e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c5eec4(unaff_x20 + _DAT_113815488);
  *(undefined8 *)(unaff_x20 + _DAT_1130950b0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130950b8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return unaff_x20;
}



/* Entry: 1000c9eec; end: 1000c9ef7;  */

void FUN_1000c9eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8207c0);
  return;
}



/* Entry: 1000c9ef8; end: 1000c9fcf;  */

undefined1  [16] FUN_1000c9ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  FUN_1000c9eec(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_1000b693c(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  func_0x000107c6157c(lVar2);
  func_0x0001000ca0d4(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_10dd3b4a8;
  uStack_48 = param_2;
  func_0x000107c61520(&DAT_10dd3b4a8,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  func_0x000107c61574(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 1000c9fd0; end: 1000c9fd3;  */

void FUN_1000c9fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000c9fd4; end: 1000ca07b;  */

void FUN_1000c9fd4(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x50);
    lVar1 = 0x13f;
    func_0x000107c60188();
    if (uVar2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = PTR___syycWV_11034f1c0 + 0x40;
      puStack_30 = PTR___sBoWV_11034d678 + 0x40;
      puStack_28 = puStack_30;
      func_0x000107c61524(param_1,0,5,&lStack_48,param_1 + 0x58);
    }
  }
  return;
}



/* Entry: 1000ca07c; end: 1000ca087;  */

void FUN_1000ca07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1000ca088; end: 1000ca127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ca088(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815488;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x0001000ca0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 1000ca128; end: 1000ca1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ca128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c5eec4((long)unaff_x20 + _DAT_113815460);
  (**(code **)(*(long *)(*(long *)(lVar3 + 0x50) + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),1,1);
  lVar3 = *(long *)(*unaff_x20 + 0x70);
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar3) = uVar2;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) = param_1;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 1000ca1e0; end: 1000ca223;  */

void FUN_1000ca1e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ca224; end: 1000ca22f;  */

void FUN_1000ca224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820c94);
  return;
}



/* Entry: 1000ca230; end: 1000ca373;  */

void FUN_1000ca230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x88);
  FUN_1000ca224(0,uVar5);
  lVar6 = unaff_x20[2];
  uVar1 = 0;
  FUN_100087438(0,uVar5);
  func_0x000107c5fc74(lVar6,uVar1);
  uVar5 = param_2;
  FUN_1000b693c(param_2,param_3);
  func_0x0001000ca44c(lVar6,uVar5);
  uVar2 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  lStack_60 = lVar6;
  func_0x000107c5fc80(0,uVar1);
  uVar5 = 0x113094ed8;
  FUN_1000285a8(0x113094ed8,&UNK_10dd3b9a0);
  puVar3 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar2);
  pcVar4 = FUN_1000cad5c;
  FUN_1000ca88c(FUN_1000cad5c,auStack_80,uVar2,uVar5,PTR___ss5NeverON_11034ee88,puVar3,
                PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61574(lVar6);
  lVar6 = 0;
  FUN_1000d222c();
  func_0x000107c613fc();
  *(code **)(lVar6 + 0x10) = pcVar4;
  return;
}



/* Entry: 1000ca374; end: 1000ca377;  */

void FUN_1000ca374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000ca378; end: 1000ca3ff;  */

void FUN_1000ca378(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c61524(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 1000ca400; end: 1000ca497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ca400(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815460;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x0001000ca448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 1000ca498; end: 1000ca51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ca498(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c5eec4(unaff_x20 + _DAT_113815490);
  lVar1 = _DAT_1130951f0;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_1130951f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130951e8) = param_1;
  return;
}



/* Entry: 1000ca520; end: 1000ca527;  */

void FUN_1000ca520(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1000ca528; end: 1000ca55f;  */

void FUN_1000ca528(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1000ca560; end: 1000ca5b3;  */

undefined8 FUN_1000ca560(void)

{
  long *unaff_x20;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  FUN_100075034(auStack_60,FUN_1000ca6b0,auStack_50);
  return auStack_60[0];
}



/* Entry: 1000ca5b4; end: 1000ca6af;  */

void FUN_1000ca5b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  FUN_1000bdd80();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar5 + 0x10))(puVar4,param_2,lVar2);
  puVar3 = puVar4;
  func_0x000107c614c4(puVar4,lVar2);
  if ((int)puVar3 == 1) {
    (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_1,puVar4,param_3);
  }
  else {
    (**(code **)(lVar5 + 8))(param_2,lVar2);
    uVar1 = *(undefined8 *)(&stack0xffffffffffffffc8 + -extraout_x8);
    (*(code *)*puVar4)(param_1);
    func_0x000107c61574(uVar1);
    (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
    func_0x000107c6159c(param_2,lVar2,1);
  }
  return;
}



/* Entry: 1000ca6b0; end: 1000ca6d7;  */

void FUN_1000ca6b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000ca5b4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1000ca6d8; end: 1000ca7b7;  */

undefined8 * FUN_1000ca6d8(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1000ca774;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1000ca774:
  if (uVar5 != 1) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    func_0x000107c6157c(uVar2);
  }
  else {
    (**(code **)(lVar3 + 0x10))(param_1);
  }
  *(bool *)((long)param_1 + uVar4) = uVar5 == 1;
  return param_1;
}



/* Entry: 1000ca7b8; end: 1000ca85b;  */

void FUN_1000ca7b8(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1000ca844;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1000ca844:
  if (uVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000ca850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 2));
  return;
}


