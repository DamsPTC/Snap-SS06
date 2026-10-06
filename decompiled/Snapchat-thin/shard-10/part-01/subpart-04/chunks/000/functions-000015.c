/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079116b8; end: 107911727;  */

long FUN_1079116b8(undefined8 param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0xbff0000000000000;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  func_0x000107915848();
  func_0x000107911728();
  *(undefined8 *)(param_2 + 0x10) = param_1;
  if (puVar1 != puVar2) {
    *(undefined4 *)(param_2 + 4) = *puVar1;
    *(undefined4 *)(param_2 + 8) = puVar1[1];
  }
  *(bool *)param_2 = puVar1 != puVar2;
  return param_2;
}



/* Entry: 107911b44; end: 107911ba7;  */

void FUN_107911b44(ulong param_1)

{
  undefined1 in_ZR;
  int iVar1;
  ulong extraout_x8;
  ulong unaff_x20;
  ulong unaff_x23;
  
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



/* Entry: 107912030; end: 107912037;  */

void FUN_107912030(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [48];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  func_0x0001079136f4();
  func_0x000107907378();
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  func_0x000107913338();
  func_0x000107915ca8();
  puVar4 = auStack_70;
  func_0x000107913ab0(auStack_60);
  FUN_107911b44();
  func_0x000107915afc();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto code_r0x0001079120b8;
      func_0x000107912284(auStack_b8);
      func_0x000107916d80();
      func_0x000107913668();
      func_0x00010791227c();
    }
    else {
code_r0x0001079120b8:
      func_0x0001079142a0();
      func_0x000107911fd4();
    }
    func_0x000107914220();
    in_CY = false;
    if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          puVar3 = auStack_b8;
          func_0x000107912284();
          puStack_50 = puVar3;
          puStack_48 = puVar4;
          func_0x000107913a9c(&puStack_50);
          func_0x00010791227c();
          func_0x000107913a88(&puStack_50);
          func_0x00010791227c();
          goto code_r0x000107912148;
        }
      }
    }
    func_0x000107914290();
    func_0x000107911fd4();
    func_0x0001079142b0();
    func_0x000107911fd4();
  }
code_r0x000107912148:
  func_0x000107915a78();
  if ((bool)in_ZR) {
    unaff_x21 = lStack_80 - lStack_88;
code_r0x0001079121c0:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x0001079121c8;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107914210(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x0001079147a8(&lStack_88);
      func_0x0001079142e0();
      func_0x000107911fd4();
      goto code_r0x0001079121c0;
    }
    puVar3 = auStack_100;
    func_0x000107912284();
    puStack_50 = puVar3;
    puStack_48 = puVar4;
    func_0x000107914aa0(&puStack_50,&lStack_88,auStack_100);
    func_0x00010791227c();
    func_0x000107913a4c(&puStack_50);
    func_0x00010791227c();
code_r0x0001079121c8:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107914200(), (bool)uVar2)) {
      func_0x000107913cc4(auStack_60,&lStack_88);
      func_0x00010791227c();
      goto code_r0x0001079121f4;
    }
  }
  func_0x0001079154ec(&lStack_88);
code_r0x0001079121f4:
  func_0x0001079141f0();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar1)) {
    func_0x000107913a60(auStack_70);
    func_0x00010791227c();
  }
  else {
    func_0x0001079142f0();
    func_0x000107911fd4();
  }
  func_0x000107917268();
  func_0x0001079171a8();
  func_0x000107916c40();
  func_0x0001079172a4();
  func_0x000107917348();
  func_0x000107916d78();
  return;
}



/* Entry: 1079124d8; end: 1079125b7;  */

void FUN_1079124d8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x21;
  long lVar3;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  func_0x0001079189a8();
  func_0x000107914d70();
  func_0x000107903654();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar2 = *(long *)(unaff_x21 + 0x18);
  lVar1 = *(long *)(unaff_x21 + 0x20);
  lVar3 = lVar1 - lVar2;
  if (lVar3 != 0) {
    func_0x0001079036ac((undefined8 *)(param_1 + 0x18),lVar3 / 0x18);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000010 = unaff_x19 + 0x28;
    in_stack_00000018 = &stack0x00000030;
    in_stack_00000020 = &stack0x00000038;
    in_stack_00000028 = 0;
    in_stack_00000030 = lVar3;
    for (; in_stack_00000038 = lVar3, lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      func_0x000107914e28();
      func_0x000107903654();
      lVar3 = in_stack_00000038 + 0x18;
    }
    in_stack_00000028 = 1;
    FUN_107903598(&stack0x00000010);
    *(long *)(unaff_x19 + 0x20) = lVar3;
  }
  func_0x000107914e8c();
  func_0x0001079036dc();
  return;
}



/* Entry: 107912b44; end: 107912b4f;  */

void FUN_107912b44(undefined8 param_1,int param_2)

{
  ulong unaff_x20;
  
  func_0x000107914d64(param_1,param_2 << 3 | 2);
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



/* Entry: 107912dd0; end: 107912e37;  */

void FUN_107912dd0(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  func_0x000107914d64();
  *param_1 = *param_2;
  param_1[1] = (long)param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = *param_2;
  lVar2 = (long)*(char *)(lVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  unaff_x20[2] = lVar2;
  FUN_107912b44(lVar1,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(*unaff_x20,5,0);
  lVar1 = (long)*(char *)(*unaff_x20 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(*unaff_x20 + 8);
  }
  unaff_x20[3] = lVar1;
  return;
}



/* Entry: 107912f54; end: 107912f83;  */

long * FUN_107912f54(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107903168(param_1);
    func_0x000107915b14();
  }
  return param_1;
}



/* Entry: 107913254; end: 107913257;  */

void FUN_107913254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107917fd4; end: 107917ffb;  */

void FUN_107917fd4(void)

{
  long unaff_x23;
  undefined8 unaff_x25;
  
  func_0x00010790ef70();
  *(undefined8 *)(unaff_x23 + 0x18) = unaff_x25;
  return;
}



/* Entry: 107918b90; end: 107918b9b;  */

long FUN_107918b90(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109ea240;
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



/* Entry: 107918eb4; end: 107918fb3;  */

void FUN_107918eb4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ea3a8;
  puVar4[3] = &PTR_DAT_1109ea420;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109ea3f8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_107919108(&uStack_50);
  return;
}



/* Entry: 107919108; end: 107919133;  */

long FUN_107919108(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107919410; end: 107919577; -[SCNSnapMapsSdkCMAnimationOptions initWithMotionType:duration:velocity:minZoom:easing:completionHandler:] */

undefined1 *
FUN_107919410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f8d68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079195ec; end: 1079195f3;  */

void FUN_1079195ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1079199e8; end: 1079199ef; -[SCNSnapMapsSdkCMCameraOptions layerGate] */

undefined8 FUN_1079199e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107919cd8; end: 107919cdf; -[SCNSnapMapsSdkCMCameraViewport latLngBounds] */

undefined8 FUN_107919cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107919ef8; end: 107919f0b;  */

void FUN_107919ef8(void)

{
  func_0x00010791a01c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791a0dc; end: 10791a19f; -[SCNSnapMapsSdkCameraManager moveTo:animationOptions:] */

void FUN_10791a0dc(long param_1)

{
  code *extraout_x8;
  long *plVar1;
  long unaff_x22;
  
  func_0x00010791afb4();
  func_0x00010791afec();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010791b0a0();
  func_0x00010791b088();
  func_0x00010791b10c(*(undefined8 *)(*plVar1 + 0x10));
  (*extraout_x8)();
  func_0x00010791afa4();
  func_0x0001001148fc(unaff_x22 + 0x30);
  func_0x00010791afac();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791a67c; end: 10791a713; -[SCNSnapMapsSdkCameraManager moveBy:y:animationOptions:] */

void FUN_10791a67c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_b8 [120];
  
  func_0x00010791af3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791af90();
  (**(code **)(*plVar1 + 0x48))(param_1,param_2,plVar1,auStack_b8);
  func_0x00010791afa4();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791aafc; end: 10791ab6b; -[SCNSnapMapsSdkCameraManager getManualPitch] */

void FUN_10791aafc(undefined8 param_1,undefined1 param_2)

{
  long extraout_x8;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010791b058();
  (**(code **)(extraout_x8 + 0x88))();
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x0001079193a0(&uStack_30);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791ae04; end: 10791ae47; -[SCNSnapMapsSdkCameraManager .cxx_construct] */

undefined8 * FUN_10791ae04(undefined8 *param_1)

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
      func_0x00010791b008();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10791b24c; end: 10791b253; -[SCNSnapMapsSdkCofPrefetchDescriptor valueType] */

undefined8 FUN_10791b24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10791b468; end: 10791b4d7;  */

ulong FUN_10791b468(void)

{
  ulong unaff_x21;
  
  func_0x00010791b9d0();
  func_0x00010791b9f8();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba4c();
  func_0x00010bfc9620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791b9dc();
  func_0x0001005e7610();
  func_0x00010791ba14();
  func_0x00010791ba2c();
  return unaff_x21 & 0xffffffffff;
}



/* Entry: 10791b7d8; end: 10791b84f;  */

undefined1  [16] FUN_10791b7d8(undefined8 param_1,ulong param_2)

{
  undefined8 unaff_x21;
  undefined1 auVar1 [16];
  
  func_0x00010791b9d0();
  func_0x00010791b9f8();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba4c();
  func_0x00010bfc66c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791b9dc();
  func_0x00010011b600();
  func_0x00010791ba14();
  func_0x00010791ba2c();
  auVar1._8_8_ = param_2 & 0xff;
  auVar1._0_8_ = unaff_x21;
  return auVar1;
}



/* Entry: 10791bb7c; end: 10791bc7b;  */

void FUN_10791bb7c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ea7d0;
  puVar4[3] = &PTR_DAT_1109ea848;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109ea820;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x00010791bdb4(&uStack_50);
  return;
}



/* Entry: 10791bde0; end: 10791bdeb;  */

long FUN_10791bde0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea790;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791c134; end: 10791c1c3;  */

long FUN_10791c134(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109ea8b8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x00010791c214();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791c3e4; end: 10791c3ef;  */

long FUN_10791c3e4(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109ea9e0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x00010791c60c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791c620; end: 10791c6d7;  */

void FUN_10791c620(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1109eab18;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791c6d8);
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
    func_0x00010791ca10(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10791ca00; end: 10791ca0f;  */

void FUN_10791ca00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eab58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791cb80; end: 10791cb87; -[SCNSnapMapsSdkEdgeInsetsDouble bottom] */

undefined8 FUN_10791cb80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10791cdd0; end: 10791ce4f;  */

undefined8 FUN_10791cdd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010791d01c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f580(uVar2);
  _objc_release(param_2);
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 10791d0f4; end: 10791d0fb; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters width] */

undefined8 FUN_10791d0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10791d134; end: 10791d13b; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters renderCommandEncoder] */

undefined8 FUN_10791d134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10791d9b0; end: 10791d9b7; -[SCNSnapMapsSdkFeatureDescriptor feature] */

undefined8 FUN_10791d9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10791d9f0; end: 10791d9f7; -[SCNSnapMapsSdkFeatureDescriptor tileID] */

undefined8 FUN_10791d9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10791dd7c; end: 10791dd83; -[SCNSnapMapsSdkFontDescriptor fontData] */

undefined8 FUN_10791dd7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10791dfa8; end: 10791dfe3;  */

void FUN_10791dfa8(void)

{
  func_0x00010791e674();
  return;
}



/* Entry: 10791e55c; end: 10791e5b3;  */

void FUN_10791e55c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



/* Entry: 10791e730; end: 10791e737; -[SCNSnapMapsSdkGestureInfo tappedX] */

undefined4 FUN_10791e730(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10791e910; end: 10791e91b;  */

long FUN_10791e910(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109eaf00;
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



/* Entry: 10791ec18; end: 10791ec77; -[SCNSnapMapsSdkInitialViewportInfo initWithZoom:activeUserLocationAvailable:friendLocationsAvailable:] */

void FUN_10791ec18(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8db8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 10791ee60; end: 10791ee6b;  */

long FUN_10791ee60(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109eb028;
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



/* Entry: 10791f0a8; end: 10791f1a7;  */

void FUN_10791f0a8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eb180;
  puVar4[3] = &PTR_DAT_1109eb1f8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109eb1d0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x00010791f3f4(&uStack_50);
  return;
}



/* Entry: 10791f3e4; end: 10791f3f3;  */

void FUN_10791f3e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eb180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791f6e0; end: 10791f70b;  */

void FUN_10791f6e0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010791f7a4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791f9fc; end: 10791fb63; -[SCNSnapMapsSdkInspector enable:observer:] */

void FUN_10791f9fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_70 [16];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar3 = uVar1;
  func_0x00010c08fa60(uVar1);
  ppuStack_60 = &PTR_DAT_1109edbe0;
  uStack_58 = 0;
  uStack_48 = 0;
  func_0x00010006369c(&ppuStack_60,uVar2,uVar3);
  _objc_release(uVar1);
  func_0x00010791fecc(auStack_70,param_4);
  (**(code **)(*plVar4 + 0x10))(plVar4,&ppuStack_60,auStack_70);
  func_0x00010729f5a8(auStack_70);
  func_0x00010791fea4();
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10791fe00; end: 10791fe67;  */

void FUN_10791fe00(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5680;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010791fe68();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001072ac7b8(&uStack_30);
  return;
}



/* Entry: 1079200e8; end: 10792015b;  */

void FUN_1079200e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6380(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1079203f4; end: 107920403;  */

void FUN_1079203f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1079205e4; end: 1079205eb; -[SCNSnapMapsSdkLatLngDouble lat] */

undefined8 FUN_1079205e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079207d0; end: 1079208db; +[SCNSnapMapsSdkMapSdk getCofPrefetchDescriptors] */

void FUN_1079207d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  
  func_0x0001072a1dcc(&lStack_48);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lStack_40 - lStack_48 >> 5)
  ;
  _objc_retainAutoreleasedReturnValue();
  for (lVar3 = lStack_48; lVar3 != lStack_40; lVar3 = lVar3 + 0x20) {
    lVar2 = lVar3;
    func_0x00010791b120(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    func_0x000107922100();
  }
  func_0x00010bf51e00(puVar1);
  func_0x000107921fa0();
  func_0x000107286a38(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107920e6c; end: 107920ea7;  */

void FUN_107920e6c(void)

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
    func_0x00010791c21c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1079214c8; end: 107921547; -[SCNSnapMapsSdkMapSdk getResolvedStyleName:] */

void FUN_1079214c8(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_38 [24];
  
  func_0x0001079220b4();
  (**(code **)(extraout_x8 + 0x50))(auStack_38);
  puVar1 = auStack_38;
  func_0x0001001011a4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107922070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079218d4; end: 1079218e7;  */

void FUN_1079218d4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 107921ce0; end: 107921d1f;  */

void FUN_107921ce0(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x000107921d20(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1079222f4; end: 10792234b; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder getNativeThisPtr] */

void FUN_1079222f4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 107922760; end: 1079227e3; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder fontProvider:] */

void FUN_107922760(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107922b38();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107922bd0();
  func_0x000107920e30();
  func_0x000107922b58(*(undefined8 *)(*plVar1 + 0x50));
  func_0x0001072a8dec(auStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 107922ad0; end: 107922b37;  */

void FUN_107922ad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5688;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107922bc0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001072b0cc8(&uStack_30);
  return;
}



/* Entry: 107922e60; end: 107922f57;  */

void FUN_107922e60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  int iStack_40;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = param_2;
  func_0x00010793f764(param_2);
  func_0x000100291d50(&uStack_48,uVar2);
  func_0x00010b4d1758(param_2,uStack_48,iStack_40 - (int)uStack_48);
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126d5690);
  func_0x00010c008360();
  func_0x000107923038();
  func_0x000100100fec(&uStack_48);
  func_0x00010c0e48c0(uVar3);
  func_0x000107923024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 107923180; end: 10792327f; -[SCNSnapMapsSdkMapSdkSession initialize:mapSdkObserver:appTriggersDelegate:] */

void FUN_107923180(long param_1)

{
  long *plVar1;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [56];
  
  func_0x00010792689c();
  func_0x000107926640();
  func_0x0001079266e0();
  func_0x000107926820();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107923280(auStack_78);
  func_0x000107922c1c(auStack_88);
  func_0x0001079189d0(auStack_98);
  func_0x0001079268f8(*(undefined8 *)(*plVar1 + 0x18));
  func_0x0001072bb9d0(auStack_98);
  func_0x0001072bca58(auStack_88);
  func_0x00010793d6c4(auStack_78);
  func_0x0001079266a0();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 1079236b4; end: 1079237bf; -[SCNSnapMapsSdkMapSdkSession setParticleEffect:playOncePerMapSession:durationalObserver:imageLoader:] */

void FUN_1079236b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  func_0x000107926640();
  func_0x0001079266e0();
  func_0x000107926820();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001079266b0(auStack_58);
  func_0x000107927384(auStack_68,param_5);
  FUN_107927140(auStack_78,param_6);
  (**(code **)(*plVar1 + 0x50))(plVar1,auStack_58,param_4,auStack_68,auStack_78);
  func_0x0001072ba11c(auStack_78);
  func_0x0001072ba140(auStack_68);
  func_0x0001079267a0();
  func_0x0001079266a0();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 107923c24; end: 107923d83;  */

void FUN_107923c24(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 auStack_178 [11];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x000107926884();
  puVar1 = param_1;
  func_0x000107926274(param_1,param_2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x000107926780();
  func_0x0001079265c4();
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          func_0x00010792687c();
        }
        uVar4 = *(undefined8 *)(lStack_118 + (long)puVar6 * 8);
        func_0x00010792683c();
        func_0x00010791d13c(auStack_178,uVar4);
        func_0x000107926788();
        func_0x0001072ba220();
        puVar2 = auStack_178;
        func_0x000107932ce0();
        func_0x000107926734();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar1;
      } while (puVar6 < puVar1);
      func_0x0001079265c4();
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  lVar5 = 0;
  func_0x000107926620();
  func_0x000107926620();
  func_0x0001079266b8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107926620();
  func_0x0001072ba554(param_1);
  func_0x000107926620();
  func_0x0001079266d8();
  func_0x000107926550();
  func_0x0001079266e0();
  plVar3 = *(long **)(lVar5 + 0x18);
  func_0x0001079265ec();
  func_0x0001079267b4();
  func_0x000107926614(*(undefined8 *)(*plVar3 + 0x90));
  func_0x000107926754();
  func_0x0001079266e8();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 10792430c; end: 107924387; -[SCNSnapMapsSdkMapSdkSession getInputManager] */

void FUN_10792430c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001079266cc();
  func_0x00010792675c();
  FUN_10791f6e0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107926728();
  func_0x00010791f888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107924724; end: 1079247c7;  */

void FUN_107924724(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  int iStack_30;
  
  uVar1 = param_1;
  func_0x0001079312e0();
  func_0x000100291d50(&uStack_38,uVar1);
  func_0x00010b4d1758(param_1,uStack_38,iStack_30 - (int)uStack_38);
  func_0x0001079268ac();
  func_0x00010bf64a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126d56a0);
  func_0x0001079267f0();
  func_0x0001079265b8();
  func_0x000100100fec(&uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107924f64; end: 107925083;  */

void FUN_107924f64(undefined ***param_1,long param_2)

{
  ulong uVar1;
  undefined **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c08fa60(param_2);
    ppuStack_78 = &PTR_FUN_1109ed230;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    func_0x000107926794();
    func_0x0001079266a0();
    *param_1 = &PTR_FUN_1109ed230;
    param_1[1] = (undefined **)0x0;
    param_1[3] = (undefined **)0x0;
    param_1[2] = (undefined **)0x0;
    param_1[5] = (undefined **)0x0;
    param_1[4] = (undefined **)0x0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (param_1 != &ppuStack_78) {
      uVar1 = uStack_70;
      if ((uStack_70 & 1) != 0) {
        uVar1 = *(ulong *)(uStack_70 & 0xfffffffffffffffe);
      }
      if (uVar1 == 0) {
        func_0x000107926788();
        func_0x000107931990();
      }
      else {
        func_0x000107926788();
        func_0x000107931960();
      }
    }
    *(undefined1 *)(param_1 + 7) = 1;
    func_0x0001079317b8(&ppuStack_78);
  }
  func_0x000107926620();
  return;
}



/* Entry: 1079253e8; end: 1079254d7; -[SCNSnapMapsSdkMapSdkSession getGestureConfig] */

void FUN_1079253e8(void)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [48];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  puVar1 = auStack_70;
  func_0x0001079266cc();
  func_0x00010792675c();
  func_0x00010793f4c4(auStack_70);
  func_0x000100291d50(auStack_38,puVar1);
  func_0x000107926954();
  func_0x0001079268ac();
  func_0x00010bf64a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126d56a8);
  uStack_40 = 0;
  func_0x0001079267f0();
  func_0x0001079265b8();
  func_0x000107926864();
  func_0x00010793f34c(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107925aac; end: 107925b9f; -[SCNSnapMapsSdkMapSdkSession getDebugInfo] */

void FUN_107925aac(void)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  
  func_0x0001079266cc();
  func_0x000107926854();
  puVar1 = auStack_68;
  FUN_10794203c(puVar1);
  func_0x000100291d50(&uStack_38,puVar1);
  func_0x00010b4d1758(auStack_68,uStack_38,iStack_30 - (int)uStack_38);
  func_0x0001079268ac();
  func_0x00010bf64a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126d56b0);
  uStack_40 = 0;
  func_0x0001079267f0();
  func_0x0001079265b8();
  func_0x000107926864();
  func_0x000107941ef4(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107926174; end: 107926193;  */

void FUN_107926174(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x000107932ce0();
  }
  return;
}



/* Entry: 1079264fc; end: 107926507;  */

undefined8 * FUN_1079264fc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ecf60;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x0001072d8b20(param_1,param_2);
  return param_1;
}



/* Entry: 107926b54; end: 107926b93;  */

void FUN_107926b54(void)

{
  func_0x000107926dc4();
  return;
}



/* Entry: 107926e48; end: 107926f0b; -[SCNSnapMapsSdkMemoriesFetcherCallback onFetchedMemories:] */

void FUN_107926e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_107923c24(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  func_0x0001072ba554(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107927140; end: 107927197;  */

void FUN_107927140(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x00010bd471f8(&UNK_10f436919,&PTR____CFConstantStringClassReference_110ea5478);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107927184);
  (*pcVar1)();
}



/* Entry: 107927540; end: 107927553;  */

void FUN_107927540(void)

{
  func_0x000107927664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107927724; end: 10792779f; -[SCNSnapMapsSdkPlaceManager setHiddenPlaces:] */

void FUN_107927724(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107927b14();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107927b9c();
  func_0x000107927b34(*(undefined8 *)(*plVar1 + 0x10));
  func_0x000107927b58();
  func_0x000107927b40();
  return;
}



/* Entry: 107927a30; end: 107927aa3;  */

void FUN_107927a30(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109eb780;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107927b24();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_107927aa4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107927b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107927ce0; end: 10792803f; -[SCNSnapMapsSdkPublicUserInfoCallback onFetchedPublicUserInfo:] */

void FUN_107927ce0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined1 auStack_1a8 [72];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  long lStack_108;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar8 = *(long **)(param_1 + 0x18);
  _objc_retain(param_3);
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  lStack_1c0 = 0;
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    if (0x38e38e38e38e38e < uVar4) goto LAB_107927f80;
    func_0x000107928358(auStack_f0,uVar4,0,&uStack_1b0);
    FUN_10792829c(&lStack_1c0,auStack_f0);
    func_0x00010792844c(auStack_f0);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar13 = *plStack_150;
    do {
      uVar10 = 0;
      do {
        if (*plStack_150 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_158 + uVar10 * 8);
        _objc_retain(uVar11);
        uVar5 = uVar11;
        func_0x00010bf63640(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        uVar6 = uVar5;
        func_0x00010bf25f00(uVar5);
        uVar7 = uVar5;
        func_0x00010c08fa60(uVar5);
        func_0x0001072636c0(auStack_1a8);
        func_0x00010006369c(auStack_1a8,uVar6,uVar7);
        _objc_release(uVar5);
        if (uStack_1b8 < uStack_1b0) {
          func_0x0001079283d4(uStack_1b8,auStack_1a8);
          uVar12 = uStack_1b8 + 0x48;
        }
        else {
          lVar1 = (long)(uStack_1b8 - lStack_1c0) / 0x48;
          uVar12 = lVar1 + 1;
          if (0x38e38e38e38e38e < uVar12) {
            func_0x000107928288();
            goto LAB_107928010;
          }
          uVar2 = (long)(uStack_1b0 - lStack_1c0) / 0x48;
          uVar9 = uVar2 * 2;
          if (uVar9 < uVar12 || uVar9 - uVar12 == 0) {
            uVar9 = uVar12;
          }
          if (0x1c71c71c71c71c6 < uVar2) {
            uVar9 = 0x38e38e38e38e38e;
          }
          func_0x000107928358(auStack_118,uVar9,lVar1,&uStack_1b0);
          func_0x0001079283d4(lStack_108,auStack_1a8);
          lStack_108 = lStack_108 + 0x48;
          FUN_10792829c(&lStack_1c0,auStack_118);
          uVar12 = uStack_1b8;
          func_0x00010792844c(auStack_118);
        }
        uStack_1b8 = uVar12;
        func_0x0001079284c8();
        _objc_release(uVar11);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar4);
      uVar4 = param_3;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  func_0x0001079284a4();
  func_0x0001079284a4();
  (**(code **)(*plVar8 + 0x10))(plVar8,&lStack_1c0);
  func_0x0001079284c0();
  func_0x0001079284a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_107927f80:
  func_0x000107928288();
LAB_107928010:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107928014);
  (*pcVar3)();
}



/* Entry: 10792829c; end: 107928357;  */

void FUN_10792829c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x48) * 0x48;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    func_0x0001079283d4(lVar2,lVar3);
    lVar2 = lVar2 + 0x48;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    func_0x00010793be08(lVar4);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1079286a4; end: 1079286b7;  */

void FUN_1079286a4(void)

{
  func_0x00010792882c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107928884; end: 10792890f;  */

undefined8 FUN_107928884(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  func_0x00010c274140(param_2);
  func_0x00010c08e360(param_2);
  func_0x00010bf1fec0(param_2);
  func_0x00010c140820(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107928a3c; end: 107928b5f; -[SCNSnapMapsSdkResolveContentObjectCallback onContentObjectResolved:] */

void FUN_107928a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_38;
  
  _objc_retain(param_3);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar3 = uVar1;
  func_0x00010c08fa60(uVar1);
  ppuStack_60 = &PTR_DAT_1109ed730;
  uStack_58 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010006369c(&ppuStack_60,uVar2,uVar3);
  _objc_release(uVar1);
  (**(code **)(*plVar4 + 0x10))(plVar4,&ppuStack_60);
  func_0x000107936de0(&ppuStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 107928d78; end: 107928dc3; -[SCNSnapMapsSdkSize initWithWidth:height:] */

void FUN_107928d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8e30;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 107928f5c; end: 107928f8b; -[SCNSnapMapsSdkStyleMetadata .cxx_destruct] */

void FUN_107928f5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079291e8; end: 10792927b;  */

long FUN_1079291e8(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109eb930;
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



/* Entry: 1079294b0; end: 1079294b7; -[SCNSnapMapsSdkStyleRevision gitCommit] */

undefined8 FUN_1079294b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079295a4; end: 1079295ab; -[SCNSnapMapsSdkTileId z] */

long FUN_1079295a4(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 1079297c4; end: 107929883; -[SCNSnapMapsSdkUnitBezierDouble initWithP1:p2:] */

undefined1 *
FUN_1079297c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8e58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107929b24; end: 107929b77; -[SCNSnapMapsSdkUserMetadataManager .cxx_destruct] */

void FUN_107929b24(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eba00;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000107926360((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 107929eac; end: 107929ebf;  */

void FUN_107929eac(void)

{
  func_0x00010792a094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10792a0ec; end: 10792a163; -[SCNSnapMapsSdkViewportLogger initWithCpp:] */

undefined1 * FUN_10792a0ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f8e68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010792a420();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107926310(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10792a448; end: 10792a4ff;  */

void FUN_10792a448(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1109ebba0;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10792a500);
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
    func_0x00010792a77c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10792a76c; end: 10792a77b;  */

void FUN_10792a76c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ebbe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10792a97c; end: 10792a98b;  */

void FUN_10792a97c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10792abf8; end: 10792ac27; -[SCNMapSdkResourceRequesterError .cxx_destruct] */

void FUN_10792abf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10792b38c; end: 10792b393; -[SCNMapSdkResourceRequesterResource url] */

undefined8 FUN_10792b38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10792b3cc; end: 10792b3d3; -[SCNMapSdkResourceRequesterResource storagePolicy] */

undefined8 FUN_10792b3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10792b4d0; end: 10792b60b; -[SCNMapSdkResourceRequesterResourceRequester request:resource:callback:maxRetries:] */

undefined8
FUN_10792b4d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [312];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_3);
  func_0x00010792b924();
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_58,param_3);
  func_0x00010792ac28(auStack_190,param_4);
  func_0x00010792ba8c(auStack_1a0,param_5);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_58,auStack_190,auStack_1a0,param_6);
  func_0x00010792b938();
  func_0x0001072d59ac(auStack_190);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  _objc_release(param_5);
  func_0x00010792b8e8();
  func_0x00010792b8f0();
  return param_6;
}



/* Entry: 10792b950; end: 10792b9c7; -[SCNMapSdkResourceRequesterResourceRequesterCallback initWithCpp:] */

undefined1 * FUN_10792b950(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f8e90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010792bbd4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001072d6568(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10792be8c; end: 10792bf5b;  */

undefined4 *
FUN_10792be8c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 *param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  func_0x00010792bf5c(param_1 + 4,param_4);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x12) = param_5;
  *(undefined1 *)((long)param_1 + 0x49) = param_6;
  *(undefined1 *)((long)param_1 + 0x4a) = param_7;
  *(undefined8 *)(param_1 + 0x14) = param_9;
  *(undefined8 *)(param_1 + 0x16) = param_10;
  *(undefined8 *)(param_1 + 0x1a) = param_12;
  *(undefined8 *)(param_1 + 0x18) = param_11;
  *(undefined8 *)(param_1 + 0x1c) = param_13;
  *(undefined8 *)(param_1 + 0x1e) = param_14;
  *(undefined1 *)(param_1 + 0x26) = 0;
  if (*(char *)(param_15 + 3) == '\x01') {
    uVar2 = param_15[1];
    uVar1 = *param_15;
    *(undefined8 *)(param_1 + 0x24) = param_15[2];
    *(undefined8 *)(param_1 + 0x22) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    param_15[1] = 0;
    param_15[2] = 0;
    *param_15 = 0;
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  return param_1;
}



/* Entry: 10792c16c; end: 10792c173; -[SCNMapSdkResourceRequesterResponse mustRevalidate] */

undefined1 FUN_10792c16c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}


