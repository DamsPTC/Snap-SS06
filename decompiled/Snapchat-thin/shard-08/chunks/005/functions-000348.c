/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061f9dfc; end: 1061f9eb7; -[SCLensLogger _getLensAttachmentTypeFromAttachmentString:] */

undefined8 FUN_1061f9dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45438;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e45438,param_2,param_3);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 1;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45458;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e45458,param_2,param_3);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 10;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e45478;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e45478,param_2,param_3);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 4;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e35d58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e35d58,param_2,param_3);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xd;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e44958;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e44958,param_2,param_3);
          uVar2 = 0x17;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1061f9eb8; end: 1061f9f1b; -[SCLensLogger activeStateCameraSourceValue] */

void FUN_1061f9eb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010bfe9b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bef1020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f9f1c; end: 1061f9fc7; -[SCLensLogger _overrideLensSourceIfNeededForLens:] */

void FUN_1061f9f1c(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = param_1;
    func_0x00010be3de20();
    if ((int)puVar2 == 0) {
      lVar1 = param_3;
      func_0x00010c0fb900();
      puVar2 = PTR_PTR_1126bd498;
      if (lVar1 == 0) {
        puVar2 = (undefined *)0xffffffffffffffff;
      }
      else {
        lVar1 = param_3;
        func_0x00010c0fb900(param_3);
        func_0x00010bf1cec0(puVar2,param_2,lVar1);
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010bdcf0a0();
    }
    _os_unfair_lock_lock(param_1 + 0x148);
    puVar3 = *(undefined **)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    _os_unfair_lock_unlock(param_1 + 0x148);
    if (puVar2 != puVar3) {
      func_0x00010be64be0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f9fc8; end: 1061fa03b; -[SCLensLogger _isARBarMiniCameraActive] */

undefined8 FUN_1061f9fc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf60040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c160100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c077d60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1061fa03c; end: 1061fa0bb; -[SCLensLogger _arBarLensSourceOverride] */

long FUN_1061fa03c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf60040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c160100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c247d20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010be45740(param_1,param_2,lVar3);
  if (lVar3 != 0x2c) {
    lVar3 = 0x3a;
  }
  lVar1 = 0x39;
  if ((int)param_1 == 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 1061fa0bc; end: 1061fa0ff; -[SCLensLogger trackNavigationToCameraFromPage:] */

void FUN_1061fa0bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8bd8;
  func_0x00010c0f23c0(PTR_PTR_1126c8bd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6ed20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061fa100; end: 1061fa143; -[SCLensLogger trackNavigationToCameraFromBackground] */

void FUN_1061fa100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8bd8;
  func_0x00010bf13c20(PTR_PTR_1126c8bd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6ed20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061fa144; end: 1061fa187; -[SCLensLogger trackNavigationToCameraFromSnapCaptureWithSnapSent:] */

void FUN_1061fa144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8bd8;
  func_0x00010c23f720(PTR_PTR_1126c8bd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6ed20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061fa188; end: 1061fa25b; -[SCLensLogger _fulfillLensSwipeInfoWitAfterRecording:] */

void FUN_1061fa188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5f200(param_1);
  func_0x00010c243400(param_1);
  uVar2 = param_1;
  func_0x00010bdfda20(param_1,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfda40(param_1,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c8c18;
  _objc_alloc(PTR_PTR_1126c8c18);
  func_0x00010c022840();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061fa25c; end: 1061fa4b7; -[SCLensLogger _didExitLens:afterRecording:] */

void FUN_1061fa25c(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_4);
  puVar3 = param_2;
  func_0x00010c250260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_2;
  func_0x00010c251980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2767a0(param_2);
  dVar7 = param_1;
  func_0x00010c2518c0(param_2);
  if (param_5 == 0) {
    puVar5 = PTR_PTR_1126c8c00;
    dVar8 = dVar7;
    _objc_opt_new();
    dVar11 = 0.0;
  }
  else {
    dVar8 = dVar7;
    _CACurrentMediaTime();
    dVar11 = dVar8;
    func_0x00010c0c6b20(puVar3);
    dVar8 = (double)(long)((dVar8 - dVar11) * 10.0);
    dVar11 = dVar8 / 10.0;
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  func_0x00010c0c6b20(puVar5);
  dVar9 = dVar8;
  func_0x00010c0c6b20(puVar4);
  dVar10 = dVar9;
  FUN_1061f83bc(&PTR____CFConstantStringClassReference_110e45498);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  FUN_1061f83bc(&PTR____CFConstantStringClassReference_110e454b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  FUN_1061f83bc(&PTR____CFConstantStringClassReference_110e454f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  FUN_1061f83bc(&PTR____CFConstantStringClassReference_110e45518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c2762e0(PTR_PTR_1126ae4f0);
  if ((puVar4 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
    lVar1 = 8;
    if (puVar5 != (undefined *)0x0 || puVar4 != (undefined *)0x0) {
      lVar1 = 0;
    }
    param_1 = *(double *)(&UNK_10ddda220 + lVar1);
    if (puVar4 != (undefined *)0x0) {
      param_1 = -102.0;
    }
  }
  else {
    param_1 = (dVar8 - dVar9) - param_1;
    if (param_1 < 0.0) {
      param_1 = -100.0;
      dVar8 = -100.0;
      goto LAB_1061fa430;
    }
  }
  func_0x00010beb4280(param_2,param_3,param_4);
  dVar8 = dVar11 + param_1;
  if ((int)param_2 == 0) {
    dVar8 = param_1;
  }
LAB_1061fa430:
  bVar2 = true;
  if ((dVar10 != -1.0) && (bVar2 = false, !NAN(dVar7))) {
    bVar2 = dVar7 == -1.0;
  }
  dVar10 = dVar10 - dVar7;
  if (bVar2) {
    dVar10 = -1.0;
  }
  puVar6 = PTR_PTR_1126c8c20;
  _objc_alloc(PTR_PTR_1126c8c20);
  func_0x00010c062160(param_1,dVar11,dVar8,dVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1061fa4b8; end: 1061fa96b; -[SCLensLogger _didExitLens:lensTimeInfo:] */

void FUN_1061fa4b8(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c249ea0(param_2);
  dVar7 = param_1;
  func_0x00010bfb1180(param_2);
  dVar8 = dVar7;
  func_0x00010bfb1ee0(param_2);
  uVar1 = param_5;
  dVar12 = dVar8;
  func_0x00010c251980(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = param_4;
  func_0x00010c083a60();
  if ((int)uVar2 == 0) {
    uVar2 = param_4;
    func_0x00010c070fa0();
    dVar13 = 0.0;
    if (((uVar2 & 1) != 0) || (uVar2 = param_4, func_0x00010c072d20(), (int)uVar2 == 0)) {
      dVar14 = 0.0;
      dVar10 = 0.0;
      dVar11 = 0.0;
      dVar12 = 0.0;
      goto LAB_1061fa86c;
    }
    lVar6 = param_2;
    func_0x00010c096640(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1061f83bc(&PTR____CFConstantStringClassReference_110e45538);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    lVar6 = param_2;
    func_0x00010bfb6720(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bf5e8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010bfb66e0(lVar3);
    dVar11 = dVar12;
    func_0x00010bfb6ee0(lVar3);
    dVar10 = dVar11;
    func_0x00010c24d780(lVar3);
    lVar6 = param_2;
    dVar9 = dVar10;
    func_0x00010c096640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf08420(lVar6,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar6);
    lVar6 = lVar4;
    func_0x00010c07c360();
    if ((int)lVar6 != 0) {
      lVar6 = param_2;
      func_0x00010c096640(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c094540(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139480(lVar6,param_3,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar6);
    }
    func_0x00010bf07860(lVar4);
    dVar14 = 0.0;
    if (0.0 < dVar9) {
      func_0x00010bf07860(lVar4);
      dVar13 = dVar9;
      func_0x00010bf07b20(lVar4);
      dVar14 = dVar13;
      func_0x00010bf07860(lVar4);
      if (param_1 == 0.0) {
        param_1 = dVar14;
        func_0x00010c0c6b20(uVar1);
      }
      dVar13 = dVar9 - dVar13;
      dVar14 = dVar14 - param_1;
    }
    lVar6 = lVar3;
    func_0x00010bf07d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(lVar6,param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  else {
    lVar6 = param_2;
    func_0x00010c096640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bf08420(lVar6,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar6);
    func_0x00010c07c360(lVar3);
    lVar6 = lVar3;
    func_0x00010c07c360();
    if ((int)lVar6 != 0) {
      lVar6 = param_2;
      func_0x00010c096640(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c094540(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139480(lVar6,param_3,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar6);
    }
    func_0x00010bf07860(lVar3);
    dVar10 = 0.0;
    if (dVar12 <= 0.0) {
      dVar13 = 0.0;
      dVar14 = 0.0;
    }
    else {
      func_0x00010bf07860(lVar3);
      dVar13 = dVar12;
      func_0x00010bf07b20(lVar3);
      dVar14 = dVar13;
      func_0x00010bf07860(lVar3);
      if (param_1 == 0.0) {
        param_1 = dVar14;
        func_0x00010c0c6b20(uVar1);
      }
      dVar13 = dVar12 - dVar13;
      dVar14 = dVar14 - param_1;
    }
    dVar11 = 0.0;
    dVar12 = 0.0;
  }
  _objc_release(lVar3);
LAB_1061fa86c:
  lVar6 = param_2;
  func_0x00010c096420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x00010c096420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf522c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf56100();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c091f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_2);
  }
  puVar5 = PTR_PTR_1126c8c28;
  _objc_alloc(PTR_PTR_1126c8c28);
  func_0x00010c005e60(dVar12,dVar11,dVar10,dVar13,dVar14,dVar7,dVar8);
  _objc_release(lVar6);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1061fa96c; end: 1061faed7; -[SCLensLogger logLensSwipeEvent:afterRecording:] */

void FUN_1061fa96c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  double dVar14;
  
  if ((int)param_5 != 0) {
    lVar1 = param_2;
    func_0x00010c250260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126c8c00;
      _objc_opt_new(PTR_PTR_1126c8c00);
      func_0x00010c209840(param_2,param_3,puVar2);
      _objc_release(puVar2);
    }
  }
  lVar1 = param_2;
  func_0x00010be19bc0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c094780(lVar1);
  lVar5 = lVar1;
  func_0x00010c115980();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c26f2a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8c30;
  _objc_opt_new(PTR_PTR_1126c8c30);
  _objc_retain();
  lVar7 = param_2;
  func_0x00010c096b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bfc81a0(param_2,param_3,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_2;
  func_0x00010c095aa0(param_2);
  lVar9 = param_2;
  func_0x00010c243400(param_2);
  lVar10 = param_2;
  func_0x00010be15d60(param_2,param_3,puVar2,param_4,lVar3,lVar7,lVar4,lVar9,
                      *(undefined8 *)(param_2 + 0x40),lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf08320(lVar5);
  if (0.0 < param_1) {
    func_0x00010bf08320(lVar5);
    func_0x00010c169c00(puVar2);
  }
  func_0x00010c096620(lVar5);
  if (0.0 < param_1) {
    func_0x00010c096620(lVar5);
    func_0x00010c1bc940(puVar2);
  }
  lVar4 = lVar5;
  func_0x00010bf523e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = lVar5;
    func_0x00010bf523e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1841e0(puVar2,param_3,lVar4);
    _objc_release(lVar4);
  }
  lVar4 = lVar5;
  func_0x00010c07c360();
  if ((int)lVar4 != 0) {
    func_0x00010bf134a0(lVar5);
    if (0.0 < param_1) {
      func_0x00010bf134a0(lVar5);
      func_0x00010c1bbb00(puVar2);
    }
    func_0x00010c115aa0(lVar5);
    if (0.0 < param_1) {
      func_0x00010c115aa0(lVar5);
      func_0x00010c1bbb20(puVar2);
    }
    func_0x00010bf13440(lVar5);
    if (0.0 < param_1) {
      func_0x00010bf13440(lVar5);
      func_0x00010c16dea0(puVar2);
    }
  }
  lVar4 = lVar5;
  func_0x00010c07c360(lVar5);
  func_0x00010c1b3da0(puVar2,param_3,lVar4);
  puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  lVar4 = param_2;
  func_0x00010c27bf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar11,param_3,lVar4,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  func_0x00010c21a2c0(lVar10,param_3,puVar12);
  _objc_release(puVar12);
  lVar4 = lVar3;
  func_0x00010c0915a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb200(lVar10,param_3,lVar4);
  _objc_release(lVar4);
  func_0x00010bfb1180(lVar5);
  func_0x00010c19cf20(lVar10,param_3,(long)param_1);
  func_0x00010bfb1ee0(lVar5);
  func_0x00010c19d780(lVar10,param_3,(long)param_1);
  _CACurrentMediaTime();
  dVar14 = param_1;
  func_0x00010bf2b0a0(param_2);
  dVar14 = (double)(long)((param_1 - dVar14) * 10.0) / 10.0;
  func_0x00010c215020(lVar10);
  func_0x00010c123f60(lVar6);
  func_0x00010c205880(lVar10);
  func_0x00010bfbe100(lVar6);
  func_0x00010c1a1fc0(puVar2);
  lVar4 = param_2;
  func_0x00010bfbe0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010c1a1fa0(puVar2,param_3,lVar4);
  }
  func_0x00010c29e520(lVar6);
  dVar14 = (double)(long)(dVar14 * 10.0) / 10.0;
  func_0x00010c222d20(lVar10);
  func_0x00010bf53be0(lVar6);
  if (dVar14 != -1.0) {
    func_0x00010bf53be0(lVar6);
    func_0x00010c1bd260(lVar10,param_3,(long)dVar14);
  }
  func_0x00010bef80a0(lVar10);
  lVar7 = param_2;
  func_0x00010be4b260(param_2,param_3,lVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c094540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be597c0(param_2,param_3,puVar2,lVar7,lVar9,lVar1);
  _objc_release(lVar9);
  func_0x00010be56f40(param_2,param_3,lVar10);
  puVar12 = PTR_PTR_1126c8bf8;
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  lVar9 = lVar3;
  func_0x00010c070fa0(lVar3);
  func_0x00010bf7c460(puVar12,param_3,lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar13,param_3,puVar12);
  _objc_release(puVar12);
  func_0x00010c091fc0();
  lVar9 = param_2;
  func_0x00010c281140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32ae0();
  _objc_release(lVar9);
  func_0x00010c281140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179c80();
  _objc_release(param_2);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(puVar11);
  _objc_release(lVar8);
  _objc_release(puVar2);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061faed8; end: 1061fafa3; -[SCLensLogger _logSwipeEvent:interaction:lensId:swipeInfo:] */

void FUN_1061faed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_6;
  func_0x00010c115980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07c360();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bdc68a0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    func_0x00010be82600();
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061fafa4; end: 1061fb05b; -[SCLensLogger _processSwipeEvent:interaction:swipeInfo:] */

void FUN_1061fafa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0b2e60(uVar2,param_2,param_3);
  lVar1 = param_1;
  func_0x00010c281140(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2810a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9460(lVar1,param_2,param_4,uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061fb05c; end: 1061fb23f; -[SCLensLogger _updateLensPlusParameters:lens:] */

void FUN_1061fb05c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0765e0();
  func_0x00010c1b22e0(param_3,param_2,uVar2);
  uVar2 = param_3;
  _objc_opt_class(param_3);
  uVar6 = uVar1;
  func_0x00010c094e00(uVar1,param_2,param_4,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc180(param_3,param_2,uVar6);
  _objc_release(uVar6);
  lVar3 = *(long *)(param_1 + 0x180);
  func_0x00010bfe9b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bfe9ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c1b22e0(param_3,param_2,1);
    func_0x00010c1bc180(param_3,param_2,lVar3);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfc1f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c0720c0(uVar6,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if ((int)uVar8 != 0) {
    uVar6 = uVar2;
    func_0x00010bfceb20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f820(param_3,param_2,uVar6);
    _objc_release(uVar6);
  }
  _objc_release(uVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061fb240; end: 1061fb417; -[SCLensLogger _addDelayedSwipeEvent:interaction:lensId:swipeInfo:] */

void FUN_1061fb240(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = param_3;
  _objc_retain(param_3);
  uStack_140 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0xe8));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x128);
  func_0x00010bf51e00();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar10;
        func_0x00010c0720c0();
        _objc_release(uVar10);
        if ((int)uVar7 != 0) {
          func_0x00010be52340(param_1);
          func_0x00010c12d360(*(undefined8 *)(param_1 + 0x128));
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c8c38;
  _objc_alloc();
  lVar2 = lStack_138;
  uVar7 = uStack_140;
  func_0x00010c024440();
  puVar6 = puVar3;
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x128));
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar7);
  lVar1 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_160 = uVar7;
  lStack_158 = lVar2;
  pcStack_148 = FUN_1061fb418;
  puStack_180 = puVar3;
  lStack_178 = param_1;
  uStack_170 = param_6;
  uStack_168 = param_5;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(lVar1 + 0x88);
  *(undefined **)(lVar1 + 0x88) = puVar3;
  _objc_release(uVar7);
  if (puVar6 != (undefined *)0x0) {
    _objc_initWeak(auStack_188,lVar1);
    puVar3 = puVar6;
    func_0x00010bfb1380(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_190,auStack_188);
    puVar5 = puVar4;
    func_0x00010c25ff60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
  }
  _objc_release(puVar6);
  return;
}



/* Entry: 1061fb418; end: 1061fb55b; -[SCLensLogger observeFpsTracker:] */

void FUN_1061fb418(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar5);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar2 = param_3;
    func_0x00010bfb1380(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1061fb55c; end: 1061fb5ab;  */

void FUN_1061fb55c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be29000(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061fb5ac; end: 1061fb84f; -[SCLensLogger _handleEvent:] */

void FUN_1061fb5ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar7;
  undefined8 unaff_x23;
  long lVar8;
  long unaff_x24;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0xe8));
  lVar1 = *(long *)(param_1 + 0x128);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    dVar12 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    unaff_x21 = *(long *)(param_1 + 0x128);
    _objc_retain(unaff_x21);
    lVar1 = unaff_x21;
    func_0x00010bf52a60(unaff_x21,param_2,&uStack_140,auStack_100,0x10);
    if (lVar1 != 0) {
      lVar9 = *plStack_130;
      do {
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x23 = *(undefined8 *)(lStack_138 + lVar10 * 8);
          unaff_x24 = param_3;
          func_0x00010bf07d80();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = unaff_x23;
          func_0x00010c094540(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = unaff_x24;
          func_0x00010bf4b900(unaff_x24,param_2,uVar2);
          _objc_release(uVar2);
          _objc_release(unaff_x24);
          if ((int)lVar7 != 0) {
            lVar7 = param_1;
            func_0x00010c096640();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = unaff_x23;
            func_0x00010c094540(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = lVar7;
            func_0x00010bf08420(lVar7,param_2,uVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            _objc_release(lVar7);
            if ((unaff_x24 != 0) && (lVar7 = unaff_x24, func_0x00010c07c360(), (int)lVar7 != 0)) {
              func_0x00010bf07860(unaff_x24);
              dVar11 = dVar12;
              func_0x00010bf07b20(unaff_x24);
              uVar2 = unaff_x23;
              func_0x00010bf99b20(unaff_x23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c169c00(dVar12 - dVar11);
              _objc_release(uVar2);
              dVar12 = (dVar12 - dVar11) * 1000.0;
              uVar2 = unaff_x23;
              func_0x00010c068380(unaff_x23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ba9e0();
              _objc_release(uVar2);
            }
            uVar2 = unaff_x23;
            func_0x00010bf99b20(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b3da0();
            _objc_release(uVar2);
            func_0x00010c068380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b3da0();
            _objc_release(unaff_x23);
            _objc_release(unaff_x24);
          }
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = unaff_x21;
        func_0x00010bf52a60(unaff_x21,param_2,&uStack_140,auStack_100,0x10);
        unaff_x22 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x21);
    func_0x00010be8f660(param_1);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  pcStack_148 = FUN_1061fb850;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf0ae40(*(undefined8 *)(lVar1 + 0xe8));
  lVar10 = *(long *)(lVar1 + 0x128);
  func_0x00010bf51e00();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain();
  lVar9 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_250,auStack_208,0x10);
  if (lVar9 != 0) {
    lVar7 = *plStack_240;
    do {
      lVar8 = 0;
      do {
        if (*plStack_240 != lVar7) {
          _objc_enumerationMutation(lVar10);
        }
        func_0x00010be52340(lVar1,param_2,*(undefined8 *)(lStack_248 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar9 != lVar8);
      lVar9 = lVar10;
      puVar6 = &uStack_250;
      func_0x00010bf52a60(lVar10,param_2,&uStack_250,auStack_208,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(lVar10);
  func_0x00010c12adc0(*(undefined8 *)(lVar1 + 0x128));
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar3 = (undefined1 *)puVar6;
  func_0x00010bf99b20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c068380(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar6;
  func_0x00010bfed8e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82600(lVar10,param_2,puVar3,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c096640(lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)puVar6;
  func_0x00010c094540(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c139480(lVar10,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 1061fb850; end: 1061fb963; -[SCLensLogger _reportDelayedSwipes] */

void FUN_1061fb850(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0xe8));
  lVar1 = *(long *)(param_1 + 0x128);
  func_0x00010bf51e00();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010be52340(param_1,param_2,*(undefined8 *)(lStack_108 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar6 = &uStack_110;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x128));
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar3 = (undefined1 *)puVar6;
  func_0x00010bf99b20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c068380(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar6;
  func_0x00010bfed8e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82600(lVar1,param_2,puVar3,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c096640(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)puVar6;
  func_0x00010c094540(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c139480(lVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061fb964; end: 1061fba4b; -[SCLensLogger _logDelayedSwipe:] */

void FUN_1061fb964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf99b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c068380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfed8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82600(param_1,param_2,uVar1,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c096640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c139480(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061fba4c; end: 1061fbb17; -[SCLensLogger updateSwipeFunnel:forFunnelId:] */

void FUN_1061fba4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0720c0(param_4,param_2,lVar2);
    _objc_release(lVar2);
    if ((int)uVar3 != 0) {
      uVar3 = param_3;
      func_0x00010bf51e00(param_3);
      func_0x00010c210620(param_1,param_2,uVar3);
      _objc_release(uVar3);
      func_0x00010c210640(param_1,param_2,param_4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061fbb18; end: 1061fbba7; -[SCLensLogger hasSwipeFunnelForFunnelId:] */

long FUN_1061fbb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c264a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c264aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0720c0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1061fbba8; end: 1061fbd27; -[SCLensLogger _setCurrentSwipeFunnelForEvent:forLensId:] */

void FUN_1061fbba8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010c264a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  func_0x00010c264aa0();
  _objc_retainAutoreleasedReturnValue();
  if (((lVar2 != 0) && (param_2 != 0)) &&
     (lVar1 = param_2, func_0x00010c0720c0(param_2,param_3,param_5), (int)lVar1 != 0)) {
    lVar1 = lVar2;
    func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110e45558);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126afec0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      _CACurrentMediaTime();
      func_0x00010c155420(puVar4);
      func_0x00010c0df760(puVar3,param_3,(int)param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar2,param_3,puVar3,&PTR____CFConstantStringClassReference_110e45558);
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,lVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    func_0x00010c1bcd40(param_4,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061fbd28; end: 1061fbd5b; -[SCLensLogger _resetSwipeFunnel] */

void FUN_1061fbd28(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c210620(param_1,param_2,0);
  func_0x00010c210640(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportDelayedSwipes_112581738);
  return;
}



/* Entry: 1061fbd5c; end: 1061fbdef; -[SCLensLogger _updateSwipeIdAndNotifyWithLensId:] */

void FUN_1061fbd5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  *(long *)(param_1 + 0x110) = lVar1;
  _objc_release(uVar2);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x138);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x118),param_2,*(undefined8 *)(param_1 + 0x110),
                        param_3);
    _os_unfair_lock_unlock(param_1 + 0x138);
  }
  func_0x00010c187c60(*(undefined8 *)(param_1 + 0x70),param_2,*(undefined8 *)(param_1 + 0x110));
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x140),param_2,*(undefined8 *)(param_1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061fbdf0; end: 1061fc3b3; -[SCLensLogger _lensInteractionWithSwipeInfo:lensSourceType:] */

void FUN_1061fbdf0(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c251980();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf95b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = param_4;
  func_0x00010c115980(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c8c40;
  _objc_opt_new();
  puVar2 = puVar6;
  func_0x00010c2813a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bcc0(puVar7,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c094780(param_4);
  func_0x00010c1ac060(puVar7,param_3,puVar2);
  puVar2 = puVar6;
  func_0x00010c094540(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bbe0(puVar7,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar8 = param_4;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e520();
  dVar14 = (double)(long)(param_1 * 30.0) / 30.0;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210880(puVar7,param_3,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar8);
  uVar10 = *(undefined8 *)(param_2 + 0xd0);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  puVar2 = puVar7;
  dVar15 = dVar14;
  func_0x00010c06c960(puVar7);
  uVar1 = SUB84(puVar2,0);
  if (0.0 < SUB84(dVar14,0)) {
    uVar1 = 1;
  }
  func_0x00010c1af440(puVar7,param_3,uVar1);
  _objc_release(uVar10);
  lVar11 = param_2;
  func_0x00010bdf67e0(param_2);
  func_0x00010c176040(puVar7,param_3,lVar11);
  lVar11 = param_2;
  func_0x00010bfbb180(param_2);
  func_0x00010c2271a0(puVar7,param_3,(uint)lVar11 ^ 1);
  lVar11 = param_2;
  func_0x00010bfbb180(param_2);
  func_0x00010c226c80(puVar7,param_3,lVar11);
  puVar2 = puVar6;
  func_0x00010bf93ae0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195a40(puVar7,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010bfb1180(puVar3);
  func_0x00010c19cf40(puVar7);
  func_0x00010bfb1ee0(puVar3);
  func_0x00010c19d7a0(puVar7);
  uVar12 = *(undefined8 *)(param_2 + 0xb0);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c072d40();
  func_0x00010c1b22a0(puVar7,param_3,uVar10);
  _objc_release(uVar12);
  puVar2 = puVar6;
  func_0x00010c07de20(puVar6);
  func_0x00010c1b4580(puVar7,param_3,puVar2);
  func_0x00010bf13440(puVar3);
  dVar15 = (double)(ulong)(uint)(float)dVar15;
  func_0x00010c16dea0(puVar7);
  func_0x00010bf134a0(puVar3);
  func_0x00010c19f440(puVar7,param_3,(long)dVar15);
  func_0x00010bf08320(puVar3);
  if (0.0 < dVar15) {
    func_0x00010bf08320(puVar3);
    func_0x00010c1ba9e0(puVar7,param_3,(long)(dVar15 * 1000.0));
  }
  puVar2 = puVar3;
  func_0x00010c07c360(puVar3);
  func_0x00010c1b3da0(puVar7,param_3,puVar2);
  puVar2 = puVar6;
  func_0x00010c24ab20(puVar6);
  func_0x00010c1bcce0(puVar7,param_3,puVar2);
  puVar2 = puVar6;
  func_0x00010c0d53e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(puVar7,param_3,puVar2);
  _objc_release(puVar2);
  lVar11 = param_2;
  func_0x00010bebebc0(param_2,param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010c089660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c87c0(puVar7,param_3,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar11);
  puVar2 = puVar6;
  func_0x00010bfca960();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf0d600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar6;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined *)0x0) goto LAB_1061fc2a8;
    lVar11 = param_2;
    func_0x00010c2a8920(param_2);
    func_0x00010c225ca0(puVar7,param_3,lVar11);
    puVar8 = puVar6;
    func_0x00010c281520(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf0d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b360(puVar7,param_3,puVar9);
    _objc_release(puVar9);
  }
  else {
    lVar11 = param_2;
    func_0x00010c2a8920(param_2);
    func_0x00010c225ca0(puVar7,param_3,lVar11);
    puVar8 = puVar2;
    func_0x00010bf0d600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b360(puVar7,param_3,puVar8);
  }
  _objc_release(puVar8);
LAB_1061fc2a8:
  func_0x00010c094780();
  func_0x00010be63e20(param_2,param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar11 = param_2;
    func_0x00010c15ed20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd800(puVar7,param_3,lVar11);
    _objc_release(lVar11);
    lVar11 = param_2;
    func_0x00010bf93980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd7e0(puVar7,param_3,lVar11);
    _objc_release(lVar11);
  }
  func_0x00010c1ae200(puVar7,param_3,puVar4);
  func_0x00010c1ae0c0(puVar7,param_3,puVar5);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x00010bebebc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010c0da7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1061fc3b4; end: 1061fc457; -[SCLensLogger _noFillForLens:carouselIndex:] */

void FUN_1061fc3b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bebebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0da7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061fc458; end: 1061fc487;  */

bool FUN_1061fc458(long param_1,long param_2)

{
  func_0x00010bf32840(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 1061fc488; end: 1061fc607; -[SCLensLogger _sponsoredScheduleNamespaceDataForLens:] */

void FUN_1061fc488(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126c8c48;
    func_0x00010c0d5460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0d53e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4b900(puVar2,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(puVar2);
    _objc_release(lVar1);
    if (((ulong)puVar3 & 1) != 0) {
      lVar5 = 0;
      goto LAB_1061fc5e4;
    }
    lVar4 = *(long *)(param_1 + 0xf0);
    func_0x00010bf273c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0d53e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0(lVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar5 == 0) {
      func_0x00010c07f200(param_3);
    }
    lVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_1061f83bc(&PTR____CFConstantStringClassReference_110e45578);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
LAB_1061fc5e4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1061fc608; end: 1061fc63f; -[SCLensLogger resetPresentedLensAfterRecording:] */

void FUN_1061fc608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c095fc0(param_1,param_2,0,0,0,0,0,param_3,0);
  return;
}



/* Entry: 1061fc640; end: 1061fc6af; -[SCLensLogger resetCurrentViewingLensIfPossibleAfterRecording:] */

void FUN_1061fc640(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c139340(param_1);
    func_0x00010c188080(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c186fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentApplyContext__11263f608,0);
    return;
  }
  return;
}



/* Entry: 1061fc6b0; end: 1061fc747; -[SCLensLogger recordingStarted] */

void FUN_1061fc6b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  puVar1 = PTR_PTR_1126c8c00;
  _objc_opt_new(PTR_PTR_1126c8c00);
  func_0x00010c209840(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bfbb180();
  if ((int)lVar2 == 0) {
    func_0x00010c1a1240(param_1);
  }
  else {
    func_0x00010c16e240(param_1);
  }
  lVar2 = param_1;
  func_0x00010bdf67e0(param_1);
  lVar3 = param_1;
  func_0x00010c096ca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be51230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logCameraFlipEvent_isRecording__112571e28,lVar2,0,2,lVar3);
  return;
}



/* Entry: 1061fc748; end: 1061fc793; -[SCLensLogger recordingStopped] */

void FUN_1061fc748(long param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  puVar1 = PTR_PTR_1126c8c00;
  _objc_opt_new(PTR_PTR_1126c8c00);
  func_0x00010c1960c0(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1387d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetCurrentViewingLensIfPossibl_11262bc10,1)
  ;
  return;
}



/* Entry: 1061fc794; end: 1061fc877; -[SCLensLogger cameraToggledWithAction:recording:] */

void FUN_1061fc794(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bdf67e0(param_1);
    func_0x00010c096ca0(param_1);
    func_0x00010be51220(param_1);
    if (param_3 != 2) {
      _CACurrentMediaTime();
      func_0x00010c177200(param_1);
    }
    lVar1 = param_1;
    func_0x00010c281140(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf60cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2b40(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1395f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1c0),PTR_s_resetSession_11262bf98);
  return;
}



/* Entry: 1061fc878; end: 1061fcb7b; -[SCLensLogger _logCameraFlipEvent:isRecording:action:sourceType:] */

void FUN_1061fc878(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = *(ulong *)(param_2 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06dd60();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  _CACurrentMediaTime();
  dVar6 = param_1;
  func_0x00010bf2b0a0(param_2);
  param_1 = param_1 - dVar6;
  if ((int)param_5 != 0) {
    func_0x00010bf2b0a0(param_2);
    lVar3 = param_2;
    dVar7 = dVar6;
    func_0x00010c250260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6b20();
    dVar8 = dVar7;
    _objc_release(lVar3);
    if (dVar6 < dVar7) {
      _CACurrentMediaTime();
      lVar3 = param_2;
      param_1 = dVar8;
      func_0x00010c250260(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6b20();
      param_1 = dVar8 - param_1;
      _objc_release(lVar3);
    }
  }
  lVar3 = param_2;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0745e0();
  _objc_release(lVar3);
  lVar3 = param_2;
  if ((int)lVar4 == 0) {
    puVar5 = PTR_PTR_1126c8c58;
    _objc_opt_new(PTR_PTR_1126c8c58);
    func_0x00010bf60cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(puVar5,param_3,lVar4);
  }
  else {
    puVar5 = PTR_PTR_1126c8c50;
    _objc_opt_new(PTR_PTR_1126c8c50);
    func_0x00010bf60cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c100(puVar5,param_3,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1bcca0(puVar5,param_3,param_7);
  lVar3 = param_2;
  func_0x00010bf60cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24a2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208000(puVar5,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf60cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24ab40();
  func_0x00010c208420(puVar5,param_3,lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c096b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar5,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bdf67e0(param_2);
  func_0x00010c176040(puVar5,param_3,lVar3);
  func_0x00010c222d20((double)(long)(param_1 * 10.0) / 10.0,puVar5);
  func_0x00010c161620(puVar5,param_3,param_6);
  func_0x00010c1b3c20(puVar5,param_3,param_5);
  lVar3 = param_2;
  func_0x00010bf60cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(puVar5,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1061fcb7c; end: 1061fcc9f; -[SCLensLogger triggerFired:] */

void FUN_1061fcb7c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c27bf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2827c0();
    func_0x00010c0df840(puVar4,param_3,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c27bf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bfb1ee0(param_2);
    if (param_1 == -1.0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c19d7a0(param_2);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061fcca0; end: 1061fcdbf; -[SCLensLogger faceCountChanged:] */

void FUN_1061fcca0(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_2;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010bfbb180();
    if ((int)uVar1 == 0) {
      uVar1 = param_2;
      func_0x00010bf13960();
      if (uVar1 <= param_4) {
        uVar1 = param_4;
      }
      func_0x00010c16e200(param_2,param_3,uVar1);
      uVar1 = param_4;
      if ((*(char *)(param_2 + 0x10) == '\x01') &&
         (uVar1 = param_2, func_0x00010bf13980(param_2,param_3,param_4), uVar1 <= param_4)) {
        uVar1 = param_4;
      }
      func_0x00010c16e240(param_2,param_3,uVar1);
    }
    else {
      uVar1 = param_2;
      func_0x00010bfbb1c0();
      if (uVar1 <= param_4) {
        uVar1 = param_4;
      }
      func_0x00010c1a1220(param_2,param_3,uVar1);
      uVar1 = param_4;
      if ((*(char *)(param_2 + 0x10) == '\x01') &&
         (uVar1 = param_2, func_0x00010bfbb200(param_2,param_3,param_4), uVar1 <= param_4)) {
        uVar1 = param_4;
      }
      func_0x00010c1a1240(param_2,param_3,uVar1);
    }
    func_0x00010bfb1180(param_2);
    if ((param_4 != 0) && (param_1 == -1.0)) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c19cf40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 1061fcdc0; end: 1061fd157; -[SCLensLogger lensOptionPresentedAtIndex:lensOptionId:lensOptionValue:lensOptionCount:lensOptionSourceType:] */

void FUN_1061fcdc0(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (2 < param_8) {
    param_8 = 0xffffffffffffffff;
  }
  uVar1 = param_2;
  func_0x00010bf5f220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf5f260();
    _objc_release(uVar1);
    if (uVar2 == param_8) goto LAB_1061fd12c;
  }
  uVar1 = param_2;
  func_0x00010bf5f220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_2;
    func_0x00010bf60cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0745e0();
    _objc_release(uVar1);
    uVar1 = param_2;
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126c8c68;
      _objc_opt_new(PTR_PTR_1126c8c68);
      _objc_retain();
      uVar2 = param_2;
      func_0x00010bf5f220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc480(puVar3,param_3,uVar2);
      _objc_release(uVar2);
      uVar2 = param_2;
      func_0x00010bf5f280(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc4e0(puVar3,param_3,uVar2);
      _objc_release(uVar2);
      func_0x00010bf60cc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c240(puVar3,param_3,uVar2);
    }
    else {
      puVar3 = PTR_PTR_1126c8c60;
      _objc_opt_new(PTR_PTR_1126c8c60);
      _objc_retain();
      uVar2 = param_2;
      func_0x00010bf5f220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc480(puVar3,param_3,uVar2);
      _objc_release(uVar2);
      uVar2 = param_2;
      func_0x00010bf5f280(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc4e0(puVar3,param_3,uVar2);
      _objc_release(uVar2);
      func_0x00010bf60cc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c100(puVar3,param_3,uVar2);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010bdf67e0(param_2);
    func_0x00010c176040(puVar3,param_3,uVar1);
    uVar1 = param_2;
    func_0x00010c096b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcc00(puVar3,param_3,uVar1);
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c096ca0(param_2);
    func_0x00010c1bcca0(puVar3,param_3,uVar1);
    uVar1 = param_2;
    func_0x00010bf5f260(param_2);
    func_0x00010c1bc4a0(puVar3,param_3,uVar1);
    _objc_release(puVar3);
    uVar1 = param_2;
    func_0x00010c0959e0(param_2);
    func_0x00010c19c180(puVar3,param_3,uVar1);
    uVar1 = param_2;
    func_0x00010bf5f240(param_2);
    func_0x00010c19c1a0(puVar3,param_3,uVar1);
    _CACurrentMediaTime();
    dVar5 = param_1;
    func_0x00010c2519a0(param_2);
    func_0x00010c222d20((double)(long)((param_1 - dVar5) * 10.0) / 10.0,puVar3);
    func_0x00010c19bec0(puVar3,param_3,1);
    func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar3);
    _objc_release(puVar3);
  }
  _CACurrentMediaTime();
  func_0x00010c209c20(param_2);
  func_0x00010c1875a0(param_2,param_3,param_4);
  func_0x00010c187580(param_2,param_3,param_5);
  func_0x00010c1875e0(param_2,param_3,param_6);
  func_0x00010c1875c0(param_2,param_3,param_8);
  func_0x00010c1bc460(param_2,param_3,param_7);
  lVar4 = param_5;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    uVar1 = param_2;
    func_0x00010c095aa0(param_2);
    func_0x00010c1bc4c0(param_2,param_3,uVar1 + 1);
  }
LAB_1061fd12c:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061fd158; end: 1061fd1bf; -[SCLensLogger lensOptionDisplayedAtIndex:mediaType:allowedMediaTypes:] */

void FUN_1061fd158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126c8c70;
    _objc_alloc();
    func_0x00010c02a0c0();
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0xa8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0c4ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s_mediaDisplayedAtIndex_mediaType__11260ecc0,param_3,param_4);
  return;
}



/* Entry: 1061fd1c0; end: 1061fd1fb; -[SCLensLogger lensOptionSessionStopped] */

void FUN_1061fd1c0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c095a40(param_1,param_2,0,&PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110daafd8,0,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010be55b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logMediaPickerSession_112573070);
  return;
}



/* Entry: 1061fd1fc; end: 1061fd37f; -[SCLensLogger _logMediaPickerSession] */

void FUN_1061fd1fc(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,ulong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  if (*(long *)(param_2 + 0xa8) != 0) {
    puVar1 = PTR_PTR_1126c3140;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c0687a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c085fa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e6e0(puVar1,param_3,uVar2,uVar3,1,1,1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = param_2;
    func_0x00010bf60cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    param_6 = *(ulong *)(param_2 + 0x1a8);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar5;
    param_5 = puVar6;
    func_0x00010c0a4420(param_2,param_3,puVar5,puVar6,param_6,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa8) = 0;
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_6 & 1) == 0) {
    puVar4 = PTR_PTR_1126c8c40;
    _objc_opt_new(PTR_PTR_1126c8c40);
    puVar5 = param_4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0c6c20();
    if (puVar6 == (undefined *)0x0) {
      param_1 = 0.0;
      func_0x00010c1e9020(0,puVar4);
      puVar6 = puVar5;
      func_0x00010c250280(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      param_1 = -param_1;
    }
    else {
      puVar6 = puVar1;
      func_0x00010bf951e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6b20();
      puVar7 = puVar1;
      dVar8 = param_1;
      func_0x00010c250260(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6b20();
      param_1 = param_1 - dVar8;
      func_0x00010c1e9020(param_1,puVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _CACurrentMediaTime();
      puVar6 = puVar1;
      dVar8 = param_1;
      func_0x00010bf951e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6b20();
      param_1 = param_1 - dVar8;
    }
    func_0x00010c1df180(param_1,puVar4);
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010c281140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befaac0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  func_0x00010c278140(puVar1,param_3,param_4,param_5,param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061fd380; end: 1061fd50f; -[SCLensLogger trackLensInteraction:appliedLensId:beforeSnap:] */

void FUN_1061fd380(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_6 & 1) == 0) {
    puVar1 = PTR_PTR_1126c8c40;
    _objc_opt_new(PTR_PTR_1126c8c40);
    lVar2 = param_4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c6c20();
    if (lVar3 == 0) {
      param_1 = 0.0;
      func_0x00010c1e9020(0,puVar1);
      lVar3 = lVar2;
      func_0x00010c250280(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      param_1 = -param_1;
    }
    else {
      lVar3 = param_2;
      func_0x00010bf951e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6b20();
      lVar4 = param_2;
      dVar5 = param_1;
      func_0x00010c250260(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6b20();
      param_1 = param_1 - dVar5;
      func_0x00010c1e9020(param_1,puVar1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _CACurrentMediaTime();
      lVar3 = param_2;
      dVar5 = param_1;
      func_0x00010bf951e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6b20();
      param_1 = param_1 - dVar5;
    }
    func_0x00010c1df180(param_1,puVar1);
    _objc_release(lVar3);
    lVar3 = param_2;
    func_0x00010c281140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befaac0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  func_0x00010c278140(param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061fd510; end: 1061fd5d3; -[SCLensLogger trackLensInteractionForUnlockableLensTracker:appliedLensId:beforeSnap:] */

void FUN_1061fd510(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_4 == 0) || ((param_5 & 1) == 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010c281140(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf21f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf95460(uVar1,param_2,uVar2,param_4);
    _objc_release(param_4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010c281140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1799c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061fd5d4; end: 1061fd5eb; -[SCLensLogger _currentCameraType] */

ulong FUN_1061fd5d4(ulong param_1)

{
  func_0x00010bfbb180();
  return param_1 & 0xffffffff;
}



/* Entry: 1061fd5ec; end: 1061fd68f; -[SCLensLogger logCustomLensInteractions:] */

void FUN_1061fd5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf60cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c096b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4420(param_1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + 0x1a8),param_3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061fd690; end: 1061fd87b; -[SCLensLogger logCustomLensEventsForEffectId:sessionId:snapSource:interactions:] */

void FUN_1061fd690(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar5 = &uStack_130;
  puVar6 = auStack_f0;
  uVar7 = 0x10;
  lVar1 = param_6;
  func_0x00010bf52a60(param_6,param_2,puVar5,puVar6,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_6);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar7 = uVar11;
        func_0x00010c0687a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        func_0x00010c068960(uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        lVar8 = param_5;
        func_0x00010bdf7700(param_1,param_2,param_3,uVar7,uVar4,param_5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar7);
        uVar7 = uVar11;
        func_0x00010bf2b540(uVar11);
        func_0x00010c176040(lVar2,param_2,uVar7);
        func_0x00010c1bcc00(lVar2,param_2,param_4);
        uVar7 = uVar11;
        func_0x00010c160620(uVar11);
        func_0x00010c1fdee0(lVar2,param_2,uVar7);
        func_0x00010beeee60(uVar11);
        func_0x00010c161d80(lVar2,param_2,uVar11);
        func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,lVar2);
        _objc_release(lVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar5 = &uStack_130;
      puVar6 = auStack_f0;
      uVar7 = 0x10;
      lVar1 = param_6;
      func_0x00010bf52a60(param_6,param_2,puVar5,puVar6,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  _os_unfair_lock_lock(param_3 + 0x138);
  puVar3 = PTR_PTR_1126bc038;
  _objc_opt_new(PTR_PTR_1126bc038);
  func_0x00010c19c240();
  func_0x00010c1ae1e0(puVar3,param_2,puVar6);
  func_0x00010c1ae280(puVar3,param_2,uVar7);
  func_0x00010c206c40(puVar3,param_2,lVar8);
  uVar4 = *(undefined8 *)(param_3 + 0x118);
  func_0x00010c0e00e0(uVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210680(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  lVar1 = param_3;
  func_0x00010c243360(param_3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar3,param_2,lVar1);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_3 + 0x138);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061fd87c; end: 1061fd9a3; -[SCLensLogger _customLensEventsForEffectId:interactionName:interactionValue:snapSource:] */

void FUN_1061fd87c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x138);
  puVar1 = PTR_PTR_1126bc038;
  _objc_opt_new(PTR_PTR_1126bc038);
  func_0x00010c19c240();
  func_0x00010c1ae1e0(puVar1,param_2,param_4);
  func_0x00010c1ae280(puVar1,param_2,param_5);
  func_0x00010c206c40(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210680(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c243360(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x138);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061fd9a4; end: 1061fdb23; -[SCLensLogger logCreatorLensEventsForEffectId:interactions:] */

void FUN_1061fd9a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar9 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_4);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        puVar2 = PTR_PTR_1126c8c78;
        _objc_opt_new(PTR_PTR_1126c8c78);
        func_0x00010c1bbd60();
        uVar3 = uVar6;
        func_0x00010c2762c0(uVar6);
        func_0x00010c2181e0(puVar2,param_2,uVar3);
        func_0x00010c0687a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010ba7ea18();
        func_0x00010c197d00(puVar2,param_2,uVar3);
        _objc_release(uVar6);
        func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
        _objc_release(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_4;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c8c80;
  _objc_retain(puVar5);
  _objc_opt_new(puVar2);
  puVar4 = (undefined1 *)puVar5;
  func_0x00010bf8cda0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = (undefined1 *)puVar5;
  func_0x00010c123d40(puVar5);
  func_0x00010c226b80(puVar2,param_2,puVar4);
  func_0x00010bfb68e0(puVar5);
  func_0x00010c1bbb40(puVar2);
  func_0x00010bfb7220(puVar5);
  func_0x00010c1bbb60(puVar2);
  func_0x00010c2790c0(puVar5);
  func_0x00010c1bd120(puVar2);
  func_0x00010bf96080(puVar5);
  func_0x00010c1bb6c0(puVar2);
  func_0x00010c151ca0(puVar5);
  func_0x00010c1bca80(puVar2);
  func_0x00010c11ff40(puVar5);
  func_0x00010c1bab40(puVar2);
  func_0x00010bfb11c0(puVar5);
  func_0x00010c1bbaa0(puVar2);
  func_0x00010bfb7120(puVar5);
  func_0x00010c1bcd60(puVar2);
  func_0x00010c09c460(puVar5);
  func_0x00010c1bc140(puVar2);
  func_0x00010c280b00(puVar5);
  func_0x00010c1bd220(puVar2);
  func_0x00010bfb7140(puVar5);
  func_0x00010c1bcda0(puVar2);
  func_0x00010bfb7160(puVar5);
  func_0x00010c1bcdc0(puVar2);
  func_0x00010bfcd780(puVar5);
  func_0x00010c1bbc40(puVar2);
  func_0x00010bfcd7a0(puVar5);
  func_0x00010c1bbc60(puVar2);
  func_0x00010bfb66e0(puVar5);
  func_0x00010c1bbac0(puVar2);
  func_0x00010bfb6740(puVar5);
  _objc_release(puVar5);
  func_0x00010c1bbae0(uVar9,puVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_3 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061fdb24; end: 1061fdccb; -[SCLensLogger lensMetricsEventEmitted:] */

void FUN_1061fdb24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8c80;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = param_4;
  func_0x00010bf8cda0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c123d40(param_4);
  func_0x00010c226b80(puVar1,param_3,uVar2);
  func_0x00010bfb68e0(param_4);
  func_0x00010c1bbb40(puVar1);
  func_0x00010bfb7220(param_4);
  func_0x00010c1bbb60(puVar1);
  func_0x00010c2790c0(param_4);
  func_0x00010c1bd120(puVar1);
  func_0x00010bf96080(param_4);
  func_0x00010c1bb6c0(puVar1);
  func_0x00010c151ca0(param_4);
  func_0x00010c1bca80(puVar1);
  func_0x00010c11ff40(param_4);
  func_0x00010c1bab40(puVar1);
  func_0x00010bfb11c0(param_4);
  func_0x00010c1bbaa0(puVar1);
  func_0x00010bfb7120(param_4);
  func_0x00010c1bcd60(puVar1);
  func_0x00010c09c460(param_4);
  func_0x00010c1bc140(puVar1);
  func_0x00010c280b00(param_4);
  func_0x00010c1bd220(puVar1);
  func_0x00010bfb7140(param_4);
  func_0x00010c1bcda0(puVar1);
  func_0x00010bfb7160(param_4);
  func_0x00010c1bcdc0(puVar1);
  func_0x00010bfcd780(param_4);
  func_0x00010c1bbc40(puVar1);
  func_0x00010bfcd7a0(param_4);
  func_0x00010c1bbc60(puVar1);
  func_0x00010bfb66e0(param_4);
  func_0x00010c1bbac0(puVar1);
  func_0x00010bfb6740(param_4);
  _objc_release(param_4);
  func_0x00010c1bbae0(param_1,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061fdccc; end: 1061fdcd7; -[SCLensLogger setEffectComponent:] */

void FUN_1061fdccc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 1061fdcd8; end: 1061fdd07; -[SCLensLogger setProcessingPerformer:] */

void FUN_1061fdcd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fdd08; end: 1061fdd0b; -[SCLensLogger _logPerformanceAutomationEvent:] */

void FUN_1061fdd08(void)

{
  return;
}



/* Entry: 1061fdd0c; end: 1061fdd13; -[SCLensLogger logTextureSavedEvent] */

void FUN_1061fdd0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b1990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_logTextureSavedEvent_11260a070);
  return;
}



/* Entry: 1061fdd14; end: 1061fddb3; -[SCLensLogger setCTLensSnapSessionId:forLensId:] */

void FUN_1061fdd14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x148);
  lVar1 = *(long *)(param_1 + 0x120);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    *(undefined **)(param_1 + 0x120) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x120);
  }
  func_0x00010c1d0640(lVar1,param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x148);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061fddb4; end: 1061fde2b; -[SCLensLogger snapSessionIdForLensId:] */

void FUN_1061fddb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x148);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x148);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061fde2c; end: 1061fde97; -[SCLensLogger _applicationWillResignActive] */

void FUN_1061fde2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _CACurrentMediaTime();
    func_0x00010c187480(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf32590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x1c0),PTR_s_carouselDidExitWithType__1125aa308,0xd);
    return;
  }
  return;
}



/* Entry: 1061fde98; end: 1061fdeff; -[SCLensLogger _getLaterDate:compareDate:] */

void FUN_1061fde98(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf433a0(param_3,param_2,param_4);
  lVar1 = param_4;
  if (lVar2 != -1) {
    lVar1 = param_3;
  }
  _objc_retain(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061fdf00; end: 1061fdf67; -[SCLensLogger _getEarlierDate:compareDate:] */

void FUN_1061fdf00(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf433a0(param_3,param_2,param_4);
  lVar1 = param_3;
  if (lVar2 != -1) {
    lVar1 = param_4;
  }
  _objc_retain(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061fdf68; end: 1061fdf7b; -[SCLensLogger _isVideoCallLensSource:] */

bool FUN_1061fdf68(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 2 || param_3 == 0x39;
}



/* Entry: 1061fdf7c; end: 1061fdff3; -[SCLensLogger _normalizedSessionId:] */

void FUN_1061fdf7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11f440(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdd98,4);
  lVar2 = param_3;
  if (lVar1 == 0x7fffffffffffffff) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c260c20(param_3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061fdff4; end: 1061fe05b; -[SCLensLogger setNotificationId:] */

void FUN_1061fdff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x188);
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x188);
  return;
}



/* Entry: 1061fe05c; end: 1061fe157; -[SCLensLogger getNotificationIdForLensSessionId:] */

void FUN_1061fe05c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    uVar4 = 0;
    goto LAB_1061fe128;
  }
  lVar1 = param_1;
  func_0x00010be64140(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x188);
  lVar2 = *(long *)(param_1 + 400);
  if ((lVar2 == 0) || (func_0x00010c08fa60(), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x198);
    if (uVar3 == 0) {
      _objc_retain(lVar1);
      lVar2 = lVar1;
LAB_1061fe100:
      uVar4 = *(undefined8 *)(param_1 + 0x198);
      *(long *)(param_1 + 0x198) = lVar2;
      _objc_release(uVar4);
    }
    else {
      func_0x00010c0720c0(uVar3,param_2,lVar1);
      if ((uVar3 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 400);
        *(undefined8 *)(param_1 + 400) = 0;
        _objc_release(uVar4);
        lVar2 = 0;
        goto LAB_1061fe100;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 400);
    _objc_retain(uVar4);
  }
  _os_unfair_lock_unlock(param_1 + 0x188);
  _objc_release(lVar1);
LAB_1061fe128:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1061fe158; end: 1061fe1a7;  */

void FUN_1061fe158(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be81660(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061fe1a8; end: 1061fe3d3; -[SCLensLogger _processLensSessionStateUpdate:] */

void FUN_1061fe1a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf60240();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010bf352a0();
    uVar4 = uVar2;
    FUN_1061f77f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedfb20(param_1,param_2,uVar4);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (uVar3 == 0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1061fe3d8;
      puStack_78 = &UNK_1109159d0;
      uStack_70 = param_1;
      _objc_retain(uVar2);
      puStack_c0 = puVar1;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_1061fe498;
      puStack_a8 = &UNK_1109159d0;
      uStack_a0 = param_1;
      uStack_68 = uVar2;
      _objc_retain(uVar2);
      puStack_f0 = puVar1;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x1061fe4e8;
      puStack_d8 = &UNK_1109159d0;
      uStack_d0 = param_1;
      uStack_98 = uVar2;
      _objc_retain(uVar2);
      puStack_128 = puVar1;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_1061fe538;
      puStack_110 = &UNK_110915a00;
      uStack_c8 = uVar2;
      _objc_retain(param_3);
      uStack_108 = param_3;
      uStack_100 = param_1;
      _objc_retain(uVar2);
      uStack_f8 = uVar2;
      func_0x00010c0bf120(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1109159b0,&puStack_90,
                          &puStack_c0,&puStack_f0,&puStack_128);
      _objc_release(uStack_f8);
      _objc_release(uStack_108);
      _objc_release(uStack_c8);
      _objc_release(uStack_98);
      uVar3 = uStack_68;
    }
    else {
      uVar5 = param_3;
      func_0x00010c1128a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      FUN_1061f77f8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010c071ae0(uVar4,param_2,uVar3);
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar3;
        func_0x00010c0827a0();
        uVar6 = uVar4;
        func_0x00010c0827a0();
        if ((int)uVar5 != (int)uVar6) {
          uVar5 = uVar4;
          func_0x00010c0827a0(uVar4);
          func_0x00010bdfcb80(param_1,param_2,uVar5);
        }
        func_0x00010be64c00(param_1,param_2,uVar2);
      }
    }
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061fe3d4; end: 1061fe3d7;  */

void FUN_1061fe3d4(void)

{
  return;
}



/* Entry: 1061fe3d8; end: 1061fe497;  */

void FUN_1061fe3d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c160100(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96fa0();
  func_0x0001061f77e8();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c15ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c160100(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c247d20(uVar2);
  func_0x00010be4bca0(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe498; end: 1061fe537;  */

void FUN_1061fe498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4bc80(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061fe538; end: 1061fe5d3;  */

void FUN_1061fe538(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1128a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1061f7660();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010c15ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be4bcc0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe5d4; end: 1061fe613; -[SCLensLogger _updateSessionInfo:] */

void FUN_1061fe5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x158);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x158);
  return;
}



/* Entry: 1061fe614; end: 1061fe697; -[SCLensLogger _shouldIncludeRecordingTimeForLens:] */

undefined8 FUN_1061fe614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c112da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bf4b900(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1061fe698; end: 1061fe6d3; -[SCLensLogger gamePlayInfo] */

void FUN_1061fe698(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x170);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061fe6d4; end: 1061fe6db; -[SCLensLogger frontCameraActive] */

undefined1 FUN_1061fe6d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a0);
}



/* Entry: 1061fe6dc; end: 1061fe6e3; -[SCLensLogger snapSource] */

undefined8 FUN_1061fe6dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 1061fe6e4; end: 1061fe6eb; -[SCLensLogger mediaType] */

undefined8 FUN_1061fe6e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 1061fe6ec; end: 1061fe6f3; -[SCLensLogger setMediaType:] */

void FUN_1061fe6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
  return;
}



/* Entry: 1061fe6f4; end: 1061fe6fb; -[SCLensLogger productMediaType] */

undefined8 FUN_1061fe6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 1061fe6fc; end: 1061fe703; -[SCLensLogger setProductMediaType:] */

void FUN_1061fe6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  return;
}



/* Entry: 1061fe704; end: 1061fe70b; -[SCLensLogger isRedirectToStore] */

undefined1 FUN_1061fe704(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a1);
}



/* Entry: 1061fe70c; end: 1061fe713; -[SCLensLogger setIsRedirectToStore:] */

void FUN_1061fe70c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a1) = param_3;
  return;
}



/* Entry: 1061fe714; end: 1061fe71b; -[SCLensLogger isRedirectToWebview] */

undefined1 FUN_1061fe714(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a2);
}



/* Entry: 1061fe71c; end: 1061fe723; -[SCLensLogger setIsRedirectToWebview:] */

void FUN_1061fe71c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a2) = param_3;
  return;
}



/* Entry: 1061fe724; end: 1061fe72b; -[SCLensLogger isMultiURL] */

undefined1 FUN_1061fe724(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a3);
}



/* Entry: 1061fe72c; end: 1061fe733; -[SCLensLogger setIsMultiURL:] */

void FUN_1061fe72c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a3) = param_3;
  return;
}



/* Entry: 1061fe734; end: 1061fe73b; -[SCLensLogger lensThumbnailLogger] */

undefined8 FUN_1061fe734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 1061fe73c; end: 1061fe743; -[SCLensLogger topSnapAdId] */

undefined8 FUN_1061fe73c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 1061fe744; end: 1061fe773; -[SCLensLogger setTopSnapAdId:] */

void FUN_1061fe744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe774; end: 1061fe77b; -[SCLensLogger topSnapAdRequestId] */

undefined8 FUN_1061fe774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 1061fe77c; end: 1061fe7ab; -[SCLensLogger setTopSnapAdRequestId:] */

void FUN_1061fe77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe7ac; end: 1061fe7b3; -[SCLensLogger lensSwipesObservable] */

undefined8 FUN_1061fe7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1061fe7b4; end: 1061fe7bb; -[SCLensLogger lensSwipeIdObservable] */

undefined8 FUN_1061fe7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 1061fe7bc; end: 1061fe7eb; -[SCLensLogger setLensSwipeId:] */

void FUN_1061fe7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe7ec; end: 1061fe7f7; -[SCLensLogger lensReadyTracker] */

void FUN_1061fe7ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1d8,1);
  return;
}



/* Entry: 1061fe7f8; end: 1061fe80f; -[SCLensLogger lensProcessingUsageProvider] */

void FUN_1061fe7f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061fe810; end: 1061fe81b; -[SCLensLogger setLensProcessingUsageProvider:] */

void FUN_1061fe810(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1e0,param_3);
  return;
}



/* Entry: 1061fe81c; end: 1061fe823; -[SCLensLogger currentLensOptionId] */

undefined8 FUN_1061fe81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 1061fe824; end: 1061fe853; -[SCLensLogger setCurrentLensOptionId:] */

void FUN_1061fe824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe854; end: 1061fe85b; -[SCLensLogger currentLensOptionValue] */

undefined8 FUN_1061fe854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 1061fe85c; end: 1061fe88b; -[SCLensLogger setCurrentLensOptionValue:] */

void FUN_1061fe85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe88c; end: 1061fe893; -[SCLensLogger currentLensOptionSourceType] */

undefined8 FUN_1061fe88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}


