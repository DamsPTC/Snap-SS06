/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100010000; end: 10001027b;  */

void FUN_100010000(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  
  lVar2 = 0x100021f40;
  FUN_10001027c(0x100021f40,&UNK_100019360);
  (*(code *)PTR____chkstk_darwin_10001c088)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10001c088)();
  lVar7 = (long)puVar9 - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_10001c088)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10001c088)();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1000218b8;
  _objc_opt_self();
  func_0x000100017da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSBundle_100021928;
  _objc_opt_self();
  func_0x0001000184a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000100018720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10001027c);
    (*pcVar11)();
  }
  puVar4 = puVar3;
  func_0x000100017c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  if (puVar4 != (undefined *)0x0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar9,puVar4);
    _objc_release(puVar4);
  }
  pcVar11 = *(code **)(lVar12 + 0x38);
  (*pcVar11)(puVar9,puVar4 == (undefined *)0x0,1,lVar2);
  func_0x0001000102cc(puVar9,lVar7);
  lVar6 = lVar7;
  (**(code **)(lVar12 + 0x30))(lVar7,1,lVar2);
  bVar1 = (int)lVar6 != 1;
  if (bVar1) {
    __s10Foundation3URLV22appendingPathComponentyACSSF(lVar8,0x7972617262694c,0xe700000000000000);
    pcVar10 = *(code **)(lVar12 + 8);
    (*pcVar10)(lVar7,lVar2);
    __s10Foundation3URLV22appendingPathComponentyACSSF
              (lVar8 - extraout_x12_00,0x736568636143,0xe600000000000000);
    lVar7 = lVar2;
    (*pcVar10)(lVar8,lVar2);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_10001cb10);
    __s10Foundation3URLV22appendingPathComponentyACSSF(param_1);
    _swift_bridgeObjectRelease(lVar7);
    (*pcVar10)(lVar8 - extraout_x12_00,lVar2);
  }
  else {
    func_0x00010001031c(lVar7);
  }
  (*pcVar11)(param_1,!bVar1,1,lVar2);
  return;
}



/* Entry: 10001027c; end: 100010363;  */

void FUN_10001027c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 100010364; end: 10001041b; +[SCExternalSendToStorageUtilities getBaseUrl] */

void FUN_100010364(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x100021f40;
  FUN_10001027c(0x100021f40,&UNK_100019360);
  (*(code *)PTR____chkstk_darwin_10001c088)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_100010000(puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(uVar3);
  return;
}



/* Entry: 10001041c; end: 100010457; -[SCExternalSendToStorageUtilities init] */

void FUN_10001041c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
  return;
}



/* Entry: 100010458; end: 1000104ab;  */

void FUN_100010458(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000211e8);
  return;
}



/* Entry: 1000104ac; end: 100010567;  */

undefined1  [16] FUN_1000104ac(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uStack_70;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  func_0x0001000189c0(param_3,param_4,*(undefined8 *)PTR__AVMediaCharacteristicVisual_10001c028);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000100017f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    uStack_70 = 0;
    uVar4 = 0;
  }
  else {
    dVar2 = (double)func_0x000100018540(lVar1);
    func_0x000100018680(&dStack_60,lVar1);
    dVar3 = dStack_50 * param_2 + dStack_60 * dVar2;
    dVar2 = dStack_48 * param_2 + dStack_58 * dVar2;
    uStack_70 = (ulong)dVar3 ^ ((ulong)dVar3 ^ (ulong)-dVar3) & -(ulong)(dVar3 < 0.0);
    uVar4 = (ulong)dVar2 ^ ((ulong)dVar2 ^ (ulong)-dVar2) & -(ulong)(dVar2 < 0.0);
  }
  _objc_release(lVar1);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uStack_70;
  return auVar5;
}



/* Entry: 100010568; end: 100010777;  */

undefined1 * FUN_100010568(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x21;
  long unaff_x22;
  long lVar9;
  long lVar10;
  long lStack_240;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_10001c098;
  if ((((ulong)param_3 & 1) != 0) ||
     (lVar10 = param_1, puVar8 = param_3, lStack_228 = unaff_x21, (int)param_4 != 0)) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    func_0x0001000189e0(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_10001c030);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = &uStack_1b0;
    lVar10 = param_1;
    func_0x000100017ce0();
    lStack_1f8 = lVar10;
    if (lVar10 != 0) {
      lVar10 = *plStack_1a0;
      lStack_200 = lVar10;
      do {
        lVar9 = 0;
        do {
          if (*plStack_1a0 != lVar10) {
            _objc_enumerationMutation(param_1);
          }
          lVar2 = *(long *)(lStack_1a8 + lVar9 * 8);
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          func_0x000100017f80();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = &uStack_1f0;
          lVar3 = lVar2;
          func_0x000100017ce0();
          if (lVar3 != 0) {
            unaff_x22 = *plStack_1e0;
            do {
              lVar10 = 0;
              do {
                if (*plStack_1e0 != unaff_x22) {
                  _objc_enumerationMutation(lVar2);
                }
                iVar1 = (int)*(undefined8 *)(lStack_1e8 + lVar10 * 8);
                _CMFormatDescriptionGetMediaSubType();
                if ((((int)param_3 != 0) && (iVar1 == 0x68766331 || iVar1 == 0x6d757861)) ||
                   (((int)param_4 != 0 && (iVar1 == 0x61763031)))) {
                  _objc_release(lVar2);
                  param_4 = (undefined1 *)0x1;
                  goto LAB_100010730;
                }
                lVar10 = lVar10 + 1;
              } while (lVar3 != lVar10);
              puVar8 = &uStack_1f0;
              lVar3 = lVar2;
              func_0x000100017ce0();
              lVar10 = lStack_200;
            } while (lVar3 != 0);
          }
          _objc_release(lVar2);
          lVar9 = lVar9 + 1;
        } while (lVar9 != lStack_1f8);
        puVar8 = &uStack_1b0;
        lVar9 = param_1;
        func_0x000100017ce0();
        lStack_1f8 = lVar9;
      } while (lVar9 != 0);
    }
    param_4 = (undefined1 *)0x0;
LAB_100010730:
    lVar10 = param_1;
    _objc_release();
    lStack_228 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_70) {
    return param_4;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_240;
  pcStack_208 = FUN_100010778;
  lStack_230 = unaff_x22;
  puStack_220 = param_3;
  puStack_218 = param_4;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puStack_238 = PTR_PTR_1000219d0;
  lStack_240 = lVar10;
  _objc_msgSendSuper2(&lStack_240,PTR_s_init_100021620);
  if (plVar4 != (long *)0x0) {
    _objc_retain(puVar8);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x18);
    *(undefined8 **)((long)plVar4 + 0x18) = puVar8;
    _objc_release(uVar5);
    puVar6 = puVar8;
    func_0x000100017cc0();
    if (puVar6 < (undefined8 *)0x2) {
      puVar6 = puVar8;
      func_0x0001000185c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x0001000184e0();
      *(undefined8 **)((long)plVar4 + 0x10) = puVar7;
      _objc_release(puVar6);
    }
    else {
      *(undefined8 *)((long)plVar4 + 0x10) = 2;
    }
    *(undefined1 *)((long)plVar4 + 8) = 0;
    *(undefined8 *)((long)plVar4 + 0x20) = 0;
  }
  _objc_release(puVar8);
  return (undefined1 *)plVar4;
}



/* Entry: 100010778; end: 10001083f; -[SCShareMedia initWithMedia:] */

undefined1 * FUN_100010778(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1000219d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(ulong *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x000100017cc0();
    if (uVar3 < 2) {
      uVar3 = param_3;
      func_0x0001000185c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x0001000184e0();
      *(ulong *)((long)puVar1 + 0x10) = uVar4;
      _objc_release(uVar3);
    }
    else {
      *(undefined8 *)((long)puVar1 + 0x10) = 2;
    }
    *(undefined1 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100010840; end: 100010847; -[SCShareMedia mediaType] */

undefined8 FUN_100010840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100010848; end: 10001084f; -[SCShareMedia media] */

undefined8 FUN_100010848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100010850; end: 100010857; -[SCShareMedia hasDrawing] */

undefined1 FUN_100010850(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100010858; end: 10001085f; -[SCShareMedia setHasDrawing:] */

void FUN_100010858(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 100010860; end: 100010867; -[SCShareMedia captionLogValue] */

undefined8 FUN_100010860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100010868; end: 10001086f; -[SCShareMedia setCaptionLogValue:] */

void FUN_100010868(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 100010870; end: 10001087b; -[SCShareMedia .cxx_destruct] */

void FUN_100010870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 0x18,0);
  return;
}



/* Entry: 10001087c; end: 1000108ff; -[SCShareMediaImage initWithImage:] */

undefined1 * FUN_10001087c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000219d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100010900; end: 100010907; -[SCShareMediaImage mediaType] */

undefined8 FUN_100010900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100010908; end: 100010967; -[SCShareMediaImage media] */

void FUN_100010908(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100017e20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x000100018040(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(param_1);
  return;
}



/* Entry: 100010968; end: 1000109df; -[SCShareMediaImage isPortraitImage] */

bool FUN_100010968(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000100018040();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000188e0();
  func_0x000100018040(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000188e0();
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1 < param_2;
}



/* Entry: 1000109e0; end: 1000109e7; -[SCShareMediaImage image] */

undefined8 FUN_1000109e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000109e8; end: 100010a17; -[SCShareMediaImage setImage:] */

void FUN_1000109e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(uVar1);
  return;
}



/* Entry: 100010a18; end: 100010a1f; -[SCShareMediaImage editImage] */

undefined8 FUN_100010a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100010a20; end: 100010a4f; -[SCShareMediaImage setEditImage:] */

void FUN_100010a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(uVar1);
  return;
}



/* Entry: 100010a50; end: 100010a57; -[SCShareMediaImage setMediaType:] */

void FUN_100010a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 100010a58; end: 100010a87; -[SCShareMediaImage .cxx_destruct] */

void FUN_100010a58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 8,0);
  return;
}



/* Entry: 100010a88; end: 100010b1f; -[SCShareMediaText initWithText:] */

undefined1 * FUN_100010a88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000219e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_10001c790;
    }
    else {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1000218a0;
      func_0x000100018960();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = ppuVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100010b20; end: 100010b27; -[SCShareMediaText mediaType] */

undefined8 FUN_100010b20(void)

{
  return 4;
}



/* Entry: 100010b28; end: 100010b3b; -[SCShareMediaText media] */

void FUN_100010b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100018970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_10001c290)
            (PTR__OBJC_CLASS___NSString_1000218a0,PTR_s_stringWithString__100021848,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100010b3c; end: 100010b43; -[SCShareMediaText text] */

undefined8 FUN_100010b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100010b44; end: 100010b4f; -[SCShareMediaText .cxx_destruct] */

void FUN_100010b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 8,0);
  return;
}



/* Entry: 100010b50; end: 100010bc3; -[SCShareMediaURL initWithURL:] */

undefined1 * FUN_100010b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000219e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100010bc4; end: 100010bcb; -[SCShareMediaURL mediaType] */

undefined8 FUN_100010bc4(void)

{
  return 3;
}



/* Entry: 100010bcc; end: 100010bcf; -[SCShareMediaURL media] */

void FUN_100010bcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100018a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_10001c290)(param_1,PTR_s_url_100021878);
  return;
}



/* Entry: 100010bd0; end: 100010bd7; -[SCShareMediaURL headline] */

undefined8 FUN_100010bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100010bd8; end: 100010bdf; -[SCShareMediaURL setHeadline:] */

void FUN_100010bd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001767c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_10001c2e8)();
  return;
}



/* Entry: 100010be0; end: 100010be7; -[SCShareMediaURL url] */

undefined8 FUN_100010be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100010be8; end: 100010c17; -[SCShareMediaURL setUrl:] */

void FUN_100010be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(uVar1);
  return;
}



/* Entry: 100010c18; end: 100010c47; -[SCShareMediaURL .cxx_destruct] */

void FUN_100010c18(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 8,0);
  return;
}



/* Entry: 100010c48; end: 100010cc3; -[SCShareMediaVideo initWithAVURLAsset:] */

undefined1 * FUN_100010c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000219f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100010cc4; end: 100010ccb; -[SCShareMediaVideo mediaType] */

undefined8 FUN_100010cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100010ccc; end: 100010ccf; -[SCShareMediaVideo media] */

void FUN_100010ccc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100017b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_10001c290)(param_1,PTR_s_asset_1000214b0);
  return;
}



/* Entry: 100010cd0; end: 100010d47; -[SCShareMediaVideo isPortraitVideo] */

bool FUN_100010cd0(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000100017b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000188e0();
  func_0x000100017b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000188e0();
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1 <= param_2;
}



/* Entry: 100010d48; end: 100010d4f; -[SCShareMediaVideo asset] */

undefined8 FUN_100010d48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100010d50; end: 100010d7f; -[SCShareMediaVideo setAsset:] */

void FUN_100010d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(uVar1);
  return;
}



/* Entry: 100010d80; end: 100010d87; -[SCShareMediaVideo setMediaType:] */

void FUN_100010d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 100010d88; end: 100010d93; -[SCShareMediaVideo .cxx_destruct] */

void FUN_100010d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 8,0);
  return;
}



/* Entry: 100010d94; end: 100010eb7; -[SCShareSession initWithUserId:username:shareMedia:initialIntentIdentifier:authToken:] */

undefined1 *
FUN_100010d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1000219f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100010eb8; end: 100010ebf; -[SCShareSession userId] */

undefined8 FUN_100010eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100010ec0; end: 100010ec7; -[SCShareSession username] */

undefined8 FUN_100010ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100010ec8; end: 100010ecf; -[SCShareSession shareMedia] */

undefined8 FUN_100010ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100010ed0; end: 100010ed7; -[SCShareSession initialIntentIdentifier] */

undefined8 FUN_100010ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100010ed8; end: 100010edf; -[SCShareSession authToken] */

undefined8 FUN_100010ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100010ee0; end: 100010f33; -[SCShareSession .cxx_destruct] */

void FUN_100010ee0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 8,0);
  return;
}



/* Entry: 100010f34; end: 100010f7f; -[SCShareViewController loadView] */

void FUN_100010f34(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_100021a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_100021300);
  func_0x0001000187e0(param_1);
  return;
}



/* Entry: 100010f80; end: 10001101f; -[SCShareViewController viewDidLoad] */

void FUN_100010f80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_100021a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_100021308);
  puVar1 = PTR__OBJC_CLASS___SCExtensionCrashManager_1000218a8;
  func_0x0001000188c0(PTR__OBJC_CLASS___SCExtensionCrashManager_1000218a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100018900();
  _objc_release(puVar1);
  func_0x000100018320(param_1);
  return;
}



/* Entry: 100011020; end: 1000110c3;  */

void FUN_100011020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x000100018860(*(undefined8 *)(param_1 + 0x20));
  puStack_60 = PTR___NSConcreteStackBlock_10001c078;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1000110c4;
  puStack_48 = &UNK_10001c468;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_3;
  _objc_retain(param_3);
  _dispatch_async(PTR___dispatch_main_q_10001c0a0,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1000110c4; end: 100011367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000110c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x0001000187a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x000100018880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    _objc_release();
    _objc_release(lVar1);
    if (lVar6 == 0) {
      _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
      uVar2 = 0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_10001c078;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_100011368;
      puStack_58 = &UNK_10001c438;
      _objc_copyWeak(auStack_50,auStack_48);
      _dispatch_async(uVar2,&puStack_70);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      return;
    }
  }
  lVar6 = *(long *)(param_1 + 0x28);
  func_0x000100017be0();
  if (lVar6 == 0x1390) {
    ppuVar5 = &PTR____CFConstantStringClassReference_10001c8b0;
    _SCLocalizedString(&PTR____CFConstantStringClassReference_10001c8b0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_100021a74);
    func_0x0001000188a0();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1000218a0;
    if (0 < lVar6) {
      ppuVar3 = &PTR____CFConstantStringClassReference_10001c8d0;
      _SCLocalizedString(&PTR____CFConstantStringClassReference_10001c8d0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001000188a0();
      func_0x000100018760(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      goto LAB_100011330;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_10001c8f0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x000100017be0();
    if (lVar6 == 0x1395) {
      ppuVar5 = &PTR____CFConstantStringClassReference_10001c8b0;
      _SCLocalizedString(&PTR____CFConstantStringClassReference_10001c8b0,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_10001c910;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x000100017be0();
      if (lVar6 != 0x138c) {
        lVar6 = *(long *)(param_1 + 0x28);
        func_0x000100017be0();
        if (lVar6 != 0x138b) {
          ppuVar5 = &PTR____CFConstantStringClassReference_10001c8b0;
          _SCLocalizedString(&PTR____CFConstantStringClassReference_10001c8b0,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = &PTR____CFConstantStringClassReference_10001c970;
          goto LAB_10001131c;
        }
      }
      ppuVar5 = &PTR____CFConstantStringClassReference_10001c930;
      _SCLocalizedString(&PTR____CFConstantStringClassReference_10001c930,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_10001c950;
    }
  }
LAB_10001131c:
  _SCLocalizedString(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
LAB_100011330:
  func_0x000100017ee0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(ppuVar5);
  return;
}



/* Entry: 100011368; end: 10001140b;  */

void FUN_100011368(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x000100017940(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10001140c; end: 100011463;  */

void FUN_10001140c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x000100017880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_1);
  return;
}



/* Entry: 100011464; end: 100011477;  */

void FUN_100011464(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000175b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_10001c258)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 100011478; end: 1000114c7;  */

void FUN_100011478(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010001764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_10001c2c8)(*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 1000114c8; end: 1000114d7;  */

void FUN_1000114c8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010001764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_10001c2c8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 1000114d8; end: 1000115b7; -[SCShareViewController _onDeepLinkAttemptHandled:error:] */

void FUN_1000114d8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_10001c078;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1000115b8;
  puStack_58 = &UNK_10001c4c8;
  uStack_40 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_copyWeak(auStack_48,auStack_38);
  __runOnMainThreadAsynchronously("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1000115b8; end: 100011673;  */

void FUN_1000115b8(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 0x20) == 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x000100017f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100017c00();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_10001c2c0)(param_1);
    return;
  }
  return;
}



/* Entry: 100011674; end: 100011903; -[SCShareViewController _saveSendToContentToDiskAndDeepLink:] */

void FUN_100011674(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1000218b0;
  func_0x000100017fa0(PTR_PTR_1000218b0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSFileManager_1000218b8;
  func_0x000100017da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100018640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x000100017f20();
  _objc_release(puVar2);
  _objc_release(puVar9);
  if (((ulong)puVar3 & 1) == 0) {
    puVar9 = PTR__OBJC_CLASS___NSFileManager_1000218b8;
    func_0x000100017da0(PTR__OBJC_CLASS___NSFileManager_1000218b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100017d00();
    _objc_release(puVar9);
  }
  lVar4 = param_1;
  func_0x0001000177e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined *)0x0;
  _objc_retain(0);
  if (lVar4 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    puVar2 = PTR_PTR_1000218c0;
    _objc_alloc(PTR_PTR_1000218c0);
    lVar5 = param_1;
    func_0x0001000187a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000100018300();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100018160(puVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1000218c8;
    func_0x000100017ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(0);
    if (puVar3 == (undefined *)0x0) {
      puVar9 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,0,0);
    }
    _SCUUID();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000218d0;
    _objc_alloc();
    func_0x0001000180e0();
    puVar8 = puVar7;
    func_0x000100018aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    if (puVar8 == (undefined *)0x0) {
      func_0x0001000178a0(param_1);
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3,0,puVar8);
    }
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar9 = puVar8;
  }
  _objc_release(lVar4);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 100011904; end: 100011b43; -[SCShareViewController _openDeeplinkWithFileName:completion:] */

void FUN_100011904(long param_1,ulong param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_10001c098;
  _objc_retain(param_4);
  puVar6 = PTR__OBJC_CLASS___NSURLQueryItem_1000218d8;
  func_0x0001000186c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1000218e0;
  func_0x000100017b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSString_1000218a0;
  lVar2 = param_1;
  func_0x0001000177c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100018760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSURLComponents_1000218e8;
  func_0x000100017c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100018820();
  func_0x000100017740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001000179e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1000218f0;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1000218f0);
    func_0x0001000181c0();
    param_2 = 0;
    (**(code **)(param_4 + 0x10))(param_4,0,puVar4);
  }
  else {
    puVar4 = puVar3;
    func_0x000100017740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x000100018620(param_1);
    _objc_release(puVar4);
    puVar4 = param_4;
  }
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_10001c098 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if ((param_2 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1000218f0;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1000218f0);
    func_0x0001000181c0();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  (**(code **)(*(long *)(param_4 + 0x20) + 0x10))(*(long *)(param_4 + 0x20),param_2,puVar6);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(puVar6);
  return;
}



/* Entry: 100011b44; end: 100011bb3;  */

void FUN_100011b44(long param_1,ulong param_2)

{
  undefined *puVar1;
  
  if ((param_2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1000218f0;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1000218f0);
    func_0x0001000181c0();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(puVar1);
  return;
}



/* Entry: 100011bb4; end: 100011bc3;  */

void FUN_100011bb4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010001740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_10001c068)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  return;
}



/* Entry: 100011bc4; end: 100011d23; -[SCShareViewController _saveImageToDiskForSendTo:error:] */

void FUN_100011bc4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x0001000184c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIImage_1000218f8;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1000218f8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar7);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar2 = uVar1;
  _UIImageJPEGRepresentation(0x3ff0000000000000,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1000218b0;
  func_0x000100017fa0(PTR_PTR_1000218b0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000218d0;
  _objc_alloc();
  func_0x0001000180e0();
  puVar5 = puVar4;
  func_0x000100018aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_4 = puVar5;
  puVar6 = puVar7;
  if (puVar5 == (undefined *)0x0) {
    func_0x000100017760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_100021900;
    func_0x000100018080(PTR_PTR_100021900);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar7);
  return;
}



/* Entry: 100011d24; end: 100011ea7; -[SCShareViewController _saveVideoToDiskForSendTo:error:] */

void FUN_100011d24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  func_0x0001000184c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_100021908;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_100021908);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_3);
  uVar2 = uVar4;
  func_0x000100017740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1000218b0;
  func_0x000100017fa0(PTR_PTR_1000218b0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000100017760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  uVar4 = uVar2;
  func_0x000100018660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x000100017780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1000218b8;
  func_0x000100017da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x000100017ca0();
  _objc_release(puVar5);
  puVar5 = (undefined *)0x0;
  if ((int)puVar3 != 0) {
    puVar5 = PTR_PTR_100021900;
    func_0x000100018a80(PTR_PTR_100021900);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar5);
  return;
}



/* Entry: 100011ea8; end: 100012337; -[SCShareViewController _getExternalContentForSendTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100011ea8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *puVar8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_10001c098;
  puVar1 = param_1;
  func_0x0001000187a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100018880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar8 = puVar2;
  func_0x0001000184e0();
  if ((long)puVar8 < 2) {
    puVar6 = param_1;
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = puVar2;
      func_0x0001000184c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar1;
      func_0x000100017f40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100017920();
      _objc_retainAutoreleasedReturnValue();
LAB_10001223c:
      _objc_release(unaff_x23);
      _objc_release(puVar1);
      param_3 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        unaff_x24 = (undefined8 *)0x0;
      }
      else {
        unaff_x24 = (undefined8 *)PTR_PTR_100021910;
        func_0x000100018500();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1000122ec;
    }
    if (puVar8 == (undefined8 *)0x1) {
      puVar1 = puVar2;
      func_0x0001000184c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar1;
      func_0x000100017f40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100017960();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10001223c;
    }
  }
  else {
    if (puVar8 == (undefined8 *)0x2) {
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_100021918;
      _objc_opt_new();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      unaff_x23 = puVar2;
      func_0x0001000184c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = unaff_x23;
      func_0x000100017ce0();
      if (puVar1 != (undefined8 *)0x0) {
        unaff_x26 = *plStack_120;
        do {
          puVar8 = (undefined8 *)0x0;
          do {
            if (*plStack_120 != unaff_x26) {
              _objc_enumerationMutation(unaff_x23);
            }
            unaff_x25 = *(undefined8 **)(lStack_128 + (long)puVar8 * 8);
            puVar3 = unaff_x25;
            func_0x0001000184e0();
            puVar4 = param_1;
            if (puVar3 != (undefined8 *)0x0) {
              if (puVar3 == (undefined8 *)0x1) {
                func_0x000100017960();
                _objc_retainAutoreleasedReturnValue();
                if (puVar4 != (undefined8 *)0x0) goto LAB_1000120e4;
              }
              else if (2 < (long)puVar3 - 2U) goto LAB_1000120fc;
LAB_10001228c:
              unaff_x24 = (undefined8 *)0x0;
              goto LAB_100012290;
            }
            func_0x000100017920();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined8 *)0x0) goto LAB_10001228c;
LAB_1000120e4:
            func_0x000100017a60(puVar6);
            _objc_release(puVar4);
            unaff_x25 = puVar4;
LAB_1000120fc:
            puVar8 = (undefined8 *)((long)puVar8 + 1);
          } while (puVar1 != puVar8);
          puVar1 = unaff_x23;
          func_0x000100017ce0();
        } while (puVar1 != (undefined8 *)0x0);
      }
      _objc_release(unaff_x23);
      param_3 = (undefined8 *)PTR_PTR_100021910;
      unaff_x23 = puVar6;
      func_0x000100017c80();
      unaff_x24 = param_3;
      func_0x000100018520();
      _objc_retainAutoreleasedReturnValue();
LAB_100012290:
      _objc_release(unaff_x23);
      puVar1 = puVar6;
    }
    else if (puVar8 == (undefined8 *)0x3) {
      puVar8 = puVar2;
      func_0x0001000184c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar8;
      func_0x000100017f40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = unaff_x23;
      func_0x0001000184c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(puVar8);
      puVar5 = PTR__OBJC_CLASS___NSURL_100021920;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_100021920);
      puVar8 = puVar1;
      _objc_opt_isKindOfClass(puVar1,puVar5);
      puVar6 = puVar1;
      if (((ulong)puVar8 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar1);
      if (puVar6 == (undefined8 *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSError_1000218f0;
        _objc_alloc();
LAB_1000122d4:
        func_0x0001000181c0();
        _objc_autorelease();
        unaff_x24 = (undefined8 *)0x0;
        *param_3 = puVar5;
        param_1 = puVar6;
      }
      else {
        unaff_x24 = (undefined8 *)PTR_PTR_100021910;
        func_0x000100018a40();
        _objc_retainAutoreleasedReturnValue();
        param_1 = puVar6;
      }
    }
    else {
      if (puVar8 != (undefined8 *)0x4) goto LAB_1000122f0;
      puVar8 = puVar2;
      func_0x0001000184c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar8;
      func_0x000100017f40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = unaff_x23;
      func_0x0001000184c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(puVar8);
      puVar5 = PTR__OBJC_CLASS___NSString_1000218a0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1000218a0);
      puVar8 = puVar1;
      _objc_opt_isKindOfClass(puVar1,puVar5);
      puVar6 = puVar1;
      if (((ulong)puVar8 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar1);
      if (puVar6 == (undefined8 *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSError_1000218f0;
        _objc_alloc();
        goto LAB_1000122d4;
      }
      unaff_x24 = (undefined8 *)PTR_PTR_100021910;
      func_0x0001000189a0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar6;
    }
LAB_1000122ec:
    _objc_release(puVar6);
  }
LAB_1000122f0:
  puVar8 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_138 = FUN_100012338;
  puVar5 = PTR__OBJC_CLASS___NSBundle_100021928;
  lStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = puVar1;
  puStack_158 = param_1;
  puStack_150 = param_3;
  puStack_148 = puVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x0001000184a0(PTR__OBJC_CLASS___NSBundle_100021928);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x000100018720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSUserDefaults_100021930;
  _objc_alloc();
  func_0x000100018280();
  puVar2 = puVar1;
  func_0x0001000185e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined8 *)0x0) {
    unaff_x23 = puVar1;
    func_0x0001000185e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = unaff_x23;
    func_0x000100017ba0();
    if (((ulong)puVar6 & 1) != 0) goto LAB_1000123f4;
    _objc_release(unaff_x23);
    _objc_release(puVar2);
    goto LAB_100012484;
  }
LAB_1000123f4:
  puVar6 = puVar1;
  func_0x0001000185e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined8 *)0x0) {
    _objc_release();
    if (puVar2 != (undefined8 *)0x0) {
      _objc_release(unaff_x23);
      _objc_release(puVar2);
    }
LAB_1000124f4:
    _objc_retain(puVar1);
    unaff_x24 = puVar1;
  }
  else {
    puVar3 = puVar1;
    func_0x0001000185e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000100017ba0();
    _objc_release(puVar3);
    _objc_release(puVar6);
    if (puVar2 == (undefined8 *)0x0) {
      if ((int)puVar4 == 0) goto LAB_1000124f4;
    }
    else {
      _objc_release(unaff_x23);
      _objc_release(puVar2);
      if (((ulong)puVar4 & 1) == 0) goto LAB_1000124f4;
    }
LAB_100012484:
    _objc_initWeak(auStack_188,puVar8);
    puStack_1b0 = PTR___NSConcreteStackBlock_10001c078;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_10001254c;
    puStack_198 = &UNK_10001c438;
    _objc_copyWeak(auStack_190,auStack_188);
    __runOnMainThreadAsynchronously("APPSTORE",&puStack_1b0);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    unaff_x24 = (undefined8 *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(puVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(unaff_x24);
  return;
}



/* Entry: 100012338; end: 10001254b; -[SCShareViewController loadSharedDefaults] */

void FUN_100012338(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x23;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_100021928;
  func_0x0001000184a0(PTR__OBJC_CLASS___NSBundle_100021928);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100018720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_100021930;
  _objc_alloc();
  func_0x000100018280();
  puVar3 = puVar1;
  func_0x0001000185e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    unaff_x23 = puVar1;
    func_0x0001000185e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x23;
    func_0x000100017ba0();
    if (((ulong)puVar4 & 1) != 0) goto LAB_1000123f4;
    _objc_release(unaff_x23);
    _objc_release(puVar3);
    goto LAB_100012484;
  }
LAB_1000123f4:
  puVar4 = puVar1;
  func_0x0001000185e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      _objc_release(unaff_x23);
      _objc_release(puVar3);
    }
LAB_1000124f4:
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  else {
    puVar5 = puVar1;
    func_0x0001000185e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000100017ba0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) {
      if ((int)puVar6 == 0) goto LAB_1000124f4;
    }
    else {
      _objc_release(unaff_x23);
      _objc_release(puVar3);
      if (((ulong)puVar6 & 1) == 0) goto LAB_1000124f4;
    }
LAB_100012484:
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_10001c078;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10001254c;
    puStack_68 = &UNK_10001c438;
    _objc_copyWeak(auStack_60,auStack_58);
    __runOnMainThreadAsynchronously("APPSTORE",&puStack_80);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    puVar3 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar3);
  return;
}



/* Entry: 10001254c; end: 1000125d7;  */

void FUN_10001254c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_10001c9b0;
  _SCLocalizedString(&PTR____CFConstantStringClassReference_10001c9b0,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_10001c9d0;
  _SCLocalizedString(&PTR____CFConstantStringClassReference_10001c9d0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100017ee0(param_1);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_1);
  return;
}



/* Entry: 1000125d8; end: 10001267f; -[SCShareViewController loadShareExtConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000125d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_100021a7c);
  func_0x0001000185e0(lVar1,param_2,&PTR____CFConstantStringClassReference_10001c890);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_100021938;
    _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_100021938);
    func_0x000100018100();
    func_0x000100018840();
    puVar3 = puVar2;
    func_0x000100017d80(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_10001c008);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar3);
  return;
}



/* Entry: 100012680; end: 100012793; -[SCShareViewController initializeSession:] */

void FUN_100012680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x000100017f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000100017820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_10001c078;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100012794;
  puStack_68 = &UNK_10001c528;
  uStack_60 = param_1;
  uStack_58 = uVar1;
  uStack_50 = uVar2;
  uStack_48 = param_3;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _dispatch_async(uVar3,&puStack_80);
  _objc_release(uVar3);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 100012794; end: 100012a97;  */

/* WARNING: Removing unreachable block (ram,0x00010001299c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012794(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100018480();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_100021a80);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_100021a80) = uVar1;
  _objc_release(uVar8);
  puVar2 = PTR__OBJC_CLASS___SCKeychainManager_100021940;
  func_0x000100017d20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSString_1000218a0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1000218a0);
    func_0x0001000181a0();
  }
  puVar3 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000218d0;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_1000218d0);
  func_0x000100018240();
  puVar4 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_100021948;
  _objc_alloc();
  func_0x0001000181e0();
  lVar10 = (long)_DAT_100021a84;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar10) = puVar4;
  _objc_release(uVar1);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + lVar10);
  func_0x000100018940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + lVar10);
  func_0x000100018940();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x000100018400();
  if ((lVar10 == 0) || (lVar10 = lVar6, func_0x000100018400(), lVar10 == 0)) {
    lVar10 = *(long *)(param_1 + 0x38);
    puVar4 = PTR__OBJC_CLASS___NSError_1000218f0;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1000218f0);
    func_0x0001000181c0();
    (**(code **)(lVar10 + 0x10))(lVar10,0,puVar4);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000218d0;
    _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_1000218d0);
    func_0x000100018120();
    puVar7 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_100021948;
    _objc_alloc();
    func_0x0001000181e0();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_100021a7c);
    *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_100021a7c) = puVar7;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100018440();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_100021a74;
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar11);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar11) = uVar1;
    _objc_release(uVar8);
    lVar10 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar10 + lVar11) == 0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar10 = *(long *)(param_1 + 0x20);
    }
    func_0x000100018460(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar7 = PTR_PTR_100021950;
    _objc_alloc(PTR_PTR_100021950);
    func_0x0001000182e0();
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar7,0);
    _objc_release(puVar7);
    _objc_release(lVar10);
    _objc_release(0);
  }
  _objc_release(puVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  return;
}



/* Entry: 100012a98; end: 100012b13;  */

void FUN_100012a98(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010001740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_10001c068)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  return;
}



/* Entry: 100012b14; end: 100012b87; -[SCShareViewController _initialIntentIdentifierForExtensionContext:] */

void FUN_100012b14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000100018360();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___INSendMessageIntent_100021958;
    _objc_opt_class(PTR__OBJC_CLASS___INSendMessageIntent_100021958);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_3;
      func_0x000100017c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_100012b70;
    }
  }
  uVar2 = 0;
LAB_100012b70:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(uVar2);
  return;
}



/* Entry: 100012b88; end: 1000135e3; -[SCShareViewController loadShareMediaForExtensionContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012b88(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined *puStack_420;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_10001c098;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x000100018340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x000100017f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puStack_1c0 = &uStack_1c8;
  uStack_1c8 = 0;
  uStack_1b8 = 0x3032000000;
  pcStack_1b0 = FUN_1000135e4;
  uStack_1a8 = 0x1000135f4;
  uStack_1a0 = 0;
  puStack_1e0 = &uStack_1e8;
  uStack_1e8 = 0;
  uStack_1d8 = 0x2020000000;
  uStack_1d0 = 0;
  lVar12 = (long)_DAT_100021a74;
  lVar3 = *(long *)(param_1 + lVar12);
  func_0x0001000188a0();
  if (0 < lVar3) {
    func_0x0001000188a0();
  }
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x2020000000;
  uStack_210 = 0;
  func_0x000100018020();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x000100017b80();
  _dispatch_group_create();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_100021918;
  lVar3 = lVar2;
  func_0x000100017b60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100017cc0();
  func_0x000100017ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puStack_250 = &uStack_258;
  uStack_258 = 0;
  uStack_248 = 0x3032000000;
  pcStack_240 = FUN_1000135e4;
  uStack_238 = 0x1000135f4;
  uStack_230 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lVar3 = lVar2;
  func_0x000100017b60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x000100017ce0();
  if (lVar6 != 0) {
    lVar14 = *plStack_290;
    do {
      lVar19 = 0;
      do {
        if (*plStack_290 != lVar14) {
          _objc_enumerationMutation(lVar3);
        }
        uVar17 = *(undefined8 *)(lStack_298 + lVar19 * 8);
        uVar11 = uVar17;
        func_0x000100017fe0();
        if ((int)uVar11 == 0) {
          uVar11 = uVar17;
          func_0x000100017fe0();
          if ((int)uVar11 == 0) {
            uVar11 = uVar17;
            func_0x000100017fe0();
            if ((int)uVar11 == 0) {
              uVar11 = uVar17;
              func_0x000100017fe0();
              if ((int)uVar11 != 0) {
                _dispatch_group_enter(uVar4);
                _objc_retain(puVar5);
                _objc_retain(uVar4);
                func_0x000100018420(uVar17);
                _objc_release(uVar4);
                _objc_release(puVar5);
              }
            }
            else {
              _dispatch_group_enter(uVar4);
              _objc_retain(puVar5);
              _objc_retain(uVar4);
              func_0x000100018420(uVar17);
              _objc_release(uVar4);
              _objc_release(puVar5);
            }
          }
          else {
            _dispatch_group_enter(uVar4);
            _objc_retain(puVar5);
            _objc_retain(uVar4);
            func_0x000100018420(uVar17);
            _objc_release(uVar4);
            _objc_release(puVar5);
          }
        }
        else {
          _objc_initWeak(auStack_2a8,param_1);
          _dispatch_group_enter(uVar4);
          _objc_copyWeak(auStack_2b0,auStack_2a8);
          _objc_retain(puVar5);
          _objc_retain(uVar4);
          func_0x000100018420(uVar17);
          _objc_release(uVar4);
          _objc_release(puVar5);
          _objc_destroyWeak(auStack_2b0);
          _objc_destroyWeak(auStack_2a8);
        }
        lVar19 = lVar19 + 1;
      } while (lVar6 != lVar19);
      lVar6 = lVar3;
      func_0x000100017ce0();
    } while (lVar6 != 0);
  }
  _objc_release(lVar3);
  _dispatch_group_wait(uVar4,0xffffffffffffffff);
  lVar3 = puStack_1c0[5];
  if (lVar3 != 0) {
    _objc_retainAutorelease();
    puVar13 = (undefined *)0x0;
    *param_4 = lVar3;
    goto LAB_100013484;
  }
  puVar13 = PTR__OBJC_CLASS___NSError_1000218f0;
  if (*(char *)(puStack_1e0 + 3) == '\x01') {
    _objc_alloc();
    func_0x0001000181c0();
    _objc_autorelease();
LAB_100013474:
    *param_4 = (long)puVar13;
    puVar7 = PTR__OBJC_CLASS___NSNumber_100021980;
  }
  else {
    if (*(char *)(puStack_200 + 3) == '\x01') {
      _objc_alloc();
      func_0x0001000181c0();
      _objc_autorelease();
      goto LAB_100013474;
    }
    if (*(char *)(puStack_220 + 3) == '\x01') {
      _objc_alloc();
      func_0x0001000181c0();
      _objc_autorelease();
      goto LAB_100013474;
    }
    puVar13 = puVar5;
    func_0x000100017cc0();
    if (puVar13 == (undefined *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSError_1000218f0;
      _objc_alloc();
      func_0x0001000181c0();
      _objc_autorelease();
      goto LAB_100013474;
    }
    puVar13 = (undefined *)*param_4;
    puVar7 = PTR__OBJC_CLASS___NSNumber_100021980;
  }
  PTR__OBJC_CLASS___NSNumber_100021980 = puVar7;
  if (puVar13 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    goto LAB_100013484;
  }
  func_0x000100017cc0(puVar5);
  func_0x000100018580(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000100017e80(puVar5);
  puVar13 = puVar5;
  func_0x0001000180a0();
  if (puVar13 == (undefined *)0x7fffffffffffffff) {
    _objc_retain(puVar5);
    puStack_420 = puVar5;
  }
  else {
    puVar13 = puVar5;
    func_0x0001000185c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_420 = PTR__OBJC_CLASS___NSArray_1000218e0;
    puStack_118 = puVar13;
    func_0x000100017b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
  }
  puVar13 = puStack_420;
  func_0x000100017cc0();
  if (puVar13 == (undefined *)0x1) {
    puVar13 = puStack_420;
    func_0x000100017f40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x0001000184e0();
    if (puVar7 == (undefined *)0x3) {
      lVar3 = puStack_250[5];
      _objc_release(puVar13);
      if (lVar3 == 0) goto LAB_10001327c;
      puVar13 = puStack_420;
      func_0x000100017f40(puStack_420);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001000187c0();
    }
    _objc_release(puVar13);
  }
LAB_10001327c:
  iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
  func_0x000100017aa0();
  if (iVar1 != 0) {
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_100021918;
    _objc_opt_new();
    _objc_retain(puStack_420);
    puVar7 = puStack_420;
    func_0x000100017ce0();
    lVar3 = lRam0000000000000000;
    uVar15 = 0;
    puVar16 = puStack_420;
    if (puVar7 == (undefined *)0x0) {
LAB_100013410:
      _objc_release(puStack_420);
      puStack_420 = puVar16;
    }
    else {
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puStack_420);
          }
          uVar18 = *(ulong *)((long)puVar16 * 8);
          uVar8 = uVar18;
          func_0x0001000184e0();
          if (uVar8 == 4) {
            func_0x0001000184c0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSString_1000218a0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1000218a0);
            uVar10 = uVar18;
            _objc_opt_isKindOfClass(uVar18,puVar9);
            uVar8 = uVar18;
            if ((uVar10 & 1) == 0) {
              uVar8 = 0;
            }
            _objc_retain(uVar8);
            _objc_release(uVar18);
            _objc_release(uVar15);
            uVar15 = uVar8;
          }
          else {
            func_0x000100017a60(puVar13);
          }
          puVar16 = puVar16 + 1;
        } while (puVar7 != puVar16);
        puVar7 = puStack_420;
        func_0x000100017ce0();
      } while (puVar7 != (undefined *)0x0);
      _objc_release(puStack_420);
      if ((uVar15 != 0) && (puVar7 = puVar13, func_0x000100017cc0(), puVar7 != (undefined *)0x0)) {
        puVar7 = puVar13;
        func_0x000100017cc0();
        puVar16 = puStack_420;
        func_0x000100017cc0();
        if (puVar7 < puVar16) {
          lVar3 = (long)_DAT_100021a78;
          _objc_retain(uVar15);
          uVar11 = *(undefined8 *)(param_1 + lVar3);
          *(ulong *)(param_1 + lVar3) = uVar15;
          _objc_release(uVar11);
          _objc_retain(puVar13);
          puVar16 = puVar13;
          goto LAB_100013410;
        }
      }
    }
    _objc_release(puVar13);
    _objc_release(uVar15);
  }
  puVar13 = PTR_PTR_100021988;
  _objc_alloc(PTR_PTR_100021988);
  func_0x000100018220();
  _objc_release(puStack_420);
LAB_100013484:
  __Block_object_dispose(&uStack_258,8);
  _objc_release(uStack_230);
  _objc_release(puVar5);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_208,8);
  __Block_object_dispose(&uStack_1e8,8);
  __Block_object_dispose(&uStack_1c8,8);
  _objc_release(uStack_1a0);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar13);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_258,8);
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_208,8);
  __Block_object_dispose(&uStack_1e8,8);
  lVar3 = 8;
  __Block_object_dispose(&uStack_1c8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 1000135e4; end: 1000135fb;  */

void FUN_1000135e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1000135fc; end: 10001378b;  */

void FUN_1000135fc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 != 0) {
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x000100017980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_100021960;
        _objc_alloc(PTR_PTR_100021960);
        func_0x000100018200();
        func_0x000100017a60(uVar4);
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_58,param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x000100018420(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10001378c; end: 10001386b;  */

void FUN_10001378c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_10001384c;
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x0001000179a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(lVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_100021960;
    _objc_alloc(PTR_PTR_100021960);
    func_0x000100018200();
    func_0x000100017a60(uVar2);
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_3);
    puVar3 = *(undefined **)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = param_3;
    lVar1 = param_2;
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
LAB_10001384c:
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 10001386c; end: 100013983;  */

void FUN_10001386c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x0001000175b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_10001c258)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 100013984; end: 100013b2b;  */

/* WARNING: Removing unreachable block (ram,0x000100013ac4) */
/* WARNING: Removing unreachable block (ram,0x000100013adc) */

void FUN_100013984(double param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    if (param_3 == 0) goto LAB_100013afc;
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_100021908;
    func_0x000100017b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    puVar2 = PTR_PTR_100021968;
    _objc_alloc(PTR_PTR_100021968);
    func_0x000100018140();
    func_0x000100017a60(uVar4);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x000100018740();
    if ((int)puVar2 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x18) = 1;
    }
    if (puVar1 == (undefined *)0x0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x000100017e00(&uStack_58,puVar1);
    }
    _CMTimeGetSeconds(&uStack_58);
    if (*(double *)(param_2 + 0x50) < param_1) {
      *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x18) = 1;
    }
    func_0x000100017fc0();
    _objc_retain(0);
    _objc_release(0);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_2 + 0x30) + 8);
    _objc_retain(param_4);
    puVar1 = *(undefined **)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = param_4;
  }
  _objc_release(puVar1);
LAB_100013afc:
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x28));
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100013b2c; end: 100013bef;  */

void FUN_100013b2c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010001740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_10001c068)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 100013bf0; end: 100013c9b;  */

void FUN_100013bf0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_100013c74;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_100021970;
    _objc_alloc(PTR_PTR_100021970);
    func_0x0001000182c0();
    func_0x000100017a60(uVar3);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_3);
    puVar1 = *(undefined **)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_3;
  }
  _objc_release(puVar1);
LAB_100013c74:
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_2);
  return;
}



/* Entry: 100013c9c; end: 100013d0b;  */

void FUN_100013c9c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010001740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_10001c068)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 100013d0c; end: 100013e1f;  */

void FUN_100013d0c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x000100018920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x000100018400();
  if (lVar5 == 0) goto LAB_100013df8;
  puVar3 = PTR__OBJC_CLASS___NSURL_100021920;
  _objc_alloc();
  func_0x000100018260();
  if (puVar3 == (undefined *)0x0) {
LAB_100013da4:
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = param_2;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_100021978;
    _objc_alloc(PTR_PTR_100021978);
    func_0x0001000182a0();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x000100017860();
    if (iVar1 == 0) goto LAB_100013da4;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_100021970;
    _objc_alloc(PTR_PTR_100021970);
    func_0x0001000182c0();
  }
  func_0x000100017a60(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_100013df8:
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_2);
  return;
}



/* Entry: 100013e20; end: 100013e9f;  */

void FUN_100013e20(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010001740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_10001c068)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 100013ea0; end: 100013f23;  */

void FUN_100013ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_100021980;
  _objc_retain(param_2);
  func_0x000100018580(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_100021980;
  func_0x0001000184e0(param_2);
  _objc_release(param_2);
  func_0x000100018580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(puVar2);
  return;
}



/* Entry: 100013f24; end: 100013f43;  */

bool FUN_100013f24(undefined8 param_1,long param_2)

{
  func_0x0001000184e0(param_2);
  return param_2 == 3;
}



/* Entry: 100013f44; end: 100014167; -[SCShareViewController _scaleImageDataForSharing:] */

void FUN_100013f44(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_10001c098;
  _objc_retain(param_5);
  puVar1 = param_5;
  _CGImageSourceCreateWithData(param_5,0);
  puVar5 = param_5;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1000218f8;
    _objc_alloc();
    func_0x000100018180();
  }
  else {
    puVar2 = puVar1;
    _CGImageSourceCopyPropertiesAtIndex();
    fVar7 = SUB84(param_1,0);
    puVar3 = puVar2;
    func_0x000100018600();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100017f60();
    fVar8 = fVar7;
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x000100018600();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100017f60();
    _objc_release(puVar3);
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    param_1 = (double)(ulong)(uint)fVar8;
    param_2 = 5.72267968895267e-315;
    if (fVar8 <= 2208.0) {
      _CFRelease(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIImage_1000218f8;
      _objc_alloc();
      func_0x000100018180();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_100021990;
      func_0x000100017dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      _CGImageSourceCreateThumbnailAtIndex(puVar1,0,puVar3);
      _CFRelease(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIImage_1000218f8;
      if (puVar4 == (undefined *)0x0) {
        _objc_alloc();
        func_0x000100018180();
      }
      else {
        puVar5 = puVar4;
        func_0x000100018060();
        _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_10001c098 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    func_0x0001000188e0(puVar5);
    func_0x0001000188e0(puVar5);
    if (param_2 <= param_1) {
      param_2 = param_1;
    }
    if (param_2 <= 2208.0) {
      _objc_retain(puVar5);
      puVar1 = puVar5;
    }
    else {
      puVar1 = puVar5;
      _UIImageJPEGRepresentation(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        _objc_retain(puVar5);
        param_5 = puVar5;
      }
      else {
        func_0x000100017980(param_5);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar1);
      puVar1 = param_5;
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar1);
  return;
}



/* Entry: 100014168; end: 100014233; -[SCShareViewController _scaleImageForSharing:] */

void FUN_100014168(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  func_0x0001000188e0(param_5);
  func_0x0001000188e0(param_5);
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  if (param_2 <= 2208.0) {
    _objc_retain(param_5);
    param_3 = param_5;
  }
  else {
    lVar1 = param_5;
    _UIImageJPEGRepresentation(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_retain(param_5);
      param_3 = param_5;
    }
    else {
      func_0x000100017980(param_3,param_4,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(param_3);
  return;
}



/* Entry: 100014234; end: 1000142cb; -[SCShareViewController _isURLValid:] */

ulong FUN_100014234(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100018780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001000183c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x000100018780(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001000183c0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1000142cc; end: 10001433b; -[SCShareViewController _sharedApplication] */

void FUN_1000142cc(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIApplication_100021998;
  while (PTR__OBJC_CLASS___UIApplication_100021998 = puVar1, param_1 != 0) {
    _objc_opt_class(puVar1);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar2 & 1) != 0) break;
    uVar2 = param_1;
    func_0x000100018560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = uVar2;
    puVar1 = PTR__OBJC_CLASS___UIApplication_100021998;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(param_1);
  return;
}



/* Entry: 10001433c; end: 100014403; -[SCShareViewController _deeplinkScheme] */

void FUN_10001433c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSBundle_100021928;
  func_0x0001000184a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x0001000180c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100018a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = *(undefined **)PTR__kSCSnapchatDeepLinkIdentifier_10001c218;
    _objc_retain(puVar3);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1000218a0;
    func_0x000100018760(PTR__OBJC_CLASS___NSString_1000218a0,param_2,
                        &PTR____CFConstantStringClassReference_10001ca50);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar3);
  return;
}



/* Entry: 100014404; end: 100014473; -[SCShareViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014404(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_100021a78,0);
  _objc_storeStrong(param_1 + _DAT_100021a74,0);
  _objc_storeStrong(param_1 + _DAT_100021a7c,0);
  _objc_storeStrong(param_1 + _DAT_100021a84,0);
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + _DAT_100021a80,0);
  return;
}



/* Entry: 100014474; end: 10001461f;  */

void FUN_100014474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIAlertController_1000219a0;
  func_0x000100017a80(PTR__OBJC_CLASS___UIAlertController_1000219a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,puVar1);
  puVar3 = PTR__OBJC_CLASS___UIAlertAction_1000219a8;
  ppuVar2 = &PTR____CFConstantStringClassReference_10001ca70;
  _SCLocalizedString(&PTR____CFConstantStringClassReference_10001ca70,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  func_0x000100017a20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x000100017a40(puVar1);
  func_0x0001000186a0(param_1);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100014620; end: 1000146ab;  */

void FUN_100014620(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x000100017de0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100014664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1000146ac; end: 1000146fb;  */

void FUN_1000146ac(void)

{
  func_0x0001000178c0();
  return;
}


