/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10810a394; end: 10810a3bb;  */

undefined8 * FUN_10810a394(undefined8 *param_1)

{
  FUN_10810a3bc(*param_1);
  return param_1;
}



/* Entry: 10810a3bc; end: 10810a3c7;  */

void FUN_10810a3bc(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return;
  }
  return;
}



/* Entry: 10810a3c8; end: 10810a3ef;  */

undefined8 * FUN_10810a3c8(undefined8 *param_1)

{
  FUN_10810a394(param_1 + 1);
  FUN_10810a3bc(*param_1);
  return param_1;
}



/* Entry: 10810a3f0; end: 10810a3ff;  */

void FUN_10810a3f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return;
  }
  return;
}



/* Entry: 10810a400; end: 10810a427;  */

long * FUN_10810a400(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001078bdee8();
  }
  return param_1;
}



/* Entry: 10810a428; end: 10810a437;  */

void FUN_10810a428(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10810a438; end: 10810a4bb;  */

undefined8 * FUN_10810a438(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  _objc_retain(param_2);
  *param_1 = &PTR_DAT_110a24430;
  param_1[1] = 1;
  _objc_initWeak(param_1 + 2,param_2);
  lVar4 = *param_3;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = lVar4;
  param_1[4] = &UNK_10dd5b8b0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  func_0x00010810b14c();
  return param_1;
}



/* Entry: 10810a4bc; end: 10810a563;  */

undefined8 * FUN_10810a4bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puStack_40;
  long lStack_38;
  
  *param_1 = &PTR_DAT_110a24430;
  lVar2 = 0;
  _objc_storeWeak(param_1 + 2);
  puVar1 = param_1 + 4;
  FUN_10810a564();
  lVar3 = param_1[4];
  lVar4 = param_1[7];
  puStack_40 = puVar1;
  lStack_38 = lVar2;
  while (puStack_40 != (undefined8 *)(lVar3 + lVar4)) {
    _CFRelease(*(undefined8 *)(lStack_38 + 8));
    FUN_10810a590(&puStack_40);
  }
  FUN_10810abe4(param_1 + 4);
  FUN_1080dcc54(param_1 + 3);
  _objc_destroyWeak(param_1 + 2);
  return param_1;
}



/* Entry: 10810a564; end: 10810a58f;  */

undefined1  [16] FUN_10810a564(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010810ac4c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10810a590; end: 10810a5c7;  */

long * FUN_10810a590(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  func_0x00010810ac4c();
  return param_1;
}



/* Entry: 10810a5c8; end: 10810a703;  */

void FUN_10810a5c8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_2 + 2;
  _objc_loadWeakRetained();
  plVar2 = plVar1;
  func_0x00010bf57160();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(plVar1);
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    func_0x00010c18c700(0);
    func_0x00010c1dc0a0(0);
    func_0x00010c19f5e0(0);
    func_0x00010c1d4c20(0);
    func_0x000108114784(param_1,param_2[3],0,1);
    _objc_retain(plVar2);
    plVar1 = param_2 + 4;
    FUN_10810a704(plVar1,param_3);
    *plVar1 = (long)plVar2;
    (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4);
  }
  func_0x00010810b14c();
  func_0x00010810b138();
  return;
}



/* Entry: 10810a704; end: 10810a7f3;  */

long FUN_10810a704(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar3 = param_2;
  FUN_10810aca4();
  lVar5 = 0;
  uVar6 = uVar3 >> 7;
  while( true ) {
    uVar6 = uVar6 & param_1[3];
    uVar7 = *(ulong *)(*param_1 + uVar6);
    uVar8 = uVar7 ^ (uVar3 & 0x7f) * 0x101010101010101;
    for (uVar8 = uVar8 + 0xfefefefefefefeff & (uVar8 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar9 = param_1[1];
      plVar4 = (long *)(uVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_1[3]);
      if (*(ulong *)(lVar9 + (long)plVar4 * 0x10) == param_2) goto LAB_10810a7e4;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6;
  }
  plVar4 = param_1;
  FUN_10810acc8(param_1,uVar3);
  lVar5 = *param_1;
  puVar1 = (ulong *)(param_1[1] + (long)plVar4 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = 0;
  *(byte *)(lVar5 + (long)plVar4) = (byte)uVar3 & 0x7f;
  func_0x00010810b17c();
  lVar9 = param_1[1];
LAB_10810a7e4:
  return lVar9 + (long)plVar4 * 0x10 + 8;
}



/* Entry: 10810a7f4; end: 10810a8cf;  */

void FUN_10810a7f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_1 + 2;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))(param_1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  plVar3 = plVar2;
  func_0x00010bf55fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(plVar2);
  if (plVar3 != (long *)0x0) {
    _objc_retain(plVar3);
    plVar2 = param_1 + 4;
    FUN_10810a704(plVar2,param_2);
    *plVar2 = (long)plVar3;
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  }
  _objc_release(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar1);
  return;
}



/* Entry: 10810a8d0; end: 10810a93b;  */

void FUN_10810a8d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10810a93c();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained(param_1 + 0x10);
  func_0x00010c227940();
  func_0x00010810b14c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10810a93c; end: 10810a977;  */

void FUN_10810a93c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010810b16c();
  FUN_10810b198();
  if ((bool)in_ZR) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10810a978; end: 10810aac7;  */

void FUN_10810a978(long param_1,undefined8 param_2,float *param_3,long param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  
  FUN_10810a93c();
  _objc_retainAutoreleasedReturnValue();
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar5 = param_3[2];
  fVar4 = param_3[3];
  func_0x00010810945c(auStack_f0,param_3 + 4);
  if (param_4 != 0) {
    pfVar1 = param_3 + 0xe;
    func_0x000108142230(pfVar1,param_4 + 0x38);
    if ((int)pfVar1 == 0) {
      pfVar1 = (float *)0x0;
      goto LAB_10810aa10;
    }
  }
  pfVar1 = param_3 + 0xe;
  if (*(int *)(*(long *)pfVar1 + 0x48) == 0) {
    pfVar1 = (float *)0x0;
  }
  else {
    func_0x000108109384();
  }
LAB_10810aa10:
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  _memcpy(auStack_170,auStack_f0,0x80);
  func_0x00010c19f100((double)fVar2,(double)fVar3,(double)(fVar5 - fVar2),(double)(fVar4 - fVar3),
                      (double)param_3[0x12],param_1);
  func_0x00010810b154();
  if (pfVar1 != (float *)0x0) {
    _CGPathRelease(pfVar1);
  }
  func_0x00010810b138();
  return;
}



/* Entry: 10810aac8; end: 10810abe3;  */

void FUN_10810aac8(ulong *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010810b16c();
  FUN_10810b198();
  if (!(bool)in_ZR) {
    puStack_40 = param_1;
    uStack_38 = param_2;
    FUN_10810a590(&puStack_40);
    uVar2 = 0;
    *(long *)(unaff_x20 + 0x30) = *(long *)(unaff_x20 + 0x30) + -1;
    puVar3 = (undefined1 *)((long)param_1 + (-8 - *(long *)(unaff_x20 + 0x20)));
    uVar5 = *(ulong *)(*(long *)(unaff_x20 + 0x20) + ((ulong)puVar3 & *(ulong *)(unaff_x20 + 0x38)))
    ;
    uVar4 = 0xfe;
    uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
    if ((uVar5 != 0) && (uVar6 = *param_1 & ~*param_1 << 6 & 0x8080808080808080, uVar6 != 0)) {
      uVar6 = uVar6 >> 7;
      uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) +
              ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) < 8;
      uVar2 = (ulong)bVar1;
      uVar4 = 0x80;
      if (!bVar1) {
        uVar4 = 0xfe;
      }
    }
    *(undefined1 *)param_1 = uVar4;
    *(undefined1 *)
     (*(long *)(unaff_x20 + 0x20) + (*(ulong *)(unaff_x20 + 0x38) & 7) +
      (*(ulong *)(unaff_x20 + 0x38) & (ulong)puVar3) + 1) = uVar4;
    *(ulong *)(unaff_x20 + 0x48) = *(long *)(unaff_x20 + 0x48) + uVar2;
    _objc_loadWeakRetained(unaff_x20 + 0x10);
    func_0x00010c12dce0();
    func_0x00010810b154();
    func_0x00010810b138();
  }
  return;
}



/* Entry: 10810abe4; end: 10810ac0b;  */

undefined8 FUN_10810abe4(undefined8 param_1)

{
  FUN_10810ac0c();
  return param_1;
}



/* Entry: 10810ac0c; end: 10810aca3;  */

void FUN_10810ac0c(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    __ZdlPv(*param_1);
    param_1[5] = 0;
    *param_1 = &UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10810aca4; end: 10810acc7;  */

void FUN_10810aca4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,param_1);
  return;
}



/* Entry: 10810acc8; end: 10810ad83;  */

void FUN_10810acc8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  plVar1 = param_1;
  func_0x00010810b15c();
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10810ad04;
  if (*(char *)(lVar3 + (long)plVar1) == -2) {
    lVar2 = 0;
    goto LAB_10810ad04;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10810ad58:
    FUN_10810adc4(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10810ad58;
    }
    FUN_10810aee8(param_1);
  }
  lVar3 = *param_1;
  plVar1 = (long *)lVar3;
  FUN_10810ad84(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10810ad04:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 10810ad84; end: 10810adc3;  */

ulong FUN_10810ad84(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10810adc4; end: 10810aee7;  */

void FUN_10810adc4(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar1 = *param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      puVar4 = puVar5;
      FUN_10810b074();
      lVar6 = *param_1;
      lVar3 = lVar6;
      FUN_10810ad84(lVar6,param_1[3],puVar4);
      bVar2 = (byte)puVar4 & 0x7f;
      *(byte *)(lVar6 + lVar3) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar3 - 8U) + 1) = bVar2;
      uVar9 = *puVar5;
      puVar4 = (undefined8 *)(param_1[1] + lVar3 * 0x10);
      puVar4[1] = puVar5[1];
      *puVar4 = uVar9;
    }
    puVar5 = puVar5 + 2;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10810aee8; end: 10810b073;  */

void FUN_10810aee8(ulong *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)*param_1;
  func_0x000104bda340(puVar5,param_1[3]);
  for (uVar10 = 0; uVar10 != param_1[3]; uVar10 = uVar10 + 1) {
    if (*(char *)(*param_1 + uVar10) == -2) {
      puVar6 = (undefined8 *)(param_1[1] + uVar10 * 0x10);
      FUN_10810b074();
      uVar8 = *param_1;
      uVar9 = param_1[3];
      puVar5 = puVar6;
      func_0x00010810b15c();
      uVar7 = uVar9 & (ulong)puVar6 >> 7;
      if ((((long)puVar5 - uVar7 ^ uVar10 - uVar7) & uVar9) < 8) {
        *(byte *)(uVar8 + uVar10) = (byte)puVar6 & 0x7f;
        func_0x00010810b17c();
      }
      else {
        cVar2 = *(char *)(uVar8 + (long)puVar5);
        bVar3 = (byte)puVar6 & 0x7f;
        *(byte *)(uVar8 + (long)puVar5) = bVar3;
        *(byte *)(*param_1 + (param_1[3] & 7) + (param_1[3] & (ulong)(puVar5 + -1)) + 1) = bVar3;
        uVar7 = param_1[1];
        if (cVar2 == -0x80) {
          puVar6 = (undefined8 *)(uVar7 + uVar10 * 0x10);
          uVar11 = *puVar6;
          puVar4 = (undefined8 *)(uVar7 + (long)puVar5 * 0x10);
          puVar4[1] = puVar6[1];
          *puVar4 = uVar11;
          *(undefined1 *)(*param_1 + uVar10) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar10 - 8) + (param_1[3] & 7) + 1) = 0x80;
        }
        else {
          puVar6 = (undefined8 *)(uVar7 + uVar10 * 0x10);
          uStack_58 = puVar6[1];
          uStack_60 = *puVar6;
          puVar6 = (undefined8 *)(uVar7 + (long)puVar5 * 0x10);
          uVar11 = *puVar6;
          puVar4 = (undefined8 *)(uVar7 + uVar10 * 0x10);
          puVar4[1] = puVar6[1];
          *puVar4 = uVar11;
          puVar6 = (undefined8 *)(param_1[1] + (long)puVar5 * 0x10);
          puVar6[1] = uStack_58;
          *puVar6 = uStack_60;
          uVar10 = uVar10 - 1;
        }
      }
    }
  }
  lVar1 = 6;
  if (uVar10 != 7) {
    lVar1 = uVar10 - (uVar10 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10810b074;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001003a85b8(&uStack_71,*puVar5);
  return;
}



/* Entry: 10810b074; end: 10810b097;  */

void FUN_10810b074(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_1);
  return;
}



/* Entry: 10810b098; end: 10810b197;  */

undefined1  [16] FUN_10810b098(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0;
  uVar3 = param_3 >> 7;
  uVar1 = param_1[3];
  while( true ) {
    uVar3 = uVar3 & uVar1;
    uVar4 = *(ulong *)(*param_1 + uVar3);
    uVar5 = uVar4 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar3 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar1;
      if (*(long *)(param_1[1] + uVar6 * 0x10) == param_2) {
        param_2 = param_1[1] + uVar6 * 0x10;
        uVar1 = uVar6;
        goto LAB_10810b130;
      }
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar3 = lVar2 + uVar3;
  }
LAB_10810b130:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = *param_1 + uVar1;
  return auVar7;
}



/* Entry: 10810b198; end: 10810b1c3;  */

void FUN_10810b198(void)

{
  long unaff_x20;
  
  FUN_10810b098(unaff_x20 + 0x20);
  return;
}



/* Entry: 10810b1c4; end: 10810b1cb;  */

void FUN_10810b1c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10810b1cc; end: 10810c567;  */

undefined8 *
FUN_10810b1cc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_2 = &PTR_DAT_110a244b0;
  param_2[1] = 1;
  param_2[2] = param_1;
  param_2[3] = param_1;
  param_2[4] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_2 + 5);
  param_2[10] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_2 + 0xb,param_4 + 1);
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x12] = 0;
  return param_2;
}



/* Entry: 10810c568; end: 10810c5fb;  */

undefined8 * FUN_10810c568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a245d8;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 100) = 0x40800000;
  FUN_1081411f4(param_1 + 0xe);
  return param_1;
}



/* Entry: 10810c5fc; end: 10810c5ff;  */

undefined8 * FUN_10810c5fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a245d8;
  FUN_10837ca38(param_1 + 0xe);
  FUN_108375e94(param_1 + 4);
  return param_1;
}



/* Entry: 10810c600; end: 10810c613;  */

void FUN_10810c600(void)

{
  func_0x00010810c5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10810c614; end: 10810c687;  */

void FUN_10810c614(float param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(float *)(param_2 + 0x1c) != param_1) {
    puVar1 = &uStack_30;
    *(float *)(param_2 + 0x1c) = param_1;
    if (param_1 == 0.0) {
      uStack_28 = 0;
      puVar1 = &uStack_28;
    }
    else {
      FUN_10833b158(&uStack_30,param_1 + param_1,0,1);
    }
    func_0x000108376174(param_2 + 0x30,puVar1);
    FUN_10810c718(puVar1);
  }
  return;
}



/* Entry: 10810c688; end: 10810c693;  */

void FUN_10810c688(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  *(int *)(param_5 + 0x18) = (int)param_6;
  FUN_108343500(param_6);
  *(undefined4 *)(param_5 + 0x50) = param_1;
  *(undefined4 *)(param_5 + 0x54) = param_2;
  *(undefined4 *)(param_5 + 0x58) = param_3;
  *(undefined4 *)(param_5 + 0x5c) = param_4;
  return;
}



/* Entry: 10810c694; end: 10810c6f3;  */

void FUN_10810c694(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = *(undefined4 *)(param_5 + 0x10);
  uVar2 = *(undefined4 *)(param_5 + 0x14);
  FUN_10810c6f4(param_6);
  uStack_40 = uVar1;
  uStack_3c = uVar2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  func_0x000108113824(param_6,param_5 + 0x20,param_7,&uStack_40,param_5 + 0x70);
  return;
}



/* Entry: 10810c6f4; end: 10810c717;  */

float FUN_10810c6f4(float param_1,float *param_2)

{
  return param_1 + *param_2;
}



/* Entry: 10810c718; end: 10810c75f;  */

long * FUN_10810c718(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10810c760; end: 10810c767;  */

void FUN_10810c760(void)

{
  return;
}



/* Entry: 10810c768; end: 10810c79b;  */

long FUN_10810c768(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108376ad8();
  FUN_10810c9b4(lVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  return param_1;
}



/* Entry: 10810c79c; end: 10810c86b;  */

void FUN_10810c79c(long param_1,float param_2,long param_3)

{
  float fVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  fVar1 = *(float *)(param_3 + 0x38);
  uStack_58 = *(undefined8 *)(param_3 + 0x18);
  uStack_60 = *(undefined8 *)(param_3 + 0x10);
  uStack_48 = *(undefined8 *)(param_3 + 0x28);
  uStack_50 = *(undefined8 *)(param_3 + 0x20);
  uStack_40 = *(undefined8 *)(param_3 + 0x30);
  FUN_108363e94(&uStack_60);
  func_0x000108376b14(param_1,param_3);
  *(undefined8 *)(param_1 + 0x18) = uStack_58;
  *(undefined8 *)(param_1 + 0x10) = uStack_60;
  *(undefined8 *)(param_1 + 0x28) = uStack_48;
  *(undefined8 *)(param_1 + 0x20) = uStack_50;
  *(undefined8 *)(param_1 + 0x30) = uStack_40;
  *(float *)(param_1 + 0x38) = param_2 * fVar1;
  return;
}



/* Entry: 10810c86c; end: 10810c933;  */

/* WARNING: Possible PIC construction at 0x00010810c8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010810c8b8) */

void FUN_10810c86c(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long alStack_30 [2];
  
  plVar2 = alStack_30;
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010814228c(param_2,param_1 + 2);
  if (*(int *)(*param_1 + 0x48) != 0) {
    func_0x0001081422c0(alStack_30,param_1,param_2);
    unaff_x30 = 0x10810c8b8;
    register0x00000008 = (BADSPACEBASE *)alStack_30;
    param_2 = plVar2;
    unaff_x29 = puVar1;
  }
  if (param_2 != param_1) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    FUN_108376b90();
  }
  return;
}



/* Entry: 10810c934; end: 10810c9b3;  */

void FUN_10810c934(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined1 auStack_64 [16];
  char cStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  func_0x00010814207c(param_5 + 0x10);
  func_0x00010810c9dc();
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  func_0x000108142318(auStack_64,param_5);
  if (cStack_54 == '\x01') {
    func_0x000108140130(auStack_64,&uStack_50);
    func_0x00010810c9dc();
  }
  return;
}



/* Entry: 10810c9b4; end: 10810c9ef;  */

void FUN_10810c9b4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0x3f800000;
  param_1[4] = 0x103f800000;
  return;
}



/* Entry: 10810c9f0; end: 10810cb87;  */

long * FUN_10810c9f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_590 [56];
  undefined8 uStack_558;
  long lStack_540;
  long alStack_538 [12];
  long alStack_4d8 [95];
  long *plStack_1e0;
  long lStack_1d8;
  undefined1 auStack_a8 [88];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010810e530();
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    func_0x00010810e86c();
    plVar1 = unaff_x20 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *extraout_x8 = unaff_x20;
  }
  else {
    auStack_a8[0] = 0;
    uStack_50 = 0;
    puVar4 = param_1;
    func_0x000105c3b044();
    if ((int)puVar4 != 0) {
      FUN_10810cb88(auStack_a8,&UNK_10f47b5aa);
    }
    alStack_4d8[0] = unaff_x20[0xd];
    alStack_538[0] = unaff_x20[0x11];
    FUN_1080ffb38(extraout_x8,alStack_4d8,alStack_538);
    func_0x00010810cc84(alStack_4d8,*extraout_x8,*param_1);
    FUN_10810cbb4();
    for (unaff_x20 = plStack_1e0; in_ZR = unaff_x20 == plStack_1e0 + lStack_1d8 * 0xc, !(bool)in_ZR;
        unaff_x20 = unaff_x20 + 0xc) {
      if ((unaff_x20 == (long *)0x0) || ((int)unaff_x20[0xb] != 0)) {
        func_0x00010810e86c();
      }
      else {
        lStack_540 = *unaff_x20;
        if (lStack_540 != 0) {
          plVar1 = (long *)(lStack_540 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10810eb24(auStack_590,unaff_x20);
        func_0x00010810e550(alStack_538,&lStack_540,auStack_590);
        func_0x00010810e7f4();
        func_0x00010810e654(alStack_538);
        FUN_10837ca5c(uStack_558);
        func_0x00010810e3a8(lStack_540);
      }
    }
    FUN_10810cff4(alStack_4d8);
    unaff_x19 = (long *)auStack_a8;
    FUN_1080e8dd4(unaff_x19);
  }
  func_0x00010810e510(uStack_48);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010810e458();
  FUN_1080e8d4c();
  FUN_10810cc20(unaff_x20);
  return unaff_x20;
}



/* Entry: 10810cb88; end: 10810cbb3;  */

void FUN_10810cb88(void)

{
  func_0x00010810e458();
  FUN_1080e8d4c();
  FUN_10810cc20();
  return;
}



/* Entry: 10810cbb4; end: 10810cc1f;  */

/* WARNING: Possible PIC construction at 0x00010810cbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010810cbf8) */

void FUN_10810cbb4(long param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar4 = param_1;
  uVar3 = param_3;
  if (param_2 == lRam00000001132542c8) {
    if (*(long *)(param_1 + 0x18) == 0) {
      return;
    }
    func_0x00010810e4a4();
    unaff_x30 = 0x10810cbf8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar4 = *(long *)(lVar4 + 0x10) + param_2 * 0x38;
  lVar2 = *(long *)(lVar4 + 0x20);
  lVar4 = lVar2 + *(long *)(lVar4 + 0x10);
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar3;
  while (lVar2 != lVar4) {
    FUN_10810d280();
  }
  return;
}



/* Entry: 10810cc20; end: 10810cc3b;  */

void FUN_10810cc20(long param_1)

{
  FUN_10810cc3c();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10810cc3c; end: 10810cd27;  */

undefined8 * FUN_10810cc3c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0x1e;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x00010bd3f3dc(param_1 + 7,param_2,0x1e);
  func_0x00010b9a7630(param_1);
  return param_1;
}



/* Entry: 10810cd28; end: 10810cd4f;  */

void FUN_10810cd28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_10810cd50(param_1 + 0x20,param_2,&uStack_18);
  return;
}



/* Entry: 10810cd50; end: 10810cdc7;  */

long FUN_10810cd50(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1 + param_1[1] * 0x58;
  if (param_1[1] == param_1[2]) {
    FUN_10810cdc8(&lStack_28,param_1,lVar1,1);
  }
  else {
    FUN_10810cefc(lVar1,param_2,*param_3);
    param_1[1] = param_1[1] + 1;
    lStack_28 = lVar1;
  }
  return lStack_28;
}



/* Entry: 10810cdc8; end: 10810cefb;  */

long * FUN_10810cdc8(long *param_1,long *param_2,long *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (uVar1 - uVar3 <= 0x1745d1745d1745d - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar9 = (uVar3 << 3) / 5;
    }
    else {
      uVar9 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar9 = 0xffffffffffffffff;
      }
    }
    if (0x1745d1745d1745c < uVar9) {
      uVar9 = 0x1745d1745d1745d;
    }
    uVar3 = uVar1;
    if (uVar1 <= uVar9) {
      uVar3 = uVar9;
    }
    if (uVar1 < 0x1745d1745d1745e) {
      lVar8 = *param_2;
      lVar5 = uVar3 * 0x58;
      __Znwm();
      lVar2 = *param_2;
      lVar4 = param_2[1];
      lVar6 = lVar2;
      FUN_10810cfa0(lVar2,param_3,lVar5);
      FUN_10810cefc();
      plVar7 = param_3;
      FUN_10810cfa0(param_3,lVar2 + lVar4 * 0x58,lVar6 + param_4 * 0x58);
      if (lVar2 != 0) {
        plVar7 = param_2;
        func_0x00010810cf54(param_2,lVar2,param_2[1]);
        func_0x00010810e41c();
        FUN_10810cf84();
      }
      *param_2 = lVar5;
      param_2[1] = param_2[1] + param_4;
      param_2[2] = uVar3;
      *param_1 = (long)param_3 + (lVar5 - lVar8);
      return plVar7;
    }
  }
  _abort();
  *param_2 = 0;
  func_0x00010810cf28(param_2 + 1);
  param_2[9] = param_4;
  param_2[10] = 0;
  return param_2;
}



/* Entry: 10810cefc; end: 10810cf83;  */

undefined8 * FUN_10810cefc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  func_0x00010810cf28(param_1 + 1);
  param_1[9] = param_3;
  param_1[10] = 0;
  return param_1;
}



/* Entry: 10810cf84; end: 10810cf9f;  */

void FUN_10810cf84(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10810cfa0; end: 10810cff3;  */

undefined8 * FUN_10810cfa0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010810e530();
  for (; param_1 != unaff_x20; param_1 = param_1 + 0xb) {
    *unaff_x19 = *param_1;
    func_0x00010810cf28(unaff_x19 + 1,param_1 + 1);
    uVar1 = param_1[9];
    unaff_x19[10] = param_1[10];
    unaff_x19[9] = uVar1;
    unaff_x19 = unaff_x19 + 0xb;
  }
  return unaff_x19;
}



/* Entry: 10810cff4; end: 10810d05b;  */

long FUN_10810cff4(long param_1)

{
  func_0x00010810d030(param_1 + 0x408);
  FUN_10810d074(param_1 + 0x3d0);
  FUN_10810d0c0(param_1 + 0x2f8);
  FUN_10810d1e0(param_1 + 0x20);
  return param_1;
}



/* Entry: 10810d05c; end: 10810d073;  */

void FUN_10810d05c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10810d074; end: 10810d0a3;  */

long FUN_10810d074(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10810d0a4(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10810d0a4; end: 10810d0bf;  */

void FUN_10810d0a4(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10810d0c0; end: 10810d15f;  */

undefined8 * FUN_10810d0c0(undefined8 *param_1)

{
  func_0x00010810d0e8(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_10810d1c4(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10810d160; end: 10810d193;  */

undefined8 * FUN_10810d160(undefined8 param_1,long param_2)

{
  FUN_10837ca5c(*(undefined8 *)(param_2 + 0x30));
  return (undefined8 *)(param_2 + 0x30);
}



/* Entry: 10810d194; end: 10810d1c3;  */

long FUN_10810d194(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10810d1c4(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10810d1c4; end: 10810d1df;  */

void FUN_10810d1c4(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10810d1e0; end: 10810d27f;  */

undefined8 * FUN_10810d1e0(undefined8 *param_1)

{
  func_0x00010810cf54(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_10810cf84(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10810d280; end: 10810d317;  */

long FUN_10810d280(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  switch(*param_1) {
  case 1:
    goto FUN_10810d318;
  case 2:
    func_0x00010810e438(param_2,param_1);
    func_0x00010810d468();
    lVar1 = unaff_x19 + 8;
    break;
  case 3:
    func_0x00010810e438(param_2,param_1);
    FUN_10810d54c();
    lVar1 = unaff_x19 + 0x18;
    break;
  case 4:
    func_0x00010810e438(param_2,param_1);
    FUN_10810dbb0();
    lVar1 = unaff_x19 + 0x10;
    break;
  case 5:
    func_0x00010810e438(param_2,param_1);
    func_0x00010810dc5c();
    lVar1 = unaff_x19 + 0x28;
    break;
  case 6:
    func_0x00010810e438(param_2,param_1);
    FUN_10810dc90();
    lVar1 = unaff_x19 + 0x18;
    break;
  case 7:
    func_0x00010810e438(param_2,param_1);
    FUN_10810e0e4();
    lVar1 = unaff_x19 + 0x10;
    break;
  case 8:
    func_0x00010810e438(param_2,param_1);
    FUN_10810e2f0();
    lVar1 = unaff_x19 + 0x10;
    break;
  default:
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10810d318;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
FUN_10810d318:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010810e438();
    func_0x00010810d418();
    lVar1 = unaff_x19 + 0x48;
  }
  return lVar1;
}



/* Entry: 10810d318; end: 10810d51f;  */

long FUN_10810d318(void)

{
  long unaff_x19;
  
  func_0x00010810e438();
  func_0x00010810d418();
  return unaff_x19 + 0x48;
}



/* Entry: 10810d520; end: 10810d54b;  */

void FUN_10810d520(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  lVar1 = *plVar3;
  if (plVar3[0x85] != param_2) {
    *(long *)(lVar1 + 0x60) = *(long *)(lVar1 + 0x10) + param_2 * 0x38;
    plVar3[0x85] = param_2;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x60);
  func_0x00010b99d978(puVar2,8);
  *puVar2 = 2;
  return;
}



/* Entry: 10810d54c; end: 10810d5b7;  */

void FUN_10810d54c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010810e458();
  func_0x00010810e4c0(*(undefined8 *)(param_2 + 8));
  func_0x00010810e444(unaff_x20[4]);
  FUN_10810d5b8();
  func_0x00010810e464();
  FUN_10810daa4();
  func_0x00010810f05c(*(undefined4 *)(unaff_x19 + 0x10),*unaff_x20,*(undefined8 *)(unaff_x19 + 8));
  return;
}



/* Entry: 10810d5b8; end: 10810d893;  */

ulong * FUN_10810d5b8(long *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  lVar6 = param_1[0x60];
  puVar8 = (ulong *)0x0;
  do {
    lVar9 = lVar6 * 0x60;
    lVar6 = 1 - lVar6;
    while( true ) {
      if (lVar6 + 1 == 2) goto LAB_10810d674;
      lVar10 = param_1[0x5f];
      if ((lVar10 == 0) || (lVar1 = lVar10 + lVar9, *(int *)(lVar1 + -8) != 0)) break;
      lVar9 = lVar9 + -0x60;
      uVar4 = lVar1 - 0x1c;
      func_0x00010814000c(uVar4,param_2);
      lVar6 = lVar6 + 1;
      if ((uVar4 & 1) != 0) {
LAB_10810d674:
        if (puVar8 != (ulong *)0x0) {
          return puVar8;
        }
        uVar4 = param_1[0x84];
        if (uVar4 < 0x40) {
          param_1[0x84] = uVar4 + 1;
          uStack_70 = uVar4;
          while (*(ulong *)(*param_1 + 0x18) <= uVar4) {
            func_0x00010810ed4c();
            param_1[0x85] = uVar4;
          }
          puVar5 = (undefined8 *)0x48;
          __Znwm();
          plVar7 = puVar5 + 1;
          *plVar7 = 1;
          *puVar5 = &PTR_DAT_110a27160;
          puVar5[3] = 0;
          puVar5[2] = 0;
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[7] = 0;
          puVar5[6] = 0;
          puVar5[8] = 0;
          puVar8 = (ulong *)(param_1[0x5f] + param_1[0x60] * 0x60);
          puStack_78 = puVar5;
          if (param_1[0x60] == param_1[0x61]) {
            func_0x00010810d7a4(&puStack_68,param_1 + 0x5f,puVar8,&puStack_78,&uStack_70);
          }
          else {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = *plVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar6 = param_1[0x60];
            *puVar8 = uVar4;
            puVar8[1] = (ulong)puVar5;
            *(undefined4 *)(puVar8 + 0xb) = 1;
            param_1[0x60] = lVar6 + 1;
            puStack_68 = puVar8;
          }
          func_0x00010810d170(puStack_78);
          return puStack_68;
        }
        for (puVar8 = (ulong *)(param_1[0x5f] + param_1[0x60] * 0x60 + -0x60);
            (param_1[0x5f] == 0 || ((int)puVar8[0xb] != 1)); puVar8 = puVar8 + -0xc) {
        }
        return puVar8;
      }
    }
    if (puVar8 != (ulong *)0x0) {
      uVar4 = puVar8[1];
      func_0x00010813f550(uVar4,param_2);
      if ((uVar4 & 1) != 0) {
        return puVar8;
      }
    }
    lVar6 = -lVar6;
    puVar8 = (ulong *)0x0;
    if ((lVar10 != 0) &&
       (puVar8 = (ulong *)(lVar10 + lVar9 + -0x60), *(int *)(lVar10 + lVar9 + -8) != 1)) {
      puVar8 = (ulong *)0x0;
    }
  } while( true );
}



/* Entry: 10810d894; end: 10810d927;  */

ulong FUN_10810d894(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  
  uVar1 = param_1 + 1;
  if (uVar1 - param_2 <= 0x155555555555555 - param_2) {
    if (param_2 >> 0x3d == 0) {
      uVar2 = (param_2 << 3) / 5;
    }
    else {
      uVar2 = param_2 << 3;
      if (4 < param_2 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
    }
    if (0x155555555555554 < uVar2) {
      uVar2 = 0x155555555555555;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  _abort();
  if (param_1 < 0x155555555555556) {
    param_1 = param_1 * 0x60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1);
    return param_1;
  }
  _abort();
  func_0x00010810e530();
  for (; param_1 != unaff_x20; param_1 = param_1 + 0x60) {
    func_0x00010810d96c(unaff_x19,param_1);
    unaff_x19 = unaff_x19 + 0x60;
  }
  return unaff_x19;
}



/* Entry: 10810d928; end: 10810d9d7;  */

long FUN_10810d928(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010810e530();
  for (; param_1 != unaff_x20; param_1 = param_1 + 0x60) {
    func_0x00010810d96c(unaff_x19,param_1);
    unaff_x19 = unaff_x19 + 0x60;
  }
  return unaff_x19;
}



/* Entry: 10810d9d8; end: 10810d9f3;  */

void FUN_10810d9d8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)*param_1;
  func_0x00010810e458();
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar4 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  puVar1[3] = param_2[3];
  puVar1[2] = uVar4;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  func_0x000108376b14(puVar1 + 6,param_2 + 6);
  func_0x00010810e4fc();
  return;
}



/* Entry: 10810d9f4; end: 10810daa3;  */

void FUN_10810d9f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010810e458();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108376b14(param_1 + 6,param_2 + 6);
  func_0x00010810e4fc();
  return;
}



/* Entry: 10810daa4; end: 10810db6b;  */

void FUN_10810daa4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1[0x85] != param_2) {
    *(ulong *)(*param_1 + 0x60) = *(long *)(*param_1 + 0x10) + param_2 * 0x38;
    param_1[0x85] = param_2;
  }
  lVar1 = 0;
  uVar3 = param_1[5];
  uVar5 = 1L << (param_2 & 0x3f);
  lVar4 = param_1[4] + uVar3 * 0x58;
  for (; 1 < uVar3; uVar3 = uVar3 - 1) {
    lVar2 = lVar4 + lVar1;
    uVar6 = *(ulong *)(lVar2 + -0x58);
    if ((uVar6 & uVar5) != 0) break;
    *(ulong *)(lVar2 + -0x58) = uVar6 | uVar5;
    lVar1 = lVar1 + -0x58;
  }
  lVar4 = lVar4 + lVar1;
  for (lVar1 = -lVar1; lVar1 != 0; lVar1 = lVar1 + -0x58) {
    lVar2 = *(long *)(lVar4 + 0x48);
    FUN_10810ef54(*(undefined4 *)(lVar2 + 0x30),*param_1,lVar2 + 8,*(undefined8 *)(lVar2 + 0x38),
                  *(undefined1 *)(lVar2 + 0x40));
    if (*(long *)(lVar4 + 0x50) != 0) {
      FUN_10810db6c(param_1);
    }
    lVar4 = lVar4 + 0x58;
  }
  return;
}



/* Entry: 10810db6c; end: 10810dbaf;  */

void FUN_10810db6c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (*param_2 == 5) {
    lVar1 = *param_1;
    lVar2 = param_2[1];
    uVar4 = *(undefined4 *)((long)param_2 + 0xc);
    if (*(char *)((long)param_2 + 0x24) == '\x01') {
      func_0x00010810f14c();
      *(int *)(lVar1 + 8) = (int)lVar2;
      *(undefined4 *)(lVar1 + 0xc) = uVar4;
    }
    else {
      func_0x00010810f128();
      *(int *)(lVar1 + 8) = (int)lVar2;
      *(undefined4 *)(lVar1 + 0xc) = uVar4;
      uVar3 = *(undefined8 *)((long)param_2 + 0x1d);
      lVar2 = param_2[2];
      *(long *)(lVar1 + 0x18) = param_2[3];
      *(long *)(lVar1 + 0x10) = lVar2;
      *(undefined8 *)(lVar1 + 0x1d) = uVar3;
    }
    return;
  }
  lVar2 = *param_1;
  lVar1 = param_2[1];
  func_0x00010810f14c();
  *(long *)(lVar2 + 8) = lVar1;
  return;
}



/* Entry: 10810dbb0; end: 10810dbdf;  */

void FUN_10810dbb0(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar3;
  
  func_0x00010810e3e0();
  func_0x00010810c80c((int)param_2[1],*(undefined4 *)((long)param_2 + 0xc),extraout_x8 + -0x50);
  func_0x00010810e4a4();
  param_2[10] = param_3;
  if (*param_2 == 0) {
    return;
  }
  func_0x00010810e458();
  for (uVar3 = *param_2; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    uVar1 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    lVar2 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
    if (unaff_x20[0x85] != lVar2) {
      *(long *)(*unaff_x20 + 0x60) = *(long *)(*unaff_x20 + 0x10) + lVar2 * 0x38;
      unaff_x20[0x85] = lVar2;
    }
    FUN_10810db6c(unaff_x20,*(undefined8 *)(unaff_x19 + 0x50));
  }
  return;
}



/* Entry: 10810dbe0; end: 10810dbf3;  */

void FUN_10810dbe0(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x20;
  ulong uVar3;
  
  param_2[10] = param_3;
  if (*param_2 == 0) {
    return;
  }
  func_0x00010810e458();
  for (uVar3 = *param_2; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    uVar1 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    lVar2 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
    if (unaff_x20[0x85] != lVar2) {
      *(long *)(*unaff_x20 + 0x60) = *(long *)(*unaff_x20 + 0x10) + lVar2 * 0x38;
      unaff_x20[0x85] = lVar2;
    }
    FUN_10810db6c();
  }
  return;
}



/* Entry: 10810dbf4; end: 10810dc8f;  */

void FUN_10810dbf4(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x20;
  ulong uVar3;
  
  func_0x00010810e458();
  for (uVar3 = *param_2; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    uVar1 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    lVar2 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
    if (unaff_x20[0x85] != lVar2) {
      *(long *)(*unaff_x20 + 0x60) = *(long *)(*unaff_x20 + 0x10) + lVar2 * 0x38;
      unaff_x20[0x85] = lVar2;
    }
    FUN_10810db6c();
  }
  return;
}



/* Entry: 10810dc90; end: 10810deaf;  */

void FUN_10810dc90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,long *param_7,undefined1 **param_8)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float fStack_10c;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  float *pfStack_f8;
  undefined1 **ppuStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  undefined1 *puStack_d8;
  float *pfStack_d0;
  undefined1 **ppuStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_5 + 0x20) + *(long *)(param_5 + 0x28) * 0x58;
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_6 + 8) + 0x10) + 0x10);
  uStack_118 = CONCAT44((float)((ulong)uVar15 >> 0x20) + 0.0,(float)uVar15 + 0.0);
  uStack_120 = 0;
  fStack_130 = *(float *)(param_6 + 0x10);
  ppuVar9 = (undefined1 **)(lVar6 + -0x50);
  fStack_12c = *(float *)(lVar6 + -0x18);
  fVar16 = fStack_130 * fStack_12c;
  plVar10 = (long *)(lVar6 + -0x40);
  func_0x00010814207c(plVar10,&uStack_120);
  uStack_108 = *(undefined8 *)(param_6 + 8);
  ppuVar8 = (undefined1 **)(param_5 + 0x2f8);
  lVar14 = *(long *)(param_5 + 0x300);
  lVar1 = *(long *)(param_5 + 0x300) * 0x60 + 0x60;
  uStack_128 = param_3;
  uStack_124 = param_4;
  fStack_10c = fVar16;
  do {
    lVar12 = lVar1;
    lVar7 = lVar14;
    puVar13 = *ppuVar8;
    if (((lVar7 == 0) || (puVar13 == (undefined1 *)0x0)) ||
       (*(int *)(puVar13 + lVar12 + -0x68) != 1)) goto LAB_10810dd78;
    uVar15 = *(undefined8 *)(puVar13 + lVar12 + -0xb8);
    func_0x00010813f550(uVar15,&fStack_130);
    lVar14 = lVar7 + -1;
    lVar1 = lVar12 + -0x60;
  } while ((int)uVar15 == 0);
  puVar13 = *ppuVar8;
LAB_10810dd78:
  plVar11 = (long *)(puVar13 + lVar12 + -0x60);
  lVar14 = *(long *)(param_5 + 0x300);
  uVar2 = *(long *)(param_5 + 0x308) == lVar14;
  if ((bool)uVar2) {
    pfStack_d0 = &fStack_10c;
    puStack_b8 = &uStack_108;
    param_8 = &puStack_d8;
    puStack_d8 = (undefined1 *)&fStack_130;
    ppuStack_c8 = ppuVar9;
    plStack_c0 = plVar10;
    FUN_10810deb0(&puStack_100);
  }
  else {
    pfStack_f8 = &fStack_10c;
    puStack_e0 = &uStack_108;
    ppuVar8 = (undefined1 **)(puVar13 + lVar14 * 0x60);
    uVar2 = lVar14 == lVar7;
    ppuStack_f0 = ppuVar9;
    plStack_e8 = plVar10;
    if ((bool)uVar2) {
      puStack_100 = (undefined1 *)&fStack_130;
      FUN_10810df90(&puStack_100);
      *(long *)(param_5 + 0x300) = *(long *)(param_5 + 0x300) + 1;
      plVar11 = param_7;
    }
    else {
      puStack_100 = (undefined1 *)&fStack_130;
      func_0x00010810d96c(ppuVar8,ppuVar8 + -0xc);
      *(long *)(param_5 + 0x300) = *(long *)(param_5 + 0x300) + 1;
      puVar13 = puVar13 + lVar14 * 0x60 + -0xc0;
      for (lVar12 = lVar12 + lVar14 * -0x60; lVar12 != 0; lVar12 = lVar12 + 0x60) {
        FUN_10810dfb0(puVar13 + 0x60,puVar13);
        puVar13 = puVar13 + -0x60;
      }
      plVar5 = plVar10;
      param_8 = ppuVar9;
      func_0x00010810ebd0(fStack_10c,&puStack_d8,uStack_108,plVar10,ppuVar9,&fStack_130);
      ppuVar8 = &puStack_d8;
      FUN_10810dfb0(plVar11);
      func_0x00010810d118(&puStack_d8);
      plVar11 = plVar5;
    }
  }
  func_0x00010810e510(uStack_78);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010810e524();
    puVar13 = *ppuVar8;
    puVar3 = ppuVar8[1];
    FUN_10810d894(puVar3,ppuVar8[2]);
    puVar4 = puVar3;
    func_0x00010810d8fc();
    puStack_1e8 = param_8[1];
    puStack_1f0 = *param_8;
    puStack_1d8 = param_8[3];
    puStack_1e0 = param_8[2];
    puStack_1d0 = param_8[4];
    lVar14 = *plVar10;
    plStack_1b8 = plVar10;
    puStack_1b0 = puVar3;
    plStack_198 = plVar10;
    func_0x00010810e484(*(undefined8 *)(lVar6 + -0x38));
    FUN_10810df90(&puStack_1f0,puVar4);
    func_0x00010810e4b4();
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    func_0x00010810da2c(&uStack_1a8);
    uStack_1c0 = 0;
    if (lVar14 != 0) {
      func_0x00010810e494();
      func_0x00010810e41c();
      FUN_10810d1c4();
    }
    func_0x00010810e53c();
    func_0x00010810da6c(&uStack_1c0);
    *ppuVar9 = (undefined1 *)((long)plVar11 + (*plVar10 - (long)puVar13));
    return;
  }
  return;
}



/* Entry: 10810deb0; end: 10810df8f;  */

void FUN_10810deb0(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010810e524();
  lVar1 = *param_2;
  lVar3 = param_2[1];
  FUN_10810d894(lVar3,param_2[2]);
  func_0x00010810d8fc();
  uStack_b8 = param_4[1];
  uStack_c0 = *param_4;
  uStack_a8 = param_4[3];
  uStack_b0 = param_4[2];
  uStack_a0 = param_4[4];
  lVar2 = *unaff_x20;
  func_0x00010810e484(unaff_x20[1]);
  FUN_10810df90(&uStack_c0,lVar3);
  func_0x00010810e4b4();
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x00010810da2c(&uStack_78);
  uStack_90 = 0;
  if (lVar2 != 0) {
    func_0x00010810e494();
    func_0x00010810e41c();
    FUN_10810d1c4();
  }
  func_0x00010810e53c();
  func_0x00010810da6c(&uStack_90);
  *unaff_x19 = *unaff_x20 + (param_3 - lVar1);
  return;
}



/* Entry: 10810df90; end: 10810dfaf;  */

undefined8 FUN_10810df90(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [2];
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)*param_1;
  uStack_88 = *(undefined8 *)param_1[4];
  uVar3 = *(undefined4 *)param_1[1];
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_68 = puVar1[3];
  uStack_70 = puVar1[2];
  uStack_60 = puVar1[4];
  func_0x000108376b14(auStack_58,param_1[2]);
  uStack_3c = puVar2[1];
  uStack_44 = *puVar2;
  uStack_48 = uVar3;
  FUN_10810ec4c(param_2,&uStack_88);
  FUN_10837ca5c(auStack_58[0]);
  return param_2;
}



/* Entry: 10810dfb0; end: 10810e00b;  */

void FUN_10810dfb0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x58);
  if (*(int *)(param_1 + 0x58) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x58) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110a24610)[*(uint *)(param_1 + 0x58)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110a24630)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10810e00c; end: 10810e073;  */

void FUN_10810e00c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x58) == 0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    uVar4 = param_3[2];
    uVar6 = param_3[5];
    uVar5 = param_3[4];
    param_2[3] = param_3[3];
    param_2[2] = uVar4;
    param_2[5] = uVar6;
    param_2[4] = uVar5;
    param_2[1] = uVar3;
    *param_2 = uVar2;
    func_0x000108142214(param_2 + 6,param_3 + 6);
    func_0x00010810e4fc();
  }
  else {
    func_0x00010810d118(lVar1);
    FUN_10810d9f4(lVar1,param_3);
    *(undefined4 *)(lVar1 + 0x58) = 0;
  }
  return;
}



/* Entry: 10810e074; end: 10810e0e3;  */

void FUN_10810e074(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 0xb) == 1) {
    *param_2 = *param_3;
    if (param_2 != param_3) {
      uVar5 = param_3[1];
      param_3[1] = 0;
      plVar4 = (long *)param_2[1];
      param_2[1] = uVar5;
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010810e4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))();
          return;
        }
      }
      return;
    }
  }
  else {
    func_0x00010810d118(param_1);
    uVar5 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar5;
    param_3[1] = 0;
    *(undefined4 *)(param_1 + 0xb) = 1;
  }
  return;
}



/* Entry: 10810e0e4; end: 10810e18f;  */

void FUN_10810e0e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 *unaff_x21;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  func_0x00010810e524();
  puVar4 = (undefined8 *)(unaff_x20 + 8);
  func_0x00010810e4c0(*puVar4);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  func_0x00010810e444(unaff_x19[4]);
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_10810d5b8();
  func_0x00010810e464();
  FUN_10810daa4();
  FUN_10810f168(*unaff_x19,*puVar4);
  lVar2 = unaff_x19[0x7b];
  puVar1 = (undefined8 *)(unaff_x19[0x7a] + lVar2 * 0x10);
  if (lVar2 == unaff_x19[0x7c]) {
    FUN_10810e190(&uStack_50,unaff_x19 + 0x7a);
  }
  else {
    uVar3 = *unaff_x21;
    *puVar1 = *puVar4;
    puVar1[1] = uVar3;
    unaff_x19[0x7b] = lVar2 + 1;
  }
  return;
}



/* Entry: 10810e190; end: 10810e2ef;  */

void FUN_10810e190(long *param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar2 <= 0x7ffffffffffffff - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      uVar6 = (uVar2 << 3) / 5;
    }
    else {
      uVar6 = uVar2 << 3;
      if (4 < uVar2 >> 0x3d) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    if (0x7fffffffffffffe < uVar6) {
      uVar6 = 0x7ffffffffffffff;
    }
    uVar2 = uVar1;
    if (uVar1 <= uVar6) {
      uVar2 = uVar6;
    }
    if (uVar1 >> 0x3b == 0) {
      lVar10 = *param_2;
      puVar3 = (undefined8 *)(uVar2 << 4);
      __Znwm();
      lVar5 = *param_2;
      lVar8 = param_2[1];
      puVar4 = puVar3;
      if ((lVar5 != 0) && (lVar5 != param_3)) {
        _memmove(puVar3,lVar5,param_3 - lVar5);
        puVar4 = (undefined8 *)((long)puVar3 + (param_3 - lVar5));
      }
      uVar7 = *param_4;
      *puVar4 = *param_5;
      puVar4[1] = uVar7;
      if ((param_3 != 0) && (lVar9 = lVar5 + lVar8 * 0x10, param_3 != lVar9)) {
        _memmove(puVar4 + 2,param_3,lVar9 - param_3);
      }
      if (lVar5 != 0) {
        func_0x00010810e41c();
        FUN_10810d0a4();
        lVar8 = param_2[1];
      }
      *param_2 = (long)puVar3;
      param_2[1] = lVar8 + 1;
      param_2[2] = uVar2;
      *param_1 = (long)puVar3 + (param_3 - lVar10);
      return;
    }
  }
  _abort();
  lVar5 = param_1[0x7b] + 1;
  lVar8 = param_1[0x7b] << 4;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return;
    }
    lVar9 = lVar8 + -0x10;
    lVar10 = param_1[0x7a] + lVar8;
    lVar8 = lVar9;
  } while (*(long *)(lVar10 + -0x10) != param_2[1]);
  lVar5 = *(long *)(param_1[0x7a] + lVar9 + 8);
  if (param_1[0x85] != lVar5) {
    *(long *)(*param_1 + 0x60) = *(long *)(*param_1 + 0x10) + lVar5 * 0x38;
    param_1[0x85] = lVar5;
  }
  FUN_10810f1b8();
  lVar5 = param_1[0x7b];
  if ((param_1[0x7a] != 0) && (lVar5 * 0x10 + -0x10 != lVar9)) {
    lVar8 = param_1[0x7a] + lVar9;
    _memmove(lVar8,lVar8 + 0x10,(lVar5 * 0x10 - lVar9) + -0x10);
    lVar5 = param_1[0x7b];
  }
  param_1[0x7b] = lVar5 + -1;
  return;
}



/* Entry: 10810e2f0; end: 10810e3a7;  */

void FUN_10810e2f0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1[0x7b] + 1;
  lVar3 = param_1[0x7b] << 4;
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) {
      return;
    }
    lVar4 = lVar3 + -0x10;
    lVar1 = param_1[0x7a] + lVar3;
    lVar3 = lVar4;
  } while (*(long *)(lVar1 + -0x10) != *(long *)(param_2 + 8));
  lVar2 = *(long *)(param_1[0x7a] + lVar4 + 8);
  if (param_1[0x85] != lVar2) {
    *(long *)(*param_1 + 0x60) = *(long *)(*param_1 + 0x10) + lVar2 * 0x38;
    param_1[0x85] = lVar2;
  }
  FUN_10810f1b8();
  lVar2 = param_1[0x7b];
  if ((param_1[0x7a] != 0) && (lVar2 * 0x10 + -0x10 != lVar4)) {
    lVar3 = param_1[0x7a] + lVar4;
    _memmove(lVar3,lVar3 + 0x10,(lVar2 * 0x10 - lVar4) + -0x10);
    lVar2 = param_1[0x7b];
  }
  param_1[0x7b] = lVar2 + -1;
  return;
}



/* Entry: 10810e3a8; end: 10810e54f;  */

void FUN_10810e3a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010810e4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10810e550; end: 10810eb23;  */

undefined8 * FUN_10810e550(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  *param_1 = 0;
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010810e7e4();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = uVar1;
  func_0x00010810e740(param_1 + 2,param_3);
  return param_1;
}



/* Entry: 10810eb24; end: 10810ec4b;  */

void FUN_10810eb24(float *param_1,long *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  
  iVar1 = (int)param_2 + 8;
  uVar11 = *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
  func_0x0001081420d4();
  if (iVar1 == 0) {
    lVar5 = param_2[2];
    lVar4 = param_2[1];
    lVar9 = param_2[4];
    lVar8 = param_2[3];
    fVar3 = 0.0;
    fVar6 = 0.0;
    fVar7 = *(float *)(param_2 + 5);
    fVar2 = *(float *)((long)param_2 + 0x2c);
  }
  else {
    fVar3 = *(float *)(param_2 + 2);
    fVar6 = *(float *)((long)param_2 + 0x1c);
    lVar5 = 0;
    lVar4 = 0x3f800000;
    fVar2 = 2.24208e-44;
    fVar7 = 1.0;
    lVar8 = lVar4;
    lVar9 = lVar5;
  }
  fVar10 = *(float *)(param_2 + 8);
  *param_1 = fVar3;
  param_1[1] = fVar6;
  *(ulong *)(param_1 + 2) = CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar6,(float)uVar11 + fVar3);
  *(long *)(param_1 + 6) = lVar5;
  *(long *)(param_1 + 4) = lVar4;
  *(long *)(param_1 + 10) = lVar9;
  *(long *)(param_1 + 8) = lVar8;
  param_1[0xc] = fVar7;
  param_1[0xd] = fVar2;
  func_0x000108376b14(param_1 + 0xe,param_2 + 6);
  param_1[0x12] = fVar10;
  return;
}



/* Entry: 10810ec4c; end: 10810ec63;  */

void FUN_10810ec4c(long param_1)

{
  FUN_10810d9f4();
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10810ec64; end: 10810ecef;  */

/* WARNING: Possible PIC construction at 0x00010810eca0: Changing call to branch */

undefined1  [16] FUN_10810ec64(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  _abort();
  func_0x00010810ecd4();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10810ecf0; end: 10810eda3;  */

undefined8 *
FUN_10810ecf0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_4 = &PTR_FUN_110a24650;
  param_4[1] = 1;
  param_4[2] = param_4 + 5;
  param_4[4] = 1;
  param_4[3] = 0;
  param_4[0xc] = 0;
  *(undefined4 *)(param_4 + 0xd) = param_1;
  *(undefined4 *)((long)param_4 + 0x6c) = param_2;
  *(undefined1 *)(param_4 + 0xe) = 0;
  *(undefined1 *)(param_4 + 0x10) = 0;
  param_4[0x11] = param_3;
  *(undefined2 *)(param_4 + 0x12) = 0;
  func_0x00010810ed4c();
  return param_4;
}



/* Entry: 10810eda4; end: 10810eeff;  */

undefined8 * FUN_10810eda4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = 0;
  lVar9 = 0;
  *param_1 = &PTR_FUN_110a24650;
  lVar5 = param_1[3];
  lVar4 = lVar5 * 0x38;
  lVar6 = lVar5;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    if (param_1[2] + lVar5 * 0x38 == param_1[0xc]) {
      param_1[0xc] = 0;
    }
    if (lVar5 == lRam00000001132542c8) {
      for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
        func_0x00010810ff20(param_1[2],lVar7);
      }
    }
    else {
      func_0x00010810ff20(param_1[2],lVar5);
    }
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    lVar6 = lVar2 + lVar9;
    for (lVar7 = lVar8 + lVar3 * 0x38; lVar4 != lVar7; lVar7 = lVar7 + -0x38) {
      lVar1 = lVar6 + lVar4;
      func_0x00010810f6a4(lVar1 + -0x38);
      func_0x00010b99d91c(lVar1 + -0x38,lVar1);
      *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      lVar6 = lVar6 + 0x38;
    }
    func_0x00010810f680(lVar2 + lVar3 * 0x38 + -0x38);
    lVar6 = param_1[3] + -1;
    param_1[3] = lVar6;
    lVar9 = lVar9 + -0x38;
    lVar8 = lVar8 + 0x38;
  }
  FUN_10810f57c(param_1[2],lVar6);
  if ((param_1[4] != 0) && (param_1 + 5 != (undefined8 *)param_1[2])) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10810ef00; end: 10810ef03;  */

undefined8 * FUN_10810ef00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = 0;
  lVar9 = 0;
  *param_1 = &PTR_FUN_110a24650;
  lVar5 = param_1[3];
  lVar4 = lVar5 * 0x38;
  lVar6 = lVar5;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    if (param_1[2] + lVar5 * 0x38 == param_1[0xc]) {
      param_1[0xc] = 0;
    }
    if (lVar5 == lRam00000001132542c8) {
      for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
        func_0x00010810ff20(param_1[2],lVar7);
      }
    }
    else {
      func_0x00010810ff20(param_1[2],lVar5);
    }
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    lVar6 = lVar2 + lVar9;
    for (lVar7 = lVar8 + lVar3 * 0x38; lVar4 != lVar7; lVar7 = lVar7 + -0x38) {
      lVar1 = lVar6 + lVar4;
      func_0x00010810f6a4(lVar1 + -0x38);
      func_0x00010b99d91c(lVar1 + -0x38,lVar1);
      *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      lVar6 = lVar6 + 0x38;
    }
    func_0x00010810f680(lVar2 + lVar3 * 0x38 + -0x38);
    lVar6 = param_1[3] + -1;
    param_1[3] = lVar6;
    lVar9 = lVar9 + -0x38;
    lVar8 = lVar8 + 0x38;
  }
  FUN_10810f57c(param_1[2],lVar6);
  if ((param_1[4] != 0) && (param_1 + 5 != (undefined8 *)param_1[2])) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10810ef04; end: 10810ef17;  */

void FUN_10810ef04(void)

{
  FUN_10810eda4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10810ef18; end: 10810ef53;  */

undefined4 FUN_10810ef18(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



/* Entry: 10810ef54; end: 10810efaf;  */

void FUN_10810ef54(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_10810efb0();
  uVar1 = param_3[4];
  uVar4 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  *(undefined8 *)(param_2 + 0x10) = param_3[1];
  *(undefined8 *)(param_2 + 8) = uVar4;
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x38) = param_4;
  *(undefined1 *)(param_2 + 0x40) = param_5;
  return;
}



/* Entry: 10810efb0; end: 10810eff7;  */

void FUN_10810efb0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  func_0x00010b99d978(puVar1,0x48);
  *puVar1 = 1;
  return;
}



/* Entry: 10810eff8; end: 10810f09b;  */

void FUN_10810eff8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108110254();
  if (*param_3 != 0) {
    func_0x00010810f05c(param_1);
  }
  if (*(long *)(unaff_x20 + 8) != 0) {
    lVar1 = unaff_x19;
    FUN_10810f09c();
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(unaff_x20 + 8);
    *(int *)(lVar1 + 0x10) = (int)param_1;
    do {
      func_0x0001081101c8();
    } while (extraout_w10 != 0);
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
  }
  return;
}



/* Entry: 10810f09c; end: 10810f0d3;  */

void FUN_10810f09c(undefined8 *param_1)

{
  func_0x000108110214();
  *param_1 = 6;
  return;
}


