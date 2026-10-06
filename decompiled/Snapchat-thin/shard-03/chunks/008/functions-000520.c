/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cbd60c; end: 102cbd937; -[SCOperaScrollAffordancePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbd60c(long param_1)

{
  func_0x000100d23334(param_1 + _DAT_112f0a6d0);
  func_0x000100d23334(param_1 + _DAT_112f0a6d8);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0a6e8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0a6f8));
  func_0x000102cbd8f8(param_1 + _DAT_1134e5280,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_1134e5290));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1134e52a0));
  return;
}



/* Entry: 102cbd938; end: 102cbd93f;  */

void FUN_102cbd938(void)

{
  if (lRam00000001134e52a8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e72754c);
  return;
}



/* Entry: 102cbd940; end: 102cbd977;  */

void FUN_102cbd940(undefined8 param_1)

{
  if (lRam00000001134e52a8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72754c);
  return;
}



/* Entry: 102cbd978; end: 102cbda2b;  */

void FUN_102cbd978(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_88 = &UNK_10db3d640;
  puStack_80 = &UNK_10db3d640;
  puStack_78 = &UNK_10db3d658;
  puStack_70 = &UNK_10db3d670;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_60 = &UNK_10db3d688;
  lVar2 = 0x13f;
  puStack_68 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar2 + -8) + 0x40;
    puStack_48 = &UNK_10db3d688;
    puStack_38 = &UNK_10db3d688;
    puStack_50 = puVar1;
    puStack_40 = puVar1;
    func_0x000107c61630(param_1,0x100,0xb,&puStack_88,param_1 + 0x50);
  }
  return;
}



/* Entry: 102cbda2c; end: 102cbdb93;  */

int FUN_102cbda2c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102cbdaa8;
        goto LAB_102cbda8c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102cbda8c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102cbdaa8:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102cbdb94; end: 102cbdbd3;  */

void FUN_102cbdb94(void)

{
  undefined *puVar1;
  
  if (puRam00000001134e52b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d6e8;
  func_0x000107c61520(&UNK_10db3d6e8,&UNK_1105be140);
  puRam00000001134e52b8 = puVar1;
  return;
}



/* Entry: 102cbdbd4; end: 102cbdcfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbdbd4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x000107c6071c();
  dVar7 = param_1 - *(double *)(unaff_x20 + _DAT_1134e5298);
  func_0x000109128f68();
  dVar7 = dVar7 / param_1;
  dVar8 = 1.0;
  if (dVar7 <= 1.0) {
    dVar8 = dVar7;
  }
  func_0x000109128f74();
  func_0x000109128f5c();
  lVar5 = *(long *)(unaff_x20 + _DAT_1134e52a0);
  if (lVar5 != 0) {
    dVar6 = (double)param_2 * 3.141592653589793 * dVar8;
    func_0x000107c61310(dVar6);
    func_0x000107c57920(dVar7 * ABS(dVar6),lVar5);
  }
  lVar5 = _DAT_1134e5290;
  if (1.0 <= dVar8) {
    uVar3 = 0;
    if (*(long *)(unaff_x20 + _DAT_1134e5290) != 0) {
      func_0x000107c498f8();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
    }
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    func_0x000107c61170(uVar3);
    lVar1 = _DAT_1134e52a0;
    lVar5 = 0;
    if (*(long *)(unaff_x20 + _DAT_1134e52a0) != 0) {
      func_0x000107c3f478(*(long *)(unaff_x20 + _DAT_1134e52a0),param_3,0,0,0);
      lVar5 = *(long *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c615e8();
    lVar1 = *(long *)(unaff_x20 + _DAT_112f0a6f0) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112f0a6f0),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbdcfc);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + _DAT_112f0a6f0) = lVar1;
    func_0x000109128f80();
    uVar4 = 0;
    if (lVar5 <= lVar1) {
      uVar4 = 3;
    }
    *(undefined1 *)(unaff_x20 + _DAT_112f0a6e0) = uVar4;
  }
  return;
}



/* Entry: 102cbdcfc; end: 102cbdd4b;  */

void FUN_102cbdcfc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cbd330();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102cbdd4c; end: 102cbdd67;  */

void FUN_102cbdd4c(long param_1,long param_2)

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



/* Entry: 102cbdd68; end: 102cbdddf; +[_TtC31SCOperaPerformancePluginsShared22SCOperaAnalyticsHelper playbackModeFrom:withParams:] */

undefined8
FUN_102cbdd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102cbeda8();
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_4);
  return uVar1;
}



/* Entry: 102cbdde0; end: 102cbde17; +[_TtC31SCOperaPerformancePluginsShared22SCOperaAnalyticsHelper playbackModeFrom:] */

undefined8 FUN_102cbdde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102cbe6dc();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102cbde18; end: 102cbdeb7; +[_TtC31SCOperaPerformancePluginsShared22SCOperaAnalyticsHelper convertToSCAMediaVariantFrom:mediaStartDisplayTs:mediaType:] */

void FUN_102cbde18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_102cbf174(0,0x112e32da8,&PTR_PTR_1126a9668);
  func_0x000107c5fc54(param_4,uVar1);
  uVar1 = param_4;
  FUN_102cbeea8(param_1);
  func_0x000107c6142c(param_4);
  uVar2 = 0;
  FUN_102cbf174(0,0x112f0a758,&PTR_PTR_1126c9af8);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102cbdeb8; end: 102cbdef3; -[_TtC31SCOperaPerformancePluginsShared22SCOperaAnalyticsHelper init] */

void FUN_102cbdeb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102cbf154();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cbdef4; end: 102cbdf23;  */

void FUN_102cbdef4(void)

{
  FUN_102cbf154();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cbdf24; end: 102cbdf53;  */

bool FUN_102cbdf24(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102cbdf54; end: 102cbe07b;  */

ulong FUN_102cbdf54(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cbe07c);
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
  FUN_102cbe07c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cbe078);
      (*pcVar1)();
    }
    FUN_102cbe0fc(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102cbe07c; end: 102cbe0fb;  */

undefined * FUN_102cbe07c(undefined *param_1,undefined *param_2)

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
    FUN_102cbe214();
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



/* Entry: 102cbe0fc; end: 102cbe213;  */

long FUN_102cbe0fc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102cbe210);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cbe214);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102cbf174(0,0x112f0a758,&PTR_PTR_1126c9af8);
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
      FUN_102cbf174(0,0x112f0a758,&PTR_PTR_1126c9af8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cbe20c);
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



/* Entry: 102cbe214; end: 102cbe27f;  */

void FUN_102cbe214(void)

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
    FUN_102cbf174(0,0x112f0a758,&PTR_PTR_1126c9af8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f0a760;
  plVar5 = (long *)&UNK_10db3d758;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102cbe280; end: 102cbe443;  */

ulong FUN_102cbe280(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbe364);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbe368);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a9668;
    func_0x000107c61168(PTR_PTR_1126a9668);
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
    puVar4 = PTR_PTR_1126a9668;
    func_0x000107c61168(PTR_PTR_1126a9668);
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
  FUN_102cbf174(0,0x112e32da8,&PTR_PTR_1126a9668);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbe444);
  (*pcVar2)();
}



/* Entry: 102cbe444; end: 102cbe6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cbe444(long param_1,ulong param_2)

{
  int iVar1;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  int iVar2;
  
  iVar1 = (int)&lStack_70;
  iVar2 = (int)&lStack_70;
  puVar10 = *(undefined8 **)(param_1 + _DAT_11307abc8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0c298;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c298);
  if (puVar10[2] == 0) {
LAB_102cbe50c:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
    func_0x000107c6142c(param_2);
LAB_102cbe51c:
    puVar8 = (undefined8 *)0x112d387f8;
    func_0x000102cbf1b4(&uStack_60,0x112d387f8,&UNK_10d902650);
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    func_0x000107c61434(puVar10);
    uVar7 = param_2;
    func_0x000100029284(ppuVar3);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      goto LAB_102cbe50c;
    }
    func_0x0001000bb420(puVar10[7] + (long)ppuVar3 * 0x20,&uStack_60);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(puVar10);
    if (lStack_48 == 0) goto LAB_102cbe51c;
    puVar8 = &uStack_60;
    func_0x000107c6147c(&lStack_70,puVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_68;
    lVar5 = lStack_70;
    if (iVar1 == 0) {
      lVar5 = 0;
      lVar6 = 0;
    }
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0c1d8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c1d8);
  if (puVar10[2] == 0) {
LAB_102cbe59c:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c61434(puVar10);
    puVar9 = puVar8;
    func_0x000100029284(ppuVar3);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      goto LAB_102cbe59c;
    }
    func_0x0001000bb420(puVar10[7] + (long)ppuVar3 * 0x20,&uStack_60);
    func_0x000107c6142c(puVar8);
    puVar8 = puVar10;
  }
  func_0x000107c6142c(puVar8);
  if (lStack_48 == 0) {
    func_0x000102cbf1b4(&uStack_60,0x112d387f8,&UNK_10d902650);
    if (lVar6 == 0) {
      lVar11 = 0;
      goto LAB_102cbe6a8;
    }
  }
  else {
    uVar4 = 0x112f0a768;
    func_0x0001000285a8(0x112f0a768,&UNK_10db3d768);
    func_0x000107c6147c(&lStack_70,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
    lVar11 = lStack_70;
    if (iVar2 == 0) {
      lVar11 = 0;
    }
    if (lVar6 == 0) {
LAB_102cbe6a8:
      func_0x000107c615e8(lVar11);
      return -1;
    }
    if (lVar11 != 0) {
      func_0x000107c615f0(lVar11);
      func_0x000107c5fadc(lVar5,lVar6);
      func_0x000107c6142c(lVar6);
      lVar6 = lVar11;
      func_0x000107c5dd58();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 == 0) {
        func_0x000107c615ec(lVar11,2);
        return -1;
      }
      func_0x000103b7a088(0);
      lVar5 = lVar6;
      func_0x000107c615f0(lVar6);
      func_0x000103b79814();
      func_0x000107c615ec(lVar11,2);
      func_0x000107c615ec(lVar6,2);
      return lVar5;
    }
  }
  func_0x000107c6142c(lVar6);
  return -1;
}



/* Entry: 102cbe6dc; end: 102cbeda7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cbe6dc(long param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar10;
  undefined8 *puVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long alStack_b0 [2];
  undefined8 *puStack_a0;
  long lStack_98;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5ede0();
  lVar14 = puVar1[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar12 - extraout_x12;
  lVar13 = 0x112d36580;
  puVar8 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_a0 = puVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = (long)puVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = uVar17 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar18 - extraout_x12_02;
  puVar11 = *(undefined8 **)(param_1 + _DAT_11307abc8);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0e198;
  lStack_98 = param_1;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e198);
  if (puVar11[2] == 0) {
LAB_102cbe89c:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    func_0x000107c6142c(puVar8);
LAB_102cbe8ac:
    puVar5 = (undefined8 *)0x112d387f8;
    func_0x000102cbf1b4(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000107c61434(puVar11);
    puVar9 = puVar8;
    func_0x000100029284(ppuVar2);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(puVar11);
      goto LAB_102cbe89c;
    }
    func_0x0001000bb420(puVar11[7] + (long)ppuVar2 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar11);
    if (lStack_68 == 0) goto LAB_102cbe8ac;
    pbVar3 = &bStack_90;
    puVar5 = &uStack_80;
    func_0x000107c6147c(pbVar3,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    if (((ulong)pbVar3 & 1) != 0) {
      return CONCAT71(uStack_8f,bStack_90);
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0e158;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e158);
  if (puVar11[2] == 0) {
LAB_102cbe928:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar11);
    puVar6 = puVar5;
    func_0x000100029284(ppuVar2);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(puVar11);
      goto LAB_102cbe928;
    }
    func_0x0001000bb420(puVar11[7] + (long)ppuVar2 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar5);
    puVar5 = puVar11;
  }
  alStack_b0[1] = lVar12;
  func_0x000107c6142c(puVar5);
  if (lStack_68 == 0) {
    puVar5 = (undefined8 *)0x112d387f8;
    func_0x000102cbf1b4(&uStack_80,0x112d387f8,&UNK_10d902650);
    uVar15 = 0;
  }
  else {
    pbVar3 = &bStack_90;
    puVar5 = &uStack_80;
    func_0x000107c6147c(pbVar3,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    uVar15 = (uint)pbVar3 & (uint)bStack_90;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e158b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e158b8);
  if (puVar11[2] == 0) {
LAB_102cbe9f4:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar11);
    puVar6 = puVar5;
    func_0x000100029284(ppuVar2);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(puVar11);
      goto LAB_102cbe9f4;
    }
    func_0x0001000bb420(puVar11[7] + (long)ppuVar2 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar5);
    puVar5 = puVar11;
  }
  func_0x000107c6142c(puVar5);
  if (lStack_68 == 0) {
    func_0x000102cbf1b4(&uStack_80,0x112d387f8,&UNK_10d902650);
    pcVar10 = *(code **)(lVar14 + 0x38);
    uVar7 = 1;
  }
  else {
    lVar12 = lVar13;
    func_0x000107c6147c(lVar13,&uStack_80,PTR___sypN_11034f1a8 + 8,puVar1,6);
    pcVar10 = *(code **)(lVar14 + 0x38);
    uVar7 = (uint)lVar12 ^ 1;
  }
  (*pcVar10)(lVar13,uVar7,1,puVar1);
  puVar5 = puVar1;
  if (uVar15 == 0) {
    func_0x000100029394(lVar13,uVar17);
    pcVar10 = *(code **)(lVar14 + 0x30);
    uVar4 = uVar17;
    (*pcVar10)(uVar17,1,puVar1);
    if ((int)uVar4 == 1) {
      puVar5 = (undefined8 *)0x112d36580;
      func_0x000102cbf1b4(uVar17,0x112d36580,&UNK_10d9016d0);
    }
    else {
      func_0x000107c5ed5c();
      (**(code **)(lVar14 + 8))(uVar17);
      if ((uVar4 & 1) != 0) {
        lVar12 = 3;
        goto LAB_102cbed6c;
      }
    }
  }
  else {
    func_0x000100029394(lVar13,lVar18);
    pcVar10 = *(code **)(lVar14 + 0x30);
    lVar12 = lVar18;
    (*pcVar10)(lVar18,1,puVar1);
    if ((int)lVar12 == 1) {
      puVar5 = (undefined8 *)0x112d36580;
      func_0x000102cbf1b4(lVar18,0x112d36580,&UNK_10d9016d0);
      lVar12 = lStack_98;
      FUN_102cbe444();
    }
    else {
      (**(code **)(lVar14 + 0x20))(lVar16,lVar18,puVar1);
      func_0x000103b7a088(0);
      lVar12 = lVar16;
      func_0x000103b79a78();
      (**(code **)(lVar14 + 8))(lVar16);
    }
    if (lVar12 != -1) goto LAB_102cbed6c;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0cab8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0cab8);
  if (puVar11[2] == 0) {
LAB_102cbebdc:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar11);
    puVar6 = puVar5;
    func_0x000100029284(ppuVar2);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(puVar11);
      goto LAB_102cbebdc;
    }
    func_0x0001000bb420(puVar11[7] + (long)ppuVar2 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar5);
    puVar5 = puVar11;
  }
  func_0x000107c6142c(puVar5);
  if (lStack_68 == 0) {
    puVar5 = (undefined8 *)0x112d387f8;
    puVar8 = &UNK_10d902650;
    puVar6 = &uStack_80;
LAB_102cbec7c:
    func_0x000102cbf1b4(puVar6,puVar5,puVar8);
  }
  else {
    pbVar3 = &bStack_90;
    puVar5 = &uStack_80;
    func_0x000107c6147c(pbVar3,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    puVar6 = puStack_a0;
    if (((ulong)pbVar3 & 1) != 0) {
      func_0x000107c5edd0(puStack_a0,CONCAT71(uStack_8f,bStack_90),uStack_88);
      func_0x000107c6142c(uStack_88);
      puVar5 = puVar6;
      (*pcVar10)(puVar6,1,puVar1);
      lVar16 = alStack_b0[1];
      if ((int)puVar5 != 1) {
        (**(code **)(lVar14 + 0x20))(alStack_b0[1],puVar6,puVar1);
        func_0x000103b7a088(0);
        lVar12 = lVar16;
        func_0x000103b79a78(lVar16);
        (**(code **)(lVar14 + 8))(lVar16,puVar1);
        goto LAB_102cbed6c;
      }
      puVar5 = (undefined8 *)0x112d36580;
      puVar8 = &UNK_10d9016d0;
      goto LAB_102cbec7c;
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0c9f8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c9f8);
  if (puVar11[2] == 0) {
LAB_102cbece4:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar11);
    puVar1 = puVar5;
    func_0x000100029284(ppuVar2);
    if (((ulong)puVar1 & 1) == 0) {
      func_0x000107c6142c(puVar11);
      goto LAB_102cbece4;
    }
    func_0x0001000bb420(puVar11[7] + (long)ppuVar2 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar5);
    puVar5 = puVar11;
  }
  func_0x000107c6142c(puVar5);
  lVar14 = lStack_68;
  func_0x000102cbf1b4(&uStack_80,0x112d387f8,&UNK_10d902650);
  if (lVar14 == 0) {
    lVar12 = lStack_98;
    FUN_102cbe444(lStack_98);
  }
  else {
    lVar12 = 1;
  }
LAB_102cbed6c:
  func_0x000102cbf1b4(lVar13,0x112d36580,&UNK_10d9016d0);
  return lVar12;
}



/* Entry: 102cbeda8; end: 102cbeea7;  */

void FUN_102cbeda8(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar2 = param_1;
  func_0x000103bb7550();
  if (*(long *)(param_2 + 0x10) == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar3 = *plVar2;
    uVar1 = plVar2[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_2);
    uVar6 = uVar1;
    func_0x000100029284(lVar3);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_2);
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar3 * 0x20,&uStack_50);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_2);
      if (lStack_38 != 0) {
        uVar4 = 0;
        FUN_102cbf1f4(0);
        puVar5 = auStack_58;
        func_0x000107c6147c(puVar5,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
        if ((int)puVar5 != 0) {
          return;
        }
        goto LAB_102cbee8c;
      }
    }
  }
  func_0x000102cbf1b4(&uStack_50,0x112d387f8,&UNK_10d902650);
LAB_102cbee8c:
  FUN_102cbe6dc(param_1);
  return;
}



/* Entry: 102cbeea8; end: 102cbf153;  */

undefined * FUN_102cbeea8(double param_1,undefined *param_2,undefined *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  
  dVar11 = param_1;
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar9 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar9 = param_2;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (puVar9 != (undefined *)0x0) {
    if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbf154);
      (*pcVar2)();
    }
    puVar10 = (undefined *)0x0;
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        puVar3 = *(undefined **)(param_2 + (long)puVar10 * 8 + 0x20);
        func_0x000107c61174();
        puVar6 = param_3;
      }
      else {
        puVar3 = puVar10;
        puVar6 = param_2;
        FUN_102cbe280(puVar10,param_2);
      }
      puVar4 = PTR_PTR_1126c9af8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar5 = puVar3;
      func_0x000107c4ca70();
      func_0x000107c61180();
      param_3 = puVar6;
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c5faec();
        param_3 = puVar6;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar6);
      }
      func_0x000107c5a4b8(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c56498(puVar4);
      func_0x000107c42460(puVar3);
      if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbf0f4);
        (*pcVar2)();
      }
      if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbf0f8);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbf0fc);
        (*pcVar2)();
      }
      func_0x000107c54420(puVar4);
      func_0x000107c4ca54(puVar3);
      dVar11 = dVar11 - param_1;
      if (dVar11 < 0.0) {
        dVar11 = 0.0;
      }
      if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbf100);
        (*pcVar2)();
      }
      if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbf104);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbf108);
        (*pcVar2)();
      }
      func_0x000107c56494(puVar4);
      func_0x000107c61174();
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          param_3 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          param_3 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            param_3 = puVar7;
          }
          func_0x000107c60480();
        }
        param_3 = param_3 + 1;
        puVar6 = (undefined *)0x0;
        FUN_102cbdf54(0,param_3,1,puVar7);
      }
      uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar8 + 0x10);
      puVar5 = (undefined *)(uVar1 + 1);
      puVar7 = puVar6;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        param_3 = puVar5;
        FUN_102cbdf54(puVar7,puVar5,1,puVar6);
        uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      puVar10 = puVar10 + 1;
      *(undefined **)(uVar8 + 0x10) = puVar5;
      *(undefined **)(uVar8 + uVar1 * 8 + 0x20) = puVar4;
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    } while (puVar9 != puVar10);
  }
  return puVar7;
}



/* Entry: 102cbf154; end: 102cbf173;  */

void FUN_102cbf154(void)

{
  func_0x000107c61168(&PTR_PTR_11289d940);
  return;
}



/* Entry: 102cbf174; end: 102cbf1f3;  */

void FUN_102cbf174(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102cbf1f4; end: 102cbf243;  */

void FUN_102cbf1f4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f0a770 != 0) {
    return;
  }
  puVar1 = &UNK_1105be290;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f0a770 = param_1;
  return;
}



/* Entry: 102cbf244; end: 102cbf28b; -[_TtC25OperaPlayerDebuggerPlugin25OperaPlayerDebuggerPlugin init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbf244(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112f0a778) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cbf28c; end: 102cbf28f; -[_TtC25OperaPlayerDebuggerPlugin25OperaPlayerDebuggerPlugin teardown] */

void FUN_102cbf28c(void)

{
  return;
}



/* Entry: 102cbf290; end: 102cbf293; -[_TtC25OperaPlayerDebuggerPlugin25OperaPlayerDebuggerPlugin setPlaylistItemController:] */

void FUN_102cbf290(void)

{
  return;
}



/* Entry: 102cbf294; end: 102cbf297; -[_TtC25OperaPlayerDebuggerPlugin25OperaPlayerDebuggerPlugin extraPropertiesProvider] */

void FUN_102cbf294(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102cbf298; end: 102cbf2cb;  */

void FUN_102cbf298(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cbf2cc; end: 102cbf39f; -[_TtC25OperaPlayerDebuggerPlugin25OperaPlayerDebuggerPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

/* WARNING: Possible PIC construction at 0x000102cbf374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbf384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbf378) */
/* WARNING: Removing unreachable block (ram,0x000102cbf388) */

void FUN_102cbf2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1105be388;
    func_0x000107c613fc(&UNK_1105be388,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    pcVar2 = FUN_102cbf6ac;
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102cbf4dc(pcVar2,puVar1);
  FUN_1024a96c0(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cbf3a0; end: 102cbf427; -[_TtC25OperaPlayerDebuggerPlugin25OperaPlayerDebuggerPlugin registeredEventsForOperaSession] */

void FUN_102cbf3a0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb8a14();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb8a4c();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 102cbf428; end: 102cbf4db; -[_TtC25OperaPlayerDebuggerPlugin25OperaPlayerDebuggerPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102cbf48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbf4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbf490) */
/* WARNING: Removing unreachable block (ram,0x000102cbf4c8) */

void FUN_102cbf428(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  func_0x000107c5faec();
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x000103bb8a14();
  uVar2 = *puVar1;
  if ((uVar2 != param_3 || puVar1[1] != param_2) &&
     (func_0x000107c605b8(uVar2,puVar1[1],param_3,param_2,0), (uVar2 & 1) == 0)) {
    func_0x000103bb8a4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cbf4dc; end: 102cbf68b;  */

void FUN_102cbf4dc(code *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *apuStack_90 [3];
  undefined *puStack_78;
  undefined1 auStack_70 [32];
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0e898;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e898);
  puVar6 = PTR___sSbN_11034dd40;
  apuStack_90[0] = (undefined *)CONCAT71(apuStack_90[0]._1_7_,1);
  puStack_78 = PTR___sSbN_11034dd40;
  func_0x000100102924(apuStack_90,auStack_70);
  puVar4 = puVar2;
  func_0x000107c61558(puVar2);
  apuStack_90[0] = puVar2;
  func_0x0001001029e8(auStack_70,ppuVar3,param_2,puVar4);
  func_0x000107c6142c();
  puVar2 = apuStack_90[0];
  iVar1 = (int)param_2;
  func_0x000109128f10();
  if (iVar1 != 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110f0c318;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c318);
    apuStack_90[0] = (undefined *)CONCAT71(apuStack_90[0]._1_7_,1);
    puStack_78 = puVar6;
    func_0x000100102924(apuStack_90,auStack_70);
    puVar6 = puVar2;
    func_0x000107c61558(puVar2);
    apuStack_90[0] = puVar2;
    func_0x0001001029e8(auStack_70,ppuVar5,ppuVar3,puVar6);
    func_0x000107c6142c(ppuVar3);
    puVar6 = apuStack_90[0];
    ppuVar3 = &PTR____CFConstantStringClassReference_110f0c3b8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c3b8);
    apuStack_90[0] = (undefined *)0x4;
    puStack_78 = PTR___sSiN_11034deb0;
    func_0x000100102924(apuStack_90,auStack_70);
    puVar2 = puVar6;
    func_0x000107c61558(puVar6);
    apuStack_90[0] = puVar6;
    func_0x0001001029e8(auStack_70,ppuVar3,ppuVar5,puVar2);
    func_0x000107c6142c(ppuVar5);
    puVar2 = apuStack_90[0];
  }
  if (param_1 != (code *)0x0) {
    puVar6 = puVar2;
    func_0x00010018cc3c(puVar2);
    (*param_1)();
    func_0x000107c6142c(puVar6);
  }
  func_0x000107c6142c(puVar2);
  return;
}



/* Entry: 102cbf68c; end: 102cbf6ab;  */

void FUN_102cbf68c(void)

{
  func_0x000107c61168(&PTR_PTR_11289d9f0);
  return;
}



/* Entry: 102cbf6ac; end: 102cbf6b3;  */

/* WARNING: Possible PIC construction at 0x0001024a5168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a516c) */

void FUN_102cbf6ac(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR___sypN_11034f1a8;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_2 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbf6b4; end: 102cbf70f; -[_TtC21SCOperaScrollViewImpl26OperaInteractiveTransition init] */

void FUN_102cbf6b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaScrollViewImpl.OperaInteractiveTransition",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cbf6e0);
  (*pcVar1)();
}



/* Entry: 102cbf710; end: 102cbf71f; -[_TtC21SCOperaScrollViewImpl26OperaInteractiveTransition .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cbf710(long param_1)

{
  param_1 = param_1 + _DAT_112f0a7c8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102cbf720; end: 102cbf7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbf720(double param_1)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0a7a8);
  dVar2 = 0.0;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      param_1 = -param_1;
      goto LAB_102cbf784;
    }
    if (lVar1 == 1) {
      dVar2 = -param_1;
      param_1 = 0.0;
      goto LAB_102cbf784;
    }
  }
  else {
    if (lVar1 == 2) goto LAB_102cbf784;
    if (lVar1 == 3) {
      dVar2 = param_1;
    }
  }
  param_1 = 0.0;
LAB_102cbf784:
  lVar1 = unaff_x20 + _DAT_112f0a7c8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cc4428(dVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102cbf7d4; end: 102cbf80b; -[_TtC21SCOperaScrollViewImpl26OperaInteractiveTransition setProgress:] */

void FUN_102cbf7d4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102cbf720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102cbf80c; end: 102cbf94b; -[_TtC21SCOperaScrollViewImpl26OperaInteractiveTransition completeWithProgressBlock:completionBlock:] */

/* WARNING: Possible PIC construction at 0x000102cbf8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbf928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbf8f8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102cbf92c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbf80c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_3 != 0) {
    puVar2 = &UNK_1105be4d0;
    func_0x000107c613fc(&UNK_1105be4d0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_3;
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105be4a8;
    func_0x000107c613fc(&UNK_1105be4a8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar3 = FUN_102cbfde0;
  }
  lVar1 = param_1 + _DAT_112f0a7c8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_102cc48a4();
    func_0x000107c61170(param_1);
  }
  if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar2);
    return;
  }
  return;
}



/* Entry: 102cbf94c; end: 102cbfb9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbf94c(ulong param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  uVar4 = unaff_x20 + _DAT_112f0a7c8;
  func_0x000107c61618();
  lVar2 = _DAT_112f0a818;
  if (uVar4 == 0) {
    return;
  }
  func_0x000107c61428(uVar4 + _DAT_112f0a818,auStack_78,1,0);
  if (*(long *)(uVar4 + lVar2) == 0 || unaff_x20 != *(long *)(uVar4 + lVar2)) goto LAB_102cbfb60;
  if ((param_1 & 1) != 0) {
    FUN_102cc48a4();
    goto LAB_102cbfb60;
  }
  if (*(char *)(uVar4 + _DAT_112f0a840) == '\x01') {
    if (param_2 != (code *)0x0) {
      (*param_2)(0);
    }
    if (param_4 != (code *)0x0) {
      (*param_4)(1);
    }
    uVar7 = *(ulong *)(uVar4 + lVar2);
    *(undefined8 *)(uVar4 + lVar2) = 0;
    func_0x000107c615e8(uVar4);
    uVar4 = uVar7;
    goto LAB_102cbfb60;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f0a7b0);
  uVar10 = ((undefined8 *)(unaff_x20 + _DAT_112f0a7b0))[1];
  puVar1 = (undefined8 *)(uVar4 + _DAT_112f0a838);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112f0a7c0))[1];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0a7c0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[3] = uVar8;
  puVar1[2] = uVar5;
  *(undefined1 *)(puVar1 + 4) = 0;
  if (param_2 != (code *)0x0) {
    (*param_2)(0);
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(1);
  }
  uVar5 = *(undefined8 *)(uVar4 + lVar2);
  *(undefined8 *)(uVar4 + lVar2) = 0;
  func_0x000107c615e8(uVar5);
  uVar7 = uVar4;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar5 = 0;
  func_0x000100f115fc(0);
  uVar6 = uVar7;
  func_0x000107c5fc54(uVar7,uVar5);
  func_0x000107c61170(uVar7);
  if (uVar6 >> 0x3e == 0) {
    if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102cbfb44;
LAB_102cbfae4:
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cbfb9c);
        (*pcVar3)();
      }
      uVar5 = *(undefined8 *)(uVar6 + 0x20);
      func_0x000107c61174(uVar5);
    }
    else {
      uVar5 = 0;
      func_0x000100f040d0(0,uVar6);
    }
    func_0x000107c6142c(uVar6);
    func_0x000107c438d4(uVar5);
    func_0x000107c54b80(uVar9,uVar10,uVar5);
    func_0x000107c61170(uVar5);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
    if (uVar7 != 0) goto LAB_102cbfae4;
LAB_102cbfb44:
    func_0x000107c6142c(uVar6);
  }
  FUN_102cc19e4(uVar9,uVar10);
  FUN_102cc227c();
LAB_102cbfb60:
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 102cbfb9c; end: 102cbfc87; -[_TtC21SCOperaScrollViewImpl26OperaInteractiveTransition cancel:progressBlock:completionBlock:] */

void FUN_102cbfb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_1105be480;
    func_0x000107c613fc(&UNK_1105be480,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x102cbfdb4;
  }
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1105be458;
    func_0x000107c613fc(&UNK_1105be458,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    pcVar3 = FUN_102cbfdac;
  }
  func_0x000107c61174(param_1);
  FUN_102cbf94c(param_3,uVar1,puVar2,pcVar3,puVar4);
  func_0x000100d233a0(pcVar3,puVar4);
  func_0x000100d233a0(uVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbfc88; end: 102cbfd8b;  */

undefined * FUN_102cbfc88(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112f0a7f8);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  func_0x000100f89a68();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cbfd8c);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174();
      uVar3 = uVar9;
      func_0x000100f89a68();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cbfd5c);
  (*pcVar1)();
}



/* Entry: 102cbfd8c; end: 102cbfdab;  */

void FUN_102cbfd8c(void)

{
  func_0x000107c61168(&PTR_PTR_11289daa8);
  return;
}



/* Entry: 102cbfdac; end: 102cbfdbb;  */

void FUN_102cbfdac(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102cbfdbc; end: 102cbfddf;  */

undefined8 FUN_102cbfdbc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102cbfde0; end: 102cbff4f;  */

void FUN_102cbfde0(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102cbff50; end: 102cbff8f;  */

void FUN_102cbff50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d8e4;
  func_0x000107c61520(&UNK_10db3d8e4,&UNK_1105be568);
  puRam0000000112f0a800 = puVar1;
  return;
}



/* Entry: 102cbff90; end: 102cbffa3;  */

bool FUN_102cbff90(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102cbffa4; end: 102cc004f;  */

void FUN_102cbffa4(void)

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



/* Entry: 102cc0050; end: 102cc006b;  */

void FUN_102cc0050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000102cc0054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 102cc006c; end: 102cc0117;  */

void FUN_102cc006c(void)

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



/* Entry: 102cc0118; end: 102cc015b; -[SCOperaScrollView transitionDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cc0118(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0a808;
  func_0x000107c61428(param_1 + _DAT_112f0a808,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102cc015c; end: 102cc01ab; -[SCOperaScrollView setTransitionDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc015c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0a808;
  func_0x000107c61428(param_2 + _DAT_112f0a808,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 102cc01ac; end: 102cc0227; -[SCOperaScrollView tapInterceptors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc01ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0a810;
  func_0x000107c61428(param_1 + _DAT_112f0a810,auStack_38,0,0);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61434(uVar4);
  uVar2 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  uVar3 = uVar4;
  func_0x000107c5fc48(uVar4,uVar2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102cc0228; end: 102cc02a3; -[SCOperaScrollView setTapInterceptors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc0228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  func_0x000107c5fc54(param_3,uVar2);
  lVar1 = _DAT_112f0a810;
  func_0x000107c61428(param_1 + _DAT_112f0a810,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102cc02a4; end: 102cc02eb; -[SCOperaScrollView currentInteractiveTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc02a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0a818;
  func_0x000107c61428(param_1 + _DAT_112f0a818,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cc02ec; end: 102cc034f; -[SCOperaScrollView setCurrentInteractiveTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc02ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0a818;
  func_0x000107c61428(param_1 + _DAT_112f0a818,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102cc0350; end: 102cc0cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102cc0350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
             undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [8];
  long lStack_90;
  long lStack_88;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0a820) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0a828) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a830);
  *puVar1 = 3;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a838);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f0a840) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a848);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a850);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a858);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a808) = 0x3fd3333333333333;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112f0a810) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a860) = 0;
  lVar14 = _DAT_112f0a868;
  *(undefined1 *)(unaff_x20 + _DAT_112f0a868) = 1;
  lVar13 = _DAT_112f0a870;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a870) = 0;
  lVar8 = _DAT_112f0a878;
  puVar7 = puVar2;
  FUN_102cbfc88();
  *(undefined **)(unaff_x20 + lVar8) = puVar7;
  lVar8 = _DAT_112f0a880;
  *(undefined1 *)(unaff_x20 + _DAT_112f0a880) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a818) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f0a888,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a890);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a898) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a8a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_6 != 0) {
    lVar9 = param_6;
    func_0x000107c5dbe8();
    *(char *)(unaff_x20 + lVar8) = (char)lVar9;
    lVar8 = param_6;
    func_0x000107c4270c();
    *(char *)(unaff_x20 + lVar14) = (char)lVar8;
  }
  uVar12 = *(undefined8 *)(unaff_x20 + lVar13);
  *(undefined8 *)(unaff_x20 + lVar13) = param_8;
  func_0x000107c615f0(param_8);
  func_0x000107c615e8(uVar12);
  *(undefined8 *)(unaff_x20 + _DAT_112f0a8a8) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a8b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a8b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a8c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0a8c8) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f0a8d0) = 0;
  if (param_6 == 0) {
    func_0x000107c615f0(param_10);
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c615f0(param_10);
    lVar14 = param_6;
    func_0x000107c4270c();
    uVar4 = (undefined1)lVar14;
    lVar14 = param_6;
    func_0x000107c41f24();
    uVar5 = (undefined1)lVar14;
  }
  lVar9 = 0;
  FUN_102cc68c0();
  lVar8 = lVar9;
  func_0x000107c610f8();
  lVar14 = _DAT_112f0aa50;
  *(undefined1 *)(lVar8 + _DAT_112f0aa50) = 1;
  lVar13 = _DAT_112f0aa58;
  *(undefined1 *)(lVar8 + _DAT_112f0aa58) = 0;
  *(undefined8 *)(lVar8 + _DAT_112f0aa68) = 0xffffffffffffffff;
  *(undefined **)(lVar8 + _DAT_112f0aa70) = puVar2;
  *(undefined1 *)(lVar8 + lVar14) = uVar4;
  *(undefined1 *)(lVar8 + lVar13) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112f0aa60) = param_10;
  puVar2 = PTR_s_initWithTarget_action__1125f1c48;
  lStack_90 = lVar8;
  lStack_88 = lVar9;
  func_0x000107c615f0(param_10);
  plVar10 = &lStack_90;
  func_0x000107c61154(plVar10,puVar2,0,0);
  *(long **)(unaff_x20 + _DAT_112f0a8d8) = plVar10;
  puVar11 = auStack_a0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar11,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c534b0();
  lVar14 = _DAT_112f0a8d8;
  func_0x000107c61428(puVar11 + _DAT_112f0a8d8,auStack_b8,0,0);
  func_0x000107c3d8b4(*(undefined8 *)(puVar11 + lVar14));
  func_0x000107c3d6fc(puVar11);
  iVar6 = (int)*(undefined8 *)(puVar11 + lVar14);
  func_0x000107c53fcc();
  FUN_102cc0cbc();
  func_0x000109128f2c();
  if (iVar6 == 0) {
    func_0x000107c615e8(param_8);
    func_0x000107c615e8(param_10);
    func_0x000107c61170(puVar11);
    func_0x000107c615e8(param_9);
    func_0x000107c615e8(param_7);
  }
  else {
    if (param_9 == 0) {
      func_0x000107c615e8(param_8);
      func_0x000107c615e8(param_10);
      func_0x000107c615e8(param_7);
      func_0x000107c615e8(param_6);
      lVar14 = 0;
    }
    else {
      lVar13 = *(long *)(puVar11 + _DAT_112f0a898);
      if (lVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc0804);
        (*pcVar3)();
      }
      uVar12 = *(undefined8 *)(puVar11 + lVar14);
      func_0x000107c615f0(param_9);
      func_0x000107c61174(uVar12);
      func_0x000107c61174(lVar13);
      lVar14 = param_9;
      func_0x000107c43e8c();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar13);
      func_0x000107c615e8(param_8);
      func_0x000107c615ec(param_9,2);
      func_0x000107c615e8(param_10);
      func_0x000107c615e8(param_7);
      func_0x000107c615e8(param_6);
    }
    param_6 = *(long *)(puVar11 + _DAT_112f0a860);
    *(long *)(puVar11 + _DAT_112f0a860) = lVar14;
    func_0x000107c61170(puVar11);
  }
  func_0x000107c615e8(param_6);
  return puVar11;
}



/* Entry: 102cc0cbc; end: 102cc0d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc0cbc(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  lVar1 = _DAT_112f0a898;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a898);
  *(undefined **)(unaff_x20 + _DAT_112f0a898) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc0d54);
    (*pcVar2)();
  }
  func_0x000107c56704(0,puVar3);
  func_0x000107c61170(puVar3);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c53fcc();
    if (*(long *)(unaff_x20 + lVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc0d5c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc0d58);
  (*pcVar2)();
}



/* Entry: 102cc0d5c; end: 102cc0e1f; -[SCOperaScrollView initWithFrame:navigationStyle:configProvider:internalConfigProvider:transitionResolver:debugServices:displayLinkProvider:] */

void FUN_102cc0d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c615f0(param_12);
  func_0x000102cc0804(param_1,param_2,param_3,param_4,param_7,param_8,param_9,param_10,param_11,
                      param_12);
  return;
}



/* Entry: 102cc0e20; end: 102cc0e53; -[SCOperaScrollView initWithCoder:] */

undefined8 FUN_102cc0e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000102cc5784();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 102cc0e54; end: 102cc0f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc0e54(double param_1,double param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112f0a898;
  if (param_3 == 3) {
    if (*(long *)(unaff_x20 + _DAT_112f0a898) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc0f38);
      (*pcVar1)();
    }
    func_0x000107c4b8b8();
    lVar2 = _DAT_112f0a888;
    param_1 = param_1 - *(double *)(unaff_x20 + _DAT_112f0a8a0);
    param_2 = param_2 - ((double *)(unaff_x20 + _DAT_112f0a8a0))[1];
    if (param_1 * param_1 + param_2 * param_2 <= 100.0) {
      if (*(long *)(unaff_x20 + lVar3) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc0f3c);
        (*pcVar1)();
      }
      func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_48,0,0);
      lVar2 = unaff_x20 + lVar2;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c4df4c();
        func_0x000107c615e8(lVar2);
      }
    }
  }
  else if (param_3 == 2) {
    if (*(long *)(unaff_x20 + _DAT_112f0a898) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc1038);
      (*pcVar1)();
    }
    func_0x000107c4b8b8(*(long *)(unaff_x20 + _DAT_112f0a898),param_4,unaff_x20);
    param_1 = param_1 - *(double *)(unaff_x20 + _DAT_112f0a8a0);
    param_2 = param_2 - ((double *)(unaff_x20 + _DAT_112f0a8a0))[1];
    if (100.0 < param_1 * param_1 + param_2 * param_2) {
      lVar3 = *(long *)(unaff_x20 + lVar3);
      if (lVar3 != 0) {
        func_0x000107c61174();
        lVar2 = lVar3;
        func_0x000107c49cd8();
        if ((int)lVar2 != 0) {
          func_0x000107c54514(lVar3);
          func_0x000107c54514(lVar3);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar3);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc103c);
      (*pcVar1)();
    }
    return;
  }
  return;
}



/* Entry: 102cc0f3c; end: 102cc0f8f; -[SCOperaScrollView didLongPressWithSender:] */

/* WARNING: Possible PIC construction at 0x000102cc0f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc0f7c) */

void FUN_102cc0f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5bcc0(param_3);
  FUN_102cc0e54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cc0f90; end: 102cc103b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc0f90(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112f0a898;
  if (*(long *)(unaff_x20 + _DAT_112f0a898) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc1038);
    (*pcVar1)();
  }
  func_0x000107c4b8b8();
  param_1 = param_1 - *(double *)(unaff_x20 + _DAT_112f0a8a0);
  param_2 = param_2 - ((double *)(unaff_x20 + _DAT_112f0a8a0))[1];
  if (100.0 < param_1 * param_1 + param_2 * param_2) {
    lVar2 = *(long *)(unaff_x20 + lVar2);
    if (lVar2 != 0) {
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c49cd8();
      if ((int)lVar3 != 0) {
        func_0x000107c54514(lVar2,param_4,0);
        func_0x000107c54514(lVar2,param_4,1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc103c);
    (*pcVar1)();
  }
  return;
}



/* Entry: 102cc103c; end: 102cc106b; -[SCOperaScrollView didLongPressGestureRecognizerStateChanged:] */

void FUN_102cc103c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102cc0e54(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cc106c; end: 102cc111b; -[SCOperaScrollView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc106c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = param_3;
  func_0x000107c614f0();
  lVar1 = _DAT_112f0a8d0;
  func_0x000107c61428(param_3 + _DAT_112f0a8d0,auStack_58,0,0);
  if (*(char *)(param_3 + lVar1) == '\x01') {
    func_0x0001063669a0(param_1,param_2,param_3,param_5);
  }
  else {
    lStack_68 = param_3;
    lStack_60 = lVar2;
    func_0x000107c61154(param_1,param_2,&lStack_68,PTR_s_hitTest_withEvent__1125d6850,param_5);
  }
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cc111c; end: 102cc1163; -[SCOperaScrollView operaScrollViewDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc111c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0a888;
  func_0x000107c61428(param_1 + _DAT_112f0a888,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cc1164; end: 102cc11bb; -[SCOperaScrollView setOperaScrollViewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc1164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0a888;
  func_0x000107c61428(param_1 + _DAT_112f0a888,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102cc11bc; end: 102cc11c7; -[SCOperaScrollView targetContentOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102cc11bc(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + _DAT_112f0a8b0);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 102cc11c8; end: 102cc11d3; -[SCOperaScrollView setTargetContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc11c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_3 + _DAT_112f0a8b0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Entry: 102cc11d4; end: 102cc11df; -[SCOperaScrollView contentOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102cc11d4(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + _DAT_112f0a8b8);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 102cc11e0; end: 102cc124f; -[SCOperaScrollView setContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc11e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_3 + _DAT_112f0a8b8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61174(param_3);
  FUN_102cc1250();
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102cc1250; end: 102cc141f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc1250(void)

{
  double *pdVar1;
  double *pdVar2;
  char *pcVar3;
  double *pdVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  double dVar7;
  double dVar8;
  double dStack_b0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a8b8);
  pdVar4 = pdVar1;
  func_0x000107c61428(pdVar1,auStack_68,0,0);
  pdVar2 = (double *)(unaff_x20 + _DAT_112f0a890);
  func_0x000107c6099c(*pdVar1,pdVar1[1],*pdVar2,pdVar2[1]);
  lVar6 = _DAT_112f0a818;
  if (((ulong)pdVar4 & 1) == 0) {
    pcVar3 = (char *)(unaff_x20 + _DAT_112f0a830);
    if (*pcVar3 == '\x03') {
      dStack_b0 = -*pdVar2;
      dVar7 = 0.0;
      dVar8 = 0.0;
    }
    else {
      dStack_b0 = *(double *)(pcVar3 + 0x28);
      dVar7 = *(double *)(pcVar3 + 8);
      dVar8 = *(double *)(pcVar3 + 0x10);
    }
    pdVar4 = (double *)(unaff_x20 + _DAT_112f0a838);
    if (*(char *)(pdVar4 + 4) != '\x01') {
      dVar7 = pdVar4[2];
      dVar8 = pdVar4[3];
      dStack_b0 = *pdVar4;
    }
    func_0x000107c61428(unaff_x20 + _DAT_112f0a818,auStack_80,0,0);
    lVar6 = *(long *)(unaff_x20 + lVar6);
    if (lVar6 != 0) {
      uVar5 = 0;
      FUN_102cbfd8c(dStack_b0,0);
      func_0x000107c61480(lVar6,uVar5);
      if (lVar6 != 0) {
        dVar7 = *(double *)(lVar6 + _DAT_112f0a7c0);
        dVar8 = ((double *)(lVar6 + _DAT_112f0a7c0))[1];
      }
    }
    lVar6 = _DAT_112f0a888;
    func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_98,0,0);
    lVar6 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x000107c4df48(dVar7,dVar8);
      func_0x000107c615e8(lVar6);
    }
  }
  dVar7 = *pdVar1;
  pdVar2[1] = pdVar1[1];
  *pdVar2 = dVar7;
  return;
}



/* Entry: 102cc1420; end: 102cc142b; -[SCOperaScrollView contentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102cc1420(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + _DAT_112f0a8c0);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 102cc142c; end: 102cc146b;  */

undefined1  [16] FUN_102cc142c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428((undefined1 (*) [16])(param_1 + lVar1),auStack_38,0,0);
  return *(undefined1 (*) [16])(param_1 + lVar1);
}



/* Entry: 102cc146c; end: 102cc1477; -[SCOperaScrollView setContentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc146c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_3 + _DAT_112f0a8c0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Entry: 102cc1478; end: 102cc14c7;  */

void FUN_102cc1478(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_3 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Entry: 102cc14c8; end: 102cc150b; -[SCOperaScrollView scrollEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102cc14c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0a8c8;
  func_0x000107c61428(param_1 + _DAT_112f0a8c8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102cc150c; end: 102cc155b; -[SCOperaScrollView setScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc150c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0a8c8;
  func_0x000107c61428(param_1 + _DAT_112f0a8c8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102cc155c; end: 102cc15a3; -[SCOperaScrollView panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc155c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0a8d8;
  func_0x000107c61428(param_1 + _DAT_112f0a8d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102cc15a4; end: 102cc1607; -[SCOperaScrollView setPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc15a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0a8d8;
  func_0x000107c61428(param_1 + _DAT_112f0a8d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102cc1608; end: 102cc1617; -[SCOperaScrollView longPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc1608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f0a898));
  return;
}



/* Entry: 102cc1618; end: 102cc164b; -[SCOperaScrollView setLongPressGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc1618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f0a898);
  *(undefined8 *)(param_1 + _DAT_112f0a898) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102cc164c; end: 102cc168f; -[SCOperaScrollView noClipViewHitTestEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102cc164c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0a8d0;
  func_0x000107c61428(param_1 + _DAT_112f0a8d0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102cc1690; end: 102cc16df; -[SCOperaScrollView setNoClipViewHitTestEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc1690(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0a8d0;
  func_0x000107c61428(param_1 + _DAT_112f0a8d0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102cc16e0; end: 102cc17a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc16e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a8b8);
  puVar3 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  func_0x000107c6099c(*puVar1,puVar1[1],param_1,param_2);
  lVar2 = _DAT_112f0a888;
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0a888,auStack_70,1,0);
    lVar4 = unaff_x20 + lVar2;
    func_0x000107c61618(lVar4);
    func_0x000107c61604(unaff_x20 + lVar2,0);
    FUN_102cc1ac4(param_1,param_2,0,0);
    func_0x000107c61604(unaff_x20 + lVar2,lVar4);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 102cc17a8; end: 102cc17e7; -[SCOperaScrollView setContentOffsetWithoutCallback:] */

void FUN_102cc17a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102cc16e0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cc17e8; end: 102cc17ff; -[SCOperaScrollView isScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102cc17e8(long param_1)

{
  return *(char *)(param_1 + _DAT_112f0a828) != '\0';
}



/* Entry: 102cc1800; end: 102cc1803; -[SCOperaScrollView subviewScrollViewDidStopScrollingWithBoundaryHit:] */

void FUN_102cc1800(void)

{
  return;
}



/* Entry: 102cc1804; end: 102cc1807; -[SCOperaScrollView subviewScrollViewDidStartScrolling] */

void FUN_102cc1804(void)

{
  return;
}



/* Entry: 102cc1808; end: 102cc18ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc1808(byte param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0a8c8;
  param_1 = param_1 | param_2 ^ 0xff;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a8c8,auStack_48,1,0);
  *(byte *)(unaff_x20 + lVar1) = param_1 & 1;
  lVar1 = _DAT_112f0a8d8;
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0a8d8,auStack_60,0,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x000107c49cd8();
    if ((int)uVar3 != 0) {
      func_0x000107c54514(uVar2);
      func_0x000107c54514(uVar2);
    }
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102cc18ac; end: 102cc18ef; -[SCOperaScrollView subviewScrollViewIsAtTopBoundary:isVisible:] */

void FUN_102cc18ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_102cc1808(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cc18f0; end: 102cc19bb; -[SCOperaScrollView stopRecognizingGestures] */

/* WARNING: Possible PIC construction at 0x000102cc1944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cc1948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc18f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112f0a898);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    lVar2 = lVar3;
    func_0x000107c49cd8();
    if ((int)lVar2 != 0) {
      func_0x000107c54514(lVar3,param_2,0);
      func_0x000107c54514(lVar3,param_2,1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc195c);
  (*pcVar1)();
}



/* Entry: 102cc19bc; end: 102cc19e3; -[SCOperaScrollView resetGestureIfNecessary] */

void FUN_102cc19bc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102cc195c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cc19e4; end: 102cc1ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc19e4(double param_1,double param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  long unaff_x20;
  double dVar4;
  undefined1 auStack_58 [24];
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a850);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar2 = (double *)(unaff_x20 + _DAT_112f0a8b8);
  func_0x000107c61428(pdVar2,auStack_58,1,0);
  *pdVar2 = -param_1;
  pdVar2[1] = -param_2;
  FUN_102cc1250();
  if (pdVar2[1] != -param_2 || *pdVar2 != -param_1) {
    *(undefined1 *)(unaff_x20 + _DAT_112f0a828) = 0;
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f0a830);
    *puVar3 = 3;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f0a838);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 4) = 1;
    dVar4 = *pdVar1;
    pdVar2 = (double *)(unaff_x20 + _DAT_112f0a858);
    pdVar2[1] = pdVar1[1];
    *pdVar2 = dVar4;
  }
  return;
}



/* Entry: 102cc1ac4; end: 102cc1ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cc1ac4(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  double *pdVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 uVar10;
  ulong unaff_x20;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a8c0);
  func_0x000107c61428(pdVar1,auStack_68,0,0);
  dVar12 = *pdVar1;
  if (param_1 <= *pdVar1) {
    dVar12 = param_1;
  }
  dVar13 = pdVar1[1];
  if (param_2 <= pdVar1[1]) {
    dVar13 = param_2;
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a8b0);
  func_0x000107c61428(pdVar1,auStack_80,1,0);
  *pdVar1 = dVar12;
  pdVar1[1] = dVar13;
  pdVar1 = (double *)(unaff_x20 + _DAT_112f0a848);
  *pdVar1 = -dVar12;
  pdVar1[1] = -dVar13;
  lVar2 = _DAT_112f0a8d8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a8d8,auStack_98,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000107c49cd8();
  if ((int)uVar5 != 0) {
    func_0x000107c54514(uVar4);
    func_0x000107c54514(uVar4);
  }
  func_0x000107c61170(uVar4);
  uVar10 = 3;
  if ((param_3 & 1) == 0) {
    uVar10 = 0;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f0a828) = uVar10;
  lVar2 = _DAT_112f0a820;
  if ((param_3 & 1) != 0) {
    lVar11 = *(long *)(unaff_x20 + _DAT_112f0a820);
    if (lVar11 != 0) {
      func_0x000107c6157c(lVar11);
      FUN_102cc5d70();
      func_0x000107c61574(lVar11);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = 0;
      func_0x000107c61574(uVar5);
    }
    uVar5 = 0;
    FUN_102cc2338(0,param_4,0,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
    func_0x000107c61574(uVar4);
    uVar6 = 1;
    FUN_102cc2158();
    lVar11 = *(long *)(unaff_x20 + lVar2);
    if ((uVar6 & 1) != 0) {
      if (lVar11 == 0) {
        return;
      }
      puVar7 = &UNK_1105be7f0;
      func_0x000107c613fc(&UNK_1105be7f0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = &UNK_1105be908;
      func_0x000107c613fc(&UNK_1105be908,0x28,7);
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      *(undefined **)(puVar8 + 0x10) = puVar7;
      func_0x000107c6157c(lVar11);
      func_0x000107c6157c(puVar7);
      FUN_102cc5de8(0x102cc5d6c,puVar8);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(lVar11);
      func_0x000107c61574(puVar8);
      return;
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61574(lVar11);
    goto LAB_102cc1dac;
  }
  FUN_102cc2158(0);
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_102cc5cd8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar6 = unaff_x20;
  func_0x000107c5fc54(unaff_x20,uVar5);
  func_0x000107c61170(unaff_x20);
  if (uVar6 >> 0x3e == 0) {
    if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102cc1d98;
LAB_102cc1d20:
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc1de0);
        (*pcVar3)();
      }
      uVar5 = *(undefined8 *)(uVar6 + 0x20);
      func_0x000107c61174(uVar5);
    }
    else {
      uVar5 = 0;
      func_0x000100f040d0(0,uVar6);
    }
    func_0x000107c6142c(uVar6);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    func_0x000107c438d4(uVar5);
    func_0x000107c54b80(dVar12,dVar13,uVar5);
    func_0x000107c61170(uVar5);
  }
  else {
    uVar9 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar9 = uVar6;
    }
    func_0x000107c60480();
    if (uVar9 != 0) goto LAB_102cc1d20;
LAB_102cc1d98:
    func_0x000107c6142c(uVar6);
  }
  FUN_102cc19e4(*pdVar1,pdVar1[1]);
LAB_102cc1dac:
  FUN_102cc227c();
  return;
}


