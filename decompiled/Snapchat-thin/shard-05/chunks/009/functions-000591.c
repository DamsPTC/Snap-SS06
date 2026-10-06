/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043088ec; end: 104308937;  */

void FUN_1043088ec(undefined8 param_1)

{
  func_0x0001000285a8(0x11306cdc0,&UNK_10dce85b0);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_1043089a4,param_1);
  return;
}



/* Entry: 104308938; end: 1043089a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308938(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104308cd0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306cdc8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043089a4; end: 1043089ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043089a4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104308cd0();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306cdc8) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043089ac; end: 1043089f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043089ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306cdc8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043089f8; end: 104308bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1043089f8(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 uStack_51;
  long lStack_50;
  long lStack_48;
  
  uStack_51 = uRam000000011306cdf8;
  func_0x00010008a7c8(&lStack_50,&uStack_51);
  lVar2 = lStack_50;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    _swift_release(lVar2);
    lVar2 = lStack_48;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_48 != 0) {
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar3 == 0) || ((long)puVar4 < 0)) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar4 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar4) {
            puVar3 = puVar4;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar3);
        }
        puVar4 = (undefined *)0x0;
        func_0x000102c2bcb4(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x000102c2bcb4(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
    }
  }
  uStack_51 = uRam000000011306cdf9;
  func_0x00010008a7c8(&lStack_50,&uStack_51);
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    _swift_release(lStack_50);
    if (lStack_48 != 0) {
      puVar4 = puVar3;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar4 == 0) || ((long)puVar3 < 0)) ||
         (puVar4 = puVar3, ((ulong)puVar3 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar5 = puVar3;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
        }
        puVar4 = (undefined *)0x0;
        func_0x000102c2bcb4(0,puVar5 + 1,1,puVar3);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x000102c2bcb4(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lStack_48;
    }
  }
  return puVar3;
}



/* Entry: 104308bf0; end: 104308c4f; -[_TtC29SCAdUnifiedEventObservableBus34SCAdEventStreamsPluginSaberService buildSaberPlugins] */

void FUN_104308bf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043089f8();
  _objc_release(param_1);
  uVar2 = 0x112f00d78;
  func_0x0001000285a8(0x112f00d78,&UNK_10db340d0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104308c50; end: 104308caf; -[_TtC29SCAdUnifiedEventObservableBus34SCAdEventStreamsPluginSaberService init] */

void FUN_104308c50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAdUnifiedEventObservableBus.SCAdEventStreamsPluginSaberService",0x40,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104308c7c);
  (*pcVar1)();
}



/* Entry: 104308cb0; end: 104308ccf; -[_TtC29SCAdUnifiedEventObservableBus34SCAdEventStreamsPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306cdc8));
  return;
}



/* Entry: 104308cd0; end: 104308cef;  */

void FUN_104308cd0(void)

{
  _objc_opt_self(&PTR_PTR_112998298);
  return;
}



/* Entry: 104308cf0; end: 104308cff; -[SCAdUnifiedEventObservableBusServices unifiedEventObservableBus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ce28));
  return;
}



/* Entry: 104308d00; end: 104308d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308d00(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ce28) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104308d4c; end: 104308da3; -[SCAdUnifiedEventObservableBusServices initWithUnifiedEventObservableBus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306ce28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104308da4; end: 104308e03; -[SCAdUnifiedEventObservableBusServices init] */

void FUN_104308da4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAdUnifiedEventObservableBus.SCAdUnifiedEventObservableBusServices",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104308dd0);
  (*pcVar1)();
}



/* Entry: 104308e04; end: 104308e13; -[SCAdUnifiedEventObservableBusServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ce28));
  return;
}



/* Entry: 104308e14; end: 104308e33;  */

void FUN_104308e14(void)

{
  _objc_opt_self(&PTR_PTR_112998358);
  return;
}



/* Entry: 104308e34; end: 104308e4b;  */

undefined * FUN_104308e34(void)

{
  return &UNK_110757518;
}



/* Entry: 104308e4c; end: 104308fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ce58) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ce60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ce68);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ce70);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306ce78) = param_1;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104308fd4; end: 10430916b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104308fd4(double param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  int iVar10;
  double dVar11;
  
  (**(code **)(unaff_x20 + _DAT_11306ce60))();
  uVar4 = param_2;
  (**(code **)(unaff_x20 + _DAT_11306ce68))();
  if (((param_2 & 1) == 0) && ((uVar4 & 1) == 0)) {
LAB_104309024:
    uVar5 = 0;
  }
  else {
    lVar9 = *(long *)(unaff_x20 + _DAT_11306ce58);
    lVar6 = lVar9;
    func_0x00010bfc5180();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(lVar6);
      uVar2 = (uint)(param_3 >> 0x20);
      uVar8 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar8 == 0) {
          func_0x00010006c090(lVar7);
          if ((param_3 >> 0x30 & 0xff) != 0) {
LAB_1043090b8:
            func_0x00010bfc6d20();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 == 0) {
              return 2;
            }
            func_0x00010bf885a0();
            dVar11 = param_1;
            _objc_release(lVar9);
            if (((uVar4 & 1) != 0) &&
               ((**(code **)(unaff_x20 + _DAT_11306ce70))(),
               *(double *)(unaff_x20 + _DAT_11306ce78) <= dVar11 - param_1)) {
              return 3;
            }
            goto LAB_104309024;
          }
        }
        else {
          func_0x00010006c090(lVar7);
          iVar10 = (int)((ulong)lVar7 >> 0x20);
          if (SBORROW4(iVar10,(int)lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10430916c);
            (*pcVar3)();
          }
          if (iVar10 != (int)lVar7) goto LAB_1043090b8;
        }
      }
      else {
        if (uVar8 != 2) {
          func_0x00010006c090(lVar7);
          return 1;
        }
        lVar6 = *(long *)(lVar7 + 0x10);
        lVar1 = *(long *)(lVar7 + 0x18);
        func_0x00010006c090(lVar7);
        if (SBORROW8(lVar1,lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104309168);
          (*pcVar3)();
        }
        if (lVar1 != lVar6) goto LAB_1043090b8;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 10430916c; end: 10430919f; -[SCAdInitReadinessChecker checkReadiness] */

undefined8 FUN_10430916c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104308fd4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043091a0; end: 1043091ff; -[SCAdInitReadinessChecker init] */

void FUN_1043091a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdRequestCommon.AdInitReadinessChecker",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043091cc);
  (*pcVar1)();
}



/* Entry: 104309200; end: 104309263; -[SCAdInitReadinessChecker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104309200(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ce58));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306ce60 + 8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306ce68 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306ce70 + 8));
  return;
}



/* Entry: 104309264; end: 104309283;  */

void FUN_104309264(void)

{
  _objc_opt_self(&PTR_PTR_112998418);
  return;
}



/* Entry: 104309284; end: 104309297;  */

bool FUN_104309284(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104309298; end: 10430936f;  */

void FUN_104309298(void)

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



/* Entry: 104309370; end: 10430938f;  */

void FUN_104309370(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104309390; end: 1043093cf;  */

void FUN_104309390(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce86b0;
  _swift_getWitnessTable(&UNK_10dce86b0,&UNK_110757548);
  puRam000000011306cea8 = puVar1;
  return;
}



/* Entry: 1043093d0; end: 1043093f7;  */

undefined1  [16] FUN_1043093d0(void)

{
  return ZEXT816(0x110757548);
}



/* Entry: 1043093f8; end: 104309437;  */

void FUN_1043093f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306ceb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8768;
  _swift_getWitnessTable(&UNK_10dce8768,&UNK_1107575c0);
  puRam000000011306ceb0 = puVar1;
  return;
}



/* Entry: 104309438; end: 1043094e3;  */

void FUN_104309438(void)

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



/* Entry: 1043094e4; end: 10430952f;  */

void FUN_1043094e4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104309530; end: 104309607;  */

void FUN_104309530(void)

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



/* Entry: 104309608; end: 104309627;  */

void FUN_104309608(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104309628; end: 104309667;  */

void FUN_104309628(void)

{
  undefined *puVar1;
  
  if (puRam000000011306ceb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8814;
  _swift_getWitnessTable(&UNK_10dce8814,&UNK_110757638);
  puRam000000011306ceb8 = puVar1;
  return;
}



/* Entry: 104309668; end: 104309677;  */

undefined1  [16] FUN_104309668(void)

{
  return ZEXT816(0x110757638);
}



/* Entry: 104309678; end: 104309c03;  */

void FUN_104309678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 104309c04; end: 104309cef;  */

byte FUN_104309c04(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2 | param_1[1] ^ param_2[1] |
          param_1[2] ^ param_2[2] | param_2[3] ^ param_1[3]) ^ 0xff) & 1;
}



/* Entry: 104309cf0; end: 104309d47;  */

uint FUN_104309cf0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_104309d48(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104309d48; end: 104309ed7;  */

byte FUN_104309d48(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_1[1];
  uVar1 = param_2[1];
  if (uVar3 == 0) {
    if (uVar1 == 0) {
LAB_104309da8:
      uVar3 = param_1[3];
      uVar1 = param_2[3];
      if (uVar3 == 0) {
        if (uVar1 == 0) {
LAB_104309e00:
          uVar3 = param_1[5];
          uVar1 = param_2[5];
          if (uVar3 == 0) {
            if (uVar1 == 0) {
LAB_104309e50:
              bVar2 = (byte)param_1[6] ^ (byte)param_2[6] ^ 1;
              goto LAB_104309e6c;
            }
          }
          else if (uVar1 != 0) {
            uVar4 = param_1[4];
            if (((uVar4 == param_2[4]) && (uVar3 == uVar1)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar4,uVar3,param_2[4],uVar1,0), (uVar4 & 1) != 0)) goto LAB_104309e50;
          }
        }
      }
      else if (uVar1 != 0) {
        uVar4 = param_1[2];
        if (((uVar4 == param_2[2]) && (uVar3 == uVar1)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar4,uVar3,param_2[2],uVar1,0), (uVar4 & 1) != 0)) goto LAB_104309e00;
      }
    }
  }
  else if (uVar1 != 0) {
    uVar4 = *param_1;
    if ((uVar4 == *param_2 && uVar3 == uVar1) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,*param_2,uVar1,0), (uVar4 & 1) != 0)) goto LAB_104309da8;
  }
  bVar2 = 0;
LAB_104309e6c:
  return bVar2 & 1;
}



/* Entry: 104309ed8; end: 104309fc7;  */

undefined8 * FUN_104309ed8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 104309fc8; end: 10430a023;  */

undefined8 * FUN_104309fc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10430a024; end: 10430a0f3;  */

int FUN_10430a024(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10430a0f4; end: 10430a103; -[SCAdBlizzardStoryTypeInfo storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10430a0f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306cec0);
}



/* Entry: 10430a104; end: 10430a14f; -[SCAdBlizzardStoryTypeInfo storyTypeSpecific] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a104(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cec8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306cec8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430a150; end: 10430a157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306cec0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cec8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430a158; end: 10430a2a3; -[SCAdBlizzardStoryTypeInfo initWithStoryType:storyTypeSpecific:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_11306cec0) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306cec8);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430a2a4; end: 10430a2a7; -[SCAdBlizzardStoryTypeInfo copyWithZone:] */

void FUN_10430a2a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10430a2a8; end: 10430a38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a2a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + _DAT_11306cec0);
  puVar1 = &uStack_38;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar1,&UNK_110757638);
  uVar2 = 0x59545f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f59524f5453,0xea00000000004550);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306cec8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11306cec8))[1]);
  uVar3 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f4af0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 10430a390; end: 10430a3df; -[SCAdBlizzardStoryTypeInfo encodeWithCoder:] */

void FUN_10430a390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10430a2a8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10430a3e0; end: 10430a40f;  */

void FUN_10430a3e0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10430a410(param_1);
  return;
}



/* Entry: 10430a410; end: 10430a5f7;  */

undefined8 FUN_10430a410(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar2 = 0x59545f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f59524f5453,0xea00000000004550);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_10430a5a4:
    uStack_60 = uStack_80;
    uStack_58 = uStack_78;
    uStack_50 = uStack_70;
    lStack_48 = lStack_68;
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,&UNK_110757638,6);
    if ((uVar4 & 1) != 0) {
      uVar2 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f4af0);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) goto LAB_10430a5a4;
      _swift_dynamicCast(&uStack_90,&uStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar5 & 1) != 0) {
        uVar2 = uStack_90;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
        _swift_bridgeObjectRelease(uStack_88);
        func_0x00010c04e340();
        _objc_release(uVar2);
        _objc_release(param_1);
        return unaff_x20;
      }
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10430a5f8; end: 10430a61f; -[SCAdBlizzardStoryTypeInfo initWithCoder:] */

void FUN_10430a5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10430a410();
  return;
}



/* Entry: 10430a620; end: 10430a63b; -[SCAdBlizzardStoryTypeInfo description] */

void FUN_10430a620(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430a63c; end: 10430a6b7; -[SCAdBlizzardStoryTypeInfo init] */

void FUN_10430a63c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdRequestCommon/AdBlizzardStoryTypeInfoWrapper.swift",0x34,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430a684);
  (*pcVar1)();
}



/* Entry: 10430a6b8; end: 10430a6cb; -[SCAdBlizzardStoryTypeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a6b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306cec8 + 8))
  ;
  return;
}



/* Entry: 10430a6cc; end: 10430a6eb;  */

void FUN_10430a6cc(void)

{
  _objc_opt_self(&PTR_PTR_1129984f8);
  return;
}



/* Entry: 10430a6ec; end: 10430a6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306cec0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cec8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430a6f0; end: 10430a74b; -[SCAdNotFullyViewedSnapContext snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a6f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306cef8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306cef8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430a74c; end: 10430a75b; -[SCAdNotFullyViewedSnapContext mixedStoryTypeInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a74c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306cf00));
  return;
}



/* Entry: 10430a75c; end: 10430a833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cef8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306cf00) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430a834; end: 10430a8c3; -[SCAdNotFullyViewedSnapContext initWithSnapId:mixedStoryTypeInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a834(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306cef8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306cf00) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10430a8c4; end: 10430a993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a8c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  
  plVar5 = &lStack_70;
  _objc_allocWithZone();
  uVar7 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306cef8);
  puVar2[1] = param_1[1];
  *puVar2 = uVar7;
  lVar6 = param_1[4];
  if (lVar6 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar7 = param_1[2];
    uVar1 = param_1[3];
    lVar3 = 0;
    FUN_10430a6cc();
    lVar4 = lVar3;
    _objc_allocWithZone();
    *(undefined8 *)(lVar4 + _DAT_11306cec0) = uVar7;
    puVar2 = (undefined8 *)(lVar4 + _DAT_11306cec8);
    *puVar2 = uVar1;
    puVar2[1] = lVar6;
    lStack_70 = lVar4;
    lStack_68 = lVar3;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306cf00) = plVar5;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430a994; end: 10430a997; -[SCAdNotFullyViewedSnapContext copyWithZone:] */

void FUN_10430a994(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10430a998; end: 10430aa5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430a998(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11306cef8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cef8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f50414e53,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f4b50);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10430aa60; end: 10430aaaf; -[SCAdNotFullyViewedSnapContext encodeWithCoder:] */

void FUN_10430aa60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10430a998(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10430aab0; end: 10430aadf;  */

void FUN_10430aab0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10430aae0(param_1);
  return;
}



/* Entry: 10430aae0; end: 10430acd7;  */

undefined8 FUN_10430aae0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x44495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f50414e53,0xe700000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f4b50);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    FUN_10430a6cc(0);
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar6,6);
    uVar6 = uStack_a0;
    if (iVar3 == 0) {
      uVar6 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  func_0x00010c047c60();
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar6);
  return unaff_x20;
}



/* Entry: 10430acd8; end: 10430acff; -[SCAdNotFullyViewedSnapContext initWithCoder:] */

void FUN_10430acd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10430aae0();
  return;
}



/* Entry: 10430ad00; end: 10430ad1b; -[SCAdNotFullyViewedSnapContext description] */

void FUN_10430ad00(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430ad1c; end: 10430ad97; -[SCAdNotFullyViewedSnapContext init] */

void FUN_10430ad1c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdRequestCommon/AdNotFullyViewedSnapContextWrapper.swift",0x38,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430ad64);
  (*pcVar1)();
}



/* Entry: 10430ad98; end: 10430add3; -[SCAdNotFullyViewedSnapContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ad98(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306cef8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306cf00));
  return;
}



/* Entry: 10430add4; end: 10430adf3;  */

void FUN_10430add4(void)

{
  _objc_opt_self(&PTR_PTR_1129985d0);
  return;
}



/* Entry: 10430adf4; end: 10430ae43; -[SCAdNotFullyViewedStoryContext snapContexts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430adf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cf30);
  FUN_10430add4(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10430ae44; end: 10430ae53; -[SCAdNotFullyViewedStoryContext blizzardStoryTypeInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ae44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306cf38));
  return;
}



/* Entry: 10430ae54; end: 10430aeaf; -[SCAdNotFullyViewedStoryContext storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ae54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306cf40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306cf40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430aeb0; end: 10430afb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430aeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306cf30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306cf38) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cf40);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430afb8; end: 10430b077; -[SCAdNotFullyViewedStoryContext initWithSnapContexts:blizzardStoryTypeInfo:storyId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430afb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar4 = 0;
  FUN_10430add4();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (param_5 == 0) {
    param_5 = 0;
    lVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11306cf30) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306cf38) = param_4;
  plVar1 = (long *)(param_1 + _DAT_11306cf40);
  *plVar1 = param_5;
  plVar1[1] = lVar4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 10430b078; end: 10430b0a7;  */

void FUN_10430b078(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10430b0a8(param_1);
  return;
}



/* Entry: 10430b0a8; end: 10430b36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430b0a8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long alStack_70 [2];
  
  _swift_getObjectType();
  lVar11 = *param_1;
  lVar12 = *(long *)(lVar11 + 0x10);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  alStack_70[0] = lVar11;
  if (lVar12 != 0) {
    FUN_10430ba38(0,lVar12,0);
    puVar10 = puStack_90;
    lVar5 = 0;
    FUN_10430add4();
    plVar9 = (long *)(lVar11 + 0x40);
    do {
      lVar11 = plVar9[-4];
      lVar2 = plVar9[-3];
      lVar14 = plVar9[-2];
      lVar3 = plVar9[-1];
      lVar13 = *plVar9;
      lVar6 = lVar5;
      _objc_allocWithZone();
      plVar8 = (long *)(lVar6 + _DAT_11306cef8);
      *plVar8 = lVar11;
      plVar8[1] = lVar2;
      if (lVar13 == 0) {
        _swift_bridgeObjectRetain(lVar2);
        plVar8 = (long *)0x0;
      }
      else {
        lVar7 = 0;
        FUN_10430a6cc();
        lVar11 = lVar7;
        _objc_allocWithZone();
        *(long *)(lVar11 + _DAT_11306cec0) = lVar14;
        plVar8 = (long *)(lVar11 + _DAT_11306cec8);
        *plVar8 = lVar3;
        plVar8[1] = lVar13;
        puVar4 = PTR_s_init_1125d9248;
        lStack_f0 = lVar11;
        lStack_e8 = lVar7;
        _swift_bridgeObjectRetain(lVar2);
        _swift_bridgeObjectRetain(lVar13);
        plVar8 = &lStack_f0;
        _objc_msgSendSuper2(plVar8,puVar4);
      }
      *(long **)(lVar6 + _DAT_11306cf00) = plVar8;
      plVar8 = &lStack_b0;
      lStack_b0 = lVar6;
      lStack_a8 = lVar5;
      _objc_msgSendSuper2(plVar8,PTR_s_init_1125d9248);
      uVar1 = *(ulong *)(puVar10 + 0x10);
      puStack_90 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        FUN_10430ba38(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
      }
      plVar9 = plVar9 + 5;
      *(ulong *)(puStack_90 + 0x10) = uVar1 + 1;
      *(long **)(puStack_90 + uVar1 * 8 + 0x20) = plVar8;
      lVar12 = lVar12 + -1;
      puVar10 = puStack_90;
    } while (lVar12 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_11306cf30) = puStack_90;
  lVar14 = param_1[2];
  puStack_90 = (undefined *)param_1[1];
  lVar5 = param_1[3];
  lVar11 = 0;
  lStack_88 = lVar14;
  lStack_80 = lVar5;
  FUN_10430a6cc();
  lVar12 = lVar11;
  _objc_allocWithZone();
  *(undefined **)(lVar12 + _DAT_11306cec0) = puStack_90;
  plVar9 = (long *)(lVar12 + _DAT_11306cec8);
  *plVar9 = lVar14;
  plVar9[1] = lVar5;
  puVar10 = PTR_s_init_1125d9248;
  lStack_c0 = lVar12;
  lStack_b8 = lVar11;
  _swift_bridgeObjectRetain(lVar5);
  plVar9 = &lStack_c0;
  _objc_msgSendSuper2(plVar9,puVar10);
  *(long **)(unaff_x20 + _DAT_11306cf38) = plVar9;
  lStack_98 = param_1[5];
  lStack_a0 = param_1[4];
  plVar9 = (long *)(unaff_x20 + _DAT_11306cf40);
  plVar9[1] = lStack_98;
  *plVar9 = lStack_a0;
  func_0x000101223174(&lStack_a0,auStack_d0);
  func_0x00010430ba88(alStack_70,0x11306a2d0,&UNK_10dce55c0);
  func_0x00010430ba54(&puStack_90);
  func_0x00010430ba88(&lStack_a0,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(auStack_e0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430b36c; end: 10430b36f; -[SCAdNotFullyViewedStoryContext copyWithZone:] */

void FUN_10430b36c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10430b370; end: 10430b4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430b370(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306cf30);
  uVar1 = 0;
  FUN_10430add4(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x4e4f435f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f435f50414e53,0xed00005354584554);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f4bb0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306cf40))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cf40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f59524f5453,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10430b4a4; end: 10430b4f3; -[SCAdNotFullyViewedStoryContext encodeWithCoder:] */

void FUN_10430b4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10430b370(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10430b4f4; end: 10430b523;  */

void FUN_10430b4f4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10430b524(param_1);
  return;
}



/* Entry: 10430b524; end: 10430b863;  */

undefined8 FUN_10430b524(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar5 = 0;
  uVar7 = 0;
  iVar2 = (int)&uStack_a0;
  uVar3 = 0x4e4f435f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f435f50414e53,0xed00005354584554);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    uVar3 = 0x11306cf48;
    func_0x0001000285a8(0x11306cf48,&UNK_10dce89d8);
    puVar1 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
    uVar3 = uStack_a0;
    if ((uVar5 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_10430b730;
    }
    uVar6 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f4bb0);
    lVar4 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar4 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      uVar6 = 0;
      FUN_10430a6cc(0);
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar6,6);
      uVar6 = uStack_a0;
      if ((uVar7 & 1) == 0) {
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar3);
        goto LAB_10430b730;
      }
      uVar8 = 0x44495f59524f5453;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f59524f5453,0xe800000000000000);
      lVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (lVar4 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
        _swift_unknownObjectRelease(lVar4);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x00010430ba88(&uStack_70,0x112d387f8,&UNK_10d902650);
      }
      else {
        _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar4 = lStack_98;
        uVar8 = uStack_a0;
        if (iVar2 != 0) goto LAB_10430b7e0;
      }
      lVar4 = 0;
      uVar8 = 0;
LAB_10430b7e0:
      uVar9 = 0;
      FUN_10430add4(0);
      uVar10 = uVar3;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar9);
      _swift_bridgeObjectRelease(uVar3);
      if (lVar4 == 0) {
        uVar8 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar4);
        _swift_bridgeObjectRelease(lVar4);
      }
      func_0x00010c0472c0();
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(param_1);
      _objc_release(uVar6);
      return unaff_x20;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uVar3);
  }
  func_0x00010430ba88(&uStack_70,0x112d387f8,&UNK_10d902650);
LAB_10430b730:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10430b864; end: 10430b88b; -[SCAdNotFullyViewedStoryContext initWithCoder:] */

void FUN_10430b864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10430b524();
  return;
}



/* Entry: 10430b88c; end: 10430b96f; -[SCAdNotFullyViewedStoryContext description] */

void FUN_10430b88c(undefined8 param_1)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  FUN_10430bf1c(&uStack_80);
  _objc_release(param_1);
  uStack_28 = uStack_80;
  func_0x00010430ba88(&uStack_28,0x11306a2d0,&UNK_10dce55c0);
  uStack_38 = uStack_70;
  uStack_40 = uStack_78;
  uStack_30 = uStack_68;
  func_0x00010430ba54(&uStack_40);
  uStack_48 = uStack_58;
  uStack_50 = uStack_60;
  func_0x00010430ba88(&uStack_50,0x112d35ff8,&UNK_10d900cd0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430b970; end: 10430b9eb; -[SCAdNotFullyViewedStoryContext init] */

void FUN_10430b970(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdRequestCommon/AdNotFullyViewedStoryContextWrapper.swift",0x39,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430b9b8);
  (*pcVar1)();
}



/* Entry: 10430b9ec; end: 10430ba37; -[SCAdNotFullyViewedStoryContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430b9ec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306cf30));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306cf38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306cf40 + 8))
  ;
  return;
}



/* Entry: 10430ba38; end: 10430ba53;  */

void FUN_10430ba38(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10430bae4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10430ba54; end: 10430bac7;  */

undefined8 FUN_10430ba54(undefined8 param_1)

{
  FUN_104309678();
  return param_1;
}



/* Entry: 10430bac8; end: 10430bae3;  */

void FUN_10430bac8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10430bc08();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10430bae4; end: 10430bc07;  */

undefined * FUN_10430bae4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10430bc08);
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
    puVar3 = param_1;
    FUN_10430bd24();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10430add4(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 10430bc08; end: 10430bd23;  */

undefined * FUN_10430bc08(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10430bd24);
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
    puVar3 = (undefined *)0x11306cf78;
    func_0x0001000285a8(0x11306cf78,&UNK_10dce8a08);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_110757788);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 10430bd24; end: 10430bd7f;  */

void FUN_10430bd24(void)

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
    FUN_10430add4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e0fd30;
  plVar5 = (long *)&UNK_10d9eaff0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10430bd80; end: 10430bf1b;  */

ulong FUN_10430bd80(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10430be50);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10430be54);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_10430add4(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_10430add4(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001f,0x800000010f1f4c10);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10430bf1c);
  (*pcVar2)();
}



/* Entry: 10430bf1c; end: 10430c133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430bf1c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = *(ulong *)(param_2 + _DAT_11306cf30);
  if (uVar9 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar11 = uVar9;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    FUN_10430bac8(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10430c134);
      (*pcVar3)();
    }
    uVar10 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar9 + uVar10 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar10;
        FUN_10430bd80(uVar10,uVar9);
      }
      uVar7 = *(undefined8 *)(uVar4 + _DAT_11306cef8);
      uVar13 = ((undefined8 *)(uVar4 + _DAT_11306cef8))[1];
      lVar5 = *(long *)(uVar4 + _DAT_11306cf00);
      if (lVar5 == 0) {
        uVar8 = 0;
        uVar6 = 0;
        uVar12 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar5 + _DAT_11306cec0);
        uVar6 = *(undefined8 *)(lVar5 + _DAT_11306cec8);
        uVar12 = ((undefined8 *)(lVar5 + _DAT_11306cec8))[1];
        _swift_bridgeObjectRetain(uVar12);
      }
      _swift_bridgeObjectRetain(uVar13);
      _objc_release(uVar4);
      uVar4 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        FUN_10430bac8(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar2 + uVar4 * 0x28 + 0x20) = uVar7;
      *(undefined8 *)(puVar2 + uVar4 * 0x28 + 0x28) = uVar13;
      *(undefined8 *)(puVar2 + uVar4 * 0x28 + 0x30) = uVar8;
      *(undefined8 *)(puVar2 + uVar4 * 0x28 + 0x38) = uVar6;
      *(undefined8 *)(puVar2 + uVar4 * 0x28 + 0x40) = uVar12;
    } while (uVar11 != uVar10);
  }
  uVar6 = *(undefined8 *)(*(long *)(param_2 + _DAT_11306cf38) + _DAT_11306cec0);
  puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_11306cf38) + _DAT_11306cec8);
  uVar7 = *puVar1;
  uVar13 = puVar1[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_11306cf40);
  *param_1 = puVar2;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar13;
  uVar7 = puVar1[1];
  uVar13 = *puVar1;
  param_1[5] = puVar1[1];
  param_1[4] = uVar13;
  _swift_bridgeObjectRetain();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar7);
  return;
}



/* Entry: 10430c134; end: 10430c153;  */

void FUN_10430c134(void)

{
  _objc_opt_self(&PTR_PTR_1129986a8);
  return;
}



/* Entry: 10430c154; end: 10430c163; -[SCAdPreferences audienceMatchOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430c154(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306cf80);
}



/* Entry: 10430c164; end: 10430c173; -[SCAdPreferences externalActivityMatchOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430c164(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306cf88);
}



/* Entry: 10430c174; end: 10430c183; -[SCAdPreferences thirdPartyAdNetworkOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430c174(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306cf90);
}



/* Entry: 10430c184; end: 10430c193; -[SCAdPreferences fullPersonalizationOptOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430c184(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306cf98);
}


