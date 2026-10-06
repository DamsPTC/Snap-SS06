/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dc5110; end: 101dc5177;  */

void FUN_101dc5110(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dc5148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dc5178; end: 101dc51fb;  */

void FUN_101dc5178(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101dc5868;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101dc51fc; end: 101dc523b;  */

void FUN_101dc51fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dc5238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dc523c; end: 101dc5247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc523c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar10 = &lStack_60;
  lVar7 = 0;
  FUN_101dc1f28();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112e2d0c8) = 0;
  lVar5 = _DAT_112e2d0d0;
  func_0x000107c61614(lVar8 + _DAT_112e2d0d0,0);
  lVar6 = _DAT_112e2d0e0;
  lVar9 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar8 + lVar6,1,1,lVar9);
  *(undefined8 *)(lVar8 + _DAT_112e2d0c0) = uVar2;
  func_0x000107c61604(lVar8 + lVar5,uVar3);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e2d0d8);
  *puVar1 = FUN_101dc56cc;
  puVar1[1] = param_1;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar8;
  lStack_58 = lVar7;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_60,puVar4);
  func_0x000107c3d624(uVar11);
  func_0x000107c61170(plVar10);
  return;
}



/* Entry: 101dc5248; end: 101dc5353;  */

/* WARNING: Removing unreachable block (ram,0x000101dc5348) */

undefined1  [16] FUN_101dc5248(undefined8 ***param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  
  ppuStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_50;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    func_0x000100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    (*param_4)(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = pppuVar1;
    (*param_4)(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 101dc5354; end: 101dc53d3;  */

void FUN_101dc5354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101dc5858,0,0);
  return;
}



/* Entry: 101dc53d4; end: 101dc53eb;  */

void FUN_101dc53d4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc53ec,0,0);
  return;
}



/* Entry: 101dc53ec; end: 101dc54b3;  */

void FUN_101dc53ec(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101dc5434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dc54b4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110485310;
  func_0x000107c613fc(&UNK_110485310,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101dc56c0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dc54b4; end: 101dc54f3;  */

void FUN_101dc54b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc54f4,0,0);
  return;
}



/* Entry: 101dc54f4; end: 101dc5503;  */

void FUN_101dc54f4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dc5500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101dc5504; end: 101dc56bf;  */

ulong FUN_101dc5504(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc55e8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc55ec);
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
  func_0x000101dc57c4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc56c0);
  (*pcVar2)();
}



/* Entry: 101dc56c0; end: 101dc56cb;  */

void FUN_101dc56c0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*(code *)0x101dc585c)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101dc56cc; end: 101dc56ef;  */

void FUN_101dc56cc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100b60084(&uStack_18);
  return;
}



/* Entry: 101dc56f0; end: 101dc575b;  */

void FUN_101dc56f0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101dc586c;
  plVar4[5] = lVar2;
  plVar4[6] = lVar5;
  plVar4[4] = lVar1;
  plVar3 = (long *)0x1c0;
  func_0x000107c615b8();
  plVar4[7] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101dc2270;
  plVar3[0x2d] = lVar5;
  plVar3[0x2e] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc27e8,0,0);
  return;
}



/* Entry: 101dc575c; end: 101dc5783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc575c(undefined *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  byte **ppbVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x20;
  uint uVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined1 auStack_130 [80];
  byte *pbStack_e0;
  ulong uStack_d8;
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [24];
  
  lVar19 = *(long *)(unaff_x20 + 0x10);
  lVar13 = *(long *)(unaff_x20 + 0x18);
  lVar14 = *(long *)(unaff_x20 + 0x20);
  puVar10 = auStack_130;
  func_0x000107c61428(lVar19 + 0x10,auStack_78,0,0);
  uVar2 = lVar19 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  func_0x000101dc4bbc();
  if (uVar3 == 0) {
    lVar19 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar10 = auStack_c8;
    func_0x000107c61534();
    *(undefined8 *)(lVar19 + 0x18) = 2;
    *(undefined8 *)(lVar19 + 0x10) = 1;
    uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar19 + 0x20) = uVar7;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar19 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar19 + 0x28) = puVar10;
    *(undefined8 *)(lVar19 + 0x30) = 0xd000000000000029;
    *(undefined8 *)(lVar19 + 0x38) = 0x800000010f010a10;
    lVar14 = lVar19;
    func_0x000100214a84(lVar19);
    func_0x000107c61588(lVar19);
    func_0x000101dc5784((undefined8 *)(lVar19 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    uVar7 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
    lVar19 = lVar14;
    func_0x000107c5f9dc(lVar14,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar14);
    func_0x000107c466bc();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
LAB_101dc4754:
    func_0x000107c61170(lVar19);
    func_0x000107c61428(lVar13 + 0x10,&pbStack_e0,1,0);
    param_1 = *(undefined **)(lVar13 + 0x10);
    *(undefined **)(lVar13 + 0x10) = puVar4;
  }
  else {
    pbVar17 = *(byte **)(lVar14 + _DAT_112fd9a98);
    pbVar12 = (byte *)((ulong *)(lVar14 + _DAT_112fd9a98))[1];
    pbVar9 = (byte *)((ulong)pbVar17 & 0xffffffffffff);
    pbVar16 = (byte *)((ulong)pbVar12 >> 0x38 & 0xf);
    pbVar8 = pbVar9;
    if (((ulong)pbVar12 & 0x2000000000000000) != 0) {
      pbVar8 = pbVar16;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_101dc4624;
    if (((ulong)pbVar12 >> 0x3c & 1) == 0) {
      if (((ulong)pbVar12 >> 0x3d & 1) != 0) {
        pbStack_e0 = pbVar17;
        uStack_d8 = (ulong)pbVar12 & 0xffffffffffffff;
        uVar21 = (uint)pbVar17 & 0xff;
        if (uVar21 == 0x2b) {
          if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bb0);
            (*pcVar1)();
          }
          pbVar16 = pbVar16 + -1;
          if (pbVar16 == (byte *)0x0) goto LAB_101dc4610;
          lVar19 = 0;
          pbVar17 = (byte *)((ulong)&pbStack_e0 | 1);
          do {
            if (((9 < *pbVar17 - 0x30) ||
                (lVar18 = lVar19 * 10, SUB168(SEXT816(lVar19) * SEXT816(10),8) != lVar18 >> 0x3f))
               || (uVar20 = (ulong)(byte)(*pbVar17 - 0x30), lVar19 = lVar18 + uVar20,
                  SCARRY8(lVar18,uVar20))) goto LAB_101dc4610;
            uVar21 = 0;
            pbVar16 = pbVar16 + -1;
            pbVar17 = pbVar17 + 1;
          } while (pbVar16 != (byte *)0x0);
        }
        else if (uVar21 == 0x2d) {
          if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4ba8);
            (*pcVar1)();
          }
          pbVar16 = pbVar16 + -1;
          if (pbVar16 == (byte *)0x0) {
LAB_101dc4610:
            uVar21 = 1;
          }
          else {
            lVar19 = 0;
            pbVar17 = (byte *)((ulong)&pbStack_e0 | 1);
            do {
              if (((9 < *pbVar17 - 0x30) ||
                  (lVar18 = lVar19 * 10, SUB168(SEXT816(lVar19) * SEXT816(10),8) != lVar18 >> 0x3f))
                 || (uVar20 = (ulong)(byte)(*pbVar17 - 0x30), lVar19 = lVar18 - uVar20,
                    SBORROW8(lVar18,uVar20))) goto LAB_101dc4610;
              uVar21 = 0;
              pbVar16 = pbVar16 + -1;
              pbVar17 = pbVar17 + 1;
            } while (pbVar16 != (byte *)0x0);
          }
        }
        else {
          if (pbVar16 == (byte *)0x0) goto LAB_101dc4610;
          lVar19 = 0;
          ppbVar15 = &pbStack_e0;
          do {
            if (((9 < *(byte *)ppbVar15 - 0x30) ||
                (lVar18 = lVar19 * 10, SUB168(SEXT816(lVar19) * SEXT816(10),8) != lVar18 >> 0x3f))
               || (uVar20 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30), lVar19 = lVar18 + uVar20,
                  SCARRY8(lVar18,uVar20))) goto LAB_101dc4610;
            uVar21 = 0;
            pbVar16 = pbVar16 + -1;
            ppbVar15 = (byte **)((long)ppbVar15 + 1);
          } while (pbVar16 != (byte *)0x0);
        }
        goto LAB_101dc4618;
      }
      if (((ulong)pbVar17 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        pbVar17 = (byte *)(((ulong)pbVar12 & 0xfffffffffffffff) + 0x20);
        pbVar12 = pbVar9;
      }
      if (*pbVar17 != 0x2b) {
        if (*pbVar17 != 0x2d) {
          if (pbVar12 == (byte *)0x0) goto LAB_101dc4624;
          lVar19 = 0;
          pbVar8 = pbVar17;
          while (pbVar8 != (byte *)0x0) {
            if (((9 < *pbVar17 - 0x30) ||
                (lVar18 = lVar19 * 10, SUB168(SEXT816(lVar19) * SEXT816(10),8) != lVar18 >> 0x3f))
               || (uVar20 = (ulong)(byte)(*pbVar17 - 0x30), lVar19 = lVar18 + uVar20,
                  SCARRY8(lVar18,uVar20))) goto LAB_101dc4624;
            pbVar12 = pbVar12 + -1;
            pbVar17 = pbVar17 + 1;
            pbVar8 = pbVar12;
          }
          goto LAB_101dc4778;
        }
        pbVar8 = pbVar12 + -1;
        if ((long)pbVar12 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4ba4);
          (*pcVar1)();
        }
        if (pbVar8 != (byte *)0x0) {
          lVar19 = 0;
          do {
            pbVar17 = pbVar17 + 1;
            if (((9 < *pbVar17 - 0x30) ||
                (lVar18 = lVar19 * 10, SUB168(SEXT816(lVar19) * SEXT816(10),8) != lVar18 >> 0x3f))
               || (uVar20 = (ulong)(byte)(*pbVar17 - 0x30), lVar19 = lVar18 - uVar20,
                  SBORROW8(lVar18,uVar20))) goto LAB_101dc4624;
            pbVar8 = pbVar8 + -1;
          } while (pbVar8 != (byte *)0x0);
          goto LAB_101dc4778;
        }
        goto LAB_101dc4624;
      }
      pbVar8 = pbVar12 + -1;
      if ((long)pbVar12 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bac);
        (*pcVar1)();
      }
      if (pbVar8 == (byte *)0x0) goto LAB_101dc4624;
      lVar19 = 0;
      do {
        pbVar17 = pbVar17 + 1;
        if (((9 < *pbVar17 - 0x30) ||
            (lVar18 = lVar19 * 10, SUB168(SEXT816(lVar19) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
           (uVar20 = (ulong)(byte)(*pbVar17 - 0x30), lVar19 = lVar18 + uVar20,
           SCARRY8(lVar18,uVar20))) goto LAB_101dc4624;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    else {
      func_0x000107c61434(pbVar12);
      pbVar8 = pbVar12;
      FUN_101dc5248(pbVar17,pbVar12,10,&UNK_100fb6c80);
      uVar21 = (uint)pbVar8;
      func_0x000107c6142c(pbVar12);
LAB_101dc4618:
      if ((uVar21 & 0xff) == 1) {
LAB_101dc4624:
        lVar19 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        func_0x000107c61534();
        *(undefined8 *)(lVar19 + 0x18) = 2;
        *(undefined8 *)(lVar19 + 0x10) = 1;
        uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        func_0x000107c5faec();
        *(undefined8 *)(lVar19 + 0x20) = uVar7;
        puVar5 = PTR___sSSN_11034da80;
        *(undefined **)(lVar19 + 0x48) = PTR___sSSN_11034da80;
        *(undefined1 **)(lVar19 + 0x28) = puVar10;
        *(undefined8 *)(lVar19 + 0x30) = 0xd000000000000023;
        *(undefined8 *)(lVar19 + 0x38) = 0x800000010f010a40;
        lVar14 = lVar19;
        func_0x000100214a84(lVar19);
        func_0x000107c61588(lVar19);
        func_0x000101dc5784((undefined8 *)(lVar19 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8();
        uVar7 = 0xd00000000000001c;
        func_0x000107c5fadc(0xd00000000000001c,0x800000010da161e0);
        lVar19 = lVar14;
        func_0x000107c5f9dc(lVar14,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(lVar14);
        func_0x000107c466bc();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar7);
        goto LAB_101dc4754;
      }
    }
LAB_101dc4778:
    puVar5 = PTR_PTR_1126b00c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c55218();
    puVar4 = puVar5;
    func_0x000107c55bcc(param_1);
    uVar21 = (uint)puVar4;
    puVar4 = param_1;
    func_0x000107e64684();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126d8d40;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    uVar20 = ((ulong *)(lVar14 + _DAT_112fd9aa8))[1];
    if (uVar20 != 0) {
      uVar23 = *(ulong *)(lVar14 + _DAT_112fd9aa8);
      uVar11 = uVar23 & 0xffffffffffff;
      if ((uVar20 & 0x2000000000000000) != 0) {
        uVar11 = uVar20 >> 0x38 & 0xf;
      }
      if (uVar11 != 0) {
        lVar19 = 0x112d38dc0;
        func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
        func_0x000107c613fc();
        *(undefined8 *)(lVar19 + 0x18) = 2;
        *(undefined8 *)(lVar19 + 0x10) = 1;
        *(undefined **)(lVar19 + 0x38) = PTR___sSSN_11034da80;
        *(ulong *)(lVar19 + 0x20) = uVar23;
        *(ulong *)(lVar19 + 0x28) = uVar20;
        func_0x000101dc57c4(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        func_0x000107c61434(uVar20);
        func_0x000107c600f0();
        lVar13 = lVar19;
        func_0x000107c5a440(puVar4);
        uVar21 = (uint)lVar13;
        func_0x000107c61170(lVar19);
      }
    }
    uVar20 = ((undefined8 *)(lVar14 + _DAT_112fd9a88))[1];
    func_0x000103ee34e0(*(undefined8 *)(lVar14 + _DAT_112fd9a88));
    if ((uVar21 & 0xff) == 1) {
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar22 = PTR_PTR_1126afad0;
      func_0x000107c610f8(PTR_PTR_1126afad0);
      func_0x000107c453e4();
      func_0x000107c55138();
      func_0x000107c5616c(puVar22);
    }
    func_0x000107c54e20(puVar4);
    func_0x000107c61170(puVar22);
    puVar22 = puVar4;
    func_0x000107c4e21c();
    func_0x000107c61180();
    if (puVar22 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bb4);
      (*pcVar1)();
    }
    puVar6 = puVar22;
    func_0x000107c5faec();
    uVar23 = uVar20;
    func_0x000107c61170(puVar22);
    func_0x000107c6142c(uVar20);
    uVar11 = (ulong)puVar6 & 0xffffffffffff;
    if ((uVar20 & 0x2000000000000000) != 0) {
      uVar11 = uVar20 >> 0x38 & 0xf;
    }
    if (uVar11 == 0) {
      uVar7 = 0x6e776f6e6b6e75;
      uVar23 = 0xe700000000000000;
      func_0x000107c5fadc(0x6e776f6e6b6e75);
      func_0x000107c57184(puVar4);
      func_0x000107c61170(uVar7);
    }
    puVar22 = puVar4;
    func_0x000107c5c7d8();
    func_0x000107c61180();
    if (puVar22 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bb8);
      (*pcVar1)();
    }
    puVar6 = puVar22;
    func_0x000107c5faec();
    uVar11 = uVar23;
    func_0x000107c61170(puVar22);
    func_0x000107c6142c(uVar23);
    uVar20 = (ulong)puVar6 & 0xffffffffffff;
    if ((uVar23 & 0x2000000000000000) != 0) {
      uVar20 = uVar23 >> 0x38 & 0xf;
    }
    if (uVar20 == 0) {
      uVar7 = 0x6e776f6e6b6e75;
      uVar11 = 0xe700000000000000;
      func_0x000107c5fadc(0x6e776f6e6b6e75);
      func_0x000107c59c44(puVar4);
      func_0x000107c61170(uVar7);
    }
    func_0x0001000d224c(&pbStack_e0);
    pbVar17 = pbStack_e0;
    if (pbStack_e0 != (byte *)0x0) {
      pbVar8 = pbStack_e0;
      func_0x000107c43f4c();
      func_0x000107c61180();
      func_0x000107c615e8(pbVar17);
      if (pbVar8 != (byte *)0x0) {
        pbVar17 = pbVar8;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(pbVar8);
        pbVar8 = pbVar17;
        func_0x000107c5faec();
        func_0x000107c61170(pbVar17);
        lVar19 = 0x112d38dc0;
        func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
        func_0x000107c613fc();
        *(undefined8 *)(lVar19 + 0x18) = 2;
        *(undefined8 *)(lVar19 + 0x10) = 1;
        *(undefined **)(lVar19 + 0x38) = PTR___sSSN_11034da80;
        *(byte **)(lVar19 + 0x20) = pbVar8;
        *(ulong *)(lVar19 + 0x28) = uVar11;
        func_0x000101dc57c4(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        func_0x000107c600f0(lVar19);
        func_0x000107c55220(puVar4);
        func_0x000107c61170(lVar19);
      }
    }
    uVar20 = uVar3;
    func_0x000107c542f8();
    func_0x000101dc4d70();
    if ((uVar20 & 1) == 0) {
      func_0x000107c56408(uVar3);
    }
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc4bbc);
      (*pcVar1)();
    }
    func_0x000107c531d0();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101dc5784; end: 101dc5803;  */

undefined8 FUN_101dc5784(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101dc5804; end: 101dc5853;  */

void FUN_101dc5804(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101dc5854; end: 101dc586f;  */

void FUN_101dc5854(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dc5500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101dc5870; end: 101dc58bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc5870(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e2d198) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101dc58bc; end: 101dc5913; -[MemoriesLocationDataProviderV2 initWithDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc58bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e2d198) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101dc5914; end: 101dc5c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_101dc5914(double param_1,double param_2,double param_3,double param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  char *pcVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 ***pppuStack_c8;
  undefined1 auStack_c0 [80];
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  bVar1 = true;
  if ((-90.0 <= param_1) && (bVar1 = false, !NAN(param_2) && !NAN(param_1))) {
    bVar1 = param_2 < param_1;
  }
  if (bVar1) {
    uVar11 = 0xd000000000000031;
    pcVar10 = "ot be above 90.0";
  }
  else if (param_2 <= 90.0) {
    pcVar10 = "ories.locationDataProviderV2";
    uVar11 = 0xd000000000000034;
    if ((-180.0 <= param_3) && (param_3 <= param_4)) {
      if (param_4 <= 180.0) {
        uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e2d198) + _DAT_112fd9ce8);
        puVar6 = &UNK_1104854a8;
        func_0x000107c613fc(&UNK_1104854a8,0x40,7);
        *(undefined8 *)(puVar6 + 0x10) = uVar11;
        *(double *)(puVar6 + 0x18) = param_1;
        *(double *)(puVar6 + 0x20) = param_2;
        *(double *)(puVar6 + 0x28) = param_3;
        *(double *)(puVar6 + 0x30) = param_4;
        *(long *)(puVar6 + 0x38) = lVar2;
        func_0x0001000285a8(0x112dd7470,&UNK_10da162b0);
        func_0x000107c613fc();
        func_0x000107c61580(uVar11,2);
        pcVar7 = FUN_101dc5c60;
        func_0x0001000b64ac(FUN_101dc5c60,puVar6);
        ppppuVar8 = (undefined8 ****)pcVar7;
        func_0x0001004575f0();
        func_0x000107c61574(uVar11);
        goto LAB_101dc5b34;
      }
      pcVar10 = "SnapDoc Generation failed";
      uVar11 = 0xd000000000000022;
    }
  }
  else {
    pcVar10 = "0.0 and maxLongitude";
    uVar11 = 0xd000000000000020;
  }
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar9 = auStack_c0;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar6 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar9;
  *(undefined8 *)(lVar2 + 0x30) = uVar11;
  *(ulong *)(lVar2 + 0x38) = (ulong)pcVar10 | 0x8000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar11 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f010bd0);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar2);
  func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
  ppppuVar8 = (undefined8 ****)PTR_PTR_1126af5d0;
  func_0x000107c61168();
  func_0x000107c61174(puVar5);
  puVar6 = puVar5;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar5);
  func_0x000107c42d78();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  pcVar7 = (code *)&pppuStack_c8;
  pppuStack_c8 = ppppuVar8;
  func_0x000100854cb0(pcVar7);
  func_0x000107c61170(ppppuVar8);
  func_0x0001004575f0();
  func_0x000107c61170(puVar5);
LAB_101dc5b34:
  func_0x000107c61574(pcVar7);
  return ppppuVar8;
}



/* Entry: 101dc5c60; end: 101dc5da3;  */

void FUN_101dc5c60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001005f60d4();
  puVar2 = &UNK_1104854d0;
  func_0x000107c613fc(&UNK_1104854d0,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  *(undefined8 *)(puVar2 + 0x38) = param_1;
  *(undefined8 *)(puVar2 + 0x40) = uVar1;
  *(undefined8 *)(puVar2 + 0x48) = uVar4;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar1);
  uVar3 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10da162f0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104854f8;
  func_0x000107c613fc(&UNK_1104854f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  uVar1 = 0;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(FUN_101dc68f8,puVar2,uVar1);
  return;
}



/* Entry: 101dc5da4; end: 101dc5dcb;  */

void FUN_101dc5da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_9;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc5dcc,0,0);
  return;
}



/* Entry: 101dc5dcc; end: 101dc5e8b;  */

void FUN_101dc5dcc(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101dc5e38;
                    /* WARNING: Could not recover jumptable at 0x000101dc5e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101dc5e8c; end: 101dc616b;  */

void FUN_101dc5e8c(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x18) = uVar10;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    puVar5 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    func_0x000107c5ed2c(uVar10);
    uVar7 = uVar10;
    func_0x000107c5ed2c();
    func_0x000107c61170(uVar10);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    *(undefined **)(unaff_x22 + 0x20) = puVar5;
    func_0x000100087f6c(unaff_x22 + 0x20);
    func_0x000107c61170(puVar5);
    func_0x000100c7f554();
    uVar8 = 1;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar1 = *(long *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    puVar4 = PTR_PTR_1126a8bb8;
    func_0x000107c610f8(PTR_PTR_1126a8bb8);
    func_0x000107c45d48();
    puVar5 = PTR_PTR_1126a9578;
    func_0x000107c610f8(PTR_PTR_1126a9578);
    func_0x000107c47814(uVar15,uVar14,uVar13,uVar12);
    func_0x000107c52e44(puVar4);
    func_0x000107c61170(puVar5);
    uVar12 = uVar10;
    func_0x000107c4da58(0x40c3880000000000,uVar10);
    func_0x000107c61180();
    uVar13 = uVar12;
    func_0x000107c5cb30();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    uVar12 = uVar13;
    func_0x0001000b637c(uVar13);
    puVar5 = &UNK_110485520;
    func_0x000107c613fc(&UNK_110485520,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    func_0x000107c615f0(uVar10);
    uVar10 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    plVar6 = (long *)0xc1;
    func_0x0001048785ac(0xc1,0,0x48,4,&UNK_10da16300,puVar5,uVar10);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar12);
    pcVar11 = *(code **)(*plVar6 + 0x70);
    func_0x000107c61580(lVar1,2);
    uVar10 = 0x101dc69dc;
    lVar9 = lVar1;
    (*pcVar11)(0x101dc69dc,lVar1,FUN_101dc6a04,lVar1);
    func_0x000107c61578(lVar1,2);
    func_0x000107c61574(plVar6);
    uVar7 = uVar10;
    func_0x000107c614f0(uVar10);
    (**(code **)(lVar9 + 0x18))(uVar2,uVar7,lVar9);
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar4);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x80);
  }
  FUN_101bb47ac(*(undefined8 *)(unaff_x22 + 0x78),uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101dc6168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc616c; end: 101dc61c3;  */

void FUN_101dc616c(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *param_2;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dc61c4;
  plVar1[0x10] = lVar2;
  plVar1[0x11] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc7318,0,0);
  return;
}



/* Entry: 101dc61c4; end: 101dc6213;  */

void FUN_101dc61c4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc6214,0,0);
  return;
}



/* Entry: 101dc6214; end: 101dc6227;  */

void FUN_101dc6214(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000101dc6224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc6228; end: 101dc628b; -[MemoriesLocationDataProviderV2 fetchLocationMemoriesIdsWithMinLatitude:maxLatitude:minLongitude:maxLongitude:] */

void FUN_101dc6228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_5;
  FUN_101dc5914(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101dc628c; end: 101dc62bf;  */

void FUN_101dc628c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101dc62c0; end: 101dc62cf; -[MemoriesLocationDataProviderV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc62c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e2d198));
  return;
}



/* Entry: 101dc62d0; end: 101dc633b;  */

void FUN_101dc62d0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101dc7a1c(0,0x112e2d1c8,&PTR_PTR_1126bfa28);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e2d1d0;
  plVar5 = (long *)&UNK_10da16320;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101dc633c; end: 101dc64f7;  */

ulong FUN_101dc633c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc6420);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc6424);
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
  FUN_101dc7a1c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc64f8);
  (*pcVar2)();
}



/* Entry: 101dc64f8; end: 101dc6537;  */

void FUN_101dc64f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc6538,0,0);
  return;
}



/* Entry: 101dc6538; end: 101dc6547;  */

void FUN_101dc6538(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dc6544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101dc6548; end: 101dc6587;  */

void FUN_101dc6548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101dc7a64,0,0);
  return;
}



/* Entry: 101dc6588; end: 101dc66af;  */

ulong FUN_101dc6588(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc66b0);
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
  FUN_101dc66b0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc66ac);
      (*pcVar1)();
    }
    FUN_101dc6730(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101dc66b0; end: 101dc672f;  */

undefined * FUN_101dc66b0(undefined *param_1,undefined *param_2)

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
    FUN_101dc62d0();
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



/* Entry: 101dc6730; end: 101dc6847;  */

long FUN_101dc6730(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101dc6844);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dc6848);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101dc7a1c(0,0x112e2d1c8,&PTR_PTR_1126bfa28);
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
      FUN_101dc7a1c(0,0x112e2d1c8,&PTR_PTR_1126bfa28);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dc6840);
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



/* Entry: 101dc6848; end: 101dc6867;  */

void FUN_101dc6848(void)

{
  func_0x000107c61168(&PTR_PTR_1128048f8);
  return;
}



/* Entry: 101dc6868; end: 101dc68f7;  */

void FUN_101dc6868(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101dc7a6c;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar5;
  plVar3[10] = lVar1;
  plVar3[8] = lVar8;
  plVar3[9] = lVar9;
  plVar3[6] = lVar6;
  plVar3[7] = lVar7;
  plVar3[5] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc5dcc,0,0);
  return;
}



/* Entry: 101dc68f8; end: 101dc6937;  */

void FUN_101dc68f8(void)

{
  long unaff_x20;
  
  func_0x000107c5fd50(*(undefined8 *)(unaff_x20 + 0x10),PTR___sytN_11034f1b0 + 8,
                      PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000100c82230();
  return;
}



/* Entry: 101dc6938; end: 101dc699f;  */

void FUN_101dc6938(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101dc69a0;
  plVar2[2] = param_1;
  lVar3 = *param_2;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101dc61c4;
  plVar1[0x10] = lVar3;
  plVar1[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc7318,0,0);
  return;
}



/* Entry: 101dc69a0; end: 101dc6a03;  */

void FUN_101dc69a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dc69d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dc6a04; end: 101dc6a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc6a04(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_113096918);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113096918))[1];
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101dc6a20; end: 101dc6b1b;  */

void FUN_101dc6a20(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
    func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
    func_0x000107c442e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar1 = uVar3;
    func_0x000103edf20c();
    *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
    func_0x000107c61170(uVar3);
    plVar2 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101dc6b1c;
                    /* WARNING: Could not recover jumptable at 0x000101dc6af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_101bb468c();
    return;
  }
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000101dc6b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc6b1c; end: 101dc6b6f;  */

void FUN_101dc6b1c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc6b70,0,0);
  return;
}



/* Entry: 101dc6b70; end: 101dc6f4f;  */

void FUN_101dc6b70(void)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long unaff_x22;
  ulong uVar22;
  undefined *puVar23;
  undefined *puStack_60;
  
  puVar20 = (undefined *)(ulong)*(byte *)(unaff_x22 + 0x40);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(byte *)(unaff_x22 + 0x40) == 1) {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar18;
    iVar6 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar6 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar18);
    FUN_101dc7a08(uVar21,1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    puStack_60 = (undefined *)0x0;
    uVar21 = 0;
    FUN_101dc7a1c(0,0x112e2d1d8,&PTR_PTR_1126a9580);
    func_0x000107c5fc50(uVar18,&puStack_60,uVar21);
    FUN_101dc7a08(uVar18);
    puVar4 = puStack_60;
    if (puStack_60 != (undefined *)0x0) {
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8();
      puVar19 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((ulong)puVar4 >> 0x3e == 0) {
        puVar23 = *(undefined **)(puVar19 + 0x10);
      }
      else {
        puVar23 = puVar4;
        if (-1 < (long)puVar4) {
          puVar23 = puVar19;
        }
        func_0x000107c60480();
      }
      if (puVar23 == (undefined *)0x0) {
        func_0x000107c6142c(puVar4);
      }
      else {
        uVar22 = 0;
        do {
          if (((ulong)puVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar19 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101dc6f2c);
              (*pcVar5)();
            }
            uVar9 = *(ulong *)(puVar4 + uVar22 * 8 + 0x20);
            func_0x000107c61174();
            puVar14 = puVar20;
          }
          else {
            uVar9 = uVar22;
            puVar14 = puVar4;
            FUN_101dc633c(uVar22,puVar4,&PTR_PTR_1126a9580,0x112e2d1d8);
          }
          puVar1 = (undefined *)(uVar22 + 1);
          if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101dc6f24);
            (*pcVar5)();
          }
          uVar13 = uVar9;
          func_0x000107c3eea8();
          func_0x000107c61180();
          uVar10 = uVar13;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar13);
          uVar13 = uVar10;
          func_0x000107c5ee20(uVar10,puVar14);
          func_0x00010006c090(uVar10);
          uVar10 = uVar13;
          func_0x000107e649e4();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          if (uVar10 == 0) {
            func_0x000107c61170(uVar9);
            puVar20 = puVar14;
          }
          else {
            uVar11 = uVar10;
            func_0x000107c5faec();
            puVar15 = puVar14;
            func_0x000107c61170(uVar10);
            uVar13 = uVar9;
            func_0x000107c44fcc();
            func_0x000107c61180();
            uVar10 = uVar13;
            func_0x000107c5faec();
            func_0x000107c61170(uVar13);
            puVar12 = puVar8;
            func_0x000107c61558();
            uVar13 = uVar10;
            puVar16 = puVar15;
            puStack_60 = puVar8;
            func_0x000100029284();
            uVar17 = (ulong)~(uint)puVar16 & 1;
            lVar2 = *(long *)(puVar8 + 0x10) + uVar17;
            if (SCARRY8(*(long *)(puVar8 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101dc6f28);
              (*pcVar5)();
            }
            if (*(long *)(puVar8 + 0x18) < lVar2) {
              func_0x0001001833c8(lVar2,puVar12);
              puVar8 = puStack_60;
              uVar13 = uVar10;
              puVar20 = puVar15;
              func_0x000100029284();
              if (((uint)puVar16 & 1) != ((uint)puVar20 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0
                )(PTR___sSSN_11034da80);
                return;
              }
            }
            else {
              puVar20 = puVar16;
              if (((ulong)puVar12 & 1) == 0) {
                func_0x000100184498();
                puVar8 = puStack_60;
              }
            }
            if (((ulong)puVar16 & 1) == 0) {
              *(ulong *)(puVar8 + (uVar13 >> 6) * 8 + 0x40) =
                   *(ulong *)(puVar8 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
              puVar3 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar13 * 0x10);
              *puVar3 = uVar10;
              puVar3[1] = (ulong)puVar15;
              puVar3 = (ulong *)(*(long *)(puVar8 + 0x38) + uVar13 * 0x10);
              *puVar3 = uVar11;
              puVar3[1] = (ulong)puVar14;
              func_0x000107c61170(uVar9);
              if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101dc6f30);
                (*pcVar5)();
              }
              *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
            }
            else {
              puVar3 = (ulong *)(*(long *)(puVar8 + 0x38) + uVar13 * 0x10);
              uVar13 = puVar3[1];
              *puVar3 = uVar11;
              puVar3[1] = (ulong)puVar14;
              func_0x000107c6142c(uVar13);
              func_0x000107c61170(uVar9);
              func_0x000107c6142c(puVar15);
            }
          }
          uVar22 = uVar22 + 1;
        } while (puVar1 != puVar23);
        func_0x000107c6142c(puVar4);
      }
      goto LAB_101dc6ec0;
    }
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_101dc6ec0:
                    /* WARNING: Could not recover jumptable at 0x000101dc6ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar8);
  return;
}



/* Entry: 101dc6f50; end: 101dc72ff;  */

undefined * FUN_101dc6f50(double param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  
  puVar16 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
  puVar10 = param_3;
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar15 = *(undefined **)(puVar16 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = puVar16;
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar15 = param_2;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (puVar15 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar16 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101dc725c);
            (*pcVar4)();
          }
          puVar5 = *(undefined **)(param_2 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar11;
          puVar10 = param_2;
          FUN_101dc633c(puVar11,param_2,&PTR_PTR_1126a8bc0,0x112e07010);
        }
        puVar1 = puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dc7258);
          (*pcVar4)();
        }
        puVar6 = puVar5;
        func_0x000107c4ab14();
        func_0x000107c61180();
        dVar17 = param_1;
        if (puVar6 != (undefined *)0x0) break;
LAB_101dc6fbc:
        param_1 = dVar17;
        func_0x000107c61170(puVar5);
LAB_101dc6fc4:
        puVar11 = puVar11 + 1;
        if (puVar1 == puVar15) goto LAB_101dc7278;
      }
      func_0x000107c4223c();
      dVar17 = param_1;
      func_0x000107c61170(puVar6);
      puVar6 = puVar5;
      func_0x000107c4c0e4();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) goto LAB_101dc6fbc;
      func_0x000107c4223c();
      dVar18 = dVar17;
      func_0x000107c61170(puVar6);
      puVar6 = puVar5;
      func_0x000107c44fcc();
      func_0x000107c61180();
      puVar9 = puVar10;
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c5faec();
        puVar9 = puVar10;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar10);
      }
      func_0x000107c4d758(puVar5);
      puVar7 = puVar5;
      func_0x000107c44fcc();
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x000107c5faec();
      puVar10 = puVar9;
      func_0x000107c61170(puVar7);
      if (*(long *)(param_3 + 0x10) == 0) {
LAB_101dc7114:
        uVar13 = 0;
      }
      else {
        func_0x000107c61434(param_3);
        puVar10 = puVar9;
        func_0x000100029284();
        if (((ulong)puVar10 & 1) == 0) {
          func_0x000107c6142c(param_3);
          goto LAB_101dc7114;
        }
        puVar2 = (undefined8 *)(*(long *)(param_3 + 0x38) + (long)puVar8 * 0x10);
        uVar13 = *puVar2;
        puVar7 = (undefined *)puVar2[1];
        func_0x000107c61434(puVar7);
        func_0x000107c6142c(param_3);
        func_0x000107c6142c(puVar9);
        puVar10 = puVar7;
        func_0x000107c5fadc(uVar13);
        puVar9 = puVar7;
      }
      func_0x000107c6142c(puVar9);
      puVar9 = PTR_PTR_1126bfa28;
      func_0x000107c610f8();
      func_0x000107c47704(param_1,dVar17,dVar18 / 1000.0);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar13);
      if (puVar9 == (undefined *)0x0) goto LAB_101dc6fc4;
      puVar11 = puVar12;
      func_0x000107c61550();
      if ((((int)puVar11 == 0) || ((long)puVar12 < 0)) ||
         (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar12 >> 0x3e == 0) {
          puVar10 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar10 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar12) {
            puVar10 = puVar12;
          }
          func_0x000107c60480();
        }
        puVar10 = puVar10 + 1;
        puVar11 = (undefined *)0x0;
        FUN_101dc6588(0,puVar10,1,puVar12);
      }
      uVar14 = (ulong)puVar11 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar14 + 0x10);
      puVar5 = (undefined *)(uVar3 + 1);
      puVar12 = puVar11;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar3) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
        puVar10 = puVar5;
        FUN_101dc6588(puVar12,puVar5,1,puVar11);
        uVar14 = (ulong)puVar12 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar14 + 0x10) = puVar5;
      *(undefined **)(uVar14 + uVar3 * 8 + 0x20) = puVar9;
      puVar11 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_101dc7278:
  puVar10 = PTR_PTR_1126bfa30;
  func_0x000107c610f8(PTR_PTR_1126bfa30);
  uVar13 = 0;
  FUN_101dc7a1c(0,0x112e2d1c8,&PTR_PTR_1126bfa28);
  puVar16 = puVar12;
  func_0x000107c5fc48(puVar12,uVar13);
  func_0x000107c6142c(puVar12);
  func_0x000107c474d0(puVar10);
  func_0x000107c61170(puVar16);
  return puVar10;
}



/* Entry: 101dc7300; end: 101dc7317;  */

void FUN_101dc7300(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc7318,0,0);
  return;
}



/* Entry: 101dc7318; end: 101dc77a3;  */

void FUN_101dc7318(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x22;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong *puVar22;
  
  puVar22 = (ulong *)(unaff_x22 + 0x70);
  *puVar22 = 0;
  plVar21 = (long *)(unaff_x22 + 0x78);
  *plVar21 = 0;
  uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar9 = &UNK_110485548;
  func_0x000107c613fc(&UNK_110485548,0x18,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar9;
  *(ulong **)(puVar9 + 0x10) = puVar22;
  puVar3 = &UNK_110485570;
  func_0x000107c613fc(&UNK_110485570,0x20,7);
  *(undefined **)(unaff_x22 + 0x98) = puVar3;
  *(code **)(puVar3 + 0x10) = FUN_101dc7924;
  *(undefined **)(puVar3 + 0x18) = puVar9;
  *(code **)(unaff_x22 + 0x30) = FUN_101dc79a0;
  *(undefined **)(unaff_x22 + 0x38) = puVar3;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_101379b3c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_110485588;
  func_0x000107c60bc4();
  uVar17 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(uVar17);
  puVar9 = &UNK_1104855c0;
  func_0x000107c613fc(&UNK_1104855c0,0x18,7);
  *(undefined **)(unaff_x22 + 0xa0) = puVar9;
  *(long **)(puVar9 + 0x10) = plVar21;
  puVar3 = &UNK_1104855e8;
  uVar10 = 0x20;
  func_0x000107c613fc(&UNK_1104855e8,0x20,7);
  puVar19 = (undefined8 *)(unaff_x22 + 0x40);
  *puVar19 = puVar8;
  *(undefined **)(unaff_x22 + 0xa8) = puVar3;
  *(code **)(puVar3 + 0x10) = FUN_101dc79dc;
  *(undefined **)(puVar3 + 0x18) = puVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x101dc7a68;
  *(undefined **)(unaff_x22 + 0x68) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x50) = &UNK_100e27b38;
  *(undefined **)(unaff_x22 + 0x58) = &UNK_110485600;
  func_0x000107c60bc4(puVar19);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(uVar17);
  func_0x000107c4c754(uVar14);
  func_0x000107c60bd0(puVar19);
  func_0x000107c60bd0(puVar4);
  uVar15 = *puVar22;
  *(ulong *)(unaff_x22 + 0xb0) = uVar15;
  if (uVar15 == 0) {
    lVar12 = *plVar21;
    if (lVar12 == 0) {
      lVar13 = 0;
    }
    else {
      func_0x000107c614b0(lVar12);
      lVar13 = lVar12;
      func_0x000107c5ed2c(lVar12);
      func_0x000107c614ac(lVar12);
    }
    puVar9 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c42d78();
    uVar10 = *(ulong *)(unaff_x22 + 0x98);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x78));
    uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c61574(uVar20);
    func_0x000107c6142c(uVar17);
    uVar15 = uVar10;
    func_0x000107c61544(uVar10,"",0x66,0x90,0x22,1);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(uVar14);
    if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc77a0);
      (*pcVar2)();
    }
    uVar15 = *(ulong *)(unaff_x22 + 0xa8);
    uVar10 = uVar15;
    func_0x000107c61544(uVar15,"",0x66,0x92,0x15,1);
    func_0x000107c61574(uVar15);
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc77a4);
      (*pcVar2)();
    }
                    /* WARNING: Could not recover jumptable at 0x000101dc777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar9);
    return;
  }
  uVar18 = uVar15 & 0xffffffffffffff8;
  if (uVar15 >> 0x3e == 0) {
    uVar16 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar16 = uVar15;
    if (-1 < (long)uVar15) {
      uVar16 = uVar18;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x22 + 0xb8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61434(uVar15);
  if (uVar16 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        if ((uVar15 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc7788);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar15 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
          uVar11 = uVar10;
        }
        else {
          uVar5 = uVar7;
          uVar11 = uVar15;
          FUN_101dc633c(uVar7,uVar15,&PTR_PTR_1126a8bc0,0x112e07010);
        }
        uVar1 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dc7784);
          (*pcVar2)();
        }
        uVar6 = uVar5;
        func_0x000107c4ab14();
        func_0x000107c61180();
        uVar10 = uVar11;
        if (uVar6 != 0) break;
LAB_101dc74ec:
        func_0x000107c61170(uVar5);
        uVar7 = uVar7 + 1;
        if (uVar1 == uVar16) goto LAB_101dc6a08;
      }
      func_0x000107c61170();
      uVar6 = uVar5;
      func_0x000107c4c0e4();
      func_0x000107c61180();
      uVar10 = uVar11;
      if (uVar6 == 0) goto LAB_101dc74ec;
      func_0x000107c61170();
      uVar7 = uVar5;
      func_0x000107c44fcc();
      func_0x000107c61180();
      uVar6 = uVar7;
      func_0x000107c5faec();
      uVar10 = uVar11;
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar5);
      puVar3 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar3 & 1) == 0) {
        uVar10 = *(long *)(puVar9 + 0x10) + 1;
        puVar8 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar10,1,puVar9);
      }
      uVar5 = *(ulong *)(puVar8 + 0x10);
      uVar7 = uVar5 + 1;
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        uVar10 = uVar7;
        func_0x0001000d182c(puVar9,uVar7,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar7;
      *(ulong *)(puVar9 + uVar5 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puVar9 + uVar5 * 0x10 + 0x28) = uVar11;
      *(undefined **)(unaff_x22 + 0xb8) = puVar9;
      uVar7 = uVar1;
    } while (uVar1 != uVar16);
  }
LAB_101dc6a08:
  plVar21 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar21;
  *plVar21 = unaff_x22;
  plVar21[1] = (long)FUN_101dc77a4;
  lVar12 = *(long *)(unaff_x22 + 0x88);
  plVar21[3] = (long)puVar9;
  plVar21[4] = lVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc6a20,0,0);
  return;
}



/* Entry: 101dc77a4; end: 101dc77fb;  */

void FUN_101dc77a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar2 + 200) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc77fc,0,0);
  return;
}



/* Entry: 101dc77fc; end: 101dc7923;  */

void FUN_101dc77fc(void)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  uVar7 = uVar4;
  FUN_101dc6f50(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar4);
  func_0x000107c5c3c8(puVar2);
  uVar3 = *(ulong *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x78));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(uVar6);
  func_0x000107c6142c(uVar7);
  uVar5 = uVar3;
  func_0x000107c61544(uVar3,"",0x66,0x90,0x22,1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc7920);
    (*pcVar1)();
  }
  uVar5 = *(ulong *)(unaff_x22 + 0xa8);
  uVar3 = uVar5;
  func_0x000107c61544(uVar5,"",0x66,0x92,0x15,1);
  func_0x000107c61574(uVar5);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101dc7918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc7924);
  (*pcVar1)();
}



/* Entry: 101dc7924; end: 101dc799f;  */

void FUN_101dc7924(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puStack_38;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    puStack_38 = (undefined *)0x0;
    uVar1 = 0;
    FUN_101dc7a1c(0,0x112e07010,&PTR_PTR_1126a8bc0);
    func_0x000107c5fc50(param_1,&puStack_38,uVar1);
    if (puStack_38 != (undefined *)0x0) {
      puVar3 = puStack_38;
    }
  }
  uVar1 = *puVar2;
  *puVar2 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101dc79a0; end: 101dc79bf;  */

void FUN_101dc79a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101dc79c0; end: 101dc79db;  */

void FUN_101dc79c0(long param_1,long param_2)

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



/* Entry: 101dc79dc; end: 101dc7a07;  */

void FUN_101dc79dc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c614b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 101dc7a08; end: 101dc7a1b;  */

void FUN_101dc7a08(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101dc7a1c; end: 101dc7a5b;  */

void FUN_101dc7a1c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dc7a5c; end: 101dc7a7f;  */

void FUN_101dc7a5c(long param_1,long param_2)

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



/* Entry: 101dc7a80; end: 101dc7a9f;  */

void FUN_101dc7a80(void)

{
  func_0x000107c61168(&PTR_PTR_112e2d220);
  return;
}



/* Entry: 101dc7aa0; end: 101dc7b1b; -[_TtC40MemoriesShakeToReportLoggingServicesImpl27MemoriesShakeToReportLogger logWithCategory:message:time:entryId:snapId:] */

void FUN_101dc7aa0(void)

{
  long lVar1;
  undefined8 in_x4;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5ee94(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),in_x4);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 101dc7b1c; end: 101dc7b8f; -[_TtC40MemoriesShakeToReportLoggingServicesImpl27MemoriesShakeToReportLogger logWithCategory:message:entryId:snapId:] */

void FUN_101dc7b1c(void)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 101dc7b90; end: 101dc7b93; -[_TtC40MemoriesShakeToReportLoggingServicesImpl27MemoriesShakeToReportLogger registerWithContextProvider:] */

void FUN_101dc7b90(void)

{
  return;
}



/* Entry: 101dc7b94; end: 101dc7b97; -[_TtC40MemoriesShakeToReportLoggingServicesImpl27MemoriesShakeToReportLogger dumpThreadsWithInvokerCategory:] */

void FUN_101dc7b94(void)

{
  return;
}



/* Entry: 101dc7b98; end: 101dc7cbf;  */

long FUN_101dc7b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104856c8;
  func_0x000107c613fc(&UNK_1104856c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_101dc7d20;
  func_0x0001000bdd8c(FUN_101dc7d20,puVar1);
  func_0x0001000285a8(0x112e2d278,&UNK_10da16388);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  pcVar3 = FUN_101dc7d84;
  func_0x0001000bdd8c(FUN_101dc7d84,pcVar2);
  uVar4 = 0;
  func_0x00010028d584(0);
  func_0x000107c610f8();
  func_0x0001006f6124(pcVar3,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(pcVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 101dc7cc0; end: 101dc7d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc7cc0(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 auStack_40 [2];
  
  func_0x0001000d224c(auStack_40);
  uVar1 = auStack_40[0];
  func_0x000107c5abe0();
  func_0x000107c615e8(auStack_40[0]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 101dc7d20; end: 101dc7d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc7d20(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 auStack_40 [2];
  
  func_0x0001000d224c(auStack_40);
  uVar1 = auStack_40[0];
  func_0x000107c5abe0();
  func_0x000107c615e8(auStack_40[0]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 101dc7d28; end: 101dc7d83;  */

void FUN_101dc7d28(undefined8 *param_1)

{
  undefined8 uVar1;
  char cStack_21;
  
  func_0x0001000d224c(&cStack_21);
  if (cStack_21 == '\x01') {
    uVar1 = 0;
    FUN_101dc7a80();
    func_0x000107c613fc();
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101dc7d84; end: 101dc7d93;  */

void FUN_101dc7d84(undefined8 *param_1)

{
  undefined8 uVar1;
  char cStack_21;
  
  func_0x0001000d224c(&cStack_21);
  if (cStack_21 == '\x01') {
    uVar1 = 0;
    FUN_101dc7a80();
    func_0x000107c613fc();
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101dc7d94; end: 101dc7db7;  */

void FUN_101dc7d94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dc7db8; end: 101dc7dcb;  */

void FUN_101dc7db8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dc7dcc; end: 101dc7e8f;  */

void FUN_101dc7dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 101dc7e90; end: 101dc83af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101dc7e90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  ppuVar7 = &puStack_e0;
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113080730);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112ff4ca0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112e2dbf0);
  func_0x0001000285a8(0x112e2d350,&UNK_10da163d0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  uVar1 = uVar3;
  func_0x000107c4cc48();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112d51728,&UNK_10d918550);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c4cd6c();
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x000103bc9f00(auStack_88);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000101dc8568(auStack_88,auStack_b0);
  puVar6 = &UNK_1104857c0;
  func_0x000107c613fc(&UNK_1104857c0,0x68,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(undefined8 *)(puVar6 + 0x18) = uVar10;
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = uVar2;
  func_0x00010079c3a0(auStack_b0,puVar6 + 0x30);
  *(undefined8 *)(puVar6 + 0x58) = uVar8;
  *(undefined8 *)(puVar6 + 0x60) = uVar3;
  pcStack_c0 = FUN_101dc83b0;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  pcStack_d0 = FUN_101dc83c4;
  puStack_c8 = &UNK_1104857d8;
  puStack_b8 = puVar6;
  func_0x000107c60bc4(&puStack_e0);
  puVar6 = puStack_b8;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  uVar4 = 0;
  func_0x0001002cc9b4(0);
  func_0x000107c610f8();
  func_0x000103a6dd30(puVar5,uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(auStack_88);
  return puVar5;
}



/* Entry: 101dc83b0; end: 101dc83c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101dc83b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar14;
  undefined8 auStack_f0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  auStack_f0[2] = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar5 = 0;
  auStack_f0[1] = uVar2;
  auStack_f0[3] = uVar4;
  uStack_d0 = uVar3;
  func_0x000101dcaee0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  lVar6 = 0;
  func_0x000101dc8dd0();
  lVar7 = lVar6;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar1;
  *(undefined8 *)(lVar7 + 0x18) = uVar4;
  lVar8 = 0;
  func_0x000101dc9328();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  lVar9 = 0;
  func_0x000101dca5cc();
  func_0x000107c613fc();
  func_0x000101dc8568(unaff_x20 + 0x30,lVar9 + 0x10);
  *(undefined8 *)(lVar9 + 0x38) = uVar2;
  ppuStack_68 = &PTR_DAT_110485890;
  lVar10 = 0;
  alStack_88[0] = lVar7;
  lStack_70 = lVar6;
  FUN_101dc8cb0();
  lVar11 = lVar10;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_88,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar14 = (undefined8 *)((long)auStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar14);
  uVar2 = auStack_f0[2];
  auStack_b0[0] = *puVar14;
  ppuStack_90 = &PTR_DAT_110485890;
  *(undefined8 *)(lVar11 + _DAT_112e2d450) = auStack_f0[2];
  *(long *)(lVar11 + _DAT_112e2d458) = lVar5;
  lStack_98 = lVar6;
  func_0x000101dc8568(auStack_b0,lVar11 + _DAT_112e2d460);
  *(long *)(lVar11 + _DAT_112e2d468) = lVar8;
  *(long *)(lVar11 + _DAT_112e2d470) = lVar9;
  puVar12 = PTR_PTR_1126a9588;
  func_0x000107c610f8();
  func_0x000107c61580(uVar1,2);
  func_0x000107c6157c(uStack_d0);
  func_0x000107c6157c(auStack_f0[3]);
  func_0x000107c6157c(auStack_f0[1]);
  func_0x000107c6157c(lVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(lVar5);
  func_0x000107c6157c(lVar8);
  func_0x000107c6157c(lVar9);
  func_0x000107c453e4();
  *(undefined **)(lVar11 + _DAT_112e2d478) = puVar12;
  *(undefined8 *)(lVar11 + _DAT_112e2d480) = uStack_c8;
  puVar12 = PTR_s_init_1125d9248;
  lStack_c0 = lVar11;
  lStack_b8 = lVar10;
  func_0x000107c6157c();
  plVar13 = &lStack_c0;
  func_0x000107c61154(plVar13,puVar12);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(lVar8);
  func_0x000107c61574(lVar9);
  func_0x000107c61574(lVar7);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(alStack_88);
  return plVar13;
}



/* Entry: 101dc83c4; end: 101dc83fb;  */

void FUN_101dc83c4(long param_1)

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



/* Entry: 101dc83fc; end: 101dc8417;  */

void FUN_101dc83fc(long param_1,long param_2)

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



/* Entry: 101dc8418; end: 101dc8453;  */

/* WARNING: Possible PIC construction at 0x000101dc8424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dc8434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dc8444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dc8438) */
/* WARNING: Removing unreachable block (ram,0x000101dc8428) */
/* WARNING: Removing unreachable block (ram,0x000101dc8448) */

void FUN_101dc8418(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dc8454; end: 101dc84bf;  */

void FUN_101dc8454(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dc84c0; end: 101dc8543;  */

void FUN_101dc84c0(undefined8 param_1)

{
  if (lRam0000000112e2d380 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e690eac);
  return;
}



/* Entry: 101dc8544; end: 101dc85ab;  */

void FUN_101dc8544(undefined8 *param_1,undefined8 param_2)

{
  FUN_101dc7e90();
  *param_1 = param_2;
  return;
}



/* Entry: 101dc85ac; end: 101dc876b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101dc85ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e2d480);
  puVar1 = &UNK_110485828;
  func_0x000107c613fc(&UNK_110485828,0x20,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x000107c61174();
  uVar4 = 0x40;
  func_0x000104887c7c(0x40,0,0x48,3,0xd000000000000028,0x800000010f010da0,&UNK_10da16498,puVar1);
  func_0x000107c61574(puVar1);
  uVar2 = 0;
  func_0x000100f15acc(0);
  uVar3 = 0;
  func_0x000100775264(0,1,FUN_101dc8a3c,0,uVar2);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e2d478);
  puVar1 = &UNK_110485850;
  func_0x000107c613fc(&UNK_110485850,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x000107c61174();
  uVar2 = 0;
  func_0x00010488a340(0,1,FUN_101dc8d70,puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_110485878;
  func_0x000107c613fc(&UNK_110485878,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x000107c61174(uVar4);
  uVar4 = 0;
  func_0x00010488a3ec(0,1,FUN_101dc8d9c,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  func_0x00010488b12c();
  func_0x000107c61574(uVar4);
  return puVar1;
}



/* Entry: 101dc876c; end: 101dc8783;  */

void FUN_101dc876c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc8784,0,0);
  return;
}



/* Entry: 101dc8784; end: 101dc8837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc8784(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112e2d458);
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101dc87d8;
  plVar1[0xf] = lVar4;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar1[0x10] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar1[0x12] = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x14] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dcaf70,0,0);
  return;
}



/* Entry: 101dc8838; end: 101dc88bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc8838(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar1 = lVar3 + _DAT_112e2d460;
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  FUN_101dc8df0();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar3 = *(long *)(lVar3 + _DAT_112e2d470);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101dc88bc;
  plVar2[10] = lVar1;
  plVar2[0xb] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc9f78,0,0);
  return;
}



/* Entry: 101dc88bc; end: 101dc8923;  */

void FUN_101dc88bc(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
  if (unaff_x20 != 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000101dc8900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc8924,0,0);
  return;
}



/* Entry: 101dc8924; end: 101dc897f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc8924(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112e2d468);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dc8980;
  plVar1[10] = *(long *)(unaff_x22 + 0x30);
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc905c,0,0);
  return;
}



/* Entry: 101dc8980; end: 101dc89eb;  */

void FUN_101dc8980(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x30);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101dc89c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc89ec,0,0);
  return;
}



/* Entry: 101dc89ec; end: 101dc8a3b;  */

void FUN_101dc89ec(void)

{
  long lVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c4fd80(lVar1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101dc8a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dc8a3c; end: 101dc8a73;  */

void FUN_101dc8a3c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 101dc8a74; end: 101dc8b97;  */

void FUN_101dc8a74(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte bStack_39;
  undefined8 uStack_38;
  
  uStack_38 = param_1;
  func_0x000107c614b0();
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  pbVar2 = &bStack_39;
  func_0x000107c6147c(pbVar2,&uStack_38,uVar3,&UNK_1104859e0,6);
  if (((ulong)pbVar2 & 1) == 0) {
    uVar3 = 0x6e776f776f6b6e75;
    func_0x000107c5fadc(0x6e776f776f6b6e75,0xee00726f7272655f);
  }
  else {
    uVar3 = 0xd000000000000012;
    uVar4 = 0xd000000000000011;
    pcVar5 = "iesRemotelyThenLocally()";
    if (bStack_39 == 2) {
      uVar3 = 0xd000000000000013;
      pcVar5 = "local_purge_failed";
    }
    pcVar1 = "sync_check_timeout";
    if (bStack_39 != 0) {
      uVar4 = 0xd000000000000012;
      pcVar1 = "remote_purge_failed";
    }
    if (bStack_39 < 2) {
      pcVar5 = pcVar1;
      uVar3 = uVar4;
    }
    func_0x000107c5fadc(uVar3,(ulong)pcVar5 | 0x8000000000000000);
    func_0x000107c6142c((ulong)pcVar5 | 0x8000000000000000);
  }
  func_0x0001058b9868(param_2,uVar3,1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101dc8b98; end: 101dc8bcb; -[_TtC31MemoriesPrivateEntriesPurgeImpl32MemoriesPrivateEntriesPurgerImpl purgePrivateEntriesRemotelyThenLocally] */

void FUN_101dc8b98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101dc85ac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101dc8bcc; end: 101dc8c27; -[_TtC31MemoriesPrivateEntriesPurgeImpl32MemoriesPrivateEntriesPurgerImpl init] */

void FUN_101dc8bcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPrivateEntriesPurgeImpl.MemoriesPrivateEntriesPurgerImpl",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dc8bf8);
  (*pcVar1)();
}



/* Entry: 101dc8c28; end: 101dc8caf; -[_TtC31MemoriesPrivateEntriesPurgeImpl32MemoriesPrivateEntriesPurgerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101dc8c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dc8c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dc8c58) */
/* WARNING: Removing unreachable block (ram,0x000101dc8c78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dc8c28(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e2d450));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2d458));
  return;
}



/* Entry: 101dc8cb0; end: 101dc8ccf;  */

void FUN_101dc8cb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128049b8);
  return;
}



/* Entry: 101dc8cd0; end: 101dc8d33;  */

void FUN_101dc8cd0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dc8d34;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dc8784,0,0);
  return;
}



/* Entry: 101dc8d34; end: 101dc8d6f;  */

void FUN_101dc8d34(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dc8d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dc8d70; end: 101dc8d9b;  */

void FUN_101dc8d70(void)

{
  long unaff_x20;
  
  func_0x0001058b97f0(*(undefined8 *)(unaff_x20 + 0x10),1);
  return;
}



/* Entry: 101dc8d9c; end: 101dc8da3;  */

void FUN_101dc8d9c(undefined8 param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long unaff_x20;
  byte bStack_39;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_38 = param_1;
  func_0x000107c614b0();
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  pbVar2 = &bStack_39;
  func_0x000107c6147c(pbVar2,&uStack_38,uVar4,&UNK_1104859e0,6);
  if (((ulong)pbVar2 & 1) == 0) {
    uVar4 = 0x6e776f776f6b6e75;
    func_0x000107c5fadc(0x6e776f776f6b6e75,0xee00726f7272655f);
  }
  else {
    uVar4 = 0xd000000000000012;
    uVar5 = 0xd000000000000011;
    pcVar6 = "iesRemotelyThenLocally()";
    if (bStack_39 == 2) {
      uVar4 = 0xd000000000000013;
      pcVar6 = "local_purge_failed";
    }
    pcVar1 = "sync_check_timeout";
    if (bStack_39 != 0) {
      uVar5 = 0xd000000000000012;
      pcVar1 = "remote_purge_failed";
    }
    if (bStack_39 < 2) {
      pcVar6 = pcVar1;
      uVar4 = uVar5;
    }
    func_0x000107c5fadc(uVar4,(ulong)pcVar6 | 0x8000000000000000);
    func_0x000107c6142c((ulong)pcVar6 | 0x8000000000000000);
  }
  func_0x0001058b9868(uVar3,uVar4,1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101dc8da4; end: 101dc8def;  */

void FUN_101dc8da4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


