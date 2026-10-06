/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082704a0; end: 1082705e7;  */

void FUN_1082704a0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w9;
  int iVar2;
  long extraout_x9;
  undefined1 auStack_40 [16];
  int iStack_30;
  
  func_0x0001082709cc();
  func_0x0001082704fc();
  func_0x000108270a84();
  func_0x00010827055c();
  while ((func_0x000108270a64(), lVar1 = extraout_x8, iVar2 = iStack_30, !(bool)in_ZR ||
         ((extraout_x9 != 0 &&
          (func_0x000108270a54(), lVar1 = extraout_x8_00, iVar2 = extraout_w9, !(bool)in_ZR))))) {
    in_ZR = 0;
    func_0x0001082705c0(lVar1 + iVar2);
    func_0x000108270520(auStack_40);
  }
  func_0x000108270b08();
  return;
}



/* Entry: 1082705e8; end: 10827060b;  */

void FUN_1082705e8(undefined8 *param_1)

{
  FUN_10827060c();
  *param_1 = &PTR_FUN_110a347d8;
  return;
}



/* Entry: 10827060c; end: 1082706af;  */

void FUN_10827060c(long param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108270aa0();
  *unaff_x20 = extraout_x8;
  FUN_1082706b0(param_1 + 8,0,0xe0);
  func_0x000108270910(unaff_x20 + 10);
  func_0x000108270910(unaff_x19 + 0xa8);
  func_0x000108270910(unaff_x19 + 0x100);
  func_0x000108270910(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x19 + 0x1b0) = param_2;
  *(undefined8 *)(unaff_x19 + 0x1b8) = 0;
  return;
}



/* Entry: 1082706b0; end: 1082706bf;  */

void FUN_1082706b0(undefined8 *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1[2] = 0;
  uVar1 = param_3 + 7U >> 3;
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  uVar2 = 0x20000040000;
  if ((param_2 & 0xfffffffd) != 1) {
    uVar2 = 0x20000000000;
  }
  *param_1 = param_1 + 2;
  param_1[1] = uVar2 | ((param_2 & 3) << 0x10 | (uint)uVar1);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x38;
  *(undefined8 *)((long)param_1 + 0x24) = 0x20;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 1082706c0; end: 108270727;  */

void FUN_1082706c0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108270b78();
  *param_1 = extraout_x8;
  func_0x0001082706fc(param_1 + 0x20);
  FUN_10827047c(unaff_x19 + 0x88);
  FUN_10827047c(param_1 + 2);
  return;
}



/* Entry: 108270728; end: 10827075b;  */

undefined8 * FUN_108270728(undefined8 *param_1)

{
  FUN_10827075c();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10827075c; end: 1082707c3;  */

void FUN_10827075c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = uVar1 + (long)(int)param_1[1] * 0x18;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      uVar1 = uVar1 + 0x18;
    } while (uVar1 < uVar2);
  }
  return;
}



/* Entry: 1082707c4; end: 10827084b;  */

undefined8 FUN_1082707c4(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1a) {
    return *(undefined8 *)(&UNK_10df12528 + (ulong)param_1 * 8);
  }
  FUN_10841076c(&UNK_10f48058c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108270808);
  (*pcVar1)();
}



/* Entry: 10827084c; end: 10827088f;  */

undefined8 * FUN_10827084c(undefined8 *param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a335c0;
  param_1[2] = param_2;
  return param_1;
}



/* Entry: 108270890; end: 108270893;  */

long FUN_108270890(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 108270894; end: 1082708a7;  */

void FUN_108270894(void)

{
  FUN_1082708b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082708a8; end: 1082708b7;  */

void FUN_1082708a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1082708b8; end: 1082708db;  */

long FUN_1082708b8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 1082708dc; end: 108270b8b;  */

void FUN_1082708dc(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 108270b8c; end: 108270c87;  */

undefined8 * FUN_108270b8c(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long alStack_58 [2];
  int iStack_48;
  long alStack_40 [2];
  int iStack_30;
  long lStack_28;
  
  puVar4 = param_1;
  FUN_1082b5b88(param_1,*(undefined4 *)(param_2 + 0x2c));
  *puVar4 = &PTR_FUN_110a33638;
  lStack_28 = param_2;
  FUN_108270c88(alStack_40,&lStack_28);
  FUN_1082710ac(alStack_58,0,0);
  lVar5 = 0;
  while( true ) {
    if ((alStack_58[0] == alStack_40[0]) && ((alStack_58[0] == 0 || (iStack_48 == iStack_30))))
    break;
    if (*(int *)(param_1 + 3) <= lVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108270c6c);
      (*pcVar3)();
    }
    puVar1 = (uint *)(param_1[2] + lVar5 * 4);
    uVar2 = *(uint *)((byte *)(alStack_40[0] + iStack_30) + 0x40);
    *puVar1 = uVar2 & 0xffffff | (uint)*(byte *)((long)puVar1 + 3) << 0x18;
    *puVar1 = uVar2 & 0xffffff | (uint)*(byte *)(alStack_40[0] + iStack_30) << 0x18;
    lVar5 = lVar5 + 1;
    FUN_108270c98(alStack_40);
  }
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  return param_1;
}



/* Entry: 108270c88; end: 108270c97;  */

long * FUN_108270c88(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + 0x10);
  *param_1 = *param_2 + 0x10;
  param_1[1] = lVar1;
  FUN_1082710d0();
  return param_1;
}



/* Entry: 108270c98; end: 108270d23;  */

long * FUN_108270c98(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = (int)param_1[2] + 0x48;
  *(int *)(param_1 + 2) = iVar1;
  if (*(int *)((long)param_1 + 0x14) < iVar1) {
    plVar2 = (long *)param_1[1];
    *param_1 = (long)plVar2;
    lVar3 = 0;
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
    }
    param_1[1] = lVar3;
    FUN_1082710d0(param_1);
  }
  return param_1;
}



/* Entry: 108270d24; end: 108270e4b;  */

undefined8 FUN_108270d24(long param_1,ulong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x18) <= (int)param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x108270d64);
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (param_2 & 0x7fffffff) * 4);
  iVar1 = (int)uVar2 >> 0x18;
  puVar5 = (undefined2 *)(*(long *)(param_1 + 0x20) + ((ulong)uVar2 & 0xffffff));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (iVar1 - 5U < 8) {
      while (0 < param_3) {
        *puVar5 = (short)*param_4;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + -1;
      }
    }
    else {
      if (6 < iVar1 - 0x14U) goto LAB_1082b5cf4;
      while (0 < param_3) {
        FUN_10840ff34(*param_4);
        *puVar5 = (short)param_1;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + -1;
      }
    }
    uVar4 = 2;
  }
  else {
LAB_1082b5cf4:
    _memcpy(puVar5,param_4,(long)(param_3 << 2));
    uVar4 = 4;
  }
  return uVar4;
}



/* Entry: 108270e4c; end: 108270f63;  */

void FUN_108270e4c(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 != 0) && (*(char *)(param_1 + 0x30) == '\x01')) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (*(uint *)(param_2[2] + 0x48) < uVar1) {
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar3 = (ulong)*(uint *)(param_1 + 8);
      FUN_1082afe88();
      plVar2 = param_2;
      FUN_1082a0214();
      _memcpy((long)plVar2 + uVar3,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 8));
      plVar2 = param_2;
      FUN_1082643a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271154();
      FUN_10826cd58();
      _objc_release(plVar2);
      FUN_1082643a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271154();
      FUN_108270f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    func_0x00010c220f40(*param_3,param_2,*(undefined8 *)(param_1 + 0x20),uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010c19f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*param_3,PTR_s_setFragmentBytes_length_atIndex__112645630,
               *(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 8),0);
    return;
  }
  return;
}



/* Entry: 108270f64; end: 108271023;  */

void FUN_108270f64(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + param_4 + 9;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 == param_2) {
    if (param_1[param_4 + 10] != param_3) {
      func_0x00010c19f020(*param_1,param_3,param_3,param_4);
      param_1[param_4 + 10] = param_3;
    }
    return;
  }
  puVar1 = param_1 + param_4 + 9;
  _objc_loadWeakRetained();
  if (puVar1 == param_2) {
    lVar2 = param_1[param_4 + 10];
    _objc_release();
    if (lVar2 == param_3) {
      return;
    }
  }
  else {
    _objc_release();
  }
  func_0x00010c19f000(*param_1);
  _objc_storeWeak(param_1 + param_4 + 9,param_2);
  param_1[param_4 + 10] = param_3;
  return;
}



/* Entry: 108271024; end: 108271027;  */

undefined8 * FUN_108271024(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a36ee8;
  func_0x000108262b94(param_1 + 4);
  FUN_10827103c(param_1 + 2);
  return param_1;
}



/* Entry: 108271028; end: 10827103b;  */

void FUN_108271028(void)

{
  func_0x000108270ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827103c; end: 108271067;  */

undefined8 * FUN_10827103c(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108271068; end: 1082710ab;  */

void FUN_108271068(undefined8 *param_1,long param_2,long param_3)

{
  if (param_1[param_3 + 10] != param_2) {
    func_0x00010c19f020(*param_1,param_2,param_2,param_3);
    param_1[param_3 + 10] = param_2;
  }
  return;
}



/* Entry: 1082710ac; end: 1082710cf;  */

undefined8 * FUN_1082710ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_1082710d0();
  return param_1;
}



/* Entry: 1082710d0; end: 108271167;  */

void FUN_1082710d0(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  do {
    if (plVar2 == (long *)0x0) {
      iVar1 = 0;
      uVar3 = 0;
LAB_10827110c:
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(int *)((long)param_1 + 0x14) = iVar1;
      return;
    }
    iVar1 = *(int *)(plVar2 + 3);
    if (iVar1 != 0) {
      uVar3 = 0x20;
      goto LAB_10827110c;
    }
    plVar2 = (long *)param_1[1];
    *param_1 = (long)plVar2;
    if (plVar2 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    param_1[1] = lVar4;
  } while( true );
}



/* Entry: 108271168; end: 1082712ab;  */

undefined8 *
FUN_108271168(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_3;
  FUN_108263870(param_1 + 10,param_2,&uStack_48,0,param_6,param_7);
  uStack_50 = 0;
  FUN_1082a7fbc(param_1,&PTR_PTR_110a338a0,param_2,&uStack_48,*(undefined4 *)(*param_4 + 0xcc),0,
                param_6,param_7,&uStack_50);
  func_0x000108271c00();
  *param_1 = &PTR_DAT_110a33728;
  param_1[10] = &PTR_FUN_110a33818;
  lVar1 = *param_4;
  *param_4 = 0;
  param_1[4] = lVar1;
  uVar2 = *param_5;
  *param_5 = 0;
  param_1[5] = uVar2;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_1082a0520(param_1 + 10,0);
  return param_1;
}



/* Entry: 1082712ac; end: 10827134f;  */

long * FUN_1082712ac(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5
                    ,long *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uStack_40 = 0;
  FUN_1082a7fbc(param_1,param_2 + 1,param_3,auStack_38,*(undefined4 *)(*param_5 + 0xcc),0,param_7,
                param_8,&uStack_40);
  func_0x000108271c00();
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  lVar1 = *param_5;
  *param_5 = 0;
  param_1[4] = lVar1;
  lVar1 = *param_6;
  *param_6 = 0;
  param_1[5] = lVar1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return param_1;
}



/* Entry: 108271350; end: 10827164f;  */

long * FUN_108271350(ulong *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_108;
  long alStack_100 [3];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  ulong uStack_b8;
  char cStack_70;
  undefined4 uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_2;
  FUN_1082635d4(&lStack_d0,param_2,param_3,param_5,2,0,&UNK_10f48065d,0x1f);
  if ((int)param_4 < 2) {
    func_0x000108271c2c();
    alStack_100[0] = lStack_d0;
    lStack_d0 = 0;
    lStack_108 = 0;
    plVar5 = alStack_100;
    plVar6 = &lStack_108;
    FUN_108271168();
    plVar3 = param_2;
    param_4 = plVar2;
LAB_10827146c:
    FUN_108267bbc(plVar6);
    FUN_108267bbc(plVar5);
  }
  else {
    plVar2 = param_5;
    func_0x00010c149760();
    if (plVar2 != (long *)0x1) {
      func_0x000108271c2c();
      alStack_100[2] = lStack_d0;
      lStack_d0 = 0;
      alStack_100[1] = 0;
      plVar5 = alStack_100 + 2;
      plVar6 = alStack_100 + 1;
      FUN_108271168();
      plVar3 = param_2;
      param_4 = plVar2;
      goto LAB_10827146c;
    }
    func_0x00010c0fca60();
    iVar1 = (int)param_2[0x10];
    plVar3 = param_5;
    func_0x0001082656c0();
    if (iVar1 < (int)param_4) {
      param_4 = (long *)0x0;
    }
    else {
      plVar2 = *(long **)(param_2[4] + 0x80);
      uStack_b8 = (ulong)param_5 & 0xffffffff;
      lStack_c8 = CONCAT35(lStack_c8._5_3_,0x100000002);
      uStack_5c = 1;
      ppuStack_c0 = &PTR_DAT_110a32ac0;
      cStack_70 = '\x01';
      FUN_1082af754(&lStack_d8,plVar2,param_3,&lStack_c8,param_4,0,0);
      plVar3 = param_3;
      if (cStack_70 == '\x01') {
        func_0x000108271bf0();
        plVar3 = param_3;
      }
      lVar4 = lStack_d8;
      if (lStack_d8 == 0) {
        *param_1 = 0;
      }
      else {
        lStack_d8 = 0;
        lStack_c8 = lVar4;
        func_0x000108271c2c();
        lStack_e8 = lStack_d0;
        lStack_d0 = 0;
        lStack_c8 = 0;
        lStack_e0 = lVar4;
        FUN_108271168();
        FUN_108267bbc(&lStack_e8);
        FUN_108267bbc(&lStack_e0);
        *(uint *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0xb8) =
             *(uint *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0xb8) | 4;
        FUN_108267bbc(&lStack_c8);
        plVar3 = param_2;
        param_4 = plVar2;
      }
      FUN_108271b3c(&lStack_d8);
      if (lVar4 == 0) goto LAB_108271480;
    }
  }
  *param_1 = (ulong)param_4;
LAB_108271480:
  plVar2 = &lStack_d0;
  FUN_108267bbc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_108267bbc(&lStack_e8);
    FUN_108267bbc(&lStack_e0);
    __ZdlPv(param_4);
    FUN_108267bbc(&lStack_c8);
    FUN_108271b3c(&lStack_d8);
    plVar2 = &lStack_d0;
    FUN_108267bbc();
    func_0x000108271c08();
    lVar4 = *plVar3;
    *plVar2 = lVar4;
    *(long *)((long)plVar2 + *(long *)(lVar4 + -0x18)) = plVar3[3];
    lVar4 = 0x48;
    do {
      FUN_108271b6c((long)plVar2 + lVar4);
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0x28);
    FUN_108267bbc(plVar2 + 5);
    FUN_108267bbc(plVar2 + 4);
    lVar4 = plVar3[1];
    *plVar2 = lVar4;
    *(long *)((long)plVar2 + *(long *)(lVar4 + -0x18)) = plVar3[2];
    FUN_108271b3c(plVar2 + 2);
    FUN_108271b3c(plVar2 + 1);
    return plVar2;
  }
  return plVar2;
}



/* Entry: 108271650; end: 1082716bb;  */

long * FUN_108271650(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  lVar1 = 0x48;
  do {
    FUN_108271b6c((long)param_1 + lVar1);
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x28);
  FUN_108267bbc(param_1 + 5);
  FUN_108267bbc(param_1 + 4);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  FUN_108271b3c(param_1 + 2);
  FUN_108271b3c(param_1 + 1);
  return param_1;
}



/* Entry: 1082716bc; end: 1082716eb;  */

long FUN_1082716bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108271650(param_1,&PTR_PTR_110a33898);
  func_0x0001082638c0(lVar1 + 0x50);
  return param_1;
}



/* Entry: 1082716ec; end: 1082716fb;  */

long FUN_1082716ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x28);
  lVar2 = lVar1;
  FUN_108271650(lVar1,&PTR_PTR_110a33898);
  func_0x0001082638c0(lVar2 + 0x50);
  return lVar1;
}



/* Entry: 1082716fc; end: 10827170f;  */

void FUN_1082716fc(void)

{
  FUN_1082716bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108271710; end: 10827171f;  */

void FUN_108271710(long *param_1)

{
  FUN_1082716bc((long)param_1 + *(long *)(*param_1 + -0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108271720; end: 10827178f;  */

void FUN_108271720(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = param_2[4];
  FUN_108269b88();
  _objc_retainAutoreleasedReturnValue();
  lStack_28 = lVar1;
  FUN_108263ae0(param_1,*(undefined4 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0xb0),
                *(undefined4 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0xb4),&lStack_28);
  FUN_10810a394(&lStack_28);
  return;
}



/* Entry: 108271790; end: 1082717e3;  */

void FUN_108271790(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xd8);
  func_0x00010c0fca60();
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x1b] = 1;
  *(undefined ***)(param_1 + 2) = &PTR_DAT_110a32ac0;
  *(ulong *)(param_1 + 4) = uVar1 & 0xffffffff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}



/* Entry: 1082717e4; end: 1082717f3;  */

void FUN_1082717e4(undefined4 *param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)((long)param_2 + *(long *)(*param_2 + -0x60) + 0x20) + 0xd8);
  func_0x00010c0fca60();
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x1b] = 1;
  *(undefined ***)(param_1 + 2) = &PTR_DAT_110a32ac0;
  *(ulong *)(param_1 + 4) = uVar1 & 0xffffffff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}



/* Entry: 1082717f4; end: 10827189f;  */

long FUN_1082717f4(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_28;
  
  uVar1 = param_2 | 2;
  if (param_3 == 0) {
    uVar1 = param_2;
  }
  plVar5 = (long *)(param_1 + (ulong)uVar1 * 8 + 0x30);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
    }
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      lVar4 = 0x10;
      if (*(int *)(param_1 + 0x18) < 2) {
        lVar4 = 8;
      }
      uVar3 = *(undefined8 *)(param_1 + lVar4);
    }
    FUN_108267aa0(&uStack_28,*(undefined8 *)(param_1 + 0x20),uVar2,uVar3);
    uVar2 = uStack_28;
    uStack_28 = 0;
    func_0x000108271bd0(plVar5,uVar2);
    FUN_108271b6c(&uStack_28);
    lVar4 = *plVar5;
  }
  return lVar4;
}



/* Entry: 1082718a0; end: 1082718cf;  */

void FUN_1082718a0(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  func_0x000108271c10(param_1 + 4);
  func_0x000108271c10(param_1 + 5);
  func_0x0001082a81d4(param_1 + 1);
  func_0x0001082a81d4(param_1 + 2);
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082718d0; end: 1082718df;  */

void FUN_1082718d0(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x38));
  func_0x000108271c10(param_1 + 4);
  func_0x000108271c10(param_1 + 5);
  func_0x0001082a81d4(param_1 + 1);
  func_0x0001082a81d4(param_1 + 2);
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082718e0; end: 10827190f;  */

void FUN_1082718e0(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  func_0x000108271c10(param_1 + 4);
  func_0x000108271c10(param_1 + 5);
  func_0x0001082a81d4(param_1 + 1);
  func_0x0001082a81d4(param_1 + 2);
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108271910; end: 108271927;  */

void FUN_108271910(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x30));
  func_0x000108271c10(param_1 + 4);
  func_0x000108271c10(param_1 + 5);
  func_0x0001082a81d4(param_1 + 1);
  func_0x0001082a81d4(param_1 + 2);
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108271928; end: 108271ad3;  */

void FUN_108271928(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000108271c20((long)param_1 + *(long *)(*param_1 + -0x18));
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  func_0x000108271c18();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uStack_40 != 0) {
    func_0x000108271c20((long)param_1 + *(long *)(*param_1 + -0x18));
    if (-1 < (char)bStack_31) {
      ppuStack_48 = &ppuStack_48;
    }
    func_0x00010c25da80(puVar1,param_2,ppuStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108271c18();
    if (param_1[5] == 0) {
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed60f8,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1[4];
      FUN_108269b88(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271c34();
    }
    else {
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed61d8,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1[4];
      FUN_108269b88(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271c34();
      _objc_release(lVar2);
      func_0x000108271c44();
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed61f8,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1[5];
      FUN_108269b88(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271c34();
    }
    _objc_release(lVar2);
    func_0x000108271c44();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108271ad4; end: 108271b3b;  */

void FUN_108271ad4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x58));
  func_0x000108271c20((long)param_1 + *(long *)(*param_1 + -0x18));
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  func_0x000108271c18();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uStack_40 != 0) {
    func_0x000108271c20((long)param_1 + *(long *)(*param_1 + -0x18));
    if (-1 < (char)bStack_31) {
      ppuStack_48 = &ppuStack_48;
    }
    func_0x00010c25da80(puVar1,param_2,ppuStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108271c18();
    if (param_1[5] == 0) {
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed60f8,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1[4];
      FUN_108269b88(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271c34();
    }
    else {
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed61d8,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1[4];
      FUN_108269b88(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271c34();
      _objc_release(lVar2);
      func_0x000108271c44();
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed61f8,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1[5];
      FUN_108269b88(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271c34();
    }
    _objc_release(lVar2);
    func_0x000108271c44();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108271b3c; end: 108271b6b;  */

long * FUN_108271b3c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082647c0(*param_1 + 8);
  }
  return param_1;
}



/* Entry: 108271b6c; end: 108271b93;  */

undefined8 * FUN_108271b6c(undefined8 *param_1)

{
  FUN_108271b94(*param_1);
  return param_1;
}



/* Entry: 108271b94; end: 108271c4b;  */

void FUN_108271b94(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x000108271bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108271c4c; end: 108271cff;  */

undefined8 * FUN_108271c4c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar3 = param_1 + 1;
  param_1[2] = 0;
  *plVar3 = 0;
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 1;
  uStack_38 = param_2;
  FUN_108271d00(&lStack_40,&uStack_38);
  lVar1 = lStack_40;
  lStack_40 = 0;
  lVar2 = *plVar3;
  *plVar3 = lVar1;
  if (lVar2 != 0) {
    func_0x0001082738e0();
    lVar1 = lStack_40;
    lStack_40 = 0;
    if (lVar1 != 0) {
      func_0x0001082738e0();
    }
  }
  return param_1;
}



/* Entry: 108271d00; end: 108271d4b;  */

void FUN_108271d00(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x9;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar2 = *param_2;
  *puVar1 = &PTR_FUN_110a33a50;
  func_0x00010827393c(*(undefined8 *)(lVar2 + 0x20));
  puVar1[7] = 0;
  puVar1[8] = extraout_x9;
  *param_1 = puVar1;
  return;
}



/* Entry: 108271d4c; end: 108271d53;  */

void FUN_108271d4c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_4 == (undefined4 *)0x0) {
    FUN_1082725b0();
    return;
  }
  *param_4 = 0;
  plVar4 = (long *)(lVar1 + 0x10);
  FUN_1082726d0();
  if (plVar4 == (long *)0x0) {
    lVar3 = *(long *)(lVar1 + 0x40);
    FUN_10826e3e8(lVar3,param_2,param_3,0);
    if (lVar3 == 0) {
      return;
    }
    plVar4 = (long *)0x20;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = lVar3;
    *(undefined1 *)(plVar4 + 3) = 0;
    plStack_48 = plVar4;
    FUN_108272738(lVar1 + 0x10,param_2,&plStack_48);
    func_0x0001082738a0();
    uVar5 = 1;
  }
  else {
    plVar6 = (long *)*plVar4;
    if (*plVar6 != 0) {
      return;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    FUN_10826e3e8(uVar2,param_2,param_3,plVar6 + 1);
    FUN_108272720(plVar6,uVar2);
    plVar6 = (long *)*plVar4;
    if (*plVar6 == 0) {
      return;
    }
    lVar1 = plVar6[1];
    plVar6[1] = 0;
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(*plVar4 + 0x10);
    *(undefined8 *)(*plVar4 + 0x10) = 0;
    _objc_release(uVar2);
    uVar5 = 2;
  }
  *param_4 = uVar5;
  return;
}



/* Entry: 108271d54; end: 108271d7b;  */

void FUN_108271d54(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plStack_48;
  
  if (param_4 == (undefined4 *)0x0) {
    FUN_1082725b0();
    return;
  }
  *param_4 = 0;
  plVar3 = (long *)(param_1 + 0x10);
  FUN_1082726d0();
  if (plVar3 == (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x40);
    FUN_10826e3e8(lVar2,param_2,param_3,0);
    if (lVar2 == 0) {
      return;
    }
    plVar3 = (long *)0x20;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = lVar2;
    *(undefined1 *)(plVar3 + 3) = 0;
    plStack_48 = plVar3;
    FUN_108272738(param_1 + 0x10,param_2,&plStack_48);
    func_0x0001082738a0();
    uVar4 = 1;
  }
  else {
    plVar5 = (long *)*plVar3;
    if (*plVar5 != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    FUN_10826e3e8(uVar1,param_2,param_3,plVar5 + 1);
    FUN_108272720(plVar5,uVar1);
    plVar5 = (long *)*plVar3;
    if (*plVar5 == 0) {
      return;
    }
    lVar2 = plVar5[1];
    plVar5[1] = 0;
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(*plVar3 + 0x10);
    *(undefined8 *)(*plVar3 + 0x10) = 0;
    _objc_release(uVar1);
    uVar4 = 2;
  }
  *param_4 = uVar4;
  return;
}



/* Entry: 108271d7c; end: 108271d83;  */

undefined1 ** FUN_108271d7c(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined1 auStack_148 [24];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_d8 [136];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = auStack_d8;
  uStack_48 = 0x4400000000;
  uStack_40 = 0;
  puVar5 = *(undefined1 **)(param_2 + 0x18);
  puVar6 = *(undefined8 **)(param_2 + 0x20);
  puVar2 = auStack_d8;
  FUN_1082727c0(puVar2,puVar5,puVar6);
  if (((ulong)puVar2 & 1) == 0) {
    ppuVar7 = (undefined1 **)0x0;
  }
  else {
    lVar3 = lVar1 + 0x10;
    puVar5 = auStack_d8;
    FUN_1082726d0(lVar3,puVar5);
    if (lVar3 == 0) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      ppuVar7 = *(undefined1 ***)(lVar1 + 0x40);
      puVar6 = &uStack_f0;
      FUN_10826f7b4(ppuVar7,param_3,puVar6);
      puVar5 = param_3;
      if (((ulong)ppuVar7 & 1) != 0) {
        func_0x000108272818(&uStack_f8,&uStack_f0);
        puVar5 = auStack_d8;
        puVar6 = &uStack_f8;
        FUN_108272738(lVar1 + 0x10,puVar5,puVar6);
        func_0x0001082738a0();
      }
      func_0x0001082728c0(&uStack_f0);
    }
    else {
      ppuVar7 = (undefined1 **)0x1;
    }
  }
  FUN_108266274();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  func_0x0001082738a0();
  func_0x0001082728c0(&uStack_f0);
  ppuVar7 = &puStack_50;
  FUN_108266274();
  func_0x000108273828();
  FUN_108267790(auStack_148,puVar5,puVar6);
  ppuVar4 = ppuVar7 + 4;
  FUN_1082728ec(ppuVar4,auStack_148);
  if (ppuVar4 == (undefined1 **)0x0) {
    ppuVar4 = (undefined1 **)*ppuVar7;
    FUN_1082675e8(ppuVar4,puVar5,puVar6);
    FUN_108272a50(ppuVar7 + 4,ppuVar4);
  }
  return ppuVar4;
}



/* Entry: 108271d84; end: 108271eaf;  */

undefined1 ** FUN_108271d84(long param_1,long param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  undefined1 auStack_148 [24];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_d8 [136];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = auStack_d8;
  uStack_48 = 0x4400000000;
  uStack_40 = 0;
  puVar4 = *(undefined1 **)(param_2 + 0x18);
  puVar5 = *(undefined8 **)(param_2 + 0x20);
  puVar1 = auStack_d8;
  FUN_1082727c0(puVar1,puVar4,puVar5);
  if (((ulong)puVar1 & 1) == 0) {
    ppuVar6 = (undefined1 **)0x0;
  }
  else {
    lVar2 = param_1 + 0x10;
    puVar4 = auStack_d8;
    FUN_1082726d0(lVar2,puVar4);
    if (lVar2 == 0) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      ppuVar6 = *(undefined1 ***)(param_1 + 0x40);
      puVar5 = &uStack_f0;
      FUN_10826f7b4(ppuVar6,param_3,puVar5);
      puVar4 = param_3;
      if (((ulong)ppuVar6 & 1) != 0) {
        func_0x000108272818(&uStack_f8,&uStack_f0);
        puVar4 = auStack_d8;
        puVar5 = &uStack_f8;
        FUN_108272738(param_1 + 0x10,puVar4,puVar5);
        func_0x0001082738a0();
      }
      func_0x0001082728c0(&uStack_f0);
    }
    else {
      ppuVar6 = (undefined1 **)0x1;
    }
  }
  FUN_108266274();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001082738a0();
  func_0x0001082728c0(&uStack_f0);
  ppuVar6 = &puStack_50;
  FUN_108266274();
  func_0x000108273828();
  FUN_108267790(auStack_148,puVar4,puVar5);
  ppuVar3 = ppuVar6 + 4;
  FUN_1082728ec(ppuVar3,auStack_148);
  if (ppuVar3 == (undefined1 **)0x0) {
    ppuVar3 = (undefined1 **)*ppuVar6;
    FUN_1082675e8(ppuVar3,puVar4,puVar5);
    FUN_108272a50(ppuVar6 + 4,ppuVar3);
  }
  return ppuVar3;
}



/* Entry: 108271eb0; end: 108271f9b;  */

long FUN_108271eb0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  FUN_108267790(auStack_48,param_2,param_3);
  plVar1 = param_1 + 4;
  FUN_1082728ec(plVar1,auStack_48);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)*param_1;
    FUN_1082675e8(plVar1,param_2,param_3);
    FUN_108272a50(param_1 + 4,plVar1);
  }
  return (long)plVar1;
}



/* Entry: 108271f9c; end: 108272427;  */

undefined8 FUN_108271f9c(long *param_1,long param_2,int param_3,long param_4)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1[6] == 0) {
    lStack_a0 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (&lStack_a0,&UNK_10f480724);
    lVar10 = *param_1;
    ppuVar15 = *(undefined ***)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x40);
    ppuVar5 = &PTR_PTR_113254df0;
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar5 = ppuVar15;
    }
    FUN_108275bf8(lVar10,&lStack_a0,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1[6];
    param_1[6] = lVar10;
    _objc_release(lVar16);
    lVar10 = param_1[6];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_a0);
    if (lVar10 == 0) {
      return 0;
    }
  }
  for (lVar10 = 0;
      (ulong)(*(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU)) << 5 !=
      lVar10; lVar10 = lVar10 + 0x20) {
    lVar16 = param_1[7];
    if (((*(long *)(lVar16 + lVar10 + 8) == param_2) &&
        (*(int *)(lVar16 + lVar10 + 0x10) == param_3)) &&
       (*(long *)(lVar16 + lVar10 + 0x18) == param_4)) {
      return *(undefined8 *)(lVar16 + lVar10);
    }
  }
  puVar11 = PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240);
  func_0x00010c1b71a0();
  func_0x00010c0d8900(param_1[6]);
  func_0x00010c220f80(puVar11);
  func_0x000108273878();
  func_0x00010c0d8900(param_1[6]);
  func_0x00010c19f060(puVar11);
  func_0x000108273878();
  puVar12 = PTR__OBJC_CLASS___MTLRenderPipelineColorAttachmentDescriptor_1126d94f0;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLRenderPipelineColorAttachmentDescriptor_1126d94f0);
  func_0x00010c1dc0a0();
  func_0x00010c1719c0(puVar12);
  func_0x00010c227420(puVar12);
  func_0x00010bf40cc0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0();
  func_0x000108273900();
  func_0x00010c1e75e0(puVar11);
  func_0x00010c20a580(puVar11);
  lVar10 = *param_1;
  FUN_1082635ac();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = 0;
  func_0x00010c0d8ec0();
  _objc_retain(uStack_78);
  func_0x0001082738ec();
  if (lVar10 == 0) {
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bf260e0();
    FUN_10841076c(&UNK_10f48053b);
    func_0x0001082738ec();
  }
  FUN_10826f750(&lStack_80,lVar10);
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lStack_a0 = lStack_80;
  lStack_90 = CONCAT44(lStack_90._4_4_,param_3);
  iVar6 = (int)param_1[8];
  lStack_98 = param_2;
  lStack_88 = param_4;
  if (iVar6 < (int)(*(uint *)((long)param_1 + 0x44) >> 1)) {
    plVar2 = (long *)(param_1[7] + (long)iVar6 * 0x20);
    lStack_a0 = 0;
    *plVar2 = lStack_80;
    plVar2[3] = param_4;
    plVar2[2] = lStack_90;
    plVar2[1] = param_2;
  }
  else {
    if (iVar6 == 0x7fffffff) {
      func_0x00010bdb1a68();
      goto LAB_108272394;
    }
    uStack_68 = 0x7fffffff;
    uStack_70 = 0x20;
    puVar13 = &uStack_70;
    uVar14 = (ulong)(iVar6 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    lVar16 = lStack_a0;
    lVar18 = 0;
    plVar2 = puVar13 + (long)(int)param_1[8] * 4;
    lStack_a0 = 0;
    *plVar2 = lVar16;
    plVar2[3] = lStack_88;
    plVar2[2] = lStack_90;
    plVar2[1] = lStack_98;
    for (lVar16 = 0; lVar16 < (int)param_1[8]; lVar16 = lVar16 + 1) {
      puVar3 = (undefined8 *)((long)puVar13 + lVar18);
      puVar4 = (undefined8 *)(param_1[7] + lVar18);
      uVar17 = *puVar4;
      *puVar4 = 0;
      *puVar3 = uVar17;
      uVar19 = puVar4[2];
      uVar17 = puVar4[1];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar19;
      puVar3[1] = uVar17;
      FUN_10826b174(param_1[7] + lVar18);
      lVar18 = lVar18 + 0x20;
    }
    if ((*(byte *)((long)param_1 + 0x44) & 1) != 0) {
      _free(param_1[7]);
    }
    uVar14 = uVar14 >> 5;
    if (0x7ffffffe < uVar14) {
      uVar14 = 0x7fffffff;
    }
    param_1[7] = (long)puVar13;
    *(uint *)((long)param_1 + 0x44) = (int)uVar14 << 1 | 1;
  }
  *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  FUN_10826b174(&lStack_a0);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    uVar17 = *(undefined8 *)(param_1[7] + (ulong)*(uint *)(param_1 + 8) * 0x20 + -0x20);
    FUN_10826b5c0(&lStack_80);
    _objc_release(lVar10);
    func_0x000108273900();
    func_0x000108273878();
    _objc_release(puVar11);
    return uVar17;
  }
LAB_108272394:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x108272398);
  (*pcVar9)();
}



/* Entry: 108272428; end: 1082724d7;  */

void FUN_108272428(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  FUN_1082724d8(param_1 + 0x38);
  lVar2 = 0;
  for (lVar3 = 0; lVar3 < *(int *)(param_1 + 0x14); lVar3 = lVar3 + 1) {
    if (*(int *)(*(long *)(param_1 + 0x18) + lVar2) != 0) {
      func_0x0001082738f4();
    }
    lVar2 = lVar2 + 0x10;
  }
  FUN_108272e68(param_1 + 0x10);
  lVar2 = 0;
  for (lVar3 = 0; lVar3 < *(int *)(param_1 + 0x24); lVar3 = lVar3 + 1) {
    if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
      func_0x0001082738f4();
    }
    lVar2 = lVar2 + 0x10;
  }
  func_0x000108272edc(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 8);
  func_0x000108273010(lVar3 + 0x18);
  while (lVar2 = *(long *)(lVar3 + 0x28), lVar2 != 0) {
    func_0x000108272fb8(lVar3 + 0x28,lVar2);
    func_0x000108272fe4(lVar2);
    __ZdlPv();
  }
  return;
}



/* Entry: 1082724d8; end: 1082724f7;  */

void FUN_1082724d8(long param_1)

{
  FUN_10826b13c();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1082724f8; end: 108272553;  */

undefined8 * FUN_1082724f8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a33a50;
  while (lVar1 = param_1[5], lVar1 != 0) {
    func_0x000108272fb8(param_1 + 5,lVar1);
    FUN_108272fe4(lVar1);
    __ZdlPv();
  }
  func_0x000108272f50(param_1 + 4);
  return param_1;
}



/* Entry: 108272554; end: 108272557;  */

undefined8 * FUN_108272554(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a33a50;
  while (lVar1 = param_1[5], lVar1 != 0) {
    func_0x000108272fb8(param_1 + 5,lVar1);
    FUN_108272fe4(lVar1);
    __ZdlPv();
  }
  func_0x000108272f50(param_1 + 4);
  return param_1;
}



/* Entry: 108272558; end: 10827256b;  */

void FUN_108272558(void)

{
  FUN_1082724f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827256c; end: 1082725af;  */

void FUN_10827256c(long param_1)

{
  long lVar1;
  
  func_0x000108273010(param_1 + 8);
  while (lVar1 = *(long *)(param_1 + 0x18), lVar1 != 0) {
    func_0x000108272fb8(param_1 + 0x18,lVar1);
    func_0x000108272fe4(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 1082725b0; end: 1082726cf;  */

void FUN_1082725b0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plStack_48;
  
  *param_4 = 0;
  plVar3 = (long *)(param_1 + 0x10);
  FUN_1082726d0();
  if (plVar3 == (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x40);
    FUN_10826e3e8(lVar2,param_2,param_3,0);
    if (lVar2 == 0) {
      return;
    }
    plVar3 = (long *)0x20;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = lVar2;
    *(undefined1 *)(plVar3 + 3) = 0;
    plStack_48 = plVar3;
    FUN_108272738(param_1 + 0x10,param_2,&plStack_48);
    func_0x0001082738a0();
    uVar4 = 1;
  }
  else {
    plVar5 = (long *)*plVar3;
    if (*plVar5 != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    FUN_10826e3e8(uVar1,param_2,param_3,plVar5 + 1);
    FUN_108272720(plVar5,uVar1);
    plVar5 = (long *)*plVar3;
    if (*plVar5 == 0) {
      return;
    }
    lVar2 = plVar5[1];
    plVar5[1] = 0;
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(*plVar3 + 0x10);
    *(undefined8 *)(*plVar3 + 0x10) = 0;
    _objc_release(uVar1);
    uVar4 = 2;
  }
  *param_4 = uVar4;
  return;
}



/* Entry: 1082726d0; end: 10827271f;  */

void FUN_1082726d0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  FUN_10827309c();
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (long *)(param_1 + 0x18);
    if (lVar2 != *plVar1) {
      func_0x000108272fb8(plVar1,lVar2);
      FUN_10827313c(plVar1,lVar2);
    }
  }
  return;
}



/* Entry: 108272720; end: 108272737;  */

void FUN_108272720(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000108270ce4(lVar1 + 0x88);
      FUN_10826dbfc(lVar1 + 0x70);
      func_0x00010826de94(lVar1 + 0x68);
      func_0x00010826de70(lVar1 + 0x60);
      FUN_10826dde0(lVar1 + 0x50);
      FUN_10826b5c0(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108272738; end: 1082727bf;  */

long FUN_108272738(int *param_1)

{
  long lVar1;
  
  lVar1 = 0xb8;
  __Znwm(0xb8);
  FUN_1082732bc();
  func_0x000108273224(param_1 + 2,lVar1);
  FUN_10827313c(param_1 + 6,lVar1);
  while (*param_1 < param_1[2]) {
    FUN_108273260(param_1,*(undefined8 *)(param_1 + 8));
  }
  return lVar1 + 0xa0;
}



/* Entry: 1082727c0; end: 108272817;  */

bool FUN_1082727c0(long param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 0xffffffff80000003) == 0) {
    func_0x000108272848(param_1 + 0x88,param_3 >> 2);
    _memcpy(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
  }
  return (param_3 & 0xffffffff80000003) == 0;
}



/* Entry: 108272818; end: 1082728eb;  */

void FUN_108272818(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm();
  func_0x00010827371c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1082728ec; end: 108272907;  */

void FUN_1082728ec(void)

{
  FUN_108272908();
  return;
}



/* Entry: 108272908; end: 1082729af;  */

uint * FUN_108272908(long param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = param_2;
  FUN_1082729b0();
  iVar6 = 0;
  iVar5 = *(int *)(param_1 + 4);
  uVar7 = iVar5 - 1U & (uint)uVar3;
  while( true ) {
    if (iVar5 <= iVar6) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)(int)uVar7 * 0x10);
    if (*puVar1 == 0) break;
    if ((uint)uVar3 == *puVar1) {
      uVar4 = param_2;
      FUN_1082729cc(param_2,*(long *)(puVar1 + 2) + 0x18);
      if ((uVar4 & 1) != 0) {
        return puVar1 + 2;
      }
      iVar5 = *(int *)(param_1 + 4);
    }
    iVar2 = 0;
    if ((int)uVar7 < 1) {
      iVar2 = iVar5;
    }
    uVar7 = (uVar7 + iVar2) - 1;
    iVar6 = iVar6 + 1;
  }
  return (uint *)0x0;
}



/* Entry: 1082729b0; end: 1082729cb;  */

uint FUN_1082729b0(uint param_1)

{
  FUN_108272a38();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1082729cc; end: 108272a37;  */

bool FUN_1082729cc(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) {
    return param_1[5] == param_2[5];
  }
  return false;
}



/* Entry: 108272a38; end: 108272a4f;  */

void FUN_108272a38(undefined8 param_1)

{
  func_0x0001082738d8(param_1,0x18);
  return;
}



/* Entry: 108272a50; end: 108272a8b;  */

void FUN_108272a50(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x0001082737fc();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001082738c8();
    FUN_108272a8c();
  }
  FUN_108272b28();
  return;
}



/* Entry: 108272a8c; end: 108272b27;  */

void FUN_108272a8c(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  undefined8 extraout_x9;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  FUN_10827378c();
  uVar1 = extraout_x9;
  if (extraout_w8 != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  __Znam(uVar1);
  func_0x000108273848();
  if ((int)unaff_x21 != 0) {
    lVar2 = extraout_x8 << 4;
    do {
      *param_2 = 0;
      lVar2 = lVar2 + -0x10;
      param_2 = param_2 + 4;
    } while (lVar2 != 0);
  }
  FUN_108272be0();
  func_0x0001082738a8();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 0x10) {
    if (*(int *)(lStack_38 + unaff_x20) != 0) {
      FUN_108272b28();
    }
  }
  FUN_10826b19c(&lStack_38);
  return;
}



/* Entry: 108272b28; end: 108272bdf;  */

void FUN_108272b28(int *param_1,long *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  
  lVar7 = *param_2;
  uVar4 = (int)lVar7 + 0x18;
  FUN_1082729b0();
  iVar8 = 0;
  iVar6 = param_1[1];
  uVar9 = iVar6 - 1U & uVar4;
  while( true ) {
    if (iVar6 <= iVar8) {
      return;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar9 * 0x10);
    uVar3 = *puVar1;
    if (uVar3 == 0) break;
    if (uVar4 == uVar3) {
      uVar5 = lVar7 + 0x18;
      FUN_1082729cc(uVar5,*(long *)(puVar1 + 2) + 0x18);
      if ((uVar5 & 1) != 0) {
        func_0x000108273908();
        return;
      }
      iVar6 = param_1[1];
    }
    iVar2 = 0;
    if ((int)uVar9 < 1) {
      iVar2 = iVar6;
    }
    uVar9 = (uVar9 + iVar2) - 1;
    iVar8 = iVar8 + 1;
  }
  func_0x000108273908();
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 108272be0; end: 108272bf7;  */

void FUN_108272be0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 108272bf8; end: 108272c13;  */

void FUN_108272bf8(void)

{
  FUN_108272c14();
  return;
}



/* Entry: 108272c14; end: 108272c9b;  */

uint * FUN_108272c14(long param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = param_2;
  FUN_108272c9c();
  uVar5 = *(uint *)(param_1 + 4);
  uVar2 = uVar5 - 1 & (uint)piVar6;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if (((uint)piVar6 == *puVar1) && (*param_2 == *(int *)(*(long *)(puVar1 + 2) + 0x18))) {
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 108272c9c; end: 108272ccf;  */

uint FUN_108272c9c(uint param_1)

{
  func_0x000108272cb8();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 108272cd0; end: 108272d0b;  */

void FUN_108272cd0(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x0001082737fc();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001082738c8();
    FUN_108272d0c();
  }
  FUN_108272da8();
  return;
}



/* Entry: 108272d0c; end: 108272da7;  */

void FUN_108272d0c(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  undefined8 extraout_x9;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  FUN_10827378c();
  uVar1 = extraout_x9;
  if (extraout_w8 != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  __Znam(uVar1);
  func_0x000108273848();
  if ((int)unaff_x21 != 0) {
    lVar2 = extraout_x8 << 4;
    do {
      *param_2 = 0;
      lVar2 = lVar2 + -0x10;
      param_2 = param_2 + 4;
    } while (lVar2 != 0);
  }
  FUN_108272e50();
  func_0x0001082738a8();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 0x10) {
    if (*(int *)(lStack_38 + unaff_x20) != 0) {
      FUN_108272da8();
    }
  }
  FUN_10826b204(&lStack_38);
  return;
}



/* Entry: 108272da8; end: 108272e4f;  */

undefined8 FUN_108272da8(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  
  lVar7 = *param_2;
  uVar6 = (int)lVar7 + 0x18;
  FUN_108272c9c();
  uVar4 = param_1[1];
  uVar2 = uVar4 - 1 & uVar6;
  uVar3 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return 0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0x10);
    uVar5 = *puVar1;
    if (uVar5 == 0) break;
    if ((uVar6 == uVar5) && (*(int *)(lVar7 + 0x18) == *(int *)(*(long *)(puVar1 + 2) + 0x18))) {
      func_0x00010827391c();
      return extraout_x8_00;
    }
    uVar5 = 0;
    if ((int)uVar2 < 1) {
      uVar5 = uVar4;
    }
    uVar2 = (uVar2 + uVar5) - 1;
    uVar3 = uVar3 - 1;
  }
  func_0x00010827391c();
  *param_1 = *param_1 + 1;
  return extraout_x8;
}



/* Entry: 108272e50; end: 108272e67;  */

void FUN_108272e50(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 108272e68; end: 108272f73;  */

void FUN_108272e68(void)

{
  long unaff_x19;
  
  func_0x0001082738b8();
  func_0x000108272e90();
  FUN_10826b204(unaff_x19 + 8);
  return;
}



/* Entry: 108272f74; end: 108272fe3;  */

void FUN_108272f74(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 108272fe4; end: 108273083;  */

long FUN_108272fe4(long param_1)

{
  FUN_108273678(param_1 + 0xa0);
  FUN_108266274(param_1 + 0x88);
  return param_1;
}



/* Entry: 108273084; end: 10827309b;  */

void FUN_108273084(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10827309c; end: 10827313b;  */

uint * FUN_10827309c(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)(param_2 + 0x88);
  uVar6 = *puVar8;
  FUN_108273164(uVar6,*(undefined4 *)(param_2 + 0x90));
  uVar5 = *(uint *)(param_1 + 4);
  uVar2 = uVar5 - 1 & (uint)uVar6;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if (((uint)uVar6 == *puVar1) &&
       (puVar7 = puVar8,
       FUN_108273184(puVar8,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x88),
                     *(undefined4 *)(*(long *)(puVar1 + 2) + 0x90)), ((ulong)puVar7 & 1) != 0)) {
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 10827313c; end: 108273163;  */

void FUN_10827313c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(long *)(param_2 + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0xa8) = param_2;
  }
  *param_1 = param_2;
  if (param_1[1] != 0) {
    return;
  }
  param_1[1] = param_2;
  return;
}



/* Entry: 108273164; end: 108273183;  */

uint FUN_108273164(undefined8 param_1,int param_2)

{
  uint uVar1;
  
  func_0x0001082738d8(param_1,param_2 << 2);
  uVar1 = (uint)param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108273184; end: 1082731cf;  */

undefined1 FUN_108273184(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 1) == param_3) {
    lVar3 = 0;
    do {
      if ((ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)) << 2 == lVar3) {
        return 1;
      }
      piVar1 = (int *)(*param_1 + lVar3);
      piVar2 = (int *)(param_2 + lVar3);
      lVar3 = lVar3 + 4;
    } while (*piVar1 == *piVar2);
  }
  return 0;
}



/* Entry: 1082731d0; end: 10827325f;  */

void FUN_1082731d0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000108270ce4(param_2 + 0x88);
    FUN_10826dbfc(param_2 + 0x70);
    func_0x00010826de94(param_2 + 0x68);
    func_0x00010826de70(param_2 + 0x60);
    FUN_10826dde0(param_2 + 0x50);
    FUN_10826b5c0(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108273260; end: 1082732bb;  */

void FUN_108273260(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  FUN_10827309c();
  lVar2 = *plVar1;
  func_0x000108273508(param_1 + 8,param_2);
  func_0x000108272fb8(param_1 + 0x18,lVar2);
  if (lVar2 != 0) {
    FUN_108272fe4(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1082732bc; end: 10827330b;  */

void FUN_1082732bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x0001082732e8();
  uVar1 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  return;
}



/* Entry: 10827330c; end: 108273357;  */

long FUN_10827330c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x88) = param_1;
  *(undefined8 *)(param_1 + 0x90) = 0x4400000000;
  FUN_108273358(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



/* Entry: 108273358; end: 1082733af;  */

void FUN_108273358(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  
  func_0x000108273930();
  if (!(bool)in_ZR) {
    *(undefined4 *)(unaff_x19 + 1) = 0;
    func_0x000108272874(0x3ff0000000000000);
    iVar1 = (int)param_2[1];
    *(int *)(unaff_x19 + 1) = iVar1;
    if ((iVar1 != 0) && (*param_2 != 0)) {
      _memcpy(*unaff_x19,*param_2,(long)iVar1 << 2);
    }
  }
  return;
}



/* Entry: 1082733b0; end: 10827344b;  */

void FUN_1082733b0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  undefined8 extraout_x9;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  FUN_10827378c();
  uVar1 = extraout_x9;
  if (extraout_w8 != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  __Znam(uVar1);
  func_0x000108273848();
  if ((int)unaff_x21 != 0) {
    lVar2 = extraout_x8 << 4;
    do {
      *param_2 = 0;
      lVar2 = lVar2 + -0x10;
      param_2 = param_2 + 4;
    } while (lVar2 != 0);
  }
  FUN_108273084();
  func_0x0001082738a8();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 0x10) {
    if (*(int *)(lStack_38 + unaff_x20) != 0) {
      FUN_10827344c();
    }
  }
  func_0x000108272f50(&lStack_38);
  return;
}



/* Entry: 10827344c; end: 108273677;  */

uint * FUN_10827344c(int *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *param_2;
  uVar7 = *(undefined8 *)(lVar8 + 0x88);
  FUN_108273164(uVar7,*(undefined4 *)(lVar8 + 0x90));
  uVar5 = param_1[1];
  uVar6 = (uint)uVar7;
  uVar2 = uVar5 - 1 & uVar6;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((uVar6 == *puVar1) && (func_0x000108273890(*(undefined8 *)(puVar1 + 2)), (int)uVar7 != 0)) {
      *(long *)(puVar1 + 2) = lVar8;
      *puVar1 = uVar6;
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  *(long *)(puVar1 + 2) = lVar8;
  *puVar1 = uVar6;
  *param_1 = *param_1 + 1;
  return puVar1 + 2;
}



/* Entry: 108273678; end: 10827369b;  */

undefined8 FUN_108273678(undefined8 param_1)

{
  FUN_10827369c(param_1,0);
  return param_1;
}



/* Entry: 10827369c; end: 1082736b3;  */

void FUN_10827369c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1082736d0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


