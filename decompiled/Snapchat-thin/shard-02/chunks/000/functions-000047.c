/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10173de00; end: 10173e077;  */

undefined * FUN_10173de00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar18 = uVar18 - 1 & uVar18;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar17 << 6;
      lVar1 = *(long *)(param_1 + 0x38) + uVar13 * 0x40;
      lVar16 = *(long *)(lVar1 + 0x10);
      if (lVar16 != 0) {
        uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x30) + uVar13 * 4);
        uVar2 = *(undefined8 *)(lVar1 + 0x18);
        uVar4 = *(undefined8 *)(lVar1 + 0x20);
        uVar3 = *(undefined8 *)(lVar1 + 0x28);
        uVar5 = *(undefined8 *)(lVar1 + 0x30);
        uVar11 = *(undefined8 *)(lVar1 + 0x38);
        uVar13 = *(ulong *)(puVar7 + 0x10);
        if (uVar13 < *(ulong *)(puVar7 + 0x18)) {
          FUN_1017406b4();
          func_0x00010006c00c(uVar5,uVar11);
        }
        else {
          FUN_1017406b4();
          func_0x00010006c00c(uVar5,uVar11);
          func_0x0001017440f0(uVar13 + 1,1);
        }
        uVar10 = *(ulong *)(puVar7 + 0x28);
        func_0x000107c60684(uVar10,uVar6,4);
        uVar15 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
        uVar10 = uVar10 & (uVar15 ^ 0xffffffffffffffff);
        uVar14 = uVar10 >> 6;
        uVar13 = -1L << (uVar10 & 0x3f) &
                 (*(ulong *)(puVar7 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar13 == 0) {
          bVar9 = false;
          uVar13 = 0x3f - uVar15 >> 6;
          do {
            uVar10 = uVar14 + 1;
            if ((uVar10 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10173e078);
              (*pcVar8)();
            }
            uVar14 = 0;
            if (uVar10 != uVar13) {
              uVar14 = uVar10;
            }
            bVar9 = (bool)(uVar10 == uVar13 | bVar9);
          } while (*(ulong *)(puVar7 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
          uVar13 = ~*(ulong *)(puVar7 + uVar14 * 8 + 0x40);
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar14 << 6;
        }
        else {
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar7 + uVar14 + 0x40) =
             1L << (uVar13 & 0x3f) | *(ulong *)(puVar7 + uVar14 + 0x40);
        *(undefined4 *)(*(long *)(puVar7 + 0x30) + uVar13 * 4) = uVar6;
        *(long *)(*(long *)(puVar7 + 0x38) + uVar13 * 8) = lVar16;
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        func_0x0001017406e8(uVar2,uVar4,uVar3);
        func_0x00010006c090(uVar5,uVar11);
      }
    }
    bVar9 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10173e074);
      (*pcVar8)();
    }
    if ((long)(uVar12 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_1);
  return puVar7;
}



/* Entry: 10173e078; end: 10173e0e3;  */

void FUN_10173e078(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10173e0e4; end: 10173e18b;  */

uint FUN_10173e0e4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x0001005923b4();
  uVar1 = (uint)uVar2;
  FUN_10173c190();
  func_0x000100083b20(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))(param_2,param_1,uVar1 & 0x101,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return uVar1 & 0x101;
}



/* Entry: 10173e18c; end: 10173e2ef;  */

void FUN_10173e18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  
  lVar2 = 0x112dc5360;
  uStack_a0 = param_3;
  uStack_98 = param_1;
  func_0x0001000285a8(0x112dc5360,&UNK_10d9850a0);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_a0 - extraout_x8;
  lVar3 = 0x112dc5490;
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  uVar1 = *(undefined4 *)
           PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20;
  pcVar5 = *(code **)(lVar8 + 0x68);
  lStack_80 = param_2;
  (*pcVar5)(lVar6,uVar1,lVar2);
  func_0x000107c5fd48(lVar7,&UNK_110732590,lVar6,FUN_101740bac,auStack_90,&UNK_110732590);
  lStack_80 = lVar7;
  (*pcVar5)(lVar6,uVar1,lVar2);
  func_0x000107c5fd48(uStack_98,&UNK_110732590,lVar6,FUN_101740b80,auStack_90,&UNK_110732590);
  (**(code **)(lVar4 + 8))(lVar7,lVar3);
  return;
}



/* Entry: 10173e2f0; end: 10173e3c3;  */

void FUN_10173e2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_10173f5bc(param_1,param_2,uVar1,param_3);
  if (param_1 != 0) {
    FUN_10173d5c0();
    func_0x0001017406e8(param_1,param_2,uVar1);
  }
  return;
}



/* Entry: 10173e3c4; end: 10173e4e7;  */

void FUN_10173e3c4(undefined8 param_1,long param_2,ulong param_3)

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
    lVar4 = 0;
    FUN_10174031c();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1017438d8();
    }
    lVar5 = *(long *)(lVar3 + 0x30);
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * param_2,lVar4);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    FUN_10174031c();
    lVar6 = *(long *)(lVar4 + -8);
    FUN_10173a69c(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    FUN_10173e56c(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010173e4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 10173e4e8; end: 10173e56b;  */

undefined8 FUN_10173e4e8(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010149a22c();
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101743b38();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x00010173e7dc(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 10173e56c; end: 10173eabb;  */

void FUN_10173e56c(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_80 [8];
  code *pcStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar13 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uStack_70 = uVar13 + 1 & uVar6;
    lVar8 = *(long *)(lVar12 + 0x48);
    pcStack_78 = *(code **)(lVar12 + 0x10);
    lStack_68 = lVar12;
    do {
      lVar12 = lVar8 * uVar14;
      puVar4 = puVar11;
      (*pcStack_78)(puVar11,*(long *)(param_2 + 0x30) + lVar12,lVar3);
      uVar13 = *(ulong *)(param_2 + 0x28);
      func_0x00010085581c();
      func_0x000107c5fa4c(uVar13,lVar3,puVar4);
      (**(code **)(lStack_68 + 8))(puVar11,lVar3);
      uVar13 = uVar13 & uVar6;
      if ((long)param_1 < (long)uStack_70) {
        if (uStack_70 <= uVar13 || (long)uVar13 <= (long)param_1) {
LAB_10173e6d8:
          lVar7 = lVar8 * param_1;
          uVar13 = *(long *)(param_2 + 0x30) + lVar7;
          lVar5 = *(long *)(param_2 + 0x30) + lVar12;
          if ((lVar7 < lVar12) || ((ulong)(lVar5 + lVar8) <= uVar13)) {
            func_0x000107c61414(uVar13,lVar5,1,lVar3);
          }
          else if (lVar7 - lVar12 != 0) {
            func_0x000107c61410(uVar13,lVar5,1,lVar3);
          }
          lVar12 = *(long *)(param_2 + 0x38);
          lVar5 = 0;
          FUN_10174031c();
          lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
          lVar7 = lVar10 * param_1;
          uVar13 = lVar12 + lVar7;
          lVar9 = lVar10 * uVar14;
          lVar12 = lVar12 + lVar9;
          param_1 = uVar14;
          if (lVar7 < lVar9 || (ulong)(lVar12 + lVar10) <= uVar13) {
            func_0x000107c61414(uVar13,lVar12,1,lVar5);
          }
          else if (lVar7 - lVar9 != 0) {
            func_0x000107c61410(uVar13,lVar12,1);
          }
        }
      }
      else if (uStack_70 <= uVar13 && (long)uVar13 <= (long)param_1) goto LAB_10173e6d8;
      uVar14 = uVar14 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10173e7dc);
  (*pcVar2)();
}



/* Entry: 10173eabc; end: 10173eb43;  */

code * FUN_10173eabc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0xcc77);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_10173f234();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  func_0x00010173ecd0(lVar3,param_2,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_10173eb44;
}



/* Entry: 10173eb44; end: 10173eb7f;  */

void FUN_10173eb44(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 10173eb80; end: 10173ec63;  */

code * FUN_10173eb80(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  
  puVar1 = PTR__swift_coroFrameAlloc_11034f288;
  lVar2 = 0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x68,0x1684);
  }
  *param_1 = lVar2;
  lVar3 = 0;
  func_0x000107c5eec8();
  *(long *)(lVar2 + 0x40) = lVar3;
  lVar6 = *(long *)(lVar3 + -8);
  *(long *)(lVar2 + 0x48) = lVar6;
  uVar4 = *(undefined8 *)(lVar6 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(uVar4,0x1684);
  }
  *(undefined8 *)(lVar2 + 0x50) = uVar4;
  uVar5 = *unaff_x20;
  func_0x000107c61558(uVar5);
  (**(code **)(lVar6 + 0x10))(uVar4,param_2,lVar3);
  lVar3 = lVar2;
  func_0x00010173f24c();
  *(long *)(lVar2 + 0x58) = lVar3;
  lVar3 = lVar2 + 0x20;
  FUN_10173ee18(lVar3,uVar4,uVar5);
  *(long *)(lVar2 + 0x60) = lVar3;
  return FUN_10173ec64;
}



/* Entry: 10173ec64; end: 10173edcf;  */

/* WARNING: Possible PIC construction at 0x00010173ecb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010173ecb8) */

void FUN_10173ec64(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *param_1;
  pcVar1 = *(code **)(lVar4 + 0x58);
  lVar2 = *(long *)(lVar4 + 0x48);
  uVar3 = *(undefined8 *)(lVar4 + 0x50);
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
  (**(code **)(lVar4 + 0x60))(lVar4 + 0x20,0);
  (**(code **)(lVar2 + 8))(uVar3,uVar5);
  (*pcVar1)(lVar4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar3);
  return;
}



/* Entry: 10173edd0; end: 10173ee17;  */

void FUN_10173edd0(long *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    uVar12 = param_1[2];
    lVar9 = *(long *)param_1[1];
    if ((*(byte *)((long)param_1 + 0x1c) & 1) != 0) {
      *(long *)(*(long *)(lVar9 + 0x38) + uVar12 * 8) = lVar8;
      return;
    }
    lVar6 = param_1[3];
    lVar5 = lVar9 + (uVar12 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar12 & 0x3f);
    *(int *)(*(long *)(lVar9 + 0x30) + uVar12 * 4) = (int)lVar6;
    *(long *)(*(long *)(lVar9 + 0x38) + uVar12 * 8) = lVar8;
    if (!SCARRY8(*(long *)(lVar9 + 0x10),1)) {
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x101742de0);
    (*pcVar7)();
  }
  if ((*(byte *)((long)param_1 + 0x1c) & 1) == 0) {
    return;
  }
  uVar12 = param_1[2];
  lVar9 = *(long *)param_1[1];
  lVar8 = lVar9 + 0x40;
  uVar10 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar13 = uVar12 + 1 & (uVar10 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
    uVar10 = ~uVar10;
    uVar14 = uVar12;
    func_0x000107c6026c(uVar12,lVar8,uVar10);
    uVar14 = uVar14 + 1 & uVar10;
    do {
      uVar11 = *(ulong *)(lVar9 + 0x28);
      lVar5 = *(long *)(lVar9 + 0x30);
      puVar1 = (undefined4 *)(lVar5 + uVar13 * 4);
      func_0x000107c60684(uVar11,*puVar1,4);
      uVar11 = uVar11 & uVar10;
      if ((long)uVar12 < (long)uVar14) {
        if (uVar14 <= uVar11 || (long)uVar11 <= (long)uVar12) {
LAB_10173e8a8:
          puVar2 = (undefined4 *)(lVar5 + uVar12 * 4);
          if (((long)uVar12 < (long)uVar13) || (puVar1 + 1 <= puVar2 || uVar12 != uVar13)) {
            *puVar2 = *puVar1;
          }
          puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar12 * 8);
          puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar13 * 8);
          if (((long)uVar12 < (long)uVar13) || (puVar4 + 1 <= puVar3 || uVar12 != uVar13)) {
            *puVar3 = *puVar4;
            uVar12 = uVar13;
          }
        }
      }
      else if (uVar14 <= uVar11 && (long)uVar11 <= (long)uVar12) goto LAB_10173e8a8;
      uVar13 = uVar13 + 1 & uVar10;
    } while ((*(ulong *)(lVar8 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
  }
  uVar10 = uVar12 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar8 + uVar10) = *(ulong *)(lVar8 + uVar10) & (-1L << (uVar12 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(lVar9 + 0x10),1)) {
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
    *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10173e94c);
  (*pcVar7)();
}



/* Entry: 10173ee18; end: 10173f063;  */

undefined1  [16] FUN_10173ee18(undefined8 *param_1,long param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  puVar2 = PTR__swift_coroFrameAlloc_11034f288;
  plVar4 = (long *)0x70;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x70,0x3150);
  }
  *param_1 = plVar4;
  *plVar4 = param_2;
  plVar4[1] = (long)unaff_x20;
  lVar5 = 0;
  func_0x000107c5eec8();
  plVar4[2] = lVar5;
  lVar9 = *(long *)(lVar5 + -8);
  plVar4[3] = lVar9;
  lVar9 = *(long *)(lVar9 + 0x40);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(lVar9,0x3150);
  }
  plVar4[4] = lVar9;
  lVar9 = 0;
  FUN_10174031c();
  plVar4[5] = lVar9;
  lVar14 = *(long *)(lVar9 + -8);
  plVar4[6] = lVar14;
  lVar12 = *(long *)(lVar14 + 0x40);
  if (puVar2 == (undefined *)0x0) {
    lVar6 = lVar12;
    func_0x000107c610a0();
    plVar4[7] = lVar6;
    func_0x000107c610a0();
  }
  else {
    lVar6 = lVar12;
    func_0x000107c61458(lVar12,0x3150);
    plVar4[7] = lVar6;
    func_0x000107c61458(lVar12,0x3150);
  }
  plVar4[8] = lVar12;
  lVar12 = 0x112dc5828;
  uVar8 = 0;
  func_0x0001000285a8();
  lVar12 = *(long *)(*(long *)(lVar12 + -8) + 0x40);
  if (puVar2 == (undefined *)0x0) {
    lVar6 = lVar12;
    func_0x000107c610a0();
    plVar4[9] = lVar6;
    lVar6 = lVar12;
    func_0x000107c610a0();
    plVar4[10] = lVar6;
    func_0x000107c610a0();
  }
  else {
    lVar6 = lVar12;
    func_0x000107c61458(lVar12,0x3150);
    plVar4[9] = lVar6;
    lVar6 = lVar12;
    func_0x000107c61458(lVar12,0x3150);
    plVar4[10] = lVar6;
    uVar8 = 0;
    func_0x000107c61458();
  }
  plVar4[0xb] = lVar12;
  lVar13 = *unaff_x20;
  lVar7 = param_2;
  func_0x0001000c8928();
  *(byte *)(plVar4 + 0xd) = (byte)uVar8 & 1;
  lVar10 = *(long *)(lVar13 + 0x10);
  uVar11 = (ulong)~(uint)uVar8 & 1;
  lVar6 = lVar10 + uVar11;
  if (SCARRY8(lVar10,uVar11)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10173f00c);
    (*pcVar3)();
  }
  if (*(long *)(lVar13 + 0x18) < lVar6) {
    param_3 = param_3 & 1;
    func_0x0001017446b4(lVar6);
    func_0x0001000c8928();
    lVar7 = param_2;
    if (((uint)uVar8 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar5);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10173efdc);
      (*pcVar3)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1017438d8();
    plVar4[0xc] = lVar7;
    goto joined_r0x00010173f020;
  }
  plVar4[0xc] = lVar7;
joined_r0x00010173f020:
  bVar1 = (uVar8 & 1) == 0;
  if (!bVar1) {
    FUN_10173a69c(*(long *)(*unaff_x20 + 0x38) + *(long *)(lVar14 + 0x48) * lVar7,lVar12);
  }
  (**(code **)(lVar14 + 0x38))(lVar12,bVar1,1,lVar9);
  auVar15._8_8_ = lVar12;
  auVar15._0_8_ = FUN_10173f064;
  return auVar15;
}



/* Entry: 10173f064; end: 10173f233;  */

/* WARNING: Possible PIC construction at 0x00010173f1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010173f1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010173f20c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010173f200) */
/* WARNING: Removing unreachable block (ram,0x00010173f1f0) */
/* WARNING: Removing unreachable block (ram,0x00010173f210) */

void FUN_10173f064(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = param_1[5];
  lVar4 = param_1[6];
  if ((param_2 & 1) == 0) {
    uVar5 = param_1[10];
    func_0x000101740524(param_1[0xb],uVar5);
    (**(code **)(lVar4 + 0x30))(uVar5,1,uVar2);
    bVar1 = *(byte *)(param_1 + 0xd);
    uVar2 = param_1[10];
    if ((int)uVar5 == 1) goto LAB_10173f140;
    plVar3 = (long *)param_1[1];
    FUN_10173a69c(uVar2,param_1[8]);
    lVar4 = *plVar3;
    lVar6 = param_1[0xc];
    uVar2 = param_1[8];
  }
  else {
    uVar5 = param_1[9];
    func_0x000101740524(param_1[0xb],uVar5);
    (**(code **)(lVar4 + 0x30))(uVar5,1,uVar2);
    bVar1 = *(byte *)(param_1 + 0xd);
    uVar2 = param_1[9];
    if ((int)uVar5 == 1) {
LAB_10173f140:
      func_0x00010174071c(uVar2,0x112dc5828,&UNK_10d9853e8);
      if ((bVar1 & 1) != 0) {
        lVar4 = param_1[0xc];
        lVar6 = *(long *)param_1[1];
        (**(code **)(param_1[3] + 8))
                  (*(long *)(lVar6 + 0x30) + *(long *)(param_1[3] + 0x48) * lVar4,param_1[2]);
        FUN_10173e56c(lVar4,lVar6);
      }
      goto LAB_10173f1c0;
    }
    plVar3 = (long *)param_1[1];
    FUN_10173a69c(uVar2,param_1[7]);
    lVar4 = *plVar3;
    lVar6 = param_1[0xc];
    uVar2 = param_1[7];
  }
  if ((bVar1 & 1) == 0) {
    uVar5 = param_1[4];
    (**(code **)(param_1[3] + 0x10))(uVar5,*param_1,param_1[2]);
    FUN_101742de0(lVar6,uVar5,uVar2,lVar4);
  }
  else {
    FUN_10173a69c(uVar2,*(long *)(lVar4 + 0x38) + *(long *)(param_1[6] + 0x48) * lVar6);
  }
LAB_10173f1c0:
  uVar2 = param_1[0xb];
  func_0x00010174071c(uVar2,0x112dc5828,&UNK_10d9853e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar2);
  return;
}



/* Entry: 10173f234; end: 10173f26f;  */

undefined1  [16] FUN_10173f234(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x101740be4;
  return auVar1;
}



/* Entry: 10173f270; end: 10173f2a7;  */

void FUN_10173f270(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10173f2a8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10173f2a8; end: 10173f4a3;  */

undefined * FUN_10173f2a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10173f3a4);
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
    puVar3 = (undefined *)0x112dc5840;
    func_0x0001000285a8(0x112dc5840,&UNK_10d985fc0);
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
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar3 != param_4 || param_4 + uVar6 * 0x10 + 0x20 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10173f4a4; end: 10173f4af;  */

undefined * FUN_10173f4a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_release_11034f4c0;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10173f5bc);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112dc5808;
    func_0x0001000285a8(0x112dc5808,&UNK_10d9853b0);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    puVar1 = puVar5 + -0x1d;
    if (0x1f < (long)puVar5) {
      puVar1 = puVar5 + -0x20;
    }
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar4 + 0x20;
  puVar5 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar5,uVar7 << 2);
  }
  else {
    if (puVar4 != param_4 || puVar5 + uVar7 * 4 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar5,uVar7 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 10173f4b0; end: 10173f5bb;  */

undefined *
FUN_10173f4b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10173f5bc);
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
    puVar3 = (undefined *)0x112dc5808;
    func_0x0001000285a8(0x112dc5808,&UNK_10d9853b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 10173f5bc; end: 10174000b;  */

/* WARNING: Removing unreachable block (ram,0x00010173f858) */
/* WARNING: Removing unreachable block (ram,0x00010173f8a0) */
/* WARNING: Removing unreachable block (ram,0x00010173f8f0) */
/* WARNING: Removing unreachable block (ram,0x00010173f8f4) */
/* WARNING: Removing unreachable block (ram,0x00010173f914) */
/* WARNING: Removing unreachable block (ram,0x00010173f918) */
/* WARNING: Removing unreachable block (ram,0x00010173f920) */
/* WARNING: Removing unreachable block (ram,0x00010173f924) */
/* WARNING: Removing unreachable block (ram,0x00010173f9d4) */
/* WARNING: Removing unreachable block (ram,0x00010173fa00) */
/* WARNING: Removing unreachable block (ram,0x00010173f9dc) */
/* WARNING: Removing unreachable block (ram,0x00010173f978) */
/* WARNING: Removing unreachable block (ram,0x00010173f97c) */
/* WARNING: Removing unreachable block (ram,0x00010173fa0c) */
/* WARNING: Removing unreachable block (ram,0x00010173fa48) */

undefined8 *****
FUN_10173f5bc(undefined8 *****param_1,undefined8 ****param_2,undefined8 ****param_3,
             undefined8 ****param_4,undefined8 ****param_5,undefined8 ***param_6,
             undefined8 ***param_7)

{
  undefined8 *****pppppuVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 **ppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 ***pppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  undefined8 ****ppppuVar20;
  ulong uVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  ulong uVar24;
  undefined8 ****unaff_x19;
  uint uVar25;
  undefined8 *****unaff_x20;
  undefined8 ****ppppuVar26;
  undefined8 ****ppppuVar27;
  undefined8 unaff_x21;
  ulong uVar28;
  undefined8 *****unaff_x22;
  undefined8 ***pppuVar29;
  undefined8 ****ppppuVar30;
  undefined8 ****unaff_x23;
  undefined8 ****unaff_x24;
  undefined8 ****unaff_x25;
  undefined8 ****unaff_x26;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [48];
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_be;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 ****ppppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar7 = param_1;
  ppppuVar30 = param_2;
  ppppuVar27 = param_4;
  if ((ulong)param_2 >> 0x3c < 0xf) {
    unaff_x20 = (undefined8 *****)((ulong)param_2 >> 0x3e);
    uVar19 = (uint)((ulong)param_2 >> 0x20);
    uVar25 = uVar19 >> 0x1e;
    lVar23 = (long)param_1 >> 0x20;
    unaff_x19 = param_2;
    unaff_x22 = param_1;
    if (uVar19 >> 0x1e < 2) {
      if (uVar25 == 0) {
        if (((ulong)param_2 & 0xff000000000000) != 0) goto LAB_10173f6ac;
        goto LAB_10173f634;
      }
      if ((int)param_1 != lVar23) goto LAB_10173f690;
    }
    else {
      if (uVar25 == 2) {
        if (param_1[2] == param_1[3]) goto LAB_10173f654;
LAB_10173f690:
        func_0x00010006c00c(param_1,param_2);
        unaff_x23 = param_4;
LAB_10173f6ac:
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        ppppuVar27 = param_3;
        func_0x00010006c00c();
        func_0x0001040044a0();
        ppppuStack_a8 = pppppuVar7;
        pppuStack_a0 = ppppuVar30;
        pppuStack_98 = ppppuVar27;
        if (uVar25 == 2) {
          ppppuVar30 = param_1[2];
          unaff_x25 = param_1[3];
          func_0x000107c5ec30();
          pppppuVar8 = pppppuVar7;
          if (pppppuVar7 != (undefined8 *****)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8((long)ppppuVar30,(long)pppppuVar8)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10173fa70);
              (*pcVar5)();
            }
            pppppuVar7 = (undefined8 *****)
                         (((long)ppppuVar30 - (long)pppppuVar8) + (long)pppppuVar7);
          }
          if (SBORROW8((long)unaff_x25,(long)ppppuVar30)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10173fa6c);
            (*pcVar5)();
          }
          func_0x000107c5ec38();
          if ((long)unaff_x25 - (long)ppppuVar30 <= (long)pppppuVar8) {
            pppppuVar8 = (undefined8 *****)((long)unaff_x25 - (long)ppppuVar30);
          }
          ppppuVar30 = (undefined8 ****)((long)pppppuVar8 + (long)pppppuVar7);
          bVar6 = pppppuVar7 == (undefined8 *****)0x0;
LAB_10173f784:
          ppppuVar20 = (undefined8 ****)0x0;
          if (!bVar6) {
            ppppuVar20 = ppppuVar30;
          }
LAB_10173f788:
          FUN_101740574();
          unaff_x23 = ppppuVar20;
        }
        else {
          if (uVar25 == 1) {
            unaff_x25 = (undefined8 ****)(long)(int)param_1;
            if (lVar23 < (long)unaff_x25) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10173fa68);
              (*pcVar5)();
            }
            func_0x000107c5ec30();
            if (pppppuVar7 != (undefined8 *****)0x0) {
              pppppuVar8 = pppppuVar7;
              func_0x000107c5ec3c();
              if (SBORROW8((long)unaff_x25,(long)pppppuVar8)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10173fa74);
                (*pcVar5)();
              }
              pppppuVar1 = (undefined8 *****)
                           (((long)unaff_x25 - (long)pppppuVar8) + (long)pppppuVar7);
              func_0x000107c5ec38();
              if (lVar23 - (long)unaff_x25 <= (long)pppppuVar8) {
                pppppuVar8 = (undefined8 *****)(lVar23 - (long)unaff_x25);
              }
              ppppuVar30 = (undefined8 ****)((long)pppppuVar8 + (long)pppppuVar1);
              bVar6 = pppppuVar1 == (undefined8 *****)0x0;
              pppppuVar7 = (undefined8 *****)0x0;
              if (!bVar6) {
                pppppuVar7 = pppppuVar1;
              }
              goto LAB_10173f784;
            }
            func_0x000107c5ec38();
            pppppuVar7 = (undefined8 *****)0x0;
            ppppuVar20 = (undefined8 ****)0x0;
            goto LAB_10173f788;
          }
          uStack_be._0_1_ = SUB81(param_1,0);
          uStack_be._1_1_ = (undefined1)((ulong)param_1 >> 8);
          uStack_be._2_1_ = (undefined1)((ulong)param_1 >> 0x10);
          uStack_be._3_1_ = (undefined1)((ulong)param_1 >> 0x18);
          uStack_be._4_1_ = (undefined1)((ulong)param_1 >> 0x20);
          uStack_be._5_1_ = (undefined1)((ulong)param_1 >> 0x28);
          uStack_be._6_1_ = (undefined1)((ulong)param_1 >> 0x30);
          uStack_be._7_1_ = (undefined1)((ulong)param_1 >> 0x38);
          uStack_b6 = SUB81(param_2,0);
          uStack_b5 = (undefined1)((ulong)param_2 >> 8);
          uStack_b4 = (undefined1)((ulong)param_2 >> 0x10);
          uStack_b3 = (undefined1)((ulong)param_2 >> 0x18);
          uStack_b2 = (undefined1)((ulong)param_2 >> 0x20);
          uStack_b1 = (undefined1)((ulong)param_2 >> 0x28);
          ppppuVar20 = (undefined8 ****)((long)&uStack_be + ((ulong)param_2 >> 0x30 & 0xff));
          FUN_101740574();
          pppppuVar7 = (undefined8 *****)&uStack_be;
        }
        unaff_x20 = &ppppuStack_a8;
        param_7 = (undefined8 ***)&UNK_110733cd0;
        ppppuVar27 = (undefined8 ****)0x0;
        param_5 = (undefined8 ****)0x64;
        param_6 = (undefined8 ***)0x0;
        unaff_x21 = 0;
        func_0x00010006ae80(pppppuVar7,ppppuVar20,&uStack_90);
        func_0x0001000b44c0(param_1,param_2);
        func_0x0001000b44c0(param_1,param_2);
        func_0x00010174071c(&uStack_90,0x112d49548,&UNK_10d90fde0);
        pppppuVar7 = (undefined8 *****)ppppuStack_a8;
        ppppuVar30 = (undefined8 ****)pppuStack_a0;
        ppppuVar20 = (undefined8 ****)pppuStack_98;
        goto LAB_10173f658;
      }
LAB_10173f634:
      func_0x0001000b44c0();
      ppppuVar27 = param_4;
    }
  }
LAB_10173f654:
  func_0x0001040044a0();
  ppppuVar20 = param_3;
  param_2 = unaff_x19;
  param_1 = unaff_x22;
  param_4 = unaff_x24;
  param_3 = unaff_x26;
LAB_10173f658:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppuVar7;
  }
  func_0x000107c60e78();
  pppuVar29 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_c8 = 0x10173fa78;
  ppuVar9 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
  pppuStack_110 = param_3;
  pppuStack_108 = unaff_x25;
  pppuStack_100 = param_4;
  pppuStack_f8 = unaff_x23;
  ppppuStack_f0 = param_1;
  uStack_e8 = unaff_x21;
  ppppuStack_e0 = unaff_x20;
  pppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010173a004();
  pppuVar10 = (undefined8 ***)0x0;
  FUN_101740030();
  func_0x000107c613fc();
  pppuVar10[2] = ppuVar9;
  ppuStack_1c0 = pppuVar10;
  func_0x0001000285a8(0x112dc5488,&UNK_10d985240);
  func_0x000107c613fc();
  ppppuVar11 = (undefined8 ****)&ppuStack_1c0;
  func_0x00010006c248();
  unaff_x20[2] = ppppuVar11;
  unaff_x20[4] = pppppuVar7;
  unaff_x20[5] = ppppuVar30;
  unaff_x20[9] = ppppuVar20;
  unaff_x20[6] = ppppuVar27;
  unaff_x20[7] = param_5;
  func_0x000107c61428(pppppuVar7 + 5,auStack_140,0,0);
  ppppuVar26 = pppppuVar7[5];
  unaff_x20[8] = ppppuVar26;
  ppppuVar11 = (undefined8 ****)0x0;
  func_0x000101740050();
  func_0x000107c613fc();
  func_0x000107c61580(param_5,2);
  func_0x000107c6157c(pppppuVar7);
  func_0x000107c6157c(ppppuVar30);
  func_0x000107c6157c(ppppuVar20);
  func_0x000107c61434(ppppuVar26);
  func_0x000107c6157c(param_7);
  func_0x000107c61474(ppppuVar11);
  pppuVar10 = pppuVar29;
  FUN_10173a188();
  ppppuVar11[0xe] = pppuVar10;
  func_0x00010173a294();
  ppppuVar11[0xf] = pppuVar29;
  ppppuVar11[0x10] = (undefined8 ***)0x0;
  ppppuVar11[0x11] = (undefined8 ***)0x0;
  ppppuVar11[0x12] = (undefined8 ***)0x0;
  ppppuVar11[0x13] = ppppuVar27;
  ppppuVar11[0x14] = param_5;
  ppppuVar11[0x15] = param_6;
  ppppuVar11[0x16] = param_7;
  unaff_x20[3] = ppppuVar11;
  func_0x000107c61428(pppppuVar7 + 4,auStack_158,0,0);
  func_0x000107c61428(pppppuVar7 + 2,auStack_170,0,0);
  ppppuVar27 = pppppuVar7[2];
  ppppuVar20 = pppppuVar7[3];
  func_0x000107c6157c(ppppuVar30);
  func_0x000100de78a0(ppppuVar27,ppppuVar20);
  ppppuVar11 = ppppuVar27;
  ppppuVar26 = ppppuVar20;
  ppppuVar22 = ppppuVar30;
  FUN_10173f5bc();
  func_0x000107c61574(ppppuVar30);
  func_0x0001000b44c0(ppppuVar27,ppppuVar20);
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar11 == (undefined8 ****)0x0) {
    func_0x00010173a004();
  }
  else {
    func_0x00010173a004();
    pppuVar29 = ppppuVar11[2];
    func_0x000107c61434(ppppuVar11);
    if (pppuVar29 != (undefined8 ***)0x0) {
      pppuVar10 = (undefined8 ***)0x0;
      ppppuVar27 = ppppuVar11 + 4;
      do {
        if (ppppuVar11[2] <= pppuVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10173fff0);
          (*pcVar5)();
        }
        ppuStack_198 = ppppuVar27[5];
        ppuStack_1a0 = ppppuVar27[4];
        ppuStack_188 = ppppuVar27[7];
        ppuStack_190 = ppppuVar27[6];
        ppuStack_1b8 = ppppuVar27[1];
        ppuStack_1c0 = *ppppuVar27;
        ppuStack_1a8 = ppppuVar27[3];
        ppuStack_1b0 = ppppuVar27[2];
        uVar4 = ppuStack_1c0._0_4_;
        uVar28 = (ulong)ppuStack_1c0 & 0xffffffff;
        FUN_1017405b4(&ppuStack_1c0,&uStack_200);
        uVar21 = 0;
        FUN_1017405b4(&ppuStack_1c0);
        puVar12 = puVar14;
        func_0x000107c61558();
        uVar19 = (uint)puVar12;
        uVar13 = uVar28;
        func_0x00010149a22c();
        uVar24 = (ulong)~(uint)uVar21 & 1;
        lVar23 = *(long *)(puVar14 + 0x10) + uVar24;
        if (SCARRY8(*(long *)(puVar14 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10173fff4);
          (*pcVar5)();
        }
        if (*(long *)(puVar14 + 0x18) < lVar23) {
          func_0x000101744350(lVar23);
          func_0x00010149a22c();
          uVar13 = uVar28;
          if (((uint)uVar21 & 1) != (uVar19 & 1)) {
            func_0x000107c60624(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10174000c);
            (*pcVar5)();
          }
LAB_10173fd74:
          if ((uVar21 & 1) != 0) goto LAB_10173fc7c;
LAB_10173fd78:
          *(ulong *)(puVar14 + (uVar13 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar14 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
          *(undefined4 *)(*(long *)(puVar14 + 0x30) + uVar13 * 4) = uVar4;
          puVar3 = (undefined8 *)(*(long *)(puVar14 + 0x38) + uVar13 * 0x40);
          puVar3[1] = ppuStack_1b8;
          *puVar3 = ppuStack_1c0;
          puVar3[3] = ppuStack_1a8;
          puVar3[2] = ppuStack_1b0;
          puVar3[5] = ppuStack_198;
          puVar3[4] = ppuStack_1a0;
          puVar3[7] = ppuStack_188;
          puVar3[6] = ppuStack_190;
          func_0x0001017405f0(&ppuStack_1c0);
          if (SCARRY8(*(long *)(puVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10173fff8);
            (*pcVar5)();
          }
          *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
        }
        else {
          if (((ulong)puVar12 & 1) != 0) goto LAB_10173fd74;
          FUN_101743748();
          if ((uVar21 & 1) == 0) goto LAB_10173fd78;
LAB_10173fc7c:
          puVar2 = (ulong *)(*(long *)(puVar14 + 0x38) + uVar13 * 0x40);
          uStack_1d8 = puVar2[5];
          uStack_1e0 = puVar2[4];
          uStack_1c8 = puVar2[7];
          uStack_1d0 = puVar2[6];
          uStack_1f8 = puVar2[1];
          uStack_200 = *puVar2;
          uStack_1e8 = puVar2[3];
          uStack_1f0 = puVar2[2];
          puVar2[5] = (ulong)ppuStack_198;
          puVar2[4] = (ulong)ppuStack_1a0;
          puVar2[7] = (ulong)ppuStack_188;
          puVar2[6] = (ulong)ppuStack_190;
          puVar2[1] = (ulong)ppuStack_1b8;
          *puVar2 = (ulong)ppuStack_1c0;
          puVar2[3] = (ulong)ppuStack_1a8;
          puVar2[2] = (ulong)ppuStack_1b0;
          func_0x0001017405f0(&uStack_200);
          func_0x0001017405f0(&ppuStack_1c0);
        }
        pppuVar10 = (undefined8 ***)((long)pppuVar10 + 1);
        ppppuVar27 = ppppuVar27 + 8;
      } while (pppuVar29 != pppuVar10);
    }
    func_0x000107c6142c(ppppuVar11);
  }
  ppppuVar27 = unaff_x20[2];
  ppuStack_1b0 = (undefined8 **)puVar14;
  func_0x000107c6157c(ppppuVar27);
  puVar12 = PTR___sytN_11034f1b0 + 8;
  func_0x000100075034(FUN_101740bb8,&ppuStack_1c0,puVar12);
  func_0x000107c61574(ppppuVar27);
  pppuVar29 = *(undefined8 ****)(puVar14 + 0x10);
  if (pppuVar29 != (undefined8 ***)0x0) {
    func_0x000107c61434(puVar14);
    pppuVar15 = pppuVar29;
    FUN_101746bf0(pppuVar29,0);
    pppuVar10 = &ppuStack_1c0;
    FUN_101747cc8(pppuVar10,pppuVar15 + 4,pppuVar29,puVar14);
    FUN_101740414(ppuStack_1c0,ppuStack_1b8,ppuStack_1b0,ppuStack_1a8,ppuStack_1a0);
    func_0x000107c61574(pppuVar15);
    if (pppuVar10 != pppuVar29) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10173fffc);
      (*pcVar5)();
    }
    if ((*(long *)(puVar14 + 0x10) != 0) && (*(char *)(pppppuVar7 + 4) == '\0')) {
      pppuVar29 = ppppuVar30[2];
      uVar16 = 0x61727473746f6f62;
      func_0x000107c5fadc(0x61727473746f6f62,0xe900000000000070);
      func_0x0001053dbc14(pppuVar29,uVar16,1);
      func_0x000107c61170(uVar16);
      FUN_10174157c(0);
    }
  }
  puVar17 = puVar14;
  FUN_10173de00();
  func_0x000107c6142c(puVar14);
  puVar14 = &UNK_110401600;
  func_0x000107c613fc(&UNK_110401600,0x18,7);
  func_0x000107c61644(puVar14 + 0x10,unaff_x20);
  ppppuVar30 = unaff_x20[3];
  puVar18 = &UNK_1104016f0;
  func_0x000107c613fc(&UNK_1104016f0,0x30,7);
  *(undefined8 *****)(puVar18 + 0x10) = ppppuVar30;
  *(undefined **)(puVar18 + 0x18) = puVar17;
  *(undefined8 *)(puVar18 + 0x20) = 0x101740bb4;
  *(undefined **)(puVar18 + 0x28) = puVar14;
  func_0x000107c6157c(ppppuVar30);
  func_0x000107c6157c(puVar14);
  uVar16 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985448,puVar18,puVar12);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(puVar18);
  func_0x000107c61574(uVar16);
  func_0x0001017406e8(ppppuVar11,ppppuVar26,ppppuVar22);
  return unaff_x20;
}



/* Entry: 10174000c; end: 10174002f;  */

void FUN_10174000c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar16 = 0x112dc5478;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  lVar17 = *(long *)(lVar16 + -8);
  lVar12 = *(long *)(lVar17 + 0x40);
  lStack_a8 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_d0 + -extraout_x8;
  lVar5 = 0;
  puStack_b8 = puVar20;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar5 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar16 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = (undefined4)lVar16;
  lVar16 = (long)puVar20 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar16;
  lStack_90 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - extraout_x12;
  lStack_80 = lVar18;
  func_0x000107c5eec4(lVar18);
  func_0x0001005923b4();
  puVar6 = &UNK_110401600;
  uStack_6c = uVar4;
  func_0x000107c613fc(&UNK_110401600,0x18,7);
  puStack_b0 = puVar6;
  func_0x000107c61644(puVar6 + 0x10,lVar1);
  uStack_c8 = *(undefined8 *)(lVar1 + 0x18);
  pcStack_78 = *(code **)(lVar13 + 0x10);
  (*pcStack_78)(lVar16,lVar18,lVar5);
  lVar1 = lStack_a8;
  (**(code **)(lVar17 + 0x10))(puVar20,uStack_68,lStack_a8);
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar11 + 0x1c & (uVar11 ^ 0xffffffffffffffff);
  uStack_98 = uVar11 | 7;
  uVar9 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar15 = lVar14 + uVar9 + uVar10 & (uVar9 ^ 0xffffffffffffffff);
  uVar19 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_110401678;
  lStack_88 = lVar13;
  func_0x000107c613fc(&UNK_110401678,uVar19 + 0x10,uStack_98 | uVar9);
  lVar16 = lStack_c0;
  uVar2 = uStack_c8;
  *(undefined8 *)(puVar6 + 0x10) = uStack_c8;
  *(undefined4 *)(puVar6 + 0x18) = uStack_6c;
  pcStack_a0 = *(code **)(lVar13 + 0x20);
  (*pcStack_a0)(puVar6 + uVar10,lStack_c0,lVar5);
  (**(code **)(lVar17 + 0x20))(puVar6 + uVar15,puStack_b8,lVar1);
  puVar3 = puStack_b0;
  *(code **)(puVar6 + uVar19) = FUN_1017408b4;
  *(undefined **)((long)(puVar6 + uVar19) + 8) = puStack_b0;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar3);
  *(undefined **)(lVar18 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar7 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985428,puVar6);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104015b0;
  func_0x000107c613fc(&UNK_1104015b0,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,uVar2);
  lVar12 = lStack_80;
  (*pcStack_78)(lVar16,lStack_80,lVar5);
  uVar9 = uVar11 + 0x24 & (uVar11 ^ 0xffffffffffffffff);
  puVar8 = &UNK_1104016a0;
  func_0x000107c613fc(&UNK_1104016a0,uVar9 + lStack_90,uStack_98);
  *(undefined8 *)(puVar8 + 0x10) = uVar7;
  *(undefined **)(puVar8 + 0x18) = puVar6;
  *(undefined4 *)(puVar8 + 0x20) = uStack_6c;
  (*pcStack_a0)(puVar8 + uVar9,lVar16,lVar5);
  func_0x000107c5fd1c(FUN_1017409b0,puVar8,lVar1);
  func_0x000107c61574(puVar3);
  (**(code **)(lStack_88 + 8))(lVar12,lVar5);
  return;
}



/* Entry: 101740030; end: 10174006f;  */

void FUN_101740030(void)

{
  func_0x000107c61168(&PTR_PTR_112dc55a8);
  return;
}



/* Entry: 101740070; end: 101740103;  */

long * FUN_101740070(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0x112dc5478;
    func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    *(undefined2 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined2 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101740104; end: 101740143;  */

void FUN_101740104(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dc5478;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
                    /* WARNING: Could not recover jumptable at 0x000101740140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 101740144; end: 101740303;  */

long FUN_101740144(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x112dc5478;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  *(undefined2 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined2 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 101740304; end: 10174031b;  */

void FUN_101740304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10174031c; end: 101740353;  */

void FUN_10174031c(undefined8 param_1)

{
  if (lRam0000000112dc57c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65082c);
  return;
}



/* Entry: 101740354; end: 1017403c3;  */

void FUN_101740354(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1017403c4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d985370;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1017403c4; end: 101740413;  */

void FUN_1017403c4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112dc57d8 != 0) {
    return;
  }
  puVar1 = &UNK_110732590;
  func_0x000107c5fd30();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112dc57d8 = param_1;
  return;
}



/* Entry: 101740414; end: 10174042b;  */

void FUN_101740414(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10174042c; end: 1017404a3;  */

void FUN_10174042c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101740bd0;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173bbf8,0,0);
  return;
}



/* Entry: 1017404a4; end: 101740573;  */

undefined8 FUN_1017404a4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10174031c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101740574; end: 1017405b3;  */

void FUN_101740574(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc11c8;
  func_0x000107c61520(&DAT_10dcc11c8,&UNK_110733cd0);
  puRam0000000112dc5830 = puVar1;
  return;
}



/* Entry: 1017405b4; end: 101740623;  */

undefined8 FUN_1017405b4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104007368)(param_2,param_1);
  return param_2;
}



/* Entry: 101740624; end: 10174063b;  */

void FUN_101740624(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10173dbc0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10174063c; end: 1017406b3;  */

void FUN_10174063c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101740bcc;
  plVar5[8] = lVar2;
  plVar5[9] = lVar4;
  plVar5[6] = lVar1;
  plVar5[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173dcb4,0,0);
  return;
}



/* Entry: 1017406b4; end: 10174075b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1017406b4(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10174075c; end: 101740853;  */

void FUN_10174075c(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar4 = 0x112dc5490;
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar4 = 0x112dc5478;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar7 = uVar6 + lVar3 + uVar2 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8;
  lVar4 = *(long *)(unaff_x20 + uVar2);
  lVar3 = *(long *)(unaff_x20 + uVar2 + 8);
  lVar5 = *(long *)(unaff_x20 + (uVar2 + 0x17 & 0xffffffffffffff8));
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101740854;
  plVar1[10] = lVar3;
  plVar1[0xb] = lVar5;
  plVar1[8] = unaff_x20 + uVar7;
  plVar1[9] = lVar4;
  plVar1[7] = unaff_x20 + uVar6;
  lVar4 = 0x112dc5470;
  func_0x0001000285a8(0x112dc5470,&UNK_10d9853d0);
  plVar1[0xc] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0xd] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xe] = uVar2;
  lVar4 = 0x112dc5838;
  func_0x0001000285a8(0x112dc5838,&UNK_10d985418);
  plVar1[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x10] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x11] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173c8b0,0,0);
  return;
}



/* Entry: 101740854; end: 10174088f;  */

void FUN_101740854(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010174088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101740890; end: 1017408b3;  */

void FUN_101740890(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 1017408b4; end: 1017408cb;  */

void FUN_1017408b4(void)

{
  FUN_10173dc1c();
  return;
}



/* Entry: 1017408cc; end: 1017409af;  */

void FUN_1017408cc(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  ulong uVar7;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar7 = uVar5 + 0x1c & (uVar5 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar2 = 0x112dc5478;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar5 = uVar7 + lVar4 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  plVar3 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  lVar2 = *plVar3;
  lVar4 = plVar3[1];
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101740bd4;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar4;
  plVar3[9] = unaff_x20 + uVar7;
  plVar3[10] = unaff_x20 + uVar5;
  *(undefined4 *)(plVar3 + 0x14) = uVar1;
  plVar3[8] = lVar6;
  lVar2 = 0x112dc5470;
  func_0x0001000285a8(0x112dc5470,&UNK_10d9853d0);
  plVar3[0xd] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[0xe] = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xf] = uVar5;
  lVar2 = 0x112dc5828;
  func_0x0001000285a8(0x112dc5828,&UNK_10d9853e8);
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x10] = uVar5;
  lVar2 = 0;
  func_0x000107c5eec8();
  plVar3[0x11] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[0x12] = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x13] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173d0b8,lVar6,0);
  return;
}



/* Entry: 1017409b0; end: 1017409f3;  */

void FUN_1017409b0(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_60 [2];
  
  lVar6 = 0;
  func_0x000107c5eec8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = -(lVar9 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fd50(uVar5,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  (**(code **)(lVar10 + 0x10))
            (&stack0xffffffffffffffb0 + lVar6,
             unaff_x20 + (uVar7 + 0x24 & (uVar7 ^ 0xffffffffffffffff)),lVar3);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = uVar7 + 0x1c & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1104016c8;
  func_0x000107c613fc(&UNK_1104016c8,uVar8 + lVar9,uVar7 | 7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined4 *)(puVar4 + 0x18) = uVar2;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar8,&stack0xffffffffffffffb0 + lVar6,lVar3);
  func_0x000107c6157c(uVar1);
  uVar5 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  *(undefined8 *)((long)auStack_60 + lVar6) = uVar5;
  uVar5 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985438,puVar4);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 1017409f4; end: 101740a7f;  */

void FUN_1017409f4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101740bd8;
  plVar3[6] = lVar2;
  plVar3[7] = unaff_x20 + (uVar4 + 0x1c & (uVar4 ^ 0xffffffffffffffff));
  *(undefined4 *)(plVar3 + 9) = uVar1;
  plVar3[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173d4ec,0,0);
  return;
}



/* Entry: 101740a80; end: 101740b07;  */

undefined8 FUN_101740a80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101740b08; end: 101740b7f;  */

void FUN_101740b08(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101740bdc;
  plVar5[4] = lVar2;
  plVar5[5] = lVar4;
  plVar5[2] = lVar1;
  plVar5[3] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173c534,lVar1,0);
  return;
}



/* Entry: 101740b80; end: 101740b83;  */

void FUN_101740b80(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long alStack_a0 [2];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = 0x112dc5478;
  uStack_80 = param_1;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  lVar7 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar7 + 0x40);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&lStack_90 - extraout_x8;
  lVar4 = 0x112dc5490;
  lStack_88 = lVar11;
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  lVar8 = *(long *)(lVar4 + -8);
  lVar14 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar11 - extraout_x8_00;
  (**(code **)(lVar8 + 0x10))(lVar10,uVar6,lVar4);
  (**(code **)(lVar7 + 0x10))(lVar11,param_1,lVar3);
  bVar1 = *(byte *)(lVar8 + 0x50);
  uVar9 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar7 + 0x50);
  uVar15 = lVar14 + (ulong)bVar2 + uVar9 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_110401650;
  func_0x000107c613fc(&UNK_110401650,uVar13 + 0x18,bVar1 | bVar2 | 7);
  (**(code **)(lVar8 + 0x20))(puVar5 + uVar9,lVar10,lVar4);
  lVar3 = lStack_90;
  (**(code **)(lVar7 + 0x20))(puVar5 + uVar15,lStack_88,lStack_90);
  uVar6 = uStack_68;
  *(undefined8 *)(puVar5 + uVar13) = uStack_78;
  *(undefined8 *)(puVar5 + uVar13 + 8) = uStack_70;
  *(undefined8 *)(puVar5 + uVar13 + 0x10) = uStack_68;
  func_0x000107c6157c();
  func_0x000107c61174(uVar6);
  *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar6 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985410,puVar5);
  func_0x000107c61574(puVar5);
  func_0x000107c5fd1c(FUN_101740890,uVar6,lVar3);
  return;
}



/* Entry: 101740b84; end: 101740bab;  */

void FUN_101740b84(void)

{
  func_0x000100cbb408();
  return;
}



/* Entry: 101740bac; end: 101740bb7;  */

void FUN_101740bac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar16 = 0x112dc5478;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  lVar17 = *(long *)(lVar16 + -8);
  lVar12 = *(long *)(lVar17 + 0x40);
  lStack_a8 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_d0 + -extraout_x8;
  lVar5 = 0;
  puStack_b8 = puVar20;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar5 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar16 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = (undefined4)lVar16;
  lVar16 = (long)puVar20 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar16;
  lStack_90 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - extraout_x12;
  lStack_80 = lVar18;
  func_0x000107c5eec4(lVar18);
  func_0x0001005923b4();
  puVar6 = &UNK_110401600;
  uStack_6c = uVar4;
  func_0x000107c613fc(&UNK_110401600,0x18,7);
  puStack_b0 = puVar6;
  func_0x000107c61644(puVar6 + 0x10,lVar1);
  uStack_c8 = *(undefined8 *)(lVar1 + 0x18);
  pcStack_78 = *(code **)(lVar13 + 0x10);
  (*pcStack_78)(lVar16,lVar18,lVar5);
  lVar1 = lStack_a8;
  (**(code **)(lVar17 + 0x10))(puVar20,uStack_68,lStack_a8);
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar11 + 0x1c & (uVar11 ^ 0xffffffffffffffff);
  uStack_98 = uVar11 | 7;
  uVar9 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar15 = lVar14 + uVar9 + uVar10 & (uVar9 ^ 0xffffffffffffffff);
  uVar19 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_110401678;
  lStack_88 = lVar13;
  func_0x000107c613fc(&UNK_110401678,uVar19 + 0x10,uStack_98 | uVar9);
  lVar16 = lStack_c0;
  uVar2 = uStack_c8;
  *(undefined8 *)(puVar6 + 0x10) = uStack_c8;
  *(undefined4 *)(puVar6 + 0x18) = uStack_6c;
  pcStack_a0 = *(code **)(lVar13 + 0x20);
  (*pcStack_a0)(puVar6 + uVar10,lStack_c0,lVar5);
  (**(code **)(lVar17 + 0x20))(puVar6 + uVar15,puStack_b8,lVar1);
  puVar3 = puStack_b0;
  *(code **)(puVar6 + uVar19) = FUN_1017408b4;
  *(undefined **)((long)(puVar6 + uVar19) + 8) = puStack_b0;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar3);
  *(undefined **)(lVar18 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar7 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985428,puVar6);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104015b0;
  func_0x000107c613fc(&UNK_1104015b0,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,uVar2);
  lVar12 = lStack_80;
  (*pcStack_78)(lVar16,lStack_80,lVar5);
  uVar9 = uVar11 + 0x24 & (uVar11 ^ 0xffffffffffffffff);
  puVar8 = &UNK_1104016a0;
  func_0x000107c613fc(&UNK_1104016a0,uVar9 + lStack_90,uStack_98);
  *(undefined8 *)(puVar8 + 0x10) = uVar7;
  *(undefined **)(puVar8 + 0x18) = puVar6;
  *(undefined4 *)(puVar8 + 0x20) = uStack_6c;
  (*pcStack_a0)(puVar8 + uVar9,lVar16,lVar5);
  func_0x000107c5fd1c(FUN_1017409b0,puVar8,lVar1);
  func_0x000107c61574(puVar3);
  (**(code **)(lStack_88 + 8))(lVar12,lVar5);
  return;
}



/* Entry: 101740bb8; end: 101740bcb;  */

void FUN_101740bb8(void)

{
  FUN_101740624();
  return;
}



/* Entry: 101740bcc; end: 101740be7;  */

void FUN_101740bcc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010174088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101740be8; end: 101740c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101740be8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 uStack_31;
  
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a7a90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  lVar1 = _DAT_112dc5848;
  uStack_31 = 0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar3 = &uStack_31;
  func_0x00010006c248();
  *(undefined1 **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c5eea0(unaff_x20 + _DAT_112dc5850);
  return unaff_x20;
}



/* Entry: 101740c88; end: 10174107b;  */

void FUN_101740c88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x6e69676f6c;
  if (cVar4 != '\x01') {
    uVar3 = 0x6172747369676572;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xec0000006e6f6974;
  }
  uVar2 = 0x64656d75736572;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10174107c; end: 1017410e7;  */

void FUN_10174107c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x6e69676f6c;
  if (cVar4 != '\x01') {
    uVar3 = 0x6172747369676572;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xec0000006e6f6974;
  }
  uVar2 = 0x64656d75736572;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1017410e8; end: 1017411c3;  */

void FUN_1017410e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xeb00000000657469;
  uVar1 = 0x72775f65726f7473;
  if (bVar4 != 4) {
    uVar6 = 0xe500000000000000;
    uVar1 = 0x726568746f;
  }
  uVar3 = 0x800000010efb9cb0;
  uVar5 = 0xd000000000000010;
  if (bVar4 != 3) {
    uVar3 = uVar6;
    uVar5 = uVar1;
  }
  uVar6 = 0x7974706d65;
  if (bVar4 != 1) {
    uVar6 = 0x617461645f6f6e;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4 != 1) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x65646f636564;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  uVar6 = 0xe600000000000000;
  if (bVar4 != 0) {
    uVar6 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar5 = uVar2;
  }
  func_0x000107c5fb58(param_1,uVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1017411c4; end: 1017411cb;  */

void FUN_1017411c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar6 = 0xeb00000000657469;
  uVar1 = 0x72775f65726f7473;
  if (bVar4 != 4) {
    uVar6 = 0xe500000000000000;
    uVar1 = 0x726568746f;
  }
  uVar3 = 0x800000010efb9cb0;
  uVar5 = 0xd000000000000010;
  if (bVar4 != 3) {
    uVar3 = uVar6;
    uVar5 = uVar1;
  }
  uVar6 = 0x7974706d65;
  if (bVar4 != 1) {
    uVar6 = 0x617461645f6f6e;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4 != 1) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x65646f636564;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  uVar6 = 0xe600000000000000;
  if (bVar4 != 0) {
    uVar6 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar5 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1017411cc; end: 1017411f7;  */

void FUN_1017411cc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000101741874(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1017411f8; end: 1017412b7;  */

void FUN_1017411f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xeb00000000657469;
  uVar1 = 0x72775f65726f7473;
  if (bVar4 != 4) {
    uVar6 = 0xe500000000000000;
    uVar1 = 0x726568746f;
  }
  uVar3 = 0x800000010efb9cb0;
  uVar5 = 0xd000000000000010;
  if (bVar4 != 3) {
    uVar3 = uVar6;
    uVar5 = uVar1;
  }
  uVar6 = 0x7974706d65;
  if (bVar4 != 1) {
    uVar6 = 0x617461645f6f6e;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4 != 1) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x65646f636564;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  uVar6 = 0xe600000000000000;
  if (bVar4 != 0) {
    uVar6 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar5 = uVar2;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1017412b8; end: 1017414fb;  */

void FUN_1017412b8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar6 = 0xd000000000000011;
  pcVar5 = "e:compliance_flags_data";
  if (bVar4 != 2) {
    uVar6 = 0xd000000000000012;
    pcVar5 = "storyreply.GetTopFansResponse";
  }
  uVar1 = 0x6465746172647968;
  if (bVar4 != 0) {
    uVar1 = 0xd000000000000017;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0x800000010efb9c90;
  }
  uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar6 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar6,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1017414fc; end: 10174157b;  */

void FUN_1017414fc(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xd000000000000011;
  pcVar5 = "e:compliance_flags_data";
  if (bVar4 != 2) {
    uVar6 = 0xd000000000000012;
    pcVar5 = "storyreply.GetTopFansResponse";
  }
  uVar1 = 0x6465746172647968;
  if (bVar4 != 0) {
    uVar1 = 0xd000000000000017;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0x800000010efb9c90;
  }
  uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar6 = uVar1;
  }
  *param_1 = uVar6;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10174157c; end: 10174178b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174157c(double param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [15];
  char cStack_61;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dc5848);
  func_0x000107c6157c(uVar6);
  func_0x000100075034(&cStack_61,FUN_10174178c,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar6);
  if (cStack_61 == '\x01') {
    func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(unaff_x20 + _DAT_112dc5850);
    (**(code **)(lVar8 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101741784);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101741788);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10174178c);
      (*pcVar3)();
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar5 = 0xe900000000000070;
    uVar6 = 0x656761726f7473;
    if (param_2 != 2) {
      uVar6 = 0xd000000000000012;
    }
    uVar1 = 0xe700000000000000;
    if (param_2 != 2) {
      uVar1 = 0x800000010efb9c20;
    }
    uVar2 = 0x61727473746f6f62;
    if (param_2 != 0) {
      uVar5 = 0xea0000000000636e;
      uVar2 = 0x79735f61746c6564;
    }
    if (param_2 < 2) {
      uVar1 = uVar5;
      uVar6 = uVar2;
    }
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x0001053dc588(uVar7,uVar6,(long)param_1);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 10174178c; end: 1017417ab;  */

void FUN_10174178c(undefined1 *param_1,byte *param_2)

{
  if ((*param_2 & 1) != 0) {
    *param_1 = 0;
    return;
  }
  *param_2 = 1;
  *param_1 = 1;
  return;
}



/* Entry: 1017417ac; end: 10174193b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017417ac(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = _DAT_112dc5850;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc5848));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10174193c; end: 10174193f;  */

void FUN_10174193c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d985460;
  func_0x000107c61520(&UNK_10d985460,&UNK_1104017c8);
  puRam0000000112dc5860 = puVar1;
  return;
}



/* Entry: 101741940; end: 10174197f;  */

void FUN_101741940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d985460;
  func_0x000107c61520(&UNK_10d985460,&UNK_1104017c8);
  puRam0000000112dc5860 = puVar1;
  return;
}



/* Entry: 101741980; end: 101741983;  */

void FUN_101741980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d985500;
  func_0x000107c61520(&UNK_10d985500,&UNK_110401858);
  puRam0000000112dc5868 = puVar1;
  return;
}



/* Entry: 101741984; end: 1017419c3;  */

void FUN_101741984(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d985500;
  func_0x000107c61520(&UNK_10d985500,&UNK_110401858);
  puRam0000000112dc5868 = puVar1;
  return;
}



/* Entry: 1017419c4; end: 1017419c7;  */

void FUN_1017419c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9855a0;
  func_0x000107c61520(&UNK_10d9855a0,&UNK_1104018e8);
  puRam0000000112dc5870 = puVar1;
  return;
}



/* Entry: 1017419c8; end: 101741a07;  */

void FUN_1017419c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9855a0;
  func_0x000107c61520(&UNK_10d9855a0,&UNK_1104018e8);
  puRam0000000112dc5870 = puVar1;
  return;
}



/* Entry: 101741a08; end: 101741e3f;  */

undefined1  [16] FUN_101741a08(void)

{
  return ZEXT816(0x110401738);
}



/* Entry: 101741e40; end: 1017422eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101741e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_78;
  long lStack_70;
  
  lVar1 = 0;
  uStack_b8 = param_1;
  func_0x000107c5f804();
  lStack_c8 = *(long *)(lVar1 + -8);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  func_0x000107c613fc();
  func_0x000100083b20(&puStack_b0);
  puVar9 = puStack_b0;
  lVar1 = -0x7ffffffef1046400;
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d);
  puVar3 = puVar9;
  func_0x000107c3ebd4();
  func_0x000107c615e8(puVar9);
  func_0x000107c61170(uVar2);
  uStack_f0 = unaff_x20;
  if ((int)puVar3 == 0) {
    func_0x000107c61574(uStack_b8);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_6);
  }
  else {
    uStack_f8 = param_3;
    uStack_e8 = param_6;
    func_0x000100083b20(&puStack_b0);
    lStack_d8 = lStack_a8;
    puStack_e0 = puStack_b0;
    func_0x000100083b20(&puStack_b0);
    puVar9 = puStack_b0;
    lVar4 = *(long *)(puStack_b0 + _DAT_113091ad8);
    func_0x000107c61174();
    func_0x000107c61170(puVar9);
    lVar5 = lVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar1;
    lVar6 = lVar5;
    uStack_100 = param_2;
    if (lVar5 == 0) {
      lVar6 = 0;
      func_0x000107c5faec(0);
      lVar4 = lVar1;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar1);
    }
    func_0x000107c5faec();
    func_0x000107c61434(lVar4);
    puStack_108 = puStack_e0;
    func_0x000107c615f0();
    func_0x000100083b20(&puStack_b0);
    lVar7 = 0;
    FUN_101745bfc();
    lVar1 = lVar7;
    func_0x000107c610f8();
    plVar8 = (long *)(lVar1 + _DAT_112dc5ce0);
    *plVar8 = lVar5;
    plVar8[1] = lVar4;
    plVar8 = (long *)(lVar1 + _DAT_112dc5ce8);
    plVar8[1] = lStack_d8;
    *plVar8 = (long)puStack_e0;
    *(undefined **)(lVar1 + _DAT_112dc5cf0) = puStack_b0;
    plVar8 = &lStack_78;
    lStack_78 = lVar1;
    lStack_70 = lVar7;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    func_0x000107c6142c(lVar4);
    puVar9 = PTR_PTR_1126b0438;
    func_0x000107c61168(PTR_PTR_1126b0438);
    func_0x000107c4d3fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar3 = PTR_PTR_1126b0440;
    func_0x000107c610f8();
    uVar2 = 0x6e61696c706d6f43;
    func_0x000107c5fadc(0x6e61696c706d6f43,0xef7367616c466563);
    func_0x000107c4709c();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar2);
    lVar5 = lStack_c0;
    lVar1 = lStack_c8;
    (**(code **)(lStack_c8 + 0x68))
              (auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lStack_c0)
    ;
    puVar10 = PTR_PTR_1126ae790;
    func_0x000107c610f8(PTR_PTR_1126ae790);
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efb9d20);
    func_0x000107c5f800();
    func_0x000107c470d0(puVar10);
    func_0x000107c61170(uVar2);
    (**(code **)(lVar1 + 8))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
    puVar9 = &UNK_110401988;
    func_0x000107c613fc(&UNK_110401988,0x28,7);
    *(undefined8 *)(puVar9 + 0x10) = param_4;
    *(undefined **)(puVar9 + 0x18) = puVar3;
    *(long **)(puVar9 + 0x20) = plVar8;
    uStack_90 = 0x101742414;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1104019a0;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar9;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_88;
    func_0x000107c6157c(param_4);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(plVar8);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(puVar10);
    func_0x000107c60bd0(ppuVar11);
    uVar2 = uStack_e8;
    func_0x000100083b20(&puStack_b0);
    puVar9 = puStack_b0;
    uVar12 = *(undefined8 *)(puStack_b0 + _DAT_113046c80);
    func_0x000107c61174(uVar12);
    func_0x000107c61170(puVar9);
    FUN_101748b74(uVar12);
    func_0x000107c61170(uVar12);
    func_0x000107c61574(uStack_b8);
    func_0x000107c61574(uStack_100);
    func_0x000107c61574(uStack_f8);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(plVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puStack_108);
  }
  return uStack_f0;
}



/* Entry: 1017422ec; end: 1017423f7;  */

void FUN_1017422ec(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c5b6b8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b0448;
    func_0x000107c610f8(PTR_PTR_1126b0448);
    uVar4 = 0x6e61696c706d6f43;
    func_0x000107c5fadc(0x6e61696c706d6f43,0xef7367616c466563);
    func_0x000107c478bc(puVar3);
    func_0x000107c61170(uVar4);
    lVar1 = lVar2;
    func_0x000107c5c564(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1017423f8; end: 101742467;  */

void FUN_1017423f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101742468; end: 10174249b;  */

void FUN_101742468(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10174249c; end: 1017424a7;  */

void FUN_10174249c(long param_1,long param_2)

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



/* Entry: 1017424a8; end: 101742507;  */

void FUN_1017424a8(undefined8 *param_1)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000107c61574(uStack_38);
  func_0x000100083b20(&uStack_38);
  *param_1 = uStack_38;
  param_1[1] = &PTR_DAT_110401550;
  return;
}



/* Entry: 101742508; end: 101742543;  */

void FUN_101742508(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  param_1[1] = &PTR_DAT_110401568;
  return;
}



/* Entry: 101742544; end: 10174256b;  */

undefined1  [16] FUN_101742544(void)

{
  return ZEXT816(0x110401ad0);
}



/* Entry: 10174256c; end: 1017425ff;  */

/* WARNING: Possible PIC construction at 0x0001017425e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017425e8) */

void FUN_10174256c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_2;
  FUN_101745040();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010173a508();
  *(undefined **)(lVar2 + 0x70) = puVar3;
  puVar3 = PTR_PTR_1126a7a90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x80) = param_3;
  *(undefined **)(lVar2 + 0x88) = puVar3;
  *(long *)(lVar2 + 0x78) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110401b78;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101742600; end: 101742607;  */

/* WARNING: Possible PIC construction at 0x0001017425e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017425e8) */

void FUN_101742600(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_101745040();
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010173a508();
  *(undefined **)(lVar4 + 0x70) = puVar5;
  puVar5 = PTR_PTR_1126a7a90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar4 + 0x80) = uVar2;
  *(undefined **)(lVar4 + 0x88) = puVar5;
  *(long *)(lVar4 + 0x78) = lVar1;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110401b78;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 101742608; end: 101742763;  */

long FUN_101742608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010173a508();
  *(undefined **)(unaff_x20 + 0x70) = puVar1;
  puVar1 = PTR_PTR_1126a7a90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  *(undefined **)(unaff_x20 + 0x88) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  return unaff_x20;
}



/* Entry: 101742764; end: 101742783;  */

bool FUN_101742764(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && (int)param_1[1] == (int)param_2[1];
}



/* Entry: 101742784; end: 1017428b3;  */

void FUN_101742784(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010efb9d50);
  uVar3 = uStack_58;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar1);
  if ((int)uVar3 != 0) {
    puVar2 = &UNK_110401b60;
    func_0x000107c613fc(&UNK_110401b60,0x2a,7);
    *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    puVar2[0x28] = (byte)param_3 & 1;
    puVar2[0x29] = (byte)((uint)param_3 >> 8) & 1;
    func_0x000107c6157c();
    func_0x000107c61174(param_2);
    uVar3 = 7;
    func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985810,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1017428b4; end: 1017428cf;  */

void FUN_1017428b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined2 param_5)

{
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017428d0,param_2,0);
  return;
}



/* Entry: 1017428d0; end: 10174290b;  */

void FUN_1017428d0(void)

{
  long unaff_x22;
  
  FUN_10174290c(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(ushort *)(unaff_x22 + 0x28) & 0x101);
                    /* WARNING: Could not recover jumptable at 0x000101742908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10174290c; end: 101742b93;  */

void FUN_10174290c(ulong param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar2 = param_1;
  func_0x0001005923b4();
  func_0x000107c61428(unaff_x20 + 0x70,auStack_68,0,0);
  lVar9 = *(long *)(unaff_x20 + 0x70);
  if ((((*(long *)(lVar9 + 0x10) == 0) ||
       (uVar3 = param_1, uVar7 = uVar2, FUN_101742d30(), (uVar7 & 1) == 0)) ||
      (pbVar1 = (byte *)(*(long *)(lVar9 + 0x38) + uVar3 * 2), (uint)*pbVar1 != (param_3 & 1))) ||
     ((((uint)pbVar1[1] ^ (param_3 & 0x100) >> 8) & 1) != 0)) {
    func_0x000107c61428(unaff_x20 + 0x70,auStack_80,0x21,0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
    func_0x000107c61558(uVar4);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x70) = 0x8000000000000000;
    FUN_10174334c(param_3 & 0x101,param_1,uVar2,uVar4);
    *(undefined8 *)(unaff_x20 + 0x70) = uVar8;
    func_0x000107c614a8(auStack_80);
    puVar5 = PTR_PTR_1126dea98;
    func_0x000107c61168(PTR_PTR_1126dea98);
    func_0x000107c405fc();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    func_0x000101742a78(puVar6,param_1,param_2,param_3 & 0x101);
    FUN_101742b94(param_2,puVar6,param_1,param_3 & 0x101);
    func_0x000107c6142c(param_1);
  }
  return;
}



/* Entry: 101742b94; end: 101742cbf;  */

void FUN_101742b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x88);
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001005923b4();
  puVar4 = PTR___ss6UInt32VN_11034f020;
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
  func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                      PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar5);
  uVar6 = 0xd000000000000016;
  bVar3 = (param_4 & 0x100) != 0;
  pcVar2 = "disabled_remediable";
  if (bVar3) {
    uVar6 = 0xd000000000000012;
    pcVar2 = "enabled_non_remediable";
  }
  uVar7 = 0xd000000000000017;
  pcVar1 = "LAG_READ_LOGGING_ENABLED";
  if (bVar3) {
    uVar7 = 0xd000000000000013;
    pcVar1 = "disabled_non_remediable";
  }
  if ((param_4 & 1) == 0) {
    pcVar2 = pcVar1;
    uVar6 = uVar7;
  }
  func_0x000107c5fadc(uVar6,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x0001053dc6fc(uVar8,param_2,puVar4,uVar6,1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101742cc0; end: 101742cfb;  */

void FUN_101742cc0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 101742cfc; end: 101742d07;  */

void FUN_101742cfc(void)

{
  return;
}



/* Entry: 101742d08; end: 101742d2f;  */

void FUN_101742d08(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_101742784(param_1,param_2,param_3 & 0x101);
  return;
}



/* Entry: 101742d30; end: 101742d9b;  */

void FUN_101742d30(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c60690(param_1);
  uVar2 = param_2;
  func_0x000107c6069c();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    plVar1 = (long *)(*(long *)(unaff_x20 + 0x30) + uVar2 * 0x10);
    if (*plVar1 == param_1 && (int)plVar1[1] == (int)param_2) {
      return;
    }
    uVar2 = uVar2 + 1 & ~uVar3;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101742d9c; end: 101742ddf;  */

void FUN_101742d9c(ulong param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined4 *)(*(long *)(param_4 + 0x30) + param_1 * 4) = param_2;
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101742de0);
  (*pcVar2)();
}



/* Entry: 101742de0; end: 101742e8f;  */

void FUN_101742de0(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  lVar2 = 0;
  FUN_10174031c();
  FUN_10173a69c(param_3,lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101742e90);
  (*pcVar1)();
}



/* Entry: 101742e90; end: 101742f5f;  */

void FUN_101742e90(ulong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  *(undefined4 *)(puVar2 + 1) = param_3;
  pbVar3 = (byte *)(*(long *)(param_5 + 0x38) + param_1 * 2);
  *pbVar3 = (byte)param_4 & 1;
  pbVar3[1] = (byte)((uint)param_4 >> 8) & 1;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101742eec);
  (*pcVar4)();
}



/* Entry: 101742f60; end: 10174309b;  */

ulong FUN_101742f60(undefined8 *param_1,ulong param_2,uint param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_2;
  func_0x00010149a22c();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101743020);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    param_3 = param_3 & 1;
    FUN_101743e08(lVar6);
    uVar3 = param_2;
    func_0x00010149a22c();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101742ff0);
      (*pcVar2)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x00010174346c();
    lVar6 = *unaff_x20;
    goto joined_r0x000101743034;
  }
  lVar6 = *unaff_x20;
joined_r0x000101743034:
  if ((uVar4 & 1) != 0) {
    uVar3 = *(long *)(lVar6 + 0x38) + uVar3 * 0x40;
    lVar6 = 0x112dc5cd8;
    func_0x0001000285a8(0x112dc5cd8,&UNK_10d985960);
    (**(code **)(*(long *)(lVar6 + -8) + 0x28))(uVar3,param_1,lVar6);
    return uVar3;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  *(int *)(*(long *)(lVar6 + 0x30) + uVar3 * 4) = (int)param_2;
  puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x40);
  uVar10 = param_1[1];
  uVar9 = *param_1;
  uVar12 = param_1[3];
  uVar11 = param_1[2];
  uVar13 = param_1[4];
  uVar15 = param_1[7];
  uVar14 = param_1[6];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar13;
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  puVar1[1] = uVar10;
  *puVar1 = uVar9;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10174309c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return uVar3;
}



/* Entry: 10174309c; end: 10174321b;  */

ulong FUN_10174309c(undefined8 param_1,ulong param_2,uint param_3)

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
  uVar3 = param_2;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = *unaff_x20;
  uVar4 = param_2;
  func_0x0001000c8928(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1017431b8);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(lVar5 + uVar6)) {
    param_3 = param_3 & 1;
    func_0x0001017446b4();
    uVar4 = param_2;
    func_0x0001000c8928(param_2);
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10174321c);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    FUN_1017438d8();
    lVar5 = *unaff_x20;
  }
  else {
    lVar5 = *unaff_x20;
  }
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    lVar2 = 0;
    FUN_10174031c();
    uVar4 = lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * uVar4;
    lVar2 = 0;
    FUN_10174031c();
    (**(code **)(*(long *)(lVar2 + -8) + 0x28))(uVar4,param_1,lVar2);
    return uVar4;
  }
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_101742de0(uVar4,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar5);
  return uVar4;
}



/* Entry: 10174321c; end: 10174334b;  */

void FUN_10174321c(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010149a22c();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1017432e0);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x000101744a54(lVar5);
    uVar2 = param_2;
    func_0x00010149a22c();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1017432ac);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_101743b38();
    lVar5 = *unaff_x20;
    goto joined_r0x0001017432f4;
  }
  lVar5 = *unaff_x20;
joined_r0x0001017432f4:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(int *)(*(long *)(lVar5 + 0x30) + uVar2 * 4) = (int)param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10174334c);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 10174334c; end: 1017435fb;  */

void FUN_10174334c(uint param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  
  uVar7 = (uint)param_3;
  lVar11 = *unaff_x20;
  uVar5 = param_2;
  FUN_101742d30();
  lVar9 = *(long *)(lVar11 + 0x10);
  uVar10 = (ulong)~(uint)param_3 & 1;
  lVar8 = lVar9 + uVar10;
  if (SCARRY8(lVar9,uVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10174342c);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar8) {
    func_0x000101744cbc(lVar8,param_4 & 1);
    uVar5 = param_2;
    uVar6 = uVar7;
    FUN_101742d30();
    if (((uint)param_3 & 1) != (uVar6 & 1)) {
      func_0x000107c60624(&UNK_110401c10);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1017433ec);
      (*pcVar4)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101743c94();
    lVar8 = *unaff_x20;
    goto joined_r0x000101743440;
  }
  lVar8 = *unaff_x20;
joined_r0x000101743440:
  if ((param_3 & 1) != 0) {
    pbVar3 = (byte *)(*(long *)(lVar8 + 0x38) + uVar5 * 2);
    *pbVar3 = (byte)param_1 & 1;
    pbVar3[1] = (byte)(param_1 >> 8) & 1;
    return;
  }
  lVar9 = lVar8 + (uVar5 >> 6) * 8;
  *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar5 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar5 * 0x10);
  *puVar1 = param_2;
  *(uint *)(puVar1 + 1) = uVar7;
  puVar2 = (undefined1 *)(*(long *)(lVar8 + 0x38) + uVar5 * 2);
  *puVar2 = (char)(param_1 & 0x101);
  puVar2[1] = (char)((param_1 & 0x101) >> 8);
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101742eec);
    (*pcVar4)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
  return;
}



/* Entry: 1017435fc; end: 101743747;  */

void FUN_1017435fc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112dc5460,&UNK_10d985950);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_1017436d4;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar8 * 4) =
             *(undefined4 *)(*(long *)(lVar10 + 0x30) + uVar8 * 4);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_1017436d4:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101743748);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101743728;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_101743728:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}


