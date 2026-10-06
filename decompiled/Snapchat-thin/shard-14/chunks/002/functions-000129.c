/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b015850; end: 10b01588b; -[SCLensProcessingGeoHourlyForecast .cxx_destruct] */

void FUN_10b015850(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01588c; end: 10b01594b; -[SCLensProcessingGeoWeatherData initWithCelsius:fahrenheit:locationName:hourlyForecasts:] */

undefined1 *
FUN_10b01588c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127044b8;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01594c; end: 10b01596f; -[SCLensProcessingGeoWeatherData copyWithZone:] */

undefined8 FUN_10b01594c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b015970; end: 10b015a33; -[SCLensProcessingGeoWeatherData hash] */

long * FUN_10b015970(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar8 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_48 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar7 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_40 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  plVar4 = &lStack_48;
  uStack_30 = uVar3;
  func_0x000107c3191c(plVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_10b015b10:
    plVar9 = (long *)0x1;
  }
  else {
    plVar9 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b015b1c;
    plVar9 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar9);
    if (((ulong)plVar5 & 1) != 0) {
      fVar11 = ABS(*(float *)(plVar4 + 1) - *(float *)(param_3 + 1));
      fVar10 = ABS(*(float *)(plVar4 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
        bVar1 = fVar11 < fVar10;
      }
      if (bVar1) {
        fVar11 = ABS(*(float *)((long)plVar4 + 0xc) - *(float *)((long)param_3 + 0xc));
        fVar10 = ABS(*(float *)((long)plVar4 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
          bVar1 = fVar11 < fVar10;
        }
        if ((bVar1) &&
           ((lVar6 = plVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          plVar9 = (long *)plVar4[3];
          if (plVar9 != (long *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_10b015b1c;
          }
          goto LAB_10b015b10;
        }
      }
    }
    plVar9 = (long *)0x0;
  }
LAB_10b015b1c:
  _objc_release(param_3);
  return plVar9;
}



/* Entry: 10b015a34; end: 10b015b37; -[SCLensProcessingGeoWeatherData isEqual:] */

long FUN_10b015a34(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b015b10:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b015b1c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
        fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
          bVar1 = fVar6 < fVar5;
        }
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b015b1c;
          }
          goto LAB_10b015b10;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b015b1c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b015b38; end: 10b015b3f; -[SCLensProcessingGeoWeatherData celsius] */

undefined4 FUN_10b015b38(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b015b40; end: 10b015b47; -[SCLensProcessingGeoWeatherData fahrenheit] */

undefined4 FUN_10b015b40(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b015b48; end: 10b015b4f; -[SCLensProcessingGeoWeatherData locationName] */

undefined8 FUN_10b015b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b015b50; end: 10b015b57; -[SCLensProcessingGeoWeatherData hourlyForecasts] */

undefined8 FUN_10b015b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b015b58; end: 10b015b87; -[SCLensProcessingGeoWeatherData .cxx_destruct] */

void FUN_10b015b58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b015b88; end: 10b015cfb; -[SCLensProcessingAsset initWithAssetId:assetType:avatarId:encryptionKey:encryptionIv:urlString:checksum:] */

undefined1 *
FUN_10b015b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1127044c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b015cfc; end: 10b015d1f; -[SCLensProcessingAsset copyWithZone:] */

undefined8 FUN_10b015cfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b015d20; end: 10b015dc7; -[SCLensProcessingAsset hash] */

undefined8 * FUN_10b015d20(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b015eb8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b015ec4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b015ec4;
                }
                goto LAB_10b015eb8;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b015ec4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b015dc8; end: 10b015edf; -[SCLensProcessingAsset isEqual:] */

long FUN_10b015dc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b015eb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b015ec4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b015ec4;
                }
                goto LAB_10b015eb8;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b015ec4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b015ee0; end: 10b015ee7; -[SCLensProcessingAsset assetId] */

undefined8 FUN_10b015ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b015ee8; end: 10b015eef; -[SCLensProcessingAsset assetType] */

undefined8 FUN_10b015ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b015ef0; end: 10b015ef7; -[SCLensProcessingAsset avatarId] */

undefined8 FUN_10b015ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b015ef8; end: 10b015eff; -[SCLensProcessingAsset encryptionKey] */

undefined8 FUN_10b015ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b015f00; end: 10b015f07; -[SCLensProcessingAsset encryptionIv] */

undefined8 FUN_10b015f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b015f08; end: 10b015f0f; -[SCLensProcessingAsset urlString] */

undefined8 FUN_10b015f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b015f10; end: 10b015f17; -[SCLensProcessingAsset checksum] */

undefined8 FUN_10b015f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b015f18; end: 10b015f77; -[SCLensProcessingAsset .cxx_destruct] */

void FUN_10b015f18(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b015f78; end: 10b01600f; +[SCLensProcessingExternalMediaData imageDataWithImage:faceRect:] */

void FUN_10b015f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126db5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b016010; end: 10b01607b; +[SCLensProcessingExternalMediaData videoDataWithUrlPath:mute:] */

void FUN_10b016010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db5f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01607c; end: 10b01609f; -[SCLensProcessingExternalMediaData copyWithZone:] */

undefined8 FUN_10b01607c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0160a0; end: 10b016127; -[SCLensProcessingExternalMediaData hash] */

void FUN_10b0160a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1127044c8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b016128; end: 10b01616b; -[SCLensProcessingExternalMediaData internalInit] */

void FUN_10b016128(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127044c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01616c; end: 10b01624b; -[SCLensProcessingExternalMediaData isEqual:] */

long FUN_10b01616c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b016224:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b016230;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b016230;
          }
          goto LAB_10b016224;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b016230:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01624c; end: 10b0162d7; -[SCLensProcessingExternalMediaData matchVideoData:imageData:] */

void FUN_10b01624c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0162d8; end: 10b016313; -[SCLensProcessingExternalMediaData .cxx_destruct] */

void FUN_10b0162d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b016314; end: 10b01647f; -[SCLensProcessingUserData initWithUserId:userName:displayName:userScore:countryCode:birthDate:] */

undefined1 *
FUN_10b016314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127044d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b016480; end: 10b0164a3; -[SCLensProcessingUserData copyWithZone:] */

undefined8 FUN_10b016480(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0164a4; end: 10b016547; -[SCLensProcessingUserData hash] */

undefined8 * FUN_10b0164a4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b016628:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b016634;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_10b016634;
                }
                goto LAB_10b016628;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b016634:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b016548; end: 10b01664f; -[SCLensProcessingUserData isEqual:] */

long FUN_10b016548(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b016628:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b016634;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b016634;
                }
                goto LAB_10b016628;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b016634:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b016650; end: 10b016657; -[SCLensProcessingUserData userId] */

undefined8 FUN_10b016650(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b016658; end: 10b01665f; -[SCLensProcessingUserData userName] */

undefined8 FUN_10b016658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b016660; end: 10b016667; -[SCLensProcessingUserData displayName] */

undefined8 FUN_10b016660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b016668; end: 10b01666f; -[SCLensProcessingUserData userScore] */

undefined8 FUN_10b016668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b016670; end: 10b016677; -[SCLensProcessingUserData countryCode] */

undefined8 FUN_10b016670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b016678; end: 10b01667f; -[SCLensProcessingUserData birthDate] */

undefined8 FUN_10b016678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b016680; end: 10b0166df; -[SCLensProcessingUserData .cxx_destruct] */

void FUN_10b016680(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0166e0; end: 10b01670f; -[SCCameraFeatureLoggingServices setSnapCreationLogger:] */

void FUN_10b0166e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b016710; end: 10b01673f; -[SCCameraFeatureLoggingServices setCameraScreenshotLogger:] */

void FUN_10b016710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b016740; end: 10b01676f; -[SCCameraFeatureLoggingServices setCoreCameraLogger:] */

void FUN_10b016740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b016770; end: 10b01679f; -[SCCameraFeatureLoggingServices setCameraOpenLogger:] */

void FUN_10b016770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0167a0; end: 10b0167cf; -[SCCameraFeatureLoggingServices setPermissionStateLogger:] */

void FUN_10b0167a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0167d0; end: 10b0167ff; -[SCCameraFeatureLoggingServices setCameraShortcutLogger:] */

void FUN_10b0167d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b016800; end: 10b01682f; -[SCCameraFeatureLoggingServices setCameraCrashLogger:] */

void FUN_10b016800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b016830; end: 10b016837; -[SCCameraFeatureLoggingServices videoNoSoundLogger] */

undefined8 FUN_10b016830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b016838; end: 10b016867; -[SCCameraFeatureLoggingServices setVideoNoSoundLogger:] */

void FUN_10b016838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b016868; end: 10b016897; -[SCCameraFeatureLoggingServices setSnapCaptureLogger:] */

void FUN_10b016868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b016898; end: 10b01689f; -[SCCameraFeatureLoggingServices cameraUserActionLogger] */

undefined8 FUN_10b016898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0168a0; end: 10b0168cf; -[SCCameraFeatureLoggingServices setCameraUserActionLogger:] */

void FUN_10b0168a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0168d0; end: 10b0168ff; -[SCCameraFeatureLoggingServices setCameraFeaturePerformanceLoggerFactory:] */

void FUN_10b0168d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b016900; end: 10b01699b; -[SCCameraFeatureLoggingServices .cxx_destruct] */

void FUN_10b016900(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01699c; end: 10b016af7; -[SCCameraSnapCaptureLogParameters initWithCaptureSessionId:fileSizeInBytes:videoDurationMs:mediaSizeInPoints:pixelSizeInViewFinder:videoBitRate:audioBitRate:audioSampleRateInHz:codecType:invalidPresentationTimeCount:bufferedFrameCount:error:avSyncInfo:isRecordPermissionGranted:] */

undefined8 *
FUN_10b01699c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  _objc_retain(param_9);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_98 = PTR_PTR_1127044e0;
  puVar1 = &uStack_a0;
  uStack_a0 = param_7;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_10;
    puVar1[4] = param_11;
    puVar1[0xd] = param_1;
    puVar1[0xe] = param_2;
    puVar1[0xf] = param_3;
    puVar1[0x10] = param_4;
    puVar1[5] = param_5;
    puVar1[6] = param_6;
    puVar1[7] = param_12;
    puVar1[8] = param_13;
    puVar1[9] = param_14;
    puVar1[10] = param_15;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_18;
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 10b016af8; end: 10b016b1b; -[SCCameraSnapCaptureLogParameters copyWithZone:] */

undefined8 FUN_10b016af8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b016b1c; end: 10b016c83; -[SCCameraSnapCaptureLogParameters hash] */

undefined8 * FUN_10b016b1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_80 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_78 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uStack_a0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_98 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_70 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar4 = &uStack_a8;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar4,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b016e44:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b016e50;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((puVar4[3] == param_3[3] && (puVar4[4] == param_3[4])) && (puVar4[7] == param_3[7])) &&
         ((puVar4[8] == param_3[8] && (puVar4[9] == param_3[9])))))) &&
       ((puVar4[10] == param_3[10] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))))) {
      puVar8 = (undefined8 *)0x0;
      if ((((double)puVar4[0xd] != (double)param_3[0xd]) ||
          ((double)puVar4[0xe] != (double)param_3[0xe])) ||
         ((puVar8 = (undefined8 *)0x0, (double)puVar4[0xf] != (double)param_3[0xf] ||
          ((double)puVar4[0x10] != (double)param_3[0x10])))) goto LAB_10b016e50;
      dVar9 = ABS((double)puVar4[5] - (double)param_3[5]);
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16)) {
        dVar9 = ABS((double)puVar4[6] - (double)param_3[6]);
        if (((dVar9 < 2.2250738585072014e-308) ||
            (dVar9 < ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16)) &&
           (((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = puVar4[0xb], lVar6 == param_3[0xb] || (func_0x00010c071ae0(), (int)lVar6 != 0)
             ))))) {
          puVar8 = (undefined8 *)puVar4[0xc];
          if (puVar8 != (undefined8 *)param_3[0xc]) {
            func_0x00010c071ae0();
            goto LAB_10b016e50;
          }
          goto LAB_10b016e44;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b016e50:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b016c84; end: 10b016e6b; -[SCCameraSnapCaptureLogParameters isEqual:] */

long FUN_10b016c84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b016e44:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b016e50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
         ((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
       ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      if (((*(double *)(param_1 + 0x68) != *(double *)(param_3 + 0x68)) ||
          (*(double *)(param_1 + 0x70) != *(double *)(param_3 + 0x70))) ||
         ((lVar3 = 0, *(double *)(param_1 + 0x78) != *(double *)(param_3 + 0x78) ||
          (*(double *)(param_1 + 0x80) != *(double *)(param_3 + 0x80))))) goto LAB_10b016e50;
      dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        if (((dVar4 < 2.2250738585072014e-308) ||
            (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                     2.220446049250313e-16)) &&
           (((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
          lVar3 = *(long *)(param_1 + 0x60);
          if (lVar3 != *(long *)(param_3 + 0x60)) {
            func_0x00010c071ae0();
            goto LAB_10b016e50;
          }
          goto LAB_10b016e44;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b016e50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b016e6c; end: 10b016e73; -[SCCameraSnapCaptureLogParameters captureSessionId] */

undefined8 FUN_10b016e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b016e74; end: 10b016e7b; -[SCCameraSnapCaptureLogParameters fileSizeInBytes] */

undefined8 FUN_10b016e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b016e7c; end: 10b016e83; -[SCCameraSnapCaptureLogParameters videoDurationMs] */

undefined8 FUN_10b016e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b016e84; end: 10b016e8b; -[SCCameraSnapCaptureLogParameters mediaSizeInPoints] */

undefined1  [16] FUN_10b016e84(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



/* Entry: 10b016e8c; end: 10b016e93; -[SCCameraSnapCaptureLogParameters pixelSizeInViewFinder] */

undefined1  [16] FUN_10b016e8c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 10b016e94; end: 10b016e9b; -[SCCameraSnapCaptureLogParameters videoBitRate] */

undefined8 FUN_10b016e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b016e9c; end: 10b016ea3; -[SCCameraSnapCaptureLogParameters audioBitRate] */

undefined8 FUN_10b016e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b016ea4; end: 10b016eab; -[SCCameraSnapCaptureLogParameters audioSampleRateInHz] */

undefined8 FUN_10b016ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b016eac; end: 10b016eb3; -[SCCameraSnapCaptureLogParameters codecType] */

undefined8 FUN_10b016eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b016eb4; end: 10b016ebb; -[SCCameraSnapCaptureLogParameters invalidPresentationTimeCount] */

undefined8 FUN_10b016eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b016ebc; end: 10b016ec3; -[SCCameraSnapCaptureLogParameters bufferedFrameCount] */

undefined8 FUN_10b016ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b016ec4; end: 10b016ecb; -[SCCameraSnapCaptureLogParameters error] */

undefined8 FUN_10b016ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b016ecc; end: 10b016ed3; -[SCCameraSnapCaptureLogParameters avSyncInfo] */

undefined8 FUN_10b016ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b016ed4; end: 10b016edb; -[SCCameraSnapCaptureLogParameters isRecordPermissionGranted] */

undefined1 FUN_10b016ed4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b016edc; end: 10b016f17; -[SCCameraSnapCaptureLogParameters .cxx_destruct] */

void FUN_10b016edc(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b016f18; end: 10b016f9f; -[SCCameraCreationDelayEventInfo initWithTimeMs:mediaType:] */

undefined1 *
FUN_10b016f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127044e8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b016fa0; end: 10b016fc3; -[SCCameraCreationDelayEventInfo copyWithZone:] */

undefined8 FUN_10b016fa0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b016fc4; end: 10b017043; -[SCCameraCreationDelayEventInfo hash] */

ulong * FUN_10b016fc4(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x00010bfde980();
  puVar3 = &uStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0170e0:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b0170ec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
      dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (ulong *)puVar3[2];
        if (puVar6 != (ulong *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b0170ec;
        }
        goto LAB_10b0170e0;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10b0170ec:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b017044; end: 10b017107; -[SCCameraCreationDelayEventInfo isEqual:] */

long FUN_10b017044(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0170e0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0170ec;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b0170ec;
        }
        goto LAB_10b0170e0;
      }
    }
    lVar4 = 0;
  }
LAB_10b0170ec:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b017108; end: 10b01710f; -[SCCameraCreationDelayEventInfo timeMs] */

undefined8 FUN_10b017108(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b017110; end: 10b017117; -[SCCameraCreationDelayEventInfo mediaType] */

undefined8 FUN_10b017110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b017118; end: 10b017123; -[SCCameraCreationDelayEventInfo .cxx_destruct] */

void FUN_10b017118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b017124; end: 10b0171bf; -[SCCameraShortcutActionConfiguration initWithCameraShortcutFeatureOptions:devicePosition:lenses:musicTrackId:] */

undefined1 *
FUN_10b017124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127044f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0171c0; end: 10b0171e3; -[SCCameraShortcutActionConfiguration copyWithZone:] */

undefined8 FUN_10b0171c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0171e4; end: 10b01725b; -[SCCameraShortcutActionConfiguration hash] */

undefined8 * FUN_10b0171e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b017300;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b017300;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b017300;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b017300:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b01725c; end: 10b01731b; -[SCCameraShortcutActionConfiguration isEqual:] */

long FUN_10b01725c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b017300;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_10b017300;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b017300;
    }
  }
  lVar3 = 1;
LAB_10b017300:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01731c; end: 10b017323; -[SCCameraShortcutActionConfiguration cameraShortcutFeatureOptions] */

undefined8 FUN_10b01731c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b017324; end: 10b01732b; -[SCCameraShortcutActionConfiguration devicePosition] */

undefined8 FUN_10b017324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01732c; end: 10b017333; -[SCCameraShortcutActionConfiguration lenses] */

undefined8 FUN_10b01732c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b017334; end: 10b01733b; -[SCCameraShortcutActionConfiguration musicTrackId] */

undefined8 FUN_10b017334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01733c; end: 10b017347; -[SCCameraShortcutActionConfiguration .cxx_destruct] */

void FUN_10b01733c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b017348; end: 10b01747b; -[SCCameraShortcutContextAction initWithShortcutId:storySnapId:trackId:trackStartOffsetSeconds:lensIds:cameraModeParameters:snapSource:] */

undefined1 *
FUN_10b017348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1127044f8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01747c; end: 10b01749f; -[SCCameraShortcutContextAction copyWithZone:] */

undefined8 FUN_10b01747c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0174a0; end: 10b01755f; -[SCCameraShortcutContextAction hash] */

undefined8 * FUN_10b0174a0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar7;
  if (-1 < lVar7) {
    lStack_30 = lVar7;
  }
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b017664:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b017670;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38))))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar7 = *(long *)((long)puVar4 + 8), lVar7 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
          ((lVar7 = *(long *)((long)puVar4 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
         ((lVar7 = *(long *)((long)puVar4 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x30);
        if (puVar8 != *(undefined1 **)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b017670;
        }
        goto LAB_10b017664;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b017670:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b017560; end: 10b01768b; -[SCCameraShortcutContextAction isEqual:] */

long FUN_10b017560(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b017664:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b017670;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b017670;
        }
        goto LAB_10b017664;
      }
    }
    lVar4 = 0;
  }
LAB_10b017670:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b01768c; end: 10b017693; -[SCCameraShortcutContextAction shortcutId] */

undefined8 FUN_10b01768c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b017694; end: 10b01769b; -[SCCameraShortcutContextAction storySnapId] */

undefined8 FUN_10b017694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01769c; end: 10b0176a3; -[SCCameraShortcutContextAction trackId] */

undefined8 FUN_10b01769c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0176a4; end: 10b0176ab; -[SCCameraShortcutContextAction trackStartOffsetSeconds] */

undefined8 FUN_10b0176a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0176ac; end: 10b0176b3; -[SCCameraShortcutContextAction lensIds] */

undefined8 FUN_10b0176ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0176b4; end: 10b0176bb; -[SCCameraShortcutContextAction cameraModeParameters] */

undefined8 FUN_10b0176b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


