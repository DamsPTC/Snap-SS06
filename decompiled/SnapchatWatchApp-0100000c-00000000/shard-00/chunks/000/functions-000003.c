/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000166c8; end: 1000166fb;  */

void FUN_1000166c8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 1000166fc; end: 100016773;  */

void FUN_1000166fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100016a68;
  plVar6[3] = lVar4;
  plVar6[4] = lVar3;
  lVar3 = 0;
  __sScMMa(0,uVar5,uVar1);
  puVar2 = PTR___sScMMa_100028b38;
  lVar4 = lVar3;
  __sScM6sharedScMvgZ();
  plVar6[5] = lVar4;
  uVar5 = 0x10002dbc8;
  FUN_100016688(0x10002dbc8,puVar2,PTR___sScMScAsMc_100028b40);
  __sScA15unownedExecutorScevgTj(lVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100020af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100028b70)(FUN_100015a94,lVar3,uVar5);
  return;
}



/* Entry: 100016774; end: 1000167bb;  */

undefined8 FUN_100016774(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_10000c3c0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1000167bc; end: 1000167fb;  */

undefined8 FUN_1000167bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_10000c3c0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1000167fc; end: 10001686b;  */

void FUN_1000167fc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100016a64;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_100016150;
                    /* WARNING: Could not recover jumptable at 0x00010001614c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 10001686c; end: 10001688f;  */

void FUN_10001686c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 100016890; end: 1000168ff;  */

void FUN_100016890(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100016900;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_100016150;
                    /* WARNING: Could not recover jumptable at 0x00010001614c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 100016900; end: 10001693b;  */

void FUN_100016900(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100016938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10001693c; end: 10001696f;  */

void FUN_10001693c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 100016970; end: 1000169e7;  */

void FUN_100016970(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000169e8;
  plVar6[3] = lVar4;
  plVar6[4] = lVar3;
  lVar3 = 0;
  __sScMMa(0,uVar5,uVar1);
  puVar2 = PTR___sScMMa_100028b38;
  lVar4 = lVar3;
  __sScM6sharedScMvgZ();
  plVar6[5] = lVar4;
  uVar5 = 0x10002dbc8;
  FUN_100016688(0x10002dbc8,puVar2,PTR___sScMScAsMc_100028b40);
  __sScA15unownedExecutorScevgTj(lVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100020af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100028b70)(FUN_100015814,lVar3,uVar5);
  return;
}



/* Entry: 1000169e8; end: 100016a23;  */

void FUN_1000169e8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100016a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100016a24; end: 100016a5f;  */

undefined8 FUN_100016a24(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___ss11AnyHashableVN_100028858 + -8) + 0x10))(param_2,param_1);
  return param_2;
}



/* Entry: 100016a60; end: 100016a63;  */

void FUN_100016a60(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 100016a64; end: 100016a67;  */

void FUN_100016a64(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100016938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100016a68; end: 100016a6b;  */

void FUN_100016a68(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100016a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100016a6c; end: 100016e37;  */

undefined1  [16]
FUN_100016a6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  undefined *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0x20;
  uStack_68 = 0xe100000000000000;
  puStack_80 = &uStack_70;
  _swift_bridgeObjectRetain(param_2);
  lVar8 = 0x7fffffffffffffff;
  FUN_10001709c(0x7fffffffffffffff,1,FUN_1000175ac,&puStack_90,param_1,param_2);
  uVar18 = *(ulong *)(lVar8 + 0x10);
  if (uVar18 == 0) {
    _swift_bridgeObjectRelease();
    puVar10 = PTR___swiftEmptyArrayStorage_1000289d8;
  }
  else {
    puStack_90 = PTR___swiftEmptyArrayStorage_1000289d8;
    FUN_100017488(0,uVar18,0);
    uVar16 = 0;
    puVar19 = (undefined8 *)(lVar8 + 0x38);
    do {
      puVar10 = puStack_90;
      if (*(ulong *)(lVar8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100016e34);
        (*pcVar7)();
      }
      uVar9 = puVar19[-3];
      uVar12 = puVar19[-2];
      uVar1 = puVar19[-1];
      uVar4 = *puVar19;
      _swift_bridgeObjectRetain(uVar4);
      __sSS14_fromSubstringySSSshFZ(uVar9,uVar12,uVar1,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      uVar2 = *(ulong *)(puVar10 + 0x10);
      puStack_90 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
        FUN_100017488(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
      }
      puVar10 = puStack_90;
      uVar16 = uVar16 + 1;
      *(ulong *)(puStack_90 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puStack_90 + uVar2 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puStack_90 + uVar2 * 0x10 + 0x28) = uVar12;
      puVar19 = puVar19 + 4;
    } while (uVar18 != uVar16);
    _swift_bridgeObjectRelease(lVar8);
  }
  uVar18 = 0;
  uVar16 = *(ulong *)(puVar10 + 0x10);
  puVar17 = PTR___swiftEmptyArrayStorage_1000289d8;
  do {
    puVar15 = (ulong *)(puVar10 + uVar18 * 0x10 + 0x28);
    do {
      if (uVar16 == uVar18) {
        _swift_bridgeObjectRelease(puVar10);
        uVar18 = *(ulong *)(puVar17 + 0x10);
        if (uVar18 == 0) {
          _swift_release(puVar17);
LAB_100016cdc:
          puVar10 = (undefined *)0xf;
          __sSSySJSS5IndexVcig(0xf,param_3,param_4);
          lVar8 = param_3;
          __sSJ10uppercasedSSyF();
        }
        else {
          if (uVar18 == 1) {
            puVar10 = *(undefined **)(puVar17 + 0x20);
            lVar8 = *(long *)(puVar17 + 0x28);
            _swift_bridgeObjectRetain(lVar8);
            _swift_release(puVar17);
            lVar13 = lVar8;
            FUN_100016e38(puVar10);
            _swift_bridgeObjectRelease(lVar8);
            if (lVar13 == 0) goto LAB_100016cdc;
          }
          else {
            puVar19 = (undefined8 *)(puVar17 + 0x20);
            puVar10 = (undefined *)*puVar19;
            lVar8 = *(long *)(puVar17 + 0x28);
            _swift_bridgeObjectRetain(lVar8);
            lVar13 = lVar8;
            FUN_100016e38(puVar10);
            _swift_bridgeObjectRelease(lVar8);
            if (*(ulong *)(puVar17 + 0x10) < uVar18) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100016e38);
              (*pcVar7)();
            }
            puVar11 = (undefined *)puVar19[uVar18 * 2 + -2];
            lVar8 = puVar19[uVar18 * 2 + -1];
            _swift_bridgeObjectRetain(lVar8);
            _swift_release(puVar17);
            lVar14 = lVar8;
            FUN_100016e38(puVar11);
            _swift_bridgeObjectRelease(lVar8);
            puVar6 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100028940;
            puVar17 = PTR___ss26DefaultStringInterpolationVN_100028938;
            if (lVar13 == 0) {
              if (lVar14 != 0) {
                lVar8 = lVar14;
                __sSS10uppercasedSSyF(puVar11,lVar14);
                puVar10 = puVar11;
                param_3 = lVar14;
                goto LAB_100016dfc;
              }
              goto LAB_100016cdc;
            }
            if (lVar14 != 0) {
              puStack_90 = (undefined *)0x0;
              lStack_88 = -0x2000000000000000;
              __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                        (&puStack_90,puVar10,lVar13,PTR___ss26DefaultStringInterpolationVN_100028938
                         ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100028940);
              _swift_bridgeObjectRelease(lVar13);
              __sSJ5write2toyxz_ts16TextOutputStreamRzlF(&puStack_90,puVar11,lVar14,puVar17,puVar6);
              _swift_bridgeObjectRelease(lVar14);
              puVar10 = puStack_90;
              lVar13 = lStack_88;
            }
          }
          param_3 = lVar13;
          lVar8 = param_3;
          __sSS10uppercasedSSyF(puVar10,param_3);
        }
LAB_100016dfc:
        _swift_bridgeObjectRelease(param_3);
        auVar20._8_8_ = lVar8;
        auVar20._0_8_ = puVar10;
        return auVar20;
      }
      if (*(ulong *)(puVar10 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100016e30);
        (*pcVar7)();
      }
      uVar3 = puVar15[-1];
      uVar5 = *puVar15;
      puVar15 = puVar15 + 2;
      uVar18 = uVar18 + 1;
      uVar2 = uVar3 & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar2 = uVar5 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    _swift_bridgeObjectRetain(uVar5);
    puVar11 = puVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    puStack_90 = puVar17;
    if (((ulong)puVar11 & 1) == 0) {
      FUN_100017488(0,*(long *)(puVar17 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_90 + 0x10);
    if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar2) {
      FUN_100017488(1 < *(ulong *)(puStack_90 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_90 + 0x10) = uVar2 + 1;
    *(ulong *)(puStack_90 + uVar2 * 0x10 + 0x20) = uVar3;
    *(ulong *)(puStack_90 + uVar2 * 0x10 + 0x28) = uVar5;
    puVar17 = puStack_90;
  } while( true );
}



/* Entry: 100016e38; end: 100016ed3;  */

undefined1  [16] FUN_100016e38(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = param_2;
  uVar3 = param_2;
  _swift_bridgeObjectRetain();
  __sSS8IteratorV4nextSJSgyF();
  while ((uVar3 != 0 && (uVar2 = uVar1, uVar4 = uVar3, FUN_100016ed4(), (uVar2 & 1) != 0))) {
    _swift_bridgeObjectRelease();
    __sSS8IteratorV4nextSJSgyF();
    uVar1 = uVar3;
    uVar3 = uVar4;
  }
  _swift_bridgeObjectRelease(param_2);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 100016ed4; end: 10001709b;  */

uint FUN_100016ed4(undefined8 ****param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  
  lVar3 = 0;
  __ss7UnicodeO6ScalarV10PropertiesVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&pppuStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = 0;
    uStack_78 = param_2 & 0xffffffffffffff;
    pppuStack_80 = (undefined8 ***)((param_2 & 0xfffffffffffffff) + 0x20);
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          ppppuVar9 = (undefined8 ****)pppuStack_80;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            ppppuVar9 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pppuStack_70 = param_1;
          uStack_68 = uStack_78;
          ppppuVar9 = &pppuStack_70;
        }
        pbVar5 = (byte *)((long)ppppuVar9 + lVar7);
        bVar2 = *pbVar5;
        uVar4 = (ulong)(uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar6 = (uint)LZCOUNT((uint)bVar2 << 0x18 ^ 0xffffffff);
          if (uVar6 < 3) {
            if (uVar6 == 1) goto LAB_100016fac;
            uVar4 = (ulong)(pbVar5[1] & 0x3f);
            ppppuVar9 = (undefined8 ****)0x2;
          }
          else if (uVar6 == 3) {
            uVar4 = (ulong)(pbVar5[2] & 0x3f);
            ppppuVar9 = (undefined8 ****)0x3;
          }
          else {
            uVar4 = (ulong)(pbVar5[3] & 0x3f);
            ppppuVar9 = (undefined8 ****)0x4;
          }
        }
        else {
LAB_100016fac:
          ppppuVar9 = (undefined8 ****)0x1;
        }
      }
      else {
        uVar4 = lVar7 << 0x10;
        ppppuVar9 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (uVar4,param_1,param_2);
      }
      __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(lVar8);
      __ss7UnicodeO6ScalarV10PropertiesV19isEmojiPresentationSbvg();
      uVar6 = (uint)uVar4;
      (**(code **)(lVar10 + 8))(lVar8,lVar3);
    } while (((uVar4 & 1) == 0) && (lVar7 = (long)ppppuVar9 + lVar7, lVar7 < (long)uVar1));
  }
  return uVar6 & 1;
}



/* Entry: 10001709c; end: 100017487;  */

undefined *
FUN_10001709c(long param_1,ulong param_2,code *param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_80;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100017420);
    (*pcVar2)();
  }
  uVar10 = param_6 >> 0x38 & 0xf;
  uVar9 = (uint)(param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar10;
    }
    if (uVar13 != 0) {
      uVar9 = uVar9 >> 0x1b & 1;
      if ((param_6 & 0x1000000000000000) == 0) {
        uVar9 = 1;
      }
      uVar10 = 7;
      if (uVar9 == 0) {
        uVar10 = 0xb;
      }
      uVar10 = uVar10 | uVar13 << 0x10;
      uVar13 = uVar13 * 4;
      puVar11 = (undefined *)0xf;
      puStack_80 = PTR___swiftEmptyArrayStorage_1000289d8;
LAB_100017124:
      uVar12 = (ulong)puVar11 >> 0xe;
      puVar6 = puVar11;
      puVar5 = puVar11;
      if (uVar12 != uVar13) {
        do {
          puVar11 = puVar6;
          uVar7 = param_5;
          __sSSySJSS5IndexVcig(puVar11,param_5,param_6);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(puStack_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(uVar7);
            return puVar11;
          }
          _swift_bridgeObjectRelease(uVar7);
          if ((uVar3 & 1) == 0) {
            __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
            puVar6 = puVar11;
            puVar11 = puVar5;
          }
          else {
            if (((ulong)puVar5 >> 0xe != uVar12) || ((param_2 & 1) == 0)) goto LAB_1000171e0;
            __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
            puVar6 = puVar11;
          }
          uVar12 = (ulong)puVar6 >> 0xe;
          puVar5 = puVar11;
          if (uVar12 == uVar13) break;
        } while( true );
      }
      goto LAB_10001736c;
    }
  }
  uVar13 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar10;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return PTR___swiftEmptyArrayStorage_1000289d8;
  }
  uVar9 = uVar9 >> 0x1b & 1;
  if ((param_6 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar10 = 7;
  if (uVar9 == 0) {
    uVar10 = 0xb;
  }
  uVar10 = uVar10 | uVar13 << 0x10;
  uVar4 = 0xf;
  uVar12 = param_6;
  __sSSySsSnySS5IndexVGcig();
  puVar11 = (undefined *)0x0;
  FUN_100017728(0,1,1,PTR___swiftEmptyArrayStorage_1000289d8);
  uVar13 = *(ulong *)(puVar11 + 0x10);
  puStack_80 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
    puStack_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_100017728(puStack_80,uVar13 + 1,1,puVar11);
  }
  *(ulong *)(puStack_80 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puStack_80 + uVar13 * 0x20 + 0x20) = uVar4;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x28) = uVar10;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x30) = param_5;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x38) = uVar12;
LAB_100017380:
  _swift_bridgeObjectRelease(param_6);
  return puStack_80;
LAB_1000171e0:
  if (uVar12 < (ulong)puVar5 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100017488);
    (*pcVar2)();
  }
  puVar8 = puVar11;
  uVar12 = param_5;
  uVar3 = param_6;
  __sSSySsSnySS5IndexVGcig();
  puVar6 = puStack_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(puStack_80 + 0x10);
    puStack_80 = (undefined *)0x0;
    FUN_100017728(0,*plVar1 + 1,1);
  }
  uVar7 = *(ulong *)(puStack_80 + 0x10);
  if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar7) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
    FUN_100017728(puVar6,uVar7 + 1,1,puStack_80);
    puStack_80 = puVar6;
  }
  *(ulong *)(puStack_80 + 0x10) = uVar7 + 1;
  *(undefined **)(puStack_80 + uVar7 * 0x20 + 0x20) = puVar5;
  *(undefined **)(puStack_80 + uVar7 * 0x20 + 0x28) = puVar8;
  *(ulong *)(puStack_80 + uVar7 * 0x20 + 0x30) = uVar12;
  *(ulong *)(puStack_80 + uVar7 * 0x20 + 0x38) = uVar3;
  __sSS5index5afterSS5IndexVAD_tF(puVar11,param_5,param_6);
  if (*(long *)(puStack_80 + 0x10) == param_1) goto LAB_10001736c;
  goto LAB_100017124;
LAB_10001736c:
  if (((ulong)puVar11 >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)puVar11 >> 0xe <= uVar13) {
      uVar13 = param_6;
      __sSSySsSnySS5IndexVGcig();
      _swift_bridgeObjectRelease(param_6);
      puVar6 = puStack_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puStack_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_100017728(0,*(long *)(puStack_80 + 0x10) + 1,1,puStack_80);
      }
      uVar12 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar12) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100017728(puVar6,uVar12 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar6 + uVar12 * 0x20 + 0x20) = puVar11;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x28) = uVar10;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x30) = param_5;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x38) = uVar13;
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100017444);
    (*pcVar2)();
  }
  goto LAB_100017380;
}



/* Entry: 100017488; end: 1000174a3;  */

void FUN_100017488(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1000174a4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1000174a4; end: 1000175ab;  */

undefined * FUN_1000174a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000175ac);
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
  puVar3 = PTR___swiftEmptyArrayStorage_1000289d8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x10002dc60;
    FUN_10000c3c0(0x10002dc60,&UNK_100021d78);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSSN_1000287b8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1000175ac; end: 1000175ff;  */

uint FUN_1000175ac(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 100017600; end: 10001760f;  */

undefined1  [16] FUN_100017600(void)

{
  return ZEXT816(0x100029350);
}



/* Entry: 100017610; end: 100017727;  */

undefined1  [16] FUN_100017610(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lVar7 + 0x40));
  lVar2 = 0xc;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0xc,PTR___ss5UInt8VN_100028968);
  *(undefined8 *)(lVar2 + 0x10) = 0xc;
  puVar6 = (undefined8 *)(lVar2 + 0x20);
  *puVar6 = 0;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  uVar3 = *(undefined8 *)PTR__kSecRandomDefault_100028188;
  puVar4 = (undefined8 *)0xc;
  _SecRandomCopyBytes(uVar3,0xc,puVar6);
  if ((int)uVar3 == 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    FUN_1000178e4(puVar6,uVar5);
    uVar3 = 0;
    puVar4 = puVar6;
    __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
              (0,puVar6,uVar5);
    FUN_100010168(puVar6,uVar5);
  }
  else {
    __s10Foundation4UUIDVACycfC
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  }
  _swift_bridgeObjectRelease(lVar2);
  auVar8._8_8_ = puVar4;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



/* Entry: 100017728; end: 10001782f;  */

undefined * FUN_100017728(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100017830);
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
  puVar3 = PTR___swiftEmptyArrayStorage_1000289d8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x10002dc68;
    FUN_10000c3c0(0x10002dc68,&UNK_100021d98);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSsN_100028830);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 100017830; end: 1000178e3;  */

undefined1  [16] FUN_100017830(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uStack_28;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_100028290;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = param_2 - param_1;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000178dc);
    (*pcVar1)();
  }
  if (0xff < uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000178e0);
    (*pcVar1)();
  }
  uStack_28 = 0;
  uVar4 = uVar2 << 0x30;
  uStack_1a = (undefined1)uVar2;
  uStack_1c = 0;
  uStack_20 = 0;
  if ((param_1 != 0) && (param_2 != param_1)) {
    _memcpy(&uStack_28);
    uVar4 = (ulong)CONCAT16(uStack_1a,CONCAT24(uStack_1c,uStack_20));
    param_2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_100028290 != lStack_18) {
    uVar2 = uStack_28;
    ___stack_chk_fail(uStack_28);
    if (param_2 == 0) {
      return ZEXT816(0xc000000000000000) << 0x40;
    }
    if (param_2 < 0xf) {
      param_2 = uVar2 + param_2;
      FUN_100017830();
      param_2 = param_2 & 0xffffffffffffff;
      uVar4 = uVar2;
    }
    else {
      uVar3 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(uVar2,param_2,uVar3);
      if (param_2 < 0x7fffffff) {
        uVar4 = param_2 << 0x20;
        param_2 = uVar2 | 0x4000000000000000;
      }
      else {
        uVar4 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(uVar4 + 0x10) = 0;
        *(ulong *)(uVar4 + 0x18) = param_2;
        param_2 = uVar2 | 0x8000000000000000;
      }
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
  auVar5._8_8_ = uVar4 & 0xffffffffffffff;
  auVar5._0_8_ = uStack_28;
  return auVar5;
}



/* Entry: 1000178e4; end: 10001798b;  */

undefined1  [16] FUN_1000178e4(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 != 0) {
    if (param_2 < 0xf) {
      param_2 = param_1 + param_2;
      FUN_100017830(param_1,param_2);
      param_2 = param_2 & 0xffffffffffffff;
      uVar2 = param_1;
    }
    else {
      uVar1 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(param_1,param_2,uVar1);
      if (param_2 < 0x7fffffff) {
        uVar2 = param_2 << 0x20;
        param_2 = param_1 | 0x4000000000000000;
      }
      else {
        uVar2 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(uVar2 + 0x10) = 0;
        *(ulong *)(uVar2 + 0x18) = param_2;
        param_2 = param_1 | 0x8000000000000000;
      }
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 10001798c; end: 10001799b;  */

undefined1  [16] FUN_10001798c(void)

{
  return ZEXT816(0x100029370);
}



/* Entry: 10001799c; end: 1000179af;  */

bool FUN_10001799c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1000179b0; end: 1000179b3;  */

void FUN_1000179b0(void)

{
  undefined *puVar1;
  
  if (puRam000000010002dc70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021da0;
  _swift_getWitnessTable(&UNK_100021da0,&UNK_1000293b8);
  puRam000000010002dc70 = puVar1;
  return;
}



/* Entry: 1000179b4; end: 1000179f3;  */

void FUN_1000179b4(void)

{
  undefined *puVar1;
  
  if (puRam000000010002dc70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021da0;
  _swift_getWitnessTable(&UNK_100021da0,&UNK_1000293b8);
  puRam000000010002dc70 = puVar1;
  return;
}



/* Entry: 1000179f4; end: 100017a37;  */

void FUN_1000179f4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100017a38; end: 100017a5f;  */

void FUN_100017a38(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 100017a60; end: 100017a9f;  */

void FUN_100017a60(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100017aa0; end: 100017abb;  */

void FUN_100017aa0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 100017abc; end: 100017ac7;  */

void FUN_100017abc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 100017ac8; end: 100017ad7;  */

undefined1  [16] FUN_100017ac8(void)

{
  return ZEXT816(0x1000293b8);
}



/* Entry: 100017ad8; end: 100017afb; +[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType video] */

void FUN_100017ad8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f45444956,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100017afc; end: 100017b2b; +[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType silentSnap] */

void FUN_100017afc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535f544e454c4953,0xeb0000000050414e);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100017b2c; end: 100017b2f; -[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType .cxx_destruct] */

void FUN_100017b2c(void)

{
  return;
}



/* Entry: 100017b30; end: 100017b63; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName audioSnap] */

void FUN_100017b30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e735f6f69647561,0xef6e6f63695f7061);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100017b64; end: 100017b8f; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName silentSnap] */

void FUN_100017b64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x8000000100026540);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100017b90; end: 100017bbb; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName chatBubble] */

void FUN_100017b90(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x8000000100026560);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100017bbc; end: 100017be7; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName priorityChatBell] */

void FUN_100017bbc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x8000000100026580);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100017be8; end: 100017beb;  */

void FUN_100017be8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100017bec; end: 100017c27;  */

void FUN_100017bec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100017c28; end: 100017c2b;  */

void FUN_100017c28(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002cb48);
  return;
}



/* Entry: 100017c2c; end: 100017c5f;  */

void FUN_100017c2c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002cb48);
  return;
}



/* Entry: 100017c60; end: 100017c7f;  */

void FUN_100017c60(void)

{
  _objc_opt_self(&PTR_PTR_10002d1b0);
  return;
}



/* Entry: 100017c80; end: 100017c83; -[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName .cxx_destruct] */

void FUN_100017c80(void)

{
  return;
}



/* Entry: 100017c84; end: 100017ca3;  */

void FUN_100017c84(void)

{
  _objc_opt_self(&PTR_PTR_10002d260);
  return;
}



/* Entry: 100017ca4; end: 100017ca7; -[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType init] */

void FUN_100017ca4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100017ca8; end: 100017cab; -[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName init] */

void FUN_100017ca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100017cac; end: 100017caf;  */

void FUN_100017cac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002cb48);
  return;
}



/* Entry: 100017cb0; end: 100017cdb; +[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants temporaryMutingCategory] */

void FUN_100017cb0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000001000265a0);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100017cdc; end: 100017ce7;  */

undefined * FUN_100017cdc(void)

{
  return &UNK_100029420;
}



/* Entry: 100017ce8; end: 100017d13; +[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants temporaryMutingTextReplyCategory] */

void FUN_100017ce8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x80000001000265c0);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100017d14; end: 100017d4f; -[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants init] */

void FUN_100017d14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100017d50; end: 100017d83;  */

void FUN_100017d50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002cb48);
  return;
}



/* Entry: 100017d84; end: 100017d87; -[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants .cxx_destruct] */

void FUN_100017d84(void)

{
  return;
}



/* Entry: 100017d88; end: 100017da7;  */

void FUN_100017d88(void)

{
  _objc_opt_self(&PTR_PTR_10002d310);
  return;
}



/* Entry: 100017da8; end: 100017df3; -[SCNotificationCountPerSenderInfo senderUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017da8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_10002dcf0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_10002dcf0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)(uVar2);
  return;
}



/* Entry: 100017df4; end: 100017e03; -[SCNotificationCountPerSenderInfo count] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100017df4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_10002dcf8);
}



/* Entry: 100017e04; end: 100017e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_10002dcf0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_10002dcf8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100017e70; end: 100017e8f;  */

void FUN_100017e70(void)

{
  _objc_opt_self(&PTR_PTR_10002d3c0);
  return;
}



/* Entry: 100017e90; end: 100017ef3; -[SCNotificationCountPerSenderInfo initWithSenderUserId:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_10002dcf0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_10002dcf8) = param_4;
  FUN_100017e70();
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100017ef4; end: 10001837f;  */

undefined8 FUN_100017ef4(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  byte *pbVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte **ppbVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 unaff_x20;
  ulong uVar17;
  uint uVar18;
  byte *pbStack_70;
  ulong uStack_68;
  byte *pbStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar17 = 0;
  uVar12 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar10 = 0x755f7265646e6573;
    uVar11 = 0xed00006469726573;
    FUN_1000161c0(0x755f7265646e6573);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000c410(*(long *)(param_1 + 0x38) + lVar10 * 0x20,&pbStack_60);
      _swift_bridgeObjectRelease(param_1);
      puVar7 = PTR___sypN_1000289c0;
      _swift_dynamicCast(&pbStack_70,&pbStack_60,PTR___sypN_1000289c0 + 8,PTR___sSSN_1000287b8,6);
      uVar11 = uStack_68;
      pbVar8 = pbStack_70;
      if ((uVar17 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
LAB_100018024:
          uStack_58 = 0;
          pbStack_60 = (byte *)0x0;
          lStack_48 = 0;
          uStack_50 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_1);
          lVar10 = 0x746e756f63;
          uVar17 = 0;
          FUN_1000161c0(0x746e756f63);
          if ((uVar17 & 1) == 0) {
            _swift_bridgeObjectRelease(param_1);
            goto LAB_100018024;
          }
          FUN_10000c410(*(long *)(param_1 + 0x38) + lVar10 * 0x20,&pbStack_60);
          _swift_bridgeObjectRelease(param_1);
        }
        _swift_bridgeObjectRelease(param_1);
        if (lStack_48 == 0) {
          _swift_bridgeObjectRelease(uVar11);
          FUN_10000c378(&pbStack_60);
          goto LAB_100017fe4;
        }
        _swift_dynamicCast(&pbStack_70,&pbStack_60,puVar7 + 8,PTR___sSSN_1000287b8,6);
        param_1 = uVar11;
        if ((uVar12 & 1) != 0) {
          uVar12 = (ulong)pbStack_70 & 0xffffffffffff;
          uVar14 = uStack_68 >> 0x38 & 0xf;
          uVar17 = uVar12;
          if ((uStack_68 & 0x2000000000000000) != 0) {
            uVar17 = uVar14;
          }
          if (uVar17 == 0) {
            _swift_bridgeObjectRelease();
          }
          else {
            if ((uStack_68 >> 0x3c & 1) == 0) {
              if ((uStack_68 >> 0x3d & 1) == 0) {
                if (((ulong)pbStack_70 >> 0x3c & 1) == 0) {
                  uVar12 = uStack_68;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                }
                else {
                  pbStack_70 = (byte *)((uStack_68 & 0xfffffffffffffff) + 0x20);
                }
                if (*pbStack_70 == 0x2b) {
                  if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x10001837c);
                    (*pcVar9)();
                  }
                  lVar10 = uVar12 - 1;
                  if (lVar10 == 0) goto LAB_1000182c4;
                  uVar17 = 0;
                  do {
                    pbStack_70 = pbStack_70 + 1;
                    if (((9 < *pbStack_70 - 0x30) ||
                        (auVar3._8_8_ = 0, auVar3._0_8_ = uVar17,
                        SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
                       (uVar14 = uVar17 * 10, uVar12 = (ulong)(byte)(*pbStack_70 - 0x30),
                       uVar17 = uVar14 + uVar12, CARRY8(uVar14,uVar12))) goto LAB_1000182c4;
                    uVar18 = 0;
                    lVar10 = lVar10 + -1;
                  } while (lVar10 != 0);
                }
                else if (*pbStack_70 == 0x2d) {
                  if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x100018374);
                    (*pcVar9)();
                  }
                  lVar10 = uVar12 - 1;
                  if (lVar10 == 0) {
LAB_1000182c4:
                    uVar18 = 1;
                  }
                  else {
                    uVar17 = 0;
                    do {
                      pbStack_70 = pbStack_70 + 1;
                      if (((9 < *pbStack_70 - 0x30) ||
                          (auVar1._8_8_ = 0, auVar1._0_8_ = uVar17,
                          SUB168(auVar1 * ZEXT816(10),8) != 0)) ||
                         (uVar14 = uVar17 * 10, uVar12 = (ulong)(byte)(*pbStack_70 - 0x30),
                         uVar17 = uVar14 - uVar12, uVar14 < uVar12)) goto LAB_1000182c4;
                      uVar18 = 0;
                      lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                  }
                }
                else {
                  if (uVar12 == 0) goto LAB_1000182c4;
                  uVar17 = 0;
                  if (pbStack_70 == (byte *)0x0) {
                    uVar18 = 0;
                  }
                  else {
                    do {
                      if (((9 < *pbStack_70 - 0x30) ||
                          (auVar5._8_8_ = 0, auVar5._0_8_ = uVar17,
                          SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
                         (uVar16 = uVar17 * 10, uVar14 = (ulong)(byte)(*pbStack_70 - 0x30),
                         uVar17 = uVar16 + uVar14, CARRY8(uVar16,uVar14))) goto LAB_1000182c4;
                      uVar18 = 0;
                      uVar12 = uVar12 - 1;
                      pbStack_70 = pbStack_70 + 1;
                    } while (uVar12 != 0);
                  }
                }
              }
              else {
                pbStack_60 = pbStack_70;
                uStack_58 = uStack_68 & 0xffffffffffffff;
                uVar18 = (uint)pbStack_70 & 0xff;
                if (uVar18 == 0x2b) {
                  if (uVar14 == 0) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x100018380);
                    (*pcVar9)();
                  }
                  lVar10 = uVar14 - 1;
                  if (lVar10 == 0) goto LAB_1000182c4;
                  uVar17 = 0;
                  pbVar15 = (byte *)((ulong)&pbStack_60 | 1);
                  do {
                    if (((9 < *pbVar15 - 0x30) ||
                        (auVar4._8_8_ = 0, auVar4._0_8_ = uVar17,
                        SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
                       (uVar14 = uVar17 * 10, uVar12 = (ulong)(byte)(*pbVar15 - 0x30),
                       uVar17 = uVar14 + uVar12, CARRY8(uVar14,uVar12))) goto LAB_1000182c4;
                    uVar18 = 0;
                    lVar10 = lVar10 + -1;
                    pbVar15 = pbVar15 + 1;
                  } while (lVar10 != 0);
                }
                else if (uVar18 == 0x2d) {
                  if (uVar14 == 0) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x100018378);
                    (*pcVar9)();
                  }
                  lVar10 = uVar14 - 1;
                  if (lVar10 == 0) goto LAB_1000182c4;
                  uVar17 = 0;
                  pbVar15 = (byte *)((ulong)&pbStack_60 | 1);
                  do {
                    if (((9 < *pbVar15 - 0x30) ||
                        (auVar2._8_8_ = 0, auVar2._0_8_ = uVar17,
                        SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
                       (uVar14 = uVar17 * 10, uVar12 = (ulong)(byte)(*pbVar15 - 0x30),
                       uVar17 = uVar14 - uVar12, uVar14 < uVar12)) goto LAB_1000182c4;
                    uVar18 = 0;
                    lVar10 = lVar10 + -1;
                    pbVar15 = pbVar15 + 1;
                  } while (lVar10 != 0);
                }
                else {
                  if (uVar14 == 0) goto LAB_1000182c4;
                  uVar17 = 0;
                  ppbVar13 = &pbStack_60;
                  do {
                    if (((9 < *(byte *)ppbVar13 - 0x30) ||
                        (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17,
                        SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
                       (uVar16 = uVar17 * 10, uVar12 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30),
                       uVar17 = uVar16 + uVar12, CARRY8(uVar16,uVar12))) goto LAB_1000182c4;
                    uVar18 = 0;
                    uVar14 = uVar14 - 1;
                    ppbVar13 = (byte **)((long)ppbVar13 + 1);
                  } while (uVar14 != 0);
                }
              }
            }
            else {
              uVar17 = uStack_68;
              FUN_1000185bc(pbStack_70,uStack_68,10);
              uVar18 = (uint)uVar17;
            }
            _swift_bridgeObjectRelease(uStack_68);
            if ((uVar18 & 0xff) != 1) {
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pbVar8,uVar11);
              _swift_bridgeObjectRelease(uVar11);
              func_0x000100020c20();
              _objc_release_x22();
              return unaff_x20;
            }
          }
        }
      }
    }
  }
  _swift_bridgeObjectRelease(param_1);
LAB_100017fe4:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 100018380; end: 1000183c7; -[SCNotificationCountPerSenderInfo initWithDict:] */

void FUN_100018380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_1000287b8,PTR___sypN_1000289c0 + 8,PTR___sSSSHsWP_1000287c0);
  FUN_100017ef4();
  return;
}



/* Entry: 1000183c8; end: 1000184eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000183c8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar2 = 0x10002da70;
  FUN_10000c3c0(0x10002da70,&UNK_1000219b8);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0x755f7265646e6573;
  *(undefined8 *)(lVar2 + 0x28) = 0xed00006469726573;
  puVar1 = PTR___sSSN_1000287b8;
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_10002dcf0))[1];
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(unaff_x20 + _DAT_10002dcf0);
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  *(undefined **)(lVar2 + 0x48) = puVar1;
  *(undefined8 *)(lVar2 + 0x50) = 0x746e756f63;
  *(undefined8 *)(lVar2 + 0x58) = 0xe500000000000000;
  _swift_bridgeObjectRetain();
  puVar3 = PTR___sSuN_100028838;
  puVar6 = PTR___sSus23CustomStringConvertiblesWP_100028840;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(lVar2 + 0x78) = puVar1;
  *(undefined **)(lVar2 + 0x60) = puVar3;
  *(undefined **)(lVar2 + 0x68) = puVar6;
  lVar4 = lVar2;
  FUN_1000164d8(lVar2);
  _swift_setDeallocating(lVar2);
  uVar5 = 0x10002da78;
  FUN_10000c3c0(0x10002da78,&UNK_1000219c0);
  _swift_arrayDestroy((undefined8 *)(lVar2 + 0x20),2,uVar5);
  return lVar4;
}



/* Entry: 1000184ec; end: 10001854b; -[SCNotificationCountPerSenderInfo getDict] */

void FUN_1000184ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1000183c8();
  _objc_release_x20();
  uVar1 = param_1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_1,PTR___sSSN_1000287b8,PTR___sypN_1000289c0 + 8,PTR___sSSSHsWP_1000287c0);
  _swift_bridgeObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)(uVar1);
  return;
}



/* Entry: 10001854c; end: 100018577; -[SCNotificationCountPerSenderInfo init] */

void FUN_10001854c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UnifiedNotificationDefines.NotificationCountPerSenderInfo",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100018578);
  (*pcVar1)();
}



/* Entry: 100018578; end: 1000185a7;  */

void FUN_100018578(void)

{
  FUN_100017e70();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002cb48);
  return;
}



/* Entry: 1000185a8; end: 1000185bb; -[SCNotificationCountPerSenderInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000185a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(*(undefined8 *)(param_1 + _DAT_10002dcf0 + 8))
  ;
  return;
}



/* Entry: 1000185bc; end: 1000186bb;  */

/* WARNING: Removing unreachable block (ram,0x0001000186b0) */

undefined1  [16] FUN_1000185bc(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_1000287b8;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSSN_1000287b8,PTR___sSSs25LosslessStringConvertiblesWP_1000287d8,
             PTR___sSSSTsWP_1000287c8);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100018938();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_1000186bc(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_1000186bc(pppuVar2,puVar4,param_3);
  }
  _swift_bridgeObjectRelease(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 1000186bc; end: 100018937;  */

undefined1  [16] FUN_1000186bc(byte *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  char cVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  iVar13 = (int)param_3;
  uVar16 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100018938);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) goto LAB_100018928;
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_100018928;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3;
      if ((SUB168(auVar5 * auVar8,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
         CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) goto LAB_10001890c;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar13 + 0x30;
        uVar2 = 0x61;
        if (10 < (long)param_3) {
          uVar2 = iVar13 + 0x57;
        }
        uVar11 = 0x41;
        if (10 < (long)param_3) {
          uVar1 = 0x3a;
          uVar11 = iVar13 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar15 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar17 = (uint)bVar3;
            if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
              uVar16 = 1;
              if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_100018928;
              cVar18 = -0x57;
            }
            else {
              cVar18 = -0x37;
            }
          }
          else {
            cVar18 = -0x30;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar15;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_3;
          if ((SUB168(auVar6 * auVar9,8) != 0) ||
             (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
             CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar15;
            return auVar20;
          }
        } while( true );
      }
LAB_10001890c:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100018934);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) {
LAB_100018928:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar16;
      return auVar10 << 0x40;
    }
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_100018928;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_3;
      if ((SUB168(auVar4 * auVar7,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 - (byte)(bVar3 + cVar18),
         uVar16 < (byte)(bVar3 + cVar18))) goto LAB_10001890c;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar15;
  return auVar19;
}



/* Entry: 100018938; end: 100018987;  */

undefined1  [16]
FUN_100018938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_100018988(0xf,param_1,param_2);
  FUN_1000189d4();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 100018988; end: 1000189d3;  */

void FUN_100018988(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)(param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
                    /* WARNING: Could not recover jumptable at 0x000100020574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_1000287f0)(param_1,uVar2 | uVar1 << 0x10,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000189d4);
  (*pcVar3)();
}



/* Entry: 1000189d4; end: 100018b17;  */

void FUN_1000189d4(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
      }
                    /* WARNING: Could not recover jumptable at 0x0001000204f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ_100028770)();
      return;
    }
    uStack_60 = param_4 & 0xffffffffffffff;
    uStack_68 = param_3;
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ
              ((long)&uStack_68 + ((ulong)param_1 >> 0x10),
               (param_2 >> 0x10) - ((ulong)param_1 >> 0x10));
  }
  else {
    puVar2 = param_1;
    __sSs8UTF8ViewV8distance4from2toSiSS5IndexV_AGtF(param_1,param_2,param_1,param_2);
    puVar3 = (ulong *)PTR___swiftEmptyArrayStorage_1000289d8;
    if (puVar2 != (ulong *)0x0) {
      puVar3 = puVar2;
      FUN_100018b18();
      puVar4 = &uStack_68;
      FUN_100018b88(puVar4,puVar3 + 4,puVar2,param_1,param_2,param_3,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(uStack_50);
      if (puVar4 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100018ad4);
        (*pcVar1)();
      }
    }
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(puVar3 + 4,puVar3[2]);
    _swift_release(puVar3);
  }
  return;
}



/* Entry: 100018b18; end: 100018b87;  */

undefined * FUN_100018b18(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_1000289d8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x10002dd28;
    FUN_10000c3c0(0x10002dd28,&UNK_100021f20);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Entry: 100018b88; end: 100018d7f;  */

long FUN_100018b88(ulong *param_1,undefined1 *param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar3 = param_4;
  if (param_2 != (undefined1 *)0x0) {
    lVar7 = param_3;
    if (param_3 == 0) goto LAB_100018bdc;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100018d80);
      (*pcVar2)();
    }
    uVar12 = param_5 >> 0xe;
    if (param_4 >> 0xe != uVar12) {
      uVar6 = (uint)(param_6 >> 0x3b) & 1;
      if ((param_7 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar9 = 4L << uVar6;
      uVar1 = param_6 & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      lVar10 = 1;
      do {
        uVar8 = uVar3 & 0xc;
        uVar4 = uVar3;
        if (uVar8 == uVar9) {
          FUN_100018d80(uVar3,param_6,param_7);
        }
        if ((uVar4 >> 0xe < param_4 >> 0xe) || (uVar12 <= uVar4 >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100018d78);
          (*pcVar2)();
        }
        if ((param_7 >> 0x3c & 1) == 0) {
          if ((param_7 >> 0x3d & 1) != 0) {
            uStack_70 = param_6;
            uStack_68 = param_7 & 0xffffffffffffff;
            uVar11 = *(undefined1 *)((long)&uStack_70 + (uVar4 >> 0x10));
            goto joined_r0x000100018cb8;
          }
          uVar5 = (param_7 & 0xfffffffffffffff) + 0x20;
          if ((param_6 >> 0x3c & 1) == 0) {
            uVar5 = param_6;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_6,param_7);
          }
          uVar11 = *(undefined1 *)(uVar5 + (uVar4 >> 0x10));
          if (uVar8 == uVar9) goto LAB_100018cec;
LAB_100018cbc:
          if ((param_7 >> 0x3c & 1) == 0) goto LAB_100018cc0;
LAB_100018d04:
          if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100018d7c);
            (*pcVar2)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar3,param_6,param_7);
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
          uVar11 = (undefined1)uVar4;
joined_r0x000100018cb8:
          if (uVar8 != uVar9) goto LAB_100018cbc;
LAB_100018cec:
          FUN_100018d80(uVar3,param_6,param_7);
          if ((param_7 >> 0x3c & 1) != 0) goto LAB_100018d04;
LAB_100018cc0:
          uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
        }
        *param_2 = uVar11;
        lVar7 = param_3;
        if ((param_3 == lVar10) || (lVar7 = lVar10, uVar12 == uVar3 >> 0xe)) goto LAB_100018bdc;
        lVar10 = lVar10 + 1;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  lVar7 = 0;
LAB_100018bdc:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = uVar3;
  return lVar7;
}



/* Entry: 100018d80; end: 100018df7;  */

ulong FUN_100018d80(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || ((param_2 >> 0x3b & 1) != 0)) {
    uVar1 = 0xf;
    __sSS9UTF16ViewV5index_8offsetBySS5IndexVAF_SitF(0xf,param_1 >> 0x10);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    uVar1 = 0xf;
    __sSS8UTF8ViewV13_foreignIndex_8offsetBySS0D0VAF_SitF(0xf);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}



/* Entry: 100018df8; end: 100018e2b; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey groupedSenders] */

void FUN_100018df8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53646570756f7267,0xee00737265646e65);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100018e2c; end: 100018e5f; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey perSenderInfo] */

void FUN_100018e2c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65646e6553726570,0xed00006f666e4972);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100018e60; end: 100018e83; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey perSenderInfoCountKey] */

void FUN_100018e60(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x746e756f63,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100018e84; end: 100018eb7; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey redriveAttempt] */

void FUN_100018e84(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4165766972646572,0xee0074706d657474);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100018eb8; end: 100018ee3; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey textReplyContent] */

void FUN_100018eb8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x8000000100026640);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100018ee4; end: 100018f0f; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey clientDecryptedMessageText] */

void FUN_100018ee4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x8000000100026660);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100018f10; end: 100018f4b; -[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey init] */

void FUN_100018f10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100018f4c; end: 100018f7f;  */

void FUN_100018f4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002cb48);
  return;
}



/* Entry: 100018f80; end: 100018f83; -[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey .cxx_destruct] */

void FUN_100018f80(void)

{
  return;
}



/* Entry: 100018f84; end: 100018fa3;  */

void FUN_100018f84(void)

{
  _objc_opt_self(&PTR_PTR_10002d490);
  return;
}



/* Entry: 100018fa4; end: 100018fc3; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey type] */

void FUN_100018fa4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65707974,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100018fc4; end: 100018fe3; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey id] */

void FUN_100018fc4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x64695f6e,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100018fe4; end: 100019007; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey key] */

void FUN_100018fe4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79656b5f6e,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 100019008; end: 10001903b; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey snapMediaType] */

void FUN_100019008(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x64656d5f70616e73,0xef657079745f6169);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 10001903c; end: 10001906b; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey bitmojiImageUrl] */

void FUN_10001903c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f696a6f6d746962,0xeb00000000676d69);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 10001906c; end: 10001909b; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey reactionImageUrl] */

void FUN_10001906c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6f697463616572,0xec000000676d695f);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 10001909c; end: 1000190cf; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey thumbnailUrl] */

void FUN_10001909c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69616e626d756874,0xed00006c72755f6c);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 1000190d0; end: 1000190fb; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey thumbnailMediaKey] */

void FUN_1000190d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x8000000100026680);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}



/* Entry: 1000190fc; end: 100019127; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey thumbnailMediaIv] */

void FUN_1000190fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000001000266a0);
                    /* WARNING: Could not recover jumptable at 0x000100020808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000281a0)();
  return;
}


