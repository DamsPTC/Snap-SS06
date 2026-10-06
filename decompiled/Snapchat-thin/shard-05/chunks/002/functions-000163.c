/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bf9380; end: 103bf938f; -[SCAdViewContextExitEvent .cxx_destruct] */

void FUN_103bf9380(void)

{
  return;
}



/* Entry: 103bf9390; end: 103bf93b7; +[SCAdViewContextPosition preRoll] */

void FUN_103bf9390(void)

{
  func_0x000107c5fadc(0x4c4c4f525f455250,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf93b8; end: 103bf93c3;  */

undefined * FUN_103bf93b8(void)

{
  return &UNK_10dc645c0;
}



/* Entry: 103bf93c4; end: 103bf93ef; +[SCAdViewContextPosition postRoll] */

void FUN_103bf93c4(void)

{
  func_0x000107c5fadc(0x4c4f525f54534f50,0xe90000000000004c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf93f0; end: 103bf93fb;  */

undefined * FUN_103bf93f0(void)

{
  return &UNK_10dc645d0;
}



/* Entry: 103bf93fc; end: 103bf9423; +[SCAdViewContextPosition midRoll] */

void FUN_103bf93fc(void)

{
  func_0x000107c5fadc(0x4c4c4f525f44494d,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bf9424; end: 103bf9427; -[SCAdViewContextPosition init] */

void FUN_103bf9424(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf9428; end: 103bf9463;  */

void FUN_103bf9428(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf9464; end: 103bf9467;  */

void FUN_103bf9464(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bf9468; end: 103bf949b;  */

void FUN_103bf9468(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bf949c; end: 103bf949f; -[SCAdViewContextPosition .cxx_destruct] */

void FUN_103bf949c(void)

{
  return;
}



/* Entry: 103bf94a0; end: 103bf94ff;  */

void FUN_103bf94a0(void)

{
  func_0x000107c61168(&PTR_PTR_112944b10);
  return;
}



/* Entry: 103bf9500; end: 103bf9503; -[SCAdViewContextParameters init] */

void FUN_103bf9500(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf9504; end: 103bf950f; -[SCAdViewContextExitEvent init] */

void FUN_103bf9504(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf9510; end: 103bf9793;  */

void FUN_103bf9510(undefined8 *param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  
  puVar10 = param_2;
  puVar3 = param_2;
  func_0x000107c42af0();
  func_0x000107c61180();
  puVar4 = puVar10;
  func_0x000107c5faec();
  puVar2 = puVar3;
  func_0x000107c61170(puVar10);
  puVar8 = (undefined *)*param_1;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(puVar8 + 0x10) != 0) {
    func_0x000107c61434(puVar8);
    puVar2 = puVar3;
    func_0x000100029284();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)puVar2 & 1) != 0) {
      puVar10 = *(undefined **)(*(long *)(puVar8 + 0x38) + (long)puVar4 * 8);
      func_0x000107c61434(puVar10);
    }
    func_0x000107c6142c(puVar3);
    puVar3 = puVar8;
  }
  func_0x000107c6142c(puVar3);
  puVar4 = param_2;
  func_0x000107c414bc();
  iVar1 = (int)puVar4;
  puVar3 = puVar10;
  if (iVar1 == 2) {
LAB_103bf9620:
    puVar4 = puVar10;
    func_0x000107c61550();
    if ((((int)puVar4 == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar10 >> 0x3e == 0) {
LAB_103bf9640:
        puVar2 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar2 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar2 = puVar10;
        }
        func_0x000107c60480(puVar2);
      }
LAB_103bf9644:
      puVar2 = puVar2 + 1;
      puVar3 = (undefined *)0x0;
      FUN_103bfa484(0,puVar2,1,puVar10);
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        FUN_103bf9d18();
        puVar2 = (undefined *)(((ulong)*(uint *)(puVar4 + 0x30) + 7 & 0x1fffffff8) + 8);
        func_0x000107c613fc();
        *(undefined8 *)(puVar4 + 0x18) = 3;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined **)(puVar4 + 0x20) = param_2;
        func_0x000107c61174(param_2);
        func_0x000107c6142c(puVar10);
        puVar10 = puVar4;
        goto LAB_103bf969c;
      }
      goto LAB_103bf9620;
    }
    uVar9 = (ulong)puVar10 >> 0x3e;
    if (uVar9 == 0) {
      puVar4 = *(undefined **)((undefined *)((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar4 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        puVar4 = puVar10;
      }
      func_0x000107c60480();
    }
    if (puVar4 != (undefined *)0x0) goto LAB_103bf969c;
    puVar4 = puVar10;
    func_0x000107c61550();
    if ((uVar9 != 0) || (((ulong)puVar4 & 1) == 0)) {
      if (uVar9 == 0) goto LAB_103bf9640;
      puVar2 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        puVar2 = puVar10;
      }
      func_0x000107c60480(puVar2);
      goto LAB_103bf9644;
    }
  }
  uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
  uVar9 = *(ulong *)(uVar6 + 0x10);
  puVar4 = (undefined *)(uVar9 + 1);
  puVar10 = puVar3;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar9) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
    puVar2 = puVar4;
    FUN_103bfa484(puVar10,puVar4,1,puVar3);
    uVar6 = (ulong)puVar10 & 0xffffffffffffff8;
  }
  *(undefined **)(uVar6 + 0x10) = puVar4;
  *(undefined **)(uVar6 + uVar9 * 8 + 0x20) = param_2;
  func_0x000107c61174(param_2);
LAB_103bf969c:
  func_0x000107c42af0(param_2);
  func_0x000107c61180();
  puVar4 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  func_0x000107c61434(puVar10);
  uVar5 = *param_1;
  func_0x000107c61558(uVar5);
  uVar7 = *param_1;
  FUN_103bf9f28(puVar10,puVar4,puVar2,uVar5);
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(puVar2);
  *param_1 = uVar7;
  return;
}



/* Entry: 103bf9794; end: 103bf983b; -[SCValdiAdTrackEventStore addEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf9794(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff6728);
  uStack_50 = param_3;
  lStack_48 = lVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_103bfa8b4,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103bf983c; end: 103bf9b97;  */

void FUN_103bf983c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *param_2;
  puVar14 = (ulong *)(lVar5 + 0x40);
  uVar12 = *puVar14;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar13 < 0x40) {
    uVar19 = ~(-1L << (-uVar13 & 0x3f));
  }
  uVar19 = uVar19 & uVar12;
  func_0x000107c61438(lVar5,2);
  lVar20 = 0;
  lVar21 = lVar20;
  do {
    while (uVar19 == 0) {
      bVar3 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9b80);
        (*pcVar2)();
      }
      if ((long)(0x3f - uVar13 >> 6) <= lVar20) {
        func_0x000107c6142c(lVar5);
        FUN_103bfa8ac(lVar5,puVar14,~uVar13,lVar21,0);
        return;
      }
      uVar19 = puVar14[lVar20];
    }
    uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = *(ulong *)(*(long *)(lVar5 + 0x38) + LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) * 8 +
                       lVar20 * 0x200);
    if (uVar12 >> 0x3e == 0) {
      uVar16 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar16 = uVar12 & 0xffffffffffffff8;
      if ((uVar12 & 0x8000000000000000) != 0) {
        uVar16 = uVar12;
      }
      func_0x000107c60480();
    }
    uVar23 = (ulong)puStack_68 >> 0x3e;
    if (uVar23 == 0) {
      puVar6 = *(undefined **)((undefined *)((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
      if (((ulong)puStack_68 & 0x8000000000000000) != 0) {
        puVar6 = puStack_68;
      }
      func_0x000107c60480();
    }
    puVar1 = puVar6 + uVar16;
    if (SCARRY8((long)puVar6,uVar16)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9b84);
      (*pcVar2)();
    }
    func_0x000107c61434(uVar12);
    puVar6 = puStack_68;
    func_0x000107c61550();
    uVar4 = 0;
    if (uVar23 == 0) {
      uVar4 = (uint)puVar6;
    }
    puVar6 = (undefined *)(ulong)uVar4;
    if ((uVar4 != 1) ||
       (uVar22 = (ulong)puStack_68 & 0xffffffffffffff8,
       (long)(*(ulong *)(uVar22 + 0x18) >> 1) < (long)puVar1)) {
      if (uVar23 == 0) {
        puVar11 = *(undefined **)((undefined *)((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
        if (((ulong)puStack_68 & 0x8000000000000000) != 0) {
          puVar11 = puStack_68;
        }
        func_0x000107c60480();
      }
      if ((long)puVar11 <= (long)puVar1) {
        puVar11 = puVar1;
      }
      FUN_103bfa484(puVar6,puVar11,1,puStack_68);
      uVar22 = (ulong)puVar6 & 0xffffffffffffff8;
      puStack_68 = puVar6;
    }
    lVar21 = *(long *)(uVar22 + 0x10);
    uVar23 = (*(ulong *)(uVar22 + 0x18) >> 1) - lVar21;
    if (uVar12 >> 0x3e == 0) {
      uVar24 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      if (uVar24 == 0) goto LAB_103bf98c4;
      if (uVar23 < uVar24) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9b90);
        (*pcVar2)();
      }
      uVar7 = 0;
      func_0x000103bfa868(0);
      func_0x000107c6140c(uVar22 + lVar21 * 8 + 0x20,(uVar12 & 0xffffffffffffff8) + 0x20,uVar24,
                          uVar7);
LAB_103bf9ab8:
      func_0x000107c6142c(uVar12);
      if ((long)uVar24 < (long)uVar16) goto LAB_103bf9b84;
      if (0 < (long)uVar24) {
        if (SCARRY8(*(long *)(uVar22 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9b8c);
          (*pcVar2)();
        }
        *(ulong *)(uVar22 + 0x10) = *(long *)(uVar22 + 0x10) + uVar24;
      }
    }
    else {
      uVar24 = uVar12 & 0xffffffffffffff8;
      if ((uVar12 & 0x8000000000000000) != 0) {
        uVar24 = uVar12;
      }
      uVar8 = uVar24;
      func_0x000107c60480();
      if (uVar8 != 0) {
        func_0x000107c60480();
        if ((long)uVar23 < (long)uVar24) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9b94);
          (*pcVar2)();
        }
        if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9b98);
          (*pcVar2)();
        }
        lVar21 = uVar22 + lVar21 * 8;
        puVar15 = (undefined8 *)(lVar21 + 0x20);
        if ((uVar12 & 0xc000000000000001) == 0) {
          uVar7 = *(undefined8 *)(uVar12 + 0x20);
          *puVar15 = uVar7;
          lVar17 = uVar8 - 1;
          if (lVar17 != 0) {
            uVar10 = uVar7;
            puVar15 = (undefined8 *)(lVar21 + 0x28);
            puVar18 = (undefined8 *)(uVar12 + 0x28);
            do {
              uVar7 = *puVar18;
              *puVar15 = uVar7;
              func_0x000107c61174(uVar10);
              lVar17 = lVar17 + -1;
              uVar10 = uVar7;
              puVar15 = puVar15 + 1;
              puVar18 = puVar18 + 1;
            } while (lVar17 != 0);
          }
          func_0x000107c61174(uVar7);
        }
        else {
          uVar23 = 0;
          do {
            uVar9 = uVar23;
            FUN_103bf9d74(uVar23,uVar12);
            puVar15[uVar23] = uVar9;
            uVar23 = uVar23 + 1;
          } while (uVar8 != uVar23);
        }
        goto LAB_103bf9ab8;
      }
LAB_103bf98c4:
      func_0x000107c6142c(uVar12);
      if (0 < (long)uVar16) {
LAB_103bf9b84:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9b88);
        (*pcVar2)();
      }
    }
    uVar19 = uVar19 - 1 & uVar19;
    *param_1 = puStack_68;
    lVar21 = lVar20;
  } while( true );
}



/* Entry: 103bf9b98; end: 103bf9c43; -[SCValdiAdTrackEventStore asList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf9b98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff6728);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112ff6730;
  func_0x0001000285a8(0x112ff6730,&UNK_10dce5a90);
  func_0x000100075034(&uStack_38,FUN_103bf983c,0,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000103bfa868(0);
  uVar1 = uStack_38;
  func_0x000107c5fc48(uStack_38,uVar2);
  func_0x000107c6142c(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bf9c44; end: 103bf9cd3; -[SCValdiAdTrackEventStore init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf9c44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ff6728;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103bfa724();
  puStack_38 = puVar3;
  func_0x0001000285a8(0x112ff6720,&UNK_10dc64660);
  func_0x000107c613fc();
  ppuVar4 = &puStack_38;
  func_0x00010006c248();
  *(undefined ***)(param_1 + lVar1) = ppuVar4;
  lStack_48 = param_1;
  lStack_40 = lVar2;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bf9cd4; end: 103bf9d07;  */

void FUN_103bf9cd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bf9d08; end: 103bf9d17; -[SCValdiAdTrackEventStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bf9d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff6728));
  return;
}



/* Entry: 103bf9d18; end: 103bf9d73;  */

void FUN_103bf9d18(void)

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
    func_0x000103bfa868();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ff6768;
  plVar5 = (long *)&UNK_10dc646a8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103bf9d74; end: 103bf9f27;  */

ulong FUN_103bf9d74(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9e58);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9e5c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ad980;
    func_0x000107c61168(PTR_PTR_1126ad980);
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
    puVar4 = PTR_PTR_1126ad980;
    func_0x000107c61168(PTR_PTR_1126ad980);
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
  func_0x000103bfa868(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9f28);
  (*pcVar2)();
}



/* Entry: 103bf9f28; end: 103bfa1e7;  */

void FUN_103bf9f28(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bfa000);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_103bfa1e8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bf9fc8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103bfa078();
    lVar6 = *unaff_x20;
    goto joined_r0x000103bfa014;
  }
  lVar6 = *unaff_x20;
joined_r0x000103bfa014:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bfa078);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103bfa1e8; end: 103bfa483;  */

void FUN_103bfa1e8(long param_1,ulong param_2)

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
  uVar6 = 0x112ff6770;
  func_0x0001000285a8(0x112ff6770,&UNK_10dc646b8);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103bfa450:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103bfa480);
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
          goto LAB_103bfa450;
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
      func_0x000107c61434(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103bfa484);
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



/* Entry: 103bfa484; end: 103bfa5ab;  */

ulong FUN_103bfa484(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfa5ac);
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
  FUN_103bfa5ac(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfa5a8);
      (*pcVar1)();
    }
    FUN_103bfa62c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103bfa5ac; end: 103bfa62b;  */

undefined * FUN_103bfa5ac(undefined *param_1,undefined *param_2)

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
    FUN_103bf9d18();
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



/* Entry: 103bfa62c; end: 103bfa723;  */

long FUN_103bfa62c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103bfa720);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103bfa724);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103bfa868(0);
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
      func_0x000103bfa868(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103bfa71c);
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



/* Entry: 103bfa724; end: 103bfa81f;  */

undefined * FUN_103bfa724(long param_1)

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
    func_0x0001000285a8(0x112ff6770,&UNK_10dc646b8);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103bfa81c);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103bfa820);
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



/* Entry: 103bfa820; end: 103bfa847;  */

void FUN_103bfa820(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103bf9510(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103bfa848; end: 103bfa8ab;  */

void FUN_103bfa848(void)

{
  func_0x000107c61168(&PTR_PTR_112944d20);
  return;
}



/* Entry: 103bfa8ac; end: 103bfa8b3;  */

void FUN_103bfa8ac(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103bfa8b4; end: 103bfa8c7;  */

void FUN_103bfa8b4(void)

{
  FUN_103bfa820();
  return;
}



/* Entry: 103bfa8c8; end: 103bfa8cf; +[SCAdViewSourceConverter adViewSourceFrom:] */

undefined8 FUN_103bfa8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  switch(param_3) {
  case 5:
    goto code_r0x000103bfaa4c;
  default:
    uVar1 = 0;
code_r0x000103bfaa4c:
    return uVar1;
  case 8:
    return 0x19;
  case 0xb:
    return 0x17;
  case 0x10:
    return 0x11;
  case 0x15:
    return 0x22;
  case 0x17:
    return 0x13;
  case 0x1d:
    return 0x18;
  case 0x1e:
    return 4;
  case 0x22:
    return 0x12;
  case 0x2b:
    return 6;
  case 0x2c:
  case 0x53:
    return 1;
  case 0x2d:
    return 2;
  case 0x30:
    return 8;
  case 0x31:
    return 0x10;
  case 0x32:
    return 0xf;
  case 0x35:
    return 0xe;
  case 0x39:
  case 0x56:
    return 0x1e;
  case 0x3b:
    return 9;
  case 0x3c:
    return 0xb;
  case 0x3d:
    return 10;
  case 0x3e:
    return 0xd;
  case 0x3f:
    return 0xc;
  case 0x45:
    return 0x14;
  case 0x48:
    return 0x1d;
  case 0x49:
  case 0x57:
  case 0x5f:
    return 0x16;
  case 0x50:
    return 0x1c;
  case 0x5b:
    return 0x20;
  case 0x62:
  case 0x65:
    return 0x1f;
  }
}



/* Entry: 103bfa8d0; end: 103bfa8d7; +[SCAdViewSourceConverter broadcastViewLocationFrom:] */

undefined8 FUN_103bfa8d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_3 < 0x23) {
    return *(undefined8 *)(&UNK_10dc64768 + param_3 * 8);
  }
  uStack_18 = param_3;
  func_0x000107c60614(&UNK_11079afa0,&uStack_18,&UNK_11079afa0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfaa98);
  (*pcVar1)();
}



/* Entry: 103bfa8d8; end: 103bfa913; -[SCAdViewSourceConverter init] */

void FUN_103bfa8d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfa914; end: 103bfa947;  */

void FUN_103bfa914(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bfa948; end: 103bfaa4f;  */

undefined8 FUN_103bfa948(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  switch(param_1) {
  case 5:
    goto code_r0x000103bfaa4c;
  default:
    uVar1 = 0;
code_r0x000103bfaa4c:
    return uVar1;
  case 8:
    return 0x19;
  case 0xb:
    return 0x17;
  case 0x10:
    return 0x11;
  case 0x15:
    return 0x22;
  case 0x17:
    return 0x13;
  case 0x1d:
    return 0x18;
  case 0x1e:
    return 4;
  case 0x22:
    return 0x12;
  case 0x2b:
    return 6;
  case 0x2c:
  case 0x53:
    return 1;
  case 0x2d:
    return 2;
  case 0x30:
    return 8;
  case 0x31:
    return 0x10;
  case 0x32:
    return 0xf;
  case 0x35:
    return 0xe;
  case 0x39:
  case 0x56:
    return 0x1e;
  case 0x3b:
    return 9;
  case 0x3c:
    return 0xb;
  case 0x3d:
    return 10;
  case 0x3e:
    return 0xd;
  case 0x3f:
    return 0xc;
  case 0x45:
    return 0x14;
  case 0x48:
    return 0x1d;
  case 0x49:
  case 0x57:
  case 0x5f:
    return 0x16;
  case 0x50:
    return 0x1c;
  case 0x5b:
    return 0x20;
  case 0x62:
  case 0x65:
    return 0x1f;
  }
}



/* Entry: 103bfaa50; end: 103bfaab7;  */

undefined8 FUN_103bfaa50(ulong param_1)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_1 < 0x23) {
    return *(undefined8 *)(&UNK_10dc64768 + param_1 * 8);
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_11079afa0,&uStack_18,&UNK_11079afa0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfaa98);
  (*pcVar1)();
}



/* Entry: 103bfaab8; end: 103bfaabb;  */

undefined1  [16] FUN_103bfaab8(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long lStack_60;
  undefined *puStack_58;
  
  lVar5 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_60 = param_1;
  puStack_58 = param_2;
  func_0x000107c5eb88(lVar11);
  func_0x000100e8b654();
  lVar7 = lVar11;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar11,PTR___sSSN_11034da80,lVar6);
  (**(code **)(lVar12 + 8))(lVar11,lVar5);
  puVar9 = puVar8;
  func_0x000107c5fb24();
  func_0x000107c6142c(puVar8);
  if (lRam0000000112ff6868 != -1) {
    func_0x000107c61568(0x112ff6868,FUN_103bfacd4);
  }
  lVar6 = lRam0000000112ff6870;
  if (*(long *)(lRam0000000112ff6870 + 0x10) != 0) {
    func_0x000107c61434(lRam0000000112ff6870);
    lVar5 = lVar7;
    puVar8 = puVar9;
    func_0x000100029284();
    if (((ulong)puVar8 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar5 * 0x10);
      pcVar3 = (code *)*puVar1;
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(lVar6);
      (*pcVar3)(&lStack_60);
      func_0x000107c61574(uVar4);
      puVar9 = puStack_58;
      lVar7 = lStack_60;
      if (puStack_58 == (undefined *)0x0) {
        func_0x000107c61434(param_2);
        puVar9 = param_2;
        lVar7 = param_1;
      }
      goto LAB_103bfb6a8;
    }
    func_0x000107c6142c(lVar6);
  }
  if (lRam0000000112ff6878 != -1) {
    func_0x000107c61568(0x112ff6878,FUN_103bfaba8);
  }
  puVar8 = puRam0000000112ff6880;
  if (*(long *)(puRam0000000112ff6880 + 0x10) != 0) {
    func_0x000107c61434(puRam0000000112ff6880);
    lVar6 = lVar7;
    puVar10 = puVar9;
    func_0x000100029284();
    if (((ulong)puVar10 & 1) != 0) {
      plVar2 = (long *)(*(long *)(puVar8 + 0x38) + lVar6 * 0x10);
      lVar7 = *plVar2;
      puVar10 = (undefined *)plVar2[1];
      func_0x000107c61434(puVar10);
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(puVar8);
      puVar9 = puVar10;
      FUN_103bfb3ac(lVar7,puVar10);
      puVar8 = puVar10;
    }
    func_0x000107c6142c(puVar8);
  }
LAB_103bfb6a8:
  auVar13._8_8_ = puVar9;
  auVar13._0_8_ = lVar7;
  return auVar13;
}



/* Entry: 103bfaabc; end: 103bfab17; +[SCAdAffordanceTextHelper affordanceTextFromAffordanceTextKey:] */

void FUN_103bfaabc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  FUN_103bfb4d4();
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bfab18; end: 103bfab1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfab18(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = lRam0000000112ff67c8;
  if (param_1 != 0) {
    uVar6 = ((ulong *)(param_1 + _DAT_113090610))[1];
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(param_1 + _DAT_113090610);
      uVar2 = uVar4 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar2 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        FUN_103bfb4d4(uVar4,uVar6);
        return;
      }
    }
  }
  if (param_2 == 0) {
    return;
  }
  uVar6 = param_2;
  func_0x000107c61174();
  if (lVar7 != -1) {
    uVar6 = 0;
    func_0x000107c61568(0x112ff67c8);
  }
  lVar7 = lRam0000000112ff67d0;
  lVar8 = *(long *)(param_2 + _DAT_113091028);
  if (*(long *)(lRam0000000112ff67d0 + 0x10) != 0) {
    func_0x000107c61434(lRam0000000112ff67d0);
    lVar5 = lVar8;
    FUN_103bfb2f0();
    if ((uVar6 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar5 * 0x10);
      uVar9 = *puVar1;
      uVar3 = puVar1[1];
      func_0x000107c61434(uVar3);
      func_0x000107c6142c(lVar7);
      FUN_103bfb3ac(uVar9,uVar3);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar3);
      return;
    }
    func_0x000107c6142c(lVar7);
  }
  if ((int)lVar8 != 10) {
    func_0x000107c61170(param_2);
    return;
  }
  if (*(long *)(param_2 + _DAT_113090fe0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_113090fe0) + _DAT_11308fd28);
    lVar7 = puVar1[1];
    if (lVar7 != 0) {
      uVar9 = *puVar1;
      func_0x000107c61434(lVar7);
      goto LAB_103bfb85c;
    }
  }
  uVar9 = 0;
  lVar7 = -0x2000000000000000;
LAB_103bfb85c:
  FUN_103bfb4d4(uVar9,lVar7);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(lVar7);
  return;
}



/* Entry: 103bfab1c; end: 103bfaba7; +[SCAdAffordanceTextHelper affordanceTextWithTopSnap:bottomSnap:] */

void FUN_103bfab1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  lVar2 = param_4;
  func_0x000107c61174(param_4);
  FUN_103bfb6fc(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bfaba8; end: 103bfacd3;  */

void FUN_103bfaba8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined **ppuVar13;
  
  func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
  lVar12 = 0x2d;
  lVar7 = 0x2d;
  func_0x000107c60498();
  func_0x000107c6157c();
  ppuVar13 = &PTR_s_affordance_text_try_lens_112ff68c8;
  while( true ) {
    puVar2 = ppuVar13[-3];
    puVar4 = ppuVar13[-2];
    puVar3 = ppuVar13[-1];
    puVar5 = *ppuVar13;
    func_0x000107c61434(puVar4);
    func_0x000107c61434(puVar5);
    puVar8 = puVar2;
    puVar10 = puVar4;
    func_0x000100029284();
    if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103bfacd0);
      (*pcVar6)();
    }
    uVar11 = (ulong)puVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar7 + 0x40 + uVar11) =
         *(ulong *)(lVar7 + 0x40 + uVar11) | 1L << ((ulong)puVar8 & 0x3f);
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + (long)puVar8 * 0x10);
    *puVar1 = puVar2;
    puVar1[1] = puVar4;
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)puVar8 * 0x10);
    *puVar1 = puVar3;
    puVar1[1] = puVar5;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) break;
    ppuVar13 = ppuVar13 + 4;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      func_0x000107c61574(lVar7);
      uVar9 = 0x112d38308;
      func_0x0001000285a8(0x112d38308,&UNK_10d902040);
      func_0x000107c61408(0x112ff68b0,0x2d,uVar9);
      lRam0000000112ff6880 = lVar7;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x103bfacd4);
  (*pcVar6)();
}



/* Entry: 103bfacd4; end: 103bfae07;  */

void FUN_103bfacd4(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x0001000285a8(0x112ff6ff8,&UNK_10dc648b8);
  lVar10 = 0xc;
  lVar6 = 0xc;
  func_0x000107c60498();
  func_0x000107c6157c();
  puVar11 = (undefined8 *)0x112ff6e90;
  while( true ) {
    uVar2 = puVar11[-3];
    uVar3 = puVar11[-2];
    uVar9 = *puVar11;
    uVar13 = *puVar11;
    uVar12 = puVar11[-1];
    func_0x000107c61434(uVar3);
    func_0x000107c6157c(uVar9);
    uVar7 = uVar2;
    uVar8 = uVar3;
    func_0x000100029284();
    if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103bfae04);
      (*pcVar5)();
    }
    uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar6 + 0x40 + uVar8) = *(ulong *)(lVar6 + 0x40 + uVar8) | 1L << (uVar7 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar7 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar7 * 0x10);
    puVar4[1] = uVar13;
    *puVar4 = uVar12;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) break;
    puVar11 = puVar11 + 4;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      func_0x000107c61574(lVar6);
      uVar9 = 0x112ff7000;
      func_0x0001000285a8(0x112ff7000,&UNK_10dc648c0);
      func_0x000107c61408(0x112ff6e78,0xc,uVar9);
      lRam0000000112ff6870 = lVar6;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x103bfae08);
  (*pcVar5)();
}



/* Entry: 103bfae08; end: 103bfae97;  */

void FUN_103bfae08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10af4719c;
  (*(code *)&UNK_10af4719c)();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
  }
  *param_1 = puVar2;
  param_1[1] = param_3;
  return;
}



/* Entry: 103bfae98; end: 103bfb0fb;  */

void FUN_103bfae98(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  
  (*param_2)();
  func_0x000107c61180();
  if (param_2 == (code *)0x0) {
    pcVar1 = (code *)0x0;
    param_3 = 0;
  }
  else {
    pcVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  *param_1 = pcVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 103bfb0fc; end: 103bfb27b;  */

void FUN_103bfb0fc(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_a8 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar7 = 5;
  func_0x000107c602e8();
  lVar14 = 0;
  lVar1 = lVar7 + 0x38;
  do {
    uVar3 = *(ulong *)(lVar14 * 0x10 + 0x112ff6810);
    puVar4 = (&PTR_s_TAP_BRAND_PROFILE_112ff6818)[lVar14 * 2];
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    func_0x000107c61434(puVar4);
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,puVar4);
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar13 >> 6;
    uVar10 = *(ulong *)(lVar1 + uVar9 * 8);
    uVar11 = 1L << (uVar13 & 0x3f);
    if ((uVar11 & uVar10) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
        uVar9 = *puVar2;
        puVar5 = (undefined *)puVar2[1];
        if ((uVar9 == uVar3 && puVar5 == puVar4) ||
           (func_0x000107c605b8(uVar9,puVar5,uVar3,puVar4,0), (uVar9 & 1) != 0)) {
          func_0x000107c6142c(puVar4);
          goto LAB_103bfb164;
        }
        uVar13 = uVar13 + 1 & ~uVar12;
        uVar9 = uVar13 >> 6;
        uVar10 = *(ulong *)(lVar1 + uVar9 * 8);
        uVar11 = 1L << (uVar13 & 0x3f);
      } while ((uVar11 & uVar10) != 0);
    }
    *(ulong *)(lVar1 + uVar9 * 8) = uVar11 | uVar10;
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = (ulong)puVar4;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103bfb27c);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
LAB_103bfb164:
    lVar14 = lVar14 + 1;
    if (lVar14 == 5) {
      func_0x000107c61408(0x112ff6810,5,PTR___sSSN_11034da80);
      lRam0000000112ff67e0 = lVar7;
      return;
    }
  } while( true );
}



/* Entry: 103bfb27c; end: 103bfb2b7; -[SCAdAffordanceTextHelper init] */

void FUN_103bfb27c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfb2b8; end: 103bfb2eb;  */

void FUN_103bfb2b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bfb2ec; end: 103bfb2ef; -[SCAdAffordanceTextHelper .cxx_destruct] */

void FUN_103bfb2ec(void)

{
  return;
}



/* Entry: 103bfb2f0; end: 103bfb347;  */

void FUN_103bfb2f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == (int)param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103bfb348; end: 103bfb3ab;  */

void FUN_103bfb348(int param_1,ulong param_2)

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



/* Entry: 103bfb3ac; end: 103bfb4d3;  */

undefined1  [16] FUN_103bfb3ac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (lRam0000000112ff67d8 != -1) {
    func_0x000107c61568(0x112ff67d8,FUN_103bfb0fc);
  }
  uVar1 = param_1;
  func_0x0001000f66f0(param_1,param_2,uRam0000000112ff67e0);
  uVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar4 = uVar2;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    func_0x000107c5fe40(0);
    uVar5 = uVar3;
    func_0x000107c312f4(uVar2,uVar3);
  }
  else {
    uVar3 = 0x7574726174534353;
    func_0x000107c5fadc(0x7574726174534353,0xe900000000000070);
    uVar5 = uVar3;
    func_0x0001000f6108(uVar2,uVar3,0);
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (uVar4 == 0) {
    func_0x000107c61434(param_2);
  }
  else {
    param_1 = uVar4;
    func_0x000107c5faec(uVar4);
    func_0x000107c61170(uVar4);
    param_2 = uVar5;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 103bfb4d4; end: 103bfb6fb;  */

undefined1  [16] FUN_103bfb4d4(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long lStack_60;
  undefined *puStack_58;
  
  lVar5 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_60 = param_1;
  puStack_58 = param_2;
  func_0x000107c5eb88(lVar11);
  func_0x000100e8b654();
  lVar7 = lVar11;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar11,PTR___sSSN_11034da80,lVar6);
  (**(code **)(lVar12 + 8))(lVar11,lVar5);
  puVar9 = puVar8;
  func_0x000107c5fb24();
  func_0x000107c6142c(puVar8);
  if (lRam0000000112ff6868 != -1) {
    func_0x000107c61568(0x112ff6868,FUN_103bfacd4);
  }
  lVar6 = lRam0000000112ff6870;
  if (*(long *)(lRam0000000112ff6870 + 0x10) != 0) {
    func_0x000107c61434(lRam0000000112ff6870);
    lVar5 = lVar7;
    puVar8 = puVar9;
    func_0x000100029284();
    if (((ulong)puVar8 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar5 * 0x10);
      pcVar3 = (code *)*puVar1;
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(lVar6);
      (*pcVar3)(&lStack_60);
      func_0x000107c61574(uVar4);
      puVar9 = puStack_58;
      lVar7 = lStack_60;
      if (puStack_58 == (undefined *)0x0) {
        func_0x000107c61434(param_2);
        puVar9 = param_2;
        lVar7 = param_1;
      }
      goto LAB_103bfb6a8;
    }
    func_0x000107c6142c(lVar6);
  }
  if (lRam0000000112ff6878 != -1) {
    func_0x000107c61568(0x112ff6878,FUN_103bfaba8);
  }
  puVar8 = puRam0000000112ff6880;
  if (*(long *)(puRam0000000112ff6880 + 0x10) != 0) {
    func_0x000107c61434(puRam0000000112ff6880);
    lVar6 = lVar7;
    puVar10 = puVar9;
    func_0x000100029284();
    if (((ulong)puVar10 & 1) != 0) {
      plVar2 = (long *)(*(long *)(puVar8 + 0x38) + lVar6 * 0x10);
      lVar7 = *plVar2;
      puVar10 = (undefined *)plVar2[1];
      func_0x000107c61434(puVar10);
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(puVar8);
      puVar9 = puVar10;
      FUN_103bfb3ac(lVar7,puVar10);
      puVar8 = puVar10;
    }
    func_0x000107c6142c(puVar8);
  }
LAB_103bfb6a8:
  auVar13._8_8_ = puVar9;
  auVar13._0_8_ = lVar7;
  return auVar13;
}



/* Entry: 103bfb6fc; end: 103bfb8af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfb6fc(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = lRam0000000112ff67c8;
  if (param_1 != 0) {
    uVar6 = ((ulong *)(param_1 + _DAT_113090610))[1];
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(param_1 + _DAT_113090610);
      uVar2 = uVar4 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar2 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        FUN_103bfb4d4(uVar4,uVar6);
        return;
      }
    }
  }
  if (param_2 == 0) {
    return;
  }
  uVar6 = param_2;
  func_0x000107c61174();
  if (lVar7 != -1) {
    uVar6 = 0;
    func_0x000107c61568(0x112ff67c8);
  }
  lVar7 = lRam0000000112ff67d0;
  lVar8 = *(long *)(param_2 + _DAT_113091028);
  if (*(long *)(lRam0000000112ff67d0 + 0x10) != 0) {
    func_0x000107c61434(lRam0000000112ff67d0);
    lVar5 = lVar8;
    FUN_103bfb2f0();
    if ((uVar6 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar5 * 0x10);
      uVar9 = *puVar1;
      uVar3 = puVar1[1];
      func_0x000107c61434(uVar3);
      func_0x000107c6142c(lVar7);
      FUN_103bfb3ac(uVar9,uVar3);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar3);
      return;
    }
    func_0x000107c6142c(lVar7);
  }
  if ((int)lVar8 != 10) {
    func_0x000107c61170(param_2);
    return;
  }
  if (*(long *)(param_2 + _DAT_113090fe0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_113090fe0) + _DAT_11308fd28);
    lVar7 = puVar1[1];
    if (lVar7 != 0) {
      uVar9 = *puVar1;
      func_0x000107c61434(lVar7);
      goto LAB_103bfb85c;
    }
  }
  uVar9 = 0;
  lVar7 = -0x2000000000000000;
LAB_103bfb85c:
  FUN_103bfb4d4(uVar9,lVar7);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(lVar7);
  return;
}



/* Entry: 103bfb8b0; end: 103bfb8cf;  */

void FUN_103bfb8b0(void)

{
  func_0x000107c61168(&PTR_PTR_112944e88);
  return;
}



/* Entry: 103bfb8d0; end: 103bfb8db; -[SCAdAutofillNameComponents firstName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfb8d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff7008))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff7008);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bfb8dc; end: 103bfb8e7; -[SCAdAutofillNameComponents lastName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfb8dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff7010))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff7010);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bfb8e8; end: 103bfb93f;  */

void FUN_103bfb8e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bfb940; end: 103bfb9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfb940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff7008);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff7010);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfb9bc; end: 103bfba67; -[SCAdAutofillNameComponents initWithFirstName:lastName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfb9bc(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff7008);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112ff7010);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfba68; end: 103bfbac7; -[SCAdAutofillNameComponents init] */

void FUN_103bfba68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdDataUtils.AdAutofillNameComponents",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfba94);
  (*pcVar1)();
}



/* Entry: 103bfbac8; end: 103bfbb07; -[SCAdAutofillNameComponents .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bfbae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bfbaec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfbac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff7008 + 8))
  ;
  return;
}



/* Entry: 103bfbb08; end: 103bfbb0b;  */

/* WARNING: Removing unreachable block (ram,0x000103bfbcd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_103bfbb08(undefined *param_1,undefined *param_2,undefined1 *param_3,undefined *param_4,
             undefined *param_5,undefined *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar2 = (undefined *)0x0;
  puStack_98 = param_1;
  puStack_90 = param_3;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_6 == (undefined *)0x0) {
    puVar8 = (undefined1 *)0x0;
    puVar7 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    puStack_a0 = puVar2;
    FUN_103f20150(0);
    func_0x000107c61434(param_6);
    puVar11 = param_5;
    puVar10 = param_6;
    FUN_103f1fd58();
    func_0x000107c61434(puVar10);
    puVar2 = puVar11;
    puVar5 = param_6;
    func_0x000107c5fbb4(puVar11,puVar10,param_5,param_6);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c6142c(param_6);
      puVar2 = puVar10;
      func_0x000107c6142c();
      puVar8 = (undefined1 *)0x0;
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar11;
      func_0x000107c5fb5c(puVar11,puVar10);
      func_0x000107c6142c(puVar10);
      puVar6 = param_6;
      func_0x0001011a7878(puVar2,param_5,param_6);
      puStack_a8 = puVar2;
      func_0x000107c6142c(param_6);
      puVar7 = puStack_a8;
      puVar2 = param_5;
      func_0x000107c5fb2c(puStack_a8,param_5,puVar6,puVar5);
      func_0x000107c6142c(puVar5);
      puStack_88 = puVar7;
      puStack_80 = puVar2;
      func_0x000107c5eb68(puVar12);
      func_0x000100e8b654();
      puVar8 = puVar12;
      puVar7 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar12,PTR___sSSN_11034da80,puVar5);
      (**(code **)(lVar9 + 8))(puVar12,puStack_a0);
      func_0x000107c6142c();
    }
  }
  puVar5 = param_2;
  puVar6 = puStack_98;
  if (param_2 == (undefined *)0x0) {
    puVar2 = puVar10;
    func_0x000107c61434();
    puVar5 = puVar10;
    puVar6 = puVar11;
  }
  puVar11 = param_4;
  puVar12 = puStack_90;
  if (param_4 == (undefined *)0x0) {
    puVar2 = puVar7;
    func_0x000107c61434();
    puVar11 = puVar7;
    puVar12 = puVar8;
  }
  func_0x000103bfbec8();
  puVar3 = puVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(puVar3 + _DAT_112ff7008);
  *puVar1 = puVar6;
  puVar1[1] = puVar5;
  puVar1 = (undefined8 *)(puVar3 + _DAT_112ff7010);
  *puVar1 = puVar12;
  puVar1[1] = puVar11;
  puVar11 = PTR_s_init_1125d9248;
  puStack_70 = puVar3;
  puStack_68 = puVar2;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  ppuVar4 = &puStack_70;
  func_0x000107c61154(ppuVar4,puVar11);
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(puVar10);
  return ppuVar4;
}



/* Entry: 103bfbb0c; end: 103bfbbcb; +[SCAdAutofillNameResolver resolvedNameComponentsWithPreferredFirstName:preferredLastName:displayName:] */

void FUN_103bfbb0c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  FUN_103bfbc38(param_3,uVar2,param_4,uVar1,param_5,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bfbbcc; end: 103bfbc07; -[SCAdAutofillNameResolver init] */

void FUN_103bfbbcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103bfbea8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfbc08; end: 103bfbc37;  */

void FUN_103bfbc08(void)

{
  FUN_103bfbea8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bfbc38; end: 103bfbea7;  */

/* WARNING: Removing unreachable block (ram,0x000103bfbcd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_103bfbc38(undefined *param_1,undefined *param_2,undefined1 *param_3,undefined *param_4,
             undefined *param_5,undefined *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar2 = (undefined *)0x0;
  puStack_98 = param_1;
  puStack_90 = param_3;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_6 == (undefined *)0x0) {
    puVar8 = (undefined1 *)0x0;
    puVar7 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    puStack_a0 = puVar2;
    FUN_103f20150(0);
    func_0x000107c61434(param_6);
    puVar11 = param_5;
    puVar10 = param_6;
    FUN_103f1fd58();
    func_0x000107c61434(puVar10);
    puVar2 = puVar11;
    puVar5 = param_6;
    func_0x000107c5fbb4(puVar11,puVar10,param_5,param_6);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c6142c(param_6);
      puVar2 = puVar10;
      func_0x000107c6142c();
      puVar8 = (undefined1 *)0x0;
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar11;
      func_0x000107c5fb5c(puVar11,puVar10);
      func_0x000107c6142c(puVar10);
      puVar6 = param_6;
      func_0x0001011a7878(puVar2,param_5,param_6);
      puStack_a8 = puVar2;
      func_0x000107c6142c(param_6);
      puVar7 = puStack_a8;
      puVar2 = param_5;
      func_0x000107c5fb2c(puStack_a8,param_5,puVar6,puVar5);
      func_0x000107c6142c(puVar5);
      puStack_88 = puVar7;
      puStack_80 = puVar2;
      func_0x000107c5eb68(puVar12);
      func_0x000100e8b654();
      puVar8 = puVar12;
      puVar7 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar12,PTR___sSSN_11034da80,puVar5);
      (**(code **)(lVar9 + 8))(puVar12,puStack_a0);
      func_0x000107c6142c();
    }
  }
  puVar5 = param_2;
  puVar6 = puStack_98;
  if (param_2 == (undefined *)0x0) {
    puVar2 = puVar10;
    func_0x000107c61434();
    puVar5 = puVar10;
    puVar6 = puVar11;
  }
  puVar11 = param_4;
  puVar12 = puStack_90;
  if (param_4 == (undefined *)0x0) {
    puVar2 = puVar7;
    func_0x000107c61434();
    puVar11 = puVar7;
    puVar12 = puVar8;
  }
  func_0x000103bfbec8();
  puVar3 = puVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(puVar3 + _DAT_112ff7008);
  *puVar1 = puVar6;
  puVar1[1] = puVar5;
  puVar1 = (undefined8 *)(puVar3 + _DAT_112ff7010);
  *puVar1 = puVar12;
  puVar1[1] = puVar11;
  puVar11 = PTR_s_init_1125d9248;
  puStack_70 = puVar3;
  puStack_68 = puVar2;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  ppuVar4 = &puStack_70;
  func_0x000107c61154(ppuVar4,puVar11);
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(puVar10);
  return ppuVar4;
}



/* Entry: 103bfbea8; end: 103bfbee7;  */

void FUN_103bfbea8(void)

{
  func_0x000107c61168(&PTR_PTR_112945000);
  return;
}



/* Entry: 103bfbee8; end: 103bfbeeb;  */

undefined8 FUN_103bfbee8(ulong param_1)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_1 < 0x25) {
    return *(undefined8 *)(&UNK_10dc64930 + param_1 * 8);
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_11079acf8,&uStack_18,&UNK_11079acf8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfbfac);
  (*pcVar1)();
}



/* Entry: 103bfbeec; end: 103bfbef3; +[SCAdClickTapSourceHelper clickTapSourceForTapAttachmentSource:] */

undefined8 FUN_103bfbeec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_3 < 0x25) {
    return *(undefined8 *)(&UNK_10dc64930 + param_3 * 8);
  }
  uStack_18 = param_3;
  func_0x000107c60614(&UNK_11079acf8,&uStack_18,&UNK_11079acf8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfbfac);
  (*pcVar1)();
}



/* Entry: 103bfbef4; end: 103bfbf2f; -[SCAdClickTapSourceHelper init] */

void FUN_103bfbef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfbf30; end: 103bfbfcb;  */

void FUN_103bfbf30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bfbfcc; end: 103bfbfe7; +[SCAdTapAttachmentSourceHelper isChatFeedAttachmentSource:] */

uint FUN_103bfbfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103bfc058(param_3);
  return (uint)param_3 & 1;
}



/* Entry: 103bfbfe8; end: 103bfc023; -[SCAdTapAttachmentSourceHelper init] */

void FUN_103bfbfe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfc024; end: 103bfc057;  */

void FUN_103bfc024(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bfc058; end: 103bfc077;  */

uint FUN_103bfc058(ulong param_1)

{
  return (uint)((uint)param_1 < 0x21) & (uint)(0x1c4008c00 >> (param_1 & 0x3f));
}



/* Entry: 103bfc078; end: 103bfc097;  */

void FUN_103bfc078(void)

{
  func_0x000107c61168(&PTR_PTR_112945168);
  return;
}



/* Entry: 103bfc098; end: 103bfc0a7;  */

long FUN_103bfc098(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 - 1U < 0xb) {
    lVar1 = (ulong)(param_1 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 103bfc0a8; end: 103bfc593;  */

undefined * FUN_103bfc0a8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar15 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar4;
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103bfc2cc);
          (*pcVar6)();
        }
        uVar7 = *(ulong *)(param_1 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
        uVar12 = param_2;
      }
      else {
        uVar7 = uVar16;
        uVar12 = param_1;
        func_0x0001030b6a5c();
      }
      uVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103bfc2c8);
        (*pcVar6)();
      }
      uVar14 = uVar7;
      func_0x000107c433c4();
      func_0x000107c61180();
      uVar8 = uVar14;
      func_0x000107c5faec();
      uVar11 = uVar12;
      func_0x000107c61170(uVar14);
      uVar14 = uVar7;
      func_0x000107c433e0();
      func_0x000107c61180();
      uVar9 = uVar14;
      func_0x000107c5faec();
      func_0x000107c61170(uVar14);
      puVar10 = puVar4;
      func_0x000107c61558();
      uVar14 = uVar8;
      param_2 = uVar12;
      func_0x000100029284();
      uVar13 = (ulong)~(uint)param_2 & 1;
      lVar2 = *(long *)(puVar4 + 0x10) + uVar13;
      if (SCARRY8(*(long *)(puVar4 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103bfc2d0);
        (*pcVar6)();
      }
      if (*(long *)(puVar4 + 0x18) < lVar2) {
        func_0x0001001833c8(lVar2,puVar10);
        uVar14 = uVar8;
        uVar13 = uVar12;
        func_0x000100029284();
        if (((uint)param_2 & 1) != ((uint)uVar13 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103bfc328);
          (*pcVar6)();
        }
joined_r0x000103bfc2bc:
        uVar5 = param_2 & 1;
        param_2 = uVar13;
        if (uVar5 != 0) goto LAB_103bfc100;
LAB_103bfc24c:
        *(ulong *)(puVar4 + (uVar14 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar4 + (uVar14 >> 6) * 8 + 0x40) | 1L << (uVar14 & 0x3f);
        puVar3 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar14 * 0x10);
        *puVar3 = uVar8;
        puVar3[1] = uVar12;
        puVar3 = (ulong *)(*(long *)(puVar4 + 0x38) + uVar14 * 0x10);
        *puVar3 = uVar9;
        puVar3[1] = uVar11;
        func_0x000107c61170(uVar7);
        if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103bfc2d4);
          (*pcVar6)();
        }
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        param_2 = uVar13;
      }
      else {
        uVar13 = param_2;
        if (((ulong)puVar10 & 1) == 0) {
          func_0x000100184498();
          goto joined_r0x000103bfc2bc;
        }
        if ((param_2 & 1) == 0) goto LAB_103bfc24c;
LAB_103bfc100:
        puVar3 = (ulong *)(*(long *)(puVar4 + 0x38) + uVar14 * 0x10);
        uVar14 = puVar3[1];
        *puVar3 = uVar9;
        puVar3[1] = uVar11;
        func_0x000107c6142c(uVar12);
        func_0x000107c61170(uVar7);
        func_0x000107c6142c(uVar14);
      }
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar15);
  }
  return puVar4;
}



/* Entry: 103bfc594; end: 103bfc5cb;  */

void FUN_103bfc594(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103bfc5cc; end: 103bfc60f;  */

void FUN_103bfc5cc(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103bfc610; end: 103bfc613;  */

void FUN_103bfc610(undefined4 *param_1)

{
  undefined4 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103bfc614; end: 103bfc68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bfc614(void)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*(long *)(unaff_x20 + _DAT_1130913c0) == 0) {
    uStack_28 = 0;
  }
  else {
    puStack_30 = &uStack_28;
    func_0x0001047ec630(FUN_103bfc690,auStack_40,0x103bfc6a0,0,FUN_103bfc8e4,auStack_60);
  }
  return uStack_28;
}



/* Entry: 103bfc690; end: 103bfc6a3;  */

void FUN_103bfc690(void)

{
  long unaff_x20;
  
  **(undefined8 **)(unaff_x20 + 0x10) = 3;
  return;
}



/* Entry: 103bfc6a4; end: 103bfc8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfc6a4(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long in_x3;
  undefined8 *in_x4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_70 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(in_x3 + _DAT_113091338) != 0) {
    puVar2 = (undefined8 *)(*(long *)(in_x3 + _DAT_113091338) + _DAT_113090a70);
    lVar6 = puVar2[1];
    if (lVar6 != 0) {
      uVar7 = *puVar2;
      func_0x000107c61434(lVar6);
      func_0x000107c5edd0(lVar3,uVar7,lVar6);
      func_0x000107c6142c(lVar6);
      lVar6 = lVar3;
      (**(code **)(lVar8 + 0x30))(lVar3,1,lVar1);
      if ((int)lVar6 == 1) {
        func_0x0001000293e4(lVar3);
      }
      else {
        lVar6 = lVar5;
        (**(code **)(lVar8 + 0x20))(lVar5,lVar3,lVar1);
        func_0x000107c5edc4();
        uStack_70 = 0x7463656c6c6f632f;
        uStack_68 = 0xed00002f736e6f69;
        lStack_60 = lVar6;
        puStack_58 = (undefined *)lVar3;
        func_0x000100e8b654();
        puVar2 = &uStack_70;
        puVar4 = PTR___sSSN_11034da80;
        func_0x000107c6022c(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar6,lVar6);
        func_0x000107c6142c();
        if (((ulong)puVar2 & 1) == 0) {
          func_0x000107c5edc4();
          uStack_70 = 0x746375646f72702f;
          uStack_68 = 0xea00000000002f73;
          puVar2 = &uStack_70;
          lStack_60 = lVar3;
          puStack_58 = puVar4;
          func_0x000107c6022c(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar6,lVar6);
          func_0x000107c6142c(puVar4);
          (**(code **)(lVar8 + 8))(lVar5,lVar1);
          if (((ulong)puVar2 & 1) == 0) {
            uVar7 = 1;
          }
          else {
            uVar7 = 4;
          }
        }
        else {
          (**(code **)(lVar8 + 8))(lVar5,lVar1);
          uVar7 = 2;
        }
        *in_x4 = uVar7;
      }
    }
  }
  return;
}



/* Entry: 103bfc8e4; end: 103bfc8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfc8e4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_70 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(lVar6 + _DAT_113091338);
  if (lVar6 != 0) {
    puVar3 = (undefined8 *)(lVar6 + _DAT_113090a70);
    lVar6 = puVar3[1];
    if (lVar6 != 0) {
      uVar8 = *puVar3;
      func_0x000107c61434(lVar6);
      func_0x000107c5edd0(lVar4,uVar8,lVar6);
      func_0x000107c6142c(lVar6);
      lVar6 = lVar4;
      (**(code **)(lVar9 + 0x30))(lVar4,1,lVar2);
      if ((int)lVar6 == 1) {
        func_0x0001000293e4(lVar4);
      }
      else {
        lVar6 = lVar7;
        (**(code **)(lVar9 + 0x20))(lVar7,lVar4,lVar2);
        func_0x000107c5edc4();
        uStack_70 = 0x7463656c6c6f632f;
        uStack_68 = 0xed00002f736e6f69;
        lStack_60 = lVar6;
        puStack_58 = (undefined *)lVar4;
        func_0x000100e8b654();
        puVar3 = &uStack_70;
        puVar5 = PTR___sSSN_11034da80;
        func_0x000107c6022c(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar6,lVar6);
        func_0x000107c6142c();
        if (((ulong)puVar3 & 1) == 0) {
          func_0x000107c5edc4();
          uStack_70 = 0x746375646f72702f;
          uStack_68 = 0xea00000000002f73;
          puVar3 = &uStack_70;
          lStack_60 = lVar4;
          puStack_58 = puVar5;
          func_0x000107c6022c(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar6,lVar6);
          func_0x000107c6142c(puVar5);
          (**(code **)(lVar9 + 8))(lVar7,lVar2);
          if (((ulong)puVar3 & 1) == 0) {
            uVar8 = 1;
          }
          else {
            uVar8 = 4;
          }
        }
        else {
          (**(code **)(lVar9 + 8))(lVar7,lVar2);
          uVar8 = 2;
        }
        *puVar1 = uVar8;
      }
    }
  }
  return;
}



/* Entry: 103bfc8f8; end: 103bfc9bf;  */

undefined1 FUN_103bfc8f8(undefined8 param_1,long param_2)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_11;
  
  uStack_28 = 0xd000000000000028;
  uStack_20 = 0x800000010f1adfb0;
  uStack_18 = 0;
  (**(code **)(param_2 + 8))
            (&uStack_11,&uStack_28,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  return uStack_11;
}



/* Entry: 103bfc9c0; end: 103bfc9cf;  */

undefined1  [16] FUN_103bfc9c0(void)

{
  return ZEXT816(0x1106e7cf0);
}



/* Entry: 103bfc9d0; end: 103bfca8b;  */

void FUN_103bfc9d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  func_0x000100b91d00();
  lVar1 = *(long *)(unaff_x20 + *(int *)(lVar1 + 0x4c));
  if (((lVar1 == 0) || (param_2 < 0)) || (*(long *)(lVar1 + 0x10) <= param_2)) {
    lVar2 = 0;
    func_0x0001046d90b0();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    lVar2 = 0;
    func_0x0001046d90b0();
    lVar4 = *(long *)(lVar2 + -8);
    func_0x000101541068(lVar1 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar4 + 0x48) * param_2,param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000103bfca88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar2);
  return;
}



/* Entry: 103bfca8c; end: 103bfcafb;  */

undefined8 FUN_103bfca8c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000100b91d00();
  lVar1 = *(long *)(unaff_x20 + *(int *)(lVar1 + 0x4c));
  if ((lVar1 == 0) || (lVar4 = *(long *)(lVar1 + 0x10), lVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = 0;
    func_0x0001046d90b0();
    uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
    uVar3 = *(undefined8 *)
             (lVar1 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)) +
              *(long *)(*(long *)(lVar2 + -8) + 0x48) * (lVar4 + -1) + (long)*(int *)(lVar2 + 0x70)
             + 0x20);
  }
  return uVar3;
}



/* Entry: 103bfcafc; end: 103bfcb2f; -[SCAdResponse servedEndCardType] */

undefined8 FUN_103bfcafc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bfcb30();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103bfcb30; end: 103bfcc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bfcb30(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  
  uVar6 = *(ulong *)(unaff_x20 + _DAT_113815208);
  if (uVar6 == 0) {
    return 0;
  }
  uVar8 = uVar6 & 0xffffffffffffff8;
  if (uVar6 >> 0x3e == 0) {
    uVar2 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar2 = uVar6;
    if (-1 < (long)uVar6) {
      uVar2 = uVar8;
    }
    uVar3 = uVar2;
    func_0x000107c60480();
    if ((long)uVar3 < 1) {
      return 0;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = uVar2 - 1;
  if (!SBORROW8(uVar2,1)) {
    if ((uVar6 & 0xc000000000000001) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfcc64);
        (*pcVar1)();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfcc68);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(uVar6 + uVar3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000100e471e4(uVar3,uVar6);
    }
    lVar4 = *(long *)(uVar3 + _DAT_11308f298);
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar5 = *(long *)(lVar4 + _DAT_11308f538);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    lVar4 = *(long *)(lVar5 + _DAT_11308f400);
    func_0x000107c61174();
    func_0x000107c61170(lVar5);
    uVar7 = *(undefined8 *)(lVar4 + _DAT_11308f6c8);
    func_0x000107c61170(lVar4);
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfcc54);
  (*pcVar1)();
}



/* Entry: 103bfcc68; end: 103bfccb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103bfcc68(void)

{
  long lVar1;
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_113815298) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_113815298) + _DAT_11308f060), lVar1 != 0)) {
    return *(int *)(lVar1 + _DAT_11308eee8) == 1;
  }
  return false;
}



/* Entry: 103bfccb4; end: 103bfd263;  */

void FUN_103bfccb4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [544];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = 0x112db3cd0;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112db3e90;
  lStack_550 = (long)&uStack_560 - extraout_x8;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = ((long)&uStack_560 - extraout_x8) - extraout_x8_00;
  lVar2 = 0x112db3a00;
  lStack_558 = lVar6;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar6 - extraout_x12;
  lVar2 = 0x112dcbf08;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_548 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_00;
  lVar2 = 0;
  func_0x0001046d90b0();
  lStack_540 = (long)*(int *)(lVar2 + 0x28);
  FUN_103bfd264(unaff_x20 + lStack_540,lVar9,0x112db3a00,&UNK_10d95dff0);
  lVar3 = 0;
  func_0x00010477ea9c();
  pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 0x30);
  lVar2 = lVar9;
  (*pcVar13)(lVar9,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x000103bfd324(lVar9,0x112db3a00,&UNK_10d95dff0);
  }
  else {
    FUN_103bfd264(lVar9 + *(int *)(lVar3 + 0x14),lVar7,0x112dcbf08,&UNK_10d98e580);
    func_0x000103bfd2ac(lVar9,&SUB_10477ea9c);
    lVar9 = 0;
    func_0x000104760f24();
    lVar2 = lVar7;
    (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar7,1,lVar9);
    if ((int)lVar2 == 1) {
      func_0x000103bfd324(lVar7,0x112dcbf08,&UNK_10d98e580);
    }
    else {
      func_0x000107c610b4(auStack_2c8,lVar7 + *(int *)(lVar9 + 0x1c),0x260);
      FUN_103bfd264(auStack_2c8,auStack_528,0x112db3ce8,&UNK_10d98ff60);
      func_0x000103bfd2ac(lVar7,&SUB_104760f24);
      uVar11 = uStack_78;
      uVar8 = uStack_80;
      uVar12 = uStack_88;
      uVar10 = uStack_90;
      uVar4 = uStack_98;
      lVar2 = lStack_a0;
      uStack_560 = uStack_a8;
      iVar1 = (int)auStack_2c8;
      func_0x0001015538ec();
      if (iVar1 != 1) {
        func_0x000103bfd2e8(uStack_560,lVar2,uVar4,uVar10,uVar12,uVar8,uVar11);
        func_0x000103bfd324(auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        if (lVar2 != 0) goto LAB_103bfd110;
      }
    }
  }
  FUN_103bfd264(unaff_x20 + lStack_540,lVar6,0x112db3a00,&UNK_10d95dff0);
  lVar7 = lVar6;
  (*pcVar13)(lVar6,1,lVar3);
  lVar2 = lStack_548;
  if ((int)lVar7 == 1) {
    uVar4 = 0x112db3a00;
    puVar5 = &UNK_10d95dff0;
    lVar2 = lVar6;
LAB_103bfd0f0:
    func_0x000103bfd324(lVar2,uVar4,puVar5);
  }
  else {
    FUN_103bfd264(lVar6 + *(int *)(lVar3 + 0x14),lStack_548,0x112dcbf08,&UNK_10d98e580);
    func_0x000103bfd2ac(lVar6,&SUB_10477ea9c);
    lVar7 = 0;
    func_0x000104760f24();
    lVar6 = lVar2;
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar2,1,lVar7);
    lVar3 = lStack_550;
    if ((int)lVar6 == 1) {
      uVar4 = 0x112dcbf08;
      puVar5 = &UNK_10d98e580;
      goto LAB_103bfd0f0;
    }
    FUN_103bfd264(lVar2 + *(int *)(lVar7 + 0x20),lStack_550,0x112db3cd0,&UNK_10d95e230);
    func_0x000103bfd2ac(lVar2,&SUB_104760f24);
    lVar7 = 0;
    func_0x00010471853c();
    lVar6 = lVar3;
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar3,1,lVar7);
    lVar2 = lStack_558;
    if ((int)lVar6 == 1) {
      uVar4 = 0x112db3cd0;
      puVar5 = &UNK_10d95e230;
      lVar2 = lVar3;
      goto LAB_103bfd0f0;
    }
    FUN_103bfd264(lVar3 + *(int *)(lVar7 + 0x14),lStack_558,0x112db3e90,&UNK_10d95e3e0);
    func_0x000103bfd2ac(lVar3,&SUB_10471853c);
    lVar6 = 0;
    func_0x00010472f4dc();
    lVar3 = lVar2;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar2,1,lVar6);
    if ((int)lVar3 == 1) {
      uVar4 = 0x112db3e90;
      puVar5 = &UNK_10d95e3e0;
      goto LAB_103bfd0f0;
    }
    func_0x000107c610b4(auStack_2c8,lVar2 + *(int *)(lVar6 + 0x14),0x260);
    FUN_103bfd264(auStack_2c8,auStack_528,0x112db3ce8,&UNK_10d98ff60);
    func_0x000103bfd2ac(lVar2,&SUB_10472f4dc);
    iVar1 = (int)auStack_2c8;
    func_0x0001015538ec();
    if (iVar1 != 1) {
      func_0x000103bfd2e8(uStack_a8,lStack_a0,uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
      func_0x000103bfd324(auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
      uStack_560 = uStack_a8;
      uVar8 = uStack_80;
      uVar4 = uStack_98;
      uVar10 = uStack_90;
      uVar11 = uStack_78;
      uVar12 = uStack_88;
      lVar2 = lStack_a0;
      goto LAB_103bfd110;
    }
  }
  uStack_560 = 0;
  uVar8 = 0;
  uVar4 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  lVar2 = 0;
LAB_103bfd110:
  *param_1 = uStack_560;
  param_1[1] = lVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar10;
  param_1[4] = uVar12;
  param_1[5] = uVar8;
  param_1[6] = uVar11;
  return;
}



/* Entry: 103bfd264; end: 103bfd363;  */

undefined8 FUN_103bfd264(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103bfd364; end: 103bfd6b3;  */

undefined1  [16] FUN_103bfd364(void)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_530 [8];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [488];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_530 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar10 - extraout_x8_00;
  lVar4 = 0x112dcbf08;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar11 - extraout_x8_01;
  lVar4 = 0;
  func_0x0001046d90b0();
  puVar1 = (ulong *)(unaff_x20 + *(int *)(lVar4 + 0x5c));
  uVar9 = puVar1[1];
  if (uVar9 == 0) {
LAB_103bfd468:
    FUN_103bfd264(unaff_x20 + *(int *)(lVar4 + 0x28),lVar11,0x112db3a00,&UNK_10d95dff0);
    lVar5 = 0;
    func_0x00010477ea9c();
    lVar4 = lVar11;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar11,1,lVar5);
    if ((int)lVar4 == 1) {
      func_0x000103bfd324(lVar11,0x112db3a00,&UNK_10d95dff0);
    }
    else {
      FUN_103bfd264(lVar11 + *(int *)(lVar5 + 0x14),lVar12,0x112dcbf08,&UNK_10d98e580);
      func_0x000103bfd2ac(lVar11,&SUB_10477ea9c);
      lVar11 = 0;
      func_0x000104760f24();
      lVar4 = lVar12;
      (**(code **)(*(long *)(lVar11 + -8) + 0x30))(lVar12,1,lVar11);
      if ((int)lVar4 == 1) {
        func_0x000103bfd324(lVar12,0x112dcbf08,&UNK_10d98e580);
      }
      else {
        func_0x000107c610b4(auStack_2c8,lVar12 + *(int *)(lVar11 + 0x1c),0x260);
        FUN_103bfd264(auStack_2c8,auStack_528,0x112db3ce8,&UNK_10d98ff60);
        func_0x000103bfd2ac(lVar12,&SUB_104760f24);
        iVar2 = (int)auStack_2c8;
        func_0x0001015538ec();
        if (iVar2 != 1) {
          func_0x000101895c08(uStack_e0,uStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8);
          func_0x000103bfd324(auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          if (uStack_d8 != 0) {
            uVar9 = uStack_d0 & 0xffffffffffff;
            if ((uStack_c8 & 0x2000000000000000) != 0) {
              uVar9 = uStack_c8 >> 0x38 & 0xf;
            }
            func_0x000107c6142c(uStack_b8);
            uVar8 = uStack_d8;
            if (uVar9 != 0) {
              uVar8 = uStack_c8;
              uStack_e0 = uStack_d0;
              uStack_c8 = uStack_d8;
            }
            func_0x000107c6142c(uStack_c8);
            func_0x000107c5eb88(puVar10);
            func_0x000100e8b654();
            puVar6 = puVar10;
            puVar7 = PTR___sSSN_11034da80;
            func_0x000107c601f0(puVar10,PTR___sSSN_11034da80,uStack_c8);
            (**(code **)(lVar13 + 8))(puVar10,lVar3);
            func_0x000107c6142c(puVar7);
            uVar9 = (ulong)puVar6 & 0xffffffffffff;
            if (((ulong)puVar7 & 0x2000000000000000) != 0) {
              uVar9 = (ulong)puVar7 >> 0x38 & 0xf;
            }
            if (uVar9 != 0) goto LAB_103bfd694;
            func_0x000107c6142c(uVar8);
          }
        }
      }
    }
  }
  else {
    uVar8 = *puVar1 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar8 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) goto LAB_103bfd468;
  }
  uStack_e0 = 0;
  uVar8 = 0;
LAB_103bfd694:
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = uStack_e0;
  return auVar14;
}



/* Entry: 103bfd6b4; end: 103bfd96f;  */

undefined1  [16] FUN_103bfd6b4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe700000000000000;
  uVar2 = 0x565f4545524854;
  switch(param_1) {
  case 0:
    goto code_r0x000103bfd834;
  case 1:
    uVar3 = 0xeb000000004c4c41;
    uVar2 = 0x54534e495f505041;
code_r0x000103bfd834:
    auVar14._8_8_ = uVar3;
    auVar14._0_8_ = uVar2;
    return auVar14;
  case 2:
  case 4:
  case 8:
  case 0x17:
    auVar4._8_8_ = 0xe700000000000000;
    auVar4._0_8_ = 0x6e776f6e6b6e75;
    return auVar4;
  case 3:
    auVar9._8_8_ = 0xee00454741504245;
    auVar9._0_8_ = 0x575f45544f4d4552;
    return auVar9;
  case 5:
    auVar7._8_8_ = 0xe500000000000000;
    auVar7._0_8_ = 0x59524f5453;
    return auVar7;
  case 6:
    auVar11._8_8_ = 0x800000010f1ae050;
    auVar11._0_8_ = 0xd000000000000014;
    return auVar11;
  case 7:
    auVar5._8_8_ = 0xe700000000000000;
    auVar5._0_8_ = 0x4c4c49465f4f4e;
    return auVar5;
  case 9:
    auVar10._8_8_ = 0xea0000000000534e;
    auVar10._0_8_ = 0x454c5f4f545f4441;
    return auVar10;
  case 10:
    auVar18._8_8_ = 0xea00000000004e4f;
    auVar18._0_8_ = 0x495443454c4c4f43;
    return auVar18;
  case 0xb:
    auVar6._8_8_ = 0xed00004c4553554f;
    auVar6._0_8_ = 0x5241435f534e454c;
    return auVar6;
  case 0xc:
    auVar12._8_8_ = 0xef4c4553554f5241;
    auVar12._0_8_ = 0x435f5245544c4946;
    return auVar12;
  case 0xd:
    auVar20._8_8_ = 0xea00000000004c4c;
    auVar20._0_8_ = 0x41435f4f545f4441;
    return auVar20;
  case 0xe:
    auVar8._8_8_ = 0xed00004547415353;
    auVar8._0_8_ = 0x454d5f4f545f4441;
    return auVar8;
  case 0xf:
    auVar22._8_8_ = 0xeb00000000454341;
    auVar22._0_8_ = 0x4c505f4f545f4441;
    return auVar22;
  case 0x10:
    auVar13._8_8_ = 0xef4e4f4954415245;
    auVar13._0_8_ = 0x4e45475f4441454c;
    return auVar13;
  case 0x11:
    auVar17._8_8_ = 0xe800000000000000;
    auVar17._0_8_ = 0x45534143574f4853;
    return auVar17;
  case 0x12:
    auVar21._8_8_ = 0x800000010f1ae030;
    auVar21._0_8_ = 0xd000000000000018;
    return auVar21;
  case 0x13:
    auVar15._8_8_ = 0xe600000000000000;
    auVar15._0_8_ = 0x594556525553;
    return auVar15;
  case 0x14:
    auVar16._8_8_ = 0xe800000000000000;
    auVar16._0_8_ = 0x5245444e494d4552;
    return auVar16;
  case 0x15:
    auVar19._8_8_ = 0xec0000005044505f;
    auVar19._0_8_ = 0x454352454d4d4f43;
    return auVar19;
  case 0x16:
    auVar23._8_8_ = 0xed000059524f5453;
    auVar23._0_8_ = 0x5f44455845444e49;
    return auVar23;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_110798820,&uStack_18,&UNK_110798820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfd970);
    (*pcVar1)();
  }
}



/* Entry: 103bfd970; end: 103bfd973;  */

undefined8 FUN_103bfd970(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0x17;
  }
  uVar2 = 0;
  if (((param_1 == 0x565f4545524854) && (param_2 == -0x1900000000000000)) ||
     (func_0x000107c605b8(0x565f4545524854,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0))
  {
    uVar1 = 0;
  }
  else {
    uVar2 = 0x54534e495f505041;
    if (((param_1 == 0x54534e495f505041) && (param_2 == -0x14ffffffffb3b3bf)) ||
       (func_0x000107c605b8(0x54534e495f505041,0xeb000000004c4c41,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == 0x575f45544f4d4552) && (param_2 == -0x11ffbab8beafbdbb)) ||
         (func_0x000107c605b8(0x575f45544f4d4552,0xee00454741504245,param_1,param_2,0),
         (uVar2 & 1) != 0)) {
        uVar1 = 3;
      }
      else {
        uVar2 = 0x454352454d4d4f43;
        if (((param_1 == 0x454352454d4d4f43) && (param_2 == -0x13ffffffafbbafa1)) ||
           (func_0x000107c605b8(0x454352454d4d4f43,0xec0000005044505f,param_1,param_2,0),
           (uVar2 & 1) != 0)) {
          uVar1 = 0x15;
        }
        else {
          if ((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffef0e51fb0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000014,0x800000010f1ae050,param_1,param_2,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0x59524f5453;
              if (((param_1 == 0x59524f5453) && (param_2 == -0x1b00000000000000)) ||
                 (func_0x000107c605b8(0x59524f5453,0xe500000000000000,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 5;
              }
              uVar2 = 0;
              if (((param_1 == 0x4c4c49465f4f4e) && (param_2 == -0x1900000000000000)) ||
                 (func_0x000107c605b8(0x4c4c49465f4f4e,0xe700000000000000,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 7;
              }
              uVar2 = 0x454c5f4f545f4441;
              if (((param_1 == 0x454c5f4f545f4441) && (param_2 == -0x15ffffffffffacb2)) ||
                 (func_0x000107c605b8(0x454c5f4f545f4441,0xea0000000000534e,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 9;
              }
              uVar2 = 0x495443454c4c4f43;
              if (((param_1 == 0x495443454c4c4f43) && (param_2 == -0x15ffffffffffb1b1)) ||
                 (func_0x000107c605b8(0x495443454c4c4f43,0xea00000000004e4f,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 10;
              }
              uVar2 = 0;
              if (((param_1 == 0x5241435f534e454c) && (param_2 == -0x12ffffb3baacaab1)) ||
                 (func_0x000107c605b8(0x5241435f534e454c,0xed00004c4553554f,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 0xb;
              }
              uVar2 = 0;
              if (((param_1 != 0x435f5245544c4946) || (param_2 != -0x10b3baacaab0adbf)) &&
                 (func_0x000107c605b8(0x435f5245544c4946,0xef4c4553554f5241,param_1,param_2,0),
                 (uVar2 & 1) == 0)) {
                uVar2 = 0x41435f4f545f4441;
                if (((param_1 == 0x41435f4f545f4441) && (param_2 == -0x15ffffffffffb3b4)) ||
                   (func_0x000107c605b8(0x41435f4f545f4441,0xea00000000004c4c,param_1,param_2,0),
                   (uVar2 & 1) != 0)) {
                  return 0xd;
                }
                uVar2 = 0x454d5f4f545f4441;
                if (((param_1 == 0x454d5f4f545f4441) && (param_2 == -0x12ffffbab8beacad)) ||
                   (func_0x000107c605b8(0x454d5f4f545f4441,0xed00004547415353,param_1,param_2,0),
                   (uVar2 & 1) != 0)) {
                  return 0xe;
                }
                uVar2 = 0x4c505f4f545f4441;
                if (((param_1 != 0x4c505f4f545f4441) || (param_2 != -0x14ffffffffbabcbf)) &&
                   (func_0x000107c605b8(0x4c505f4f545f4441,0xeb00000000454341,param_1,param_2,0),
                   (uVar2 & 1) == 0)) {
                  uVar2 = 0;
                  if (((param_1 == 0x4e45475f4441454c) && (param_2 == -0x10b1b0b6abbeadbb)) ||
                     (func_0x000107c605b8(0x4e45475f4441454c,0xef4e4f4954415245,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    return 0x10;
                  }
                  uVar2 = 0x45534143574f4853;
                  if (((param_1 == 0x45534143574f4853) && (param_2 == -0x1800000000000000)) ||
                     (func_0x000107c605b8(0x45534143574f4853,0xe800000000000000,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    return 0x11;
                  }
                  uVar2 = 0;
                  if (((param_1 != -0x2fffffffffffffe8) || (param_2 != -0x7ffffffef0e51fd0)) &&
                     (func_0x000107c605b8(0xd000000000000018,0x800000010f1ae030,param_1,param_2,0),
                     (uVar2 & 1) == 0)) {
                    uVar2 = 0x594556525553;
                    if (((param_1 != 0x594556525553) || (param_2 != -0x1a00000000000000)) &&
                       (func_0x000107c605b8(0x594556525553,0xe600000000000000,param_1,param_2,0),
                       (uVar2 & 1) == 0)) {
                      uVar2 = 0;
                      if (((param_1 != 0x5245444e494d4552) || (param_2 != -0x1800000000000000)) &&
                         (func_0x000107c605b8(0x5245444e494d4552,0xe800000000000000,param_1,param_2,
                                              0), (uVar2 & 1) == 0)) {
                        uVar2 = 0x5f44455845444e49;
                        if ((param_1 == 0x5f44455845444e49) && (param_2 == -0x12ffffa6adb0abad)) {
                          return 0x16;
                        }
                        func_0x000107c605b8(0x5f44455845444e49,0xed000059524f5453,param_1,param_2,0)
                        ;
                        if ((uVar2 & 1) != 0) {
                          return 0x16;
                        }
                        return 0x17;
                      }
                      return 0x14;
                    }
                    return 0x13;
                  }
                  return 0x12;
                }
                return 0xf;
              }
              return 0xc;
            }
          }
          uVar1 = 6;
        }
      }
    }
  }
  return uVar1;
}


