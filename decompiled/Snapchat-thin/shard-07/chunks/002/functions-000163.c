/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052fdad8; end: 1052fdc23;  */

void FUN_1052fdad8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126b7258;
  _objc_alloc(PTR_PTR_1126b7258);
  lVar3 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x18;
  func_0x0001001011a4(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x40);
  for (lVar8 = *(long *)(param_1 + 0x38); lVar8 != lVar1; lVar8 = lVar8 + 0x20) {
    lVar6 = lVar8;
    FUN_1052fef7c(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5,param_2,lVar6);
    _objc_release(lVar6);
  }
  func_0x00010bf51e00(puVar5);
  func_0x0001052fe0b4();
  func_0x00010c03ef00(puVar2,param_2,lVar3,lVar4,uVar7,puVar5);
  func_0x0001052fe09c();
  func_0x0001052fe078();
  func_0x0001052fe05c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052fdc24; end: 1052fdc8f;  */

void FUN_1052fdc24(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      FUN_1052fdc90();
      func_0x0001052fe080();
      __Unwind_Resume(param_1);
      pcVar1 = "vector";
      func_0x000104bd47e8();
      lVar2 = param_2[1] + (*(long *)pcVar1 - *(long *)((long)pcVar1 + 8));
      FUN_1052fddac((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2)
      ;
      param_2[1] = lVar2;
      lVar2 = *(long *)pcVar1;
      *(long *)((long)pcVar1 + 8) = lVar2;
      *(undefined8 *)pcVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 8);
      *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
      param_2[2] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 0x10);
      *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_1052fdd24(auStack_48,param_2,param_1[1] - *param_1 >> 5);
    func_0x0001052fe0a8();
    func_0x0001052fe080();
  }
  return;
}



/* Entry: 1052fdc90; end: 1052fdca3;  */

void FUN_1052fdc90(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  lVar2 = param_2[1] + (*(long *)pcVar1 - *(long *)((long)pcVar1 + 8));
  FUN_1052fddac((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2);
  param_2[1] = lVar2;
  lVar2 = *(long *)pcVar1;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(undefined8 *)pcVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 8);
  *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
  param_2[2] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 0x10);
  *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1052fdca4; end: 1052fdd23;  */

void FUN_1052fdca4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1052fddac(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1052fdd24; end: 1052fdd8f;  */

long * FUN_1052fdd24(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052fdd6c();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1052fdd90; end: 1052fddab;  */

void FUN_1052fdd90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 4) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    puStack_38[2] = puVar1[2];
    puStack_38[1] = uVar3;
    *puStack_38 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puStack_38[3] = puVar1[3];
    puStack_38 = puStack_38 + 4;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
  FUN_1052fde48(&uStack_60);
  return;
}



/* Entry: 1052fddac; end: 1052fde47;  */

void FUN_1052fddac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 4) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    puStack_28[2] = puVar1[2];
    puStack_28[1] = uVar3;
    *puStack_28 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puStack_28[3] = puVar1[3];
    puStack_28 = puStack_28 + 4;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
  FUN_1052fde48(&uStack_50);
  return;
}



/* Entry: 1052fde48; end: 1052fde77;  */

long FUN_1052fde48(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052fde78(param_1);
  }
  return param_1;
}



/* Entry: 1052fde78; end: 1052fde97;  */

void FUN_1052fde78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1052fde98; end: 1052fdef7;  */

void FUN_1052fde98(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1052fdef8; end: 1052fdeff;  */

void FUN_1052fdef8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1052fdf00; end: 1052fdf97;  */

void FUN_1052fdf00(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1052fdf98; end: 1052fe05b;  */

long * FUN_1052fdf98(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  uVar1 = (param_1[1] - *param_1 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar2 = param_1[2] - *param_1;
    uVar3 = (long)uVar2 >> 4;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar2) {
      uVar3 = 0x7ffffffffffffff;
    }
    FUN_1052fdd24(auStack_48,uVar3);
    uVar6 = param_2[1];
    uVar5 = *param_2;
    puStack_38[2] = param_2[2];
    puStack_38[1] = uVar6;
    *puStack_38 = uVar5;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puStack_38[3] = param_2[3];
    puStack_38 = puStack_38 + 4;
    func_0x0001052fe0a8();
    plVar4 = (long *)param_1[1];
    func_0x0001052fe080();
    return plVar4;
  }
  FUN_1052fdc90();
  func_0x0001052fe080();
  __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return param_1;
}



/* Entry: 1052fe05c; end: 1052fe0bb;  */

void FUN_1052fe05c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052fe0bc; end: 1052fe19f;  */

void FUN_1052fe0bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [56];
  undefined1 auStack_90 [80];
  
  _objc_retain();
  func_0x00010c134680(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1052fd7f8(auStack_90);
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1052fe2e8(auStack_d0);
  FUN_1052fe238(param_1,auStack_90,auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  _objc_release(param_2);
  func_0x0001052fd1e8(auStack_90);
  func_0x0001052fe2e0();
  func_0x0001052fe2d8();
  return;
}



/* Entry: 1052fe1a0; end: 1052fe237;  */

void FUN_1052fe1a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b7260;
  _objc_alloc(PTR_PTR_1126b7260);
  lVar2 = param_1;
  FUN_1052fdad8(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x50;
  FUN_1052fe3ec(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ed00(puVar1,param_2,lVar2,param_1);
  func_0x0001052fe2e0();
  func_0x0001052fe2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052fe238; end: 1052fe27f;  */

void FUN_1052fe238(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1052fe280();
  *(undefined1 *)(param_1 + 0x50) = *param_3;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  return;
}



/* Entry: 1052fe280; end: 1052fe2e7;  */

void FUN_1052fe280(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



/* Entry: 1052fe2e8; end: 1052fe3eb;  */

void FUN_1052fe2e8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c261740();
  uVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_68);
  func_0x00010bf89000(param_3);
  uVar3 = param_3;
  func_0x00010c142520();
  uVar4 = param_3;
  func_0x00010c270aa0();
  func_0x00010bf8b340();
  *param_1 = (char)uVar1;
  *(undefined8 *)(param_1 + 0x10) = uStack_60;
  *(undefined8 *)(param_1 + 8) = uStack_68;
  *(undefined8 *)(param_1 + 0x18) = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  _objc_release(uVar2);
  FUN_1052fe470();
  return;
}



/* Entry: 1052fe3ec; end: 1052fe46f;  */

void FUN_1052fe3ec(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar2 = PTR_PTR_1126b7268;
  _objc_alloc(PTR_PTR_1126b7268);
  uVar1 = *param_1;
  puVar3 = param_1 + 8;
  func_0x0001001011a4(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f400(*(undefined8 *)(param_1 + 0x20),puVar2,param_2,uVar1,puVar3,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  FUN_1052fe470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052fe470; end: 1052fe477;  */

void FUN_1052fe470(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052fe478; end: 1052fe4ef; -[SCNSpeedTestSpeedTestService initWithCpp:] */

undefined1 * FUN_1052fe478(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e7710;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001052fee68();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1052febc0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052fe4f0; end: 1052fe60f; +[SCNSpeedTestSpeedTestService createInstance:] */

void FUN_1052fe4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  undefined ***pppuVar1;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  func_0x0001052feeb8();
  func_0x0001009d8890(&lStack_48,param_3);
  FUN_1052ff458(&lStack_58,&lStack_48);
  func_0x0001009d8b30(&lStack_48);
  if (lStack_58 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    lStack_40 = lStack_50;
    ppuStack_38 = &PTR_DAT_110877430;
    lStack_48 = lStack_58;
    if (lStack_50 != 0) {
      do {
        func_0x0001052fee68();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = &ppuStack_38;
    func_0x00010015c218(pppuVar1,&lStack_48,FUN_1052feb4c);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_48);
  }
  FUN_1052febc0(&lStack_58);
  func_0x0001052fee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 1052fe610; end: 1052fe957; -[SCNSpeedTestSpeedTestService runSpeedTest:callback:] */

void FUN_1052fe610(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [80];
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
  func_0x0001052feeb8();
  _objc_retain(param_4);
  plVar7 = *(long **)(param_1 + 0x18);
  _objc_retain(param_3);
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  lStack_1e0 = 0;
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    if (0x333333333333333 < uVar4) goto LAB_1052fe88c;
    FUN_1052fecfc(auStack_f0,uVar4,0,&uStack_1d0);
    FUN_1052febfc(&lStack_1e0,auStack_f0);
    func_0x0001052fee18(auStack_f0);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uVar4 = param_3;
  _objc_retain();
  func_0x0001052fee78();
  if (uVar4 != 0) {
    lVar11 = *plStack_150;
    do {
      uVar8 = 0;
      do {
        if (*plStack_150 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(ulong *)(lStack_158 + uVar8 * 8);
        _objc_retain(uVar10);
        FUN_1052fd7f8(auStack_1b0,uVar10);
        if (uStack_1d8 < uStack_1d0) {
          FUN_1052fe280(uStack_1d8,auStack_1b0);
          uVar9 = uStack_1d8 + 0x50;
        }
        else {
          lVar1 = (long)(uStack_1d8 - lStack_1e0) / 0x50;
          uVar9 = lVar1 + 1;
          if (0x333333333333333 < uVar9) {
            FUN_1052febe8();
            goto LAB_1052fe920;
          }
          uVar2 = (long)(uStack_1d0 - lStack_1e0) / 0x50;
          uVar6 = uVar2 * 2;
          if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
            uVar6 = uVar9;
          }
          if (0x199999999999998 < uVar2) {
            uVar6 = 0x333333333333333;
          }
          FUN_1052fecfc(auStack_118,uVar6,lVar1,&uStack_1d0);
          FUN_1052fe280(lStack_108,auStack_1b0);
          lStack_108 = lStack_108 + 0x50;
          FUN_1052febfc(&lStack_1e0,auStack_118);
          uVar9 = uStack_1d8;
          func_0x0001052fee18(auStack_118);
        }
        uStack_1d8 = uVar9;
        func_0x0001052fd1e8(auStack_1b0);
        _objc_release();
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
      func_0x0001052fee78();
      uVar4 = uVar10;
    } while (uVar10 != 0);
  }
  func_0x0001052fee60();
  func_0x0001052fee60();
  FUN_1052fd03c(auStack_f0,param_4);
  (**(code **)(*plVar7 + 0x10))(auStack_1c8,plVar7,&lStack_1e0,auStack_f0);
  func_0x0001052fd708(auStack_f0);
  func_0x0001052feea4();
  puVar5 = auStack_1c8;
  func_0x0001001011a4(puVar5);
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  _objc_release(param_4);
  func_0x0001052fee60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
LAB_1052fe88c:
  FUN_1052febe8();
LAB_1052fe920:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1052fe924);
  (*pcVar3)();
}



/* Entry: 1052fe958; end: 1052fea07; -[SCNSpeedTestSpeedTestService cancelSpeedTest:] */

void FUN_1052fe958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x0001052feeb8();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0001052fee60();
  return;
}



/* Entry: 1052fea08; end: 1052fea5b; -[SCNSpeedTestSpeedTestService .cxx_destruct] */

void FUN_1052fea08(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110877430;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1052febc0((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1052fea5c; end: 1052feb0b; -[SCNSpeedTestSpeedTestService .cxx_construct] */

undefined8 * FUN_1052fea5c(undefined8 *param_1)

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
      func_0x0001052fee68();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1052feb0c; end: 1052feb13;  */

void FUN_1052feb0c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x50;
    func_0x0001052fd1e8();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1052feb14; end: 1052feb4b;  */

void FUN_1052feb14(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x50;
    func_0x0001052fd1e8();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1052feb4c; end: 1052febbf;  */

void FUN_1052feb4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b7270;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001052fee68();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1052febc0(&uStack_30);
  return;
}



/* Entry: 1052febc0; end: 1052febe7;  */

long FUN_1052febc0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052febe8; end: 1052febfb;  */

void FUN_1052febe8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar4 = *plVar2;
  lVar1 = plVar2[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x50) * 0x50;
  plStack_80 = plVar2 + 2;
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  lStack_58 = lVar5;
  lStack_60 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x50) {
    FUN_1052fe280(lStack_58,lVar3);
    lStack_58 = lStack_58 + 0x50;
  }
  uStack_68 = 1;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x50) {
    func_0x0001052fd1e8(lVar4);
  }
  FUN_1052fed98(&plStack_80);
  param_2[1] = lVar5;
  lVar3 = *plVar2;
  plVar2[1] = lVar3;
  *plVar2 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1052febfc; end: 1052fecfb;  */

void FUN_1052febfc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar4 = param_2[1] + ((lVar1 - lVar3) / -0x50) * 0x50;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar4;
  lStack_50 = lVar4;
  for (lVar2 = lVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1052fe280(lStack_48,lVar2);
    lStack_48 = lStack_48 + 0x50;
  }
  uStack_58 = 1;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x50) {
    func_0x0001052fd1e8(lVar3);
  }
  FUN_1052fed98(&plStack_70);
  param_2[1] = lVar4;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1052fecfc; end: 1052fed6b;  */

long * FUN_1052fecfc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052fed48();
  }
  lVar1 = param_4 + param_3 * 0x50;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x50;
  return param_1;
}



/* Entry: 1052fed6c; end: 1052fed97;  */

long FUN_1052fed6c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x333333333333334) {
    lVar1 = param_2 * 0x50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052fedc8(param_1);
  }
  return param_1;
}



/* Entry: 1052fed98; end: 1052fedc7;  */

long FUN_1052fed98(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052fedc8(param_1);
  }
  return param_1;
}



/* Entry: 1052fedc8; end: 1052fede7;  */

void FUN_1052fedc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x50;
    func_0x0001052fd1e8();
  }
  return;
}



/* Entry: 1052fede8; end: 1052fee5f;  */

void FUN_1052fede8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x50;
    func_0x0001052fd1e8();
  }
  return;
}



/* Entry: 1052fee60; end: 1052feec7;  */

void FUN_1052fee60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052feec8; end: 1052fef7b;  */

void FUN_1052feec8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_48);
  func_0x00010bf25ee0();
  uVar1 = uStack_38;
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  param_1[2] = uVar1;
  param_1[3] = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(uVar2);
  FUN_1052feff0();
  return;
}



/* Entry: 1052fef7c; end: 1052fefef;  */

void FUN_1052fef7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b7278;
  _objc_alloc(PTR_PTR_1126b7278);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d580(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x18));
  FUN_1052feff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052feff0; end: 1052feff7;  */

void FUN_1052feff0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052feff8; end: 1052ff10f; -[SCNSpeedTestSpeedTestRequest initWithRequestId:downloadURL:timeoutMs:phases:] */

undefined1 *
FUN_1052feff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e7718;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_1052ff16c(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_1052ff16c(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_1052ff16c(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052ff110; end: 1052ff117; -[SCNSpeedTestSpeedTestRequest requestId] */

undefined8 FUN_1052ff110(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052ff118; end: 1052ff11f; -[SCNSpeedTestSpeedTestRequest downloadURL] */

undefined8 FUN_1052ff118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052ff120; end: 1052ff127; -[SCNSpeedTestSpeedTestRequest timeoutMs] */

undefined8 FUN_1052ff120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052ff128; end: 1052ff12f; -[SCNSpeedTestSpeedTestRequest phases] */

undefined8 FUN_1052ff128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052ff130; end: 1052ff16b; -[SCNSpeedTestSpeedTestRequest .cxx_destruct] */

void FUN_1052ff130(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052ff16c; end: 1052ff173;  */

void FUN_1052ff16c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052ff174; end: 1052ff233; -[SCNSpeedTestSpeedTestResponse initWithRequest:result:] */

undefined1 *
FUN_1052ff174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7720;
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



/* Entry: 1052ff234; end: 1052ff23b; -[SCNSpeedTestSpeedTestResponse request] */

undefined8 FUN_1052ff234(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052ff23c; end: 1052ff243; -[SCNSpeedTestSpeedTestResponse result] */

undefined8 FUN_1052ff23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052ff244; end: 1052ff273; -[SCNSpeedTestSpeedTestResponse .cxx_destruct] */

void FUN_1052ff244(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052ff274; end: 1052ff353; -[SCNSpeedTestSpeedTestResult initWithSuccess:errorMessage:downloadSpeedMbps:rttMs:timestampMs:durationMs:] */

undefined1 *
FUN_1052ff274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e7728;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1052ff354; end: 1052ff35b; -[SCNSpeedTestSpeedTestResult success] */

undefined1 FUN_1052ff354(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1052ff35c; end: 1052ff363; -[SCNSpeedTestSpeedTestResult errorMessage] */

undefined8 FUN_1052ff35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052ff364; end: 1052ff36b; -[SCNSpeedTestSpeedTestResult downloadSpeedMbps] */

undefined8 FUN_1052ff364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052ff36c; end: 1052ff373; -[SCNSpeedTestSpeedTestResult rttMs] */

undefined8 FUN_1052ff36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052ff374; end: 1052ff37b; -[SCNSpeedTestSpeedTestResult timestampMs] */

undefined8 FUN_1052ff374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1052ff37c; end: 1052ff383; -[SCNSpeedTestSpeedTestResult durationMs] */

undefined8 FUN_1052ff37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1052ff384; end: 1052ff38f; -[SCNSpeedTestSpeedTestResult .cxx_destruct] */

void FUN_1052ff384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1052ff390; end: 1052ff43b; -[SCNSpeedTestTestPhase initWithName:byteSize:] */

undefined1 *
FUN_1052ff390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052ff43c; end: 1052ff443; -[SCNSpeedTestTestPhase name] */

undefined8 FUN_1052ff43c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052ff444; end: 1052ff44b; -[SCNSpeedTestTestPhase byteSize] */

undefined8 FUN_1052ff444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052ff44c; end: 1052ff457; -[SCNSpeedTestTestPhase .cxx_destruct] */

void FUN_1052ff44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052ff458; end: 1052ff48f;  */

void FUN_1052ff458(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1052ff490(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_105301b68(&uStack_30);
  return;
}



/* Entry: 1052ff490; end: 1052ff50b;  */

void FUN_1052ff490(void)

{
  func_0x000100688af0();
  FUN_105301954();
  return;
}



/* Entry: 1052ff50c; end: 1052ff6d7;  */

undefined8 * FUN_1052ff50c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 extraout_x8;
  byte *pbVar7;
  code *extraout_x8_00;
  int extraout_w10;
  undefined8 uVar8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar5 = param_1;
  func_0x0001005765a8();
  uStack_48 = extraout_x8;
  func_0x00010530314c();
  *puVar5 = &PTR_FUN_110877450;
  uVar8 = *param_2;
  puVar5[4] = param_2[1];
  puVar5[3] = uVar8;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010044fc98();
  func_0x000100450688(auStack_78,1);
  puVar4 = puStack_68;
  puStack_68[2] = 0;
  *puStack_68 = &PTR_DAT_1107ea880;
  puStack_68[1] = 0;
  func_0x00010002b838(auStack_60,"speed_test_queue");
  func_0x00010028bc78(puVar4 + 3,auStack_60,6,puVar5,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  puVar4 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  puStack_90 = puVar4;
  puStack_98 = puVar4 + 3;
  func_0x000100450b64(auStack_78);
  func_0x0001004b5280(auStack_60,1);
  *puStack_50 = &PTR_FUN_110877c58;
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  puStack_50[3] = &PTR_DAT_110877ca8;
  puStack_50[4] = puVar4 + 3;
  puStack_50[5] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  puVar4 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x0001004b535c(auStack_60);
  param_1[5] = puVar4 + 3;
  param_1[6] = puVar4;
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x0001005544a0(&uStack_88);
  ppuVar6 = &puStack_98;
  func_0x000100450be4();
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0x32aaaba7;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  func_0x0001005766b4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100450be4(&puStack_98);
    func_0x0001009d8b30(puVar4 + 3);
    puVar5 = puVar4;
    FUN_105301d68();
    func_0x000105303034();
    puStack_c0 = puVar4;
    pcStack_a8 = FUN_1052ff6d8;
    pbVar7 = (byte *)(puVar5 + 7);
    *puVar5 = &PTR_FUN_110877450;
    do {
      bVar1 = *pbVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar7,0x10);
      if (bVar3) {
        *pbVar7 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuStack_b8 = ppuVar6;
    puStack_b0 = &stack0xfffffffffffffff0;
    if ((bVar1 & 1) != 0) {
      func_0x000105303180(auStack_d8);
      if (*(long *)(lStack_c8 + 0x18) != 0) {
        func_0x00010057663c();
        (*extraout_x8_00)();
        func_0x0001053030d8();
        func_0x000105301d8c(auStack_e8);
      }
      func_0x000105303108();
    }
    func_0x000105301d8c(puVar5 + 0x13);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5 + 0x10);
    __ZNSt3__15mutexD1Ev(puVar5 + 8);
    func_0x000100554470(puVar5 + 5);
    func_0x0001009d8b30(puVar5 + 3);
    FUN_105301d68(puVar5 + 1);
    return puVar5;
  }
  return param_1;
}



/* Entry: 1052ff6d8; end: 1052ff77f;  */

undefined8 * FUN_1052ff6d8(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  code *extraout_x8;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  pbVar4 = (byte *)(param_1 + 7);
  *param_1 = &PTR_FUN_110877450;
  do {
    bVar1 = *pbVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
    if (bVar3) {
      *pbVar4 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bVar1 & 1) != 0) {
    func_0x000105303180(auStack_38);
    if (*(long *)(lStack_28 + 0x18) != 0) {
      func_0x00010057663c();
      (*extraout_x8)();
      func_0x0001053030d8();
      func_0x000105301d8c(auStack_48);
    }
    func_0x000105303108();
  }
  func_0x000105301d8c(param_1 + 0x13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  func_0x000100554470(param_1 + 5);
  func_0x0001009d8b30(param_1 + 3);
  func_0x000105301d68(param_1 + 1);
  return param_1;
}



/* Entry: 1052ff780; end: 1052ff7c3;  */

void FUN_1052ff780(long param_1,long param_2)

{
  func_0x0001003b6f78();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 1052ff7c4; end: 1052ff7c7;  */

undefined8 * FUN_1052ff7c4(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  code *extraout_x8;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  pbVar4 = (byte *)(param_1 + 7);
  *param_1 = &PTR_FUN_110877450;
  do {
    bVar1 = *pbVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
    if (bVar3) {
      *pbVar4 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bVar1 & 1) != 0) {
    func_0x000105303180(auStack_38);
    if (*(long *)(lStack_28 + 0x18) != 0) {
      func_0x00010057663c();
      (*extraout_x8)();
      func_0x0001053030d8();
      func_0x000105301d8c(auStack_48);
    }
    func_0x000105303108();
  }
  func_0x000105301d8c(param_1 + 0x13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  func_0x000100554470(param_1 + 5);
  func_0x0001009d8b30(param_1 + 3);
  func_0x000105301d68(param_1 + 1);
  return param_1;
}



/* Entry: 1052ff7c8; end: 1052ff7db;  */

void FUN_1052ff7c8(void)

{
  FUN_1052ff6d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052ff7dc; end: 1052ffafb;  */

/* WARNING: Possible PIC construction at 0x0001052ffa0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001052ffa10) */

undefined8 *** FUN_1052ff7dc(undefined8 ***param_1,long param_2,undefined8 ***param_3,long *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 ***pppuVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 ***unaff_x19;
  undefined8 ***unaff_x20;
  undefined8 **ppuVar15;
  long *plVar16;
  undefined8 **ppuVar17;
  undefined1 *puVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 **ppuStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 uStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  pppuVar7 = &ppuStack_e0;
  puVar18 = &stack0xfffffffffffffff0;
  lVar10 = param_2;
  pppuVar12 = param_3;
  func_0x0001005765a8();
  pbVar1 = (byte *)(lVar10 + 0x38);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((bVar2 & 1) == 0) {
    ppuStack_a8 = (undefined8 **)((ulong)ppuStack_a8 & 0xffffffff00000000);
    uStack_68 = extraout_x8;
    FUN_105300f7c(&ppuStack_a8);
    pppuVar11 = &ppuStack_a8;
    func_0x0001052ff4ac();
    ppuStack_88 = pppuVar11;
    pppuStack_80 = pppuVar12;
    func_0x0001002a2640(param_1,&ppuStack_88);
    FUN_105301534(&ppuStack_a8);
    FUN_1052ff780(&ppuStack_88,param_2 + 0x40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pppuStack_78,param_1);
    pppuVar12 = &ppuStack_88;
    func_0x0001000df5a0(pppuVar12);
    ppuVar15 = *param_3;
    ppuVar3 = param_3[1];
    if (ppuVar15 == ppuVar3) {
      unaff_x20 = (undefined8 ***)*param_4;
      if (unaff_x20 != (undefined8 ***)0x0) {
        pcVar9 = "No requests provided";
        pppuVar12 = &ppuStack_88;
        unaff_x30 = 0x1052ffa10;
        goto code_r0x00010002b838;
      }
      *pbVar1 = 0;
      uVar8 = 1;
    }
    else {
      puVar13 = (undefined8 *)0x30;
      __Znwm();
      plVar16 = puVar13 + 1;
      *plVar16 = 0;
      puVar13[2] = 0;
      *puVar13 = &PTR_FUN_1108776a8;
      ppuVar17 = (undefined8 **)(puVar13 + 3);
      *ppuVar17 = (undefined8 *)0x0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      uVar14 = ((long)ppuVar3 - (long)ppuVar15) / 0x50;
      uStack_a0 = 0;
      ppuStack_a8 = ppuVar17;
      if (0x333333333333333 < uVar14) goto LAB_1052ffa64;
      pppuVar7 = (undefined8 ***)(puVar13 + 5);
      func_0x0001052fed48();
      puVar13[3] = pppuVar7;
      puVar13[4] = pppuVar7;
      puVar13[5] = pppuVar7 + uVar14 * 10;
      pppuStack_80 = &ppuStack_98;
      pppuStack_78 = &ppuStack_90;
      uStack_70 = 0;
      ppuStack_98 = pppuVar7;
      ppuStack_88 = (undefined8 **)(puVar13 + 5);
      for (; uVar8 = ppuVar15 == ppuVar3, ppuStack_90 = pppuVar7, !(bool)uVar8;
          ppuVar15 = ppuVar15 + 10) {
        FUN_105301648(pppuVar7,ppuVar15);
        pppuVar7 = (undefined8 ***)(ppuStack_90 + 10);
      }
      uStack_70 = 1;
      FUN_1052fed98(&ppuStack_88);
      puVar13[4] = pppuVar7;
      uStack_a0 = 1;
      FUN_105301dd4(&ppuStack_a8);
      lStack_c8 = param_4[1];
      lStack_d0 = *param_4;
      ppuStack_b8 = ppuVar17;
      puStack_b0 = puVar13;
      if (param_4[1] != 0) {
        do {
          func_0x000100576598();
        } while (extraout_w10 != 0);
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuStack_e0 = ppuVar17;
      puStack_d8 = puVar13;
      FUN_1052ffafc(param_2);
      func_0x000105303124();
      func_0x00010530307c();
      pppuVar12 = &ppuStack_b8;
      FUN_105301e0c(pppuVar12);
    }
    func_0x0001005766b4(uStack_68);
    if ((bool)uVar8) {
      return pppuVar12;
    }
  }
  else {
    func_0x0001005766b4(extraout_x8);
    if ((bool)in_ZR) {
      pcVar9 = "";
      pppuVar7 = (undefined8 ***)register0x00000008;
      pppuVar12 = param_1;
      param_1 = unaff_x19;
      puVar18 = unaff_x29;
code_r0x00010002b838:
      *(undefined8 ****)((long)pppuVar7 + -0x20) = unaff_x20;
      *(undefined8 ****)((long)pppuVar7 + -0x18) = param_1;
      *(undefined1 **)((long)pppuVar7 + -0x10) = puVar18;
      *(undefined8 *)((long)pppuVar7 + -8) = unaff_x30;
      func_0x00010002b82c(pppuVar12,pcVar9);
      func_0x000107c613d0(pcVar9);
      func_0x000107c60c50(unaff_x20,param_1,pcVar9);
      return unaff_x20;
    }
  }
  ___stack_chk_fail();
LAB_1052ffa64:
  FUN_1052febe8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1052ffa6c);
  (*pcVar6)();
}



/* Entry: 1052ffafc; end: 1053000a7;  */

/* WARNING: Removing unreachable block (ram,0x00010530008c) */
/* WARNING: Removing unreachable block (ram,0x000105300090) */

void FUN_1052ffafc(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                  long *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *unaff_x25;
  long lVar15;
  long *plVar16;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 **ppuStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 **ppuStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long *plStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [80];
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined1 uStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  func_0x0001005765a8();
  func_0x0001053031f0();
  uVar6 = !(bool)in_ZR || param_2 == param_3;
  if (!(bool)in_ZR || param_2 == param_3) {
    ppuVar7 = (undefined8 **)*param_5;
    if (ppuVar7 != (undefined8 **)0x0) {
      func_0x00010530315c();
      (*extraout_x8)();
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar6 = *(long *)(param_2 + 0x38) == *(long *)(param_2 + 0x40);
    plStack_218 = param_5;
    if ((bool)uVar6) {
      func_0x00010002b838(&puStack_138,"Quick Test (100KB)");
      lStack_d0 = lStack_128;
      plStack_d8 = puStack_130;
      puStack_e0 = puStack_138;
      puStack_130 = (undefined8 *)0x0;
      lStack_128 = 0;
      puStack_138 = (undefined8 *)0x0;
      lStack_c8 = 0x19000;
      func_0x00010002b838(&uStack_150,"Medium Test (1MB)");
      uStack_b8 = uStack_148;
      uStack_c0 = uStack_150;
      uStack_b0 = uStack_140;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_150 = 0;
      lStack_a8 = 0x100000;
      func_0x00010002b838(&uStack_168,"Full Test (10MB)");
      lStack_98 = uStack_160;
      lStack_a0 = uStack_168;
      lStack_90 = uStack_158;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_168 = 0;
      uStack_88 = 0xa00000;
      lStack_188 = 0;
      uStack_180 = 0;
      uStack_190 = 0;
      puStack_120 = &uStack_190;
      uStack_118 = 0;
      func_0x000105300ef4(&uStack_190,3);
      puStack_110 = &uStack_180;
      lStack_f0 = lStack_188;
      plStack_108 = &lStack_f0;
      plStack_100 = &lStack_e8;
      uStack_f8 = 0;
      lVar15 = lStack_188;
      for (lVar12 = 0; lStack_e8 = lVar15, lVar12 != 0x60; lVar12 = lVar12 + 0x20) {
        func_0x000105300f2c(lVar15,(long)&puStack_e0 + lVar12);
        lVar15 = lStack_e8 + 0x20;
      }
      uStack_f8 = 1;
      FUN_1052fde48(&puStack_110);
      uStack_118 = 1;
      lStack_188 = lVar15;
      func_0x000105300f50(&puStack_120);
      lVar12 = 0x40;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                  ((long)&puStack_e0 + lVar12);
        lVar12 = lVar12 + -0x20;
        uVar6 = lVar12 == -0x20;
      } while (!(bool)uVar6);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_168);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_138);
    }
    else {
      FUN_105301554(&uStack_190);
    }
    puVar8 = (undefined8 *)0x30;
    __Znwm();
    plVar16 = puVar8 + 1;
    *plVar16 = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_1108776f8;
    puVar1 = puVar8 + 3;
    FUN_105301554(puVar1,&uStack_190);
    puVar9 = &uStack_190;
    puStack_178 = puVar1;
    puStack_170 = puVar8;
    func_0x0001052fd218();
    lStack_230 = puVar8[3];
    lStack_228 = puVar8[4];
    __ZNSt3__16chrono12steady_clock3nowEv();
    puStack_110 = *(undefined8 **)(param_1 + 8);
    plStack_108 = *(long **)(param_1 + 0x10);
    if (plStack_108 == (long *)0x0) {
      plStack_d8 = (long *)0x0;
    }
    else {
      plVar10 = plStack_108 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plStack_d8 = plStack_108;
      } while (cVar4 != '\0');
    }
    lStack_d0 = param_2 + 0x50;
    unaff_x25 = &uStack_c0;
    lStack_220 = param_2;
    puStack_e0 = puStack_110;
    lStack_c8 = param_3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x25,param_4);
    lStack_a0 = plStack_218[1];
    lStack_a8 = *plStack_218;
    if (plStack_218[1] != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10 != 0);
    }
    lStack_90 = param_6[1];
    lStack_98 = *param_6;
    if (param_6[1] != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_00 != 0);
    }
    uStack_238 = param_4;
    func_0x0001053031c0();
    plVar14 = unaff_x25 + 1;
    *plVar14 = 0;
    unaff_x25[2] = 0;
    *unaff_x25 = &PTR_FUN_110877748;
    puVar13 = unaff_x25 + 3;
    *puVar13 = FUN_105301ea4;
    unaff_x25[4] = &PTR_FUN_110877788;
    plVar10 = (long *)0x58;
    __Znwm();
    *plVar10 = (long)puStack_e0;
    plVar10[1] = (long)plStack_d8;
    puStack_e0 = (undefined8 *)0x0;
    plStack_d8 = (undefined8 *)0x0;
    plVar10[3] = lStack_c8;
    plVar10[2] = lStack_d0;
    puStack_240 = puVar9;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar10 + 4,&uStack_c0)
    ;
    lVar12 = lStack_228 - lStack_230;
    plVar10[8] = lStack_a0;
    plVar10[7] = lStack_a8;
    lStack_a8 = 0;
    lStack_a0 = 0;
    plVar10[10] = lStack_90;
    plVar10[9] = lStack_98;
    lStack_98 = 0;
    lStack_90 = 0;
    unaff_x25[5] = plVar10;
    puStack_138 = puVar13;
    puStack_130 = unaff_x25;
    func_0x000105301fa4(0);
    FUN_10530012c(&puStack_e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar2 = puVar8[3];
    uVar3 = puVar8[4];
    puStack_1a0 = puVar1;
    puStack_198 = puVar8;
    FUN_105301648(auStack_1f0,lStack_220);
    lStack_1f8 = plStack_218[1];
    lStack_200 = *plStack_218;
    if (plStack_218[1] != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_01 != 0);
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuStack_250 = &puStack_210;
    lStack_248 = lVar12 >> 5;
    puStack_210 = puVar13;
    puStack_208 = unaff_x25;
    FUN_105300160(param_1,&puStack_1a0,uVar2,uVar3,auStack_1f0,puStack_240,uStack_238,&lStack_200);
    FUN_105301fb0(&puStack_210);
    func_0x0001052fd708(&lStack_200);
    func_0x0001052fd1e8(auStack_1f0);
    FUN_105301e60(&puStack_1a0);
    FUN_105301fb0(&puStack_138);
    func_0x000105301d68(&puStack_110);
    ppuVar7 = &puStack_178;
    FUN_105301e60();
  }
  func_0x0001005766b4(uStack_78);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x000105300f50(&puStack_120);
    lVar12 = -0x60;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x25);
      unaff_x25 = unaff_x25 + -4;
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != 0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_138);
    func_0x000105303034();
    uStack_270 = 1;
    pcStack_258 = FUN_1053000a8;
    ppuStack_268 = ppuVar7;
    puStack_260 = &stack0xfffffffffffffff0;
    func_0x0001005ad0c8();
    func_0x000105303180(auStack_288);
    if ((*(char *)(ppuVar7 + 7) == '\x01') &&
       (uVar11 = uStack_278, func_0x0001000e107c(uStack_278,1), (uVar11 & 1) != 0)) {
      if (*(long *)(uStack_278 + 0x18) != 0) {
        func_0x00010057663c();
        (*extraout_x8_00)();
        func_0x0001053030d8();
        func_0x000105301d8c(auStack_298);
      }
      func_0x000105303108();
      *(undefined1 *)(ppuVar7 + 7) = 0;
    }
    else {
      func_0x000105303108();
    }
    return;
  }
  return;
}



/* Entry: 1053000a8; end: 10530012b;  */

void FUN_1053000a8(void)

{
  ulong uVar1;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  ulong uStack_28;
  
  func_0x0001005ad0c8();
  func_0x000105303180(auStack_38);
  if ((*(char *)(unaff_x19 + 0x38) == '\x01') &&
     (uVar1 = uStack_28, func_0x0001000e107c(), (uVar1 & 1) != 0)) {
    if (*(long *)(uStack_28 + 0x18) != 0) {
      func_0x00010057663c();
      (*extraout_x8)();
      func_0x0001053030d8();
      func_0x000105301d8c(auStack_48);
    }
    func_0x000105303108();
    *(undefined1 *)(unaff_x19 + 0x38) = 0;
    return;
  }
  func_0x000105303108();
  return;
}



/* Entry: 10530012c; end: 10530015f;  */

undefined8 FUN_10530012c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_105301e0c(param_1 + 0x48);
  func_0x0001052fd708(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x000100554494();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 105300160; end: 105300df3;  */

void FUN_105300160(long param_1,undefined8 *param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,long *param_8,undefined8 *param_9,
                  undefined8 param_10)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  long *plVar10;
  undefined8 **ppuVar11;
  long *plVar12;
  long lVar13;
  undefined8 uStack_540;
  long lStack_538;
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [32];
  undefined4 uStack_4f0;
  undefined1 auStack_4e8 [40];
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  undefined1 auStack_4a0 [40];
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [24];
  long alStack_440 [3];
  undefined1 auStack_428 [32];
  undefined4 uStack_408;
  undefined1 auStack_400 [40];
  undefined1 auStack_3d8 [24];
  undefined1 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [24];
  long lStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 **ppuStack_280;
  undefined8 **ppuStack_278;
  undefined8 **ppuStack_270;
  undefined8 **ppuStack_268;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 auStack_230 [16];
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 **ppuStack_200;
  undefined8 **ppuStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  code *pcStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 auStack_118 [3];
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *aplStack_98 [3];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  func_0x0001005765a8();
  func_0x0001053031f0();
  uVar5 = !(bool)in_ZR || param_3 == param_4;
  if ((bool)in_ZR && param_3 != param_4) {
    plVar10 = (long *)*param_8;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x28))
                (plVar10,param_7,((int)param_10 - (int)((ulong)(param_4 - param_3) >> 5)) + 1,
                 param_10,param_3,0,0);
    }
    lVar13 = *(long *)(param_3 + 0x18);
    func_0x00010002b838(&uStack_2d0,"Range");
    if (lVar13 < 2) {
      lVar13 = 1;
    }
    alStack_440[0] = lVar13 + -1;
    alStack_440[1] = 0;
    func_0x0001003a91d4("bytes=0-{}");
    func_0x0001003a9204(&uStack_2e8);
    uStack_190 = uStack_2c0;
    lStack_198 = uStack_2c8;
    uStack_1a0 = uStack_2d0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2c0 = 0;
    lStack_180 = uStack_2e0;
    lStack_188 = uStack_2e8;
    lStack_178 = uStack_2d8;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d8 = 0;
    func_0x00010002b838(&uStack_300,"Accept");
    func_0x00010002b838(&uStack_318,"*/*");
    uStack_168 = uStack_2f8;
    uStack_170 = uStack_300;
    uStack_160 = uStack_2f0;
    uStack_2f0 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_150 = uStack_310;
    uStack_158 = uStack_318;
    uStack_148 = uStack_308;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_308 = 0;
    func_0x00010002b838(&uStack_330,"User-Agent");
    func_0x00010002b838(&uStack_348,"Snap-SpeedTest/1.0");
    uStack_138 = uStack_328;
    uStack_140 = uStack_330;
    uStack_130 = uStack_320;
    uStack_320 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    lStack_120 = uStack_340;
    uStack_128 = uStack_348;
    auStack_118[0] = uStack_338;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_338 = 0;
    FUN_10530169c(auStack_2b8,&uStack_1a0,3);
    lVar13 = 0x60;
    do {
      func_0x0001005acd08((long)&uStack_1a0 + lVar13);
      lVar13 = lVar13 + -0x30;
      uVar5 = lVar13 == -0x30;
    } while (!(bool)uVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_348);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_330);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_318);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_300);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2d0);
    func_0x0001005acf78(&uStack_390,auStack_2b8);
    uStack_368 = uStack_388;
    uStack_370 = uStack_390;
    uStack_360 = uStack_380;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_390 = 0;
    uStack_358 = 0;
    func_0x0001005ad2a8(&uStack_390);
    auStack_3d8[0] = 0;
    uStack_3c0 = 0;
    puStack_3b8 = (undefined8 *)((ulong)puStack_3b8 & 0xffffffffffffff00);
    uStack_3a0 = 0;
    uStack_398 = 0x100000001;
    func_0x0001001148fc(auStack_3d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_458,param_5 + 0x18);
    func_0x00010067b9e4(auStack_478,&uStack_370);
    func_0x000105301808(auStack_4a0,&puStack_3b8);
    FUN_10530182c(alStack_440,auStack_458,auStack_478,6,auStack_4a0);
    func_0x0001001148fc(auStack_4a0);
    func_0x0001005ad2a8(auStack_478);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_458);
    lStack_198 = 0;
    uStack_1a0 = 0;
    FUN_105300df4(&uStack_4b0,&uStack_1a0);
    func_0x0001000ff1ac(&uStack_1a0);
    uStack_4c0 = *(undefined8 *)(param_1 + 8);
    lStack_4b8 = *(long *)(param_1 + 0x10);
    if (lStack_4b8 == 0) {
      lStack_198 = 0;
    }
    else {
      plVar10 = (long *)(lStack_4b8 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        lStack_198 = lStack_4b8;
      } while (cVar2 != '\0');
    }
    lStack_188 = param_2[1];
    uStack_190 = *param_2;
    uStack_1a0 = uStack_4c0;
    if (param_2[1] != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_00 != 0);
    }
    lStack_180 = param_3 + 0x20;
    lStack_178 = param_4;
    FUN_105301648(&uStack_170,param_5);
    lStack_120 = param_6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_118,param_7);
    lStack_f8 = param_8[1];
    lStack_100 = *param_8;
    if (param_8[1] != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_01 != 0);
    }
    lStack_e8 = param_9[1];
    uStack_f0 = *param_9;
    if (param_9[1] != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_02 != 0);
    }
    uStack_e0 = param_10;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_528,alStack_440);
    func_0x00010067b9e4(auStack_510,auStack_428);
    uStack_4f0 = uStack_408;
    func_0x000105301808(auStack_4e8,auStack_400);
    lStack_538 = lStack_4a8;
    uStack_540 = uStack_4b0;
    if (lStack_4a8 != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_03 != 0);
    }
    pcStack_1d0 = FUN_10530266c;
    ppuStack_1c8 = &PTR_FUN_110877998;
    puVar6 = (undefined8 *)0xc8;
    __Znwm();
    *puVar6 = uStack_1a0;
    puVar6[1] = lStack_198;
    if (lStack_198 != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_04 != 0);
    }
    puVar6[3] = lStack_188;
    puVar6[2] = uStack_190;
    if (lStack_188 != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_05 != 0);
    }
    puVar6[5] = lStack_178;
    puVar6[4] = lStack_180;
    FUN_105301648(puVar6 + 6,&uStack_170);
    puVar6[0x10] = lStack_120;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar6 + 0x11,auStack_118);
    puVar6[0x15] = lStack_f8;
    puVar6[0x14] = lStack_100;
    if (lStack_f8 != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_06 != 0);
    }
    puVar6[0x17] = lStack_e8;
    puVar6[0x16] = uStack_f0;
    if (lStack_e8 != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_07 != 0);
    }
    puVar6[0x18] = uStack_e0;
    puStack_d8 = (undefined8 *)((ulong)puStack_d8 & 0xffffffffffffff00);
    ppuVar7 = &puStack_d8;
    puStack_1c0 = puVar6;
    func_0x000100688afc(&puStack_1e0);
    func_0x0001053031c0();
    ppuVar7[1] = (undefined8 *)0x0;
    ppuVar7[2] = (undefined8 *)0x0;
    *ppuVar7 = &PTR_DAT_1108779c0;
    ppuVar4 = ppuStack_1c8;
    ppuVar11 = ppuVar7 + 3;
    *ppuVar11 = (undefined8 *)pcStack_1d0;
    (*(code *)ppuVar4[2])(ppuVar7 + 4,&ppuStack_1c8);
    puVar1 = puStack_1d8;
    puVar6 = puStack_1e0;
    puStack_210 = puStack_1e0;
    puStack_208 = puStack_1d8;
    ppuStack_200 = ppuVar11;
    ppuStack_1f8 = ppuVar7;
    ppuStack_1f0 = ppuVar11;
    ppuStack_1e8 = ppuVar7;
    if (puStack_1d8 != (undefined8 *)0x0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_08 != 0);
    }
    do {
      func_0x00010530313c();
    } while (extraout_w9 != 0);
    puVar8 = (undefined8 *)0x40;
    __Znwm();
    plVar12 = puVar8 + 1;
    *plVar12 = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_110877a10;
    puStack_290 = puVar6;
    puStack_288 = puVar1;
    puStack_208 = (undefined8 *)0x0;
    puStack_210 = (undefined8 *)0x0;
    ppuStack_200 = (undefined8 **)0x0;
    ppuStack_1f8 = (undefined8 **)0x0;
    puVar9 = (undefined8 *)0x28;
    ppuStack_280 = ppuVar11;
    ppuStack_278 = ppuVar7;
    __Znwm();
    *puVar9 = &PTR_FUN_110877a60;
    puVar9[1] = puVar6;
    puStack_288 = (undefined8 *)0x0;
    puStack_290 = (undefined8 *)0x0;
    puVar9[2] = puVar1;
    puVar9[3] = ppuVar11;
    puVar9[4] = ppuVar7;
    ppuStack_280 = (undefined8 **)0x0;
    ppuStack_278 = (undefined8 **)0x0;
    puVar6 = puVar8 + 3;
    *puVar6 = &PTR_DAT_110877af0;
    puVar8[7] = puVar9;
    puStack_c0 = (undefined8 *)0x0;
    FUN_105302c20(&puStack_d8);
    func_0x000105300ecc(&puStack_290);
    plVar10 = *(long **)(param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_220 = puVar6;
    puStack_218 = puVar8;
    puStack_d8 = puVar6;
    puStack_d0 = puVar8;
    (**(code **)(*plVar10 + 0x10))
              (auStack_230,plVar10,auStack_528,param_1 + 0x28,&puStack_d8,&uStack_540);
    func_0x000105302c94(&puStack_d8);
    func_0x000105303180();
    func_0x000105300e54((long)puStack_c8 + 0x18,auStack_230);
    func_0x0001000df5a0(&puStack_d8);
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    puStack_240 = puVar6;
    puStack_238 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_09 != 0);
      do {
        func_0x000100576598();
      } while (extraout_w10_10 != 0);
    }
    ppuStack_280 = (undefined8 **)puStack_1e0;
    ppuStack_278 = (undefined8 **)puStack_1d8;
    puStack_290 = puVar6;
    puStack_288 = puVar1;
    ppuStack_270 = ppuVar11;
    ppuStack_268 = ppuVar7;
    if (puStack_1d8 != (undefined8 *)0x0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_11 != 0);
    }
    do {
      func_0x00010530313c();
    } while (extraout_w9_00 != 0);
    puVar8 = (undefined8 *)0x40;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_110877b48;
    puStack_288 = (undefined8 *)0x0;
    puStack_290 = (undefined8 *)0x0;
    puStack_c8 = puStack_1e0;
    puStack_c0 = puStack_1d8;
    ppuStack_280 = (undefined8 **)0x0;
    ppuStack_278 = (undefined8 **)0x0;
    ppuStack_270 = (undefined8 **)0x0;
    ppuStack_268 = (undefined8 **)0x0;
    puVar9 = (undefined8 *)0x38;
    puStack_d8 = puVar6;
    puStack_d0 = puVar1;
    ppuStack_b8 = ppuVar11;
    ppuStack_b0 = ppuVar7;
    __Znwm();
    *puVar9 = &PTR_FUN_110877b98;
    puVar9[1] = puVar6;
    puStack_d8 = (undefined8 *)0x0;
    puStack_d0 = (undefined8 *)0x0;
    puVar9[2] = puVar1;
    puVar9[3] = puStack_1e0;
    puStack_c8 = (undefined8 *)0x0;
    puStack_c0 = (undefined8 *)0x0;
    puVar9[4] = puStack_1d8;
    puVar9[5] = ppuVar11;
    puVar9[6] = ppuVar7;
    ppuStack_b8 = (undefined8 **)0x0;
    ppuStack_b0 = (undefined8 **)0x0;
    puVar6 = puVar8 + 3;
    *puVar6 = &PTR_DAT_110877c18;
    puStack_80 = puVar9;
    FUN_105302f48(puVar8 + 4,aplStack_98);
    func_0x0001006393ec(aplStack_98);
    func_0x000105300ea0(&puStack_d8);
    puStack_250 = puVar6;
    puStack_248 = puVar8;
    func_0x000105300ea0(&puStack_290);
    puStack_d8 = puVar6;
    puStack_d0 = puVar8;
    do {
      func_0x00010530313c();
    } while (extraout_w9_01 != 0);
    func_0x00010530315c();
    (*extraout_x8_00)();
    func_0x000100576684(&puStack_d8);
    FUN_105302fd8(&puStack_250);
    FUN_105301d68(&puStack_240);
    func_0x000105301d8c(auStack_230);
    func_0x000105302c70(&puStack_220);
    func_0x000105300ecc(&puStack_210);
    FUN_105302928(&ppuStack_1f0);
    func_0x000100688f50(&puStack_1e0);
    func_0x0001005766a8(ppuStack_1c8);
    func_0x00010067c884(&uStack_540);
    func_0x0001053018c4(auStack_528);
    func_0x000105300e10(&uStack_1a0);
    FUN_105301d68(&uStack_4c0);
    FUN_105302648(&uStack_4b0);
    func_0x0001053018c4(alStack_440);
    func_0x0001001148fc(&puStack_3b8);
    func_0x0001005ad2a8(&uStack_370);
    func_0x0001005ad2a8(auStack_2b8);
    goto LAB_105300af0;
  }
  lStack_298 = param_8[1];
  lStack_2a0 = *param_8;
  if (param_8[1] != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  func_0x00010b4a1840(aplStack_98);
  if (aplStack_98[0] == (long *)0x0) {
    plVar10 = (long *)0x0;
LAB_105300a04:
    ppuStack_b0 = (undefined8 **)0x0;
  }
  else {
    plVar10 = aplStack_98[0];
    func_0x00010057663c();
    (*extraout_x8)();
    if (aplStack_98[0] == (long *)0x0) goto LAB_105300a04;
    (**(code **)(*aplStack_98[0] + 0x30))();
    ppuStack_b0 = (undefined8 **)aplStack_98[0];
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010002b838(&puStack_3b8,"");
  lStack_a8 = (long)aplStack_98[0] / 1000000;
  ppuStack_b8 = (undefined8 **)(double)(long)plVar10;
  puStack_d8 = (undefined8 *)CONCAT71(puStack_d8._1_7_,1);
  puStack_c8 = (undefined8 *)uStack_3b0;
  puStack_d0 = puStack_3b8;
  puStack_c0 = (undefined8 *)uStack_3a8;
  puStack_3b8 = (undefined8 *)0x0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  lStack_a0 = ((long)aplStack_98[0] - param_6) / 1000000;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3b8);
  FUN_105301648(alStack_440,param_5);
  func_0x0001053018f4(&puStack_290,&puStack_d8);
  FUN_1052fe238(&uStack_1a0,alStack_440,&puStack_290);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_288);
  func_0x0001052fd1e8(alStack_440);
  if (lStack_2a0 != 0) {
    func_0x00010057663c();
    (*extraout_x8_01)();
  }
  func_0x0001052fd1c0(&uStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_d0);
  func_0x000100610040(aplStack_98);
  func_0x0001052fd708(&lStack_2a0);
  (**(code **)*param_9)();
LAB_105300af0:
  func_0x0001005766b4(uStack_78);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000100610040(aplStack_98);
    func_0x0001052fd708(&lStack_2a0);
    func_0x000105303034();
    func_0x000100688af0();
    FUN_105301fd4();
    return;
  }
  return;
}



/* Entry: 105300df4; end: 105300e0f;  */

void FUN_105300df4(void)

{
  func_0x000100688af0();
  FUN_105301fd4();
  return;
}



/* Entry: 105300e10; end: 105300f7b;  */

undefined8 FUN_105300e10(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_105301fb0(param_1 + 0xb0);
  func_0x0001052fd708(param_1 + 0xa0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x0001052fd1e8(param_1 + 0x30);
  FUN_105301e60(param_1 + 0x10);
  func_0x000100554494();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 105300f7c; end: 105301033;  */

int * FUN_105300f7c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *param_1 = -1;
  iVar2 = 0xf2a2884;
  _open("/dev/urandom",0x1000000);
  *param_1 = iVar2;
  if (iVar2 != -1) {
    return param_1;
  }
  ___error();
  func_0x00010002b838(auStack_50,"open /dev/urandom");
  func_0x000105303188(auStack_38);
  FUN_105301034();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105301014);
  (*pcVar1)();
}



/* Entry: 105301034; end: 10530106f;  */

void FUN_105301034(void)

{
  ___cxa_allocate_exception(0x48);
  FUN_105301070();
  func_0x000105303064();
  func_0x0001053031a8();
  func_0x000105303044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 105301070; end: 10530107b;  */

void FUN_105301070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10530107c; end: 105301127;  */

undefined8 * FUN_10530107c(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined1 auVar1 [16];
  
  func_0x000105303110(&UNK_1108775c8);
  func_0x0001053010d4();
  param_1[6] = 0;
  param_1[7] = 0;
  func_0x0001053031dc();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x10;
  param_1[4] = extraout_x8 + 0x70;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_3[1];
  auVar1 = NEON_ext(*param_3,*param_3,8,1);
  param_1[7] = auVar1._8_8_;
  param_1[6] = auVar1._0_8_;
  return param_1;
}



/* Entry: 105301128; end: 105301187;  */

long FUN_105301128(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001053031c0();
  FUN_105301304();
  FUN_10530126c(lVar1 + 0x20,param_1 + 0x20);
  return lVar1;
}



/* Entry: 105301188; end: 1053011b7;  */

void FUN_105301188(void)

{
  ___cxa_allocate_exception(0x48);
  FUN_105301268();
  func_0x000105303064();
  func_0x0001053031a8();
  func_0x000105303044();
  func_0x0001053013fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053011b8; end: 1053011cb;  */

void FUN_1053011b8(void)

{
  func_0x0001053013fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053011cc; end: 1053011fb;  */

long FUN_1053011cc(long param_1)

{
  func_0x0001053010fc(param_1 + 0x18);
  __ZNSt13runtime_errorD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 1053011fc; end: 10530120f;  */

void FUN_1053011fc(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105301210; end: 105301233;  */

undefined8 FUN_105301210(undefined8 param_1)

{
  FUN_105301234();
  return param_1;
}



/* Entry: 105301234; end: 105301267;  */

void FUN_105301234(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x20))(), (int)plVar1 != 0)) {
    *param_1 = 0;
  }
  return;
}



/* Entry: 105301268; end: 10530126b;  */

void FUN_105301268(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001005ad0c8();
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  func_0x0001053010d4(param_1 + 1,param_2 + 8);
  FUN_105301370(param_1 + 4,unaff_x20 + 0x20);
  func_0x0001053031dc();
  *unaff_x19 = extraout_x9;
  unaff_x19[1] = extraout_x10;
  unaff_x19[4] = extraout_x8 + 0x70;
  return;
}



/* Entry: 10530126c; end: 105301303;  */

void FUN_10530126c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001005ad0c8();
  uStack_28 = 0;
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 8) + 0x28))(&uStack_30);
    func_0x0001053013bc(&uStack_28,uStack_30);
    FUN_105301210(&uStack_30);
  }
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  func_0x0001053013bc(unaff_x19 + 8,uStack_28);
  FUN_105301210(&uStack_28);
  return;
}



/* Entry: 105301304; end: 10530136f;  */

void FUN_105301304(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001005ad0c8();
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  func_0x0001053010d4(param_1 + 1,param_2 + 8);
  FUN_105301370(param_1 + 4,unaff_x20 + 0x20);
  func_0x0001053031dc();
  *unaff_x19 = extraout_x9;
  unaff_x19[1] = extraout_x10;
  unaff_x19[4] = extraout_x8 + 0x70;
  return;
}



/* Entry: 105301370; end: 10530144f;  */

void FUN_105301370(undefined8 param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001005ad0c8();
  lVar1 = *(long *)(param_2 + 8);
  *unaff_x19 = &PTR____cxa_pure_virtual_110877638;
  unaff_x19[1] = lVar1;
  if (lVar1 != 0) {
    func_0x00010530315c();
    (*extraout_x8)();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 4) = *(undefined4 *)(unaff_x20 + 0x20);
  unaff_x19[3] = uVar3;
  unaff_x19[2] = uVar2;
  return;
}



/* Entry: 105301450; end: 105301533;  */

void FUN_105301450(uint *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  int *piVar2;
  ulong uVar3;
  char *pcStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar3 = 0;
  do {
    while( true ) {
      if (param_3 <= uVar3) {
        return;
      }
      piVar2 = (int *)(ulong)*param_1;
      _read(piVar2,param_2 + uVar3,param_3 - uVar3);
      if (-1 < (long)piVar2) break;
      ___error();
      if (*piVar2 != 4) {
        func_0x00010002b838(auStack_70,"read");
        func_0x000105303188(auStack_58);
        pcStack_88 = 
        "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/detail/random_provider_posix.ipp"
        ;
        pcStack_80 = 
        "void boost::uuids::detail::random_provider_base::get_random_bytes(void *, std::size_t)";
        uStack_78 = 0x62;
        FUN_105301034(auStack_58,&pcStack_88);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x105301514);
        (*pcVar1)();
      }
    }
    uVar3 = (long)piVar2 + uVar3;
  } while( true );
}



/* Entry: 105301534; end: 105301553;  */

void FUN_105301534(int *param_1)

{
  if (-1 < *param_1) {
    _close();
  }
  return;
}



/* Entry: 105301554; end: 105301647;  */

undefined8 * FUN_105301554(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *param_2;
  lVar1 = param_2[1];
  uStack_78 = 0;
  lVar3 = lVar1 - lVar2;
  puStack_80 = param_1;
  if (lVar3 != 0) {
    func_0x000105300ef4(param_1,lVar3 >> 5);
    lVar3 = param_1[1];
    puStack_70 = param_1 + 2;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_50 = lVar3;
    for (; lStack_48 = lVar3, lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
      func_0x000105300f2c(lVar3,lVar2);
      lVar3 = lStack_48 + 0x20;
    }
    uStack_58 = 1;
    FUN_1052fde48(&puStack_70);
    param_1[1] = lVar3;
  }
  uStack_78 = 1;
  func_0x000105300f50(&puStack_80);
  return param_1;
}



/* Entry: 105301648; end: 10530169b;  */

void FUN_105301648(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001005ad0c8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0001005ad104();
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_105301554(unaff_x19 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 10530169c; end: 1053016cf;  */

undefined8 * FUN_10530169c(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1053016d0(param_1,param_2,param_2 + param_3 * 0x30,param_3);
  return param_1;
}



/* Entry: 1053016d0; end: 105301713;  */

void FUN_1053016d0(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x0001005acf1c();
    func_0x0001005acff0();
    FUN_105301714();
  }
  func_0x0001005ad144();
  return;
}


