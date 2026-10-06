/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b90f120; end: 10b90f123;  */

undefined8 * FUN_10b90f120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d757c0;
  func_0x0001080e0bc0(param_1 + 7);
  func_0x0001080e0bc0(param_1 + 3);
  return param_1;
}



/* Entry: 10b90f124; end: 10b90f137;  */

void FUN_10b90f124(void)

{
  FUN_10b90f200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90f138; end: 10b90f1ff;  */

undefined8 *
FUN_10b90f138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uStack_a8;
  undefined8 uStack_38;
  
  func_0x00010b90fc50();
  func_0x00010b910708();
  func_0x00010b910604();
  if (param_5 == (undefined8 *)0x0) {
    ___cxa_bad_cast();
    uVar1 = in_ZR;
  }
  else {
    func_0x00010b9102c4();
    param_5 = *(undefined8 **)(param_1 + 0x10);
    func_0x00010b910874(param_5,param_1 + 0x20);
    func_0x00010b90fc10(uStack_38);
    uVar1 = 0;
    if ((bool)in_ZR) {
      return param_5;
    }
  }
  ___stack_chk_fail();
  func_0x00010b90fc50();
  func_0x00010b910708();
  func_0x00010b910604();
  if (param_4 == (undefined8 *)0x0) {
    ___cxa_bad_cast();
  }
  else {
    func_0x00010b9102c4();
    param_4 = (undefined8 *)param_5[2];
    func_0x00010b910874(param_4,param_5 + 8);
    func_0x00010b90fc10(uStack_a8);
    if ((bool)uVar1) {
      return param_4;
    }
  }
  ___stack_chk_fail();
  *param_4 = &PTR_FUN_110d757c0;
  func_0x0001080e0bc0(param_4 + 7);
  func_0x0001080e0bc0(param_4 + 3);
  return param_4;
}



/* Entry: 10b90f200; end: 10b90f23b;  */

undefined8 * FUN_10b90f200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d757c0;
  func_0x0001080e0bc0(param_1 + 7);
  func_0x0001080e0bc0(param_1 + 3);
  return param_1;
}



/* Entry: 10b90f23c; end: 10b90f263;  */

void FUN_10b90f23c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b90f264; end: 10b90f287;  */

long FUN_10b90f264(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b90f288(auStack_28);
  return lStack_20 + 0x18;
}



/* Entry: 10b90f288; end: 10b90f3ff;  */

void FUN_10b90f288(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x9;
  long extraout_x10;
  ulong extraout_x12;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = *(ulong *)(param_3 + 0x10);
  FUN_10b90a560();
  lVar7 = 0;
  func_0x00010b91093c(uVar1 >> 7);
  uVar8 = extraout_x8;
  while( true ) {
    uVar8 = uVar8 & extraout_x12;
    uVar5 = *(ulong *)(*param_2 + uVar8);
    uVar4 = uVar5 ^ extraout_x9 * extraout_x10;
    for (uVar4 = uVar4 + 0xfefefefefefefeff & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar2 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      plVar6 = (long *)(uVar8 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x12)
      ;
      uVar2 = param_2[1] + (long)plVar6 * 0x20;
      FUN_10b9909a8(uVar2,param_3);
      if ((uVar2 & 1) != 0) {
        uVar3 = 0;
        goto LAB_10b90f384;
      }
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar8 = lVar7 + uVar8;
  }
  plVar6 = param_2;
  FUN_10b90f400(param_2,uVar1);
  lVar7 = param_2[1] + (long)plVar6 * 0x20;
  func_0x000107c30df0(lVar7,param_3);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(byte *)(*param_2 + (long)plVar6) = (byte)uVar1 & 0x7f;
  func_0x00010b90fd34();
  uVar3 = 1;
LAB_10b90f384:
  lVar7 = param_2[1];
  *param_1 = *param_2 + (long)plVar6;
  param_1[1] = lVar7 + (long)plVar6 * 0x20;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



/* Entry: 10b90f400; end: 10b90f477;  */

void FUN_10b90f400(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010b90feec();
  FUN_10b90f478();
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) goto LAB_10b90f430;
  bVar1 = 0xfd < *(byte *)(unaff_x21 + param_1);
  bVar2 = *(byte *)(unaff_x21 + param_1) == 0xfe;
  if (bVar2) {
    lVar3 = 0;
    goto LAB_10b90f430;
  }
  if (unaff_x22 == 0) {
LAB_10b90f458:
    FUN_10b90f4a8();
  }
  else {
    func_0x00010b91063c();
    if (bVar1 && !bVar2) {
      func_0x00010b91061c();
      goto LAB_10b90f458;
    }
    func_0x00010b90f540();
  }
  func_0x00010b910348();
  FUN_10b90f478();
  lVar3 = *(long *)(unaff_x19 + 0x28);
LAB_10b90f430:
  func_0x00010b90fec8(lVar3);
  return;
}



/* Entry: 10b90f478; end: 10b90f4a7;  */

ulong FUN_10b90f478(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b90f4a8; end: 10b90f657;  */

void FUN_10b90f4a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long lVar3;
  
  func_0x00010b9101b8();
  lVar3 = extraout_x8 + 0x10 + param_2 * 0x20;
  __Znwm(lVar3);
  func_0x00010b910078(lVar3 + extraout_x8 + 0x10);
  lVar3 = 0;
  func_0x00010b9101d0();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b9103fc(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b90f658(unaff_x21);
      func_0x00010b910154();
      FUN_10b90f478();
      func_0x00010b90fde4();
      FUN_10b90f670(extraout_x8_01 + lVar2 * 0x20,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x20;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b90f658; end: 10b90f66f;  */

void FUN_10b90f658(void)

{
  func_0x00010b9108b0();
  return;
}



/* Entry: 10b90f670; end: 10b90f70f;  */

long FUN_10b90f670(long param_1,long param_2)

{
  func_0x000107c30df0();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  func_0x00010b90f6a0(param_2 + 0x18);
  func_0x00010b910460();
  return param_2;
}



/* Entry: 10b90f710; end: 10b90f733;  */

void FUN_10b90f710(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b90f7d4(&lStack_18);
  return;
}



/* Entry: 10b90f734; end: 10b90f7d3;  */

bool FUN_10b90f734(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x10) == lVar7) goto LAB_10b90f7c8;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b90f7c8:
  return uVar5 != 0;
}



/* Entry: 10b90f7d4; end: 10b90f85f;  */

void FUN_10b90f7d4(undefined8 *param_1)

{
  func_0x00010b90f7f4(*param_1);
  func_0x00010b910444();
  return;
}



/* Entry: 10b90f860; end: 10b90f9e7;  */

void FUN_10b90f860(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  plVar3 = param_2;
  FUN_10b90f710();
  lVar7 = 0;
  uVar8 = (ulong)plVar3 >> 7;
  lVar5 = *param_2;
  while( true ) {
    uVar8 = uVar8 & param_2[3];
    uVar11 = *(ulong *)(lVar5 + uVar8);
    uVar9 = uVar11 ^ ((ulong)plVar3 & 0x7f) * 0x101010101010101;
    for (uVar9 = uVar9 + 0xfefefefefefefeff & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar10 = param_2[1];
      plVar4 = (long *)(uVar8 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_2[3]);
      if (*(long *)(lVar10 + (long)plVar4 * 0x10) == *param_3) {
        uVar6 = 0;
        goto LAB_10b90f918;
      }
    }
    if ((uVar11 & ~uVar11 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar8 = lVar7 + uVar8;
  }
  plVar4 = param_2;
  func_0x00010b90f970(param_2,plVar3);
  lVar7 = *param_2;
  plVar1 = (long *)(param_2[1] + (long)plVar4 * 0x10);
  *plVar1 = *param_3;
  plVar1[1] = 0;
  *(byte *)(lVar7 + (long)plVar4) = (byte)plVar3 & 0x7f;
  func_0x00010b90fd34();
  lVar5 = *param_2;
  lVar10 = param_2[1];
  uVar6 = 1;
LAB_10b90f918:
  *param_1 = lVar5 + (long)plVar4;
  param_1[1] = lVar10 + (long)plVar4 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10b90f9e8; end: 10b90fa17;  */

ulong FUN_10b90f9e8(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b90fa18; end: 10b90fbc7;  */

void FUN_10b90fa18(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long lVar3;
  
  func_0x00010b9101b8();
  lVar3 = extraout_x8 + 0x10 + param_2 * 0x10;
  __Znwm(lVar3);
  func_0x00010b910078(lVar3 + extraout_x8 + 0x10);
  lVar3 = 0;
  func_0x00010b9101d0();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b9103fc(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b90fbc8(unaff_x21);
      func_0x00010b910154();
      FUN_10b90f9e8();
      func_0x00010b90fde4();
      func_0x00010b90fbfc(extraout_x8_01 + lVar2 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b90fbc8; end: 10b90fbfb;  */

void FUN_10b90fbc8(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  uStack_20 = *param_1;
  puVar1 = &uStack_11;
  func_0x00010b90f81c(puVar1,&uStack_20);
  func_0x000107c27918(&uStack_21,puVar1);
  return;
}



/* Entry: 10b90fbfc; end: 10b91069b;  */

undefined8 * FUN_10b90fbfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_2 = param_2 + 1;
  *param_2 = 0;
  func_0x00010b8e0a44(*param_2);
  return param_2;
}



/* Entry: 10b91069c; end: 10b9106bf;  */

void FUN_10b91069c(void)

{
  bool bVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong extraout_x8;
  ulong uVar4;
  long lVar5;
  long extraout_x10;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar6;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar6 = *(ulong *)(unaff_x19[2] - 8);
  FUN_10b90efa0();
  puVar3 = unaff_x19;
  func_0x00010b910148();
  uVar4 = puVar3[1];
  bVar1 = *puVar3 <= uVar4;
  uVar2 = uVar4 == *puVar3;
  if ((bool)uVar2) {
    func_0x00010b910338();
    if (bVar1) {
      lVar5 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar5 = 1;
      }
      func_0x00010b910738();
      lStack_58 = lVar5 + (uVar6 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar5 + uVar4 * 8;
      lStack_60 = lVar5;
      lStack_50 = lStack_58;
      FUN_10b90a87c(&lStack_60,unaff_x19[1],unaff_x19[2]);
      func_0x00010b90fc78();
      uVar4 = unaff_x19[1];
    }
    else {
      func_0x00010b9102f4();
      uVar4 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove(uVar6);
        uVar4 = unaff_x19[2];
      }
      unaff_x19[2] = uVar4 + unaff_x22 * 8;
      uVar4 = uVar6;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  unaff_x19[1] = uVar4 - 8;
  return;
}



/* Entry: 10b9106c0; end: 10b910977;  */

void FUN_10b9106c0(void)

{
  return;
}



/* Entry: 10b910978; end: 10b9109d7;  */

undefined8 FUN_10b910978(void)

{
  int iVar1;
  
  if ((bRam00000001137fd0d8 & 1) == 0) {
    iVar1 = 0x137fd0d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd0d0,&UNK_10f7cd3b5);
      ___cxa_guard_release(0x1137fd0d8);
    }
  }
  return 0x1137fd0d0;
}



/* Entry: 10b9109d8; end: 10b910a6b;  */

undefined8 * FUN_10b9109d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d75830;
  FUN_10b8e8a48(param_1 + 3,param_2);
  param_1[5] = *param_3;
  *param_3 = 0;
  lVar4 = *param_4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[6] = lVar4;
  param_1[7] = 0x32aaaba7;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



/* Entry: 10b910a6c; end: 10b910ae3;  */

undefined8 * FUN_10b910a6c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110d75830;
  plVar1 = param_1 + 5;
  if ((*(byte *)(*plVar1 + 0x36a) & 1) == 0) {
    func_0x00010b8eb354(*plVar1);
  }
  func_0x00010b91194c();
  FUN_10b8e552c(param_1 + 0x10);
  FUN_10b9a1f08(param_1 + 7);
  func_0x000107c278f4(param_1 + 6);
  FUN_10b8fb21c(plVar1);
  func_0x00010b8e8a98(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b910ae4; end: 10b910ae7;  */

undefined8 * FUN_10b910ae4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110d75830;
  plVar1 = param_1 + 5;
  if ((*(byte *)(*plVar1 + 0x36a) & 1) == 0) {
    func_0x00010b8eb354(*plVar1);
  }
  func_0x00010b91194c();
  FUN_10b8e552c(param_1 + 0x10);
  FUN_10b9a1f08(param_1 + 7);
  func_0x000107c278f4(param_1 + 6);
  FUN_10b8fb21c(plVar1);
  func_0x00010b8e8a98(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b910ae8; end: 10b910afb;  */

void FUN_10b910ae8(void)

{
  FUN_10b910a6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b910afc; end: 10b910bb7;  */

void FUN_10b910afc(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined8 uStack_28;
  
  puVar1 = &uStack_60;
  func_0x00010b911898();
  lVar2 = *(long *)(param_1 + 0x28);
  uStack_60 = 0;
  uStack_28 = extraout_x8;
  FUN_10b8fc564();
  pcStack_58 = FUN_10b910da0;
  ppuStack_50 = &PTR_FUN_110d75860;
  lStack_48 = param_1;
  func_0x00010b9118e8();
  (*(code *)*ppuStack_50)(&ppuStack_50);
  func_0x000105276914(uStack_60);
  func_0x00010b911844(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b91188c();
  if (*(int *)(lVar2 + 0x90) == 0) {
    FUN_10b8e6bb8(lVar2 + 0x80,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar2 + 0x38);
  return;
}



/* Entry: 10b910bb8; end: 10b910c9f;  */

undefined8 * FUN_10b910bb8(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_38;
  
  func_0x00010b911898();
  puStack_70 = (undefined8 *)0x0;
  uStack_38 = extraout_x8;
  FUN_10b8fc564();
  lVar2 = *param_2;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b91187c();
    } while (extraout_w10 != 0);
  }
  pcStack_68 = FUN_10b911264;
  ppuStack_60 = &PTR_FUN_110d75880;
  puVar1 = (undefined8 *)0x10;
  lStack_78 = lVar2;
  __Znwm();
  *puVar1 = param_1;
  uStack_80 = 0;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b91187c();
    } while (extraout_w10_00 != 0);
  }
  puVar1[1] = lVar2;
  puStack_58 = puVar1;
  func_0x00010b9118e8();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  FUN_10b910ca0(&uStack_80);
  puVar1 = puStack_70;
  func_0x000105276914();
  func_0x00010b911844(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8e8dc8(puVar1 + 1);
    func_0x00010b8fc558(*puVar1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10b910ca0; end: 10b910d9f;  */

undefined8 * FUN_10b910ca0(undefined8 *param_1)

{
  func_0x00010b8e8dc8(param_1 + 1);
  func_0x00010b8fc558(*param_1);
  return param_1;
}



/* Entry: 10b910da0; end: 10b9111e7;  */

long * FUN_10b910da0(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_48;
  
  lVar6 = param_2;
  func_0x00010b911898();
  plVar4 = *(long **)(lVar6 + 0x10);
  uStack_48 = extraout_x8;
  func_0x00010b910d70();
  if ((int)plVar4 == 0) goto LAB_10b9111c0;
  lVar8 = *(long *)(param_2 + 0x10);
  lVar6 = lVar8;
  lStack_98 = lVar8;
  if (lVar8 == 0) {
    lStack_88 = 0;
    ppuStack_80 = (undefined **)0x0;
LAB_10b910e18:
    ppuVar9 = (undefined **)0x0;
    ppuStack_90 = (undefined **)0x0;
  }
  else {
    lStack_88 = lVar8;
    if (*(long *)(lVar8 + 8) == 0) {
      ppuVar9 = *(undefined ***)(lVar8 + 0x10);
      ppuStack_80 = ppuVar9;
      if (ppuVar9 == (undefined **)0x0) goto LAB_10b910e18;
      do {
        func_0x00010b91187c();
        ppuStack_90 = ppuVar9;
      } while (extraout_w10_00 != 0);
    }
    else {
      func_0x000107c278f0(&pcStack_78);
      ppuVar9 = ppuStack_70;
      if (pcStack_78 == (code *)0x0) {
        ppuVar9 = (undefined **)0x0;
        lStack_88 = 0;
        ppuStack_80 = (undefined **)0x0;
        lVar6 = 0;
      }
      else {
        ppuStack_80 = ppuStack_70;
        if (ppuStack_70 != (undefined **)0x0) {
          do {
            func_0x00010b91187c();
          } while (extraout_w10 != 0);
        }
      }
      func_0x000107c284e8(&pcStack_78);
      lStack_98 = lVar6;
      ppuStack_90 = ppuVar9;
      if (ppuVar9 == (undefined **)0x0) goto LAB_10b910e74;
    }
    do {
      func_0x00010b91187c();
    } while (extraout_w10_01 != 0);
  }
LAB_10b910e74:
  func_0x00010b911474(&lStack_88);
  func_0x000107c31088(&lStack_88,&UNK_10f686181);
  ppuStack_70 = (undefined **)CONCAT62(ppuStack_70._2_6_,1);
  pcStack_78 = (code *)0x0;
  func_0x00010b911924();
  func_0x00010b9118a8();
  func_0x000107c278f8(lStack_88);
  lStack_88 = lVar6;
  ppuStack_80 = ppuVar9;
  if (ppuVar9 != (undefined **)0x0) {
    do {
      func_0x00010b91187c();
    } while (extraout_w10_02 != 0);
  }
  func_0x000107c31088(&lStack_b0,&UNK_10f7cc202);
  lVar5 = 0x40;
  __Znwm();
  pcStack_78 = FUN_10b9114c4;
  ppuStack_70 = &PTR_DAT_110d758c0;
  lStack_68 = lVar6;
  ppuStack_60 = ppuVar9;
  if (ppuVar9 != (undefined **)0x0) {
    do {
      func_0x00010b91187c();
    } while (extraout_w10_03 != 0);
  }
  func_0x00010b911940();
  func_0x00010b9118d8();
  plVar4 = (long *)(lVar5 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_a0 = lVar5;
  FUN_10b9a8ef8(&pcStack_78,&lStack_a0);
  func_0x00010b911918();
  func_0x00010b9118a8();
  do {
    func_0x00010b911960();
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = extraout_x8_00;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bool)in_ZR) {
    func_0x00010b911858();
  }
  do {
    func_0x00010b911960();
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = extraout_x8_01;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bool)in_ZR) {
    func_0x00010b911858();
  }
  func_0x000107c278f8(lStack_b0);
  ppuVar9 = ppuStack_90;
  lVar6 = lStack_98;
  lStack_b0 = lStack_98;
  ppuStack_a8 = ppuStack_90;
  if (ppuStack_90 != (undefined **)0x0) {
    do {
      func_0x00010b91187c();
    } while (extraout_w10_04 != 0);
  }
  func_0x000107c31088(&lStack_a0,"close");
  lVar5 = 0x40;
  __Znwm();
  pcStack_78 = FUN_10b9117c0;
  ppuStack_70 = &PTR_FUN_110d758e0;
  lStack_68 = lVar6;
  ppuStack_60 = ppuVar9;
  if (ppuVar9 != (undefined **)0x0) {
    do {
      func_0x00010b91187c();
    } while (extraout_w10_05 != 0);
  }
  func_0x00010b911940();
  func_0x00010b9118d8();
  plVar4 = (long *)(lVar5 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_b8 = lVar5;
  FUN_10b9a8ef8(&pcStack_78,&lStack_b8);
  func_0x00010b911918();
  func_0x00010b9118a8();
  do {
    func_0x00010b911960();
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = extraout_x8_02;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bool)in_ZR) {
    func_0x00010b911858();
  }
  do {
    func_0x00010b911960();
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = extraout_x8_03;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bool)in_ZR) {
    func_0x00010b911858();
  }
  func_0x000107c278f8(lStack_a0);
  lVar6 = lVar8 + 0x30;
  uVar7 = 0x3f;
  func_0x00010b9a5ee8(lVar6);
  if ((uVar7 & 1) == 0) {
    lStack_a0 = *(long *)(lVar8 + 0x30);
    if (lStack_a0 != 0) {
      piVar1 = (int *)(lStack_a0 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    FUN_10b9a6488(&lStack_a0,lVar8 + 0x30,0,lVar6);
  }
  func_0x000104bd4df4(&lStack_b8);
  FUN_10b9a8e18(&pcStack_78,lVar8 + 0x30);
  lVar5 = lStack_b8;
  func_0x00010b911908(&UNK_10f58097f);
  FUN_10b8b510c(lVar5 + 0x10,auStack_c0);
  FUN_10b9a9020();
  func_0x00010b911930();
  func_0x00010b9118a8();
  if ((uVar7 & 1) == 0) {
    func_0x00010b911908("");
  }
  else {
    FUN_10b9a6470(auStack_c0,lVar8 + 0x30,lVar6);
  }
  FUN_10b9a8e18(&pcStack_78,auStack_c0);
  lVar6 = lStack_b8;
  func_0x000107c31088(&uStack_c8,&DAT_10f2c6dd8);
  FUN_10b8b510c(lVar6 + 0x10,&uStack_c8);
  FUN_10b9a9020();
  func_0x000107c278f8(uStack_c8);
  func_0x00010b9118a8();
  func_0x00010b911930();
  func_0x00010b911908("location");
  FUN_10b9a8f54(&pcStack_78,&lStack_b8);
  func_0x00010b911924();
  func_0x00010b9118a8();
  func_0x00010b911930();
  FUN_10b8f39e4(&pcStack_78,*(undefined8 *)(lVar8 + 0x28),&lStack_a0,0);
  in_ZR = pcStack_78 == (code *)0x1;
  if (!(bool)in_ZR) {
    func_0x00010b910cc8(lVar8);
  }
  func_0x0001080c6234(&pcStack_78);
  func_0x000104bd4e64(lStack_b8);
  func_0x000107c278f8(lStack_a0);
  func_0x00010b91149c(&lStack_b0);
  func_0x00010b91149c(&lStack_88);
  plVar4 = &lStack_98;
  func_0x00010b91149c();
LAB_10b9111c0:
  func_0x00010b911844(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fc558(plVar4[1]);
    return plVar4 + 1;
  }
  return plVar4;
}



/* Entry: 10b9111e8; end: 10b91123f;  */

undefined8 * FUN_10b9111e8(long param_1)

{
  func_0x00010b8fc558(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b911240; end: 10b911263;  */

undefined8 * FUN_10b911240(undefined8 *param_1)

{
  func_0x00010b8fc558(*param_1);
  return param_1;
}



/* Entry: 10b911264; end: 10b9113b3;  */

void FUN_10b911264(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *plVar4;
  long lStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x00010b911898();
  plVar4 = *(long **)(param_2 + 0x10);
  ppuVar1 = (undefined **)*plVar4;
  uStack_38 = extraout_x8;
  func_0x00010b910d70();
  if ((int)ppuVar1 != 0) {
    (**(code **)(*(long *)*param_1 + 0x20))(auStack_58,(long *)*param_1,param_1[1]);
    func_0x000107c31088(&lStack_a0,&UNK_10f686181);
    if (lStack_a0 == 0) {
      puStack_98 = &UNK_10f7d0ef0;
      uStack_90 = 0;
    }
    else {
      puStack_98 = (undefined *)(lStack_a0 + 0x18);
      uStack_90 = (ulong)*(uint *)(lStack_a0 + 0xc);
    }
    (**(code **)(*(long *)*param_1 + 0xd0))
              (auStack_78,(long *)*param_1,auStack_50,&puStack_98,param_1[1]);
    plVar2 = (long *)*param_1;
    (**(code **)(*plVar2 + 400))(plVar2,auStack_70);
    if ((int)plVar2 == 0) {
      lVar3 = *param_1;
      puStack_98 = *(undefined **)(lVar3 + 0x140);
      uStack_88 = *(undefined8 *)(lVar3 + 0x150);
      uStack_90 = *(ulong *)(lVar3 + 0x148);
      uStack_80 = 0;
    }
    else {
      func_0x0001080e08ac(&puStack_98,auStack_78);
    }
    func_0x0001080e0bc0(auStack_78);
    func_0x000107c278f8(lStack_a0);
    func_0x0001080e0bc0(auStack_58);
    plVar2 = (long *)*param_1;
    (**(code **)(*plVar2 + 400))(plVar2,&uStack_90);
    if ((int)plVar2 != 0) {
      FUN_10b8e6c24(plVar4[1],param_1,&uStack_90);
    }
    ppuVar1 = &puStack_98;
    func_0x0001080e0bc0();
  }
  func_0x00010b911844(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar1[1] != (undefined *)0x0) {
    func_0x00010b910ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9113b4; end: 10b9113d3;  */

void FUN_10b9113b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b910ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9113d4; end: 10b9113eb;  */

void FUN_10b9113d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9113ec; end: 10b9114c3;  */

void FUN_10b9113ec(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d75880;
  plVar4 = (long *)0x10;
  __Znwm();
  lVar5 = *plVar6;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *plVar4 = lVar5;
  lVar5 = plVar6[1];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar6 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[1] = lVar5;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10b9114c4; end: 10b91168f;  */

void FUN_10b9114c4(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [16];
  long alStack_a8 [2];
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_2;
  func_0x00010b911898();
  plVar3 = (long *)(lVar2 + 0x10);
  uStack_58 = extraout_x8;
  FUN_10b911690(alStack_a8);
  if ((alStack_a8[0] != 0) && (lVar2 = alStack_a8[0], func_0x00010b910d70(), (int)lVar2 != 0)) {
    FUN_10b8e62c4(&lStack_98,alStack_a8[0] + 0x18);
    lVar2 = lStack_98;
    lStack_98 = 0;
    ppuStack_90 = (undefined **)0x0;
    plVar1 = &lStack_98;
    func_0x0001080d3308(plVar1);
    if (lVar2 != 0) {
      if ((ulong)param_1[2] < 2) {
        FUN_10b9a8fc4();
      }
      else {
        plVar1 = param_1;
        FUN_10b9abfa4(param_1,1);
      }
      FUN_10b9a8f04(auStack_b8,plVar1);
      FUN_10b9abfa4(param_1,0);
      func_0x00010b8e6fa0(&lStack_68);
      if (lStack_68 == 1) {
        __ZNSt3__15mutex4lockEv(alStack_a8[0] + 0x38);
        uStack_c8 = *(undefined8 *)(alStack_a8[0] + 0x88);
        lStack_d0 = *(long *)(alStack_a8[0] + 0x80);
        if (*(long *)(alStack_a8[0] + 0x88) != 0) {
          do {
            func_0x00010b91187c();
          } while (extraout_w10 != 0);
        }
        __ZNSt3__15mutex6unlockEv(alStack_a8[0] + 0x38);
        uStack_80 = *(undefined8 *)(param_2 + 0x18);
        uStack_88 = *(undefined8 *)(param_2 + 0x10);
        if (*(long *)(param_2 + 0x18) != 0) {
          do {
            func_0x00010b91187c();
          } while (extraout_w10_00 != 0);
        }
        lStack_98 = 0x10b9116d0;
        ppuStack_90 = &PTR_FUN_110d758a0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        plVar3 = &lStack_d0;
        FUN_10b8e80f0(lStack_60,plVar3,&lStack_98);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        func_0x00010b91149c(&uStack_e0);
        FUN_10b8e552c(&lStack_d0);
      }
      else {
        plVar3 = &lStack_60;
        FUN_10b99ff08(param_1[3]);
        func_0x00010b9118f8();
      }
      FUN_10b8e99c8(&lStack_68);
      FUN_10b9a8d98(auStack_b8);
      func_0x000107c3105c(lVar2);
      in_ZR = lStack_68 == 1;
      if (!(bool)in_ZR) goto LAB_10b91165c;
    }
  }
  func_0x00010b9118f8();
LAB_10b91165c:
  plVar1 = alStack_a8;
  func_0x00010b911474();
  func_0x00010b911844(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar2 = plVar3[1];
    if (lVar2 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar1[1] = lVar2;
      if (lVar2 != 0) {
        *plVar1 = *plVar3;
      }
    }
    return;
  }
  return;
}



/* Entry: 10b911690; end: 10b911737;  */

void FUN_10b911690(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10b911738; end: 10b9117bf;  */

long FUN_10b911738(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 10b9117c0; end: 10b9117ff;  */

void FUN_10b9117c0(undefined8 param_1,long param_2)

{
  long alStack_30 [2];
  
  FUN_10b911690(alStack_30,param_2 + 0x10);
  if (alStack_30[0] != 0) {
    func_0x00010b910cc8();
  }
  func_0x00010b9118f8();
  func_0x00010b911474(alStack_30);
  return;
}



/* Entry: 10b911800; end: 10b91196b;  */

long FUN_10b911800(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 10b91196c; end: 10b911cb7;  */

void FUN_10b91196c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110d75928;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d75968;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[4] = lVar4;
  param_1[5] = param_3;
  return;
}



/* Entry: 10b911cb8; end: 10b911ccb;  */

void FUN_10b911cb8(void)

{
  return;
}



/* Entry: 10b911ccc; end: 10b911e0b;  */

long * FUN_10b911ccc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 ****ppppuStack_218;
  ulong uStack_210;
  undefined8 ****ppppuStack_208;
  ulong uStack_200;
  byte bStack_1f1;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long alStack_1d8 [4];
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [32];
  undefined8 uStack_178;
  undefined8 auStack_138 [10];
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_b8 [6];
  long alStack_88 [10];
  undefined8 uStack_38;
  
  func_0x00010b91233c();
  uStack_38 = extraout_x8;
  FUN_10b9a64d4(alStack_88,&UNK_10f7cd431);
  if (alStack_88[0] == 0) {
    lVar5 = 0;
  }
  else {
    piVar1 = (int *)(alStack_88[0] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lVar5 = alStack_88[0];
    } while (cVar2 != '\0');
  }
  alStack_b8[0] = alStack_88[0];
  alStack_b8[2] = 0;
  alStack_b8[1] = 0;
  alStack_b8[4] = 0;
  alStack_b8[3] = 0;
  func_0x000107c278f8(lVar5);
  FUN_10b9a64d4(alStack_b8 + 5,&UNK_10f7cd43e);
  func_0x00010b91234c();
  func_0x00010b912384();
  func_0x00010b8de270(alStack_88);
  func_0x000107c278f8(alStack_b8[5]);
  FUN_10b9a64d4(alStack_b8 + 5,&UNK_10f7cd44d);
  func_0x00010b91234c();
  func_0x00010b912384();
  func_0x00010b8de270(alStack_88);
  func_0x000107c278f8(alStack_b8[5]);
  FUN_10b8e97dc(alStack_88,alStack_b8);
  FUN_10b8de32c(alStack_b8);
  alStack_b8[0] = 0;
  (**(code **)(*param_3 + 0xb8))(param_1,param_3,alStack_b8,alStack_88,param_5);
  if (alStack_b8[0] != 0) {
    func_0x00010b912390();
  }
  plVar6 = alStack_88;
  FUN_10b8de32c();
  func_0x00010b912328(uStack_38);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10b911e0c;
  plStack_e0 = param_3;
  uStack_d8 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010b91233c();
  uStack_e8 = extraout_x8_00;
  FUN_10b8de54c(auStack_138);
  puVar8 = auStack_138;
  func_0x00010b8de3b8(plVar6);
  func_0x00010b8de270(auStack_138);
  func_0x00010b912328(uStack_e8);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010b91233c();
  uStack_178 = extraout_x8_02;
  FUN_10b911f98(auStack_1f0);
  uStack_1b8 = 0;
  FUN_10b911fac(auStack_1b0,puVar8,0);
  func_0x00010b8ffa54(auStack_1f0,auStack_1b0);
  func_0x0001080e0bc0(auStack_198);
  uVar4 = *(char *)(puVar8[3] + 8) == '\x01';
  if ((bool)uVar4) {
    puVar7 = puVar8;
    func_0x00010b9120a4(puVar8,1);
    uStack_1b8 = SUB81(puVar7,0);
    if ((*(byte *)(puVar8[3] + 8) & 1) != 0) {
      FUN_10bcd5a00(&ppppuStack_208,uStack_1e8,uStack_1e0);
      if ((int)puVar7 != 0) {
        FUN_10bcd5cb0(&ppppuStack_208);
      }
      uVar4 = bStack_1f1 == 0;
      uStack_210 = uStack_200;
      ppppuStack_218 = ppppuStack_208;
      if (-1 < (char)bStack_1f1) {
        uStack_210 = (ulong)bStack_1f1;
        ppppuStack_218 = &ppppuStack_208;
      }
      (**(code **)(*(long *)*puVar8 + 0x78))(auStack_1b0,(long *)*puVar8,&ppppuStack_218,puVar8[3]);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_208);
      func_0x0001080e08ac(extraout_x8_01,auStack_1b0);
      func_0x0001080e0bc0(auStack_1b0);
      goto LAB_10b911f68;
    }
  }
  func_0x00010b912364();
LAB_10b911f68:
  plVar6 = alStack_1d8;
  func_0x0001080e0bc0();
  func_0x00010b912328(uStack_178);
  if ((bool)uVar4) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar6[6] = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[1] = 0;
  *plVar6 = 0;
  *(undefined4 *)plVar6 = 9;
  plVar6[2] = 0;
  plVar6[1] = 0;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[3] = 0;
  func_0x0001080e0180();
  return plVar6;
}



/* Entry: 10b911e0c; end: 10b911e67;  */

undefined8 * FUN_10b911e0c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 **ppuStack_158;
  ulong uStack_150;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 auStack_118 [4];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined8 auStack_78 [10];
  undefined8 uStack_28;
  
  func_0x00010b91233c();
  uStack_28 = extraout_x8;
  FUN_10b8de54c(auStack_78);
  puVar3 = auStack_78;
  func_0x00010b8de3b8(param_1);
  func_0x00010b8de270(auStack_78);
  func_0x00010b912328(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b91233c();
  uStack_b8 = extraout_x8_01;
  FUN_10b911f98(auStack_130);
  uStack_f8 = 0;
  FUN_10b911fac(auStack_f0,puVar3,0);
  func_0x00010b8ffa54(auStack_130,auStack_f0);
  func_0x0001080e0bc0(auStack_d8);
  uVar1 = *(char *)(puVar3[3] + 8) == '\x01';
  if ((bool)uVar1) {
    puVar2 = puVar3;
    func_0x00010b9120a4(puVar3,1);
    uStack_f8 = SUB81(puVar2,0);
    if ((*(byte *)(puVar3[3] + 8) & 1) != 0) {
      FUN_10bcd5a00(&ppuStack_148,uStack_128,uStack_120);
      if ((int)puVar2 != 0) {
        FUN_10bcd5cb0(&ppuStack_148);
      }
      uVar1 = bStack_131 == 0;
      uStack_150 = uStack_140;
      ppuStack_158 = ppuStack_148;
      if (-1 < (char)bStack_131) {
        uStack_150 = (ulong)bStack_131;
        ppuStack_158 = &ppuStack_148;
      }
      (**(code **)(*(long *)*puVar3 + 0x78))(auStack_f0,(long *)*puVar3,&ppuStack_158,puVar3[3]);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_148);
      func_0x0001080e08ac(extraout_x8_00,auStack_f0);
      func_0x0001080e0bc0(auStack_f0);
      goto LAB_10b911f68;
    }
  }
  func_0x00010b912364();
LAB_10b911f68:
  puVar3 = auStack_118;
  func_0x0001080e0bc0();
  func_0x00010b912328(uStack_b8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    *(undefined4 *)puVar3 = 9;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    func_0x0001080e0180();
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10b911e68; end: 10b911f97;  */

undefined8 * FUN_10b911e68(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 auStack_98 [4];
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x00010b91233c();
  uStack_38 = extraout_x8;
  FUN_10b911f98(auStack_b0);
  uStack_78 = 0;
  FUN_10b911fac(auStack_70,param_3,0);
  func_0x00010b8ffa54(auStack_b0,auStack_70);
  func_0x0001080e0bc0(auStack_58);
  uVar1 = *(char *)(param_3[3] + 8) == '\x01';
  if ((bool)uVar1) {
    puVar2 = param_3;
    func_0x00010b9120a4(param_3,1);
    uStack_78 = SUB81(puVar2,0);
    if ((*(byte *)(param_3[3] + 8) & 1) != 0) {
      FUN_10bcd5a00(&ppuStack_c8,uStack_a8,uStack_a0);
      if ((int)puVar2 != 0) {
        FUN_10bcd5cb0(&ppuStack_c8);
      }
      uVar1 = bStack_b1 == 0;
      uStack_d0 = uStack_c0;
      ppuStack_d8 = ppuStack_c8;
      if (-1 < (char)bStack_b1) {
        uStack_d0 = (ulong)bStack_b1;
        ppuStack_d8 = &ppuStack_c8;
      }
      (**(code **)(*(long *)*param_3 + 0x78))(auStack_70,(long *)*param_3,&ppuStack_d8,param_3[3]);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_c8);
      func_0x0001080e08ac(param_1,auStack_70);
      func_0x0001080e0bc0(auStack_70);
      goto LAB_10b911f68;
    }
  }
  func_0x00010b912364();
LAB_10b911f68:
  puVar2 = auStack_98;
  func_0x0001080e0bc0();
  func_0x00010b912328(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar2[6] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    *(undefined4 *)puVar2 = 9;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    func_0x0001080e0180();
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b911f98; end: 10b911fab;  */

undefined8 * FUN_10b911f98(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)param_1 = 9;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  func_0x0001080e0180();
  return param_1;
}



/* Entry: 10b911fac; end: 10b91201f;  */

/* WARNING: Possible PIC construction at 0x00010b8e5fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e6000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e60a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8e6004) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6010) */
/* WARNING: Removing unreachable block (ram,0x00010b8e608c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6078) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6098) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6008) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fc8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fd4) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fcc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6128) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60a4) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60bc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60a8) */

undefined8 * FUN_10b911fac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  FUN_10b912020();
  if ((int)puVar1 != 0) {
    FUN_10b9a0050(param_2[3],&UNK_10f7cd45e);
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)param_1 = 9;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    func_0x0001080e0180();
    return param_1;
  }
  func_0x00010b8e60d4(param_1,param_2,param_3);
  func_0x00010b8e6180();
  func_0x00010b8e6118();
  return param_2;
}



/* Entry: 10b912020; end: 10b9120f3;  */

/* WARNING: Possible PIC construction at 0x00010b8e5df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e5fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e6000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e60a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8e6004) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6010) */
/* WARNING: Removing unreachable block (ram,0x00010b8e608c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6078) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6098) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6008) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fc8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fd4) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5fcc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f98) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f90) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f50) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f5c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f54) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6128) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f14) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f20) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5f18) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5ecc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5ed8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5ed0) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5e84) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5e98) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5e88) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5e3c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5e48) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5e40) */
/* WARNING: Removing unreachable block (ram,0x00010b8e6190) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5df4) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5e00) */
/* WARNING: Removing unreachable block (ram,0x00010b8e5df8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e61b8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60a4) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60bc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e60a8) */

long * FUN_10b912020(ulong *param_1,ulong **param_2)

{
  undefined1 uVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  ulong **ppuVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong *puStack_38;
  ulong **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010b91233c();
  uVar1 = param_2 == (ulong **)param_1[2];
  ppuVar5 = param_2;
  uStack_28 = extraout_x8_00;
  if (param_2 < (ulong **)param_1[2]) {
    puVar2 = param_1;
    FUN_10b8e5ce4();
    plVar3 = (long *)*param_1;
    ppuVar5 = &puStack_38;
    puStack_38 = puVar2;
    ppuStack_30 = param_2;
    (**(code **)(*plVar3 + 0x188))(plVar3,ppuVar5);
    if (((ulong)plVar3 & 1) == 0) {
      plVar3 = (long *)*param_1;
      ppuVar5 = &puStack_38;
      (**(code **)(*plVar3 + 0x180))(plVar3,ppuVar5);
      goto LAB_10b912084;
    }
  }
  plVar3 = (long *)0x1;
LAB_10b912084:
  func_0x00010b912328(uStack_28);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  plVar4 = plVar3;
  FUN_10b912020();
  if ((int)plVar4 != 0) {
    FUN_10b9a0050(plVar3[3],&UNK_10f7cd49c);
    return (long *)0x0;
  }
  func_0x00010b8e60f4(plVar3,ppuVar5);
  func_0x00010b8e61b0();
  func_0x00010b8e61a0();
  func_0x00010b8e61d0(*(undefined8 *)(extraout_x8 + 0x140));
  return plVar3;
}



/* Entry: 10b9120f4; end: 10b912327;  */

/* WARNING: Possible PIC construction at 0x00010b912128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b91212c) */
/* WARNING: Removing unreachable block (ram,0x00010b9121ec) */
/* WARNING: Removing unreachable block (ram,0x00010b91214c) */
/* WARNING: Removing unreachable block (ram,0x00010b9121f4) */
/* WARNING: Removing unreachable block (ram,0x00010b91217c) */
/* WARNING: Removing unreachable block (ram,0x00010b9121b0) */
/* WARNING: Removing unreachable block (ram,0x00010b9121b4) */
/* WARNING: Removing unreachable block (ram,0x00010b912220) */
/* WARNING: Removing unreachable block (ram,0x00010b9121c4) */
/* WARNING: Removing unreachable block (ram,0x00010b912238) */
/* WARNING: Removing unreachable block (ram,0x00010b912240) */
/* WARNING: Removing unreachable block (ram,0x00010b91225c) */
/* WARNING: Removing unreachable block (ram,0x00010b912284) */
/* WARNING: Removing unreachable block (ram,0x00010b912270) */

void FUN_10b9120f4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_c8;
  long alStack_58 [5];
  
  func_0x00010b91233c();
  lVar1 = param_2;
  FUN_10b912020();
  if ((int)lVar1 == 0) {
    alStack_58[0] = 0;
    func_0x00010b8e5f60(&uStack_c8,param_2,0);
    func_0x0001080e2d98(alStack_58,&uStack_c8);
    func_0x0001080e44b4(uStack_c8);
    if (alStack_58[0] == 0) {
      if (*(char *)(*(long *)(param_2 + 0x18) + 8) == '\x01') {
        FUN_10b9a0050(*(long *)(param_2 + 0x18),&UNK_10f7cd514);
      }
    }
  }
  else {
    FUN_10b9a0050(*(undefined8 *)(param_2 + 0x18),&UNK_10f7cd4d8);
  }
  return;
}



/* Entry: 10b912328; end: 10b91239b;  */

void FUN_10b912328(void)

{
  return;
}



/* Entry: 10b91239c; end: 10b9123bb;  */

void FUN_10b91239c(void)

{
  func_0x00010b913224();
  return;
}



/* Entry: 10b9123bc; end: 10b9123c3;  */

void FUN_10b9123bc(long param_1)

{
  param_1 = param_1 + -0x10;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10b9123c4; end: 10b9123e3;  */

void FUN_10b9123c4(void)

{
  func_0x00010b913224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9123e4; end: 10b9123f3;  */

void FUN_10b9123e4(long param_1)

{
  func_0x00010b913224(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9123f4; end: 10b912753;  */

void FUN_10b9123f4(undefined1 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b913128();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined2 *)(unaff_x19 + 1) = 0;
    *unaff_x19 = 0;
    unaff_x22 = *(undefined8 *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    uVar3 = in_ZR;
    if (lVar4 == 0) {
LAB_10b91274c:
      param_1 = (undefined1 *)0x0;
      FUN_10b91275c();
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long *)((long)register0x00000008 + -0x88) = lVar4;
      uVar3 = in_ZR;
      lVar5 = lVar4;
      if (lVar4 == 0) goto LAB_10b91274c;
      do {
        func_0x00010b9131a0();
      } while (extraout_w10 != 0);
      func_0x00010b9130f0();
      *(code **)((long)register0x00000008 + -0x78) = FUN_10b912768;
      *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_FUN_110d75af8;
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x60) = lVar4;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      FUN_10b9ac22c();
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass((undefined8 *)(lVar5 + 8),0x10);
        if (bVar2) {
          *(undefined8 *)(lVar5 + 8) = extraout_x8_00;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b9130f0();
      puVar7 = puVar6;
      func_0x00010b913050(FUN_10b91282c);
      func_0x00010b9130a0();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_00 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar6 + 8,0x10);
        if (bVar2) {
          *(undefined8 *)(puVar6 + 8) = extraout_x8_02;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b9130f0();
      puVar6 = puVar7;
      func_0x00010b913050(FUN_10b912938);
      func_0x00010b9130a0();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_01 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar7 + 8,0x10);
        if (bVar2) {
          *(undefined8 *)(puVar7 + 8) = extraout_x8_04;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_05 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_02 != 0);
      }
      func_0x00010b9130f0();
      puVar7 = puVar6;
      func_0x00010b913050(FUN_10b912ae4);
      func_0x00010b9130a0();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_02 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar6 + 8,0x10);
        if (bVar2) {
          *(undefined8 *)(puVar6 + 8) = extraout_x8_06;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_07 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010b9130f0();
      unaff_x20 = puVar7;
      func_0x00010b913050(FUN_10b912d0c);
      func_0x00010b9130a0();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_03 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar7 + 8,0x10);
        if (bVar2) {
          *(undefined8 *)(puVar7 + 8) = extraout_x8_08;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_09 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_04 != 0);
      }
      func_0x00010b9130f0();
      func_0x00010b913050(FUN_10b912fb8);
      func_0x00010b9130a0();
      unaff_x21 = (undefined8 *)(unaff_x20 + 8);
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_04 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
        if (bVar2) {
          *unaff_x21 = extraout_x8_10;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      param_1 = (undefined1 *)((long)register0x00000008 + -0x90);
      func_0x000107c284e8();
      func_0x00010b9130f8(*(undefined8 *)((long)register0x00000008 + -0x48));
      uVar3 = 0;
      if ((bool)in_ZR) {
        return;
      }
    }
    unaff_x30 = FUN_10b912754;
    ___stack_chk_fail();
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    in_ZR = uVar3;
  } while( true );
}



/* Entry: 10b912754; end: 10b91275b;  */

void FUN_10b912754(undefined1 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    param_1 = param_1 + -0x18;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b913128();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined2 *)(unaff_x19 + 1) = 0;
    *unaff_x19 = 0;
    unaff_x22 = *(undefined8 *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    uVar3 = in_ZR;
    if (lVar4 == 0) {
LAB_10b91274c:
      param_1 = (undefined1 *)0x0;
      FUN_10b91275c();
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long *)((long)register0x00000008 + -0x88) = lVar4;
      uVar3 = in_ZR;
      lVar5 = lVar4;
      if (lVar4 == 0) goto LAB_10b91274c;
      do {
        func_0x00010b9131a0();
      } while (extraout_w10 != 0);
      func_0x00010b9130f0();
      *(code **)((long)register0x00000008 + -0x78) = FUN_10b912768;
      *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_FUN_110d75af8;
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x60) = lVar4;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      FUN_10b9ac22c();
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass((undefined8 *)(lVar5 + 8),0x10);
        if (bVar2) {
          *(undefined8 *)(lVar5 + 8) = extraout_x8_00;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b9130f0();
      puVar7 = puVar6;
      func_0x00010b913050(FUN_10b91282c);
      func_0x00010b9130a0();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_00 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar6 + 8,0x10);
        if (bVar2) {
          *(undefined8 *)(puVar6 + 8) = extraout_x8_02;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b9130f0();
      puVar6 = puVar7;
      func_0x00010b913050(FUN_10b912938);
      func_0x00010b9130a0();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_01 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar7 + 8,0x10);
        if (bVar2) {
          *(undefined8 *)(puVar7 + 8) = extraout_x8_04;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_05 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_02 != 0);
      }
      func_0x00010b9130f0();
      puVar7 = puVar6;
      func_0x00010b913050(FUN_10b912ae4);
      func_0x00010b9130a0();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_02 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar6 + 8,0x10);
        if (bVar2) {
          *(undefined8 *)(puVar6 + 8) = extraout_x8_06;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_07 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010b9130f0();
      unaff_x20 = puVar7;
      func_0x00010b913050(FUN_10b912d0c);
      func_0x00010b9130a0();
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_03 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar7 + 8,0x10);
        if (bVar2) {
          *(undefined8 *)(puVar7 + 8) = extraout_x8_08;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      func_0x00010b9130d0();
      if (extraout_x8_09 != 0) {
        do {
          func_0x00010b9131a0();
        } while (extraout_w10_04 != 0);
      }
      func_0x00010b9130f0();
      func_0x00010b913050(FUN_10b912fb8);
      func_0x00010b9130a0();
      unaff_x21 = (undefined8 *)(unaff_x20 + 8);
      do {
        func_0x00010b9130c0();
      } while (extraout_w9_04 != 0);
      func_0x00010b913080();
      func_0x00010b913178();
      FUN_10b9aa86c();
      func_0x00010b9130e0();
      func_0x00010b9130e8();
      do {
        func_0x00010b913194();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
        if (bVar2) {
          *unaff_x21 = extraout_x8_10;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b913090();
      }
      func_0x00010b91313c();
      param_1 = (undefined1 *)((long)register0x00000008 + -0x90);
      func_0x000107c284e8();
      func_0x00010b9130f8(*(undefined8 *)((long)register0x00000008 + -0x48));
      uVar3 = 0;
      if ((bool)in_ZR) {
        return;
      }
    }
    unaff_x30 = FUN_10b912754;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    in_ZR = uVar3;
  } while( true );
}



/* Entry: 10b91275c; end: 10b912767;  */

void FUN_10b91275c(void)

{
  byte bVar1;
  byte *extraout_x8;
  ulong extraout_x8_00;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  _abort();
  func_0x00010b913168(&lStack_38);
  func_0x00010b9131c8();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b9130b0();
  }
  else {
    if (lStack_38 == 0) {
      func_0x00010b9131b0();
    }
    else {
      func_0x00010b9131bc();
    }
    FUN_10b9a2108(auStack_50,auStack_60);
    bVar1 = 0;
    FUN_10b99e3f8();
    extraout_x8[8] = 7;
    extraout_x8[9] = 0;
    *extraout_x8 = bVar1 & 1;
    func_0x0001080c9d44(auStack_50);
  }
  func_0x000107c278f8(lStack_38);
  return;
}



/* Entry: 10b912768; end: 10b9127eb;  */

void FUN_10b912768(byte *param_1)

{
  byte bVar1;
  ulong extraout_x8;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x00010b913168(&lStack_28);
  func_0x00010b9131c8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b9130b0();
  }
  else {
    if (lStack_28 == 0) {
      func_0x00010b9131b0();
    }
    else {
      func_0x00010b9131bc();
    }
    FUN_10b9a2108(auStack_40,auStack_50);
    bVar1 = 0;
    FUN_10b99e3f8();
    param_1[8] = 7;
    param_1[9] = 0;
    *param_1 = bVar1 & 1;
    func_0x0001080c9d44(auStack_40);
  }
  func_0x000107c278f8(lStack_28);
  return;
}



/* Entry: 10b9127ec; end: 10b91282b;  */

long FUN_10b9127ec(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001003a81fc();
  }
  return param_1 + 8;
}



/* Entry: 10b91282c; end: 10b9128f7;  */

void FUN_10b91282c(void)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_78 [48];
  long lStack_48;
  long *plStack_40;
  
  func_0x00010b913154();
  func_0x00010b9131c8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b9130b0();
  }
  else {
    if (lStack_48 == 0) {
      func_0x00010b9131b0();
    }
    else {
      func_0x00010b9131bc();
    }
    func_0x00010b9131f8();
    uVar1 = 0;
    FUN_10b99e800();
    if ((uVar1 & 1) == 0) {
      func_0x00010b913144();
      plStack_40 = &lStack_48;
      func_0x000107c2793c(&UNK_10f7cd59c);
      func_0x00010b913120(auStack_78);
      func_0x00010b9131d4();
      func_0x00010b913170();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      *unaff_x19 = 0;
      uVar2 = 1;
    }
    else {
      *(undefined1 *)unaff_x19 = 1;
      uVar2 = 7;
    }
    *(undefined1 *)(unaff_x19 + 1) = uVar2;
    *(undefined1 *)((long)unaff_x19 + 9) = 0;
    func_0x00010b913204();
  }
  func_0x000107c278f8(lStack_48);
  return;
}



/* Entry: 10b9128f8; end: 10b912937;  */

long FUN_10b9128f8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001003a81fc();
  }
  return param_1 + 8;
}



/* Entry: 10b912938; end: 10b912aa3;  */

void FUN_10b912938(void)

{
  int iVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  ulong extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar4;
  long *plStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  long lStack_58;
  long *plStack_50;
  
  func_0x00010b913154();
  func_0x00010b9131c8();
  if ((extraout_x8 & 1) == 0) {
    *(undefined2 *)(unaff_x19 + 1) = 1;
  }
  else {
    lVar2 = unaff_x20;
    FUN_10b9abfc0();
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if ((*(byte *)(lVar4 + 8) & 1) != 0) {
      if (lStack_58 == 0) {
        func_0x00010b9131b0();
        puStack_88 = extraout_x8_01;
        plStack_90 = extraout_x9_00;
      }
      else {
        func_0x00010b9131bc();
        puStack_88 = extraout_x8_00;
        plStack_90 = extraout_x9;
      }
      FUN_10b9a2108(&pppuStack_70,&plStack_90);
      iVar1 = (int)&pppuStack_70;
      func_0x00010b99e470();
      if (iVar1 == 0) {
        ppppuVar3 = &pppuStack_70;
        FUN_10b99e72c(ppppuVar3,lVar2);
        if (((ulong)ppppuVar3 & 1) != 0) goto LAB_10b912a28;
        func_0x00010b913144();
        plStack_50 = &lStack_58;
        func_0x000107c2793c(&UNK_10f7cd5e1);
        func_0x00010b913120(&plStack_90);
        func_0x00010b913248();
        func_0x00010b913170();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_90);
        func_0x00010b9130b0();
      }
      else {
LAB_10b912a28:
        *(undefined2 *)(unaff_x19 + 1) = 7;
        *(undefined1 *)unaff_x19 = 1;
      }
      func_0x00010b913204();
      goto LAB_10b912a84;
    }
    plStack_90 = &lStack_58;
    puStack_88 = &UNK_1003ab990;
    func_0x000107c2793c(&UNK_10f7cd5b8);
    func_0x00010b913120(&pppuStack_70);
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
      pppuStack_70 = &pppuStack_70;
    }
    FUN_10b99ffd4(lVar4,pppuStack_70,uStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_70);
    *(undefined2 *)(unaff_x19 + 1) = 1;
  }
  *unaff_x19 = 0;
LAB_10b912a84:
  func_0x000107c278f8(lStack_58);
  return;
}



/* Entry: 10b912aa4; end: 10b912ae3;  */

long FUN_10b912aa4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001003a81fc();
  }
  return param_1 + 8;
}



/* Entry: 10b912ae4; end: 10b912ccb;  */

/* WARNING: Removing unreachable block (ram,0x00010b912c30) */

long FUN_10b912ae4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  undefined4 uStack_cc;
  undefined8 auStack_c8 [2];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [16];
  long lStack_78;
  long *aplStack_70 [3];
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010b913128();
  uStack_38 = extraout_x8;
  func_0x00010b913168(&lStack_78);
  func_0x00010b9131c8();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b9130b0();
  }
  else {
    func_0x00010b9131ec();
    FUN_10b9a8f04(auStack_88,uVar1);
    if (lStack_78 == 0) {
      func_0x00010b9131b0();
      lStack_50 = extraout_x8_02;
      lStack_58 = extraout_x9_00;
    }
    else {
      func_0x00010b9131bc();
      lStack_50 = extraout_x8_01;
      lStack_58 = extraout_x9;
    }
    FUN_10b9a2108(auStack_a0,&lStack_58);
    FUN_10b99e488(&lStack_58,auStack_a0);
    in_ZR = lStack_58 == 1;
    if ((bool)in_ZR) {
      lStack_b8 = lStack_50;
      lStack_50 = 0;
      uStack_a8 = uStack_40;
      uStack_b0 = uStack_48;
      FUN_10b9aa82c(aplStack_70,auStack_88,&DAT_10f4178bf);
      FUN_10b9a8e9c(auStack_c8,&UNK_10f7cd630);
      func_0x00010b913230();
      func_0x00010b913218();
      if ((int)param_1 == 0) {
        FUN_10b9a8e9c(auStack_c8,&UNK_10f7cd635);
        func_0x00010b913230();
        func_0x00010b913218();
        uStack_cc = 9;
        func_0x0001080fdd10(auStack_c8,&uStack_cc,&lStack_b8);
        func_0x00010b9a8f90();
        func_0x000104bdb3b0(auStack_c8[0]);
      }
      else {
        FUN_10b9a5d00(auStack_c8,uStack_b0,uStack_a8);
        func_0x00010b9a8f9c();
        func_0x0001080e44b4(auStack_c8[0]);
      }
      FUN_10b9a8d98(aplStack_70);
      if (lStack_b8 != 0) {
        func_0x00010b91310c();
      }
    }
    else {
      func_0x00010b913144();
      aplStack_70[0] = &lStack_78;
      func_0x000107c2793c(&UNK_10f7cd60a);
      func_0x00010b913120(&lStack_b8);
      in_ZR = uStack_a8._7_1_ == '\0';
      func_0x00010b913170();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_b8);
      func_0x00010b9130b0();
    }
    func_0x0001080c5c8c(&lStack_58);
    func_0x0001080c9d44(auStack_a0);
    func_0x00010b9130e0();
  }
  func_0x000107c278f8();
  func_0x00010b9130f8(uStack_38);
  if ((bool)in_ZR) {
    return lStack_78;
  }
  ___stack_chk_fail();
  if (*(long *)(lStack_78 + 0x10) != 0) {
    func_0x0001003a81fc();
  }
  return lStack_78 + 8;
}



/* Entry: 10b912ccc; end: 10b912d0b;  */

long FUN_10b912ccc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001003a81fc();
  }
  return param_1 + 8;
}



/* Entry: 10b912d0c; end: 10b912f77;  */

long FUN_10b912d0c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *****pppppuVar4;
  undefined1 in_ZR;
  int iVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 *unaff_x19;
  long lVar7;
  long *aplStack_c8 [3];
  long *plStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  byte bStack_70;
  long lStack_68;
  long *plStack_60;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  lVar7 = param_1;
  func_0x00010b913128();
  uStack_38 = extraout_x8;
  func_0x00010b913168(&lStack_68);
  func_0x00010b9131c8();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b9130b0();
    goto LAB_10b912f58;
  }
  func_0x00010b9131ec();
  FUN_10b9a8f04(&lStack_78,lVar7);
  lVar7 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar7 + 8) & 1) == 0) {
    plStack_b0 = &lStack_68;
    plStack_a8 = (long *)&UNK_1003ab990;
    func_0x000107c2793c(&UNK_10f7cd63b);
    func_0x00010b913120(&ppppuStack_90);
    in_ZR = uStack_80._7_1_ == 0;
    uVar6 = uStack_88;
    pppppuVar4 = (undefined8 *****)ppppuStack_90;
    if (-1 < uStack_80) {
      uVar6 = (ulong)uStack_80._7_1_;
      pppppuVar4 = &ppppuStack_90;
    }
    FUN_10b99ffd4(lVar7,pppppuVar4,uVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_90);
    *(undefined2 *)(unaff_x19 + 1) = 1;
    *unaff_x19 = 0;
  }
  else {
    ppppuStack_90 = (undefined8 *****)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (bStack_70 == 10) {
      func_0x000105c3d468(&ppppuStack_90,lStack_78 + 0x18);
    }
    else if ((bStack_70 & 0xfe) == 2) {
      FUN_10b9a9358(aplStack_c8,&lStack_78);
      if (aplStack_c8[0] == (long *)0x0) {
LAB_10b912e38:
        uStack_a0 = 0;
        plStack_a8 = (long *)&UNK_10f7d0ef0;
      }
      else {
        plVar1 = aplStack_c8[0] + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (aplStack_c8[0] == (long *)0x0) goto LAB_10b912e38;
        plStack_a8 = aplStack_c8[0] + 3;
        uStack_a0 = (ulong)*(uint *)((long)aplStack_c8[0] + 0xc);
      }
      plStack_b0 = aplStack_c8[0];
      func_0x000104c625c4(&ppppuStack_90,&plStack_b0);
      if (plStack_b0 != (long *)0x0) {
        func_0x00010b91310c();
      }
      func_0x000107c278f8(aplStack_c8[0]);
    }
    if (lStack_68 == 0) {
      func_0x00010b9131b0();
    }
    else {
      func_0x00010b9131bc();
    }
    func_0x00010b9131f8();
    iVar5 = (int)&plStack_b0;
    FUN_10b99e458();
    if (iVar5 != 0) {
      FUN_10b99e800(&plStack_b0);
    }
    if (1 < (ulong)(((long)plStack_a8 - (long)plStack_b0) / 0x18)) {
      FUN_10b9a25d8(aplStack_c8,&plStack_b0);
      uVar6 = 0;
      func_0x00010b99e470();
      if ((uVar6 & 1) == 0) {
        FUN_10b99e72c(aplStack_c8,1);
      }
      func_0x0001080c9d44(aplStack_c8);
    }
    FUN_10b99e580(alStack_48,&plStack_b0,&ppppuStack_90);
    in_ZR = alStack_48[0] == 1;
    if (!(bool)in_ZR) {
      func_0x00010b913144();
      plStack_60 = &lStack_68;
      func_0x000107c2793c(&UNK_10f7cd662);
      func_0x00010b913120(aplStack_c8);
      func_0x00010b9131d4();
      func_0x00010b913170();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(aplStack_c8);
    }
    func_0x00010b9130b0();
    func_0x0001080c6234(alStack_48);
    func_0x00010b913204();
    if ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0) {
      func_0x00010b91310c();
    }
  }
  FUN_10b9a8d98(&lStack_78);
LAB_10b912f58:
  func_0x000107c278f8();
  func_0x00010b9130f8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (*(long *)(lStack_68 + 0x10) != 0) {
      func_0x0001003a81fc();
    }
    return lStack_68 + 8;
  }
  return lStack_68;
}



/* Entry: 10b912f78; end: 10b912fb7;  */

long FUN_10b912f78(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001003a81fc();
  }
  return param_1 + 8;
}



/* Entry: 10b912fb8; end: 10b91300f;  */

void FUN_10b912fb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_10b99ea20(auStack_38);
  FUN_10b9a2460(auStack_50,auStack_38);
  func_0x00010b913248();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    puVar2 = auStack_50;
  }
  FUN_10b9a8dd4(param_1,puVar2,uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  func_0x0001080c9d44(auStack_38);
  return;
}



/* Entry: 10b913010; end: 10b91326f;  */

long FUN_10b913010(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001003a81fc();
  }
  return param_1 + 8;
}



/* Entry: 10b913270; end: 10b91337f;  */

void FUN_10b913270(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110d75bc8;
  param_1[1] = 1;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar5;
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
  return;
}



/* Entry: 10b913380; end: 10b91349f;  */

undefined8 *
FUN_10b913380(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 *param_5
             ,long *param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110d75c20;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[6] = &UNK_10dd5b8b0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_10b9a2210(param_1 + 0xc);
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
  param_1[0xf] = lVar4;
  param_1[0x10] = 0;
  lVar4 = *param_4;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x00010b914e20();
      lVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0x11] = lVar4;
  lVar4 = param_5[1];
  uVar5 = *param_5;
  param_1[0x13] = param_5[1];
  param_1[0x12] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_6;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x14] = lVar4;
  param_1[0x15] = param_7;
  *(undefined1 *)(param_1 + 0x16) = param_9;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[5] = param_8;
  FUN_10b9134a0(param_1);
  return param_1;
}



/* Entry: 10b9134a0; end: 10b9135a3;  */

void FUN_10b9134a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  int extraout_w11;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  if (*(long *)(param_1 + 0x88) == 0) {
    func_0x000107c31088(&uStack_50,&DAT_10f570415);
  }
  else {
    uStack_50 = 0;
    if (*(long *)(*(long *)(param_1 + 0x88) + 0x18) != 0) {
      do {
        func_0x00010b914c48();
        uStack_50 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  FUN_10b9a2210(auStack_48,&uStack_50);
  func_0x000107c278f8(uStack_50);
  (**(code **)(**(long **)(param_1 + 0x78) + 0x40))
            (&uStack_50,*(long **)(param_1 + 0x78),auStack_48,0);
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar4 = 0x88;
    __Znwm();
    lVar5 = lVar4;
    func_0x00010b931714();
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_58 = lVar4;
    func_0x00010b913b48(&uStack_50,&lStack_58);
    func_0x0001080d8654(lStack_58);
    func_0x00010b914ba4(lVar4);
  }
  func_0x00010b913b48(param_1 + 0x80,&uStack_50);
  func_0x0001080d8654(uStack_50);
  func_0x0001080c9d44(auStack_48);
  return;
}



/* Entry: 10b9135a4; end: 10b913617;  */

undefined8 * FUN_10b9135a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d75c20;
  FUN_10b914214(param_1 + 0x17);
  func_0x000104bd5214(param_1 + 0x14);
  func_0x0001080d8598(param_1 + 0x12);
  func_0x000105275bd0(param_1 + 0x11);
  func_0x0001080e6aa4(param_1 + 0x10);
  func_0x0001080e6aa4(param_1 + 0xf);
  func_0x0001080c9d44(param_1 + 0xc);
  FUN_10b932c7c(param_1 + 6);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b913618; end: 10b91361b;  */

undefined8 * FUN_10b913618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d75c20;
  FUN_10b914214(param_1 + 0x17);
  func_0x000104bd5214(param_1 + 0x14);
  func_0x0001080d8598(param_1 + 0x12);
  func_0x000105275bd0(param_1 + 0x11);
  func_0x0001080e6aa4(param_1 + 0x10);
  func_0x0001080e6aa4(param_1 + 0xf);
  func_0x0001080c9d44(param_1 + 0xc);
  FUN_10b932c7c(param_1 + 6);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b91361c; end: 10b91362f;  */

void FUN_10b91361c(void)

{
  FUN_10b9135a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b913630; end: 10b9137ab;  */

void FUN_10b913630(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar2;
  undefined8 *extraout_x8_03;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x19;
  long *plVar4;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [5];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_58;
  
  func_0x00010b914c10();
  uStack_58 = extraout_x8;
  func_0x00010b914e90();
  lStack_f8 = 0;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b914c48();
      lStack_f8 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  plVar4 = (long *)*param_3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  uStack_e0 = param_3[2];
  uStack_e8 = param_3[1];
  plStack_f0 = plVar4;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  FUN_10b9137ac(&uStack_c8,param_1);
  uStack_b8 = *param_6;
  func_0x00010b914d20(*(undefined8 *)(param_6[1] + 0x10),alStack_b0);
  uStack_88 = 0x10b91426c;
  ppuStack_80 = &PTR_FUN_110d75c68;
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  uVar2 = 0;
  if (lStack_f8 != 0) {
    do {
      func_0x00010b914c48();
      uVar2 = extraout_x8_02;
    } while (extraout_w11_00 != 0);
  }
  plVar4 = plStack_f0;
  *puVar1 = uVar2;
  if (plStack_f0 != (long *)0x0) {
    (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
  }
  puVar1[1] = plVar4;
  puVar1[3] = uStack_e0;
  puVar1[2] = uStack_e8;
  puVar1[5] = uStack_d0;
  puVar1[4] = uStack_d8;
  puVar1[7] = uStack_c0;
  puVar1[6] = uStack_c8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puVar1[8] = uStack_b8;
  (**(code **)(alStack_b0[0] + 0x10))(puVar1 + 9,alStack_b0);
  puStack_78 = puVar1;
  func_0x00010b914da0(*(undefined8 *)(*unaff_x19 + 0x28));
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar4 = &lStack_f8;
  func_0x00010b91383c();
  func_0x00010b914be8(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (plVar4 == (long *)0x0) {
      *extraout_x8_03 = 0;
      extraout_x8_03[1] = 0;
    }
    else {
      puStack_120 = puVar1;
      if (plVar4[1] == 0) {
        lVar3 = plVar4[2];
        *extraout_x8_03 = plVar4;
        extraout_x8_03[1] = lVar3;
        if (lVar3 != 0) {
          do {
            func_0x00010b914cd4();
          } while (extraout_w10_00 != 0);
        }
      }
      else {
        func_0x000107c278f0(&lStack_130);
        if (lStack_130 == 0) {
          *extraout_x8_03 = 0;
          extraout_x8_03[1] = 0;
        }
        else {
          *extraout_x8_03 = plVar4;
          extraout_x8_03[1] = lStack_128;
          if (lStack_128 != 0) {
            do {
              func_0x00010b914cd4();
            } while (extraout_w10 != 0);
          }
        }
        func_0x000107c284e8(&lStack_130);
      }
    }
    return;
  }
  return;
}



/* Entry: 10b9137ac; end: 10b913877;  */

void FUN_10b9137ac(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x00010b914cd4();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x00010b914cd4();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c284e8(&lStack_30);
  }
  return;
}



/* Entry: 10b913878; end: 10b91394b;  */

undefined8 * FUN_10b913878(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_38;
  
  puVar2 = &uStack_80;
  func_0x00010b914bfc();
  plVar3 = *(long **)(param_1 + 0xa0);
  func_0x00010b914e08();
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  pcStack_68 = FUN_10b9143bc;
  ppuStack_60 = &PTR_FUN_110d75c88;
  puVar1 = (undefined8 *)0x18;
  lStack_70 = lVar4;
  __Znwm();
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10_00 != 0);
  }
  puVar1[2] = lVar4;
  puStack_58 = puVar1;
  func_0x00010b914da0(*(undefined8 *)(*plVar3 + 0x28));
  func_0x00010b914ce4(ppuStack_60);
  FUN_10b91394c();
  func_0x00010b914be8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105275bd0((undefined1 *)((long)puVar2 + 0x10));
    if (*(long *)((long)puVar2 + 8) != 0) {
      func_0x000107c27b90();
    }
    return (undefined8 *)(undefined1 *)puVar2;
  }
  return puVar2;
}



/* Entry: 10b91394c; end: 10b913b7f;  */

long FUN_10b91394c(long param_1)

{
  func_0x000105275bd0(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b913b80; end: 10b913bf3;  */

undefined1 * FUN_10b913b80(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  puVar1 = auStack_b0;
  func_0x00010b914bfc();
  func_0x00010b914e08();
  func_0x00010b914d50();
  uStack_68 = 0x10b9144dc;
  ppuStack_60 = &PTR_FUN_110d75ca8;
  func_0x00010b914e00();
  func_0x00010b914d28();
  func_0x00010b914da8();
  func_0x00010b914c68();
  FUN_10b913bf4(auStack_b0);
  func_0x00010b914be8(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b914df0();
  if (*(long *)(param_2 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_2;
}



/* Entry: 10b913bf4; end: 10b913c0f;  */

void FUN_10b913bf4(void)

{
  long unaff_x19;
  
  func_0x00010b914df0();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b913c10; end: 10b913ca7;  */

long * FUN_10b913c10(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *unaff_x19;
  long alStack_b0 [9];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  plVar1 = alStack_b0;
  func_0x00010b914bfc();
  func_0x00010b914e90();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11 != 0);
  }
  func_0x00010b914cf0();
  func_0x00010b914ca0();
  pcStack_68 = FUN_10b914684;
  ppuStack_60 = &PTR_FUN_110d75cc8;
  func_0x00010b914d98();
  if (alStack_b0[0] != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11_00 != 0);
  }
  func_0x00010b914c20();
  func_0x00010b914cbc();
  func_0x00010b914c68();
  FUN_10b913ca8(alStack_b0);
  func_0x00010b914be8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b914d10();
    func_0x00010b914e58();
    func_0x00010007e5d0();
    func_0x0001003a8cb8();
    return (long *)unaff_x19;
  }
  return plVar1;
}



/* Entry: 10b913ca8; end: 10b913cc7;  */

undefined8 FUN_10b913ca8(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b914d10();
  func_0x00010b914e58();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b913cc8; end: 10b913d5f;  */

long * FUN_10b913cc8(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *unaff_x19;
  long alStack_b0 [9];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  plVar1 = alStack_b0;
  func_0x00010b914bfc();
  func_0x00010b914e90();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11 != 0);
  }
  func_0x00010b914cf0();
  func_0x00010b914ca0();
  pcStack_68 = FUN_10b914800;
  ppuStack_60 = &PTR_FUN_110d75ce8;
  func_0x00010b914d98();
  if (alStack_b0[0] != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11_00 != 0);
  }
  func_0x00010b914c20();
  func_0x00010b914cbc();
  func_0x00010b914c68();
  FUN_10b913d60(alStack_b0);
  func_0x00010b914be8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b914d10();
    func_0x00010b914e58();
    func_0x00010007e5d0();
    func_0x0001003a8cb8();
    return (long *)unaff_x19;
  }
  return plVar1;
}



/* Entry: 10b913d60; end: 10b913d7f;  */

undefined8 FUN_10b913d60(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b914d10();
  func_0x00010b914e58();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b913d80; end: 10b913e17;  */

long * FUN_10b913d80(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *unaff_x19;
  long alStack_b0 [9];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  plVar1 = alStack_b0;
  func_0x00010b914bfc();
  func_0x00010b914e90();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11 != 0);
  }
  func_0x00010b914cf0();
  func_0x00010b914ca0();
  uStack_68 = 0x10b9148a4;
  ppuStack_60 = &PTR_FUN_110d75d08;
  func_0x00010b914d98();
  if (alStack_b0[0] != 0) {
    do {
      func_0x00010b914c48();
    } while (extraout_w11_00 != 0);
  }
  func_0x00010b914c20();
  func_0x00010b914cbc();
  func_0x00010b914c68();
  FUN_10b913e18(alStack_b0);
  func_0x00010b914be8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b914d10();
    func_0x00010b914e58();
    func_0x00010007e5d0();
    func_0x0001003a8cb8();
    return (long *)unaff_x19;
  }
  return plVar1;
}



/* Entry: 10b913e18; end: 10b913e37;  */

undefined8 FUN_10b913e18(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b914d10();
  func_0x00010b914e58();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b913e38; end: 10b913eab;  */

undefined1 * FUN_10b913e38(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  puVar1 = auStack_b0;
  func_0x00010b914bfc();
  func_0x00010b914e08();
  func_0x00010b914d50();
  uStack_68 = 0x10b914a1c;
  ppuStack_60 = &PTR_FUN_110d75d28;
  func_0x00010b914e00();
  func_0x00010b914d28();
  func_0x00010b914da8();
  func_0x00010b914c68();
  FUN_10b913eac(auStack_b0);
  func_0x00010b914be8(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b914df0();
  if (*(long *)(param_2 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_2;
}



/* Entry: 10b913eac; end: 10b913ec7;  */

void FUN_10b913eac(void)

{
  long unaff_x19;
  
  func_0x00010b914df0();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b913ec8; end: 10b914127;  */

/* WARNING: Removing unreachable block (ram,0x00010b913a28) */
/* WARNING: Removing unreachable block (ram,0x00010b913a2c) */
/* WARNING: Removing unreachable block (ram,0x00010b913a30) */
/* WARNING: Removing unreachable block (ram,0x00010b913a38) */
/* WARNING: Removing unreachable block (ram,0x00010b913a40) */
/* WARNING: Type propagation algorithm not settling */

code ***** FUN_10b913ec8(code *****param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code ****ppppcVar3;
  ulong uVar4;
  undefined1 uVar5;
  int iVar6;
  code *****pppppcVar7;
  code ****ppppcVar8;
  long lVar9;
  code *****pppppcVar10;
  code *****pppppcVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code ****ppppcVar12;
  long extraout_x8_01;
  code ****ppppcVar13;
  undefined8 extraout_x8_02;
  ulong uVar14;
  code ****ppppcVar15;
  code ****unaff_x20;
  code ****ppppcVar16;
  code ****ppppcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code ****ppppcStack_108;
  code ****ppppcStack_100;
  code *****pppppcStack_f8;
  undefined ***pppuStack_f0;
  undefined8 uStack_e8;
  code ****ppppcStack_e0;
  code *****pppppcStack_d8;
  undefined1 *puStack_d0;
  code ****ppppcStack_c8;
  code ****ppppcStack_c0;
  long lStack_b8;
  code ****ppppcStack_b0;
  code ****ppppcStack_a8;
  code ****ppppcStack_a0;
  code ****ppppcStack_98;
  undefined **ppuStack_90;
  code ****ppppcStack_88;
  code ****ppppcStack_80;
  code ****ppppcStack_78;
  code ****ppppcStack_70;
  long lStack_68;
  
  pppppcVar10 = param_1;
  func_0x00010b914c10();
  ppppcVar15 = pppppcVar10[0x17];
  ppppcVar8 = pppppcVar10[0x18];
  lStack_68 = extraout_x8_01;
  if (ppppcVar8 < pppppcVar10[0x19]) {
    unaff_x20 = ppppcVar8 + 6;
    *ppppcVar8 = (code ***)*param_2;
    pppppcVar10 = (code *****)(ppppcVar8 + 1);
    (**(code **)(param_2[1] + 0x10))(pppppcVar10,param_2 + 1);
LAB_10b914040:
    param_1[0x18] = unaff_x20;
    uVar5 = ppppcVar15 == ppppcVar8;
    if ((bool)uVar5) {
      uVar5 = *(char *)(param_1 + 0x16) == '\x01';
      if (!(bool)uVar5) {
        unaff_x20 = param_1[0x14];
        FUN_10b9137ac(&ppppcStack_b0,param_1);
        param_1 = &ppppcStack_98;
        ppppcStack_98 = (code ****)0x10b914b04;
        ppuStack_90 = &PTR_DAT_110d75d48;
        ppppcStack_80 = ppppcStack_a8;
        ppppcStack_88 = ppppcStack_b0;
        ppppcStack_b0 = (code ****)0x0;
        ppppcStack_a8 = (code ****)0x0;
        (*(code *)(*unaff_x20)[6])(unaff_x20,&ppppcStack_98,50000000);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        pppppcVar10 = &ppppcStack_b0;
        FUN_10b914394();
        goto LAB_10b9140f0;
      }
      func_0x00010b914be8(lStack_68);
      if ((bool)uVar5) {
        pppppcVar10 = param_1;
        func_0x00010b914c10();
        FUN_10b932764(&lStack_68,pppppcVar10 + 3);
        if (lStack_68 == 1) {
          (*(code *)(*param_1[0x10])[7])
                    (&ppppcStack_80,param_1[0x10],param_1 + 0xc,&stack0xffffffffffffffa0);
        }
        else {
          ppppcStack_80 = (code ****)0x2;
        }
        func_0x0001080c6694(&stack0xffffffffffffffb8,&ppppcStack_80);
        func_0x0001080c6234(&ppppcStack_80);
        ppppcVar15 = param_1[0x17];
        ppppcStack_70 = param_1[0x19];
        ppppcVar8 = param_1[0x18];
        param_1[0x18] = (code ****)0x0;
        param_1[0x19] = (code ****)0x0;
        param_1[0x17] = (code ****)0x0;
        ppppcStack_80 = ppppcVar15;
        ppppcStack_78 = ppppcVar8;
        for (; uVar5 = ppppcVar15 == ppppcVar8, !(bool)uVar5; ppppcVar15 = ppppcVar15 + 6) {
          func_0x00010b914d20(*ppppcVar15,&stack0xffffffffffffffc8);
          func_0x0001080c6234(&stack0xffffffffffffffc8);
        }
        FUN_10b914214(&ppppcStack_80);
        func_0x0001080c5c8c(&lStack_68);
        pppppcVar10 = (code *****)&stack0xffffffffffffffb8;
        func_0x0001080c6234();
        func_0x00010b914be8(extraout_x8);
        if ((bool)uVar5) {
          return pppppcVar10;
        }
        ___stack_chk_fail();
        ppppcStack_88 = (code ****)0x10b913a94;
        pppppcVar11 = pppppcVar10;
        ppppcStack_a0 = ppppcVar15;
        ppppcStack_98 = ppppcVar8;
        ppuStack_90 = (undefined **)&stack0xfffffffffffffff0;
        func_0x00010b914c10();
        pppppcVar7 = (code *****)pppppcVar11[0x10];
        pppppcVar11 = pppppcVar10 + 0xc;
        ppppcStack_a8 = (code ****)extraout_x8_00;
        (*(code *)(*pppppcVar7)[4])();
        if ((int)pppppcVar7 != 0) {
          ppppcVar15 = (code ****)&ppppcStack_c8;
          pppppcVar11 = pppppcVar10 + 0xc;
          (*(code *)(*pppppcVar10[0x10])[5])(&ppppcStack_c8);
          uVar5 = ppppcStack_c8 == (code ****)0x1;
          if ((bool)uVar5) {
            pppppcVar11 = &ppppcStack_c0;
            func_0x00010b932acc(&pppppcStack_d8,pppppcVar10 + 3);
            uVar5 = pppppcStack_d8 == (code *****)0x1;
            if (!(bool)uVar5) {
              func_0x00010b914e70();
            }
            func_0x0001080c6234(&pppppcStack_d8);
          }
          else {
            func_0x00010b914e70();
          }
          pppppcVar7 = &ppppcStack_c8;
          func_0x0001080c5c8c();
        }
        func_0x00010b914be8(ppppcStack_a8);
        if (!(bool)uVar5) {
          ___stack_chk_fail();
          uStack_e8 = 0x10b913b48;
          if (pppppcVar7 == pppppcVar11) {
            return pppppcVar7;
          }
          ppppcVar12 = *pppppcVar11;
          *pppppcVar11 = (code ****)0x0;
          ppppcVar8 = *pppppcVar7;
          *pppppcVar7 = ppppcVar12;
          ppppcStack_100 = ppppcVar15;
          pppppcStack_f8 = pppppcVar10;
          pppuStack_f0 = &ppuStack_90;
          func_0x0001080d8654(ppppcVar8);
          return pppppcVar7;
        }
        return pppppcVar7;
      }
    }
    else {
LAB_10b9140f0:
      func_0x00010b914be8(lStack_68);
      if ((bool)uVar5) {
        return pppppcVar10;
      }
    }
    uVar5 = 0;
    ___stack_chk_fail();
  }
  else {
    uVar1 = ((long)ppppcVar8 - (long)ppppcVar15) / 0x30 + 1;
    uVar5 = uVar1 == 0x555555555555555;
    if (uVar1 < 0x555555555555556) {
      uVar4 = ((long)pppppcVar10[0x19] - (long)ppppcVar15) / 0x30;
      uVar14 = uVar4 * 2;
      if (uVar14 < uVar1 || uVar14 - uVar1 == 0) {
        uVar14 = uVar1;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar4) {
        uVar14 = 0x555555555555555;
      }
      uVar5 = uVar14 == 0x555555555555555;
      if (0x555555555555555 < uVar14) goto LAB_10b914124;
      lVar9 = uVar14 * 0x30;
      __Znwm();
      puVar2 = (undefined8 *)(lVar9 + ((long)ppppcVar8 - (long)ppppcVar15));
      *puVar2 = *param_2;
      lStack_b8 = lVar9;
      (**(code **)(param_2[1] + 0x10))(puVar2 + 1,param_2 + 1);
      ppppcVar16 = param_1[0x17];
      ppppcVar3 = param_1[0x18];
      lVar9 = (long)ppppcVar3 - (long)ppppcVar16;
      ppppcVar13 = (code ****)(puVar2 + (lVar9 / -0x30) * 6);
      for (ppppcVar12 = ppppcVar16; ppppcVar12 != ppppcVar3; ppppcVar12 = ppppcVar12 + 6) {
        *ppppcVar13 = *ppppcVar12;
        (*(code *)ppppcVar12[1][2])(ppppcVar13 + 1,ppppcVar12 + 1);
        ppppcVar13 = ppppcVar13 + 6;
      }
      for (; ppppcVar16 != ppppcVar3; ppppcVar16 = ppppcVar16 + 6) {
        (*(code *)*ppppcVar16[1])(ppppcVar16 + 1);
      }
      pppppcVar10 = (code *****)param_1[0x17];
      unaff_x20 = (code ****)(puVar2 + 6);
      param_1[0x17] = (code ****)(puVar2 + (lVar9 / -0x30) * 6);
      param_1[0x18] = unaff_x20;
      param_1[0x19] = (code ****)(lStack_b8 + uVar14 * 0x30);
      if (pppppcVar10 != (code *****)0x0) {
        __ZdlPv();
      }
      goto LAB_10b914040;
    }
  }
  FUN_10bdb3f8c();
LAB_10b914124:
  func_0x000104bfe188();
  pppppcVar11 = &ppppcStack_130;
  ppppcStack_c8 = (code ****)FUN_10b914128;
  ppppcStack_e0 = unaff_x20;
  pppppcStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010b914c10();
  ppppcVar15 = pppppcVar10[0x14];
  uStack_e8 = extraout_x8_02;
  func_0x00010b914e08();
  uStack_118 = 0x10b914b54;
  ppuStack_110 = &PTR_DAT_110d75d68;
  ppppcStack_100 = (code ****)uStack_128;
  ppppcStack_108 = ppppcStack_130;
  ppppcStack_130 = (code ****)0x0;
  uStack_128 = 0;
  func_0x00010b914da0((*ppppcVar15)[5]);
  (*(code *)*ppuStack_110)(&ppuStack_110);
  FUN_10b914394(&ppppcStack_130);
  func_0x00010b914be8(uStack_e8);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    if ((bRam00000001137fd0e8 & 1) == 0) {
      iVar6 = 0x137fd0e8;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        func_0x000107c31088(0x1137fd0e0,&DAT_10f6d8363);
        ___cxa_guard_release(0x1137fd0e8);
      }
    }
    return (code *****)0x1137fd0e0;
  }
  return pppppcVar11;
}



/* Entry: 10b914128; end: 10b914213;  */

undefined8 * FUN_10b914128(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *plVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  puVar2 = &uStack_70;
  func_0x00010b914c10();
  plVar3 = *(long **)(param_1 + 0xa0);
  uStack_28 = extraout_x8;
  func_0x00010b914e08();
  uStack_58 = 0x10b914b54;
  ppuStack_50 = &PTR_DAT_110d75d68;
  uStack_40 = uStack_68;
  uStack_48 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010b914da0(*(undefined8 *)(*plVar3 + 0x28));
  (*(code *)*ppuStack_50)(&ppuStack_50);
  FUN_10b914394(&uStack_70);
  func_0x00010b914be8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  if ((bRam00000001137fd0e8 & 1) == 0) {
    iVar1 = 0x137fd0e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd0e0,&DAT_10f6d8363);
      ___cxa_guard_release(0x1137fd0e8);
    }
  }
  return (undefined8 *)(undefined1 *)0x1137fd0e0;
}



/* Entry: 10b914214; end: 10b9142db;  */

long * FUN_10b914214(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
      func_0x00010b914e4c(*(undefined8 *)(lVar1 + -0x28));
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b9142dc; end: 10b9142fb;  */

void FUN_10b9142dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b91383c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9142fc; end: 10b9142ff;  */

void FUN_10b9142fc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b914300; end: 10b914393;  */

void FUN_10b914300(undefined8 *param_1)

{
  long extraout_x8;
  undefined8 extraout_x8_00;
  long lVar1;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  
  func_0x00010b914ddc();
  *param_1 = &PTR_FUN_110d75c68;
  __Znwm(0x70);
  func_0x00010b914e84();
  uVar2 = 0;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b914c48();
      uVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  *unaff_x21 = uVar2;
  func_0x000104c6257c(unaff_x21 + 1,unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  unaff_x21[5] = *(undefined8 *)(unaff_x20 + 0x28);
  unaff_x21[4] = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  unaff_x21[7] = *(undefined8 *)(unaff_x20 + 0x38);
  unaff_x21[6] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b914cd4();
    } while (extraout_w10 != 0);
  }
  unaff_x21[8] = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x00010b914d20(*(undefined8 *)(*(long *)(unaff_x20 + 0x48) + 0x18),unaff_x21 + 9);
  *(undefined8 **)(unaff_x19 + 8) = unaff_x21;
  return;
}



/* Entry: 10b914394; end: 10b9143bb;  */

long FUN_10b914394(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b9143bc; end: 10b914453;  */

long * FUN_10b9143bc(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long extraout_x8_00;
  int extraout_w11;
  long lVar4;
  long *plVar5;
  long alStack_58 [2];
  long lStack_48;
  long alStack_40 [2];
  
  lVar4 = *(long *)param_1[2];
  plVar2 = (long *)param_1[2] + 2;
  plVar5 = (long *)(lVar4 + 0x88);
  if (*plVar5 == *plVar2) {
    return param_1;
  }
  if (*(long *)(lVar4 + 0xb8) != *(long *)(lVar4 + 0xc0)) {
    func_0x00010b913970(lVar4);
  }
  uVar1 = plVar5 == plVar2;
  if (!(bool)uVar1) {
    lVar3 = *plVar2;
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
      do {
        func_0x00010b914e20();
        lVar3 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *plVar5 = lVar3;
    func_0x000105275bf4();
  }
  func_0x00010b914e70();
  FUN_10b9134a0(lVar4);
  lVar3 = lVar4;
  func_0x00010b914c10();
  plVar2 = *(long **)(lVar3 + 0x80);
  plVar5 = (long *)(lVar4 + 0x60);
  (**(code **)(*plVar2 + 0x20))();
  if ((int)plVar2 != 0) {
    plVar5 = (long *)(lVar4 + 0x60);
    (**(code **)(**(long **)(lVar4 + 0x80) + 0x28))(&lStack_48);
    uVar1 = lStack_48 == 1;
    if ((bool)uVar1) {
      plVar5 = alStack_40;
      func_0x00010b932acc(alStack_58,lVar4 + 0x18);
      uVar1 = alStack_58[0] == 1;
      if (!(bool)uVar1) {
        func_0x00010b914e70();
      }
      func_0x0001080c6234(alStack_58);
    }
    else {
      func_0x00010b914e70();
    }
    plVar2 = &lStack_48;
    func_0x0001080c5c8c();
  }
  func_0x00010b914be8(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (plVar2 != plVar5) {
      lVar3 = *plVar5;
      *plVar5 = 0;
      lVar4 = *plVar2;
      *plVar2 = lVar3;
      func_0x0001080d8654(lVar4);
    }
    return plVar2;
  }
  return plVar2;
}



/* Entry: 10b914454; end: 10b914473;  */

void FUN_10b914454(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b91394c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


