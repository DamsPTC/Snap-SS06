/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10790f174; end: 10790f1f7;  */

void FUN_10790f174(long param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong *unaff_x19;
  
  func_0x000107917aac();
  func_0x000107914d64();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar1 = *unaff_x19;
    bVar3 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001079137e0();
      if (!bVar3) {
        func_0x000107914138();
      }
      func_0x00010791461c();
    }
    else {
      lVar2 = *(long *)(param_1 + 0x10) - uVar1;
      lVar4 = lVar2 >> 2;
      if (lVar2 == 0) {
        lVar4 = 1;
      }
      func_0x00010791877c();
      func_0x00010790f2b4(lVar4);
      func_0x000107913404();
      func_0x00010790f290();
      func_0x0001079135c0();
      func_0x00010790f300();
    }
  }
  func_0x000107915e84();
  return;
}



/* Entry: 10790f734; end: 10790f793;  */

undefined8 FUN_10790f734(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (uVar1 = unaff_x21 == lVar2, !(bool)uVar1) {
      func_0x000107915d6c();
      while (func_0x000107916f18(), lVar2 = extraout_x8_00, unaff_x21 = unaff_x22, !(bool)uVar1) {
        func_0x00010791460c();
        func_0x00010790f3ec();
        if ((param_1 & 1) == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



/* Entry: 1079103c4; end: 107910427;  */

undefined8 FUN_1079103c4(undefined1 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if ((param_2[3] == param_2[1]) ||
     ((param_2[3] - *(long *)param_2[2]) / 0xb0 + (param_2[2] - *param_2 >> 3) * 0x17 ==
      (param_2[1] - *(long *)*param_2) / 0xb0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *param_1 = 1;
  }
  return uVar1;
}



/* Entry: 10791083c; end: 1079108bf;  */

void FUN_10791083c(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010791464c();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001004d7774();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107910ddc; end: 107910e3b;  */

ulong FUN_107910ddc(ulong param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x21;
  long unaff_x22;
  
  uVar1 = param_3 == 99;
  if ((99 < param_3) ||
     (uVar1 = param_2[1] - *param_2 == 0x79, (ulong)(param_2[1] - *param_2) < 0x79)) {
    func_0x000107915d78(param_2,param_4);
    if (!(bool)uVar1) {
      func_0x000107914c78();
      lVar2 = extraout_x8;
      while (uVar1 = unaff_x21 == lVar2, !(bool)uVar1) {
        func_0x000107915d6c();
        while (func_0x000107916f18(), lVar2 = extraout_x8_00, unaff_x21 = unaff_x22, !(bool)uVar1) {
          func_0x00010791460c();
          func_0x000107910a2c();
          if (((ulong)param_2 & 1) == 0) {
            return 0;
          }
        }
      }
    }
    return 1;
  }
  func_0x000107913fec(param_1,param_2,param_3 + 1);
  func_0x0001079135a4();
  func_0x0001079134a0();
  func_0x000107915c1c();
  if ((bool)uVar1) {
code_r0x0001079109d8:
    func_0x00010791658c();
    func_0x000107914d88();
    func_0x000107910c68();
    if ((int)param_1 != 0) {
      func_0x0001079165f8();
      func_0x000107914d88();
      func_0x000107910c68();
      goto code_r0x000107910a00;
    }
  }
  else {
    func_0x000107917308();
    func_0x000107915144();
    func_0x000107914d88();
    func_0x000107910c68();
    if ((int)param_1 != 0) {
      func_0x0001079148c4();
      func_0x000107914aa0();
      func_0x000107910d48();
      if ((int)param_1 != 0) {
        func_0x0001079148b4();
        func_0x000107914aa0();
        func_0x000107910d48();
        if ((param_1 & 1) != 0) goto code_r0x0001079109d8;
      }
    }
  }
  param_1 = 0;
code_r0x000107910a00:
  func_0x0001079151e0();
  func_0x00010791518c();
  func_0x000107915024();
  return param_1;
}



/* Entry: 107911404; end: 107911453;  */

void FUN_107911404(long *param_1)

{
  if (param_1[1] != *param_1) {
    func_0x000107915890();
    func_0x000107917374();
    func_0x000107915254();
    func_0x0001079063f8();
    FUN_1079064a0();
    func_0x000107916ec4();
  }
  return;
}



/* Entry: 10791168c; end: 1079116b7;  */

bool FUN_10791168c(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  if (*param_1 != param_1[1]) {
    if (param_1[2] != param_2[2]) {
      return false;
    }
    if (param_1[7] != param_2[7]) {
      return false;
    }
    if (param_2[7] != param_1[8]) {
      return param_1[9] == param_2[9];
    }
  }
  return true;
}



/* Entry: 107911b38; end: 107911b43;  */

void FUN_107911b38(ulong param_1)

{
  undefined1 in_ZR;
  int iVar1;
  ulong extraout_x8;
  ulong unaff_x20;
  ulong unaff_x23;
  
  func_0x000107913ad0();
  func_0x000107915f10();
  func_0x0001079133e4();
  while( true ) {
    iVar1 = (int)param_1;
    func_0x000107915ebc();
    if ((bool)in_ZR) break;
    func_0x00010791744c();
    func_0x000107907300();
    param_1 = unaff_x23;
    func_0x000107907300();
    if ((iVar1 == 0) || ((param_1 & 1) == 0)) {
      func_0x000107916104();
      in_ZR = iVar1 == 0;
      param_1 = unaff_x20;
      if ((bool)in_ZR) {
        param_1 = extraout_x8;
      }
      func_0x000107911ac8();
    }
  }
  return;
}



/* Entry: 107911fd4; end: 10791202f;  */

void FUN_107911fd4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        func_0x000107911918();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 107912424; end: 1079124d7;  */

ulong FUN_107912424(ulong param_1,ulong param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  bVar1 = param_2 <= param_1;
  bVar2 = param_1 == param_2;
  if (bVar2) {
    return param_1;
  }
  func_0x000107914f34();
  if (!bVar1 || bVar2) {
    func_0x00010791746c();
    if (bVar1 && !bVar2) {
      if (unaff_x23 != unaff_x22) {
        func_0x00010791522c();
        _memmove();
        unaff_x23 = *(long *)(param_1 + 8);
      }
      lVar4 = unaff_x24 - (unaff_x20 + param_3);
      if (lVar4 != 0) {
        func_0x000107915554();
      }
      lVar4 = unaff_x23 + lVar4;
      goto LAB_1079124c8;
    }
  }
  else {
    if (unaff_x22 != 0) {
      *(long *)(param_1 + 8) = unaff_x22;
      __ZdlPv();
      func_0x00010791778c();
    }
    uVar3 = param_1;
    func_0x0001079032d0(param_1,unaff_x21 >> 3);
    func_0x0001079035e4(param_1,uVar3);
    unaff_x22 = *(long *)(param_1 + 8);
  }
  if (unaff_x24 != unaff_x20) {
    func_0x000107913f60();
  }
  lVar4 = unaff_x22 + unaff_x21;
LAB_1079124c8:
  *(long *)(param_1 + 8) = lVar4;
  return param_1;
}



/* Entry: 107912b14; end: 107912b43;  */

/* WARNING: Possible PIC construction at 0x000107912b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107912b30) */

void FUN_107912b14(undefined8 *param_1,int param_2)

{
  ulong unaff_x20;
  
  func_0x0001079176a8();
  func_0x000107914d64(*param_1,param_2 << 3);
  while( true ) {
    if (unaff_x20 < 0x80) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    unaff_x20 = unaff_x20 >> 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)();
  return;
}



/* Entry: 107912d58; end: 107912dcf;  */

long FUN_107912d58(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  if (*plVar1 != 0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x000107912e4c();
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x000107912e4c();
    }
    func_0x000107912e4c(plVar1);
  }
  func_0x000107912c4c(param_1 + 0x48);
  func_0x000107912c4c(param_1 + 0x28);
  func_0x000107912c4c(plVar1);
  return param_1;
}



/* Entry: 107912ec4; end: 107912f53;  */

undefined8 * FUN_107912ec4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    while (plVar3 != plVar2) {
      plVar3 = plVar3 + -1;
      lVar1 = *plVar3;
      *plVar3 = 0;
      if (lVar1 != 0) {
        func_0x000107912bfc(lVar1 + 0xf8);
        func_0x000107912bfc(lVar1 + 0xd0);
        func_0x000107912c4c(lVar1 + 0x98);
        func_0x000107912c4c(lVar1 + 0x78);
        func_0x000107912c4c(lVar1 + 0x58);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x40);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x28);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
        func_0x000107914d94();
      }
    }
    param_1[1] = plVar2;
    func_0x000107915b14();
  }
  return param_1;
}



/* Entry: 10791321c; end: 107913253;  */

long FUN_10791321c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ea1c0);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107917174; end: 107917fd3;  */

void FUN_107917174(void)

{
  return;
}



/* Entry: 107918b7c; end: 107918b8f;  */

void FUN_107918b7c(void)

{
  func_0x000107918da4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107918dfc; end: 107918eb3;  */

void FUN_107918dfc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109ea368;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_107918eb4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107919108(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1079190f8; end: 107919107;  */

void FUN_1079190f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ea3a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1079193fc; end: 10791940f;  */

void FUN_1079193fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1079195a8; end: 1079195eb; -[SCNSnapMapsSdkCMAnimationOptions .cxx_destruct] */

void FUN_1079195a8(long param_1)

{
  func_0x0001079195ec(param_1 + 0x30);
  func_0x0001079195ec(param_1 + 0x28);
  func_0x0001079195ec(param_1 + 0x20);
  func_0x0001079195ec(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079199e0; end: 1079199e7; -[SCNSnapMapsSdkCMCameraOptions pitch] */

undefined8 FUN_1079199e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107919cd0; end: 107919cd7; -[SCNSnapMapsSdkCMCameraViewport cameraOptions] */

undefined8 FUN_107919cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107919ef4; end: 107919ef7;  */

void FUN_107919ef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ea4d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791a064; end: 10791a0db; -[SCNSnapMapsSdkCameraManager initWithCpp:] */

undefined1 * FUN_10791a064(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8d80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010791b008();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001072cd28c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10791a5ec; end: 10791a67b; -[SCNSnapMapsSdkCameraManager moveToAnchorPitch:anchorY:pitch:animationOptions:] */

void FUN_10791a5ec(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010791af3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791af90();
  func_0x00010791af78(*(undefined8 *)(*plVar1 + 0x40));
  func_0x00010791afa4();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791aa5c; end: 10791aafb; -[SCNSnapMapsSdkCameraManager getCameraViewport] */

void FUN_10791aa5c(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [112];
  
  puVar1 = auStack_d0;
  func_0x00010791b058();
  (**(code **)(extraout_x8 + 0x80))(auStack_d0);
  func_0x000107919a34(auStack_d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001148fc(auStack_90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10791adb0; end: 10791ae03; -[SCNSnapMapsSdkCameraManager .cxx_destruct] */

void FUN_10791adb0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109ea560;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001072cd28c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10791b244; end: 10791b24b; -[SCNSnapMapsSdkCofPrefetchDescriptor cofName] */

undefined8 FUN_10791b244(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10791b428; end: 10791b467;  */

void FUN_10791b428(void)

{
  func_0x00010791ba64();
  return;
}



/* Entry: 10791b768; end: 10791b7d7;  */

undefined8 FUN_10791b768(void)

{
  undefined8 unaff_x21;
  
  func_0x00010791b9d0();
  func_0x00010791b9f8();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba4c();
  func_0x00010bfc31a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791b9dc();
  func_0x00010011c84c();
  func_0x00010791ba14();
  func_0x00010791ba2c();
  return unaff_x21;
}



/* Entry: 10791bac4; end: 10791bb7b;  */

void FUN_10791bac4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109ea790;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791bb7c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10791bdb4(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10791bdb4; end: 10791bddf;  */

long FUN_10791bdb4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791c000; end: 10791c133;  */

void FUN_10791c000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  int iStack_50;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = param_2;
  FUN_107936bf0(param_2);
  func_0x000100291d50(&uStack_58,uVar2);
  func_0x00010b4d1758(param_2,uStack_58,iStack_50 - (int)uStack_58);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126c6118);
  func_0x00010c008360();
  _objc_release(puVar3);
  func_0x000100100fec(&uStack_58);
  func_0x000107928b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a6e0(uVar4);
  func_0x00010791c214();
  func_0x00010791c200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10791c3d0; end: 10791c3e3;  */

void FUN_10791c3d0(void)

{
  func_0x00010791c5bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791c5f8; end: 10791c61f;  */

void FUN_10791c5f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10791c96c; end: 10791c9ff;  */

long FUN_10791c96c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eab18;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791cb78; end: 10791cb7f; -[SCNSnapMapsSdkEdgeInsetsDouble left] */

undefined8 FUN_10791cb78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10791cd6c; end: 10791cdcf;  */

void FUN_10791cd6c(void)

{
  func_0x00010791d000();
  return;
}



/* Entry: 10791d05c; end: 10791d0f3; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters initWithWidth:height:latitude:longitude:zoom:bearing:pitch:fieldOfView:renderCommandEncoder:] */

void FUN_10791d05c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126f8d98;
  uStack_70 = param_9;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
  }
  return;
}



/* Entry: 10791d12c; end: 10791d133; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters fieldOfView] */

undefined8 FUN_10791d12c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10791d7b8; end: 10791d9af; -[SCNSnapMapsSdkFeatureDescriptor initWithFeature:layerId:groups:components:interactionLabels:lat:lon:boundingBox:tileID:] */

undefined1 *
FUN_10791d7b8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126f8da0;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010791da54(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x00010791da54(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x00010791da54(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x00010791da54(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10791d9e8; end: 10791d9ef; -[SCNSnapMapsSdkFeatureDescriptor boundingBox] */

undefined8 FUN_10791d9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10791dd74; end: 10791dd7b; -[SCNSnapMapsSdkFontDescriptor style] */

undefined8 FUN_10791dd74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10791df9c; end: 10791dfa7;  */

long FUN_10791df9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eadc8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791e4e0; end: 10791e55b;  */

long * FUN_10791e4e0(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x2e8ba2e8ba2e8ba < param_2) {
      func_0x000104bd35f4();
      lVar2 = param_2[1];
      lVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = lVar2;
      *param_1 = lVar1;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      lVar2 = param_2[4];
      lVar1 = param_2[3];
      param_1[5] = param_2[5];
      param_1[4] = lVar2;
      param_1[3] = lVar1;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[3] = 0;
      lVar2 = param_2[7];
      lVar1 = param_2[6];
      param_1[8] = param_2[8];
      param_1[7] = lVar2;
      param_1[6] = lVar1;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[6] = 0;
      lVar1 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = lVar1;
      param_2[9] = 0;
      param_2[10] = 0;
      return param_1;
    }
    lVar1 = (long)param_2 * 0x58;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x58;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + (long)param_2 * 0x58;
  return param_1;
}



/* Entry: 10791e728; end: 10791e72f; -[SCNSnapMapsSdkGestureInfo type] */

undefined8 FUN_10791e728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10791e8fc; end: 10791e90f;  */

void FUN_10791e8fc(void)

{
  func_0x00010791eb88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791ebe0; end: 10791ec17;  */

void FUN_10791ebe0(undefined4 *param_1)

{
  _objc_alloc(PTR_PTR_1126d5670);
  func_0x00010c063740(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791ee4c; end: 10791ee5f;  */

void FUN_10791ee4c(void)

{
  func_0x00010791efb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791effc; end: 10791f0a7;  */

void FUN_10791effc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eb140;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791f0a8);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010791f3f4(&uStack_50);
  }
  func_0x00010791f420();
  return;
}



/* Entry: 10791f330; end: 10791f3e3;  */

void FUN_10791f330(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x140);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x140) {
    lVar3 = lVar4;
    func_0x00010791d324(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    func_0x00010791f428();
  }
  func_0x00010bf51e00(puVar2);
  func_0x00010791f420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10791f684; end: 10791f6df; -[SCNSnapMapsSdkInputManager clearAllListeners] */

void FUN_10791f684(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  return;
}



/* Entry: 10791f984; end: 10791f9fb; -[SCNSnapMapsSdkInspector initWithCpp:] */

undefined1 * FUN_10791f984(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010791fe68();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001072ac7b8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10791fd84; end: 10791fdff;  */

void FUN_10791fd84(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109eb220;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010791fe68();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_10791fe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791fe8c();
  func_0x0001000df524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079200a8; end: 1079200e7;  */

void FUN_1079200a8(void)

{
  func_0x000107920288();
  return;
}



/* Entry: 10792035c; end: 1079203f3;  */

void FUN_10792035c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c5bb0;
  _objc_alloc(PTR_PTR_1126c5bb0);
  lVar2 = param_1;
  func_0x000107920568(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  func_0x000107920568(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04faa0(puVar1,param_2,lVar2,param_1);
  func_0x0001079203fc();
  func_0x0001079203f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107920598; end: 1079205e3; -[SCNSnapMapsSdkLatLngDouble initWithLat:lng:] */

void FUN_107920598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8dd8;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 1079207bc; end: 1079207cf; +[SCNSnapMapsSdkMapSdk hasDefaultInstance] */

bool FUN_1079207bc(void)

{
  return lRam0000000113822068 != 0;
}



/* Entry: 107920e30; end: 107920e6b;  */

void FUN_107920e30(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107921f84();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x00010792215c();
    func_0x00010791ddd0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107921474; end: 1079214c7; -[SCNSnapMapsSdkMapSdk setSatelliteModeEnabled:] */

void FUN_107921474(void)

{
  long extraout_x8;
  
  func_0x0001079220b4();
  (**(code **)(extraout_x8 + 0x48))();
  return;
}



/* Entry: 10792186c; end: 1079218d3;  */

void FUN_10792186c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bf1f0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107922004();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010725afa0(&uStack_30);
  return;
}



/* Entry: 107921c8c; end: 107921cdf;  */

void FUN_107921c8c(undefined8 *param_1,long param_2)

{
  func_0x000107921fe0();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x0001072aaaf4();
  func_0x000107921ce0();
  return;
}



/* Entry: 107922278; end: 1079222f3; +[SCNSnapMapsSdkMapSdkInitializationParamsBuilder fromLong:] */

void FUN_107922278(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001072b0d28(&uStack_30,param_3 + 8);
  func_0x0001079229c0(uStack_30,uStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107922b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079226cc; end: 10792275f; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder memoriesFetcher:] */

void FUN_1079226cc(void)

{
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107922b38();
  func_0x000107922b8c();
  if (unaff_x19 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x000107922bd0();
    func_0x000107926978();
  }
  func_0x000107922b84();
  func_0x000107922b58(*(undefined8 *)(*unaff_x20 + 0x48));
  func_0x0001072ac994(&uStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 107922a8c; end: 107922acf; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder .cxx_construct] */

undefined8 * FUN_107922a8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107922bc0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 107922df0; end: 107922e5f;  */

void FUN_107922df0(void)

{
  func_0x00010792302c();
  return;
}



/* Entry: 107923134; end: 10792317f; -[SCNSnapMapsSdkMapSdkSession getNativeThisPtr] */

void FUN_107923134(void)

{
  long extraout_x8;
  
  func_0x0001079266cc();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 107923668; end: 1079236b3; -[SCNSnapMapsSdkMapSdkSession clearCache] */

void FUN_107923668(void)

{
  long extraout_x8;
  
  func_0x0001079266cc();
  (**(code **)(extraout_x8 + 0x48))();
  return;
}



/* Entry: 107923b7c; end: 107923c23; -[SCNSnapMapsSdkMapSdkSession addFeatures:features:] */

void FUN_107923b7c(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [48];
  
  func_0x000107926550();
  func_0x0001079266e0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079265ec();
  func_0x000107926830();
  func_0x000107923c24();
  func_0x000107926614(*(undefined8 *)(*plVar1 + 0x88));
  func_0x0001072ba554(auStack_60);
  func_0x0001079266e8();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 107924294; end: 10792430b; -[SCNSnapMapsSdkMapSdkSession clearAllCachedTiles:] */

void FUN_107924294(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926648();
  func_0x0001079265f8(*(undefined8 *)(*plVar1 + 0xc0));
  func_0x0001079266f0();
  func_0x000107926620();
  return;
}



/* Entry: 1079246a4; end: 107924723;  */

void FUN_1079246a4(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x0001079268c4();
  *param_1 = &PTR_DAT_1109ecf60;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107926914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107924ee8; end: 107924f63; -[SCNSnapMapsSdkMapSdkSession updateSafeAreaInsets:] */

void FUN_107924ee8(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926964();
  func_0x000107926700(*(undefined8 *)(*plVar1 + 0x128));
  func_0x0001079267e8();
  func_0x000107926620();
  return;
}



/* Entry: 10792539c; end: 1079253e7; -[SCNSnapMapsSdkMapSdkSession setHeatmapVisible:] */

void FUN_10792539c(void)

{
  long extraout_x8;
  
  func_0x000107926690();
  (**(code **)(extraout_x8 + 0x160))();
  return;
}



/* Entry: 107925a34; end: 107925aab; -[SCNSnapMapsSdkMapSdkSession setEmbeddedMapCalloutText:] */

void FUN_107925a34(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926648();
  func_0x0001079265f8(*(undefined8 *)(*plVar1 + 0x1a0));
  func_0x0001079266f0();
  func_0x000107926620();
  return;
}



/* Entry: 107926134; end: 107926173; -[SCNSnapMapsSdkMapSdkSession .cxx_construct] */

undefined8 * FUN_107926134(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001079267cc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1079264b0; end: 1079264fb;  */

long * FUN_1079264b0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072bba54();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 107926b48; end: 107926b53;  */

long FUN_107926b48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb568;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 107926dd0; end: 107926e47; -[SCNSnapMapsSdkMemoriesFetcherCallback initWithCpp:] */

undefined1 * FUN_107926dd0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8df8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_107927110();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107300f3c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107927110; end: 10792713f;  */

void FUN_107927110(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10792753c; end: 10792753f;  */

void FUN_10792753c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eb6f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1079276ac; end: 107927723; -[SCNSnapMapsSdkPlaceManager initWithCpp:] */

undefined1 * FUN_1079276ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107927b24();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107926338(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1079279ec; end: 107927a2f; -[SCNSnapMapsSdkPlaceManager .cxx_construct] */

undefined8 * FUN_1079279ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107927b24();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 107927c68; end: 107927cdf; -[SCNSnapMapsSdkPublicUserInfoCallback initWithCpp:] */

undefined1 * FUN_107927c68(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8e18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107928494();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001072716b0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107928288; end: 10792829b;  */

void FUN_107928288(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar5 = *plVar2;
  lVar1 = plVar2[1];
  lVar6 = param_2[1] + ((lVar1 - lVar5) / -0x48) * 0x48;
  lVar3 = lVar6;
  for (lVar4 = lVar5; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    func_0x0001079283d4(lVar3,lVar4);
    lVar3 = lVar3 + 0x48;
  }
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
    func_0x00010793be08(lVar5);
  }
  param_2[1] = lVar6;
  lVar4 = *plVar2;
  *plVar2 = lVar6;
  plVar2[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1079286a0; end: 1079286a3;  */

void FUN_1079286a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eb838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107928868; end: 107928883;  */

void FUN_107928868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1079289c4; end: 107928a3b; -[SCNSnapMapsSdkResolveContentObjectCallback initWithCpp:] */

undefined1 * FUN_1079289c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8e28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107928d10();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010726e9f8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107928d48; end: 107928d77;  */

void FUN_107928d48(undefined8 *param_1)

{
  _objc_alloc(PTR_PTR_1126d56e8);
  func_0x00010c0630e0(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107928f54; end: 107928f5b; -[SCNSnapMapsSdkStyleMetadata revision] */

undefined8 FUN_107928f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079291a8; end: 1079291e7;  */

void FUN_1079291a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e2fc0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1079294a8; end: 1079294af; -[SCNSnapMapsSdkStyleRevision gitRepo] */

undefined8 FUN_1079294a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10792959c; end: 1079295a3; -[SCNSnapMapsSdkTileId y] */

undefined4 FUN_10792959c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1079297b4; end: 1079297c3;  */

void FUN_1079297b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107929af8; end: 107929b23;  */

void FUN_107929af8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107929bbc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107929ea8; end: 107929eab;  */

void FUN_107929ea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ebaa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10792a0d0; end: 10792a0eb;  */

void FUN_10792a0d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10792a420; end: 10792a447;  */

void FUN_10792a420(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10792a6d8; end: 10792a76b;  */

long FUN_10792a6d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ebba0;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10792a938; end: 10792a97b; -[SCNMapSdkResourceRequesterCacheDeleteCallback .cxx_construct] */

undefined8 * FUN_10792a938(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010792a97c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10792abf0; end: 10792abf7; -[SCNMapSdkResourceRequesterError retryAfter] */

undefined8 FUN_10792abf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


