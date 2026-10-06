/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10894725c; end: 108947313;  */

void FUN_10894725c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000108947490();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_108945030(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108944e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108947474();
  func_0x000108947454();
  FUN_108946624(uVar2);
  func_0x00010894746c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108947314; end: 108947383;  */

void FUN_108947314(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x21;
  
  lVar1 = param_1;
  func_0x000108947490();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c12a6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar2 == 0) {
    *unaff_x21 = 0;
    unaff_x21[1] = 0;
  }
  else {
    FUN_108949508(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108947384; end: 108947417;  */

long FUN_108947384(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a9bdb0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108947418; end: 108947427;  */

void FUN_108947418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9bdf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108947428; end: 108947453;  */

long FUN_108947428(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108947454; end: 108947497;  */

void FUN_108947454(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108947498; end: 1089475bb;  */

void FUN_108947498(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  func_0x00010bfb6b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1089475bc(&uStack_70);
  uVar1 = param_2;
  func_0x00010c2a5040();
  uVar2 = param_2;
  func_0x00010bfe0640();
  uVar3 = param_2;
  func_0x00010c2709c0();
  uVar4 = param_2;
  func_0x00010c0866e0();
  func_0x00010c11cc80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x000107c28124();
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[2] = uStack_60;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  *(int *)(param_1 + 3) = (int)uVar1;
  *(int *)((long)param_1 + 0x1c) = (int)uVar2;
  param_1[4] = uVar3;
  *(char *)(param_1 + 5) = (char)uVar4;
  *(ulong *)((long)param_1 + 0x2c) = uVar5 & 0xffffffffff;
  _objc_release(param_2);
  func_0x00010894593c(&uStack_70);
  func_0x000108947ba0();
  func_0x000108947b84();
  return;
}



/* Entry: 1089475bc; end: 10894771b;  */

void FUN_1089475bc(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  ppuVar1 = (undefined1 **)param_2;
  func_0x00010bf529e0();
  FUN_108947890(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x000108947b8c();
  if (puVar2 != (undefined1 *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined1 *)0x0;
      puVar5 = (undefined1 *)ppuVar1;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        puVar6 = *(undefined1 **)(lStack_118 + (long)puVar8 * 8);
        _objc_retain(puVar6);
        puVar3 = puVar6;
        func_0x000107c28244();
        ppuVar1 = &puStack_130;
        puStack_130 = puVar3;
        puStack_128 = puVar5;
        FUN_108947a70(param_1);
        _objc_release();
        puVar8 = puVar8 + 1;
        puVar5 = (undefined1 *)ppuVar1;
      } while (puVar8 < puVar2);
      func_0x000108947b8c();
      puVar2 = puVar6;
    } while (puVar6 != (undefined1 *)0x0);
  }
  func_0x000108947b84();
  func_0x000108947b84();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108947b84();
  func_0x00010894593c();
  func_0x000108947b84();
  func_0x000108947bc4();
  puVar4 = PTR_PTR_1126dade8;
  _objc_alloc(PTR_PTR_1126dade8);
  FUN_1089477d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28128((long)param_1 + 0x2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015200(puVar4);
  func_0x000108947ba0();
  func_0x000108947b84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10894771c; end: 1089477d3;  */

void FUN_10894771c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126dade8;
  _objc_alloc(PTR_PTR_1126dade8);
  lVar5 = param_1;
  FUN_1089477d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  param_1 = param_1 + 0x2c;
  func_0x000107c28128(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015200(puVar4,param_2,lVar5,uVar1,uVar2,uVar6,uVar3,param_1);
  func_0x000108947ba0();
  func_0x000108947b84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1089477d4; end: 10894788f;  */

void FUN_1089477d4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_1[1] - *param_1 >> 4)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
    lVar3 = lVar4;
    func_0x000106af6544(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    _objc_release(lVar3);
  }
  func_0x00010bf51e00(puVar2);
  FUN_108947b84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108947890; end: 108947903;  */

void FUN_108947890(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_108947904();
      func_0x000108947ba8();
      __Unwind_Resume(param_1);
      plVar1 = (long *)&UNK_10f4ed2e0;
      func_0x000104bd47e8();
      lVar2 = param_2[1] - (plVar1[1] - *plVar1);
      _memcpy(lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_108947998(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x000108947bb0();
    func_0x000108947ba8();
  }
  return;
}



/* Entry: 108947904; end: 108947917;  */

void FUN_108947904(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f4ed2e0;
  func_0x000104bd47e8();
  lVar2 = param_2[1] - (plVar1[1] - *plVar1);
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108947918; end: 108947997;  */

void FUN_108947918(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 108947998; end: 108947a03;  */

long * FUN_108947998(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001089479e0();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 108947a04; end: 108947a1f;  */

long * FUN_108947a04(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_108947a4c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108947a20; end: 108947a4b;  */

long * FUN_108947a20(long *param_1)

{
  FUN_108947a4c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108947a4c; end: 108947a6f;  */

void FUN_108947a4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108947a70; end: 108947ab3;  */

undefined8 * FUN_108947a70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_108947ab4();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 108947ab4; end: 108947b43;  */

long FUN_108947ab4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_108947b44(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_108947998(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  puStack_38 = puStack_38 + 2;
  func_0x000108947bb0();
  lVar2 = param_1[1];
  func_0x000108947ba8();
  return lVar2;
}



/* Entry: 108947b44; end: 108947b83;  */

ulong FUN_108947b44(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    return uVar1;
  }
  FUN_108947904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return unaff_x19;
}



/* Entry: 108947b84; end: 108947bcb;  */

void FUN_108947b84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108947bcc; end: 108947c93; -[ADLFrameData initWithFrameData:width:height:timestamp:keyFrame:qp:] */

undefined1 * FUN_108947bcc(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 unaff_w21;
  undefined8 unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  
  puVar1 = &stack0xffffffffffffffa0;
  FUN_108947d6c();
  func_0x000108947da4();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar1 + 0x18) = unaff_x19;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xc) = unaff_w24;
    *(undefined4 *)(puVar1 + 0x10) = unaff_w23;
    *(undefined8 *)(puVar1 + 0x20) = unaff_x22;
    puVar1[8] = unaff_w21;
    func_0x000108947da4();
    uVar2 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar1 + 0x28) = unaff_x20;
    _objc_release(uVar2);
  }
  _objc_release();
  func_0x000108947d9c();
  return puVar1;
}



/* Entry: 108947c94; end: 108947d0b; +[ADLFrameData FrameDataWithFrameData:width:height:timestamp:keyFrame:qp:] */

void FUN_108947c94(void)

{
  FUN_108947d6c();
  func_0x000108947da4();
  _objc_alloc();
  func_0x00010c015200();
  func_0x000108947d90();
  func_0x000108947d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108947d0c; end: 108947d13; -[ADLFrameData frameData] */

undefined8 FUN_108947d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108947d14; end: 108947d1b; -[ADLFrameData width] */

undefined4 FUN_108947d14(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108947d1c; end: 108947d23; -[ADLFrameData height] */

undefined4 FUN_108947d1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108947d24; end: 108947d2b; -[ADLFrameData timestamp] */

undefined8 FUN_108947d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108947d2c; end: 108947d33; -[ADLFrameData keyFrame] */

undefined1 FUN_108947d2c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108947d34; end: 108947d3b; -[ADLFrameData qp] */

undefined8 FUN_108947d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108947d3c; end: 108947d6b; -[ADLFrameData .cxx_destruct] */

void FUN_108947d3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108947d6c; end: 108947dab;  */

void FUN_108947d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 108947dac; end: 108947e63;  */

void FUN_108947dac(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110a9bef8;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108947e64);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108948144(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108947e64; end: 108947f67;  */

void FUN_108947e64(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a9bf38;
  puVar4[3] = &PTR_DAT_110a9bfb8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  puVar4[4] = *puVar6;
  lVar7 = puVar6[1];
  puVar4[5] = lVar7;
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
  puVar4[3] = &PTR_FUN_110a9bf88;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108948144(&uStack_50);
  return;
}



/* Entry: 108947f68; end: 108947f6b;  */

void FUN_108947f68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9bf38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108947f6c; end: 108947f7f;  */

void FUN_108947f6c(void)

{
  FUN_108948134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108947f80; end: 108947f8b;  */

long FUN_108947f80(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a9bef8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108947f8c; end: 108947fcb;  */

void FUN_108947f8c(void)

{
  FUN_108948170();
  return;
}



/* Entry: 108947fcc; end: 108948047;  */

void FUN_108947fcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000108944680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ad0a0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108948048; end: 10894809f;  */

void FUN_108948048(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c1ec9e0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1089480a0; end: 108948133;  */

long FUN_1089480a0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a9bef8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108948134; end: 108948143;  */

void FUN_108948134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9bf38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108948144; end: 10894816f;  */

long FUN_108948144(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108948170; end: 10894817b;  */

long FUN_108948170(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a9bef8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10894817c; end: 10894822b;  */

void FUN_10894817c(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110a9c030;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10894822c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1089484dc(&uStack_50);
  }
  FUN_108948508();
  return;
}



/* Entry: 10894822c; end: 10894832f;  */

void FUN_10894822c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a9c070;
  puVar4[3] = &PTR_DAT_110a9c0e8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  puVar4[4] = *puVar6;
  lVar7 = puVar6[1];
  puVar4[5] = lVar7;
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
  puVar4[3] = &PTR_FUN_110a9c0c0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1089484dc(&uStack_50);
  return;
}



/* Entry: 108948330; end: 108948333;  */

void FUN_108948330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9c070;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108948334; end: 108948347;  */

void FUN_108948334(void)

{
  FUN_1089484cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108948348; end: 108948353;  */

long FUN_108948348(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a9c030;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010894851c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108948354; end: 108948393;  */

void FUN_108948354(void)

{
  func_0x000108948510();
  return;
}



/* Entry: 108948394; end: 10894843b;  */

void FUN_108948394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0160(uVar2);
  func_0x00010894851c();
  func_0x000108948508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10894843c; end: 1089484cb;  */

long FUN_10894843c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a9c030;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010894851c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1089484cc; end: 1089484db;  */

void FUN_1089484cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9c070;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089484dc; end: 108948507;  */

long FUN_1089484dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108948508; end: 108948523;  */

void FUN_108948508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108948524; end: 10894859b; -[ADLNativeVideoFrameCppProxy initWithCpp:] */

undefined1 * FUN_108948524(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fd460;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108948d0c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000108944fd0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10894859c; end: 1089485ab; -[ADLNativeVideoFrameCppProxy width] */

void FUN_10894859c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089485a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1089485ac; end: 1089485bb; -[ADLNativeVideoFrameCppProxy height] */

void FUN_1089485ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089485b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 1089485bc; end: 1089485cb; -[ADLNativeVideoFrameCppProxy timestampUs] */

void FUN_1089485bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089485c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 1089485cc; end: 108948607; -[ADLNativeVideoFrameCppProxy android] */

void FUN_1089485cc(long param_1)

{
  long *plVar1;
  undefined4 uStack_14;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x28))();
  uStack_14 = SUB84(plVar1,0);
  FUN_108948d74(&uStack_14);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108948608; end: 108948643; -[ADLNativeVideoFrameCppProxy ios] */

void FUN_108948608(long param_1)

{
  long *plVar1;
  long *plStack_18;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x30))();
  plStack_18 = plVar1;
  FUN_108948e1c(&plStack_18);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108948644; end: 108948653; -[ADLNativeVideoFrameCppProxy retainFrame] */

void FUN_108948644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108948650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x38))();
  return;
}



/* Entry: 108948654; end: 108948663; -[ADLNativeVideoFrameCppProxy releaseFrame] */

void FUN_108948654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108948660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x40))();
  return;
}



/* Entry: 108948664; end: 10894875f;  */

void FUN_108948664(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dadf0;
    _objc_opt_class(PTR_PTR_1126dadf0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110a9c158;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_108948868);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_108948c00(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_108948d0c();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108948760; end: 1089487cf;  */

void FUN_108948760(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110a9c100,&PTR_DAT_110a9c110,0);
    if (lVar1 == 0) {
      FUN_108948c28(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1089487d0; end: 108948823; -[ADLNativeVideoFrameCppProxy .cxx_destruct] */

void FUN_1089487d0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9c288;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000108944fd0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108948824; end: 108948867; -[ADLNativeVideoFrameCppProxy .cxx_construct] */

undefined8 * FUN_108948824(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_108948d0c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108948868; end: 10894895f;  */

void FUN_108948868(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a9c198;
  puVar1[3] = &PTR_DAT_110a9c240;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  puVar1[4] = *puVar3;
  lVar4 = puVar3[1];
  puVar1[5] = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_108948d0c();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110a9c1e8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108948c00(&uStack_50);
  return;
}



/* Entry: 108948960; end: 108948963;  */

void FUN_108948960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9c198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108948964; end: 108948977;  */

void FUN_108948964(void)

{
  FUN_108948bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108948978; end: 108948983;  */

void FUN_108948978(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x000108948d1c(param_1 + 0x20);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  func_0x000108948d3c();
  return;
}



/* Entry: 108948984; end: 108948a4b;  */

void FUN_108948984(void)

{
  func_0x000108948d50();
  return;
}



/* Entry: 108948a4c; end: 108948aaf;  */

undefined8 FUN_108948a4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf02a40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ce20();
  func_0x000108948d34();
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 108948ab0; end: 108948b13;  */

undefined8 FUN_108948ab0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c06aea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21c40();
  func_0x000108948d34();
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 108948b14; end: 108948b63;  */

void FUN_108948b14(void)

{
  func_0x000108948d1c();
  func_0x000108948d44();
  func_0x00010c13dd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108948b64; end: 108948bef;  */

void FUN_108948b64(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x000108948d1c();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  func_0x000108948d3c();
  return;
}



/* Entry: 108948bf0; end: 108948bff;  */

void FUN_108948bf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9c198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108948c00; end: 108948c27;  */

long FUN_108948c00(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108948c28; end: 108948c9b;  */

void FUN_108948c28(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a9c288;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108948d0c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108948c9c);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108948d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108948c9c; end: 108948d0b;  */

void FUN_108948c9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dadf0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108948d0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000108944fd0(&uStack_30);
  return;
}



/* Entry: 108948d0c; end: 108948d73;  */

void FUN_108948d0c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108948d74; end: 108948da3;  */

void FUN_108948d74(void)

{
  _objc_alloc(PTR_PTR_1126dadf8);
  func_0x00010c051b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108948da4; end: 108948deb; -[ADLNativeVideoFrameAndroid initWithTexture:] */

void FUN_108948da4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108948dec; end: 108948e13; +[ADLNativeVideoFrameAndroid NativeVideoFrameAndroidWithTexture:] */

void FUN_108948dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c051b60(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108948e14; end: 108948e1b; -[ADLNativeVideoFrameAndroid texture] */

undefined4 FUN_108948e14(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108948e1c; end: 108948e4b;  */

void FUN_108948e1c(void)

{
  _objc_alloc(PTR_PTR_1126da718);
  func_0x00010bff9800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108948e4c; end: 108948e93; -[ADLNativeVideoFrameIos initWithBuffer:] */

void FUN_108948e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd470;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108948e94; end: 108948ebb; +[ADLNativeVideoFrameIos NativeVideoFrameIosWithBuffer:] */

void FUN_108948e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bff9800(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108948ebc; end: 108948ec3; -[ADLNativeVideoFrameIos buffer] */

undefined8 FUN_108948ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108948ec4; end: 108948f5f;  */

void FUN_108948ec4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dae00;
  _objc_alloc(PTR_PTR_1126dae00);
  lVar2 = param_1;
  FUN_1089477d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  FUN_1089477d4(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001060(puVar1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + 0x30));
  FUN_108948f60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108948f60; end: 108948f6b;  */

void FUN_108948f60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108948f6c; end: 108949033; -[ADLParsedFrameData initWithConfigChunks:videoChunks:timestampUs:] */

undefined1 * FUN_108948f6c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x0001089490e8();
  _objc_retain();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
    _objc_release(uVar2);
    *(undefined8 *)(puVar1 + 0x18) = unaff_x21;
  }
  _objc_release();
  func_0x000108949100();
  return puVar1;
}



/* Entry: 108949034; end: 108949093; +[ADLParsedFrameData ParsedFrameDataWithConfigChunks:videoChunks:timestampUs:] */

void FUN_108949034(void)

{
  func_0x0001089490e8();
  _objc_retain();
  _objc_alloc();
  func_0x00010c001060();
  func_0x0001089490dc();
  func_0x000108949100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108949094; end: 10894909b; -[ADLParsedFrameData configChunks] */

undefined8 FUN_108949094(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10894909c; end: 1089490a3; -[ADLParsedFrameData videoChunks] */

undefined8 FUN_10894909c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1089490a4; end: 1089490ab; -[ADLParsedFrameData timestampUs] */

undefined8 FUN_1089490a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1089490ac; end: 1089490db; -[ADLParsedFrameData .cxx_destruct] */

void FUN_1089490ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1089490dc; end: 108949107;  */

void FUN_1089490dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108949108; end: 10894917f; -[ADLRemoteVideoRenderer initWithCpp:] */

undefined1 * FUN_108949108(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fd480;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1089493f0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1089493c4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108949180; end: 1089491cb; -[ADLRemoteVideoRenderer sinkId] */

void FUN_108949180(long param_1)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_38);
  func_0x000107c27f28(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108949414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1089491cc; end: 10894921f; -[ADLRemoteVideoRenderer onFrame:] */

void FUN_1089491cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108948664(auStack_30,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_30);
  func_0x000108944fd0(auStack_30);
  return;
}


