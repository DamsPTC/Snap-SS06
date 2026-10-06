/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c8be04; end: 100c8be83; -[SCAAppStartupCompleteV2 setStartupType:] */

/* WARNING: Possible PIC construction at 0x000100c8be6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8be70) */

void FUN_100c8be04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x0001005a8a60(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110de67f8,9,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8be84; end: 100c8bf03; -[SCAAppStartupCompleteV2 setStartupFrom:] */

/* WARNING: Possible PIC construction at 0x000100c8beec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8bef0) */

void FUN_100c8be84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c8bf04(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110ff57d8,7,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8bf04; end: 100c8bf23;  */

undefined * FUN_100c8bf04(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d89050)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c8bf24; end: 100c8bf3b; -[SCAAppStartupCompleteV2 setStartupToPage:] */

void FUN_100c8bf24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff57f8,8,param_3,0);
  return;
}



/* Entry: 100c8bf3c; end: 100c8bf53; -[SCAAppStartupCompleteV2 setReroutedToPage:] */

void FUN_100c8bf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff5838,0xe,param_3,0);
  return;
}



/* Entry: 100c8bf54; end: 100c8bfd3; -[SCAAppStartupCompleteV2 setStatus:] */

/* WARNING: Possible PIC construction at 0x000100c8bfbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8bfc0) */

void FUN_100c8bf54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c8bfd4(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,10,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8bfd4; end: 100c8bff3;  */

undefined * FUN_100c8bfd4(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d89070)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c8bff4; end: 100c8c03b; -[SCAAppStartupCompleteV2 setIosPlatformInfo:] */

void FUN_100c8bff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c40794(param_3);
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff5798,5,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8c03c; end: 100c8c08f; -[SCAPlatformInfo setIsLowPowerModeEnabled:] */

void FUN_100c8c03c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff5938,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8c090; end: 100c8c0d7; -[SCAAppStartupCompleteV2 setPlatformInfo:] */

void FUN_100c8c090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c40794(param_3);
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff5818,0xd,param_3,6
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8c0d8; end: 100c8c28b;  */

undefined * FUN_100c8c0d8(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  lVar10 = *(long *)(param_1 + 0xc0);
  uVar9 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar10 + 0x40);
  func_0x000107c61434(lVar10);
  lVar11 = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR_PTR_1126adc00;
  while( true ) {
    for (; PTR_PTR_1126adc00 = puVar4, uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c55214();
      func_0x000107c59dc4(puVar4);
      func_0x000107c61174();
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_100c8c380(0,puVar5 + 1,1,puVar7);
      }
      uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar8 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_100c8c380(puVar7,uVar1 + 1,1,puVar6);
        uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar8 + uVar1 * 8 + 0x20) = puVar4;
      func_0x000107c61170(puVar4);
      puVar4 = PTR_PTR_1126adc00;
    }
    bVar3 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar3) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
      func_0x000107c61574(lVar10);
      return puVar7;
    }
    uVar12 = ((ulong *)(lVar10 + 0x40))[lVar11];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8c28c);
  (*pcVar2)();
}



/* Entry: 100c8c28c; end: 100c8c30b; -[SCAFeaturePoint setId:] */

/* WARNING: Possible PIC construction at 0x000100c8c2f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8c2f8) */

void FUN_100c8c28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c8c30c(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf6f8,2,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8c30c; end: 100c8c32b;  */

undefined * FUN_100c8c30c(ulong param_1)

{
  if (param_1 < 0x50) {
    return (&PTR_PTR_110d88dd0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c8c32c; end: 100c8c37f; -[SCAFeaturePoint setTimestampMicros:] */

void FUN_100c8c32c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff58d8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8c380; end: 100c8c3a3;  */

ulong FUN_100c8c380(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8c504);
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
  FUN_100c8c57c(uVar2,uVar4,0x11305f650,&PTR_PTR_1126adc00,0x11305f658,&UNK_10dcd4a38);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8c500);
      (*pcVar1)();
    }
    FUN_100c8c64c(0,uVar2,uVar3 + 0x20,param_4,0x11305f650,&PTR_PTR_1126adc00);
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



/* Entry: 100c8c3a4; end: 100c8c503;  */

ulong FUN_100c8c3a4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8c504);
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
  FUN_100c8c57c(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8c500);
      (*pcVar1)();
    }
    FUN_100c8c64c(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 100c8c504; end: 100c8c57b;  */

void FUN_100c8c504(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000100c8c60c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100c8c57c; end: 100c8c64b;  */

undefined *
FUN_100c8c57c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_100c8c504(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 100c8c64c; end: 100c8c767;  */

long FUN_100c8c64c(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8c764);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8c768);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000100c8c60c(0,param_5,param_6);
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
      func_0x000100c8c60c(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8c760);
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



/* Entry: 100c8c768; end: 100c8c7a7;  */

void FUN_100c8c768(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100c8c7a8; end: 100c8c7ef; -[SCAAppStartupCompleteV2 setFeatureSplits:] */

void FUN_100c8c7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c40794(param_3);
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff5778,4,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8c7f0; end: 100c8c9d3;  */

undefined * FUN_100c8c7f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar13 = *(long *)(param_1 + 0xf8);
  uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar13 + 0x40);
  func_0x000107c61434(lVar13);
  lVar14 = 0;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR_PTR_1126e2bb0;
  while( true ) {
    for (; PTR_PTR_1126e2bb0 = puVar6, uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar13 + 0x38) +
               (LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar14 << 6) * 0x10);
      uVar7 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c610f8();
      func_0x000107c61434(uVar2);
      func_0x000107c453e4();
      func_0x000107c55214();
      func_0x000107c5fadc(uVar7,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c5a494(puVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61174();
      puVar9 = puVar10;
      func_0x000107c61550();
      if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
         (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar8 = puVar10;
          }
          func_0x000107c60480(puVar8);
        }
        puVar9 = (undefined *)0x0;
        func_0x000100c8d268(0,puVar8 + 1,1,puVar10);
      }
      uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar11 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar3) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
        func_0x000100c8d268(puVar10,uVar3 + 1,1,puVar9);
        uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar3 + 1;
      *(undefined **)(uVar11 + uVar3 * 8 + 0x20) = puVar6;
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126e2bb0;
    }
    bVar5 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar5) break;
    if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
      func_0x000107c61574(lVar13);
      return puVar10;
    }
    uVar15 = ((ulong *)(lVar13 + 0x40))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100c8c9d4);
  (*pcVar4)();
}



/* Entry: 100c8c9d4; end: 100c8ca53; -[SCAFeatureAnnotation setId:] */

/* WARNING: Possible PIC construction at 0x000100c8ca3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8ca40) */

void FUN_100c8c9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c8ca54(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf6f8,2,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8ca54; end: 100c8ca73;  */

undefined * FUN_100c8ca54(ulong param_1)

{
  if (param_1 < 0xc) {
    return (&PTR_PTR_110d8d398)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c8ca74; end: 100c8cab3;  */

void FUN_100c8ca74(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = &stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))((long)puVar6 - extraout_x8,1,1,lVar1);
  (**(code **)(lVar8 + 0x10))
            (puVar6,unaff_x20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff)),lVar2);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_110744ad8;
  func_0x000107c613fc(&UNK_110744ad8,uVar9 + lVar7,uVar5 | 7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar9,puVar6,lVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000abba4(0,0,(long)puVar6 - extraout_x8,&UNK_10dcd5ee8,puVar3);
  func_0x000107c61574();
  return;
}



/* Entry: 100c8cab4; end: 100c8cc03;  */

void FUN_100c8cab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar1 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = &stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))((long)puVar5 - extraout_x8,1,1,lVar2);
  (**(code **)(lVar7 + 0x10))(puVar5,param_3,lVar1);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &UNK_110744ad8;
  func_0x000107c613fc(&UNK_110744ad8,uVar8 + lVar6,uVar4 | 7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar8,puVar5,lVar1);
  func_0x000107c6157c(param_2);
  func_0x0001000abba4(0,0,(long)puVar5 - extraout_x8,&UNK_10dcd5ee8,puVar3);
  func_0x000107c61574();
  return;
}



/* Entry: 100c8cc04; end: 100c8cc6f;  */

void FUN_100c8cc04(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c8cc70; end: 100c8ccbf;  */

void FUN_100c8cc70(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100c8ce40,0,0);
  return;
}



/* Entry: 100c8ccc0; end: 100c8cd4f;  */

void FUN_100c8ccc0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100c962e8;
  plVar3[5] = lVar2;
  plVar3[6] = unaff_x20 + (uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff));
  lVar2 = 0x112e00a18;
  func_0x0001000285a8(0x112e00a18,&UNK_10d9de5a0,uVar1);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[7] = uVar4;
  lVar2 = 0;
  func_0x000107c5eec8();
  plVar3[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[9] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[10] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100c8cddc,0,0);
  return;
}



/* Entry: 100c8cd50; end: 100c8ce3f;  */

void FUN_100c8cd50(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  lVar2 = 0x112e00a18;
  func_0x0001000285a8(0x112e00a18,&UNK_10d9de5a0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  lVar2 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100c8cddc,0,0);
  return;
}



/* Entry: 100c8ce40; end: 100c8ce57;  */

void FUN_100c8ce40(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000100c8ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100c8ce58; end: 100c8cf0f;  */

void FUN_100c8ce58(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100c8ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100c8cf10; end: 100c8cf13;  */

void FUN_100c8cf10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c8cf14; end: 100c8cf37;  */

void FUN_100c8cf14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c8cf38; end: 100c8cf3f;  */

void FUN_100c8cf38(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010007d980(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined1 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c8cf40; end: 100c8cf77;  */

void FUN_100c8cf40(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010007d980(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined1 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c8cf78; end: 100c8d027;  */

void FUN_100c8cf78(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 5) {
    uVar3 = 4;
  }
  if (param_3 + 5 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfa < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfb) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100c8cff8;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_100c8cff8:
      *param_1 = (char)param_2 + '\x05';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfb >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfb);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Entry: 100c8d028; end: 100c8d06f;  */

void FUN_100c8d028(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100c96360,*(undefined8 *)(lVar1 + 0x68),0);
  return;
}



/* Entry: 100c8d070; end: 100c8d24f;  */

void FUN_100c8d070(long param_1,char param_2)

{
  long lVar1;
  
  if (param_2 == '\x01') {
    lVar1 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_1;
    FUN_100c8a830();
    func_0x000107c61588(lVar1);
  }
  else if (param_2 == '\x02') {
    if (param_1 < 10) {
      if (param_1 - 5U < 3) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
      else if (param_1 == 0) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
      else {
        if (param_1 != 8) {
          return;
        }
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
    }
    else if (param_1 < 0xc) {
      if (param_1 == 10) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
      else {
        if (param_1 != 0xb) {
          return;
        }
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
    }
    else if (param_1 == 0xc) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
    else if (param_1 == 0xd) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
    else {
      if (param_1 != 0xe) {
        return;
      }
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
    func_0x000107c61538();
    FUN_100c8a830();
  }
  return;
}



/* Entry: 100c8d250; end: 100c8d28b; -[SCAFeatureAnnotation setValue:] */

void FUN_100c8d250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ddd998,3,param_3,0);
  return;
}



/* Entry: 100c8d28c; end: 100c8d2d3; -[SCAAppStartupCompleteV2 setFeatureAnnotations:] */

void FUN_100c8d28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c40794(param_3);
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff5758,3,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8d2d4; end: 100c8d4a7;  */

undefined * FUN_100c8d2d4(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0xb0,auStack_78,0,0);
  lVar10 = *(long *)(param_1 + 0xb0);
  uVar9 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar10 + 0x40);
  func_0x000107c61434(lVar10);
  lVar11 = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR_PTR_1126adbf8;
  while( true ) {
    for (; PTR_PTR_1126adbf8 = puVar4, uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c55214();
      func_0x000107c59dc4(puVar4);
      func_0x000107c61174();
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_100c8d59c(0,puVar5 + 1,1,puVar7);
      }
      uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar8 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_100c8d59c(puVar7,uVar1 + 1,1,puVar6);
        uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar8 + uVar1 * 8 + 0x20) = puVar4;
      func_0x000107c61170(puVar4);
      puVar4 = PTR_PTR_1126adbf8;
    }
    bVar3 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar3) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
      func_0x000107c61574(lVar10);
      return puVar7;
    }
    uVar12 = ((ulong *)(lVar10 + 0x40))[lVar11];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8d4a8);
  (*pcVar2)();
}



/* Entry: 100c8d4a8; end: 100c8d527; -[SCAPlatformPoint setId:] */

/* WARNING: Possible PIC construction at 0x000100c8d510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8d514) */

void FUN_100c8d4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c8d528(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf6f8,2,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8d528; end: 100c8d547;  */

undefined * FUN_100c8d528(ulong param_1)

{
  if (param_1 < 0x59) {
    return (&PTR_PTR_110d97690)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c8d548; end: 100c8d59b; -[SCAPlatformPoint setTimestampMicros:] */

void FUN_100c8d548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff58d8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8d59c; end: 100c8d5bf;  */

ulong FUN_100c8d59c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8c504);
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
  FUN_100c8c57c(uVar2,uVar4,0x11305f630,&PTR_PTR_1126adbf8,0x11305f638,&UNK_10dcd4a20);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8c500);
      (*pcVar1)();
    }
    FUN_100c8c64c(0,uVar2,uVar3 + 0x20,param_4,0x11305f630,&PTR_PTR_1126adbf8);
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



/* Entry: 100c8d5c0; end: 100c8d607; -[SCAAppStartupCompleteV2 setPlatformSplits:] */

void FUN_100c8d5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c40794(param_3);
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff57b8,6,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8d608; end: 100c8d80f; -[SCAEventBase setOsMinorVersion:] */

/* WARNING: Possible PIC construction at 0x000100c8d64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8d650) */

void FUN_100c8d608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4f904(param_1);
  func_0x000107c61180();
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8d810; end: 100c8d81b; -[SCAAppStartupCompleteV2 getEventName] */

undefined ** FUN_100c8d810(void)

{
  return &PTR____CFConstantStringClassReference_110ff5718;
}



/* Entry: 100c8d81c; end: 100c8dce3; -[SCAAppStartupCompleteV2 prepareDictionary:] */

long FUN_100c8d81c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    func_0x000107c61174(lVar1);
    lVar3 = lVar1;
    func_0x000107c4080c();
    if (lVar3 != 0) {
      lVar5 = *plStack_220;
      do {
        lVar6 = 0;
        do {
          if (*plStack_220 != lVar5) {
            func_0x000107c61128(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_228 + lVar6 * 8);
          func_0x000107c3e1c4(uVar4);
          func_0x000107c61180();
          func_0x000107c3d798(puVar2);
          func_0x000107c61170(uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x000107c4080c();
      } while (lVar3 != 0);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c56bd8(param_3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(lVar1);
  lVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    func_0x000107c61174(lVar1);
    lVar3 = lVar1;
    func_0x000107c4080c();
    if (lVar3 != 0) {
      lVar5 = *plStack_260;
      do {
        lVar6 = 0;
        do {
          if (*plStack_260 != lVar5) {
            func_0x000107c61128(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_268 + lVar6 * 8);
          func_0x000107c3e1c4(uVar4);
          func_0x000107c61180();
          func_0x000107c3d798(puVar2);
          func_0x000107c61170(uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x000107c4080c();
      } while (lVar3 != 0);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c56bd8(param_3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(lVar1);
  lVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    func_0x000107c61174(lVar1);
    lVar3 = lVar1;
    func_0x000107c4080c();
    if (lVar3 != 0) {
      lVar5 = *plStack_2a0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_2a0 != lVar5) {
            func_0x000107c61128(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_2a8 + lVar6 * 8);
          func_0x000107c3e1c4(uVar4);
          func_0x000107c61180();
          func_0x000107c3d798(puVar2);
          func_0x000107c61170(uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x000107c4080c();
      } while (lVar3 != 0);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c56bd8(param_3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(lVar1);
  lVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ff88(param_3);
    lVar3 = lVar1;
    func_0x000107c3e1c4(lVar1);
    func_0x000107c61180();
    func_0x000107c3d66c(param_3);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar1);
  lVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ff88(param_3);
    lVar3 = lVar1;
    func_0x000107c3e1c4(lVar1);
    func_0x000107c61180();
    func_0x000107c3d66c(param_3);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar1);
  lVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ff88(param_3);
    lVar3 = lVar1;
    func_0x000107c3e1c4(lVar1);
    func_0x000107c61180();
    func_0x000107c3d66c(param_3);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar1);
  puStack_2b8 = PTR_PTR_11270c990;
  uStack_2c0 = param_1;
  func_0x000107c61154(&uStack_2c0,PTR_s_prepareDictionary__11261fec0,param_3);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  func_0x000107c60e78();
  return 0;
}



/* Entry: 100c8dce4; end: 100c8dceb; -[SCAMapSerializable getEventName] */

undefined8 FUN_100c8dce4(void)

{
  return 0;
}



/* Entry: 100c8dcec; end: 100c8ddab; -[SCAIosPlatformInfo prepareDictionary:] */

void FUN_100c8dcec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ff88(param_3);
    lVar2 = lVar1;
    func_0x000107c3e1c4(lVar1);
    func_0x000107c61180();
    func_0x000107c3d66c(param_3);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
  puStack_38 = PTR_PTR_11270c998;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c8ddac; end: 100c8df53; -[SCAFeatureSessionEvent prepareDictionary:] */

void FUN_100c8ddac(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  double dVar15;
  undefined8 uStack_220;
  undefined1 auStack_218 [24];
  long lStack_200;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined8 uStack_1c0;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar10 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar10 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    func_0x000107c61174(lVar10);
    lVar4 = lVar10;
    func_0x000107c4080c();
    if (lVar4 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar13 = 0;
        do {
          if (*plStack_120 != lVar12) {
            func_0x000107c61128(lVar10);
          }
          uVar5 = *(undefined8 *)(lStack_128 + lVar13 * 8);
          func_0x000107c3e1c4();
          func_0x000107c61180();
          func_0x000107c3d798(puVar3);
          func_0x000107c61170(uVar5);
          lVar13 = lVar13 + 1;
        } while (lVar4 != lVar13);
        lVar4 = lVar10;
        func_0x000107c4080c();
      } while (lVar4 != 0);
    }
    func_0x000107c61170(lVar10);
    func_0x000107c56bd8(param_3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(lVar10);
  puStack_138 = PTR_PTR_11270d368;
  puVar3 = PTR_s_prepareDictionary__11261fec0;
  lStack_140 = param_1;
  func_0x000107c61154(&lStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  bVar1 = *(byte *)(param_3 + 0x60);
  uVar11 = (ulong)bVar1;
  if (bVar1 - 0xfd < 2) {
    uStack_220 = *(undefined8 *)(param_1 + 0x18);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x0001000e48c0(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar3);
      uVar11 = (ulong)*(byte *)(param_3 + 0x60);
    }
    lVar10 = 2 - (ulong)(byte)((char)uVar11 + 3);
    if ((uint)uVar11 < 0xfd) {
      lVar10 = 3;
    }
    FUN_100c8bfd4(lVar10);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    FUN_100c8bf04(uVar6);
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001005a8a60(uVar7);
    func_0x000107c61180();
    dVar15 = *(double *)(param_3 + 0x40);
    if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e818);
      (*pcVar2)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e81c);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e820);
      (*pcVar2)();
    }
    uVar8 = uVar5;
    func_0x000107c2bdbc(uStack_220,uVar5,lVar10,uVar6,uVar7,(long)dVar15);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x0001000e48c0(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar8);
    }
    lVar10 = 2 - (ulong)(byte)(*(byte *)(param_3 + 0x60) + 3);
    if (*(byte *)(param_3 + 0x60) < 0xfd) {
      lVar10 = 3;
    }
    FUN_100c8bfd4(lVar10);
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    FUN_100c8bf04(uVar7);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001005a8a60(uVar8);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c2bdb8(uStack_220,uVar5,lVar10,uVar7,uVar8,1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x0001000e48c0(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    FUN_100c8bf04(uVar6);
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001005a8a60(uVar7);
    func_0x000107c61180();
    dVar15 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x48));
    dVar15 = dVar15 / 1000.0;
    if ((dVar15 == INFINITY) || (NAN(dVar15))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e824);
      (*pcVar2)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e828);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e82c);
      (*pcVar2)();
    }
    uVar8 = uVar5;
    FUN_100c8ede0(uStack_220,uVar5,uVar6,uVar7,(long)dVar15);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x0001000e48c0(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar8);
    }
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    FUN_100c8bf04(uVar7);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001005a8a60(uVar8);
    func_0x000107c61180();
    dVar15 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x50));
    dVar15 = dVar15 / 1000.0;
    if ((dVar15 == INFINITY) || (NAN(dVar15))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e830);
      (*pcVar2)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e834);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e314);
      (*pcVar2)();
    }
  }
  else {
    if (bVar1 != 0xff) {
      uVar5 = *(undefined8 *)(param_3 + 0x58);
      uStack_220 = *(undefined8 *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x28) == '\x01') {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_3 + 0x20);
        func_0x0001000e48c0(uVar6);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar3);
      }
      func_0x0001040b2854(uVar5,uVar11);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar11);
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      FUN_100c8bf04(uVar7);
      func_0x000107c61180();
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      func_0x0001005a8a60(uVar8);
      func_0x000107c61180();
      func_0x000107c2bdc0(uStack_220,uVar6,uVar5,uVar7,uVar8,1);
      func_0x000107c61170(uVar6);
      goto LAB_100c8e670;
    }
    uStack_220 = *(undefined8 *)(param_1 + 0x18);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x0001000e48c0(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar3);
    }
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    FUN_100c8bf04(uVar6);
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001005a8a60(uVar7);
    func_0x000107c61180();
    dVar15 = *(double *)(param_3 + 0x40);
    if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e838);
      (*pcVar2)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e83c);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e840);
      (*pcVar2)();
    }
    uVar8 = uVar5;
    FUN_100c8e858(uStack_220,uVar5,uVar6,uVar7,(long)dVar15);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x0001000e48c0(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar8);
    }
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    FUN_100c8bf04(uVar7);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001005a8a60(uVar8);
    func_0x000107c61180();
    uVar6 = uVar5;
    FUN_100c8eb20(uStack_220,uVar5,uVar7,uVar8,1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x0001000e48c0(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    FUN_100c8bf04(uVar6);
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001005a8a60(uVar7);
    func_0x000107c61180();
    dVar15 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x48));
    dVar15 = dVar15 / 1000.0;
    if ((dVar15 == INFINITY) || (NAN(dVar15))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e844);
      (*pcVar2)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e848);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e84c);
      (*pcVar2)();
    }
    uVar8 = uVar5;
    FUN_100c8ede0(uStack_220,uVar5,uVar6,uVar7,(long)dVar15);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    if (*(char *)(param_3 + 0x28) == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x0001000e48c0(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar8);
    }
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    FUN_100c8bf04(uVar7);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001005a8a60(uVar8);
    func_0x000107c61180();
    dVar15 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x50));
    dVar15 = dVar15 / 1000.0;
    if ((dVar15 == INFINITY) || (NAN(dVar15))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e850);
      (*pcVar2)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e854);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e858);
      (*pcVar2)();
    }
  }
  FUN_100c8f0a0(uStack_220,uVar5,uVar7,uVar8,(long)dVar15);
LAB_100c8e670:
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61428(param_3 + 200,auStack_1f0,0,0);
  FUN_100c8f360(param_3 + 200,auStack_218);
  if (lStack_200 == 0) {
    func_0x000100c8f3b0(auStack_218);
  }
  else {
    func_0x0001040b5594(auStack_218,auStack_1d8);
    puVar9 = auStack_1d8;
    func_0x0001000a8868(puVar9,uStack_1c0);
    func_0x0001040b3324();
    lVar10 = *(long *)(puVar9 + 0x10);
    if (lVar10 != 0) {
      plVar14 = (long *)(puVar9 + 0x30);
      do {
        lVar4 = plVar14[-2];
        lVar12 = plVar14[-1];
        uVar5 = *(undefined8 *)(param_3 + 0x18);
        lVar13 = *plVar14;
        func_0x000107c61434(lVar12);
        FUN_100c8bf04(uVar5);
        func_0x000107c61180();
        uVar6 = *(undefined8 *)(param_3 + 0x10);
        func_0x0001005a8a60(uVar6);
        func_0x000107c61180();
        func_0x000107c61434(lVar12);
        func_0x000107c5fadc(lVar4,lVar12);
        func_0x000107c61430(lVar12,2);
        dVar15 = (double)lVar13 / 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e80c);
          (*pcVar2)();
        }
        if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e810);
          (*pcVar2)();
        }
        if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8e814);
          (*pcVar2)();
        }
        func_0x000107c2bdc4(uStack_220,uVar5,uVar6,lVar4,(long)dVar15);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(lVar4);
        lVar10 = lVar10 + -1;
        plVar14 = plVar14 + 3;
      } while (lVar10 != 0);
    }
    func_0x000107c6142c(puVar9);
    func_0x0001000834e4(auStack_1d8);
  }
  return;
}



/* Entry: 100c8df54; end: 100c8e857;  */

void FUN_100c8df54(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  double dVar13;
  long lVar14;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  
  bVar2 = *(byte *)(param_1 + 0x60);
  uVar11 = (ulong)bVar2;
  if (bVar2 - 0xfd < 2) {
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x18);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000e48c0(uVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      uVar11 = (ulong)*(byte *)(param_1 + 0x60);
    }
    lVar9 = 2 - (ulong)(byte)((char)uVar11 + 3);
    if ((uint)uVar11 < 0xfd) {
      lVar9 = 3;
    }
    FUN_100c8bfd4(lVar9);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    FUN_100c8bf04(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005a8a60(uVar5);
    func_0x000107c61180();
    dVar13 = *(double *)(param_1 + 0x40);
    if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e818);
      (*pcVar3)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e81c);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e820);
      (*pcVar3)();
    }
    uVar6 = uVar10;
    func_0x000107c2bdbc(uStack_e0,uVar10,lVar9,uVar4,uVar5,(long)dVar13);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000e48c0(uVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    lVar9 = 2 - (ulong)(byte)(*(byte *)(param_1 + 0x60) + 3);
    if (*(byte *)(param_1 + 0x60) < 0xfd) {
      lVar9 = 3;
    }
    FUN_100c8bfd4(lVar9);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    FUN_100c8bf04(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005a8a60(uVar6);
    func_0x000107c61180();
    uVar4 = uVar10;
    func_0x000107c2bdb8(uStack_e0,uVar10,lVar9,uVar5,uVar6,1);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000e48c0(uVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    FUN_100c8bf04(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005a8a60(uVar5);
    func_0x000107c61180();
    dVar13 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
    dVar13 = dVar13 / 1000.0;
    if ((dVar13 == INFINITY) || (NAN(dVar13))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e824);
      (*pcVar3)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e828);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e82c);
      (*pcVar3)();
    }
    uVar6 = uVar10;
    FUN_100c8ede0(uStack_e0,uVar10,uVar4,uVar5,(long)dVar13);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000e48c0(uVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    FUN_100c8bf04(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005a8a60(uVar6);
    func_0x000107c61180();
    dVar13 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x50));
    dVar13 = dVar13 / 1000.0;
    if ((dVar13 == INFINITY) || (NAN(dVar13))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e830);
      (*pcVar3)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e834);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e314);
      (*pcVar3)();
    }
  }
  else {
    if (bVar2 != 0xff) {
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      uStack_e0 = *(undefined8 *)(unaff_x20 + 0x18);
      if (*(char *)(param_1 + 0x28) == '\x01') {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x0001000e48c0(uVar4);
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x0001040b2854(uVar10,uVar11);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar11);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      FUN_100c8bf04(uVar5);
      func_0x000107c61180();
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x0001005a8a60(uVar6);
      func_0x000107c61180();
      func_0x000107c2bdc0(uStack_e0,uVar4,uVar10,uVar5,uVar6,1);
      func_0x000107c61170(uVar4);
      goto LAB_100c8e670;
    }
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x18);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000e48c0(uVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    FUN_100c8bf04(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005a8a60(uVar5);
    func_0x000107c61180();
    dVar13 = *(double *)(param_1 + 0x40);
    if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e838);
      (*pcVar3)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e83c);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e840);
      (*pcVar3)();
    }
    uVar6 = uVar10;
    FUN_100c8e858(uStack_e0,uVar10,uVar4,uVar5,(long)dVar13);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000e48c0(uVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    FUN_100c8bf04(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005a8a60(uVar6);
    func_0x000107c61180();
    uVar4 = uVar10;
    FUN_100c8eb20(uStack_e0,uVar10,uVar5,uVar6,1);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000e48c0(uVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    FUN_100c8bf04(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005a8a60(uVar5);
    func_0x000107c61180();
    dVar13 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
    dVar13 = dVar13 / 1000.0;
    if ((dVar13 == INFINITY) || (NAN(dVar13))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e844);
      (*pcVar3)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e848);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e84c);
      (*pcVar3)();
    }
    uVar6 = uVar10;
    FUN_100c8ede0(uStack_e0,uVar10,uVar4,uVar5,(long)dVar13);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000e48c0(uVar10);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    FUN_100c8bf04(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001005a8a60(uVar6);
    func_0x000107c61180();
    dVar13 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x50));
    dVar13 = dVar13 / 1000.0;
    if ((dVar13 == INFINITY) || (NAN(dVar13))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e850);
      (*pcVar3)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e854);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e858);
      (*pcVar3)();
    }
  }
  FUN_100c8f0a0(uStack_e0,uVar10,uVar5,uVar6,(long)dVar13);
LAB_100c8e670:
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61428(param_1 + 200,auStack_b0,0,0);
  FUN_100c8f360(param_1 + 200,auStack_d8);
  if (lStack_c0 == 0) {
    func_0x000100c8f3b0(auStack_d8);
  }
  else {
    func_0x0001040b5594(auStack_d8,auStack_98);
    puVar7 = auStack_98;
    func_0x0001000a8868(puVar7,uStack_80);
    func_0x0001040b3324();
    lVar9 = *(long *)(puVar7 + 0x10);
    if (lVar9 != 0) {
      plVar12 = (long *)(puVar7 + 0x30);
      do {
        lVar8 = plVar12[-2];
        lVar1 = plVar12[-1];
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        lVar14 = *plVar12;
        func_0x000107c61434(lVar1);
        FUN_100c8bf04(uVar10);
        func_0x000107c61180();
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        func_0x0001005a8a60(uVar4);
        func_0x000107c61180();
        func_0x000107c61434(lVar1);
        func_0x000107c5fadc(lVar8,lVar1);
        func_0x000107c61430(lVar1,2);
        dVar13 = (double)lVar14 / 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e80c);
          (*pcVar3)();
        }
        if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e810);
          (*pcVar3)();
        }
        if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8e814);
          (*pcVar3)();
        }
        func_0x000107c2bdc4(uStack_e0,uVar10,uVar4,lVar8,(long)dVar13);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(lVar8);
        lVar9 = lVar9 + -1;
        plVar12 = plVar12 + 3;
      } while (lVar9 != 0);
    }
    func_0x000107c6142c(puVar7);
    func_0x0001000834e4(auStack_98);
  }
  return;
}



/* Entry: 100c8e858; end: 100c8eb17;  */

/* WARNING: Removing unreachable block (ram,0x000100c8eae0) */

char * FUN_100c8e858(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_3);
      pcVar1 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_4);
      pcVar1 = param_4;
      func_0x000107c3ac4c(param_4);
    }
    func_0x000107c61170(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110cb79c8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar2 = 0;
    do {
      if ((&cStack_59)[lVar2] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar2 != -0x48);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  pcVar1 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8(pcVar1);
    return (char *)0x0;
  }
  return pcVar1;
}



/* Entry: 100c8eb18; end: 100c8eb1f; -[SCAAppStartupCompleteV2 getEventQoS] */

undefined8 FUN_100c8eb18(void)

{
  return 0;
}



/* Entry: 100c8eb20; end: 100c8eddf;  */

/* WARNING: Removing unreachable block (ram,0x000100c8f068) */
/* WARNING: Removing unreachable block (ram,0x000100c8eda8) */
/* WARNING: Removing unreachable block (ram,0x000100c8f328) */

char * FUN_100c8eb20(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x24;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar8 = param_4;
  pcVar3 = param_5;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_3);
      pcVar1 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_4);
      pcVar1 = param_4;
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar4 = pcVar2;
    pcVar8 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  pcVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  pcVar7 = acStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar4;
  pcVar9 = pcVar8;
  pcVar10 = pcVar3;
  func_0x000107c61174(pcVar1);
  func_0x000107c61174(pcVar4);
  func_0x000107c61174(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    func_0x000107c61174(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      func_0x000107c61178(pcVar1);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    func_0x000107c61174(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      func_0x000107c61178(pcVar4);
      pcVar2 = pcVar4;
      func_0x000107c3ac4c(pcVar4);
    }
    func_0x000107c61170(pcVar4);
    func_0x00010002b838(auStack_148,pcVar2);
    func_0x000107c61174(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      func_0x000107c61178(pcVar8);
      pcVar2 = pcVar8;
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(pcVar8);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    pcVar6 = pcVar7;
    pcVar9 = pcVar3;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar11 != -0x48);
  }
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(pcVar4);
  pcVar3 = pcVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pcVar3;
  }
  func_0x000107c60e78();
  func_0x000107c61170(pcVar8);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_160);
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(pcVar4);
  func_0x000107c61170(pcVar1);
  func_0x000107c60bd8();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  func_0x000107c61174(pcVar5);
  func_0x000107c61174(pcVar6);
  func_0x000107c61174(pcVar9);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    func_0x000107c61174(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      func_0x000107c61178(pcVar5);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(pcVar5);
    func_0x00010002b838(auStack_220,pcVar1);
    func_0x000107c61174(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(pcVar6);
      pcVar1 = pcVar6;
      func_0x000107c3ac4c(pcVar6);
    }
    func_0x000107c61170(pcVar6);
    func_0x00010002b838(auStack_208,pcVar1);
    func_0x000107c61174(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(pcVar9);
      pcVar1 = pcVar9;
      func_0x000107c3ac4c(pcVar9);
    }
    func_0x000107c61170(pcVar9);
    func_0x00010002b838(auStack_1f0,pcVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110cb7b58,&uStack_240,pcVar10);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar11 = 0;
    do {
      if ((&cStack_1d9)[lVar11] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_1f0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = (char *)&uStack_240;
    } while (lVar11 != -0x48);
  }
  func_0x000107c61170(pcVar9);
  func_0x000107c61170(pcVar6);
  pcVar4 = pcVar5;
  func_0x000107c61170(pcVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    func_0x000107c60e78();
    func_0x000107c61170(pcVar9);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_220);
    func_0x000107c61170(pcVar9);
    func_0x000107c61170(pcVar6);
    func_0x000107c61170(pcVar5);
    func_0x000107c60bd8(pcVar4);
    lVar11 = 0x11305f7b0;
    func_0x0001000285a8(0x11305f7b0,&UNK_10dcd4c80);
    (**(code **)(*(long *)(lVar11 + -8) + 0x10))(pcVar1,pcVar4,lVar11);
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 100c8ede0; end: 100c8f09f;  */

/* WARNING: Removing unreachable block (ram,0x000100c8f068) */
/* WARNING: Removing unreachable block (ram,0x000100c8f328) */

char * FUN_100c8ede0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  char *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar6 = param_4;
  pcVar3 = param_5;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_3);
      pcVar1 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_4);
      pcVar1 = param_4;
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar7 = 0;
    pcVar5 = pcVar2;
    pcVar6 = param_5;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar7 != -0x48);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  pcVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  func_0x000107c61174(pcVar1);
  func_0x000107c61174(pcVar5);
  func_0x000107c61174(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    func_0x000107c61174(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      func_0x000107c61178(pcVar1);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    func_0x000107c61174(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      func_0x000107c61178(pcVar5);
      pcVar2 = pcVar5;
      func_0x000107c3ac4c(pcVar5);
    }
    func_0x000107c61170(pcVar5);
    func_0x00010002b838(auStack_148,pcVar2);
    func_0x000107c61174(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      func_0x000107c61178(pcVar6);
      pcVar2 = pcVar6;
      func_0x000107c3ac4c(pcVar6);
    }
    func_0x000107c61170(pcVar6);
    func_0x00010002b838(auStack_130,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar4 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110cb7b58,&uStack_180,pcVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar7 = 0;
    do {
      if ((&cStack_119)[lVar7] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_130 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = (char *)&uStack_180;
    } while (lVar7 != -0x48);
  }
  func_0x000107c61170(pcVar6);
  func_0x000107c61170(pcVar5);
  pcVar3 = pcVar1;
  func_0x000107c61170(pcVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    func_0x000107c60e78();
    func_0x000107c61170(pcVar6);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_160);
    func_0x000107c61170(pcVar6);
    func_0x000107c61170(pcVar5);
    func_0x000107c61170(pcVar1);
    func_0x000107c60bd8(pcVar3);
    lVar7 = 0x11305f7b0;
    func_0x0001000285a8(0x11305f7b0,&UNK_10dcd4c80);
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(pcVar4,pcVar3,lVar7);
    return pcVar4;
  }
  return pcVar3;
}



/* Entry: 100c8f0a0; end: 100c8f35f;  */

/* WARNING: Removing unreachable block (ram,0x000100c8f328) */

char * FUN_100c8f0a0(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_3);
      pcVar1 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_4);
      pcVar1 = param_4;
      func_0x000107c3ac4c(param_4);
    }
    func_0x000107c61170(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110cb7b58,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  pcVar2 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8(pcVar2);
    lVar3 = 0x11305f7b0;
    func_0x0001000285a8(0x11305f7b0,&UNK_10dcd4c80);
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(pcVar1,pcVar2,lVar3);
    return pcVar1;
  }
  return pcVar2;
}



/* Entry: 100c8f360; end: 100c8f3f7;  */

undefined8 FUN_100c8f360(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11305f7b0;
  func_0x0001000285a8(0x11305f7b0,&UNK_10dcd4c80);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100c8f3f8; end: 100c8f3ff;  */

/* WARNING: Possible PIC construction at 0x000100c8f4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8f4f4) */

void FUN_100c8f3f8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_100c8f400();
  lVar4 = lVar3;
  func_0x000107c613fc();
  uVar5 = 0;
  FUN_100c8f50c();
  func_0x000107c613fc();
  uVar6 = 0;
  func_0x000100c8f52c(0);
  func_0x000107c613fc();
  FUN_100c8f56c(uVar5,FUN_100c9507c,0,uVar6);
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  lVar7 = 0;
  FUN_100c8f6c4();
  func_0x000107c613fc();
  puVar8 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar7 + 0x10) = puVar8;
  *(undefined1 *)(lVar7 + 0x18) = 0;
  *(long *)(lVar4 + 0x28) = lVar7;
  *(long *)(lVar4 + 0x10) = lVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1103bc9f8;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 100c8f400; end: 100c8f41f;  */

void FUN_100c8f400(void)

{
  func_0x000107c61168(&PTR_PTR_112d9fef8);
  return;
}



/* Entry: 100c8f420; end: 100c8f50b;  */

/* WARNING: Possible PIC construction at 0x000100c8f4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8f4f4) */

void FUN_100c8f420(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_2;
  FUN_100c8f400();
  lVar2 = lVar1;
  func_0x000107c613fc();
  uVar3 = 0;
  FUN_100c8f50c();
  func_0x000107c613fc();
  uVar4 = 0;
  func_0x000100c8f52c(0);
  func_0x000107c613fc();
  FUN_100c8f56c(uVar3,FUN_100c9507c,0,uVar4);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  lVar5 = 0;
  FUN_100c8f6c4();
  func_0x000107c613fc();
  puVar6 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x10) = puVar6;
  *(undefined1 *)(lVar5 + 0x18) = 0;
  *(long *)(lVar2 + 0x28) = lVar5;
  *(long *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1103bc9f8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100c8f50c; end: 100c8f56b;  */

void FUN_100c8f50c(void)

{
  func_0x000107c61168(&PTR_PTR_112da0118);
  return;
}



/* Entry: 100c8f56c; end: 100c8f5e3;  */

void FUN_100c8f56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = param_1;
  func_0x000100c8f54c();
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100c8f5e4();
  *(undefined **)(lVar1 + 0x18) = puVar2;
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 100c8f5e4; end: 100c8f6c3;  */

undefined * FUN_100c8f5e4(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    uVar8 = 0;
    func_0x0001000285a8(0x112da00d0);
    puVar6 = puVar10;
    func_0x000107c60498();
    puVar11 = (undefined1 *)(param_1 + 0x30);
    do {
      uVar2 = *(ulong *)(puVar11 + -0x10);
      uVar3 = *(undefined8 *)(puVar11 + -8);
      uVar4 = *puVar11;
      uVar7 = uVar2;
      func_0x0001000a7158();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100c8f6c0);
        (*pcVar5)();
      }
      uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar9 + 0x40) = *(ulong *)(puVar6 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
      *(ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 8) = uVar2;
      puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x10);
      *puVar1 = uVar3;
      *(undefined1 *)(puVar1 + 1) = uVar4;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100c8f6c4);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar10 = puVar10 + -1;
      puVar11 = puVar11 + 0x18;
    } while (puVar10 != (undefined *)0x0);
  }
  return puVar6;
}



/* Entry: 100c8f6c4; end: 100c8f70f;  */

void FUN_100c8f6c4(void)

{
  func_0x000107c61168(&PTR_PTR_112d9fe50);
  return;
}



/* Entry: 100c8f710; end: 100c8f7cb;  */

void FUN_100c8f710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000100083b20(&uStack_58);
  func_0x000107c4b940(*(undefined8 *)(lVar2 + 0x10));
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    func_0x000107c56a70(uVar1);
    *(undefined1 *)(lVar2 + 0x18) = 1;
  }
  func_0x000107c5d278(*(undefined8 *)(lVar2 + 0x10));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_58);
  FUN_100c8f81c(param_1,param_2,param_3);
  return;
}



/* Entry: 100c8f7cc; end: 100c8f7eb;  */

void FUN_100c8f7cc(void)

{
  FUN_100c8f710();
  return;
}



/* Entry: 100c8f7ec; end: 100c8f81b; -[SCGrapheneUploader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c8f804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8f808) */

void FUN_100c8f7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c8f81c; end: 100c8feaf;  */

/* WARNING: Possible PIC construction at 0x000100c8fdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c8fb98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8fb9c) */
/* WARNING: Removing unreachable block (ram,0x000100c8fdf8) */

void FUN_100c8f81c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  uVar11 = 0;
  lVar3 = param_2;
  (**(code **)(param_3 + 8))(param_2,param_3);
  lVar4 = param_2;
  (**(code **)(param_3 + 0x18))(param_2,param_3);
  if (lVar4 <= (long)-(ulong)(*(char *)(lVar3 + 0x10) != '\0')) goto code_r0x000107c61574;
  lVar12 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4b940(*(undefined8 *)(lVar12 + 0x10));
  func_0x000107c61428(lVar12 + 0x18,&lStack_90,0x20,0);
  lVar9 = *(long *)(lVar12 + 0x18);
  if ((*(long *)(lVar9 + 0x10) == 0) || (lVar5 = lVar3, func_0x0001000a7158(), (uVar11 & 1) == 0)) {
    func_0x000107c614a8(&lStack_90);
    uVar11 = *(ulong *)(lVar3 + 0x18);
    FUN_100c8ffa8(uVar11,*(undefined8 *)(lVar3 + 0x20),*(undefined1 *)(lVar3 + 0x28),
                  0x6f69746974726170,0xe90000000000006e);
    if ((uVar11 & 1) != 0) {
      uVar11 = *(ulong *)(lVar3 + 0x30);
      FUN_100c8ffa8(uVar11,*(undefined8 *)(lVar3 + 0x38),*(undefined1 *)(lVar3 + 0x40),
                    0x6e2063697274656d,0xeb00000000656d61);
      if ((uVar11 & 1) != 0) {
        lVar9 = *(long *)(lVar3 + 0x48);
        uVar11 = *(ulong *)(lVar9 + 0x10);
        if (uVar11 < 7) {
          if (uVar11 == 0) {
LAB_100c8fa4c:
            if (lRam0000000113442350 != -1) {
              func_0x000107c61568(0x113442350,FUN_100c9048c);
            }
            uVar10 = *(ulong *)(lVar3 + 0x50);
            uVar11 = uVar10;
            FUN_100c90598(uVar10,uRam0000000113442358);
            if ((uVar11 & 1) == 0) {
              lStack_80 = -0x2fffffffffffffb3;
              uStack_78 = 0x800000010ef81490;
              func_0x000103c7cd0c(0x10145383c,&lStack_90,
                                  "Platform/Private/Implementation/GrapheneServiceClientImplementation/GrapheneServiceClientImplementation.swift"
                                  ,0x6d,2,0xa9);
            }
            else if (uVar10 != 0) {
              lVar9 = *(long *)(lVar3 + 0x18);
              if (*(char *)(lVar3 + 0x10) == '\0') {
                FUN_100c932e0(lVar9,*(undefined8 *)(lVar3 + 0x20),*(undefined1 *)(lVar3 + 0x28),
                              *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38),
                              *(undefined1 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x48),
                              *(undefined8 *)(lVar3 + 0x50));
              }
              else if (*(char *)(lVar3 + 0x10) == '\x01') {
                FUN_10145385c();
              }
              else {
                func_0x00010145388c();
              }
              func_0x000107c61428(lVar12 + 0x18,&lStack_90,0x21,0);
              uVar7 = *(undefined8 *)(lVar12 + 0x18);
              func_0x000107c61558(uVar7);
              uStack_68 = *(undefined8 *)(lVar12 + 0x18);
              *(undefined8 *)(lVar12 + 0x18) = 0x8000000000000000;
              FUN_100c940b0(lVar9,lVar9 == 0,lVar3,uVar7);
              *(undefined8 *)(lVar12 + 0x18) = uStack_68;
              func_0x000107c614a8(&lStack_90);
              func_0x000107c5d278(*(undefined8 *)(lVar12 + 0x10));
              if (lVar9 == 0) goto code_r0x000107c61574;
              goto LAB_100c8f8f0;
            }
          }
          else {
            if (*(long *)(lVar9 + 0x10) == 0) {
LAB_100c8fe94:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8fe98);
              (*pcVar2)();
            }
            uVar10 = *(ulong *)(lVar9 + 0x20);
            FUN_100c8ffa8(uVar10,*(undefined8 *)(lVar9 + 0x28),*(undefined1 *)(lVar9 + 0x30),
                          0x6f69736e656d6964,0xee00656d616e206e);
            if ((uVar10 & 1) != 0) {
              if (uVar11 == 1) goto LAB_100c8fa4c;
              if (*(ulong *)(lVar9 + 0x10) < 2) goto LAB_100c8fe94;
              uVar10 = *(ulong *)(lVar9 + 0x38);
              FUN_100c8ffa8(uVar10,*(undefined8 *)(lVar9 + 0x40),*(undefined1 *)(lVar9 + 0x48),
                            0x6f69736e656d6964,0xee00656d616e206e);
              if ((uVar10 & 1) != 0) {
                if (uVar11 == 2) goto LAB_100c8fa4c;
                if (*(ulong *)(lVar9 + 0x10) < 3) goto LAB_100c8fe94;
                uVar10 = *(ulong *)(lVar9 + 0x50);
                FUN_100c8ffa8(uVar10,*(undefined8 *)(lVar9 + 0x58),*(undefined1 *)(lVar9 + 0x60),
                              0x6f69736e656d6964,0xee00656d616e206e);
                if ((uVar10 & 1) != 0) {
                  if (uVar11 == 3) goto LAB_100c8fa4c;
                  if (*(ulong *)(lVar9 + 0x10) < 4) goto LAB_100c8fe94;
                  uVar10 = *(ulong *)(lVar9 + 0x68);
                  FUN_100c8ffa8(uVar10,*(undefined8 *)(lVar9 + 0x70),*(undefined1 *)(lVar9 + 0x78),
                                0x6f69736e656d6964,0xee00656d616e206e);
                  if ((uVar10 & 1) != 0) {
                    if (uVar11 == 4) goto LAB_100c8fa4c;
                    if (*(ulong *)(lVar9 + 0x10) < 5) goto LAB_100c8fe94;
                    uVar10 = *(ulong *)(lVar9 + 0x80);
                    FUN_100c8ffa8(uVar10,*(undefined8 *)(lVar9 + 0x88),*(undefined1 *)(lVar9 + 0x90)
                                  ,0x6f69736e656d6964,0xee00656d616e206e);
                    if ((uVar10 & 1) != 0) {
                      if (uVar11 == 5) goto LAB_100c8fa4c;
                      if (*(ulong *)(lVar9 + 0x10) < 6) goto LAB_100c8fe94;
                      uVar10 = *(ulong *)(lVar9 + 0x98);
                      FUN_100c8ffa8(uVar10,*(undefined8 *)(lVar9 + 0xa0),
                                    *(undefined1 *)(lVar9 + 0xa8),0x6f69736e656d6964,
                                    0xee00656d616e206e);
                      if ((uVar10 & 1) != 0) {
                        if (uVar11 == 6) goto LAB_100c8fa4c;
                        if (*(ulong *)(lVar9 + 0x10) < 7) goto LAB_100c8fe94;
                        FUN_100c8ffa8(*(undefined8 *)(lVar9 + 0xb0),*(undefined8 *)(lVar9 + 0xb8),
                                      *(undefined1 *)(lVar9 + 0xc0),0x6f69736e656d6964,
                                      0xee00656d616e206e);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          lStack_90 = 0;
          uStack_88 = 0xe000000000000000;
          func_0x000107c602fc(0x22);
          func_0x000107c6142c(uStack_88);
          lStack_90 = -0x2fffffffffffffe0;
          uStack_88 = 0x800000010ef81460;
          uStack_68 = 6;
          puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar8);
          uVar7 = uStack_88;
          lStack_80 = lStack_90;
          uStack_78 = uStack_88;
          func_0x000103c7cd0c(0x101453838,&lStack_90,
                              "Platform/Private/Implementation/GrapheneServiceClientImplementation/GrapheneServiceClientImplementation.swift"
                              ,0x6d,2,0xa9);
          func_0x000107c6142c(uVar7);
        }
      }
    }
    func_0x000107c61428(lVar12 + 0x18,&lStack_90,0x21,0);
    uVar7 = *(undefined8 *)(lVar12 + 0x18);
    func_0x000107c61558(uVar7);
    uStack_68 = *(undefined8 *)(lVar12 + 0x18);
    *(undefined8 *)(lVar12 + 0x18) = 0x8000000000000000;
    FUN_100c940b0(0,1,lVar3,uVar7);
    *(undefined8 *)(lVar12 + 0x18) = uStack_68;
    func_0x000107c614a8(&lStack_90);
    func_0x000107c5d278(*(undefined8 *)(lVar12 + 0x10));
  }
  else {
    plVar1 = (long *)(*(long *)(lVar9 + 0x38) + lVar5 * 0x10);
    lVar9 = *plVar1;
    lVar5 = plVar1[1];
    func_0x000107c614a8(&lStack_90);
    func_0x000107c5d278(*(undefined8 *)(lVar12 + 0x10));
    if ((char)lVar5 == '\x01') goto code_r0x000107c61574;
LAB_100c8f8f0:
    (**(code **)(param_3 + 0x10))(param_2,param_3);
    if (*(long *)(*(long *)(lVar3 + 0x48) + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar7 = 0x112d38270;
      lStack_90 = param_2;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar6 = uVar7;
      FUN_100c94510();
      FUN_100c946dc(lVar9,&lStack_90,lVar4,uVar7,uVar6);
      func_0x000107c6142c(param_2);
      (**(code **)(unaff_x20 + 0x20))();
    }
    else {
      lStack_80 = -0x2fffffffffffffd7;
      uStack_78 = 0x800000010ef81390;
      func_0x000103c7cd0c(FUN_1014537a0,&lStack_90,
                          "Platform/Private/Implementation/GrapheneServiceClientImplementation/GrapheneServiceClientImplementation.swift"
                          ,0x6d,2,0xa9);
    }
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 100c8feb0; end: 100c8feef;  */

void FUN_100c8feb0(void)

{
  if (lRam000000011305f668 != -1) {
    func_0x000107c61568(0x11305f668,FUN_100c8fef0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uRam000000011305f670);
  return;
}



/* Entry: 100c8fef0; end: 100c8ff7f;  */

void FUN_100c8fef0(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  lVar2 = 0;
  FUN_100c8ff80();
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(char **)(lVar2 + 0x18) = "ghost_to_signal";
  *(undefined8 *)(lVar2 + 0x20) = 0xf;
  *(undefined1 *)(lVar2 + 0x28) = 2;
  *(char **)(lVar2 + 0x30) = "launch_context_signals";
  *(undefined8 *)(lVar2 + 0x38) = 0x16;
  *(undefined1 *)(lVar2 + 0x40) = 2;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = 10000;
  lRam000000011305f670 = lVar2;
  return;
}



/* Entry: 100c8ff80; end: 100c8ff9f;  */

void FUN_100c8ff80(void)

{
  func_0x000107c61168(&PTR_PTR_1130662c8);
  return;
}



/* Entry: 100c8ffa0; end: 100c8ffa7;  */

undefined8 FUN_100c8ffa0(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100c8ffa8; end: 100c90233;  */

undefined8
FUN_100c8ffa8(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  
  func_0x000107c6030c();
  uVar3 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = param_2 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    func_0x000107c6142c(param_2);
    uStack_70 = (code *)0x0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x14);
    uVar2 = uStack_68;
    func_0x000107c61434(param_5);
    func_0x000107c6142c(uVar2);
    uStack_70 = (code *)param_4;
    uStack_68 = param_5;
    func_0x000107c5fb78(0xd000000000000012,0x800000010ef81540);
    pcStack_60 = uStack_70;
    uVar2 = 0x101453848;
    goto LAB_100c901f4;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if (0x20 < uVar3) {
LAB_100c90138:
      func_0x000107c6142c(param_2);
      uStack_70 = (code *)0x0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x21);
      uVar2 = uStack_68;
      func_0x000107c61434(param_5);
      func_0x000107c6142c(uVar2);
      uStack_70 = (code *)param_4;
      uStack_68 = param_5;
      func_0x000107c5fb78(0xd000000000000011,0x800000010ef814e0);
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      func_0x000107c5fb78(0x6220382d46545520,0xec00000073657479);
      pcStack_60 = uStack_70;
      uVar2 = 0x101453840;
      goto LAB_100c901f4;
    }
  }
  else {
    uVar3 = param_1;
    func_0x000107c5fb8c();
    if (0x20 < (long)uVar3) goto LAB_100c90138;
  }
  pcStack_60 = FUN_100c9043c;
  func_0x000107c6157c();
  FUN_100c90234(param_1,param_2,FUN_100c90464,&uStack_70);
  func_0x000107c61574();
  func_0x000107c6142c(param_2);
  if ((param_1 & 1) == 0) {
    return 1;
  }
  uStack_70 = (code *)0x0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x3b);
  func_0x000107c5fb78(param_4,param_5);
  func_0x000107c5fb78(0xd000000000000039,0x800000010ef81500);
  pcStack_60 = uStack_70;
  uVar2 = 0x101453844;
LAB_100c901f4:
  uVar1 = uStack_68;
  uStack_70 = pcStack_60;
  func_0x000103c7cd0c(uVar2,&uStack_70,
                      "Platform/Private/Implementation/GrapheneServiceClientImplementation/GrapheneServiceClientImplementation.swift"
                      ,0x6d,2,0xa9);
  func_0x000107c6142c(uVar1);
  return 0;
}



/* Entry: 100c90234; end: 100c9043b;  */

uint FUN_100c90234(ulong param_1,ulong param_2,code *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  uint extraout_w8;
  long unaff_x21;
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  func_0x000107c61434(param_2);
  if (uVar1 != 0) {
    uVar4 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar9 = 4L << uVar4;
    uVar5 = 0xf;
    do {
      uVar8 = uVar5 & 0xc;
      uVar3 = uVar5;
      if (uVar8 == uVar9) {
        FUN_100e36e7c(uVar5,param_1,param_2);
      }
      uVar7 = uVar3 >> 0x10;
      if (uVar1 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c90438);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) != 0) {
          uStack_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          uVar6 = *(undefined1 *)((long)&uStack_70 + uVar7);
          goto joined_r0x000100c90354;
        }
        uVar3 = (param_2 & 0xfffffffffffffff) + 0x20;
        if ((param_1 >> 0x3c & 1) == 0) {
          uVar3 = param_1;
          func_0x000107c60358(param_1,param_2);
        }
        uVar6 = *(undefined1 *)(uVar3 + uVar7);
        if (uVar8 == uVar9) goto LAB_100c90358;
LAB_100c90304:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100c90308;
LAB_100c90378:
        if (uVar1 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100c9043c);
          (*pcVar2)();
        }
        func_0x000107c5fb90(uVar5,param_1,param_2);
      }
      else {
        func_0x000107c5fb9c();
        uVar6 = (undefined1)uVar3;
joined_r0x000100c90354:
        if (uVar8 != uVar9) goto LAB_100c90304;
LAB_100c90358:
        FUN_100e36e7c(uVar5,param_1,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_100c90378;
LAB_100c90308:
        uVar5 = (uVar5 & 0xffffffffffff0000) + 0x10004;
      }
      uStack_70 = CONCAT71(uStack_70._1_7_,uVar6);
      uVar3 = 0;
      (*param_3)();
      if (unaff_x21 != 0) {
        func_0x000107c6142c(param_2);
        uVar4 = extraout_w8;
        goto LAB_100c9040c;
      }
      if ((uVar3 & 1) == 0) {
        func_0x000107c6142c(param_2);
        uVar4 = 1;
        goto LAB_100c9040c;
      }
    } while (uVar1 << 2 != uVar5 >> 0xe);
  }
  func_0x000107c6142c(param_2);
  uVar4 = 0;
LAB_100c9040c:
  return uVar4 & 1;
}



/* Entry: 100c9043c; end: 100c90463;  */

bool FUN_100c9043c(uint param_1)

{
  param_1 = param_1 & 0xff;
  return param_1 - 0x61 < 0x1a || (param_1 == 0x5f || param_1 - 0x30 < 10);
}



/* Entry: 100c90464; end: 100c9048b;  */

uint FUN_100c90464(byte *param_1)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = (uint)*param_1;
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return uVar1 & 1;
}



/* Entry: 100c9048c; end: 100c90597;  */

void FUN_100c9048c(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  func_0x0001000285a8(0x112d4f358,&UNK_10d9151b0);
  lVar4 = 8;
  func_0x000107c602e8();
  lVar11 = 0;
  lVar1 = lVar4 + 0x38;
  uVar12 = ~(-1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f));
  do {
    lVar10 = *(long *)(&UNK_10d942590 + lVar11 * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,lVar10);
    uVar5 = uVar5 & uVar12;
    uVar7 = uVar5 >> 6;
    uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
    uVar9 = 1L << (uVar5 & 0x3f);
    lVar6 = *(long *)(lVar4 + 0x30);
    uVar2 = uVar9 & uVar8;
    while (uVar2 != 0) {
      if (*(long *)(lVar6 + uVar5 * 8) == lVar10) goto LAB_100c9050c;
      uVar5 = uVar5 + 1 & uVar12;
      uVar7 = uVar5 >> 6;
      uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
      uVar9 = 1L << (uVar5 & 0x3f);
      uVar2 = uVar9 & uVar8;
    }
    *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
    *(long *)(lVar6 + uVar5 * 8) = lVar10;
    if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c90598);
      (*pcVar3)();
    }
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
LAB_100c9050c:
    lVar11 = lVar11 + 1;
    if (lVar11 == 8) {
      lRam0000000113442358 = lVar4;
      return;
    }
  } while( true );
}



/* Entry: 100c90598; end: 100c9062f;  */

undefined1 FUN_100c90598(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar1 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(long *)(*(long *)(param_2 + 0x30) + uVar1 * 8) == param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 100c90630; end: 100c9072f;  */

undefined * FUN_100c90630(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c90730);
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
    puVar3 = (undefined *)0x112da0178;
    func_0x0001000285a8(0x112da0178,&UNK_10d942648);
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
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100c90730; end: 100c932df;  */

undefined8 *******
FUN_100c90730(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  ulong uStack_e8;
  ulong uStack_d8;
  undefined8 ******ppppppuStack_a8;
  ulong uStack_a0;
  undefined8 ******ppppppuStack_98;
  ulong uStack_90;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  ulong auStack_70 [2];
  
  uVar16 = *(ulong *)(param_1 + 0x10);
  uVar5 = 0;
  FUN_100c90630(0,uVar16,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  auStack_70[0] = uVar5;
  if (uVar16 == 0) {
    lVar15 = *(long *)(uVar5 + 0x10);
    func_0x000107c61434(uVar5);
    lVar13 = uVar5 + 0x20;
    goto LAB_100c90854;
  }
  pppppppuVar6 = *(undefined8 ********)(param_1 + 0x20);
  uVar12 = *(ulong *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100c91424);
      (*pcVar4)();
    }
    func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
    uVar9 = uVar5;
    func_0x000107c61558();
    uVar17 = uVar5;
    if ((uVar9 & 1) == 0) {
      uVar17 = 0;
      FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar9 = *(ulong *)(uVar17 + 0x10);
    lVar15 = uVar9 + 1;
    uVar5 = uVar17;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar9) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      FUN_100c90630(uVar5,lVar15,1,uVar17);
    }
    *(long *)(uVar5 + 0x10) = lVar15;
    lVar13 = uVar5 + 0x20;
    puVar1 = (ulong *)(lVar13 + uVar9 * 0x10);
    *puVar1 = (ulong)pppppppuVar6;
    puVar1[1] = uVar12;
    auStack_70[0] = uVar5;
    func_0x000107c614a8(&ppppppuStack_88);
    if (uVar16 == 1) goto LAB_100c90808;
    pppppppuVar6 = *(undefined8 ********)(param_1 + 0x38);
    uVar12 = *(ulong *)(param_1 + 0x40);
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100c919d0);
        (*pcVar4)();
      }
      func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
      uVar17 = uVar5;
      func_0x000107c61558();
      uVar11 = uVar5;
      if ((uVar17 & 1) == 0) {
        uVar11 = 0;
        FUN_100c90630(0,uVar9 + 2,1,uVar5);
      }
      uVar9 = *(ulong *)(uVar11 + 0x10);
      lVar15 = uVar9 + 1;
      uVar5 = uVar11;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_100c90630(uVar5,lVar15,1,uVar11);
      }
      *(long *)(uVar5 + 0x10) = lVar15;
      lVar13 = uVar5 + 0x20;
      puVar1 = (ulong *)(lVar13 + uVar9 * 0x10);
      *puVar1 = (ulong)pppppppuVar6;
      puVar1[1] = uVar12;
      auStack_70[0] = uVar5;
      func_0x000107c614a8(&ppppppuStack_88);
      if (uVar16 < 3) goto LAB_100c90808;
      pppppppuVar6 = *(undefined8 ********)(param_1 + 0x50);
      uVar12 = *(ulong *)(param_1 + 0x58);
      if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
        if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100c924ac);
          (*pcVar4)();
        }
        func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
        uVar17 = uVar5;
        func_0x000107c61558();
        uVar11 = uVar5;
        if ((uVar17 & 1) == 0) {
          uVar11 = 0;
          FUN_100c90630(0,uVar9 + 2,1,uVar5);
        }
        uVar9 = *(ulong *)(uVar11 + 0x10);
        lVar15 = uVar9 + 1;
        uVar5 = uVar11;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_100c90630(uVar5,lVar15,1,uVar11);
        }
        *(long *)(uVar5 + 0x10) = lVar15;
        lVar13 = uVar5 + 0x20;
        puVar1 = (ulong *)(lVar13 + uVar9 * 0x10);
        *puVar1 = (ulong)pppppppuVar6;
        puVar1[1] = uVar12;
        auStack_70[0] = uVar5;
        func_0x000107c614a8(&ppppppuStack_88);
        if (uVar16 != 3) {
          pppppppuVar6 = *(undefined8 ********)(param_1 + 0x68);
          uVar12 = *(ulong *)(param_1 + 0x70);
          if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
            func_0x000107c6030c();
            uStack_d8 = uVar12;
            if ((uVar12 >> 0x3c & 1) == 0) {
              func_0x000107c61434(uVar12);
              pppppppuVar7 = pppppppuVar6;
              if ((uVar12 >> 0x3d & 1) == 0) goto LAB_100c911c0;
LAB_100c92e68:
              uStack_80 = uStack_d8 & 0xffffffffffffff;
              pppppppuVar7 = &ppppppuStack_88;
              ppppppuStack_88 = pppppppuVar6;
            }
            else {
              FUN_100edbde8();
              pppppppuVar7 = pppppppuVar6;
              if ((uStack_d8 >> 0x3d & 1) != 0) goto LAB_100c92e68;
LAB_100c911c0:
              if (((ulong)pppppppuVar7 >> 0x3c & 1) == 0) {
                func_0x000107c60358(pppppppuVar7,uStack_d8);
              }
              else {
                pppppppuVar7 = (undefined8 *******)((uStack_d8 & 0xfffffffffffffff) + 0x20);
              }
            }
            FUN_101453aec();
            func_0x000107c6142c(uVar12);
            goto LAB_100c914e8;
          }
          if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92e50);
            (*pcVar4)();
          }
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar17 = uVar5;
          func_0x000107c61558();
          uVar11 = uVar5;
          if ((uVar17 & 1) == 0) {
            uVar11 = 0;
            FUN_100c90630(0,uVar9 + 2,1,uVar5);
          }
          uVar9 = *(ulong *)(uVar11 + 0x10);
          lVar15 = uVar9 + 1;
          uVar5 = uVar11;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_100c90630(uVar5,lVar15,1,uVar11);
          }
          *(long *)(uVar5 + 0x10) = lVar15;
          lVar13 = uVar5 + 0x20;
          puVar1 = (ulong *)(lVar13 + uVar9 * 0x10);
          *puVar1 = (ulong)pppppppuVar6;
          puVar1[1] = uVar12;
          auStack_70[0] = uVar5;
          func_0x000107c614a8(&ppppppuStack_88);
          if (4 < uVar16) {
            pppppppuVar7 = *(undefined8 ********)(param_1 + 0x80);
            uVar14 = *(undefined8 *)(param_1 + 0x88);
            bVar3 = *(byte *)(param_1 + 0x90);
            if ((bVar3 & 1) == 0) {
              if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f48);
                (*pcVar4)();
              }
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              FUN_101453aec(pppppppuVar7,uVar14,auStack_70,param_1,4,param_3,param_4,param_5,param_6
                            ,param_7,param_8);
            }
            else {
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              func_0x000107c6030c(pppppppuVar7,uVar14,bVar3);
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              func_0x000101453d2c(pppppppuVar7,uVar14,auStack_70,param_1,param_2,4,param_3,param_4,
                                  param_5,param_6,param_7,param_8);
              func_0x000107c6142c(uVar14);
            }
            uVar5 = auStack_70[0];
            func_0x000107c61574(param_2);
            func_0x000107c6142c(param_1);
            goto LAB_100c914f0;
          }
        }
LAB_100c90808:
        func_0x000107c61434(uVar5);
LAB_100c90854:
        (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,lVar13,lVar15);
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(auStack_70[0]);
        return (undefined8 *******)ppppppuStack_88;
      }
      func_0x000107c6030c();
      uStack_d8 = uVar12;
      if ((uVar12 >> 0x3c & 1) == 0) {
        func_0x000107c61434(uVar12);
      }
      else {
        FUN_100edbde8();
      }
      if ((uStack_d8 >> 0x3d & 1) != 0) {
        uStack_90 = uStack_d8 & 0xffffffffffffff;
        ppppppuStack_98 = pppppppuVar6;
        func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
        uVar5 = auStack_70[0];
        uVar9 = auStack_70[0];
        func_0x000107c61558();
        uVar17 = uVar5;
        if ((uVar9 & 1) == 0) {
          uVar17 = 0;
          FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        }
        uVar5 = *(ulong *)(uVar17 + 0x10);
        lVar15 = uVar5 + 1;
        uVar9 = uVar17;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar5) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
          FUN_100c90630(uVar9,lVar15,1,uVar17);
        }
        *(long *)(uVar9 + 0x10) = lVar15;
        lVar13 = uVar9 + 0x20;
        plVar2 = (long *)(lVar13 + uVar5 * 0x10);
        *plVar2 = (long)&ppppppuStack_98;
        plVar2[1] = uStack_d8 >> 0x38 & 0xf;
        auStack_70[0] = uVar9;
        func_0x000107c614a8(&ppppppuStack_88);
        if (uVar16 != 3) {
          pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
          lVar15 = *(long *)(param_1 + 0x70);
          bVar3 = *(byte *)(param_1 + 0x78);
          if ((bVar3 & 1) == 0) {
            if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f20);
              (*pcVar4)();
            }
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,3,param_3,param_4,param_5,param_6,
                          param_7,param_8);
            lVar15 = param_1;
          }
          else {
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,3,param_3,param_4,
                                param_5,param_6,param_7,param_8);
            func_0x000107c6142c(param_1);
          }
          func_0x000107c6142c(lVar15);
          func_0x000107c61574(param_2);
          goto LAB_100c92a80;
        }
        goto LAB_100c92530;
      }
      if (((ulong)pppppppuVar6 >> 0x3c & 1) == 0) {
        uVar17 = uStack_d8;
        func_0x000107c60358();
      }
      else {
        uVar17 = (ulong)pppppppuVar6 & 0xffffffffffff;
        pppppppuVar6 = (undefined8 *******)((uStack_d8 & 0xfffffffffffffff) + 0x20);
      }
      func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
      uVar9 = uVar5;
      func_0x000107c61558();
      uVar11 = uVar5;
      if ((uVar9 & 1) == 0) {
        uVar11 = 0;
        FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      }
      uVar5 = *(ulong *)(uVar11 + 0x10);
      lVar15 = uVar5 + 1;
      uVar9 = uVar11;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_100c90630(uVar9,lVar15,1,uVar11);
      }
      *(long *)(uVar9 + 0x10) = lVar15;
      lVar13 = uVar9 + 0x20;
      puVar1 = (ulong *)(lVar13 + uVar5 * 0x10);
      *puVar1 = (ulong)pppppppuVar6;
      puVar1[1] = uVar17;
      auStack_70[0] = uVar9;
      func_0x000107c614a8(&ppppppuStack_88);
      if (uVar16 != 3) {
        pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
        lVar15 = *(long *)(param_1 + 0x70);
        bVar3 = *(byte *)(param_1 + 0x78);
        if ((bVar3 & 1) == 0) {
          if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c91190);
            (*pcVar4)();
          }
          goto LAB_100c91bdc;
        }
LAB_100c91c28:
        func_0x000107c61434(param_1);
        func_0x000107c6157c(param_2);
        func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
        func_0x000107c61434(param_1);
        func_0x000107c6157c(param_2);
        func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,3,param_3,param_4,param_5
                            ,param_6,param_7,param_8);
        func_0x000107c6142c(param_1);
        goto LAB_100c91cac;
      }
      func_0x000107c61434(uVar9);
LAB_100c91ae0:
      (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,lVar13,lVar15);
LAB_100c92558:
      func_0x000107c6142c(uVar9);
      pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
LAB_100c92a80:
      func_0x000107c6142c(uVar12);
    }
    else {
      func_0x000107c6030c();
      uStack_d8 = uVar12;
      if ((uVar12 >> 0x3c & 1) == 0) {
        func_0x000107c61434(uVar12);
      }
      else {
        FUN_100edbde8();
      }
      if ((uStack_d8 >> 0x3d & 1) != 0) {
        uStack_90 = uStack_d8 & 0xffffffffffffff;
        ppppppuStack_98 = pppppppuVar6;
        func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
        uVar5 = auStack_70[0];
        uVar9 = auStack_70[0];
        func_0x000107c61558();
        uVar17 = uVar5;
        if ((uVar9 & 1) == 0) {
          uVar17 = 0;
          FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        }
        uVar5 = *(ulong *)(uVar17 + 0x10);
        lVar15 = uVar5 + 1;
        uVar9 = uVar17;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar5) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
          FUN_100c90630(uVar9,lVar15,1,uVar17);
        }
        *(long *)(uVar9 + 0x10) = lVar15;
        lVar13 = uVar9 + 0x20;
        plVar2 = (long *)(lVar13 + uVar5 * 0x10);
        *plVar2 = (long)&ppppppuStack_98;
        plVar2[1] = uStack_d8 >> 0x38 & 0xf;
        auStack_70[0] = uVar9;
        func_0x000107c614a8(&ppppppuStack_88);
        if (uVar16 < 3) {
LAB_100c92530:
          func_0x000107c61434(uVar9);
          (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,lVar13,lVar15);
          goto LAB_100c92558;
        }
        ppppppuStack_f0 = *(undefined8 *******)(param_1 + 0x50);
        uVar17 = *(ulong *)(param_1 + 0x58);
        if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
          if ((undefined8 *******)ppppppuStack_f0 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c928bc);
            (*pcVar4)();
          }
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar11 = uVar9;
          func_0x000107c61558();
          uVar8 = uVar9;
          if ((uVar11 & 1) == 0) {
            uVar8 = 0;
            FUN_100c90630(0,uVar5 + 2,1,uVar9);
          }
          uVar5 = *(ulong *)(uVar8 + 0x10);
          lVar15 = uVar5 + 1;
          uVar9 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
            uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100c90630(uVar9,lVar15,1,uVar8);
          }
          *(long *)(uVar9 + 0x10) = lVar15;
          lVar13 = uVar9 + 0x20;
          puVar1 = (ulong *)(lVar13 + uVar5 * 0x10);
          *puVar1 = (ulong)ppppppuStack_f0;
          puVar1[1] = uVar17;
          auStack_70[0] = uVar9;
          func_0x000107c614a8(&ppppppuStack_88);
          if (uVar16 == 3) {
            func_0x000107c61434(uVar9);
            goto LAB_100c91ae0;
          }
          pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
          lVar15 = *(long *)(param_1 + 0x70);
          bVar3 = *(byte *)(param_1 + 0x78);
          if ((bVar3 & 1) != 0) goto LAB_100c91c28;
          if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f1c);
            (*pcVar4)();
          }
LAB_100c91bdc:
          func_0x000107c61434(param_1);
          func_0x000107c6157c(param_2);
          FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,3,param_3,param_4,param_5,param_6,
                        param_7,param_8);
          lVar15 = param_1;
LAB_100c91cac:
          func_0x000107c6142c(lVar15);
          func_0x000107c61574(param_2);
          goto LAB_100c92a80;
        }
        func_0x000107c6030c();
        uStack_e8 = uVar17;
        if ((uVar17 >> 0x3c & 1) == 0) {
          func_0x000107c61434(uVar17);
          if ((uVar17 >> 0x3d & 1) == 0) goto LAB_100c91b18;
LAB_100c928d8:
          uStack_a0 = uStack_e8 & 0xffffffffffffff;
          ppppppuStack_a8 = ppppppuStack_f0;
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar5 = auStack_70[0];
          uVar9 = auStack_70[0];
          func_0x000107c61558();
          uVar11 = uVar5;
          if ((uVar9 & 1) == 0) {
            uVar11 = 0;
            FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar5 = *(ulong *)(uVar11 + 0x10);
          lVar15 = uVar5 + 1;
          uVar9 = uVar11;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
            uVar9 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_100c90630(uVar9,lVar15,1,uVar11);
          }
          *(long *)(uVar9 + 0x10) = lVar15;
          plVar2 = (long *)(uVar9 + 0x20 + uVar5 * 0x10);
          *plVar2 = (long)&ppppppuStack_a8;
          plVar2[1] = uStack_e8 >> 0x38 & 0xf;
          auStack_70[0] = uVar9;
          func_0x000107c614a8(&ppppppuStack_88);
          if (uVar16 == 3) {
            func_0x000107c61434(uVar9);
            (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,uVar9 + 0x20,lVar15);
            func_0x000107c6142c(uVar9);
            pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
          }
          else {
            pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
            lVar15 = *(long *)(param_1 + 0x70);
            bVar3 = *(byte *)(param_1 + 0x78);
            if ((bVar3 & 1) == 0) {
              if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f44);
                (*pcVar4)();
              }
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,3,param_3,param_4,param_5,param_6
                            ,param_7,param_8);
              lVar15 = param_1;
            }
            else {
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,3,param_3,param_4,
                                  param_5,param_6,param_7,param_8);
              func_0x000107c6142c(param_1);
            }
            func_0x000107c6142c(lVar15);
            func_0x000107c61574(param_2);
          }
        }
        else {
          FUN_100edbde8();
          if ((uStack_e8 >> 0x3d & 1) != 0) goto LAB_100c928d8;
LAB_100c91b18:
          if (((ulong)ppppppuStack_f0 >> 0x3c & 1) == 0) {
            uVar5 = uStack_e8;
            func_0x000107c60358();
          }
          else {
            uVar5 = (ulong)ppppppuStack_f0 & 0xffffffffffff;
            ppppppuStack_f0 = (undefined8 *******)((uStack_e8 & 0xfffffffffffffff) + 0x20);
          }
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar11 = uVar9;
          func_0x000107c61558();
          uVar8 = uVar9;
          if ((uVar11 & 1) == 0) {
            uVar8 = 0;
            FUN_100c90630(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
          }
          uVar9 = *(ulong *)(uVar8 + 0x10);
          lVar15 = uVar9 + 1;
          uVar11 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar9) {
            uVar11 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100c90630(uVar11,lVar15,1,uVar8);
          }
          *(long *)(uVar11 + 0x10) = lVar15;
          plVar2 = (long *)(uVar11 + 0x20 + uVar9 * 0x10);
          *plVar2 = (long)ppppppuStack_f0;
          plVar2[1] = uVar5;
          auStack_70[0] = uVar11;
          func_0x000107c614a8(&ppppppuStack_88);
          if (uVar16 == 3) {
            func_0x000107c61434(uVar11);
            (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,uVar11 + 0x20,lVar15);
            func_0x000107c6142c(uVar11);
            pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
          }
          else {
            pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
            lVar15 = *(long *)(param_1 + 0x70);
            bVar3 = *(byte *)(param_1 + 0x78);
            if ((bVar3 & 1) == 0) {
              if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f38);
                (*pcVar4)();
              }
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,3,param_3,param_4,param_5,param_6
                            ,param_7,param_8);
              lVar15 = param_1;
            }
            else {
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,3,param_3,param_4,
                                  param_5,param_6,param_7,param_8);
              func_0x000107c6142c(param_1);
            }
            func_0x000107c6142c(lVar15);
            func_0x000107c61574(param_2);
          }
        }
        func_0x000107c6142c(uVar17);
        func_0x000107c6142c(uStack_e8);
        goto LAB_100c92a80;
      }
      if (((ulong)pppppppuVar6 >> 0x3c & 1) == 0) {
        uVar9 = uStack_d8;
        func_0x000107c60358();
      }
      else {
        uVar9 = (ulong)pppppppuVar6 & 0xffffffffffff;
        pppppppuVar6 = (undefined8 *******)((uStack_d8 & 0xfffffffffffffff) + 0x20);
      }
      func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
      uVar17 = uVar5;
      func_0x000107c61558();
      uVar11 = uVar5;
      if ((uVar17 & 1) == 0) {
        uVar11 = 0;
        FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      }
      uVar5 = *(ulong *)(uVar11 + 0x10);
      lVar15 = uVar5 + 1;
      uVar17 = uVar11;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
        uVar17 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_100c90630(uVar17,lVar15,1,uVar11);
      }
      *(long *)(uVar17 + 0x10) = lVar15;
      lVar13 = uVar17 + 0x20;
      puVar1 = (ulong *)(lVar13 + uVar5 * 0x10);
      *puVar1 = (ulong)pppppppuVar6;
      puVar1[1] = uVar9;
      auStack_70[0] = uVar17;
      func_0x000107c614a8(&ppppppuStack_88);
      if (uVar16 < 3) {
        func_0x000107c61434(uVar17);
LAB_100c90ddc:
        (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,lVar13,lVar15);
        func_0x000107c6142c(uVar17);
        pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
      }
      else {
        pppppppuVar7 = *(undefined8 ********)(param_1 + 0x50);
        uVar9 = *(ulong *)(param_1 + 0x58);
        if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
          if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c926a4);
            (*pcVar4)();
          }
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar11 = uVar17;
          func_0x000107c61558();
          uVar8 = uVar17;
          if ((uVar11 & 1) == 0) {
            uVar8 = 0;
            FUN_100c90630(0,uVar5 + 2,1,uVar17);
          }
          uVar5 = *(ulong *)(uVar8 + 0x10);
          lVar15 = uVar5 + 1;
          uVar17 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100c90630(uVar17,lVar15,1,uVar8);
          }
          *(long *)(uVar17 + 0x10) = lVar15;
          lVar13 = uVar17 + 0x20;
          plVar2 = (long *)(lVar13 + uVar5 * 0x10);
          *plVar2 = (long)pppppppuVar7;
          plVar2[1] = uVar9;
          auStack_70[0] = uVar17;
          func_0x000107c614a8(&ppppppuStack_88);
          if (uVar16 == 3) {
            func_0x000107c61434(uVar17);
            goto LAB_100c90ddc;
          }
          pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
          lVar15 = *(long *)(param_1 + 0x70);
          bVar3 = *(byte *)(param_1 + 0x78);
          if ((bVar3 & 1) == 0) {
            if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f14);
              (*pcVar4)();
            }
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,3,param_3,param_4,param_5,param_6,
                          param_7,param_8);
            lVar15 = param_1;
          }
          else {
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,3,param_3,param_4,
                                param_5,param_6,param_7,param_8);
            func_0x000107c6142c(param_1);
          }
          func_0x000107c6142c(lVar15);
          func_0x000107c61574(param_2);
        }
        else {
          func_0x000107c6030c();
          uVar5 = uVar9;
          if ((uVar9 >> 0x3c & 1) == 0) {
            func_0x000107c61434(uVar9);
          }
          else {
            FUN_100edbde8();
          }
          if ((uVar5 >> 0x3d & 1) == 0) {
            if (((ulong)pppppppuVar7 >> 0x3c & 1) == 0) {
              func_0x000107c60358(pppppppuVar7,uVar5);
            }
            else {
              pppppppuVar7 = (undefined8 *******)((uVar5 & 0xfffffffffffffff) + 0x20);
            }
            FUN_101453aec();
            func_0x000107c6142c(uVar9);
            func_0x000107c6142c(uVar5);
          }
          else {
            uStack_90 = uVar5 & 0xffffffffffffff;
            ppppppuStack_98 = pppppppuVar7;
            func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
            uVar17 = auStack_70[0];
            uVar11 = auStack_70[0];
            func_0x000107c61558();
            uVar8 = uVar17;
            if ((uVar11 & 1) == 0) {
              uVar8 = 0;
              FUN_100c90630(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
            }
            uVar17 = *(ulong *)(uVar8 + 0x10);
            lVar15 = uVar17 + 1;
            uVar11 = uVar8;
            if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar17) {
              uVar11 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
              FUN_100c90630(uVar11,lVar15,1,uVar8);
            }
            *(long *)(uVar11 + 0x10) = lVar15;
            plVar2 = (long *)(uVar11 + 0x20 + uVar17 * 0x10);
            *plVar2 = (long)&ppppppuStack_98;
            plVar2[1] = uVar5 >> 0x38 & 0xf;
            auStack_70[0] = uVar11;
            func_0x000107c614a8(&ppppppuStack_88);
            if (uVar16 == 3) {
              func_0x000107c61434(uVar11);
              (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,uVar11 + 0x20,lVar15);
              func_0x000107c6142c(uVar11);
              pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
            }
            else {
              pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
              lVar15 = *(long *)(param_1 + 0x70);
              bVar3 = *(byte *)(param_1 + 0x78);
              if ((bVar3 & 1) == 0) {
                if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f34);
                  (*pcVar4)();
                }
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,3,param_3,param_4,param_5,
                              param_6,param_7,param_8);
                lVar15 = param_1;
              }
              else {
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,3,param_3,param_4
                                    ,param_5,param_6,param_7,param_8);
                func_0x000107c6142c(param_1);
              }
              func_0x000107c6142c(lVar15);
              func_0x000107c61574(param_2);
            }
            func_0x000107c6142c(uVar9);
            func_0x000107c6142c(uVar5);
          }
        }
      }
      func_0x000107c6142c(uVar12);
    }
  }
  else {
    func_0x000107c6030c();
    uStack_d8 = uVar12;
    if ((uVar12 >> 0x3c & 1) != 0) {
      FUN_100edbde8();
      if ((uStack_d8 >> 0x3d & 1) != 0) goto LAB_100c91440;
LAB_100c908a0:
      if (((ulong)pppppppuVar6 >> 0x3c & 1) == 0) {
        uVar9 = uStack_d8;
        func_0x000107c60358();
      }
      else {
        uVar9 = (ulong)pppppppuVar6 & 0xffffffffffff;
        pppppppuVar6 = (undefined8 *******)((uStack_d8 & 0xfffffffffffffff) + 0x20);
      }
      func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
      uVar17 = uVar5;
      func_0x000107c61558();
      uVar11 = uVar5;
      if ((uVar17 & 1) == 0) {
        uVar11 = 0;
        FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      }
      uVar5 = *(ulong *)(uVar11 + 0x10);
      lVar15 = uVar5 + 1;
      uVar17 = uVar11;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
        uVar17 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_100c90630(uVar17,lVar15,1,uVar11);
      }
      *(long *)(uVar17 + 0x10) = lVar15;
      lVar13 = uVar17 + 0x20;
      plVar2 = (long *)(lVar13 + uVar5 * 0x10);
      *plVar2 = (long)pppppppuVar6;
      plVar2[1] = uVar9;
      auStack_70[0] = uVar17;
      func_0x000107c614a8(&ppppppuStack_88);
      if (uVar16 != 1) {
        pppppppuVar6 = *(undefined8 ********)(param_1 + 0x38);
        uVar9 = *(ulong *)(param_1 + 0x40);
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c91df8);
            (*pcVar4)();
          }
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar11 = uVar17;
          func_0x000107c61558();
          uVar8 = uVar17;
          if ((uVar11 & 1) == 0) {
            uVar8 = 0;
            FUN_100c90630(0,uVar5 + 2,1,uVar17);
          }
          uVar5 = *(ulong *)(uVar8 + 0x10);
          lVar15 = uVar5 + 1;
          uVar17 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100c90630(uVar17,lVar15,1,uVar8);
          }
          *(long *)(uVar17 + 0x10) = lVar15;
          lVar13 = uVar17 + 0x20;
          puVar1 = (ulong *)(lVar13 + uVar5 * 0x10);
          *puVar1 = (ulong)pppppppuVar6;
          puVar1[1] = uVar9;
          auStack_70[0] = uVar17;
          func_0x000107c614a8(&ppppppuStack_88);
          if (uVar16 < 3) goto LAB_100c9090c;
          pppppppuVar6 = *(undefined8 ********)(param_1 + 0x50);
          uVar9 = *(ulong *)(param_1 + 0x58);
          if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
            if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100c926a0);
              (*pcVar4)();
            }
            func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
            uVar11 = uVar17;
            func_0x000107c61558();
            uVar8 = uVar17;
            if ((uVar11 & 1) == 0) {
              uVar8 = 0;
              FUN_100c90630(0,uVar5 + 2,1,uVar17);
            }
            uVar5 = *(ulong *)(uVar8 + 0x10);
            lVar15 = uVar5 + 1;
            uVar17 = uVar8;
            if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
              uVar17 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
              FUN_100c90630(uVar17,lVar15,1,uVar8);
            }
            *(long *)(uVar17 + 0x10) = lVar15;
            lVar13 = uVar17 + 0x20;
            puVar1 = (ulong *)(lVar13 + uVar5 * 0x10);
            *puVar1 = (ulong)pppppppuVar6;
            puVar1[1] = uVar9;
            auStack_70[0] = uVar17;
            func_0x000107c614a8(&ppppppuStack_88);
            if (uVar16 == 3) goto LAB_100c9090c;
            pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
            lVar15 = *(long *)(param_1 + 0x70);
            bVar3 = *(byte *)(param_1 + 0x78);
            if ((bVar3 & 1) == 0) {
              if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100c90ba8);
                (*pcVar4)();
              }
              goto LAB_100c915f8;
            }
LAB_100c9185c:
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,3,param_3,param_4,
                                param_5,param_6,param_7,param_8);
            func_0x000107c6142c(param_1);
            goto LAB_100c918e0;
          }
          func_0x000107c6030c();
          uVar5 = uVar9;
          if ((uVar9 >> 0x3c & 1) == 0) {
            func_0x000107c61434(uVar9);
            pppppppuVar7 = pppppppuVar6;
            if ((uVar9 >> 0x3d & 1) == 0) goto LAB_100c90f30;
LAB_100c926c0:
            uStack_80 = uVar5 & 0xffffffffffffff;
            pppppppuVar7 = &ppppppuStack_88;
            ppppppuStack_88 = pppppppuVar6;
          }
          else {
            FUN_100edbde8();
            pppppppuVar7 = pppppppuVar6;
            if ((uVar5 >> 0x3d & 1) != 0) goto LAB_100c926c0;
LAB_100c90f30:
            if (((ulong)pppppppuVar7 >> 0x3c & 1) == 0) {
              func_0x000107c60358(pppppppuVar7,uVar5);
            }
            else {
              pppppppuVar7 = (undefined8 *******)((uVar5 & 0xfffffffffffffff) + 0x20);
            }
          }
          FUN_101453aec();
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uVar5);
        }
        else {
          func_0x000107c6030c();
          uStack_e8 = uVar9;
          if ((uVar9 >> 0x3c & 1) == 0) {
            func_0x000107c61434(uVar9);
          }
          else {
            FUN_100edbde8();
          }
          if ((uStack_e8 >> 0x3d & 1) == 0) {
            if (((ulong)pppppppuVar6 >> 0x3c & 1) == 0) {
              uVar5 = uStack_e8;
              func_0x000107c60358();
            }
            else {
              uVar5 = (ulong)pppppppuVar6 & 0xffffffffffff;
              pppppppuVar6 = (undefined8 *******)((uStack_e8 & 0xfffffffffffffff) + 0x20);
            }
            func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
            uVar11 = uVar17;
            func_0x000107c61558();
            uVar8 = uVar17;
            if ((uVar11 & 1) == 0) {
              uVar8 = 0;
              FUN_100c90630(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
            }
            uVar17 = *(ulong *)(uVar8 + 0x10);
            lVar15 = uVar17 + 1;
            uVar11 = uVar8;
            if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar17) {
              uVar11 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
              FUN_100c90630(uVar11,lVar15,1,uVar8);
            }
            *(long *)(uVar11 + 0x10) = lVar15;
            puVar1 = (ulong *)(uVar11 + 0x20 + uVar17 * 0x10);
            *puVar1 = (ulong)pppppppuVar6;
            puVar1[1] = uVar5;
            auStack_70[0] = uVar11;
            func_0x000107c614a8(&ppppppuStack_88);
            if (uVar16 < 3) {
              func_0x000107c61434(uVar11);
              (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,uVar11 + 0x20,lVar15);
              func_0x000107c6142c(uVar11);
              pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
            }
            else {
              pppppppuVar7 = *(undefined8 ********)(param_1 + 0x50);
              lVar15 = *(long *)(param_1 + 0x58);
              bVar3 = *(byte *)(param_1 + 0x60);
              if ((bVar3 & 1) == 0) {
                if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92c1c);
                  (*pcVar4)();
                }
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,2,param_3,param_4,param_5,
                              param_6,param_7,param_8);
                lVar15 = param_1;
              }
              else {
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,2,param_3,param_4
                                    ,param_5,param_6,param_7,param_8);
                func_0x000107c6142c(param_1);
              }
              func_0x000107c6142c(lVar15);
              func_0x000107c61574(param_2);
            }
          }
          else {
            uStack_90 = uStack_e8 & 0xffffffffffffff;
            ppppppuStack_98 = pppppppuVar6;
            func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
            uVar5 = auStack_70[0];
            uVar17 = auStack_70[0];
            func_0x000107c61558();
            uVar11 = uVar5;
            if ((uVar17 & 1) == 0) {
              uVar11 = 0;
              FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            }
            uVar5 = *(ulong *)(uVar11 + 0x10);
            lVar15 = uVar5 + 1;
            uVar17 = uVar11;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
              uVar17 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_100c90630(uVar17,lVar15,1,uVar11);
            }
            *(long *)(uVar17 + 0x10) = lVar15;
            lVar13 = uVar17 + 0x20;
            plVar2 = (long *)(lVar13 + uVar5 * 0x10);
            *plVar2 = (long)&ppppppuStack_98;
            plVar2[1] = uStack_e8 >> 0x38 & 0xf;
            auStack_70[0] = uVar17;
            func_0x000107c614a8(&ppppppuStack_88);
            if (uVar16 < 3) goto LAB_100c927b4;
            pppppppuVar7 = *(undefined8 ********)(param_1 + 0x50);
            lVar15 = *(long *)(param_1 + 0x58);
            bVar3 = *(byte *)(param_1 + 0x60);
            if ((bVar3 & 1) == 0) {
              if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92cac);
                (*pcVar4)();
              }
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              uVar14 = 2;
              goto LAB_100c91ec4;
            }
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            uVar14 = 2;
LAB_100c91f44:
            func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,uVar14,param_3,
                                param_4,param_5,param_6,param_7,param_8);
            func_0x000107c6142c(param_1);
LAB_100c91f60:
            func_0x000107c6142c(lVar15);
            func_0x000107c61574(param_2);
          }
LAB_100c927f0:
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uStack_e8);
        }
        goto LAB_100c914dc;
      }
      goto LAB_100c9090c;
    }
    func_0x000107c61434(uVar12);
    if ((uVar12 >> 0x3d & 1) == 0) goto LAB_100c908a0;
LAB_100c91440:
    uStack_90 = uStack_d8 & 0xffffffffffffff;
    ppppppuStack_98 = pppppppuVar6;
    func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
    uVar5 = auStack_70[0];
    uVar9 = auStack_70[0];
    func_0x000107c61558();
    uVar11 = uVar5;
    if ((uVar9 & 1) == 0) {
      uVar11 = 0;
      FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar5 = *(ulong *)(uVar11 + 0x10);
    lVar15 = uVar5 + 1;
    uVar17 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
      uVar17 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_100c90630(uVar17,lVar15,1,uVar11);
    }
    *(long *)(uVar17 + 0x10) = lVar15;
    plVar2 = (long *)(uVar17 + 0x20 + uVar5 * 0x10);
    *plVar2 = (long)&ppppppuStack_98;
    plVar2[1] = uStack_d8 >> 0x38 & 0xf;
    auStack_70[0] = uVar17;
    func_0x000107c614a8(&ppppppuStack_88);
    if (uVar16 == 1) {
      func_0x000107c61434(uVar17);
      (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,uVar17 + 0x20,lVar15);
LAB_100c914d0:
      func_0x000107c6142c(uVar17);
      pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
    }
    else {
      ppppppuStack_f8 = *(undefined8 *******)(param_1 + 0x38);
      uVar9 = *(ulong *)(param_1 + 0x40);
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        if ((undefined8 *******)ppppppuStack_f8 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100c91f78);
          (*pcVar4)();
        }
        func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
        uVar11 = uVar17;
        func_0x000107c61558();
        uVar8 = uVar17;
        if ((uVar11 & 1) == 0) {
          uVar8 = 0;
          FUN_100c90630(0,uVar5 + 2,1,uVar17);
        }
        uVar5 = *(ulong *)(uVar8 + 0x10);
        lVar15 = uVar5 + 1;
        uVar17 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
          uVar17 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_100c90630(uVar17,lVar15,1,uVar8);
        }
        *(long *)(uVar17 + 0x10) = lVar15;
        lVar13 = uVar17 + 0x20;
        puVar1 = (ulong *)(lVar13 + uVar5 * 0x10);
        *puVar1 = (ulong)ppppppuStack_f8;
        puVar1[1] = uVar9;
        auStack_70[0] = uVar17;
        func_0x000107c614a8(&ppppppuStack_88);
        if (uVar16 < 3) {
LAB_100c9090c:
          func_0x000107c61434(uVar17);
          (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,lVar13,lVar15);
          goto LAB_100c914d0;
        }
        pppppppuVar7 = *(undefined8 ********)(param_1 + 0x50);
        uVar9 = *(ulong *)(param_1 + 0x58);
        if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
          if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c9272c);
            (*pcVar4)();
          }
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar11 = uVar17;
          func_0x000107c61558();
          uVar8 = uVar17;
          if ((uVar11 & 1) == 0) {
            uVar8 = 0;
            FUN_100c90630(0,uVar5 + 2,1,uVar17);
          }
          uVar5 = *(ulong *)(uVar8 + 0x10);
          lVar15 = uVar5 + 1;
          uVar17 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100c90630(uVar17,lVar15,1,uVar8);
          }
          *(long *)(uVar17 + 0x10) = lVar15;
          lVar13 = uVar17 + 0x20;
          puVar1 = (ulong *)(lVar13 + uVar5 * 0x10);
          *puVar1 = (ulong)pppppppuVar7;
          puVar1[1] = uVar9;
          auStack_70[0] = uVar17;
          func_0x000107c614a8(&ppppppuStack_88);
          if (uVar16 == 3) goto LAB_100c9090c;
          pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
          lVar15 = *(long *)(param_1 + 0x70);
          bVar3 = *(byte *)(param_1 + 0x78);
          if ((bVar3 & 1) != 0) goto LAB_100c9185c;
          if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f18);
            (*pcVar4)();
          }
LAB_100c915f8:
          func_0x000107c61434(param_1);
          func_0x000107c6157c(param_2);
          FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,3,param_3,param_4,param_5,param_6,
                        param_7,param_8);
          lVar15 = param_1;
LAB_100c918e0:
          func_0x000107c6142c(lVar15);
          func_0x000107c61574(param_2);
        }
        else {
          func_0x000107c6030c();
          uStack_e8 = uVar9;
          if ((uVar9 >> 0x3c & 1) == 0) {
            func_0x000107c61434(uVar9);
          }
          else {
            FUN_100edbde8();
          }
          if ((uStack_e8 >> 0x3d & 1) != 0) {
            uStack_a0 = uStack_e8 & 0xffffffffffffff;
            ppppppuStack_a8 = pppppppuVar7;
            func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
            uVar5 = auStack_70[0];
            uVar17 = auStack_70[0];
            func_0x000107c61558();
            uVar11 = uVar5;
            if ((uVar17 & 1) == 0) {
              uVar11 = 0;
              FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            }
            uVar5 = *(ulong *)(uVar11 + 0x10);
            lVar15 = uVar5 + 1;
            uVar17 = uVar11;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
              uVar17 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_100c90630(uVar17,lVar15,1,uVar11);
            }
            *(long *)(uVar17 + 0x10) = lVar15;
            lVar13 = uVar17 + 0x20;
            plVar2 = (long *)(lVar13 + uVar5 * 0x10);
            *plVar2 = (long)&ppppppuStack_a8;
            plVar2[1] = uStack_e8 >> 0x38 & 0xf;
            auStack_70[0] = uVar17;
            func_0x000107c614a8(&ppppppuStack_88);
            if (uVar16 != 3) {
              pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
              lVar15 = *(long *)(param_1 + 0x70);
              bVar3 = *(byte *)(param_1 + 0x78);
              if ((bVar3 & 1) != 0) {
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                uVar14 = 3;
                goto LAB_100c91f44;
              }
              if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f40);
                (*pcVar4)();
              }
              func_0x000107c61434(param_1);
              func_0x000107c6157c(param_2);
              uVar14 = 3;
LAB_100c91ec4:
              FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,uVar14,param_3,param_4,param_5,
                            param_6,param_7,param_8);
              lVar15 = param_1;
              goto LAB_100c91f60;
            }
LAB_100c927b4:
            func_0x000107c61434(uVar17);
            (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,lVar13,lVar15);
            func_0x000107c6142c(uVar17);
            pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
            goto LAB_100c927f0;
          }
          if (((ulong)pppppppuVar7 >> 0x3c & 1) == 0) {
            func_0x000107c60358(pppppppuVar7,uStack_e8);
          }
          else {
            pppppppuVar7 = (undefined8 *******)((uStack_e8 & 0xfffffffffffffff) + 0x20);
          }
          FUN_101453aec();
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uStack_e8);
        }
      }
      else {
        func_0x000107c6030c();
        ppppppuStack_f0 = (undefined8 ******)uVar9;
        if ((uVar9 >> 0x3c & 1) == 0) {
          func_0x000107c61434(uVar9);
          if ((uVar9 >> 0x3d & 1) == 0) goto LAB_100c91670;
LAB_100c91f94:
          uStack_a0 = (ulong)ppppppuStack_f0 & 0xffffffffffffff;
          ppppppuStack_a8 = ppppppuStack_f8;
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar5 = auStack_70[0];
          uVar17 = auStack_70[0];
          func_0x000107c61558();
          uVar11 = uVar5;
          if ((uVar17 & 1) == 0) {
            uVar11 = 0;
            FUN_100c90630(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar5 = *(ulong *)(uVar11 + 0x10);
          lVar15 = uVar5 + 1;
          uVar17 = uVar11;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_100c90630(uVar17,lVar15,1,uVar11);
          }
          *(long *)(uVar17 + 0x10) = lVar15;
          lVar13 = uVar17 + 0x20;
          plVar2 = (long *)(lVar13 + uVar5 * 0x10);
          *plVar2 = (long)&ppppppuStack_a8;
          plVar2[1] = (ulong)ppppppuStack_f0 >> 0x38 & 0xf;
          auStack_70[0] = uVar17;
          func_0x000107c614a8(&ppppppuStack_88);
          if (2 < uVar16) {
            pppppppuVar6 = *(undefined8 ********)(param_1 + 0x50);
            uVar11 = *(ulong *)(param_1 + 0x58);
            if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
              if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92cb0);
                (*pcVar4)();
              }
              func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
              uVar8 = uVar17;
              func_0x000107c61558();
              uVar10 = uVar17;
              if ((uVar8 & 1) == 0) {
                uVar10 = 0;
                FUN_100c90630(0,uVar5 + 2,1,uVar17);
              }
              uVar5 = *(ulong *)(uVar10 + 0x10);
              lVar15 = uVar5 + 1;
              uVar17 = uVar10;
              if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
                uVar17 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
                FUN_100c90630(uVar17,lVar15,1,uVar10);
              }
              *(long *)(uVar17 + 0x10) = lVar15;
              lVar13 = uVar17 + 0x20;
              plVar2 = (long *)(lVar13 + uVar5 * 0x10);
              *plVar2 = (long)pppppppuVar6;
              plVar2[1] = uVar11;
              auStack_70[0] = uVar17;
              func_0x000107c614a8(&ppppppuStack_88);
              if (uVar16 == 3) {
                func_0x000107c61434(uVar17);
                goto LAB_100c920a8;
              }
              pppppppuVar7 = *(undefined8 ********)(param_1 + 0x68);
              lVar15 = *(long *)(param_1 + 0x70);
              bVar3 = *(byte *)(param_1 + 0x78);
              if ((bVar3 & 1) == 0) {
                if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92f3c);
                  (*pcVar4)();
                }
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                FUN_101453aec(pppppppuVar7,lVar15,auStack_70,param_1,3,param_3,param_4,param_5,
                              param_6,param_7,param_8);
                lVar15 = param_1;
              }
              else {
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                func_0x000107c6030c(pppppppuVar7,lVar15,bVar3);
                func_0x000107c61434(param_1);
                func_0x000107c6157c(param_2);
                func_0x000101453d2c(pppppppuVar7,lVar15,auStack_70,param_1,param_2,3,param_3,param_4
                                    ,param_5,param_6,param_7,param_8);
                func_0x000107c6142c(param_1);
              }
              func_0x000107c6142c(lVar15);
              func_0x000107c61574(param_2);
            }
            else {
              func_0x000107c6030c();
              uVar5 = uVar11;
              if ((uVar11 >> 0x3c & 1) == 0) {
                func_0x000107c61434(uVar11);
              }
              else {
                FUN_100edbde8();
              }
              if ((uVar5 >> 0x3d & 1) == 0) {
                if (((ulong)pppppppuVar6 >> 0x3c & 1) == 0) {
                  func_0x000107c60358(pppppppuVar6,uVar5);
                  pppppppuVar7 = pppppppuVar6;
                }
                else {
                  pppppppuVar7 = (undefined8 *******)((uVar5 & 0xfffffffffffffff) + 0x20);
                }
              }
              else {
                uStack_80 = uVar5 & 0xffffffffffffff;
                pppppppuVar7 = &ppppppuStack_88;
                ppppppuStack_88 = pppppppuVar6;
              }
              FUN_101453aec();
              func_0x000107c6142c(uVar11);
              func_0x000107c6142c(uVar5);
            }
            goto LAB_100c920c0;
          }
          func_0x000107c61434(uVar17);
LAB_100c920a8:
          (*param_3)(&ppppppuStack_88,param_5,param_6,param_7,param_8,lVar13,lVar15);
          func_0x000107c6142c(uVar17);
          pppppppuVar7 = (undefined8 *******)ppppppuStack_88;
        }
        else {
          FUN_100edbde8();
          if (((ulong)ppppppuStack_f0 >> 0x3d & 1) != 0) goto LAB_100c91f94;
LAB_100c91670:
          if (((ulong)ppppppuStack_f8 >> 0x3c & 1) == 0) {
            uVar5 = (ulong)ppppppuStack_f0;
            func_0x000107c60358();
          }
          else {
            uVar5 = (ulong)ppppppuStack_f8 & 0xffffffffffff;
            ppppppuStack_f8 =
                 (undefined8 *******)(((ulong)ppppppuStack_f0 & 0xfffffffffffffff) + 0x20);
          }
          func_0x000107c61428(auStack_70,&ppppppuStack_88,0x21,0);
          uVar11 = uVar17;
          func_0x000107c61558();
          uVar8 = uVar17;
          if ((uVar11 & 1) == 0) {
            uVar8 = 0;
            FUN_100c90630(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
          }
          uVar11 = *(ulong *)(uVar8 + 0x10);
          lVar15 = uVar11 + 1;
          uVar17 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar11) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100c90630(uVar17,lVar15,1,uVar8);
          }
          *(long *)(uVar17 + 0x10) = lVar15;
          lVar13 = uVar17 + 0x20;
          plVar2 = (long *)(lVar13 + uVar11 * 0x10);
          *plVar2 = (long)ppppppuStack_f8;
          plVar2[1] = uVar5;
          auStack_70[0] = uVar17;
          func_0x000107c614a8(&ppppppuStack_88);
          if (uVar16 < 3) {
            func_0x000107c61434(uVar17);
            goto LAB_100c920a8;
          }
          pppppppuVar6 = *(undefined8 ********)(param_1 + 0x50);
          uVar5 = *(ulong *)(param_1 + 0x58);
          bVar3 = *(byte *)(param_1 + 0x60);
          if ((bVar3 & 1) == 0) {
            if (pppppppuVar6 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100c92c20);
              (*pcVar4)();
            }
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            FUN_101453aec(pppppppuVar6,uVar5,auStack_70,param_1,2,param_3,param_4,param_5,param_6,
                          param_7,param_8);
            func_0x000107c61574(param_2);
            func_0x000107c6142c(param_1);
            pppppppuVar7 = pppppppuVar6;
          }
          else {
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            func_0x000107c6030c(pppppppuVar6,uVar5,bVar3);
            func_0x000107c61434(param_1);
            func_0x000107c6157c(param_2);
            uVar16 = uVar5;
            if ((uVar5 >> 0x3c & 1) == 0) {
              func_0x000107c61434(uVar5);
              pppppppuVar7 = pppppppuVar6;
              if ((uVar5 >> 0x3d & 1) == 0) goto LAB_100c91840;
LAB_100c92c3c:
              uStack_80 = uVar16 & 0xffffffffffffff;
              pppppppuVar7 = &ppppppuStack_88;
              ppppppuStack_88 = pppppppuVar6;
            }
            else {
              FUN_100edbde8();
              pppppppuVar7 = pppppppuVar6;
              if ((uVar16 >> 0x3d & 1) != 0) goto LAB_100c92c3c;
LAB_100c91840:
              if (((ulong)pppppppuVar7 >> 0x3c & 1) == 0) {
                func_0x000107c60358(pppppppuVar7,uVar16);
              }
              else {
                pppppppuVar7 = (undefined8 *******)((uVar16 & 0xfffffffffffffff) + 0x20);
              }
            }
            FUN_101453aec();
            func_0x000107c6142c(uVar5);
            func_0x000107c61578(param_2,2);
            func_0x000107c61430(param_1,2);
            func_0x000107c6142c(uVar16);
          }
        }
LAB_100c920c0:
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(ppppppuStack_f0);
      }
    }
LAB_100c914dc:
    func_0x000107c6142c(uVar12);
  }
LAB_100c914e8:
  func_0x000107c6142c(uStack_d8);
  uVar5 = auStack_70[0];
LAB_100c914f0:
  func_0x000107c6142c(uVar5);
  return pppppppuVar7;
}



/* Entry: 100c932e0; end: 100c9335f;  */

void FUN_100c932e0(void)

{
  func_0x000100c92f48();
  return;
}



/* Entry: 100c93360; end: 100c93373; -[SCAAppStartupCompleteV2 getPayloadIdentifier] */

undefined8 FUN_100c93360(void)

{
  return 0x1147;
}



/* Entry: 100c93374; end: 100c93beb;  */

/* WARNING: Removing unreachable block (ram,0x000100c93884) */
/* WARNING: Type propagation algorithm not settling */

uint *******
FUN_100c93374(int param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             uint ******param_7,uint param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *******pppppppuVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  code *pcVar10;
  int iVar11;
  undefined **ppuVar12;
  uint *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  uint ******ppppppuVar15;
  uint *****pppppuVar16;
  long lVar17;
  uint *******pppppppuVar18;
  long *plVar19;
  long lVar20;
  uint *****pppppuVar21;
  uint *****pppppuVar22;
  uint ******ppppppuVar23;
  ulong uVar24;
  uint *****pppppuVar25;
  uint ******ppppppuVar26;
  uint *****pppppuVar27;
  undefined **ppuVar28;
  long *plVar29;
  long *plVar30;
  uint *****pppppuVar31;
  uint ****ppppuVar32;
  uint *****pppppuStack_d0;
  uint *****pppppuStack_c8;
  uint *****pppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  byte bStack_a1;
  uint *******pppppppuStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  byte bStack_89;
  uint ******ppppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar7 = param_1 - 1;
  if (2 < uVar7) {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"unknown metric type");
    func_0x000107c61180();
    ppuVar28 = &PTR____CFConstantStringClassReference_110daae18;
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar28 = ppuVar12;
    }
    func_0x000107c5c170(&PTR____CFConstantStringClassReference_110daae38);
    func_0x000107c61180();
    goto LAB_100c9343c;
  }
  if (((param_2 == 0) && (param_3 != 0)) || ((param_4 == 0 && (param_5 != 0)))) {
LAB_100c933b0:
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        "UTF8 span pointer was nil with non-zero length");
    func_0x000107c61180();
    ppuVar28 = &PTR____CFConstantStringClassReference_110daae18;
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar28 = ppuVar12;
    }
    func_0x000107c5c170(&PTR____CFConstantStringClassReference_110daae38);
    func_0x000107c61180();
LAB_100c9343c:
    func_0x000107c61170();
    func_0x000107c61170(ppuVar28);
    return (uint *******)0x0;
  }
  if (param_7 != (uint ******)0x0) {
    if (param_6 == 0) goto LAB_100c933b0;
    plVar19 = (long *)(param_6 + 8);
    ppppppuVar15 = param_7;
    do {
      if ((plVar19[-1] == 0) && (*plVar19 != 0)) goto LAB_100c933b0;
      plVar19 = plVar19 + 2;
      ppppppuVar15 = (uint ******)((long)ppppppuVar15 + -1);
    } while (ppppppuVar15 != (uint ******)0x0);
  }
  if (10000 < param_8) {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        "sample rate must be between 0 and 10000");
    func_0x000107c61180();
    ppuVar28 = &PTR____CFConstantStringClassReference_110daae18;
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar28 = ppuVar12;
    }
    func_0x000107c5c170(&PTR____CFConstantStringClassReference_110daae38);
    func_0x000107c61180();
    goto LAB_100c9343c;
  }
  if (param_8 == 0) {
    return (uint *******)0x0;
  }
  func_0x000107c3e914(PTR_PTR_1126ae4d8);
  if (param_3 == 0) {
    pppppppuStack_a0 = (uint *******)0x0;
    uStack_98 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    bStack_89 = 0;
LAB_100c9359c:
    if (param_5 == 0) {
      pppppppuStack_b8 = (undefined8 *******)0x0;
      uStack_b0 = 0;
      uStack_a9 = 0;
      uStack_a8 = 0;
      bStack_a1 = 0;
    }
    else {
      if (0x7ffffffffffffff6 < param_5) goto LAB_100c93a4c;
      if (param_5 < 0x17) {
        bStack_a1 = (byte)param_5;
        pppppppuVar14 = &pppppppuStack_b8;
      }
      else {
        pppppppuVar5 = (undefined8 *******)0x19;
        if ((param_5 | 7) != 0x17) {
          pppppppuVar5 = (undefined8 *******)((param_5 | 7) + 1);
        }
        pppppppuVar14 = pppppppuVar5;
        func_0x000107c60e20();
        bStack_a1 = (byte)((ulong)pppppppuVar5 >> 0x38) | 0x80;
        uStack_b0 = (undefined7)param_5;
        uStack_a9 = (undefined1)(param_5 >> 0x38);
        uStack_a8 = SUB87(pppppppuVar5,0);
        pppppppuStack_b8 = pppppppuVar14;
      }
      func_0x000107c610b8(pppppppuVar14,param_4);
      *(undefined1 *)((long)pppppppuVar14 + param_5) = 0;
    }
    FUN_100c93ce0(&pppppuStack_d0,param_6,param_7);
    ppppppuVar15 = (uint ******)0xb8;
    func_0x000107c60e20();
    bVar6 = bStack_89;
    pppppppuVar18 = pppppppuStack_a0;
    bVar9 = bStack_a1;
    pppppppuVar5 = pppppppuStack_b8;
    pppppuVar21 = pppppuStack_c0;
    pppppuVar25 = pppppuStack_c8;
    pppppuVar22 = pppppuStack_d0;
    ppppppuVar15[1] = (uint *****)CONCAT17(uStack_91,uStack_98);
    *(ulong *)((long)ppppppuVar15 + 0xf) = CONCAT71(uStack_90,uStack_91);
    uStack_98 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    bStack_89 = 0;
    ppppppuVar15[4] = (uint *****)CONCAT17(uStack_a9,uStack_b0);
    *(ulong *)((long)ppppppuVar15 + 0x27) = CONCAT71(uStack_a8,uStack_a9);
    uStack_a8 = 0;
    bStack_a1 = 0;
    pppppppuStack_a0 = (uint *******)0x0;
    pppppppuStack_b8 = (undefined8 *******)0x0;
    uStack_b0 = 0;
    uStack_a9 = 0;
    pppppuStack_d0 = (uint *****)0x0;
    pppppuStack_c8 = (uint *****)0x0;
    pppppuStack_c0 = (uint *****)0x0;
    ppppppuVar26 = ppppppuVar15 + 3;
    *ppppppuVar26 = (uint *****)pppppppuVar5;
    ppppppuVar15[6] = pppppuVar22;
    *ppppppuVar15 = (uint *****)pppppppuVar18;
    *(byte *)((long)ppppppuVar15 + 0x17) = bVar6;
    *(byte *)((long)ppppppuVar15 + 0x2f) = bVar9;
    ppppppuVar15[8] = pppppuVar21;
    ppppppuVar15[7] = pppppuVar25;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    ppppppuVar15[9] = (uint *****)0x0;
    *(undefined1 *)(ppppppuVar15 + 0x16) = 0;
    *(undefined1 *)(ppppppuVar15 + 0xc) = 0;
    ppppppuVar15[10] = (uint *****)0x0;
    ppppppuVar15[0xb] = (uint *****)0x0;
    if ((long)pppppuVar25 - (long)pppppuVar22 == 0) {
      pppppuVar21 = (uint *****)0x0;
    }
    else {
      lVar20 = (long)pppppuVar25 - (long)pppppuVar22 >> 3;
      if ((ulong)(lVar20 * -0x5555555555555555) >> 0x3c != 0) {
        func_0x000104bfe418();
        goto LAB_100c93a68;
      }
      pppppuVar16 = (uint *****)(lVar20 * -0x5555555555555550);
      func_0x000107c60e20();
      ppppppuVar15[9] = pppppuVar16;
      ppppppuVar15[10] = pppppuVar16;
      ppppppuVar15[0xb] = pppppuVar16 + lVar20 * -0xaaaaaaaaaaaaaaa;
      do {
        ppppuVar32 = (uint ****)(long)*(char *)((long)pppppuVar22 + 0x17);
        if ((long)ppppuVar32 < 0) {
          pppppuVar27 = (uint *****)*pppppuVar22;
          ppppuVar32 = pppppuVar22[1];
          pppppuVar21 = ppppppuVar15[0xb];
          if (pppppuVar16 < pppppuVar21) goto LAB_100c93710;
LAB_100c93750:
          pppppuVar31 = ppppppuVar15[9];
          lVar20 = (long)pppppuVar16 - (long)pppppuVar31;
          uVar1 = (lVar20 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            func_0x000104bfe418();
            goto LAB_100c93a68;
          }
          uVar24 = (long)pppppuVar21 - (long)pppppuVar31 >> 3;
          if (uVar24 <= uVar1) {
            uVar24 = uVar1;
          }
          if (0x7fffffffffffffef < (ulong)((long)pppppuVar21 - (long)pppppuVar31)) {
            uVar24 = 0xfffffffffffffff;
          }
          if (uVar24 >> 0x3c != 0) {
            func_0x000104bd35f4();
            goto LAB_100c93a68;
          }
          lVar17 = uVar24 << 4;
          func_0x000107c60e20();
          puVar2 = (undefined8 *)(lVar17 + lVar20);
          *puVar2 = pppppuVar27;
          puVar2[1] = ppppuVar32;
          pppppuVar21 = (uint *****)(puVar2 + 2);
          func_0x000107c610b4(puVar2 + (lVar20 >> 4) * -2,pppppuVar31,lVar20);
          ppppppuVar15[9] = (uint *****)(puVar2 + (lVar20 >> 4) * -2);
          ppppppuVar15[10] = pppppuVar21;
          ppppppuVar15[0xb] = (uint *****)(lVar17 + uVar24 * 0x10);
          if (pppppuVar31 != (uint *****)0x0) {
            func_0x000107c60e14(pppppuVar31);
          }
        }
        else {
          pppppuVar21 = ppppppuVar15[0xb];
          pppppuVar27 = pppppuVar22;
          if (pppppuVar21 <= pppppuVar16) goto LAB_100c93750;
LAB_100c93710:
          pppppuVar21 = pppppuVar16 + 2;
          *pppppuVar16 = (uint ****)pppppuVar27;
          pppppuVar16[1] = ppppuVar32;
        }
        ppppppuVar15[10] = pppppuVar21;
        pppppuVar22 = pppppuVar22 + 3;
        pppppuVar16 = pppppuVar21;
      } while (pppppuVar22 != pppppuVar25);
      bVar6 = *(byte *)((long)ppppppuVar15 + 0x17);
    }
    if ((char)bVar6 < '\0') {
      ppppppuVar23 = (uint ******)*ppppppuVar15;
      pppppuVar22 = ppppppuVar15[1];
    }
    else {
      pppppuVar22 = (uint *****)(ulong)bVar6;
      ppppppuVar23 = ppppppuVar15;
    }
    pppppuVar25 = (uint *****)(long)*(char *)((long)ppppppuVar15 + 0x2f);
    if ((long)pppppuVar25 < 0) {
      ppppppuVar26 = (uint ******)*ppppppuVar26;
      pppppuVar25 = ppppppuVar15[4];
    }
    *(uint *)(ppppppuVar15 + 0xc) = uVar7;
    ppppppuVar15[0xd] = (uint *****)ppppppuVar23;
    ppppppuVar15[0xe] = pppppuVar22;
    ppppppuVar15[0xf] = (uint *****)0x0;
    ppppppuVar15[0x10] = (uint *****)0x0;
    ppppppuVar15[0x11] = (uint *****)ppppppuVar26;
    ppppppuVar15[0x12] = pppppuVar25;
    ppppppuVar15[0x13] = ppppppuVar15[9];
    ppppppuVar15[0x14] = (uint *****)((long)pppppuVar21 - (long)ppppppuVar15[9] >> 4);
    uVar8 = 0;
    if (param_8 != 0) {
      uVar8 = 10000 / param_8;
    }
    *(uint *)(ppppppuVar15 + 0x15) = param_8;
    *(uint *)((long)ppppppuVar15 + 0xac) = uVar8;
    *(undefined1 *)(ppppppuVar15 + 0x16) = 1;
    ppppppuStack_88 = ppppppuVar15;
    if (pppppuStack_d0 != (uint *****)0x0) {
      for (; pppppuStack_d0 != pppppuStack_c8; pppppuStack_c8 = pppppuStack_c8 + -3) {
      }
      pppppuStack_c8 = pppppuStack_d0;
      func_0x000107c60e14(pppppuStack_d0);
    }
    pppppppuVar18 = (uint *******)0x18;
    func_0x000107c60e20();
    ppppppuStack_88 = (uint ******)0x0;
    *(uint *)pppppppuVar18 = uVar7;
    uStack_80 = 0;
    pppppppuVar18[1] = ppppppuVar15;
    pppppppuVar18[2] = param_7;
    pppppppuStack_a0 = pppppppuVar18;
    FUN_100c93f9c(&uStack_80);
    if ((bRam00000001136a3a60 & 1) == 0) {
      iVar11 = 0x136a3a60;
      func_0x000107c60e48();
      if (iVar11 != 0) {
        func_0x000107c60e34(PTR___ZNSt3__15mutexD1Ev_110346798,0x1130a8550,0x100000000);
        func_0x000107c60e4c(0x1136a3a60);
      }
    }
    func_0x000107c60d88(0x1130a8550);
    if ((bRam00000001136a3a68 & 1) == 0) {
      iVar11 = 0x136a3a68;
      func_0x000107c60e48();
      if (iVar11 != 0) {
        FUN_100c9405c();
        func_0x000107c60e34(&UNK_104bfe42c,0x1136a3a70,0x100000000);
        func_0x000107c60e4c(0x1136a3a68);
      }
    }
    plVar19 = plRam00000001136a3a70;
    if (plRam00000001136a3a78 < plRam00000001136a3a80) {
      plVar30 = plRam00000001136a3a78 + 1;
      *plRam00000001136a3a78 = (long)pppppppuStack_a0;
LAB_100c9399c:
      plRam00000001136a3a78 = plVar30;
      func_0x000107c60d8c(0x1130a8550);
      FUN_100c93f9c(&ppppppuStack_88);
      return pppppppuVar18;
    }
    lVar20 = (long)plRam00000001136a3a78 - (long)plRam00000001136a3a70;
    uVar1 = (lVar20 >> 3) + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar24 = (long)plRam00000001136a3a80 - (long)plRam00000001136a3a70 >> 2;
      if (uVar24 <= uVar1) {
        uVar24 = uVar1;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)plRam00000001136a3a80 - (long)plRam00000001136a3a70)) {
        uVar24 = 0x1fffffffffffffff;
      }
      if (uVar24 >> 0x3d == 0) {
        lVar17 = uVar24 << 3;
        func_0x000107c60e20();
        plVar3 = (long *)(lVar17 + lVar20);
        plVar4 = (long *)(lVar17 + uVar24 * 8);
        plVar29 = plVar3 + -(lVar20 >> 3);
        plVar30 = plVar3 + 1;
        *plVar3 = (long)pppppppuStack_a0;
        func_0x000107c610b4(plVar29,plVar19,lVar20);
        plRam00000001136a3a70 = plVar29;
        plRam00000001136a3a80 = plVar4;
        if (plVar19 != (long *)0x0) {
          plRam00000001136a3a78 = plVar30;
          func_0x000107c60e14(plVar19);
        }
        goto LAB_100c9399c;
      }
      func_0x000104bd35f4();
    }
    else {
      func_0x000104bfe4a4();
    }
  }
  else {
    if (param_3 < 0x7ffffffffffffff7) {
      if (param_3 < 0x17) {
        bStack_89 = (byte)param_3;
        pppppppuVar13 = (uint *******)&pppppppuStack_a0;
      }
      else {
        pppppppuVar18 = (uint *******)0x19;
        if ((param_3 | 7) != 0x17) {
          pppppppuVar18 = (uint *******)((param_3 | 7) + 1);
        }
        pppppppuVar13 = pppppppuVar18;
        func_0x000107c60e20();
        bStack_89 = (byte)((ulong)pppppppuVar18 >> 0x38) | 0x80;
        uStack_98 = (undefined7)param_3;
        uStack_91 = (undefined1)(param_3 >> 0x38);
        uStack_90 = SUB87(pppppppuVar18,0);
        pppppppuStack_a0 = pppppppuVar13;
      }
      func_0x000107c610b8(pppppppuVar13,param_2,param_3);
      *(undefined1 *)((long)pppppppuVar13 + param_3) = 0;
      goto LAB_100c9359c;
    }
    func_0x000104bd47d4();
LAB_100c93a4c:
    func_0x000104bd47d4();
  }
LAB_100c93a68:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100c93a6c);
  (*pcVar10)();
}



/* Entry: 100c93bec; end: 100c93c4f;  */

void FUN_100c93bec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  code *pcVar1;
  
  if (param_9 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c93c4c);
    (*pcVar1)();
  }
  if (param_9 < 0x80000000) {
    FUN_100c93374(param_8,param_2,param_3,param_4,param_5,param_6,param_7);
    *param_1 = param_8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c93c50);
  (*pcVar1)();
}



/* Entry: 100c93c50; end: 100c93ca7; -[SCAAppStartupCompleteV2 toProtoWithAllowedFields:] */

void FUN_100c93c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3d8f8(param_1);
  func_0x000107c5cb18(param_1,param_2,3,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c93ca8; end: 100c93cdf; -[SCAAppStartupCompleteV2 addToProtoDictionary] */

void FUN_100c93ca8(undefined8 param_1)

{
  func_0x000107c4f534();
  func_0x000107c61180();
  func_0x000107c3d66c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c93ce0; end: 100c93e63;  */

void FUN_100c93ce0(long *param_1,long param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_3) {
      func_0x000104bdcf60();
LAB_100c93e20:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c93e24);
      (*pcVar2)();
    }
    lVar3 = param_3 * 0x18;
    func_0x000107c60e20();
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar3 + param_3 * 0x18;
    puVar7 = (ulong *)(param_2 + 8);
    do {
      uVar5 = *puVar7;
      if (uVar5 == 0) {
        ppuStack_78 = (undefined8 ***)0x0;
        uStack_70 = 0;
        uStack_68 = 0;
      }
      else {
        if (0x7ffffffffffffff6 < uVar5) {
          func_0x000104bd47d4();
          goto LAB_100c93e20;
        }
        uVar6 = puVar7[-1];
        if (uVar5 < 0x17) {
          uStack_68 = CONCAT17((char)uVar5,(undefined7)uStack_68);
          pppuVar4 = &ppuStack_78;
        }
        else {
          pppuVar1 = (undefined8 ***)0x19;
          if ((uVar5 | 7) != 0x17) {
            pppuVar1 = (undefined8 ***)((uVar5 | 7) + 1);
          }
          pppuVar4 = pppuVar1;
          func_0x000107c60e20();
          uStack_68 = (ulong)pppuVar1 | 0x8000000000000000;
          ppuStack_78 = pppuVar4;
          uStack_70 = uVar5;
        }
        func_0x000107c610b8(pppuVar4,uVar6,uVar5);
        *(undefined1 *)((long)pppuVar4 + uVar5) = 0;
      }
      FUN_100c93e64(param_1,&ppuStack_78);
      if ((long)uStack_68 < 0) {
        func_0x000107c60e14(ppuStack_78);
      }
      puVar7 = puVar7 + 2;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 100c93e64; end: 100c93f9b;  */

/* WARNING: Removing unreachable block (ram,0x000100c93ffc) */

long * FUN_100c93e64(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar13;
    *puVar8 = uVar12;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar8 = puVar8 + 3;
    plVar3 = param_1;
LAB_100c93ea8:
    param_1[1] = (long)puVar8;
    return plVar3;
  }
  lVar10 = (long)puVar8 - *param_1;
  uVar5 = (lVar10 >> 3) * -0x5555555555555555 + 1;
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      lVar6 = uVar7 * 0x18;
      func_0x000107c60e20();
      puVar1 = (undefined8 *)(lVar6 + lVar10);
      uVar12 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar12;
      puVar1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      puVar8 = puVar1 + 3;
      plVar4 = (long *)*param_1;
      plVar9 = (long *)((long)puVar1 - (param_1[1] - (long)plVar4));
      plVar3 = plVar9;
      func_0x000107c610b4(plVar9,plVar4);
      *param_1 = (long)plVar9;
      param_1[1] = (long)puVar8;
      param_1[2] = lVar6 + uVar7 * 0x18;
      if (plVar4 != (long *)0x0) {
        func_0x000107c60e14(plVar4);
        param_1[1] = (long)puVar8;
        return plVar4;
      }
      goto LAB_100c93ea8;
    }
  }
  else {
    func_0x000104bdcf60();
  }
  func_0x000104bd35f4();
  puVar8 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar8 != (undefined8 *)0x0) {
    if (puVar8[9] != 0) {
      puVar8[10] = puVar8[9];
      func_0x000107c60e14();
    }
    lVar10 = puVar8[6];
    if (lVar10 != 0) {
      lVar11 = puVar8[7];
      lVar6 = lVar10;
      if (lVar10 != lVar11) {
        do {
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != lVar10);
        lVar6 = puVar8[6];
      }
      puVar8[7] = lVar10;
      func_0x000107c60e14(lVar6);
    }
    if (*(char *)((long)puVar8 + 0x2f) < '\0') {
      func_0x000107c60e14(puVar8[3]);
      cVar2 = *(char *)((long)puVar8 + 0x17);
    }
    else {
      cVar2 = *(char *)((long)puVar8 + 0x17);
    }
    if (cVar2 < '\0') {
      func_0x000107c60e14(*puVar8);
    }
    func_0x000107c60e14(puVar8);
  }
  return param_1;
}



/* Entry: 100c93f9c; end: 100c9405b;  */

/* WARNING: Removing unreachable block (ram,0x000100c93ffc) */

undefined8 * FUN_100c93f9c(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3[9] != 0) {
      puVar3[10] = puVar3[9];
      func_0x000107c60e14();
    }
    lVar4 = puVar3[6];
    if (lVar4 != 0) {
      lVar5 = puVar3[7];
      lVar2 = lVar4;
      if (lVar4 != lVar5) {
        do {
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != lVar4);
        lVar2 = puVar3[6];
      }
      puVar3[7] = lVar4;
      func_0x000107c60e14(lVar2);
    }
    if (*(char *)((long)puVar3 + 0x2f) < '\0') {
      func_0x000107c60e14(puVar3[3]);
      cVar1 = *(char *)((long)puVar3 + 0x17);
    }
    else {
      cVar1 = *(char *)((long)puVar3 + 0x17);
    }
    if (cVar1 < '\0') {
      func_0x000107c60e14(*puVar3);
    }
    func_0x000107c60e14(puVar3);
  }
  return param_1;
}



/* Entry: 100c9405c; end: 100c940af;  */

void FUN_100c9405c(void)

{
  long lVar1;
  
  lRam00000001136a3a70 = 0;
  lRam00000001136a3a78 = 0;
  lRam00000001136a3a80 = 0;
  lVar1 = 0x800;
  func_0x000107c60e20();
  lRam00000001136a3a70 = lVar1;
  lRam00000001136a3a78 = lVar1;
  lRam00000001136a3a80 = lVar1 + 0x800;
  return;
}



/* Entry: 100c940b0; end: 100c941e3;  */

void FUN_100c940b0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
  
  lVar8 = *unaff_x20;
  uVar3 = param_3;
  uVar4 = param_2;
  func_0x0001000a7158();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100c9416c);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    param_4 = param_4 & 1;
    FUN_100c941e4(lVar6);
    uVar3 = param_3;
    func_0x0001000a7158();
    if (((uint)uVar4 & 1) != (param_4 & 1)) {
      func_0x000107c60624(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c94148);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101453640();
    lVar6 = *unaff_x20;
    goto joined_r0x000100c94180;
  }
  lVar6 = *unaff_x20;
joined_r0x000100c94180:
  if ((uVar4 & 1) == 0) {
    lVar5 = lVar6 + (uVar3 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
    *(ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 8) = param_3;
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x10);
    *puVar1 = param_1;
    *(char *)(puVar1 + 1) = (char)param_2;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c941e4);
      (*pcVar2)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x10);
    *puVar1 = param_1;
    *(char *)(puVar1 + 1) = (char)param_2;
  }
  return;
}



/* Entry: 100c941e4; end: 100c94453;  */

void FUN_100c941e4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar16 = 0x112da00d0;
  func_0x0001000285a8(0x112da00d0,&UNK_10d942560);
  lVar6 = lVar14;
  func_0x000107c60490(lVar14,lVar1,param_2,uVar16);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_100c94420:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar6;
    return;
  }
  puVar15 = (ulong *)(lVar14 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *puVar15;
  lVar1 = lVar6 + 0x40;
  lVar9 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar17 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100c94450);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar13 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
            if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar13 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar15,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar14 + 0x10) = 0;
          }
          goto LAB_100c94420;
        }
        uVar13 = puVar15[lVar17];
        lVar9 = lVar9 + 1;
      } while (uVar13 == 0);
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar17 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar17 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar8 * 0x10);
    uVar16 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar8 * 8);
    uVar3 = *(undefined1 *)(puVar2 + 1);
    uVar18 = *puVar2;
    uVar7 = *(ulong *)(lVar6 + 0x28);
    func_0x000107c60688(uVar7,uVar16);
    uVar12 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar7 >> 6;
    uVar8 = -1L << (uVar7 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar4 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar7 = uVar10 + 1;
        if ((uVar7 == uVar8) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100c94454);
          (*pcVar5)();
        }
        uVar10 = 0;
        if (uVar7 != uVar8) {
          uVar10 = uVar7;
        }
        bVar4 = (bool)(uVar7 == uVar8 | bVar4);
        uVar7 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar7 == 0xffffffffffffffff);
      uVar7 = ~uVar7;
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar7 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(undefined8 *)(*(long *)(lVar6 + 0x30) + uVar8 * 8) = uVar16;
    puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar8 * 0x10);
    *puVar2 = uVar18;
    *(undefined1 *)(puVar2 + 1) = uVar3;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar17;
  } while( true );
}



/* Entry: 100c94454; end: 100c94463;  */

undefined1  [16] FUN_100c94454(void)

{
  return ZEXT816(0x1103bcaf8);
}



/* Entry: 100c94464; end: 100c9450f;  */

long FUN_100c94464(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar9 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 8;
  *(undefined8 *)(lVar9 + 0x10) = 4;
  *(undefined8 *)(lVar9 + 0x20) = uVar1;
  *(undefined8 *)(lVar9 + 0x28) = uVar5;
  *(undefined8 *)(lVar9 + 0x30) = uVar2;
  *(undefined8 *)(lVar9 + 0x38) = uVar6;
  *(undefined8 *)(lVar9 + 0x40) = uVar3;
  *(undefined8 *)(lVar9 + 0x48) = uVar7;
  *(undefined8 *)(lVar9 + 0x50) = uVar4;
  *(undefined8 *)(lVar9 + 0x58) = uVar8;
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  return lVar9;
}



/* Entry: 100c94510; end: 100c9455f;  */

void FUN_100c94510(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d9ff70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d38270;
  func_0x00010002969c(0x112d38270,&UNK_10d905a20);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d9ff70 = puVar2;
  return;
}



/* Entry: 100c94560; end: 100c946db;  */

void FUN_100c94560(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar1 = &UNK_1103bcb80;
  func_0x000107c613fc(&UNK_1103bcb80,0x18,7);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(puVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = param_3;
  func_0x000107c5fe84(param_3,param_4);
  puVar3 = puVar6;
  func_0x000107c61558();
  *(undefined **)(puVar1 + 0x10) = puVar6;
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar6 + 0x18) >> 1) < lVar2)) {
    FUN_100c90630();
    puVar6 = puVar3;
  }
  *(undefined **)(puVar1 + 0x10) = puVar6;
  uVar7 = *(undefined8 *)(param_4 + 8);
  uVar4 = 0;
  uVar5 = uVar7;
  func_0x000107c614b8(0,uVar7,param_3,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  func_0x000107c613f4();
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
  func_0x000107c5fbdc(uVar5,param_3,uVar7);
  FUN_100c94710(uVar4,puVar1,FUN_100c94dd8,param_2,param_3,PTR___sytN_11034f1b0 + 8,param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 100c946dc; end: 100c9470f;  */

void FUN_100c946dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_3;
  FUN_100c94560(param_2,auStack_30,param_4,param_5);
  return;
}


