/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101765650; end: 10176566f;  */

void FUN_101765650(void)

{
  func_0x000107c61168(&PTR_PTR_1127e9570);
  return;
}



/* Entry: 101765670; end: 10176585b;  */

long FUN_101765670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined4 param_9,undefined4 param_10,long param_11,long param_12,long param_13,
                  undefined4 param_14,undefined4 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,undefined8 param_19)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 auStack_100 [4];
  undefined1 auStack_e0 [24];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  auStack_100[0] = param_16;
  lStack_78 = param_12;
  uStack_70 = param_18;
  auStack_100[1] = param_3;
  auStack_100[2] = param_6;
  auStack_100[3] = param_7;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(param_12 + -8) + 0x20))();
  lStack_a0 = param_13;
  uStack_98 = param_19;
  func_0x0001000c5db4(auStack_b8);
  (**(code **)(*(long *)(param_13 + -8) + 0x20))();
  lStack_c8 = param_11;
  uStack_c0 = param_17;
  func_0x0001000c5db4(auStack_e0);
  (**(code **)(*(long *)(param_11 + -8) + 0x20))();
  func_0x000107c613fc(param_8,0xb0,7);
  lVar1 = lStack_a0;
  func_0x0001000c6518(auStack_b8,lStack_a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)auStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  lVar1 = lStack_c8;
  func_0x0001000c6518(auStack_e0,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar6);
  uVar3 = *puVar5;
  uVar4 = *puVar6;
  uVar2 = 0;
  func_0x000101762f24();
  *(undefined8 *)(param_8 + 0x68) = uVar2;
  *(undefined ***)(param_8 + 0x70) = &PTR_DAT_110404f88;
  *(undefined8 *)(param_8 + 0x50) = uVar3;
  uVar2 = 0;
  func_0x0001017699b4();
  *(undefined8 *)(param_8 + 0x90) = uVar2;
  *(undefined ***)(param_8 + 0x98) = &PTR_DAT_1104058a0;
  *(undefined8 *)(param_8 + 0x78) = uVar4;
  *(undefined8 *)(param_8 + 0x10) = param_1;
  FUN_10176585c(auStack_90,param_8 + 0x18);
  *(undefined8 *)(param_8 + 0x40) = auStack_100[1];
  *(undefined8 *)(param_8 + 0x48) = auStack_100[0];
  *(undefined8 *)(param_8 + 0xa0) = auStack_100[2];
  *(undefined8 *)(param_8 + 0xa8) = auStack_100[3];
  func_0x0001000834e4(auStack_e0);
  func_0x0001000834e4(auStack_b8);
  return param_8;
}



/* Entry: 10176585c; end: 101765873;  */

undefined8 * FUN_10176585c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101765874; end: 10176591f;  */

void FUN_101765874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0;
  func_0x00010447aa4c(0,uVar4,uVar5);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x48 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8));
  func_0x0001017648a4(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      unaff_x20 + uVar7,*puVar1,puVar1[1],uVar2,uVar4,uVar3,uVar5);
  return;
}



/* Entry: 101765920; end: 1017659c7;  */

void FUN_101765920(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x00010447aa4c(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x28));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(unaff_x20 +
              (*(long *)(*(long *)(lVar1 + -8) + 0x40) +
               (uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)))(7,0,0x102);
  return;
}



/* Entry: 1017659c8; end: 1017659d3;  */

void FUN_1017659c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c61428(lVar8 + 0x10,auStack_68,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61648();
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(lVar8 + 0xa8);
    puVar5 = &UNK_110404fd8;
    func_0x000107c613fc(&UNK_110404fd8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar8);
    FUN_1017614e0(unaff_x20 + 0x18,&uStack_98);
    puVar6 = &UNK_1104051d8;
    func_0x000107c613fc(&UNK_1104051d8,0x68,7);
    *(undefined8 *)(puVar6 + 0x20) = uStack_90;
    *(undefined8 *)(puVar6 + 0x18) = uStack_98;
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x30) = uStack_80;
    *(undefined8 *)(puVar6 + 0x28) = uStack_88;
    *(undefined8 *)(puVar6 + 0x40) = uStack_70;
    *(undefined8 *)(puVar6 + 0x38) = uStack_78;
    *(undefined8 *)(puVar6 + 0x48) = uVar1;
    *(undefined8 *)(puVar6 + 0x50) = uVar3;
    *(undefined8 *)(puVar6 + 0x58) = uVar2;
    *(undefined8 *)(puVar6 + 0x60) = uVar4;
    pcStack_a8 = FUN_101765a08;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_1000f6b44;
    puStack_b0 = &UNK_1104051f0;
    ppuVar7 = &puStack_c8;
    puStack_a0 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_a0;
    func_0x000107c615f0(uVar9);
    func_0x000107c61434(uVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(lVar8);
    func_0x000107c615e8(uVar9);
  }
  return;
}



/* Entry: 1017659d4; end: 101765a07;  */

void FUN_1017659d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101765a08; end: 101765a2b;  */

void FUN_101765a08(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0,*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x000107c615f0(uVar2);
    FUN_101760bb8(unaff_x20 + 0x18);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 101765a2c; end: 101765abf;  */

void FUN_101765a2c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0;
  func_0x00010447aa4c(0,uVar4,uVar5);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x59 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8));
  func_0x000101764b40(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x58),
                      unaff_x20 + uVar7,*puVar1,puVar1[1],uVar2,uVar4,uVar3,uVar5);
  return;
}



/* Entry: 101765ac0; end: 101765aeb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101765ac0(ulong param_1,ulong param_2,char param_3,char param_4)

{
  uint uVar1;
  
  if (param_4 != '\x01') {
    uVar1 = (uint)(param_2 >> 0x3e);
    if (uVar1 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_1);
    return;
  }
  if (param_3 != '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101765aec; end: 101765fc3;  */

/* WARNING: Possible PIC construction at 0x000101765fdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101765fe0) */

void FUN_101765aec(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined1 *param_5,
                  ulong param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 auStack_b8 [24];
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee08(param_3,param_4,0);
  if (param_4 >> 0x3c < 0xf) {
    uVar2 = (uint)(param_4 >> 0x20);
    uVar11 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        if ((param_4 & 0xff000000000000) != 0) {
LAB_101765b8c:
          if (param_6 >> 0x3c < 0xf) {
            uVar2 = (uint)(param_6 >> 0x20);
            uVar11 = uVar2 >> 0x1e;
            if (uVar2 >> 0x1e < 2) {
              if (uVar11 != 0) {
                if ((long)(int)param_5 != (long)param_5 >> 0x20) goto LAB_101765cd8;
                goto LAB_101765c0c;
              }
              if ((param_6 & 0xff000000000000) != 0) goto LAB_101765cec;
            }
            else if (uVar11 == 2) {
              if (*(long *)(param_5 + 0x10) == *(long *)(param_5 + 0x18)) goto LAB_101765c0c;
LAB_101765cd8:
              func_0x00010006c00c(param_5,param_6);
LAB_101765cec:
              puStack_88 = PTR___s10Foundation4DataVN_110350ae0;
              puStack_80 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_110350ad0;
              ppuVar5 = &puStack_a0;
              puStack_a0 = param_5;
              uStack_98 = param_6;
              func_0x0001000a8868();
              puVar10 = *ppuVar5;
              puVar6 = ppuVar5[1];
              uVar2 = (uint)((ulong)puVar6 >> 0x20);
              uVar11 = uVar2 >> 0x1e;
              if (uVar2 >> 0x1e < 2) {
                if (uVar11 == 0) {
                  auStack_b8[0] = SUB81(puVar10,0);
                  auStack_b8[1] = (undefined1)((ulong)puVar10 >> 8);
                  auStack_b8[2] = (undefined1)((ulong)puVar10 >> 0x10);
                  auStack_b8[3] = (undefined1)((ulong)puVar10 >> 0x18);
                  auStack_b8[4] = (undefined1)((ulong)puVar10 >> 0x20);
                  auStack_b8[5] = (undefined1)((ulong)puVar10 >> 0x28);
                  auStack_b8[6] = (undefined1)((ulong)puVar10 >> 0x30);
                  auStack_b8[7] = (undefined1)((ulong)puVar10 >> 0x38);
                  auStack_b8[8] = SUB81(puVar6,0);
                  auStack_b8[9] = (undefined1)((ulong)puVar6 >> 8);
                  auStack_b8[10] = (undefined1)((ulong)puVar6 >> 0x10);
                  auStack_b8[0xb] = (undefined1)((ulong)puVar6 >> 0x18);
                  auStack_b8[0xc] = (undefined1)((ulong)puVar6 >> 0x20);
                  auStack_b8[0xd] = (undefined1)((ulong)puVar6 >> 0x28);
                  puVar10 = auStack_b8 + ((ulong)puVar6 >> 0x30 & 0xff);
                  func_0x00010006c00c(param_5,param_6);
                  puVar6 = auStack_b8;
                }
                else {
                  lVar4 = (long)(int)puVar10;
                  puVar1 = (undefined1 *)(((long)puVar10 >> 0x20) - lVar4);
                  if ((long)puVar10 >> 0x20 < lVar4) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101765fb4);
                    (*pcVar3)();
                  }
                  puVar6 = param_5;
                  func_0x00010006c00c(param_5,param_6);
                  func_0x000107c5ec30();
                  if (puVar6 == (undefined1 *)0x0) {
                    func_0x000107c5ec38();
                    puVar6 = (undefined1 *)0x0;
                  }
                  else {
                    puVar10 = puVar6;
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar4,(long)puVar10)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101765fc0);
                      (*pcVar3)();
                    }
                    puVar6 = puVar6 + (lVar4 - (long)puVar10);
                    func_0x000107c5ec38();
                    if (puVar6 != (undefined1 *)0x0) {
                      if ((long)puVar1 <= (long)puVar10) {
                        puVar10 = puVar1;
                      }
                      puVar10 = puVar10 + (long)puVar6;
                      goto LAB_101765ed0;
                    }
                  }
                  puVar10 = (undefined1 *)0x0;
                }
              }
              else if (uVar11 == 2) {
                lVar4 = *(long *)(puVar10 + 0x10);
                lVar7 = *(long *)(puVar10 + 0x18);
                puVar6 = param_5;
                func_0x00010006c00c(param_5,param_6);
                func_0x000107c5ec30();
                puVar10 = puVar6;
                if (puVar6 != (undefined1 *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar4,(long)puVar10)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101765fbc);
                    (*pcVar3)();
                  }
                  puVar6 = puVar6 + (lVar4 - (long)puVar10);
                }
                puVar1 = (undefined1 *)(lVar7 - lVar4);
                if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101765fb8);
                  (*pcVar3)();
                }
                func_0x000107c5ec38();
                if (puVar6 == (undefined1 *)0x0) {
                  puVar10 = (undefined1 *)0x0;
                }
                else {
                  if ((long)puVar1 <= (long)puVar10) {
                    puVar10 = puVar1;
                  }
                  puVar10 = puVar10 + (long)puVar6;
                }
              }
              else {
                auStack_b8[8] = 0;
                auStack_b8[9] = 0;
                auStack_b8[10] = 0;
                auStack_b8[0xb] = 0;
                auStack_b8[0xc] = 0;
                auStack_b8[0xd] = 0;
                auStack_b8[0] = 0;
                auStack_b8[1] = 0;
                auStack_b8[2] = 0;
                auStack_b8[3] = 0;
                auStack_b8[4] = 0;
                auStack_b8[5] = 0;
                auStack_b8[6] = 0;
                auStack_b8[7] = 0;
                func_0x00010006c00c(param_5,param_6);
                puVar6 = auStack_b8;
                puVar10 = auStack_b8;
              }
LAB_101765ed0:
              func_0x0001004497b8(&lStack_78,puVar6,puVar10);
              func_0x0001000834e4(&puStack_a0);
              func_0x000107c5ee44(param_1,param_2);
              lVar4 = param_3;
              func_0x000107c5ee20(param_3,param_4);
              lVar7 = lStack_78;
              func_0x000107c5ee20(lStack_78,uStack_70);
              lVar8 = lVar4;
              lVar9 = lVar7;
              func_0x000107c31270(lVar4,lVar7,0);
              func_0x000107c61180();
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar7);
              if (lVar8 == 0) {
                func_0x0001000b44c0(param_3,param_4);
                func_0x0001000b44c0(param_5,param_6);
                lVar4 = 0;
                lVar9 = -0x1000000000000000;
              }
              else {
                lVar4 = lVar8;
                func_0x000107c5ee30(lVar8);
                func_0x0001000b44c0(param_3,param_4);
                func_0x0001000b44c0(param_5,param_6);
                func_0x000107c61170(lVar8);
              }
              func_0x00010006c090(lStack_78,uStack_70);
              goto LAB_101765ca0;
            }
            func_0x0001000b44c0(param_5,param_6);
          }
LAB_101765c0c:
          lVar4 = param_3;
          func_0x000107c5ee20();
          func_0x000107c5ee20(param_1,param_2);
          lVar7 = lVar4;
          lVar9 = param_1;
          func_0x000107c31270(lVar4,param_1,0);
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          func_0x000107c61170(param_1);
          if (lVar7 != 0) {
            lVar4 = lVar7;
            func_0x000107c5ee30(lVar7);
            func_0x0001000b44c0(param_3,param_4);
            func_0x000107c61170(lVar7);
            goto LAB_101765ca0;
          }
        }
      }
      else if ((long)(int)param_3 != param_3 >> 0x20) goto LAB_101765b8c;
    }
    else if ((uVar11 == 2) && (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 0x18)))
    goto LAB_101765b8c;
    func_0x0001000b44c0();
  }
  lVar4 = 0;
  lVar9 = -0x1000000000000000;
LAB_101765ca0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(lVar4);
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar9);
  return;
}



/* Entry: 101765fc4; end: 101765ff3;  */

/* WARNING: Possible PIC construction at 0x000101765fdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101765fe0) */

void FUN_101765fc4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 101765ff4; end: 101766203;  */

undefined1  [16]
FUN_101765ff4(long param_1,long param_2,long param_3,ulong param_4,long param_5,ulong param_6)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  func_0x000107c5ee08(param_3,param_4,0);
  if (param_4 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_4 >> 0x20);
    uVar3 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar3 == 0) {
        if ((param_4 & 0xff000000000000) != 0) {
LAB_101766068:
          if (param_6 >> 0x3c < 0xf) {
            uVar1 = (uint)(param_6 >> 0x20);
            uVar3 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar3 == 0) {
                if ((param_6 & 0xff000000000000) == 0) {
                  func_0x0001000b44c0(param_5,param_6);
                  goto LAB_101766074;
                }
              }
              else {
                lVar4 = (long)(int)param_5;
                lVar5 = param_5 >> 0x20;
LAB_101766114:
                if (lVar4 == lVar5) goto LAB_101766074;
                func_0x00010006c00c(param_5,param_6);
              }
              func_0x000107c5ee20(param_1,param_2);
              lVar4 = param_3;
              func_0x000107c5ee20(param_3,param_4);
              lVar5 = param_5;
              func_0x000107c5ee20(param_5,param_6);
              lVar2 = param_1;
              param_2 = lVar4;
              func_0x000107c2c4c4(param_1,lVar4,lVar5,1,0);
              func_0x000107c61170(param_1);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              if (lVar2 != 0) {
                param_1 = lVar2;
                func_0x000107c5ee30(lVar2);
                func_0x0001000b44c0(param_3,param_4);
                func_0x0001000b44c0(param_5,param_6);
                func_0x000107c61170(lVar2);
                goto LAB_1017660a4;
              }
              func_0x0001000b44c0(param_3,param_4);
            }
            else {
              if (uVar3 == 2) {
                lVar4 = *(long *)(param_5 + 0x10);
                lVar5 = *(long *)(param_5 + 0x18);
                goto LAB_101766114;
              }
              func_0x0001000b44c0(param_5,param_6);
            }
          }
LAB_101766074:
          func_0x0001000b44c0();
          param_1 = 0;
          param_2 = -0x1000000000000000;
          goto LAB_1017660a4;
        }
      }
      else if ((long)(int)param_3 != param_3 >> 0x20) goto LAB_101766068;
    }
    else if ((uVar3 == 2) && (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 0x18)))
    goto LAB_101766068;
    func_0x0001000b44c0();
  }
  func_0x00010006c00c(param_1,param_2);
LAB_1017660a4:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 101766204; end: 10176620b;  */

void FUN_101766204(undefined8 param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if ((param_3 & 0xff00) == 0x100) {
    (*pcVar1)();
    return;
  }
  func_0x00010447be14(0);
  func_0x000107c610f8();
  uVar2 = (ulong)(param_3 & 1);
  func_0x00010447bd50(uVar2,0);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10176620c; end: 101766267;  */

void FUN_10176620c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x00010447aa4c(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(unaff_x20 +
              (*(long *)(*(long *)(lVar1 + -8) + 0x40) +
               (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)))(7,0,0x102);
  return;
}



/* Entry: 101766268; end: 101766287;  */

void FUN_101766268(long param_1,long param_2)

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



/* Entry: 101766288; end: 101766d5f;  */

undefined * FUN_101766288(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uStack_b0;
  long alStack_a8 [8];
  undefined8 uStack_68;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar14 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    uVar4 = 0x112dc78f8;
    func_0x0001000285a8(0x112dc78f8,&UNK_10d9881f0);
    func_0x000107c60498(puVar12,uVar4);
    puVar14 = puVar12;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434(param_1);
  lVar16 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = lVar16 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3;
      uStack_b0 = *(ulong *)(*(long *)(param_1 + 0x30) + uVar6);
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar6);
      uStack_68 = uVar13;
      func_0x000107c61438(uVar13,2);
      uVar4 = 0x112dc7900;
      func_0x0001000285a8(0x112dc7900,&UNK_10d9881f8);
      uVar5 = 0x112dc7908;
      func_0x0001000285a8(0x112dc7908,&UNK_10d988200);
      func_0x000107c6147c(alStack_a8,&uStack_68,uVar4,uVar5,7);
      func_0x000107c6142c(uVar13);
      lVar1 = alStack_a8[0];
      uVar6 = uStack_b0;
      if (alStack_a8[0] == 0) {
        func_0x000107c61574(param_1);
        func_0x000107c6142c(alStack_a8[0]);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101766514);
        (*pcVar2)();
      }
      func_0x000107c6068c(&uStack_b0,*(undefined8 *)(puVar14 + 0x28));
      uVar9 = uVar6;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)(byte)puVar14[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar9 >> 6;
      uVar11 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar14 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff)
      ;
      if (uVar11 == 0) {
        bVar3 = false;
        uVar11 = 0x3f - uVar10 >> 6;
        do {
          uVar9 = uVar7 + 1;
          if ((uVar9 == uVar11) && (bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101766500);
            (*pcVar2)();
          }
          uVar7 = 0;
          if (uVar9 != uVar11) {
            uVar7 = uVar9;
          }
          bVar3 = (bool)(uVar9 == uVar11 | bVar3);
        } while (*(ulong *)(puVar14 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
        uVar11 = ~*(ulong *)(puVar14 + uVar7 * 8 + 0x40);
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar7 << 6;
      }
      else {
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar14 + uVar7 + 0x40) =
           1L << (uVar11 & 0x3f) | *(ulong *)(puVar14 + uVar7 + 0x40);
      *(ulong *)(*(long *)(puVar14 + 0x30) + uVar11 * 8) = uVar6;
      *(long *)(*(long *)(puVar14 + 0x38) + uVar11 * 8) = lVar1;
      *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
    }
    bVar3 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1017664fc);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar16) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  func_0x000107c61574(param_1);
  return puVar14;
}



/* Entry: 101766d60; end: 101766d6f;  */

void FUN_101766d60(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long unaff_x20;
  long alStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  long alStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(alStack_90,*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = alStack_90[0];
  func_0x0001000285a8(0x112da1698,&UNK_10d944c00);
  func_0x000107c6157c(uVar5);
  uVar3 = 0x101767074;
  func_0x0001000823a8(0x101767074,uVar5);
  func_0x0001000285a8(0x112da1680,&UNK_10d944b60);
  func_0x000107c6157c(uVar5);
  uVar4 = 0x10176707c;
  func_0x0001000823a8(0x10176707c,uVar5);
  func_0x000107c6157c(uVar6);
  uVar5 = 0x101767084;
  func_0x0001000823a8(0x101767084,uVar6);
  func_0x0001000285a8(0x112dc7858,&UNK_10d9881b8);
  func_0x000107c6157c(uVar7);
  uVar6 = 0x10176708c;
  func_0x0001000823a8(0x10176708c,uVar7);
  uVar7 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efbb020);
  func_0x000107c4e60c();
  lVar8 = alStack_90[0];
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  lVar12 = 0x112dc78d0;
  func_0x0001000285a8(0x112dc78d0,&UNK_10d9881c0);
  func_0x000107c61538();
  lVar9 = lVar12;
  func_0x0001003d21d8();
  uVar7 = 0x112dc78d8;
  func_0x0001000285a8(0x112dc78d8,&UNK_10d9881c8);
  func_0x000107c61408(lVar12 + 0x20,3,uVar7);
  lVar10 = lVar9;
  func_0x000101766514();
  func_0x000107c6142c(lVar9);
  uVar7 = 0;
  FUN_10176dc9c();
  func_0x000107c613fc();
  FUN_10176d93c();
  FUN_10176d948();
  ppuStack_70 = &PTR_DAT_110406220;
  alStack_90[0] = lVar10;
  lStack_78 = uVar7;
  func_0x0001000285a8(0x112dc78e0,&UNK_10d9881d0);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar10);
  func_0x000107c615f0(lVar8);
  plVar11 = alStack_90;
  FUN_10176e0a0(plVar11,lVar8);
  lVar12 = 0;
  func_0x000101769940();
  lVar9 = lVar12;
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x10) = uVar3;
  lVar13 = 0;
  func_0x000101768858();
  lVar14 = lVar13;
  func_0x000107c613fc();
  *(undefined8 *)(lVar14 + 0x10) = uVar4;
  lVar15 = lVar13;
  func_0x000107c613fc(lVar13,0x18,7);
  *(undefined8 *)(lVar15 + 0x10) = uVar5;
  lVar16 = 0;
  func_0x000101769208();
  lVar17 = lVar16;
  func_0x000107c613fc();
  *(undefined8 *)(lVar17 + 0x10) = uVar4;
  ppuStack_70 = &PTR_DAT_110405840;
  ppuStack_98 = &PTR_DAT_110405340;
  ppuStack_c0 = &PTR_DAT_110405340;
  ppuStack_e8 = &PTR_DAT_110405678;
  lVar18 = 0;
  alStack_108[0] = lVar17;
  lStack_f0 = lVar16;
  alStack_e0[0] = lVar15;
  lStack_c8 = lVar13;
  alStack_b8[0] = lVar14;
  lStack_a0 = lVar13;
  alStack_90[0] = lVar9;
  lStack_78 = lVar12;
  FUN_101762570();
  lVar13 = lVar18;
  func_0x000107c613fc();
  func_0x000100cbca60(alStack_90,lVar13 + 0x10);
  func_0x000100cbca60(alStack_b8,lVar13 + 0x38);
  func_0x000100cbca60(alStack_e0,lVar13 + 0x60);
  func_0x000100cbca60(alStack_108,lVar13 + 0x88);
  *(long *)(lVar13 + 0xb0) = lVar8;
  lVar19 = 0;
  func_0x00010176140c();
  lVar16 = lVar19;
  func_0x000107c613fc();
  *(undefined **)(lVar16 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(long *)(lVar16 + 0x18) = lVar8;
  lVar20 = 0;
  func_0x000101762f24();
  lVar21 = lVar20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar21 + 0x10) = uVar6;
  lVar22 = 0;
  func_0x0001017699b4();
  lVar23 = lVar22;
  func_0x000107c613fc();
  func_0x000107c615f4(lVar8,2);
  func_0x000107c61580(uVar4,2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(lVar9);
  func_0x000107c6157c(lVar14);
  func_0x000107c6157c(lVar15);
  func_0x000107c6157c(lVar17);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(lVar13);
  func_0x000107c6157c(lVar21);
  func_0x000107c6157c(lVar23);
  func_0x000100083b20(alStack_90);
  lVar12 = alStack_90[0];
  lVar24 = alStack_90[0];
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  if (lVar24 != 0) {
    uVar7 = 0;
    FUN_101765540();
    lVar12 = lVar24;
    func_0x000107c614f0();
    alStack_108[0] = lVar23;
    alStack_e0[0] = lVar21;
    alStack_b8[0] = lVar13;
    func_0x000107c615f0(lVar8);
    func_0x000107c6157c(plVar11);
    func_0x000107c6157c(lVar16);
    plVar25 = plVar11;
    FUN_101765670(plVar11,alStack_b8,lVar16,alStack_e0,alStack_108,lVar24,lVar8,uVar7,lVar19,lVar22,
                  lVar18,lVar20,lVar12,&PTR_DAT_110404f50,&PTR_DAT_1104058a0,&PTR_DAT_110404f70,
                  &PTR_DAT_110404f88);
    param_1[3] = uVar7;
    param_1[4] = &PTR_DAT_110405130;
    func_0x000107c61574(lVar17);
    func_0x000107c61574(lVar13);
    func_0x000107c61574(lVar16);
    func_0x000107c61574(lVar21);
    func_0x000107c61574(lVar23);
    *param_1 = plVar25;
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c615e8(lVar8);
    func_0x000107c61574(lVar10);
    func_0x000107c61574(plVar11);
    func_0x000107c61574(lVar9);
    func_0x000107c61574(lVar14);
    func_0x000107c61574(lVar15);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101766d60);
  (*pcVar2)();
}



/* Entry: 101766d70; end: 101766fff;  */

void FUN_101766d70(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    *param_1 = lVar3;
    return;
  }
  func_0x0001048d9980(0xd000000000000031,0x800000010efbb100);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101766e0c);
  (*pcVar1)();
}



/* Entry: 101767000; end: 10176704b;  */

void FUN_101767000(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  func_0x000100083b20(auStack_48);
  func_0x0001002123c8(0);
  func_0x000107c610f8();
  puVar1 = auStack_48;
  func_0x00010447bee8();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10176704c; end: 101767093;  */

void FUN_10176704c(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  func_0x000100083b20(auStack_48);
  func_0x0001002123c8(0);
  func_0x000107c610f8();
  puVar1 = auStack_48;
  func_0x00010447bee8();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 101767094; end: 101767113;  */

undefined1  [16] FUN_101767094(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_88 [40];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb58(auStack_88,param_1,param_2);
  uVar5 = param_3;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      puVar4 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar5 * 0x18);
      uVar1 = *puVar4;
      uVar6 = puVar4[2];
      if (((uVar1 == param_1 && puVar4[1] == param_2) ||
          (func_0x000107c605b8(uVar1,puVar4[1],param_1,param_2,0), (uVar1 & 1) != 0)) &&
         ((int)uVar6 == (int)param_3)) {
        uVar2 = 1;
        goto LAB_10176728c;
      }
      uVar5 = uVar5 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
LAB_10176728c:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 101767114; end: 1017671d3;  */

undefined1  [16] FUN_101767114(long *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c60690(*param_1);
  puVar1 = auStack_78;
  func_0x000107c602d0();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar4 = (ulong)puVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    lVar5 = *param_1;
    do {
      FUN_1017614e0(*(long *)(unaff_x20 + 0x30) + uVar4 * 0x30,&lStack_90);
      if (lStack_90 == lVar5) {
        puVar1 = auStack_88;
        func_0x000107c602c8(puVar1,param_1 + 1);
        FUN_101761478(&lStack_90);
        if (((ulong)puVar1 & 1) != 0) {
          uVar2 = 1;
          goto LAB_10176736c;
        }
      }
      else {
        FUN_101761478(&lStack_90);
      }
      uVar4 = uVar4 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
LAB_10176736c:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1017671d4; end: 10176738f;  */

undefined1  [16] FUN_1017671d4(ulong param_1,ulong param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0) {
    do {
      puVar4 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_4 * 0x18);
      uVar1 = *puVar4;
      uVar5 = puVar4[2];
      if (((uVar1 == param_1 && puVar4[1] == param_2) ||
          (func_0x000107c605b8(uVar1,puVar4[1],param_1,param_2,0), (uVar1 & 1) != 0)) &&
         ((int)uVar5 == param_3)) {
        uVar2 = 1;
        goto LAB_10176728c;
      }
      param_4 = param_4 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
LAB_10176728c:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 101767390; end: 1017673f3;  */

void FUN_101767390(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1017673f4; end: 1017674fb;  */

undefined * FUN_1017673f4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dc75c8,&UNK_10d987fc8);
    puVar2 = puVar6;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      uVar4 = 0;
      func_0x000101767544(param_1);
      puVar3 = &uStack_78;
      FUN_101767114();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1017674f8);
        (*pcVar1)();
      }
      uVar4 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) =
           *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 0x30);
      puVar5[3] = uStack_60;
      puVar5[2] = uStack_68;
      puVar5[5] = uStack_50;
      puVar5[4] = uStack_58;
      puVar5[1] = uStack_70;
      *puVar5 = uStack_78;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + (long)puVar3 * 8) = uStack_48;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1017674fc);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      puVar6 = puVar6 + -1;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 1017674fc; end: 101767593;  */

undefined8 FUN_1017674fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dc78f0;
  func_0x0001000285a8(0x112dc78f0,&UNK_10d9881e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101767594; end: 1017675fb;  */

void FUN_101767594(void)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c6157c(uVar1);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  func_0x00010058d43c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1017675fc; end: 10176761b;  */

void FUN_1017675fc(void)

{
  func_0x000107c61168(&PTR_PTR_112dc7958);
  return;
}



/* Entry: 10176761c; end: 10176764f;  */

undefined1  [16] FUN_10176761c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long *unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(*unaff_x20 + 0x10);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*unaff_x20 + 0x18));
  return auVar2;
}



/* Entry: 101767650; end: 101767caf;  */

long FUN_101767650(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long extraout_x12;
  code *pcVar15;
  undefined8 unaff_x20;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 auStack_140 [8];
  long lStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long alStack_80 [2];
  
  lVar3 = 0;
  uStack_d8 = param_4;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar3 + -8);
  lVar18 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = auStack_140 + -(lVar18 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (long)puVar21 - extraout_x12;
  alStack_80[0] = 0;
  uVar16 = param_1;
  func_0x000107c4e250();
  func_0x000107c61180();
  uVar19 = uVar16;
  if (uVar16 == 0) {
    func_0x000107c5fc54();
    uVar19 = uVar16;
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar16);
  }
  puVar4 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  func_0x000107c47d08();
  puStack_120 = puVar4;
  func_0x000107c61170(uVar19);
  puVar4 = PTR_PTR_1126b1378;
  func_0x000107c61168();
  func_0x000107c4c950(param_2);
  func_0x000107c4ed5c();
  func_0x000107c61180();
  uVar16 = param_1;
  puStack_118 = puVar4;
  func_0x000107c5d09c(param_1);
  func_0x000107c5ee80(lVar20,(double)uVar16 * 60.0);
  uVar16 = param_1;
  func_0x000107c404cc();
  func_0x000107c61180();
  puVar4 = &UNK_110405360;
  uStack_e0 = uVar16;
  func_0x000107c613fc(&UNK_110405360,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,unaff_x20);
  pcStack_f0 = *(code **)(lVar17 + 0x10);
  (*pcStack_f0)(puVar21,lVar20,lVar3);
  uVar16 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar22 = uVar16 + 0x38 & (uVar16 ^ 0xffffffffffffffff);
  uVar19 = lVar18 + uVar22 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_110405388;
  uStack_130 = param_2;
  puStack_110 = puVar21;
  uStack_100 = uVar22;
  uStack_f8 = uVar19;
  func_0x000107c613fc(&UNK_110405388,uVar19 + 0x18,uVar16 | 7);
  puVar8 = puStack_118;
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(ulong *)(puVar5 + 0x18) = param_1;
  *(long **)(puVar5 + 0x20) = alStack_80;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  *(undefined **)(puVar5 + 0x30) = puStack_118;
  pcStack_108 = *(code **)(lVar17 + 0x20);
  lStack_138 = lVar17;
  lStack_d0 = lVar20;
  (*pcStack_108)(puVar5 + uVar22,puVar21,lVar3);
  uVar1 = uStack_d8;
  puVar9 = puStack_120;
  *(undefined **)(puVar5 + uVar19) = puStack_120;
  *(undefined8 *)(puVar5 + uVar19 + 8) = param_3;
  *(undefined8 *)((long)(puVar5 + uVar19 + 8) + 8) = uStack_d8;
  puVar4 = &UNK_1104053b0;
  func_0x000107c613fc(&UNK_1104053b0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101768898;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  pcStack_90 = (code *)0x101768b18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_100de6bdc;
  puStack_98 = &UNK_1104053c8;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4();
  puVar10 = puStack_88;
  ppuStack_e8 = ppuVar6;
  func_0x000107c61174();
  uVar7 = uStack_130;
  uStack_128 = param_1;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  puStack_118 = puVar4;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar10);
  puVar4 = &UNK_110405360;
  func_0x000107c613fc(&UNK_110405360,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,unaff_x20);
  puVar21 = puStack_110;
  (*pcStack_f0)(puStack_110,lStack_d0,lVar3);
  puVar10 = &UNK_110405400;
  func_0x000107c613fc(&UNK_110405400,uVar19 + 0x18,uVar16 | 7);
  uVar16 = uStack_128;
  *(undefined **)(puVar10 + 0x10) = puVar4;
  *(long **)(puVar10 + 0x18) = alStack_80;
  *(undefined8 *)(puVar10 + 0x20) = uVar7;
  *(ulong *)(puVar10 + 0x28) = uStack_128;
  *(undefined **)(puVar10 + 0x30) = puVar8;
  (*pcStack_108)(puVar10 + uStack_100,puVar21,lVar3);
  *(undefined **)(puVar10 + uStack_f8) = puVar9;
  *(undefined8 *)(puVar10 + uVar19 + 8) = param_3;
  *(undefined8 *)((long)(puVar10 + uVar19 + 8) + 8) = uVar1;
  puVar4 = &UNK_110405428;
  func_0x000107c613fc(&UNK_110405428,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101768944;
  *(undefined **)(puVar4 + 0x18) = puVar10;
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_1017689d4;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_101380a90;
  puStack_98 = &UNK_110405440;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4();
  puVar2 = puStack_88;
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar2);
  pcStack_90 = FUN_1017685c8;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = puVar14;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_101768ad8;
  puStack_98 = &UNK_110405468;
  ppuVar12 = &puStack_b0;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_88);
  pcStack_90 = (code *)0x1017685f0;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = puVar14;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x101768adc;
  puStack_98 = &UNK_110405490;
  ppuVar13 = &puStack_b0;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_88);
  uVar16 = uStack_e0;
  ppuVar6 = ppuStack_e8;
  func_0x000107c4c5ac(uStack_e0);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar16);
  lVar17 = alStack_80[0];
  if (alStack_80[0] == 0) {
    func_0x0001048d9980(0xd00000000000002a,0x800000010efbb140);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x101767cb0);
    (*pcVar15)();
  }
  pcVar15 = *(code **)(lStack_138 + 8);
  func_0x000107c615f0(alStack_80[0]);
  (*pcVar15)(lStack_d0,lVar3);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  lVar3 = alStack_80[0];
  func_0x000107c61574(puVar5);
  func_0x000107c615e8(lVar3);
  puVar5 = puStack_118;
  puVar14 = puStack_118;
  func_0x000107c61544(puStack_118,"",0x5e,0x2c,0xd,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x101767c84);
    (*pcVar15)();
  }
  puVar5 = puVar4;
  func_0x000107c61544(puVar4,"",0x5e,0x4f,0x1c,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    uVar16 = 0;
    func_0x000107c61544(0,"",0x5e,0x62,0x1b,1);
    if ((uVar16 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x101767c8c);
      (*pcVar15)();
    }
    uVar16 = 0;
    func_0x000107c61544(0,"",0x5e,100,0x25,1);
    if ((uVar16 & 1) == 0) {
      return lVar17;
    }
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x101767c90);
    (*pcVar15)();
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x101767c88);
  (*pcVar15)();
}



/* Entry: 101767cb0; end: 1017685c7;  */

void FUN_101767cb0(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_140;
  long alStack_138 [3];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar14 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - extraout_x12;
  lStack_c0 = lVar11;
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uStack_e8 = param_6;
    uStack_e0 = param_7;
    puStack_d8 = param_5;
    lStack_c8 = param_3;
    func_0x000107c5d09c(param_4);
    puVar3 = PTR_PTR_1126b1058;
    func_0x000107c610f8();
    uVar9 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar4 = 0x6567616d69;
    uVar10 = 0xe500000000000000;
    func_0x000107c5fadc(0x6567616d69,0xe500000000000000);
    func_0x000107c46d48();
    func_0x000107c61170(uVar9);
    func_0x000107c61170();
    func_0x00010011df08();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar10);
    }
    puVar5 = PTR_PTR_1126b1050;
    func_0x000107c610f8(PTR_PTR_1126b1050);
    func_0x000107c61174();
    func_0x000107c5fadc(param_1);
    *(undefined **)(lVar11 + -0x10) = puVar3;
    *(undefined1 *)(lVar11 + -0x18) = 0;
    *(long *)(lVar11 + -0x20) = lVar4;
    func_0x000107c4915c(puVar5);
    puStack_f0 = puVar3;
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
    lVar4 = param_4;
    func_0x000107c427d4();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar12 = 0;
      lStack_d0 = 0;
    }
    else {
      lVar12 = lVar4;
      func_0x000107c5faec();
      lStack_d0 = param_2;
      func_0x000107c61170(lVar4);
    }
    func_0x000107c427bc();
    func_0x000107c61180();
    if (param_4 == 0) {
      lVar4 = 0;
      param_2 = 0;
    }
    else {
      lVar4 = param_4;
      func_0x000107c5faec();
      func_0x000107c61170(param_4);
    }
    uStack_108 = param_11;
    uStack_120 = param_10;
    uStack_110 = param_9;
    lVar6 = 0;
    func_0x000107c5eea4();
    lVar2 = lStack_c0;
    lVar13 = *(long *)(lVar6 + -8);
    (**(code **)(lVar13 + 0x10))(lStack_c0,param_8,lVar6);
    (**(code **)(lVar13 + 0x38))(lVar2,0,1,lVar6);
    func_0x000107c61174(puVar5);
    func_0x000100083b20(&uStack_88);
    uStack_f8 = uStack_88;
    lStack_100 = 0;
    if (lStack_d0 != 0) {
      lStack_100 = lVar12;
    }
    lVar12 = -0x2000000000000000;
    if (lStack_d0 != 0) {
      lVar12 = lStack_d0;
    }
    func_0x000107c61434();
    func_0x000107c5fadc(lStack_100,lVar12);
    func_0x000107c6142c(lVar12);
    lStack_118 = 0;
    if (param_2 != 0) {
      lStack_118 = lVar4;
    }
    lVar4 = -0x2000000000000000;
    if (param_2 != 0) {
      lVar4 = param_2;
    }
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(lStack_118,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x0001009f0578(lVar2,lVar14);
    lVar4 = lVar14;
    (**(code **)(lVar13 + 0x30))(lVar14,1,lVar6);
    lVar12 = 0;
    if ((int)lVar4 != 1) {
      func_0x000107c5ee70();
      (**(code **)(lVar13 + 8))(lVar14,lVar6);
      lVar12 = lVar4;
    }
    puVar3 = &UNK_110405360;
    func_0x000107c613fc(&UNK_110405360,0x18,7);
    lVar4 = lStack_c8;
    func_0x000107c61644(puVar3 + 0x10,lStack_c8);
    puVar7 = &UNK_110405568;
    func_0x000107c613fc(&UNK_110405568,0x38,7);
    uVar1 = uStack_e8;
    uVar10 = uStack_108;
    uVar9 = uStack_110;
    *(undefined **)(puVar7 + 0x10) = puVar3;
    *(undefined8 *)(puVar7 + 0x18) = uStack_e8;
    *(undefined8 *)(puVar7 + 0x20) = uStack_110;
    *(undefined8 *)(puVar7 + 0x28) = uStack_120;
    *(undefined8 *)(puVar7 + 0x30) = uStack_108;
    pcStack_98 = FUN_101768a58;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100f17820;
    puStack_a0 = &UNK_110405580;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4();
    puVar3 = puStack_90;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar9);
    func_0x000107c6157c(uVar10);
    func_0x000107c61574(puVar3);
    *(long *)(lVar11 + -0x18) = lVar12;
    *(undefined ***)(lVar11 + -0x10) = ppuVar8;
    *(undefined2 *)(lVar11 + -0x20) = 0;
    uVar9 = uStack_f8;
    lVar14 = lStack_100;
    lVar11 = lStack_118;
    uVar10 = uStack_f8;
    func_0x000107c42260();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c6142c(lStack_d0);
    func_0x000107c6142c(param_2);
    func_0x000107c61574(lVar4);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puStack_f0);
    func_0x0001000d1dcc(lStack_c0);
    uVar9 = *puStack_d8;
    *puStack_d8 = uVar10;
    func_0x000107c615e8(uVar9);
  }
  return;
}



/* Entry: 1017685c8; end: 101768617;  */

void FUN_1017685c8(void)

{
  code *pcVar1;
  
  func_0x0001048d9980(0xd000000000000030,0x800000010efbb1b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017685f0);
  (*pcVar1)();
}



/* Entry: 101768618; end: 101768777;  */

void FUN_101768618(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  ppuVar2 = &puStack_b0;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_1 == 0) {
      func_0x000100083b20(&uStack_80);
      func_0x000107c613fc(param_8,0x28,7);
      *(code **)(param_8 + 0x10) = param_6;
      *(undefined8 *)(param_8 + 0x18) = param_7;
      *(undefined8 *)(param_8 + 0x20) = param_2;
      uStack_90 = param_9;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100f17d9c;
      uStack_98 = param_10;
      lStack_88 = param_8;
      func_0x000107c60bc4(&puStack_b0);
      lVar1 = lStack_88;
      func_0x000107c6157c(param_7);
      func_0x000107c61174(param_2);
      func_0x000107c61574(lVar1);
      func_0x000107c50784(uStack_80);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c61574(param_3);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(uStack_80);
    }
    else {
      (*param_6)(0,0,0x102);
      func_0x000107c61574(param_3);
    }
  }
  return;
}



/* Entry: 101768778; end: 101768833;  */

/* WARNING: Possible PIC construction at 0x0001017687f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017687f8) */

void FUN_101768778(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == 0) {
    (*param_2)();
    return;
  }
  lVar1 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  func_0x000107c4b76c(param_4);
  func_0x00010006c00c(lVar1,pcVar2);
  (*param_2)(lVar1,pcVar2,param_4 == 1);
  uVar3 = (uint)((ulong)pcVar2 >> 0x3e);
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      return;
    }
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)((ulong)pcVar2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101768834; end: 101768877;  */

void FUN_101768834(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101768878; end: 101768897;  */

void FUN_101768878(void)

{
  FUN_101767650();
  return;
}



/* Entry: 101768898; end: 101768927;  */

void FUN_101768898(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_101767cb0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),unaff_x20 + uVar4,
                *(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1]);
  return;
}



/* Entry: 101768928; end: 101768943;  */

void FUN_101768928(long param_1,long param_2)

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



/* Entry: 101768944; end: 1017689d3;  */

void FUN_101768944(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  func_0x0001017681e4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      unaff_x20 + uVar4,*(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1]);
  return;
}



/* Entry: 1017689d4; end: 1017689f3;  */

void FUN_1017689d4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1017689f4; end: 101768a1b;  */

void FUN_1017689f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101768618(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),&UNK_110405518,0x101768a10,&UNK_110405530);
  return;
}



/* Entry: 101768a1c; end: 101768a57;  */

void FUN_101768a1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101768a58; end: 101768a73;  */

void FUN_101768a58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101768618(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),&UNK_1104055b8,0x101768b1c,&UNK_1104055d0);
  return;
}



/* Entry: 101768a74; end: 101768ad7;  */

void FUN_101768a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  FUN_101768618(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),param_3,param_4,param_5);
  return;
}



/* Entry: 101768ad8; end: 101768b1f;  */

void FUN_101768ad8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101768b20; end: 101768cb3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101768b20(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101768cb4; end: 101768e97;  */

void FUN_101768cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uVar1 = param_2;
  uVar4 = param_3;
  FUN_101769248();
  uVar3 = uVar1;
  func_0x000100083b20(&uStack_78);
  FUN_1017693e8(param_1);
  puVar2 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c4766c(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar5 = &UNK_110405698;
  func_0x000107c613fc(&UNK_110405698,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = &UNK_1104056c0;
  func_0x000107c613fc(&UNK_1104056c0,0x38,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_2;
  *(undefined8 *)(puVar6 + 0x30) = param_1;
  pcStack_88 = FUN_1017693ac;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100ab47f8;
  puStack_90 = &UNK_1104056d8;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4();
  puVar5 = puStack_80;
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c4fbe8(uStack_78);
  func_0x000107c615e8(uVar1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(uStack_78);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101768e98; end: 101768f57;  */

void FUN_101768e98(undefined8 param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    (*param_4)(4,0,0x102);
  }
  else {
    if ((param_2 & 1) == 0) {
      (*param_4)(5,0,0x102);
    }
    else {
      FUN_101768f58(param_1,param_6,param_4,param_5);
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 101768f58; end: 1017690ff;  */

void FUN_101768f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000100083b20(&uStack_68);
  FUN_1017693e8(param_1);
  puVar3 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(puVar2,puVar5);
  func_0x000107c6142c(puVar5);
  func_0x000107c4766c(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_110405710;
  func_0x000107c613fc(&UNK_110405710,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  uStack_78 = 0x1017693d8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100f17d9c;
  puStack_80 = &UNK_110405728;
  ppuVar4 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_70;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c50784(uStack_68);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c61170(puVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101769100; end: 1017691e3;  */

/* WARNING: Possible PIC construction at 0x0001017691bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017691c0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101769100(ulong param_1,code *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar2 = param_1;
  pcVar3 = param_2;
  func_0x000107c44314();
  if (uVar2 == 0) {
    uVar2 = param_1;
    func_0x000107c30a1c();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar2);
      func_0x000107c44144(param_1);
      func_0x000107c61180();
      func_0x000107c4b76c();
      func_0x00010006c00c(uVar1,pcVar3);
      (*param_2)(uVar1,pcVar3,param_1 == 1);
      uVar4 = (uint)((ulong)pcVar3 >> 0x3e);
      if (uVar4 == 1) {
        uVar1 = (ulong)pcVar3 & 0x3fffffffffffffff;
      }
      else if (uVar4 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar1);
      return;
    }
  }
  (*param_2)();
  return;
}



/* Entry: 1017691e4; end: 101769227;  */

void FUN_1017691e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101769228; end: 101769247;  */

void FUN_101769228(void)

{
  FUN_101768cb4();
  return;
}



/* Entry: 101769248; end: 1017693ab;  */

undefined * FUN_101769248(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b1058;
  func_0x000107c610f8();
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  uVar6 = 0xe000000000000000;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c46d48();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170();
  FUN_1017693e8(param_1);
  uVar2 = uVar4;
  uVar3 = uVar6;
  FUN_1017693e8(param_1);
  puVar5 = PTR_PTR_1126b1050;
  func_0x000107c610f8(PTR_PTR_1126b1050);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c4915c(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  return puVar5;
}



/* Entry: 1017693ac; end: 1017693e7;  */

void FUN_1017693ac(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    (*pcVar2)(4,0,0x102);
  }
  else {
    if ((param_1 & 1) == 0) {
      (*pcVar2)(5,0,0x102);
    }
    else {
      FUN_101768f58(uVar5,uVar3,pcVar2,uVar1);
    }
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 1017693e8; end: 10176960b;  */

undefined1  [16] FUN_1017693e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 auVar11 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar7 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  uStack_70 = 0;
  lStack_68 = 0;
  puVar5 = &UNK_110405760;
  func_0x000107c613fc(&UNK_110405760,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 **)(puVar5 + 0x18) = &uStack_70;
  puVar6 = &UNK_110405788;
  func_0x000107c613fc(&UNK_110405788,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10176960c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x101769650;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101769670;
  puStack_88 = &UNK_1104057a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_1104057d8;
  func_0x000107c613fc(&UNK_1104057d8,0x18,7);
  *(undefined8 **)(puVar8 + 0x10) = &uStack_70;
  puVar9 = &UNK_110405800;
  func_0x000107c613fc(&UNK_110405800,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_1017696f8;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_80 = FUN_101769728;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100de6bdc;
  puStack_88 = &UNK_110405818;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar1);
  func_0x000107c4c704();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  lVar3 = lStack_68;
  uVar2 = uStack_70;
  if (lStack_68 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10176960c);
    (*pcVar4)();
  }
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x66,10,0x1d,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = puVar9;
    func_0x000107c61544(puVar9,"",0x66,0x10,0x1d,1);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar5 & 1) == 0) {
      auVar11._8_8_ = lVar3;
      auVar11._0_8_ = uVar2;
      return auVar11;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101769608);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101769604);
  (*pcVar4)();
}



/* Entry: 10176960c; end: 10176966f;  */

void FUN_10176960c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar2 = puVar1[1];
  if (3.0 <= *(double *)(unaff_x20 + 0x10)) {
    param_1 = param_3;
    param_2 = param_4;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101769670; end: 1017696db;  */

/* WARNING: Possible PIC construction at 0x0001017696c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017696c4) */

void FUN_101769670(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  uVar3 = uVar2;
  func_0x000107c5faec(param_3);
  (*pcVar1)(param_2,uVar2,param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1017696dc; end: 1017696f7;  */

void FUN_1017696dc(long param_1,long param_2)

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



/* Entry: 1017696f8; end: 101769727;  */

void FUN_1017696f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101769728; end: 101769737;  */

void FUN_101769728(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101769738; end: 10176991b;  */

undefined8 FUN_101769738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  puVar1 = &UNK_110405860;
  func_0x000107c613fc(&UNK_110405860,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcStack_58 = FUN_101769980;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100f17d9c;
  puStack_60 = &UNK_110405878;
  ppuVar2 = &puStack_78;
  puStack_50 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_50;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  uVar3 = uStack_48;
  func_0x000107c50788(uStack_48);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(uStack_48);
  return uVar3;
}



/* Entry: 10176991c; end: 10176995f;  */

void FUN_10176991c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101769960; end: 10176997f;  */

void FUN_101769960(void)

{
  FUN_101769738();
  return;
}



/* Entry: 101769980; end: 1017699a3;  */

/* WARNING: Possible PIC construction at 0x0001017698f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017698f4) */

void FUN_101769980(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = param_1;
  pcVar4 = pcVar1;
  func_0x000107c44314();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000107c30a1c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      func_0x000107c44144(param_1);
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c4b76c();
      func_0x000107c61170(param_1);
      func_0x00010006c00c(lVar3,pcVar4);
      (*pcVar1)(lVar3,pcVar4,lVar2 == 1);
      uVar5 = (uint)((ulong)pcVar4 >> 0x3e);
      if (uVar5 != 1) {
        if (uVar5 != 2) {
          return;
        }
        func_0x000107c61574(lVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)((ulong)pcVar4 & 0x3fffffffffffffff);
      return;
    }
  }
  else {
    func_0x000107c44314(param_1);
  }
  (*pcVar1)();
  return;
}



/* Entry: 1017699a4; end: 1017699d3;  */

void FUN_1017699a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1017699d4; end: 1017699df; -[_TtC37SCImageFetchingServicesImplementation34ImageFetchingServiceImplementation prefetchImageWithImageFetchingRequest:completion:] */

void FUN_1017699d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101769dd8(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1017699e0; end: 101769adf;  */

/* WARNING: Possible PIC construction at 0x000101769a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101769aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101769a7c) */
/* WARNING: Removing unreachable block (ram,0x000101769aa4) */

void FUN_1017699e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)PTR_PTR_1126af5d0;
  func_0x000107c61168();
  if (((uint)param_3 & 0xff00) == 0x100) {
    FUN_101769b78();
    puVar2 = (undefined8 *)&UNK_110776d50;
    func_0x000107c613f8(&UNK_110776d50,puVar1,0,0);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(char *)(puVar1 + 2) = (char)param_3;
    func_0x000101765ad4(param_1,param_2,param_3);
    func_0x000107c5ed2c(puVar2);
    func_0x000107c5ed2c();
    puVar1 = puVar2;
  }
  else {
    func_0x000107c5c3c8();
    func_0x000107c61180();
    (*param_4)(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101769ae0; end: 101769aeb; -[_TtC37SCImageFetchingServicesImplementation34ImageFetchingServiceImplementation fetchImageWithImageFetchingRequest:completion:] */

void FUN_101769ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*(code *)0x10176a254)(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101769aec; end: 101769b77;  */

void FUN_101769aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_5)(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101769b78; end: 101769bb7;  */

void FUN_101769b78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc7c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd06544;
  func_0x000107c61520(&UNK_10dd06544,&UNK_110776d50);
  puRam0000000112dc7c38 = puVar1;
  return;
}



/* Entry: 101769bb8; end: 101769c9f;  */

undefined8 FUN_101769bb8(undefined8 param_1)

{
  (*(code *)&DAT_104479378)();
  return param_1;
}



/* Entry: 101769ca0; end: 101769cab;  */

void FUN_101769ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010176a8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10176b29c(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 101769cac; end: 101769ceb;  */

void FUN_101769cac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc7c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d988544;
  func_0x000107c61520(&UNK_10d988544,&UNK_110405ed0);
  puRam0000000112dc7c48 = puVar1;
  return;
}



/* Entry: 101769cec; end: 101769d2b;  */

undefined8 FUN_101769cec(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101769d2c; end: 101769d43;  */

void FUN_101769d2c(void)

{
  FUN_1017699e0();
  return;
}



/* Entry: 101769d44; end: 101769d83;  */

/* WARNING: Possible PIC construction at 0x000101769d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101769d70) */

void FUN_101769d44(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (((param_3 != '\0') && (param_3 != '\x02')) && (param_3 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101769d84; end: 101769d9b;  */

void FUN_101769d84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    uVar2 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    puVar3 = puVar1;
    func_0x000107c51774(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c5ee20(param_1,param_2);
      func_0x000107c51778(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      puVar3 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        func_0x000107c61170(lVar4);
        return;
      }
    }
    FUN_10176c91c(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 101769d9c; end: 101769dd7;  */

undefined8 FUN_101769d9c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1044793c8)(param_2,param_1);
  return param_2;
}



/* Entry: 101769dd8; end: 10176a793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101769dd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  ulong uVar13;
  long extraout_x12;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  code *apcStack_1f0 [4];
  long lStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char cStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  
  lVar5 = 0x112dc7c30;
  apcStack_1f0[3] = (code *)param_2;
  func_0x0001000285a8(0x112dc7c30,&UNK_10d9883a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar9 = (undefined8 *)((long)apcStack_1f0 + lVar2);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar6 + -8);
  lVar17 = *(long *)(lVar16 + 0x40);
  lStack_1c0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar9 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lStack_1d0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  puVar7 = &UNK_110405a10;
  func_0x000107c613fc(&UNK_110405a10,0x18,7);
  *(long *)(puVar7 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  func_0x000107c61174(param_1);
  func_0x000104479ca4(&uStack_180);
  puVar8 = &UNK_110405a38;
  func_0x000107c613fc(&UNK_110405a38,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x10176a8cc;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puStack_1c8 = puVar7;
  func_0x000107c6157c(puVar7);
  lStack_1b0 = lVar6;
  func_0x000107c5eea0(lVar6);
  pcVar15 = (code *)PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_10176b0dc(&uStack_110);
  uVar4 = uStack_100;
  uVar3 = uStack_108;
  uVar1 = uStack_110;
  if (cStack_e8 == '\x01') {
    puVar9 = (undefined8 *)PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar12 = puVar9;
    FUN_101769b78();
    puVar7 = &UNK_110776d50;
    func_0x000107c613f8(&UNK_110776d50,puVar12,0,0);
    puVar12[1] = uStack_108;
    *puVar12 = uStack_110;
    *(undefined1 *)(puVar12 + 2) = uStack_100;
    func_0x000101765ad4(uVar1,uVar3,uVar4);
    puVar11 = puVar7;
    func_0x000107c5ed2c(puVar7);
    puVar10 = puVar11;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar11);
    func_0x000107c614ac(puVar7);
    func_0x000107c42d78(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    (**(code **)(param_3 + 0x10))(param_3,puVar9);
    func_0x000107c61170(puVar9);
    FUN_101769cec(&uStack_110,0x112dc7c40,&UNK_10d988398);
    func_0x000107c61574(puVar8);
    FUN_101769bb8(&uStack_180);
  }
  else {
    *(undefined8 *)((long)apcStack_1f0 + lVar2 + 8) = uStack_108;
    *puVar9 = uStack_110;
    *(undefined8 *)((long)apcStack_1f0 + lVar2 + 0x18) = uStack_f8;
    *(ulong *)((long)apcStack_1f0 + lVar2 + 0x10) = CONCAT71(uStack_ff,uStack_100);
    *(undefined8 *)((long)&lStack_1d0 + lVar2) = uStack_f0;
    lVar6 = lStack_1c0;
    uStack_88 = uStack_178;
    uStack_90 = uStack_180;
    cStack_80 = cStack_170;
    uVar1 = 0;
    if (cStack_170 != '\0') {
      uVar1 = uStack_178;
    }
    apcStack_1f0[1] = *(code **)(lVar16 + 0x10);
    apcStack_1f0[2] = pcVar15;
    lStack_1b8 = lVar16;
    (*apcStack_1f0[1])((long)puVar9 + (long)*(int *)(lVar5 + 0x28),lStack_1b0,lStack_1c0);
    uStack_a8 = uStack_160;
    uStack_b0 = uStack_168;
    uStack_c0 = uStack_118;
    uStack_a0 = uStack_158;
    uStack_d8 = uStack_130;
    uStack_e0 = uStack_138;
    uStack_c8 = uStack_120;
    uStack_d0 = uStack_128;
    *(undefined8 *)((long)&puStack_1c8 + lVar2) = uStack_180;
    *(undefined8 *)((long)&lStack_1c0 + lVar2) = uVar1;
    *(char *)((long)&lStack_1b8 + lVar2) = cStack_170;
    puVar12 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar5 + 0x2c));
    puVar12[1] = uStack_160;
    *puVar12 = uStack_168;
    puVar12[2] = uStack_158;
    puVar12 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar5 + 0x30));
    puVar12[1] = uStack_130;
    *puVar12 = uStack_138;
    puVar12[3] = uStack_120;
    puVar12[2] = uStack_128;
    *(undefined4 *)(puVar12 + 4) = uStack_118;
    func_0x000101769bec(&uStack_90,auStack_1a8);
    func_0x000101769c28(&uStack_b0,auStack_1a8);
    func_0x000101769c64(&uStack_e0,auStack_1a8);
    func_0x000100083b20(auStack_1a8);
    func_0x0001000a8868(auStack_1a8,uStack_190);
    lVar5 = lStack_1d0;
    (*apcStack_1f0[1])(lStack_1d0,lStack_1b0,lVar6);
    uVar13 = (ulong)*(byte *)(lStack_1b8 + 0x50);
    uVar14 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
    puVar7 = &UNK_110405a60;
    func_0x000107c613fc(&UNK_110405a60,uVar14 + lVar17,uVar13 | 7);
    *(undefined8 *)(puVar7 + 0x10) = 0x10176a8d4;
    *(undefined **)(puVar7 + 0x18) = puVar8;
    puVar11 = puVar7 + uVar14;
    (**(code **)(lStack_1b8 + 0x20))(puVar11,lVar5,lVar6);
    pcVar15 = *(code **)(lStack_188 + 8);
    FUN_101769cac();
    func_0x000107c6157c(puVar8);
    puVar12 = puVar9;
    (*pcVar15)(puVar9,0x10176a8c8,puVar7,&UNK_110405ed0,puVar11,uStack_190,lStack_188);
    lVar16 = lStack_1b8;
    pcVar15 = apcStack_1f0[2];
    func_0x000107c61574(puVar7);
    func_0x0001000834e4(auStack_1a8);
    func_0x000107c3d5f8(pcVar15);
    func_0x000107c61574(puVar8);
    FUN_101769bb8(&uStack_180);
    func_0x000107c615e8(puVar12);
    FUN_101769cec(puVar9,0x112dc7c30,&UNK_10d9883a0);
  }
  (**(code **)(lVar16 + 8))(lStack_1b0,lStack_1c0);
  func_0x000107c61574(puStack_1c8);
  return pcVar15;
}



/* Entry: 10176a794; end: 10176a7a3;  */

void FUN_10176a794(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010176a7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10176a7a4; end: 10176a7ef;  */

void FUN_10176a7a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_101769d44(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x000107c6142c();
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10176a7f0; end: 10176a85b;  */

void FUN_10176a7f0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10176a85c; end: 10176a8c3;  */

void FUN_10176a85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010176a8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18),
             unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10176a8c4; end: 10176a8db;  */

void FUN_10176a8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010176a8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10176b558(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10176a8dc; end: 10176b08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10176a8dc(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined1 auVar3 [8];
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x12;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *apcStack_170 [2];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  long lStack_140;
  char acStack_138 [24];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte bStack_100;
  undefined8 uStack_ff;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  char cStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_90;
  undefined8 uStack_88;
  char cStack_80;
  
  lVar4 = 0x112dc7c30;
  func_0x0001000285a8(0x112dc7c30,&UNK_10d9883a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar10 = (undefined8 *)((long)apcStack_170 + lVar2);
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar5 + -8);
  lVar17 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar10 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lStack_140 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  func_0x000107c5eea0(lVar11);
  puVar6 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_10176b0dc(&uStack_110);
  if (cStack_e8 == '\x01') {
    (*param_2)(uStack_110,uStack_108,bStack_100 | 0x100);
    uVar19 = 0x112dc7c40;
    puVar7 = &UNK_10d988398;
    puVar10 = &uStack_110;
  }
  else {
    *puVar10 = uStack_110;
    *(undefined8 *)((long)apcStack_170 + lVar2 + 8) = uStack_108;
    auStack_160[lVar2] = bStack_100;
    *(ulong *)(auStack_158 + lVar2 + 1) = CONCAT17(uStack_f0,uStack_f7);
    *(undefined8 *)(auStack_160 + lVar2 + 1) = uStack_ff;
    *(ulong *)((long)&puStack_150 + lVar2) = CONCAT71(uStack_ef,uStack_f0);
    uStack_88 = param_1[1];
    apcStack_170[0] = (code *)*param_1;
    cVar1 = *(char *)(param_1 + 2);
    uVar19 = 0;
    if (cVar1 != '\0') {
      uVar19 = uStack_88;
    }
    apcStack_170[1] = *(code **)(lVar14 + 0x10);
    auStack_160 = (undefined1  [8])param_3;
    auStack_158 = (undefined1  [8])param_2;
    puStack_150 = puVar6;
    pcStack_90 = apcStack_170[0];
    cStack_80 = cVar1;
    (*apcStack_170[1])((long)puVar10 + (long)*(int *)(lVar4 + 0x28),lVar11,lVar5);
    uVar20 = param_1[4];
    uVar18 = param_1[3];
    uVar12 = param_1[5];
    uStack_d8 = param_1[10];
    uStack_e0 = param_1[9];
    uStack_c8 = param_1[0xc];
    uStack_d0 = param_1[0xb];
    uStack_c0 = *(undefined4 *)(param_1 + 0xd);
    uStack_b0 = uVar18;
    uStack_a8 = uVar20;
    uStack_a0 = uVar12;
    *(code **)(acStack_138 + lVar2 + -0x10) = apcStack_170[0];
    *(undefined8 *)(acStack_138 + lVar2 + -8) = uVar19;
    acStack_138[lVar2] = cVar1;
    puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar4 + 0x2c));
    puVar9[1] = uVar20;
    *puVar9 = uVar18;
    puVar9[2] = uVar12;
    puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar4 + 0x30));
    uVar19 = param_1[9];
    uVar18 = param_1[0xc];
    uVar12 = param_1[0xb];
    puVar9[1] = param_1[10];
    *puVar9 = uVar19;
    puVar9[3] = uVar18;
    puVar9[2] = uVar12;
    *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(param_1 + 0xd);
    func_0x000101769bec(&pcStack_90,acStack_138);
    func_0x000101769c28(&uStack_b0,acStack_138);
    func_0x000101769c64(&uStack_e0,acStack_138);
    func_0x000100083b20(acStack_138);
    func_0x0001000a8868(acStack_138,uStack_120);
    lVar4 = lStack_140;
    (*apcStack_170[1])(lStack_140,lVar11,lVar5);
    uVar13 = (ulong)*(byte *)(lVar14 + 0x50);
    uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
    puVar7 = &UNK_110405a88;
    func_0x000107c613fc(&UNK_110405a88,uVar15 + lVar17,uVar13 | 7);
    auVar3 = auStack_160;
    *(undefined1 (*) [8])(puVar7 + 0x10) = auStack_158;
    *(undefined1 (*) [8])(puVar7 + 0x18) = auStack_160;
    puVar8 = puVar7 + uVar15;
    (**(code **)(lVar14 + 0x20))(puVar8,lVar4,lVar5);
    pcVar16 = *(code **)(lStack_118 + 8);
    FUN_101769cac();
    func_0x000107c6157c(auVar3);
    puVar6 = puStack_150;
    puVar9 = puVar10;
    (*pcVar16)(puVar10,FUN_10176b3d0,puVar7,&UNK_110405ed0,puVar8,uStack_120,lStack_118);
    func_0x000107c61574(puVar7);
    func_0x0001000834e4(acStack_138);
    func_0x000107c3d5f8(puVar6);
    func_0x000107c615e8(puVar9);
    uVar19 = 0x112dc7c30;
    puVar7 = &UNK_10d9883a0;
  }
  FUN_10176b3dc(puVar10,uVar19,puVar7);
  (**(code **)(lVar14 + 8))(lVar11,lVar5);
  return puVar6;
}



/* Entry: 10176b090; end: 10176b0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176b090(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc7c50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10176b0dc; end: 10176b29b;  */

void FUN_10176b0dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  if (*(char *)(unaff_x20 + 2) == '\0') {
    uVar5 = uVar3;
    func_0x000107c61174(uVar3);
    func_0x000107c404cc();
    func_0x000107c61180();
    FUN_10176b958(&puStack_a0,unaff_x20[6],unaff_x20[7],unaff_x20[8]);
    func_0x000107c61170(uVar5);
    FUN_101769d44(uVar3,uVar4,0);
  }
  else if (*(char *)(unaff_x20 + 2) == '\x01') {
    func_0x000107c61174(uVar3);
    uVar4 = uVar3;
    func_0x000107c404cc();
    func_0x000107c61180();
    FUN_10176b958(&puStack_a0,unaff_x20[6],unaff_x20[7],unaff_x20[8]);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
  }
  else {
    uVar10 = unaff_x20[6];
    uVar5 = unaff_x20[7];
    uVar1 = unaff_x20[8];
    uVar6 = uVar3;
    func_0x000107c61174(uVar3);
    FUN_10176bf48(uVar10);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c61168();
    uVar9 = param_3;
    func_0x000107c5fadc(uVar6);
    func_0x000107c6142c(param_3);
    func_0x000107c3abdc();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10176b29c);
      (*pcVar2)();
    }
    puVar8 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    FUN_101769d44(uVar3,uVar4,2);
    uStack_78 = 0;
    puStack_a0 = puVar8;
    uStack_98 = uVar9;
    uStack_88 = uVar5;
    uStack_80 = uVar1;
    uStack_90 = uVar10;
  }
  *param_1 = puStack_a0;
  param_1[1] = uStack_98;
  param_1[2] = uStack_90;
  param_1[3] = uStack_88;
  param_1[4] = uStack_80;
  *(undefined1 *)(param_1 + 5) = uStack_78;
  return;
}



/* Entry: 10176b29c; end: 10176b3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176b29c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  if ((param_4 & 0xff00) == 0x100) {
    (*param_5)(param_2,param_3);
  }
  else {
    uVar3 = (ulong)*(byte *)(param_2 + _DAT_11307d5c0);
    uVar1 = *(undefined1 *)(param_2 + _DAT_11307d5c8);
    func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_7);
    (**(code **)(lVar4 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    func_0x0001044791b4(0);
    func_0x000107c610f8();
    func_0x00010447905c(param_1,uVar3,uVar1);
    (*param_5)();
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10176b3d0; end: 10176b3db;  */

void FUN_10176b3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010176b780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10176b29c(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10176b3dc; end: 10176b41b;  */

undefined8 FUN_10176b3dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10176b41c; end: 10176b54b;  */

void FUN_10176b41c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    uVar2 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    uVar4 = *(undefined8 *)(param_4 + 0x30);
    puVar3 = puVar1;
    func_0x000107c51774(uVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c5ee20(param_1,param_2);
      func_0x000107c51778(uVar4);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      puVar3 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        func_0x000107c61170(param_3);
        return;
      }
    }
    FUN_10176c91c(*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x40));
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10176b54c; end: 10176b557;  */

void FUN_10176b54c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    uVar2 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    puVar3 = puVar1;
    func_0x000107c51774(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c5ee20(param_1,param_2);
      func_0x000107c51778(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      puVar3 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        func_0x000107c61170(lVar4);
        return;
      }
    }
    FUN_10176c91c(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10176b558; end: 10176b6a3;  */

void FUN_10176b558(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  if ((param_4 & 0xff00) == 0x100) {
    (*param_5)(param_2,param_3);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined1 *)(param_2 + 0x19);
    uVar2 = *(undefined1 *)(param_2 + 0x18);
    func_0x00010176b784(uVar4,uVar1,uVar2);
    func_0x000107c61180();
    func_0x000107c5eea0(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_7);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    func_0x000104478f90(0);
    func_0x000107c610f8();
    uVar5 = uVar4;
    func_0x000104478dfc(param_1,uVar4,uVar2,uVar1);
    (*param_5)();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10176b6a4; end: 10176b70f;  */

void FUN_10176b6a4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10176b710; end: 10176b71b;  */

void FUN_10176b710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010176b780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10176b558(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10176b71c; end: 10176b897;  */

void FUN_10176b71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010176b780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18),
             unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10176b898; end: 10176b8f7; -[_TtC37SCImageFetchingServicesImplementation34ImageFetchingServiceImplementation init] */

void FUN_10176b898(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImageFetchingServicesImplementation.ImageFetchingServiceImplementation",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176b8c4);
  (*pcVar1)();
}



/* Entry: 10176b8f8; end: 10176b907; -[_TtC37SCImageFetchingServicesImplementation34ImageFetchingServiceImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176b8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc7c50));
  return;
}



/* Entry: 10176b908; end: 10176b947;  */

void FUN_10176b908(void)

{
  FUN_10176a8dc();
  return;
}


