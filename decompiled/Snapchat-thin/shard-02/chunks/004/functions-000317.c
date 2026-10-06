/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d7d9b0; end: 101d7da5f;  */

void FUN_101d7d9b0(long param_1)

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
  func_0x000101d72898();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 101d7da60; end: 101d7dbc7;  */

ulong FUN_101d7da60(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7dbc8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7dbbc);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_101d7e474(0,0x112e28b08,&PTR_PTR_1126bc7d8);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7dbc0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7dbc4);
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
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_101d6ffd4(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101d7dbc8; end: 101d7dc73;  */

undefined8 * FUN_101d7dbc8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    puVar4 = (undefined8 *)param_1[2];
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar4 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar4 = param_1;
    }
    func_0x000107c6029c();
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)puVar2;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
    FUN_101d72b90(puVar4,0);
    func_0x000107c61434(param_1);
    puVar3 = &uStack_58;
    func_0x000101d7ddc4(puVar3,puVar2 + 4,puVar4,param_1);
    FUN_101d7e4b4(uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7dc4c);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Entry: 101d7dc74; end: 101d7dfe7;  */

long FUN_101d7dc74(long *param_1,undefined8 *param_2,long param_3,long param_4)

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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101d7ddc4);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d7ddc0);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_101d7dd84;
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
LAB_101d7dd84:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 101d7dfe8; end: 101d7e15b;  */

void FUN_101d7dfe8(undefined1 *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar6 = *(undefined1 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_1) {
      puVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d7e138);
          (*pcVar2)();
        }
        puVar3 = *(undefined1 **)(param_1 + (long)puVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar7;
        FUN_101d6ffd4(puVar7,param_1);
      }
      puVar1 = puVar7 + 1;
      if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d7e134);
        (*pcVar2)();
      }
      puVar4 = puVar3;
      func_0x000107c43c78();
      func_0x000107c61180();
      puVar5 = PTR_PTR_1126bc7f8;
      func_0x000107c61168();
      func_0x000107c3f7ac();
      func_0x000107c61180();
      func_0x000107c615e8();
      if (puVar5 == (undefined *)0x0) {
        func_0x000101d7c784();
        func_0x000107c613f8(&UNK_11047fc38,puVar4,0,0);
        *puVar4 = 4;
        func_0x000107c61654();
        func_0x000107c61170(puVar3);
        return;
      }
      func_0x000107c5504c(puVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar5);
      puVar7 = puVar7 + 1;
    } while (puVar1 != puVar6);
  }
  return;
}



/* Entry: 101d7e15c; end: 101d7e297;  */

void FUN_101d7e15c(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  FUN_101d7e474(0,0x112e28b08,&PTR_PTR_1126bc7d8);
  uVar4 = uVar3;
  FUN_101d7e4bc();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_58 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d7e284);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        FUN_101d6ffd4(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d7e280);
        (*pcVar2)();
      }
      FUN_101d7ce14(&uStack_60,uVar5);
      func_0x000107c61170(uStack_60);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 101d7e298; end: 101d7e42f;  */

undefined8 FUN_101d7e298(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  FUN_101d7cd28();
  uVar1 = param_1;
  FUN_101d7e15c(param_1);
  func_0x000107c6142c(param_1);
  uVar3 = uVar1;
  FUN_101d7dbc8(uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5b54c();
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar4 = param_3;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_3);
    lVar5 = lVar4;
    FUN_101d7ca90();
    func_0x000107c6142c(lVar4);
  }
  uVar2 = 0;
  FUN_101d7e474(0,0x112e28b08,&PTR_PTR_1126bc7d8);
  uVar1 = uVar3;
  func_0x000107c5fc48(uVar3,uVar2);
  func_0x000107c61574(uVar3);
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    uVar3 = 0;
    FUN_101d7e474(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar4 = lVar5;
    func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar5);
  }
  uVar3 = uVar1;
  func_0x000107c2bb4c(uVar1,lVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar4);
  uVar1 = uVar3;
  func_0x000107c5fc54(uVar3,uVar2);
  func_0x000107c61170(uVar3);
  return uVar1;
}



/* Entry: 101d7e430; end: 101d7e473;  */

void FUN_101d7e430(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d604f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5ef8c(0xff);
  puVar2 = PTR___s10Foundation8IndexSetVs0C7AlgebraAAMc_110350e40;
  func_0x000107c61520(PTR___s10Foundation8IndexSetVs0C7AlgebraAAMc_110350e40,uVar1);
  puRam0000000112d604f8 = puVar2;
  return;
}



/* Entry: 101d7e474; end: 101d7e4b3;  */

void FUN_101d7e474(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d7e4b4; end: 101d7e4bb;  */

void FUN_101d7e4b4(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101d7e4bc; end: 101d7e50f;  */

void FUN_101d7e4bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e2a658 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101d7e474(0xff,0x112e28b08,&PTR_PTR_1126bc7d8);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112e2a658 = puVar2;
  return;
}



/* Entry: 101d7e510; end: 101d7e52f;  */

void FUN_101d7e510(long param_1,long param_2)

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



/* Entry: 101d7e530; end: 101d7e5db;  */

void FUN_101d7e530(void)

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



/* Entry: 101d7e5dc; end: 101d7e77b;  */

void FUN_101d7e5dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d7e77c; end: 101d7e883;  */

void FUN_101d7e77c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13010;
  func_0x000107c61520(&UNK_10da13010,&UNK_11047fc38);
  puRam0000000112e2a690 = puVar1;
  return;
}



/* Entry: 101d7e884; end: 101d7e88b;  */

void FUN_101d7e884(void)

{
  if (lRam0000000112e2a6c8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e68f61c);
  return;
}



/* Entry: 101d7e88c; end: 101d7e8c3;  */

void FUN_101d7e88c(undefined8 param_1)

{
  if (lRam0000000112e2a6c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e68f61c);
  return;
}



/* Entry: 101d7e8c4; end: 101d7e977;  */

void FUN_101d7e8c4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_98 = PTR___sBoWV_11034d678 + 0x40;
  puStack_90 = PTR___sBOWV_11034d658 + 0x40;
  puStack_48 = &UNK_10da13138;
  puStack_38 = &UNK_10da13150;
  puStack_30 = &UNK_10da13168;
  lVar1 = 0x13f;
  puStack_88 = puStack_90;
  puStack_80 = puStack_98;
  puStack_78 = puStack_90;
  puStack_70 = puStack_98;
  puStack_68 = puStack_98;
  puStack_60 = puStack_98;
  puStack_58 = puStack_98;
  puStack_50 = puStack_98;
  puStack_40 = puStack_98;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,0xf,&puStack_98,param_1 + 0x50);
  }
  return;
}



/* Entry: 101d7e978; end: 101d7f2bf;  */

/* WARNING: Removing unreachable block (ram,0x000101d7ea68) */

undefined8 FUN_101d7e978(undefined *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puStack_d0;
  undefined *puStack_c0;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined1 uStack_74;
  undefined *apuStack_70 [2];
  
  func_0x0001000285a8(0x112e2a7c0,&UNK_10da13198);
  ppuVar15 = (undefined **)0x18;
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  puVar3 = param_1;
  func_0x000107c42950();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5faec();
  ppuStack_a0 = ppuVar15;
  func_0x000107c61170(puVar3);
  func_0x000107c4188c();
  func_0x000107c61180();
  if (param_1 != (undefined *)0x0) {
    puVar3 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    func_0x000107c610f8(PTR_PTR_1126d7f28);
    func_0x00010006c00c(puVar3,ppuStack_a0);
    puStack_b0 = puVar3;
    FUN_101d6b26c(puVar3,ppuStack_a0);
    func_0x00010006c090(puVar3,ppuStack_a0);
    func_0x00010006c090(puVar3);
    if (puStack_b0 != (undefined *)0x0) {
      puVar12 = puStack_b0;
      func_0x000107c3d868();
      func_0x000107c61180();
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar12 != (undefined *)0x0) {
        apuStack_70[0] = (undefined *)0x0;
        ppuStack_a0 = apuStack_70;
        func_0x000107c5fc50();
        func_0x000107c61170(puVar12);
        if (apuStack_70[0] != (undefined *)0x0) {
          puVar3 = apuStack_70[0];
        }
      }
      puVar13 = puStack_b0;
      func_0x000107c4173c();
      func_0x000107c61180();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar13 != (undefined *)0x0) {
        puVar14 = puVar13;
        func_0x000107c5b2dc();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar14 != (undefined *)0x0) {
          apuStack_70[0] = (undefined *)0x0;
          ppuStack_a0 = apuStack_70;
          func_0x000107c5fc50(puVar14,ppuStack_a0,PTR___sSSN_11034da80);
          func_0x000107c61170(puVar14);
          if (apuStack_70[0] != (undefined *)0x0) {
            puVar12 = apuStack_70[0];
          }
        }
      }
      puVar13 = puStack_b0;
      func_0x000107c5b54c();
      func_0x000107c61180();
      if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7f2b0);
        (*pcVar1)();
      }
      puStack_98 = puVar13;
      FUN_101d7f2c0();
      func_0x000107c61170(puVar13);
      puVar13 = puStack_b0;
      func_0x000107c4486c();
      if (((ulong)puVar13 & 1) == 0) {
LAB_101d7f184:
        puStack_a8 = (undefined *)0x0;
        ppuStack_a0 = (undefined **)0x0;
      }
      else {
        puVar13 = puStack_b0;
        func_0x000107c429a0();
        func_0x000107c61180();
        if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7f2bc);
          (*pcVar1)();
        }
        puVar14 = puVar13;
        func_0x000107c5dc0c();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        if (puVar14 == (undefined *)0x0) goto LAB_101d7f184;
        puStack_a8 = puVar14;
        func_0x000107c5faec();
        func_0x000107c61170(puVar14);
      }
      puVar13 = puStack_b0;
      func_0x000107c44868();
      if ((int)puVar13 == 0) {
        uStack_74 = 2;
      }
      else {
        puVar13 = puStack_b0;
        func_0x000107c42958();
        func_0x000107c61180();
        if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7f2c0);
          (*pcVar1)();
        }
        puVar14 = puVar13;
        func_0x000107c5dc0c();
        uStack_74 = SUB81(puVar14,0);
        func_0x000107c61170(puVar13);
      }
      puVar13 = puStack_b0;
      func_0x000107c44e84();
      func_0x000107c61180();
      if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7f2b4);
        (*pcVar1)();
      }
      puVar14 = puVar13;
      func_0x000107c3d868();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      if (puVar14 == (undefined *)0x0) {
        puStack_c0 = (undefined *)0x0;
      }
      else {
        apuStack_70[0] = (undefined *)0x0;
        func_0x000107c5fc50(puVar14,apuStack_70,PTR___sSSN_11034da80);
        func_0x000107c61170(puVar14);
        puStack_c0 = apuStack_70[0];
      }
      puVar13 = puStack_b0;
      func_0x000107c44e84();
      func_0x000107c61180();
      if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7f2b8);
        (*pcVar1)();
      }
      puVar14 = puVar13;
      func_0x000107c41734();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      if (puVar14 == (undefined *)0x0) {
        puStack_d0 = (undefined *)0x0;
      }
      else {
        apuStack_70[0] = (undefined *)0x0;
        func_0x000107c5fc50(puVar14,apuStack_70,PTR___sSSN_11034da80);
        func_0x000107c61170(puVar14);
        puStack_d0 = apuStack_70[0];
      }
      goto LAB_101d7eaac;
    }
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101438ce4();
  ppuStack_a0 = (undefined **)0x0;
  puStack_d0 = (undefined *)0x0;
  puStack_c0 = (undefined *)0x0;
  puStack_b0 = (undefined *)0x0;
  puStack_a8 = (undefined *)0x0;
  uStack_74 = 2;
  puVar3 = puVar12;
LAB_101d7eaac:
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = &UNK_11047fcd0;
  func_0x000107c613fc(&UNK_11047fcd0,0x18,7);
  *(undefined8 *)(puVar13 + 0x10) = 0;
  puVar14 = &UNK_11047fcf8;
  func_0x000107c613fc(&UNK_11047fcf8,0x18,7);
  *(undefined **)(puVar14 + 0x10) = puVar7;
  puVar5 = &UNK_11047fd20;
  func_0x000107c613fc(&UNK_11047fd20,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar7;
  puVar6 = puVar5;
  FUN_101d7f3f4();
  puVar7 = &UNK_11047fd48;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar8 = &UNK_11047fd70;
  func_0x000107c613fc(&UNK_11047fd70,0x30,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  *(undefined ***)(puVar8 + 0x20) = ppuVar15;
  *(undefined **)(puVar8 + 0x28) = puVar3;
  puVar3 = &UNK_11047fd98;
  func_0x000107c613fc(&UNK_11047fd98,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101d814ec;
  *(undefined **)(puVar3 + 0x18) = puVar8;
  func_0x000107c61434(ppuVar15);
  uVar9 = 0;
  func_0x0001048898b8(0,1,FUN_101d814f8,puVar3,&UNK_1104800c0);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11047fd48;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar7 = &UNK_11047fdc0;
  func_0x000107c613fc(&UNK_11047fdc0,0x71,7);
  *(undefined **)(puVar7 + 0x10) = puVar13;
  *(undefined **)(puVar7 + 0x18) = puVar14;
  *(undefined **)(puVar7 + 0x20) = puVar5;
  *(undefined **)(puVar7 + 0x28) = puVar3;
  *(undefined **)(puVar7 + 0x30) = puVar4;
  *(undefined ***)(puVar7 + 0x38) = ppuVar15;
  *(undefined **)(puVar7 + 0x40) = puVar12;
  *(undefined **)(puVar7 + 0x48) = puStack_98;
  *(undefined **)(puVar7 + 0x50) = puStack_c0;
  *(undefined **)(puVar7 + 0x58) = puStack_d0;
  *(undefined **)(puVar7 + 0x60) = puStack_a8;
  *(undefined ***)(puVar7 + 0x68) = ppuStack_a0;
  puVar7[0x70] = uStack_74;
  func_0x000107c61434(ppuVar15);
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(puVar5);
  uVar11 = 0x112d550a0;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  uVar10 = 0;
  func_0x0001048898b8(0,1,FUN_101d81520,puVar7,uVar11);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar7);
  puVar3 = &UNK_11047fd48;
  puVar12 = puVar3;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar12 + 0x10);
  uVar11 = 0;
  func_0x000101d81890(0,0x112e2a7c8,&PTR_PTR_1126bc1e0);
  uVar9 = 0;
  func_0x0001048898b8(0,1,0x101d81568,puVar12,uVar11);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar12);
  puVar12 = puVar3;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar12 + 0x10);
  uVar11 = 0;
  func_0x0001048898b8(0,1,0x101d81588,puVar12,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar12);
  puVar12 = puVar3;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar12 + 0x10);
  puVar8 = PTR___sytN_11034f1b0;
  uVar9 = 0;
  func_0x0001048898b8(0,1,0x101d815a8,puVar12,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar12);
  puVar7 = puVar3;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar12 = &UNK_11047fde8;
  func_0x000107c613fc(&UNK_11047fde8,0x29,7);
  *(undefined **)(puVar12 + 0x10) = puVar13;
  *(undefined **)(puVar12 + 0x18) = puVar7;
  *(undefined **)(puVar12 + 0x20) = puVar14;
  puVar12[0x28] = uStack_74;
  puVar7 = &UNK_11047fe10;
  func_0x000107c613fc(&UNK_11047fe10,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101d815c0;
  *(undefined **)(puVar7 + 0x18) = puVar12;
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(puVar14);
  uVar11 = 0;
  func_0x0001048898b8(0,1,FUN_101d81cb8,puVar7,puVar8 + 8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar12 = &UNK_11047fe38;
  func_0x000107c613fc(&UNK_11047fe38,0x38,7);
  *(undefined **)(puVar12 + 0x10) = puVar3;
  *(undefined **)(puVar12 + 0x18) = puVar4;
  *(undefined ***)(puVar12 + 0x20) = ppuVar15;
  *(undefined **)(puVar12 + 0x28) = puVar5;
  *(long *)(puVar12 + 0x30) = lVar2;
  puVar3 = &UNK_11047fe60;
  func_0x000107c613fc(&UNK_11047fe60,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101d815d0;
  *(undefined **)(puVar3 + 0x18) = puVar12;
  func_0x000107c61434(ppuVar15);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(lVar2);
  uVar9 = 0;
  func_0x00010488a220(0,1,FUN_101d815e0,puVar3);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11047fd48;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar12 = &UNK_11047fe88;
  func_0x000107c613fc(&UNK_11047fe88,0x40,7);
  *(undefined **)(puVar12 + 0x10) = puVar3;
  *(undefined **)(puVar12 + 0x18) = puVar13;
  *(long *)(puVar12 + 0x20) = lVar2;
  *(undefined **)(puVar12 + 0x28) = puVar4;
  *(undefined ***)(puVar12 + 0x30) = ppuVar15;
  *(undefined **)(puVar12 + 0x38) = puVar5;
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(puVar3);
  func_0x000104888fc0(0,1,FUN_101d81608,puVar12);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar12);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar11 = uVar9;
  func_0x000107c6157c(uVar9);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar2);
  func_0x000107c61170(puStack_b0);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar9);
  return uVar11;
}



/* Entry: 101d7f2c0; end: 101d7f3f3;  */

undefined * FUN_101d7f2c0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101438ce4();
  puVar3 = &UNK_11047feb0;
  puStack_48 = puVar2;
  func_0x000107c613fc(&UNK_11047feb0,0x18,7);
  *(undefined ***)(puVar3 + 0x10) = &puStack_48;
  puVar2 = &UNK_11047fed8;
  func_0x000107c613fc(&UNK_11047fed8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101d81618;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  pcStack_58 = FUN_101d81620;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x101d80f5c;
  puStack_60 = &UNK_11047fef0;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = puStack_50;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c429c0();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar2;
  func_0x000107c61544(puVar2,"",0x62,0x189,0x20,1);
  func_0x000107c61574(puVar2);
  puVar2 = puStack_48;
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000107c61574(puVar3);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7f3f4);
  (*pcVar1)();
}



/* Entry: 101d7f3f4; end: 101d7f4eb;  */

void FUN_101d7f3f4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  long lVar3;
  
  func_0x0001000d224c(alStack_68);
  lVar1 = alStack_68[0];
  if (alStack_68[0] == 0) {
    iVar2 = 0;
  }
  else {
    lVar3 = alStack_68[0];
    func_0x000107c5add4();
    iVar2 = (int)lVar3;
    func_0x000107c615e8(lVar1);
  }
  func_0x0001000d224c(alStack_68);
  if (alStack_68[0] == 0) {
    param_1 = 0x4024000000000000;
  }
  else {
    func_0x000107c5c69c(alStack_68[0]);
    func_0x000107c615e8(alStack_68[0]);
  }
  if (iVar2 == 0) {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  else {
    func_0x0001000d224c(alStack_68);
    func_0x0001000a8868(alStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(param_1,uStack_50,lStack_48);
    func_0x0001000834e4(alStack_68);
  }
  return;
}



/* Entry: 101d7f4ec; end: 101d7f5f3;  */

undefined8 FUN_101d7f4ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_101d808c4(param_2,param_3);
    puVar1 = &UNK_11047fd48;
    func_0x000107c613fc(&UNK_11047fd48,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_1);
    puVar2 = &UNK_11047ffc8;
    func_0x000107c613fc(&UNK_11047ffc8,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    func_0x000107c61434(param_4);
    uVar3 = 0;
    func_0x0001048898b8(0,1,FUN_101d818d0,puVar2,&UNK_1104800c0);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar2);
  }
  return uVar3;
}



/* Entry: 101d7f5f4; end: 101d7f9fb;  */

undefined8
FUN_101d7f5f4(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined1 param_14)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  code *pcVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar12 = *param_1;
  lVar3 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_80,1,0);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar12;
  func_0x000107c61174();
  func_0x000107c61170(uVar16);
  lVar18 = *(long *)(lVar3 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar18 != 0) {
    puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101d53294(0,lVar18,0);
    puVar13 = puStack_120;
    puVar17 = (undefined8 *)(lVar3 + 0x20);
    do {
      uVar16 = *puVar17;
      uVar2 = *(ulong *)(puVar13 + 0x10);
      uVar4 = *(ulong *)(puVar13 + 0x18);
      puStack_120 = puVar13;
      func_0x000107c61174();
      if (uVar4 >> 1 <= uVar2) {
        FUN_101d53294(1 < uVar4,uVar2 + 1,1);
        puVar13 = puStack_120;
      }
      *(ulong *)(puVar13 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar13 + uVar2 * 8 + 0x20) = uVar16;
      lVar18 = lVar18 + -1;
      puVar17 = puVar17 + 2;
    } while (lVar18 != 0);
  }
  puVar9 = auStack_98;
  func_0x000107c61428(param_3 + 0x10,puVar9,1,0);
  uVar16 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar13;
  func_0x000107c6142c(uVar16);
  puVar19 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar15 = *(undefined **)(puVar19 + 0x10);
  }
  else {
    puVar15 = puVar19;
    if ((undefined *)0x7fffffffffffffff < puVar13) {
      puVar15 = puVar13;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(puVar13);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar13 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar19 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x101d7f9e8);
            (*pcVar14)();
          }
          puVar5 = *(undefined **)(puVar13 + (long)puVar6 * 8 + 0x20);
          func_0x000107c61174();
          puVar11 = puVar9;
        }
        else {
          puVar5 = puVar6;
          puVar11 = puVar13;
          FUN_101d6ffd4();
        }
        puVar1 = puVar6 + 1;
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101d7f9e4);
          (*pcVar14)();
        }
        puVar7 = puVar5;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (puVar7 != (undefined *)0x0) break;
        func_0x000107c61170(puVar5);
        puVar9 = puVar11;
        puVar6 = puVar6 + 1;
        if (puVar1 == puVar15) goto LAB_101d7f848;
      }
      puVar6 = puVar7;
      func_0x000107c5faec();
      puVar9 = puVar11;
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar5);
      puVar5 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar5 & 1) == 0) {
        puVar9 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,puVar9,1,puVar8);
      }
      uVar2 = *(ulong *)(puVar7 + 0x10);
      puVar5 = (undefined *)(uVar2 + 1);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        puVar9 = puVar5;
        func_0x0001000d182c(puVar8,puVar5,1,puVar7);
      }
      *(undefined **)(puVar8 + 0x10) = puVar5;
      *(undefined **)(puVar8 + uVar2 * 0x10 + 0x20) = puVar6;
      *(undefined **)(puVar8 + uVar2 * 0x10 + 0x28) = puVar11;
      puVar6 = puVar1;
    } while (puVar1 != puVar15);
  }
LAB_101d7f848:
  func_0x000107c6142c(puVar13);
  func_0x000107c61428(param_4 + 0x10,auStack_b0,1,0);
  uVar16 = *(undefined8 *)(param_4 + 0x10);
  *(undefined **)(param_4 + 0x10) = puVar8;
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_5 + 0x10,auStack_c8,0,0);
  lVar18 = param_5 + 0x10;
  func_0x000107c61648();
  if (lVar18 != 0) {
    uVar16 = *(undefined8 *)(lVar18 + 0x28);
    func_0x000107c6157c(uVar16);
    func_0x000107c61574(lVar18);
    func_0x0001000d224c(&puStack_120);
    func_0x000107c61574(uVar16);
    puVar13 = puStack_120;
    puVar9 = puStack_120;
    func_0x000107c614f0(puStack_120);
    func_0x000107c61428(param_4 + 0x10,auStack_e0,0,0);
    uVar16 = *(undefined8 *)(param_4 + 0x10);
    pcVar14 = *(code **)(lStack_118 + 0x18);
    func_0x000107c61434(uVar16);
    (*pcVar14)(param_6,param_7,uVar16,puVar9,lStack_118);
    func_0x000107c615e8(puVar13);
    func_0x000107c6142c(uVar16);
  }
  func_0x000107c61428(param_5 + 0x10,auStack_f8,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 == 0) {
    uVar12 = 0;
  }
  else {
    func_0x0001000d224c(&puStack_120);
    ppuVar10 = &puStack_120;
    func_0x0001000a8868(ppuVar10,uStack_108);
    (**(code **)(lStack_100 + 8))
              (ppuVar10,uVar12,lVar3,param_8,param_9,param_10,param_11,param_12,param_13,param_14);
    func_0x000107c61574(param_5);
    func_0x0001000834e4(&puStack_120);
  }
  return uVar12;
}



/* Entry: 101d7f9fc; end: 101d7fb47;  */

undefined8 FUN_101d7f9fc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e2a810,&UNK_10da131b0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11047fd48;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11047ff78;
  func_0x000107c613fc(&UNK_11047ff78,0x28,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_58 = FUN_101d81844;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_11047ff90;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_50;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(uStack_48);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uStack_48);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar1);
  return uVar5;
}



/* Entry: 101d7fb48; end: 101d7fbcb;  */

undefined8 FUN_101d7fb48(undefined8 *param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    (*param_3)(uVar1);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d7fbcc; end: 101d7fdd7;  */

undefined8 FUN_101d7fbcc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001000285a8(0x112dc93d0,&UNK_10d9ca9c0);
  func_0x000107c613fc();
  lVar3 = 0;
  func_0x00010095c380();
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  lStack_60 = lVar3;
  if (lVar4 == 0) {
    func_0x0001000d224c(&lStack_58);
    pcStack_68 = (code *)0x101d8165c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_11047ff18;
    ppuVar7 = &puStack_88;
    func_0x000107c60bc4(ppuVar7);
    lVar4 = lStack_60;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar4);
    func_0x000107c4e590(lStack_58);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lStack_58);
  }
  else {
    lVar5 = lVar4;
    FUN_101d81664();
    func_0x000107c61174();
    func_0x0001000d224c(&lStack_58);
    lVar6 = lStack_58;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d7fdd8);
      (*pcVar2)();
    }
    pcStack_68 = FUN_101d817f0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_101365b40;
    puStack_70 = &UNK_11047ff40;
    ppuVar7 = &puStack_88;
    func_0x000107c60bc4(ppuVar7);
    lVar1 = lStack_60;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c5c2f4(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
  }
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(lVar3);
  return uVar8;
}



/* Entry: 101d7fdd8; end: 101d7fe8b;  */

undefined8 FUN_101d7fdd8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(auStack_70);
    func_0x000107c61574(uVar2);
    func_0x0001000a8868(auStack_70,uStack_58);
    FUN_101d797a8(uVar3,uVar1);
    func_0x0001000834e4(auStack_70);
  }
  return uVar3;
}



/* Entry: 101d7fe8c; end: 101d80003;  */

undefined * FUN_101d7fe8c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  puVar4 = *(undefined **)(param_1 + 0x10);
  if (puVar4 == (undefined *)0x0) {
    puVar1 = (undefined8 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_101d7b3c4();
    puVar4 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,puVar1,0,0);
    *puVar1 = 10;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar2 = puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x58);
      func_0x000107c61174(puVar4);
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(param_2);
      func_0x0001000d224c(auStack_98);
      func_0x000107c61574(uVar3);
      func_0x0001000a8868(auStack_98,uStack_80);
      func_0x000107c61428(param_3 + 0x10,auStack_b0,0,0);
      uVar3 = *(undefined8 *)(param_3 + 0x10);
      func_0x000107c61434(uVar3);
      puVar2 = puVar4;
      FUN_101d7be8c(puVar4,uVar3,param_4);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(puVar4);
      func_0x0001000834e4(auStack_98);
    }
  }
  return puVar2;
}



/* Entry: 101d80004; end: 101d8011f;  */

void FUN_101d80004(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_1);
    func_0x0001000d224c(&puStack_78);
    func_0x000107c61574(uVar2);
    puVar1 = puStack_78;
    func_0x000107c614f0(puStack_78);
    func_0x000107c61428(param_4 + 0x10,auStack_90,0,0);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    pcVar3 = *(code **)(lStack_70 + 8);
    func_0x000107c61434(uVar2);
    (*pcVar3)(param_2,param_3,uVar2,puVar1,lStack_70);
    func_0x000107c615e8(puStack_78);
    func_0x000107c6142c(uVar2);
  }
  puVar1 = PTR_PTR_1126a94d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_78 = puVar1;
  func_0x000100b60084(&puStack_78);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d80120; end: 101d8032b;  */

void FUN_101d80120(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_d8 [24];
  undefined8 auStack_c0 [3];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  char cStack_90;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  puVar2 = PTR_PTR_1126a94d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c614cc(param_1,auStack_68,auStack_80);
  uVar5 = uStack_78;
  FUN_101d81ccc(uStack_78,uStack_70);
  func_0x000107c54654(puVar2);
  func_0x000107c61170(uVar5);
  puStack_98 = puVar2;
  func_0x000100b60084(&puStack_98);
  auStack_c0[0] = param_1;
  func_0x000107c614b0(param_1);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  ppuVar3 = &puStack_98;
  func_0x000107c6147c(ppuVar3,auStack_c0,uVar5,&UNK_110480158,6);
  if ((((ulong)ppuVar3 & 1) == 0) || (cStack_90 != '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((1L << ((ulong)puStack_98 & 0x3f) & 0xff77fffU) == 0) {
      bVar1 = puStack_98 == (undefined *)0xf;
      func_0x000107c61428(param_2 + 0x10,auStack_d8,0,0);
      lVar4 = param_2 + 0x10;
      func_0x000107c61648();
      if (lVar4 != 0) {
        func_0x000107c61574();
      }
    }
  }
  func_0x000107c61428(param_2 + 0x10,&puStack_98,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&uStack_a8);
    func_0x000107c61574(uVar5);
    uVar5 = uStack_a8;
    func_0x000107c614f0(uStack_a8);
    func_0x000107c61428(param_7 + 0x10,auStack_c0,0,0);
    uVar6 = *(undefined8 *)(param_7 + 0x10);
    pcVar7 = *(code **)(lStack_a0 + 0x20);
    func_0x000107c61434(uVar6);
    (*pcVar7)(param_5,param_6,uVar6,bVar1,uVar5,lStack_a0);
    func_0x000107c615e8(uStack_a8);
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101d8032c; end: 101d8037b;  */

void FUN_101d8032c(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_101d7b3c4();
  puVar1 = &UNK_110480158;
  func_0x000107c613f8(&UNK_110480158,param_1,0,0);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101d8037c; end: 101d8048f;  */

/* WARNING: Possible PIC construction at 0x000101d803f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d803f4) */

void FUN_101d8037c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if (param_6 == (undefined8 *)0x0) {
    if (param_5 >> 0x3c < 0xf) {
      uStack_40 = param_4;
      uStack_38 = param_5;
      func_0x00010006c00c(param_4,param_5);
      func_0x000100b60084(&uStack_40);
      func_0x0001000b44c0(param_4,param_5);
      return;
    }
    FUN_101d7b3c4();
    puVar2 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,param_1,0,0);
    *param_1 = 5;
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00010488ade0();
  }
  else {
    func_0x000107c614b0(param_6);
    func_0x000107c5ed2c();
    puVar1 = param_6;
    func_0x000107c3fcb0();
    func_0x000107c61170();
    FUN_101d7b3c4();
    puVar2 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,param_6,0,0);
    *param_6 = puVar1;
    *(undefined1 *)(param_6 + 1) = 0;
    func_0x00010488ade0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 101d80490; end: 101d808c3;  */

void FUN_101d80490(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  undefined8 auStack_b0 [2];
  undefined8 *apuStack_a0 [4];
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)apuStack_a0 - extraout_x8);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar4,0xd000000000000036,0x800000010f00f100);
  puVar3 = puVar4;
  (**(code **)(lVar12 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_101d81850(puVar4,0x112d36580,&UNK_10d9016d0);
    FUN_101d7b3c4();
    puVar6 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,puVar4,0,0);
    *puVar4 = 1;
    *(undefined1 *)(puVar4 + 1) = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar11,puVar4,lVar2);
    func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
    puVar3 = (undefined8 *)(param_2 + 0x10);
    func_0x000107c61648();
    if (puVar3 == (undefined8 *)0x0) {
      FUN_101d7b3c4();
      puVar6 = &UNK_110480158;
      func_0x000107c613f8(&UNK_110480158,puVar3,0,0);
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 1;
      func_0x00010488ade0();
    }
    else {
      puVar4 = (undefined8 *)puVar3[4];
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)puVar3[0xe];
        apuStack_a0[2] = puVar4;
        apuStack_a0[3] = (undefined8 *)param_3;
        func_0x000107c44d84();
        func_0x000107c61180();
        if (puVar5 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8();
        }
        else {
          puVar4 = puVar5;
          func_0x000107c5f9e8();
          func_0x000107c61170(puVar5);
        }
        uVar7 = puVar3[0x12];
        lVar1 = puVar3[0x13];
        func_0x0001000a8868(puVar3 + 0xf,uVar7);
        (**(code **)(lVar1 + 0x18))(uVar7,lVar1);
        if ((uVar7 & 1) != 0) {
          puVar5 = puVar4;
          func_0x000107c61558(puVar4);
          puStack_80 = puVar4;
          func_0x00010018433c(0x65757274,0xe400000000000000,0xd000000000000020,0x800000010f00ef20,
                              puVar5);
          puVar4 = puStack_80;
        }
        puVar8 = PTR_PTR_1126bc1e0;
        apuStack_a0[1] = puVar4;
        func_0x000107c610f8(PTR_PTR_1126bc1e0);
        puVar9 = puVar8;
        func_0x000107c5ed90();
        puVar6 = PTR___sSSN_11034da80;
        func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        *(undefined8 *)(lVar11 + -0x10) = 0;
        *(undefined2 *)(lVar11 + -0x18) = 0;
        *(undefined8 *)(lVar11 + -0x20) = 0;
        func_0x000107c477d8(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar4);
        puVar4 = apuStack_a0[2];
        puVar5 = apuStack_a0[2];
        func_0x000107c4d0c4();
        func_0x000107c61180();
        puVar10 = apuStack_a0[3];
        func_0x000107c5f9dc(apuStack_a0[3],puVar6,puVar6,PTR___sSSSHsWP_11034da90);
        func_0x000107c5d8ac(puVar5);
        func_0x000107c61170(puVar10);
        puVar10 = puVar5;
        func_0x000107c5045c();
        func_0x000107c61180();
        puStack_80 = puVar10;
        func_0x000100b60084(&puStack_80);
        func_0x000107c61170(puVar10);
        func_0x000107c61574(puVar3);
        func_0x000107c615e8(puVar4);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar8);
        (**(code **)(lVar12 + 8))(lVar11,lVar2);
        func_0x000107c6142c(apuStack_a0[1]);
        return;
      }
      FUN_101d7b3c4();
      puVar6 = &UNK_110480158;
      func_0x000107c613f8(&UNK_110480158,puVar4,0,0);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 1;
      func_0x00010488ade0();
      func_0x000107c61574(puVar3);
    }
    (**(code **)(lVar12 + 8))(lVar11,lVar2);
    func_0x000107c614ac(puVar6);
  }
  return;
}



/* Entry: 101d808c4; end: 101d809f3;  */

undefined8 FUN_101d808c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e2a828,&UNK_10da131d0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar2 = &UNK_11047fd48;
  func_0x000107c613fc(&UNK_11047fd48,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110480040;
  func_0x000107c613fc(&UNK_110480040,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(0x101d81b30,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101d809f4; end: 101d80adb;  */

undefined8 FUN_101d809f4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_101d818e8(param_3);
    func_0x000107c61574(param_2);
    puVar1 = &UNK_11047fff0;
    func_0x000107c613fc(&UNK_11047fff0,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar2;
    func_0x000107c61174(uVar2);
    uVar2 = 0;
    func_0x000100775264(0,1,FUN_101d81af0,puVar1,&UNK_1104800c0);
    func_0x000107c61574(param_3);
    func_0x000107c61574(puVar1);
  }
  return uVar2;
}



/* Entry: 101d80adc; end: 101d80c43;  */

void FUN_101d80adc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    puVar1 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x000107c5fadc(param_3,param_4);
      puVar3 = puVar1;
      func_0x000107c431bc();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar3 == (undefined8 *)0x0) {
        FUN_101d7b3c4();
        puVar2 = &UNK_110480158;
        func_0x000107c613f8(&UNK_110480158,param_3,0,0);
        *param_3 = 6;
        *(undefined1 *)(param_3 + 1) = 1;
        func_0x00010488ade0();
        func_0x000107c614ac(puVar2);
      }
      else {
        puStack_60 = puVar3;
        func_0x000100b60084(&puStack_60);
        func_0x000107c61170(puVar3);
      }
      func_0x000107c615e8(puVar1);
      return;
    }
  }
  FUN_101d7b3c4();
  puVar2 = &UNK_110480158;
  func_0x000107c613f8(&UNK_110480158,puVar3,0,0);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar2);
  return;
}



/* Entry: 101d80c44; end: 101d80e77;  */

void FUN_101d80c44(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puStack_68;
  
  uVar13 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)(uVar13 + 0x10);
  }
  else {
    uVar11 = uVar13;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 == 0) {
    lVar10 = *(long *)((long)PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  }
  else {
    uVar12 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d80de8);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar12;
          func_0x000101d72264(uVar12,param_1);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d80de4);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c435e4();
        func_0x000107c61180();
        if (uVar4 != 0) break;
LAB_101d80c9c:
        func_0x000107c61170(uVar3);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar11) goto LAB_101d80da0;
      }
      uVar5 = uVar3;
      func_0x000107c51b0c();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = uVar4;
      if (uVar5 == 0) goto LAB_101d80c9c;
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
        func_0x000101d729e0(0,puVar8[2] + 1,1,puVar8);
      }
      uVar12 = puVar7[2];
      puVar8 = puVar7;
      if ((ulong)puVar7[3] >> 1 <= uVar12) {
        puVar8 = (undefined8 *)(ulong)(1 < (ulong)puVar7[3]);
        func_0x000101d729e0(puVar8,uVar12 + 1,1,puVar7);
      }
      puVar8[2] = uVar12 + 1;
      puVar8[uVar12 * 2 + 4] = uVar4;
      puVar8[uVar12 * 2 + 5] = uVar5;
      uVar12 = uVar1;
    } while (uVar1 != uVar11);
LAB_101d80da0:
    lVar10 = puVar8[2];
  }
  if (lVar10 == 0) {
    func_0x000107c6142c(puVar8,param_2);
    FUN_101d7b3c4();
    puVar9 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,puVar8,0,0);
    *puVar8 = 8;
    *(undefined1 *)(puVar8 + 1) = 1;
    func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar9);
    return;
  }
  puStack_68 = puVar8;
  func_0x000100b60084(&puStack_68);
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 101d80e78; end: 101d80edf;  */

void FUN_101d80e78(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0x112dec308;
  func_0x0001000285a8(0x112dec308,&UNK_10d9b80a0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101d80ee0; end: 101d80fab;  */

void FUN_101d80ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_5;
  func_0x000107c61558(uVar1);
  uVar2 = *param_5;
  *param_5 = 0x8000000000000000;
  FUN_101d813d8(param_3,param_1,param_2,uVar1);
  uVar1 = *param_5;
  *param_5 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101d80fac; end: 101d8111b;  */

void FUN_101d80fac(void)

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
  
  func_0x0001000285a8(0x112e29f90,&UNK_10da131a0);
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
    if (uVar8 == 0) goto LAB_101d81088;
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
LAB_101d81088:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101d8111c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101d810f4;
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
LAB_101d810f4:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101d8111c; end: 101d81143;  */

void FUN_101d8111c(long param_1,ulong param_2)

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
  
  uVar6 = 0x112e2a7d0;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112e2a7d0,&UNK_10da131a8);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101d813a4:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101d813d4);
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
          goto LAB_101d813a4;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101d813d8);
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



/* Entry: 101d81144; end: 101d813d7;  */

void FUN_101d81144(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
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
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101d813a4:
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
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101d813d4);
          (*pcVar6)();
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
          goto LAB_101d813a4;
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
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101d813d8);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
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
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101d813d8; end: 101d814eb;  */

void FUN_101d813d8(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d814a8);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    func_0x00010143a4f4(lVar4,param_4 & 1);
    uVar6 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d81478);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010143a38c();
    lVar4 = *unaff_x20;
    goto joined_r0x000101d814bc;
  }
  lVar4 = *unaff_x20;
joined_r0x000101d814bc:
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
    return;
  }
  FUN_101d72f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101d814ec; end: 101d814f7;  */

undefined8 FUN_101d814ec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_101d808c4(uVar3,uVar6);
    puVar4 = &UNK_11047fd48;
    func_0x000107c613fc(&UNK_11047fd48,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar2);
    puVar5 = &UNK_11047ffc8;
    func_0x000107c613fc(&UNK_11047ffc8,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    func_0x000107c61434(uVar1);
    uVar6 = 0;
    func_0x0001048898b8(0,1,FUN_101d818d0,puVar5,&UNK_1104800c0);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar5);
  }
  return uVar6;
}



/* Entry: 101d814f8; end: 101d8151f;  */

void FUN_101d814f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d81520; end: 101d815bf;  */

void FUN_101d81520(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d7f5f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined1 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101d815c0; end: 101d815df;  */

undefined * FUN_101d815c0(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  puVar8 = *(undefined **)(lVar1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    puVar4 = (undefined8 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_101d7b3c4();
    puVar8 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,puVar4,0,0);
    *puVar4 = 10;
    *(undefined1 *)(puVar4 + 1) = 1;
    puVar6 = puVar8;
    func_0x00010488904c();
    func_0x000107c614ac(puVar8);
  }
  else {
    func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61648();
    if (lVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar3 + 0x58);
      func_0x000107c61174(puVar8);
      func_0x000107c6157c(uVar7);
      func_0x000107c61574(lVar3);
      func_0x0001000d224c(auStack_98);
      func_0x000107c61574(uVar7);
      func_0x0001000a8868(auStack_98,uStack_80);
      func_0x000107c61428(lVar5 + 0x10,auStack_b0,0,0);
      uVar7 = *(undefined8 *)(lVar5 + 0x10);
      func_0x000107c61434(uVar7);
      puVar6 = puVar8;
      FUN_101d7be8c(puVar8,uVar7,uVar2);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(puVar8);
      func_0x0001000834e4(auStack_98);
    }
  }
  return puVar6;
}



/* Entry: 101d815e0; end: 101d81607;  */

void FUN_101d815e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d81608; end: 101d8161f;  */

void FUN_101d81608(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_d8 [24];
  undefined8 auStack_c0 [3];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  char cStack_90;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  puVar5 = PTR_PTR_1126a94d0;
  func_0x000107c610f8(PTR_PTR_1126a94d0,lVar8,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c453e4();
  func_0x000107c614cc(param_1,auStack_68,auStack_80);
  uVar9 = uStack_78;
  FUN_101d81ccc(uStack_78,uStack_70);
  func_0x000107c54654(puVar5);
  func_0x000107c61170(uVar9);
  puStack_98 = puVar5;
  func_0x000100b60084(&puStack_98);
  auStack_c0[0] = param_1;
  func_0x000107c614b0(param_1);
  uVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  ppuVar6 = &puStack_98;
  func_0x000107c6147c(ppuVar6,auStack_c0,uVar9,&UNK_110480158,6);
  if ((((ulong)ppuVar6 & 1) == 0) || (cStack_90 != '\x01')) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    if ((1L << ((ulong)puStack_98 & 0x3f) & 0xff77fffU) == 0) {
      bVar4 = puStack_98 == (undefined *)0xf;
      func_0x000107c61428(lVar8 + 0x10,auStack_d8,0,0);
      lVar7 = lVar8 + 0x10;
      func_0x000107c61648();
      if (lVar7 != 0) {
        func_0x000107c61574();
      }
    }
  }
  func_0x000107c61428(lVar8 + 0x10,&puStack_98,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61648();
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(lVar8 + 0x28);
    func_0x000107c6157c(uVar9);
    func_0x000107c61574(lVar8);
    func_0x0001000d224c(&uStack_a8);
    func_0x000107c61574(uVar9);
    uVar9 = uStack_a8;
    func_0x000107c614f0(uStack_a8);
    func_0x000107c61428(lVar3 + 0x10,auStack_c0,0,0);
    uVar10 = *(undefined8 *)(lVar3 + 0x10);
    pcVar11 = *(code **)(lStack_a0 + 0x20);
    func_0x000107c61434(uVar10);
    (*pcVar11)(uVar2,uVar1,uVar10,bVar4,uVar9,lStack_a0);
    func_0x000107c615e8(uStack_a8);
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101d81620; end: 101d8163f;  */

void FUN_101d81620(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d81640; end: 101d81663;  */

void FUN_101d81640(long param_1,long param_2)

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



/* Entry: 101d81664; end: 101d817ef;  */

undefined * FUN_101d81664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7220;
  func_0x000107c610f8(PTR_PTR_1126b7220);
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x00010011df08();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  func_0x000107c5fb78(puVar3,param_2);
  func_0x000107c6142c(param_2);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00f0e0);
  func_0x000107c6142c(0x800000010f00f0e0);
  puVar2 = puVar1;
  func_0x000107c5e5a0(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
  puVar3 = puVar2;
  func_0x000107c5e474(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  puVar2 = puVar3;
  func_0x000107c5e890(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5e75c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  puVar2 = puVar1;
  func_0x000107c3ecc8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 101d817f0; end: 101d817f7;  */

/* WARNING: Possible PIC construction at 0x000101d803f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d803f4) */

void FUN_101d817f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if (param_6 == (undefined8 *)0x0) {
    if (param_5 >> 0x3c < 0xf) {
      uStack_40 = param_4;
      uStack_38 = param_5;
      func_0x00010006c00c(param_4,param_5);
      func_0x000100b60084(&uStack_40);
      func_0x0001000b44c0(param_4,param_5);
      return;
    }
    FUN_101d7b3c4();
    puVar2 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,param_1,0,0);
    *param_1 = 5;
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00010488ade0();
  }
  else {
    func_0x000107c614b0(param_6);
    func_0x000107c5ed2c();
    puVar1 = param_6;
    func_0x000107c3fcb0();
    func_0x000107c61170();
    FUN_101d7b3c4();
    puVar2 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,param_6,0,0);
    *param_6 = puVar1;
    *(undefined1 *)(param_6 + 1) = 0;
    func_0x00010488ade0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 101d817f8; end: 101d81843;  */

void FUN_101d817f8(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d81844; end: 101d8184f;  */

void FUN_101d81844(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  undefined8 auStack_b0 [2];
  undefined8 *apuStack_a0 [4];
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)apuStack_a0 - extraout_x8);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar4,0xd000000000000036,0x800000010f00f100);
  puVar3 = puVar4;
  (**(code **)(lVar13 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_101d81850(puVar4,0x112d36580,&UNK_10d9016d0);
    FUN_101d7b3c4();
    puVar6 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,puVar4,0,0);
    *puVar4 = 1;
    *(undefined1 *)(puVar4 + 1) = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar12,puVar4,lVar2);
    func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
    puVar3 = (undefined8 *)(lVar1 + 0x10);
    func_0x000107c61648();
    if (puVar3 == (undefined8 *)0x0) {
      FUN_101d7b3c4();
      puVar6 = &UNK_110480158;
      func_0x000107c613f8(&UNK_110480158,puVar3,0,0);
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 1;
      func_0x00010488ade0();
    }
    else {
      puVar4 = (undefined8 *)puVar3[4];
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)puVar3[0xe];
        apuStack_a0[2] = puVar4;
        apuStack_a0[3] = (undefined8 *)uVar11;
        func_0x000107c44d84();
        func_0x000107c61180();
        if (puVar5 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8();
        }
        else {
          puVar4 = puVar5;
          func_0x000107c5f9e8();
          func_0x000107c61170(puVar5);
        }
        uVar7 = puVar3[0x12];
        lVar1 = puVar3[0x13];
        func_0x0001000a8868(puVar3 + 0xf,uVar7);
        (**(code **)(lVar1 + 0x18))(uVar7,lVar1);
        if ((uVar7 & 1) != 0) {
          puVar5 = puVar4;
          func_0x000107c61558(puVar4);
          puStack_80 = puVar4;
          func_0x00010018433c(0x65757274,0xe400000000000000,0xd000000000000020,0x800000010f00ef20,
                              puVar5);
          puVar4 = puStack_80;
        }
        puVar8 = PTR_PTR_1126bc1e0;
        apuStack_a0[1] = puVar4;
        func_0x000107c610f8(PTR_PTR_1126bc1e0);
        puVar9 = puVar8;
        func_0x000107c5ed90();
        puVar6 = PTR___sSSN_11034da80;
        func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        *(undefined8 *)(lVar12 + -0x10) = 0;
        *(undefined2 *)(lVar12 + -0x18) = 0;
        *(undefined8 *)(lVar12 + -0x20) = 0;
        func_0x000107c477d8(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar4);
        puVar4 = apuStack_a0[2];
        puVar5 = apuStack_a0[2];
        func_0x000107c4d0c4();
        func_0x000107c61180();
        puVar10 = apuStack_a0[3];
        func_0x000107c5f9dc(apuStack_a0[3],puVar6,puVar6,PTR___sSSSHsWP_11034da90);
        func_0x000107c5d8ac(puVar5);
        func_0x000107c61170(puVar10);
        puVar10 = puVar5;
        func_0x000107c5045c();
        func_0x000107c61180();
        puStack_80 = puVar10;
        func_0x000100b60084(&puStack_80);
        func_0x000107c61170(puVar10);
        func_0x000107c61574(puVar3);
        func_0x000107c615e8(puVar4);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar8);
        (**(code **)(lVar13 + 8))(lVar12,lVar2);
        func_0x000107c6142c(apuStack_a0[1]);
        return;
      }
      FUN_101d7b3c4();
      puVar6 = &UNK_110480158;
      func_0x000107c613f8(&UNK_110480158,puVar4,0,0);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 1;
      func_0x00010488ade0();
      func_0x000107c61574(puVar3);
    }
    (**(code **)(lVar13 + 8))(lVar12,lVar2);
    func_0x000107c614ac(puVar6);
  }
  return;
}



/* Entry: 101d81850; end: 101d818cf;  */

undefined8 FUN_101d81850(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101d818d0; end: 101d818e7;  */

void FUN_101d818d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d809f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d818e8; end: 101d81aef;  */

undefined ** FUN_101d818e8(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined **ppuVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    puVar6 = (undefined8 *)0x112e2a818;
    func_0x0001000285a8(0x112e2a818,&UNK_10da131b8);
    FUN_101d7b3c4();
    ppuVar7 = (undefined **)&UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,puVar6,0,0);
    *puVar6 = 0;
    *(undefined1 *)(puVar6 + 1) = 1;
    ppuVar8 = ppuVar7;
    func_0x00010488904c();
    func_0x000107c614ac(ppuVar7);
  }
  else if (*(long *)(param_1 + 0x10) == 0) {
    func_0x0001000285a8(0x112e2a818,&UNK_10da131b8);
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar8 = &puStack_78;
    func_0x000104888f7c(ppuVar8);
    func_0x000107c615e8(lVar3);
  }
  else {
    func_0x0001000285a8(0x112e2a820,&UNK_10da131c0);
    func_0x000107c613fc();
    lVar4 = 0;
    func_0x00010095c380();
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
    func_0x0001000d224c(&lStack_48);
    lVar5 = lStack_48;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d81af0);
      (*pcVar2)();
    }
    pcStack_58 = FUN_101d81b28;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_101d80e78;
    puStack_60 = &UNK_110480008;
    ppuVar7 = &puStack_78;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar7);
    lVar1 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c431c4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar5);
    ppuVar8 = *(undefined ***)(lVar4 + 0x10);
    func_0x000107c6157c(ppuVar8);
    func_0x000107c61574(lVar4);
  }
  return ppuVar8;
}



/* Entry: 101d81af0; end: 101d81b27;  */

void FUN_101d81af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *param_2;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61174(uVar2);
  return;
}



/* Entry: 101d81b28; end: 101d81b3b;  */

void FUN_101d81b28(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puStack_68;
  
  uVar13 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)(uVar13 + 0x10);
  }
  else {
    uVar11 = uVar13;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 == 0) {
    lVar10 = *(long *)((long)PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  }
  else {
    uVar12 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d80de8);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar12;
          func_0x000101d72264(uVar12,param_1);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d80de4);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c435e4();
        func_0x000107c61180();
        if (uVar4 != 0) break;
LAB_101d80c9c:
        func_0x000107c61170(uVar3);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar11) goto LAB_101d80da0;
      }
      uVar5 = uVar3;
      func_0x000107c51b0c();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = uVar4;
      if (uVar5 == 0) goto LAB_101d80c9c;
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
        func_0x000101d729e0(0,puVar8[2] + 1,1,puVar8);
      }
      uVar12 = puVar7[2];
      puVar8 = puVar7;
      if ((ulong)puVar7[3] >> 1 <= uVar12) {
        puVar8 = (undefined8 *)(ulong)(1 < (ulong)puVar7[3]);
        func_0x000101d729e0(puVar8,uVar12 + 1,1,puVar7);
      }
      puVar8[2] = uVar12 + 1;
      puVar8[uVar12 * 2 + 4] = uVar4;
      puVar8[uVar12 * 2 + 5] = uVar5;
      uVar12 = uVar1;
    } while (uVar1 != uVar11);
LAB_101d80da0:
    lVar10 = puVar8[2];
  }
  if (lVar10 == 0) {
    func_0x000107c6142c();
    FUN_101d7b3c4();
    puVar9 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,puVar8,0,0);
    *puVar8 = 8;
    *(undefined1 *)(puVar8 + 1) = 1;
    func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar9);
    return;
  }
  puStack_68 = puVar8;
  func_0x000100b60084(&puStack_68);
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 101d81b3c; end: 101d81b63;  */

void FUN_101d81b3c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 101d81b64; end: 101d81bbf;  */

undefined8 * FUN_101d81b64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101d81bc0; end: 101d81bfb;  */

undefined8 * FUN_101d81bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101d81bfc; end: 101d81cb7;  */

int FUN_101d81bfc(ulong *param_1,int param_2)

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



/* Entry: 101d81cb8; end: 101d81ccb;  */

void FUN_101d81cb8(void)

{
  FUN_101d814f8();
  return;
}



/* Entry: 101d81ccc; end: 101d81e87;  */

undefined * FUN_101d81ccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  ulong unaff_x20;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  lVar7 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = param_1;
  uVar6 = param_2;
  FUN_101d81fe0();
  puVar1 = PTR_PTR_1126a94d8;
  func_0x000107c610f8(PTR_PTR_1126a94d8);
  func_0x000107c45e78();
  if ((unaff_x20 >> 0x20 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c52b88(puVar1);
    func_0x000107c61170(puVar2);
  }
  (**(code **)(lVar7 + 0x10))(lVar4);
  lVar3 = lVar4;
  func_0x000107c605a0(lVar4,param_1,param_2);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x000107c613f8(param_1,param_2,0,0);
    (**(code **)(lVar7 + 0x20))(param_2,lVar4,param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(lVar4);
    lVar4 = param_1;
  }
  lVar7 = lVar3;
  func_0x000103fbd0c8();
  func_0x000107c614ac(lVar3);
  lStack_70 = lVar7;
  lStack_68 = lVar4;
  func_0x000107c61434(lVar4);
  func_0x000107c5fb78(lVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(lVar4);
  lVar5 = lStack_68;
  lVar4 = lStack_70;
  func_0x000107c5fadc(lStack_70,lStack_68);
  func_0x000107c6142c(lVar5);
  func_0x000107c5662c(puVar1);
  func_0x000107c61170(lVar4);
  return puVar1;
}



/* Entry: 101d81e88; end: 101d81ed3;  */

void FUN_101d81e88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d81ed4; end: 101d81fab;  */

undefined1  [16] FUN_101d81ed4(undefined8 param_1,char param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  if (param_2 == '\x01') {
    return ZEXT816(0xe000000000000000) << 0x40;
  }
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0xee00202d2065646f;
  auVar1._0_8_ = 0x6320726f72726520;
  return auVar1;
}



/* Entry: 101d81fac; end: 101d81fdf;  */

uint FUN_101d81fac(void)

{
  undefined8 *unaff_x20;
  
  if (*(char *)(unaff_x20 + 1) == '\x01') {
    return 0x7002010U >> (ulong)((uint)*unaff_x20 & 0x1f) & 1;
  }
  return 0;
}



/* Entry: 101d81fe0; end: 101d8228b;  */

ulong FUN_101d81fe0(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong auStack_b0 [6];
  byte bStack_80;
  undefined7 uStack_7f;
  ulong uStack_70;
  long lStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  lVar10 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar10 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x13_00;
  pcVar8 = *(code **)(extraout_x12 + 0x10);
  (*pcVar8)(lVar6,param_1,param_2);
  puVar1 = auStack_b0 + 5;
  func_0x000107c6147c(puVar1,lVar6,param_2,&UNK_110480158,6);
  if (((ulong)puVar1 & 1) == 0) {
    uVar5 = 0;
    uVar4 = 0xe000000000000000;
  }
  else {
    uVar4 = (ulong)bStack_80;
    uVar5 = auStack_b0[5];
    FUN_101d81ed4();
  }
  (*pcVar8)(lVar7,param_1,param_2);
  uVar3 = 0x112e29d50;
  func_0x0001000285a8(0x112e29d50,&UNK_10da123a0);
  puVar1 = auStack_b0;
  func_0x000107c6147c(puVar1,lVar7,param_2,uVar3,6);
  if (((ulong)puVar1 & 1) == 0) {
    auStack_b0[4] = 0;
    auStack_b0[1] = 0;
    auStack_b0[0] = 0;
    auStack_b0[3] = 0;
    auStack_b0[2] = 0;
    FUN_101d70a94(auStack_b0);
  }
  else {
    uStack_c0 = uVar4;
    uStack_b8 = uVar5;
    func_0x000101d70af0(auStack_b0,auStack_b0 + 5);
    lVar7 = lStack_68;
    uVar5 = uStack_70;
    func_0x0001000a8868(auStack_b0 + 5,uStack_70);
    lVar2 = 0;
    func_0x000107c614b8(0,lVar7,uVar5,&UNK_10e7ddb68,&UNK_10e7ddb70);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar7 + 0x10))(lVar6 - extraout_x8_00,uVar5,lVar7);
    uVar3 = 0;
    func_0x000101d53f80(0);
    puVar1 = auStack_b0;
    func_0x000107c6147c(puVar1,lVar6 - extraout_x8_00,lVar2,uVar3,6);
    if (((ulong)puVar1 & 1) != 0) {
      uVar9 = auStack_b0[0] & 0xffffffff;
      func_0x0001000a8868(auStack_b0 + 5,uStack_70);
      uVar4 = uStack_70;
      (**(code **)(lStack_68 + 0x18))(uStack_70,lStack_68);
      func_0x0001000834e4(auStack_b0 + 5);
      uVar5 = 0x100000000;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      goto LAB_101d82260;
    }
    func_0x0001000834e4(auStack_b0 + 5);
  }
  (*pcVar8)(lVar10,param_1,param_2);
  puVar1 = auStack_b0 + 5;
  func_0x000107c6147c(puVar1,lVar10,param_2,&UNK_1107ac098,6);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000101d70adc(auStack_b0[5],CONCAT71(uStack_7f,bStack_80));
  }
  uVar9 = 0;
  uVar5 = 0;
LAB_101d82260:
  return uVar5 | uVar9;
}



/* Entry: 101d8228c; end: 101d8267b;  */

int FUN_101d8228c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101d8267c; end: 101d82e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d8267c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e28960,&UNK_10da10ca0);
  uVar1 = param_4;
  func_0x000107c41258();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e29758,&UNK_10da11d00);
  uVar1 = param_4;
  func_0x000107c41260();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e2a858,&UNK_10da13320);
  uVar1 = param_3;
  func_0x000107c3e6f8();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e2a860,&UNK_10da13328);
  uVar1 = param_3;
  func_0x000107c5cf10();
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e29768,&UNK_10da11d10);
  uVar6 = *(undefined8 *)(param_5 + _DAT_1130806d0);
  func_0x000107c61174();
  uVar1 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  uVar10 = *(undefined8 *)(param_5 + _DAT_1130806b8);
  uVar11 = *(undefined8 *)(param_2 + _DAT_112ff4aa8);
  uVar12 = *(undefined8 *)(param_9 + _DAT_112fd9d28);
  puVar7 = &UNK_110480258;
  func_0x000107c613fc(&UNK_110480258,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar10;
  *(undefined8 *)(puVar7 + 0x18) = uVar11;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = param_10;
  func_0x0001000285a8(0x112e2a868,&UNK_10da13338);
  func_0x000107c613fc();
  func_0x000107c61580(uVar10,2);
  func_0x000107c61580(uVar11,2);
  func_0x000107c61580(uVar12,2);
  func_0x000107c61174();
  pcVar8 = FUN_101d82f34;
  func_0x0001000bdd8c(FUN_101d82f34,puVar7);
  puVar7 = &UNK_110480280;
  func_0x000107c613fc(&UNK_110480280,0x60,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar4;
  *(undefined8 *)(puVar7 + 0x28) = uVar5;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 *)(puVar7 + 0x38) = param_7;
  *(undefined8 *)(puVar7 + 0x40) = param_8;
  *(undefined8 *)(puVar7 + 0x48) = param_6;
  *(undefined8 *)(puVar7 + 0x50) = uVar11;
  *(code **)(puVar7 + 0x58) = pcVar8;
  func_0x0001000285a8(0x112e2a870,&UNK_10da13340);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(pcVar8);
  pcVar9 = FUN_101d83114;
  func_0x0001000bdd8c(FUN_101d83114,puVar7);
  uVar6 = 0;
  func_0x0001002c59e8(0);
  func_0x000107c610f8();
  func_0x000103a6b158(pcVar9,uVar6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar10);
  *(code **)(unaff_x20 + 0x10) = pcVar9;
  return;
}



/* Entry: 101d82ea0; end: 101d82f33;  */

/* WARNING: Possible PIC construction at 0x000101d82f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d82f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d82f0c) */
/* WARNING: Removing unreachable block (ram,0x000101d82f1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d82ea0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_5 + _DAT_11303ea08);
  lVar1 = 0;
  FUN_101d8331c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110480320;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar3);
  return;
}



/* Entry: 101d82f34; end: 101d82f3f;  */

/* WARNING: Possible PIC construction at 0x000101d82f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d82f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d82f0c) */
/* WARNING: Removing unreachable block (ram,0x000101d82f1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d82f34(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11303ea08);
  lVar4 = 0;
  FUN_101d8331c();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110480320;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar6);
  return;
}



/* Entry: 101d82f40; end: 101d83113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d82f40(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  uVar7 = *(undefined8 *)(param_7 + _DAT_11303ea70);
  uVar9 = *(undefined8 *)(param_8 + _DAT_112fda380);
  uVar8 = *(undefined8 *)(param_9 + _DAT_112ff4a28);
  lVar3 = 0;
  FUN_101d85184();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e2aa68;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112e2aa18) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112e2aa20) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112e2aa28) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112e2aa30) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112e2aa38) = param_6;
  *(undefined8 *)(lVar4 + _DAT_112e2aa40) = uVar7;
  *(undefined8 *)(lVar4 + _DAT_112e2aa48) = uVar9;
  *(undefined8 *)(lVar4 + _DAT_112e2aa58) = uVar8;
  *(undefined8 *)(lVar4 + _DAT_112e2aa50) = param_10;
  *(undefined8 *)(lVar4 + _DAT_112e2aa60) = param_11;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar1);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 101d83114; end: 101d83117;  */

void FUN_101d83114(void)

{
  long unaff_x20;
  
  FUN_101d82f40(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101d83118; end: 101d831f3;  */

void FUN_101d83118(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d831f4; end: 101d83203;  */

void FUN_101d831f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d83204; end: 101d832a3;  */

void FUN_101d83204(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d832a4; end: 101d832af;  */

void FUN_101d832a4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101d832b0; end: 101d832ff;  */

void FUN_101d832b0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e2a948 != 0) {
    return;
  }
  puVar1 = &UNK_1104802f8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e2a948 = param_1;
  return;
}



/* Entry: 101d83300; end: 101d8331b;  */

/* WARNING: Possible PIC construction at 0x000101d82f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d82f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d82f0c) */
/* WARNING: Removing unreachable block (ram,0x000101d82f1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d83300(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11303ea08);
  lVar4 = 0;
  FUN_101d8331c();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110480320;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar6);
  return;
}



/* Entry: 101d8331c; end: 101d8333b;  */

void FUN_101d8331c(void)

{
  func_0x000107c61168(&PTR_PTR_112e2a990);
  return;
}



/* Entry: 101d8333c; end: 101d83467;  */

undefined8 FUN_101d8333c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&uStack_60);
  uVar3 = uStack_60;
  func_0x000107c614f0(uStack_60);
  pcVar1 = FUN_101d83468;
  (**(code **)(lStack_58 + 0x28))(FUN_101d83468,0,uVar3,lStack_58);
  func_0x000107c615e8(uStack_60);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_68);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = &UNK_110480348;
  func_0x000107c613fc(&UNK_110480348,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(long *)(puVar2 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c();
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_2);
  uVar3 = uStack_68;
  func_0x0001048898b8(uStack_68,1,FUN_101d8366c,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(pcVar1);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 101d83468; end: 101d834df;  */

uint FUN_101d83468(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(param_2 + 0x18);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x58))();
  if ((uVar2 & 1) == 0) {
    (**(code **)(lVar3 + 0x28))(param_1,lVar3);
    uVar1 = (uint)param_1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}



/* Entry: 101d834e0; end: 101d8366b;  */

void FUN_101d834e0(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  
  if ((*param_1 & 1) == 0) {
    func_0x0001000285a8(0x112e2aa08,&UNK_10da13438);
    func_0x000107c6157c(param_2);
    uVar1 = 0x60;
    func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000033,0x800000010f00f1a0,&UNK_10da13448,param_2);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&uStack_58);
    puVar2 = &UNK_110480370;
    func_0x000107c613fc(&UNK_110480370,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_4);
    puVar3 = &UNK_110480398;
    func_0x000107c613fc(&UNK_110480398,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x20) = param_6;
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_6);
    func_0x0001048898b8(uStack_58,1,FUN_101d83930,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
    func_0x000107c615e8(uStack_58);
    func_0x000107c61574(puVar3);
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  return;
}



/* Entry: 101d8366c; end: 101d8368b;  */

void FUN_101d8366c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d834e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101d8368c; end: 101d836a3;  */

void FUN_101d8368c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d836a4,0,0);
  return;
}



/* Entry: 101d836a4; end: 101d83727;  */

void FUN_101d836a4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d83728;
                    /* WARNING: Could not recover jumptable at 0x000101d83724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 101d83728; end: 101d83793;  */

void FUN_101d83728(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_101d83794;
  }
  else {
    pcVar1 = (code *)0x101d837d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d83794; end: 101d83807;  */

void FUN_101d83794(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101d837d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d83808; end: 101d8385b;  */

void FUN_101d83808(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101d8385c;
  plVar1[7] = param_1;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d836a4,0,0);
  return;
}



/* Entry: 101d8385c; end: 101d83897;  */

void FUN_101d8385c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d83894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d83898; end: 101d8392f;  */

undefined8 FUN_101d83898(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d8394c(param_3,param_4,uVar1);
    func_0x000107c61574(param_2);
  }
  return param_3;
}



/* Entry: 101d83930; end: 101d8394b;  */

void FUN_101d83930(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d83898(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d8394c; end: 101d83a63;  */

undefined8 FUN_101d8394c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  if (-1 < param_3) {
    FUN_101d83ebc(param_1,param_3);
    func_0x0001000d224c(&uStack_48);
    puVar2 = &UNK_110480370;
    func_0x000107c613fc(&UNK_110480370,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_1104803c0;
    func_0x000107c613fc(&UNK_1104803c0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(long *)(puVar3 + 0x20) = param_3;
    puVar2 = &UNK_1104803e8;
    func_0x000107c613fc(&UNK_1104803e8,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_101d842c8;
    *(undefined **)(puVar2 + 0x18) = puVar3;
    func_0x000107c61434(param_2);
    uVar4 = uStack_48;
    func_0x0001048898b8(uStack_48,1,0x101d84688,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(uStack_48);
    func_0x000107c61574(puVar2);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d83a64);
  (*pcVar1)();
}



/* Entry: 101d83a64; end: 101d83b9b;  */

undefined8 FUN_101d83a64(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&uStack_60);
  uVar4 = uStack_60;
  func_0x000107c614f0(uStack_60);
  pcVar1 = FUN_101d83b9c;
  (**(code **)(lStack_58 + 0x28))(FUN_101d83b9c,0,uVar4,lStack_58);
  func_0x000107c615e8(uStack_60);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_110480370;
  func_0x000107c613fc(&UNK_110480370,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110480618;
  func_0x000107c613fc(&UNK_110480618,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  func_0x000107c6157c(uVar4);
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_2);
  uVar4 = uStack_68;
  func_0x0001048898b8(uStack_68,1,FUN_101d84f70,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(pcVar1);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 101d83b9c; end: 101d83bdf;  */

uint FUN_101d83b9c(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x88))();
  return param_1 & 1;
}



/* Entry: 101d83be0; end: 101d83d77;  */

void FUN_101d83be0(char *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      puVar1 = (undefined1 *)0x112d51a30;
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      func_0x000101d84e94();
      puVar2 = &UNK_110480de0;
      func_0x000107c613f8(&UNK_110480de0,puVar1,0,0);
      *puVar1 = 0;
      func_0x00010488904c();
      func_0x000107c614ac(puVar2);
    }
    else {
      FUN_101d83d78(param_3,&UNK_110480668,0x101d84fa4);
      func_0x0001000d224c(&uStack_60);
      FUN_101d83d78(param_5,&UNK_110480640,0x101d84f8c);
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      func_0x000104889a8c(uStack_60,1,param_3,param_5,FUN_101d83e80,0);
      func_0x000107c61574(param_3);
      func_0x000107c615e8(uStack_60);
      func_0x000107c61574(param_5);
      func_0x000107c61574(param_2);
    }
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  return;
}



/* Entry: 101d83d78; end: 101d83e7f;  */

undefined8 FUN_101d83d78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  
  uVar4 = *unaff_x20;
  func_0x0001000d224c(&uStack_68);
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  puVar2 = &UNK_110480370;
  func_0x000107c613fc(&UNK_110480370,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  func_0x000107c613fc(param_2,0x20,7);
  *(undefined **)(param_2 + 0x10) = puVar2;
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  uVar3 = 0;
  FUN_101d7b40c(0);
  uVar4 = uStack_68;
  func_0x000104888afc(uStack_68,1,param_1,uVar1,param_3,param_2,uVar3);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_2);
  return uVar4;
}


