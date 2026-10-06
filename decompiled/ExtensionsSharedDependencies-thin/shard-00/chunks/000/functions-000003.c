/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00023358; end: 00023437;  */

void FUN_00023358(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00023438; end: 00023453;  */

bool FUN_00023438(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  if ((long)uVar1 < 4) {
    if (uVar1 == 1) {
      if (uVar2 != 1) {
        return false;
      }
      return true;
    }
    if (uVar1 == 2) {
      if (uVar2 != 2) {
        return false;
      }
      return true;
    }
    if (uVar1 == 3) {
      if (uVar2 != 3) {
        return false;
      }
      return true;
    }
  }
  else if ((long)uVar1 < 6) {
    if (uVar1 == 4) {
      if (uVar2 != 4) {
        return false;
      }
      return true;
    }
    if (uVar1 == 5) {
      if (uVar2 != 5) {
        return false;
      }
      return true;
    }
  }
  else {
    if (uVar1 == 6) {
      if (uVar2 != 6) {
        return false;
      }
      return true;
    }
    if (uVar1 == 7) {
      if (uVar2 != 7) {
        return false;
      }
      return true;
    }
  }
  if (6 < uVar2 - 1) {
    if (uVar1 == 0) {
      if (uVar2 == 0) goto LAB_000236c8;
    }
    else if ((uVar2 != 0) &&
            (((uVar3 == *param_2 && (uVar1 == uVar2)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar3,uVar1,*param_2,uVar2,0), (uVar3 & 1) != 0)))) {
LAB_000236c8:
      return uVar4 == uVar5;
    }
  }
  return false;
}



/* Entry: 00023454; end: 000235a3;  */

long FUN_00023454(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00792f20();
  iVar1 = (int)lVar2;
  if (iVar1 < 0xb) {
    if (iVar1 == 1) {
      return 0;
    }
    if (iVar1 != 2) {
      if (iVar1 != 10) {
        return 0;
      }
      return 0;
    }
    return 0;
  }
  if (iVar1 < 0xd) {
    if (iVar1 == 0xb) {
      return 0;
    }
    if (iVar1 != 0xc) {
      return 0;
    }
    return 0;
  }
  if (iVar1 == 0xd) {
    return 0;
  }
  if (iVar1 != 0xe) {
    return 0;
  }
  lVar2 = param_1;
  func_0x007842e0();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x00787060();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x00784460();
      lVar3 = lVar2;
      func_0x00788b80(lVar2);
      FUN_00053be4(lVar4,lVar3);
      _objc_release(lVar2);
      goto LAB_00023580;
    }
  }
  lVar4 = 0;
LAB_00023580:
  func_0x00792e40(param_1);
  return lVar4;
}



/* Entry: 000235a4; end: 000236d3;  */

bool FUN_000235a4(ulong param_1,long param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  if (param_2 < 4) {
    if (param_2 == 1) {
      if (param_5 != 1) {
        return false;
      }
      return true;
    }
    if (param_2 == 2) {
      if (param_5 != 2) {
        return false;
      }
      return true;
    }
    if (param_2 == 3) {
      if (param_5 != 3) {
        return false;
      }
      return true;
    }
  }
  else if (param_2 < 6) {
    if (param_2 == 4) {
      if (param_5 != 4) {
        return false;
      }
      return true;
    }
    if (param_2 == 5) {
      if (param_5 != 5) {
        return false;
      }
      return true;
    }
  }
  else {
    if (param_2 == 6) {
      if (param_5 != 6) {
        return false;
      }
      return true;
    }
    if (param_2 == 7) {
      if (param_5 != 7) {
        return false;
      }
      return true;
    }
  }
  if (6 < param_5 - 1U) {
    if (param_2 == 0) {
      if (param_5 == 0) goto LAB_000236c8;
    }
    else if ((param_5 != 0) &&
            (((param_1 == param_4 && (param_2 == param_5)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (param_1,param_2,param_4,param_5,0), (param_1 & 1) != 0)))) {
LAB_000236c8:
      return param_3 == param_6;
    }
  }
  return false;
}



/* Entry: 000236d4; end: 000236f7;  */

undefined8 * FUN_000236d4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 000236f8; end: 0002375b;  */

undefined8 * FUN_000236f8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 0002375c; end: 00023847;  */

undefined8 * FUN_0002375c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = param_1[1];
  uVar1 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar1 = 0xffffffff;
  }
  uVar4 = param_2[1];
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  iVar2 = (int)uVar4 + -1;
  if ((int)uVar1 + -1 < 0) {
    if (iVar2 < 0) {
      *param_1 = *param_2;
      uVar3 = param_2[1];
      param_1[1] = uVar3;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRelease(uVar5);
      param_1[2] = param_2[2];
    }
    else {
      _swift_bridgeObjectRelease(uVar5);
      uVar6 = param_2[1];
      uVar3 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar6;
      *param_1 = uVar3;
    }
  }
  else if (iVar2 < 0) {
    *param_1 = *param_2;
    uVar3 = param_2[1];
    param_1[1] = uVar3;
    param_1[2] = param_2[2];
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    uVar6 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar3;
  }
  return param_1;
}



/* Entry: 00023848; end: 0002385b;  */

void FUN_00023848(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 0002385c; end: 000238f7;  */

undefined8 * FUN_0002385c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    uVar3 = param_2[1];
    uVar1 = uVar3;
    if (0xfffffffe < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *param_1 = *param_2;
      param_1[1] = uVar3;
      _swift_bridgeObjectRelease(uVar2);
    }
    else {
      _swift_bridgeObjectRelease(uVar2);
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
    }
    param_1[2] = param_2[2];
  }
  else {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[2] = param_2[2];
  }
  return param_1;
}



/* Entry: 000238f8; end: 00023a27;  */

int FUN_000238f8(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff7 < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7ffffff8;
  }
  uVar3 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (7 < uVar2 + 1) {
    iVar1 = uVar2 - 6;
  }
  return iVar1;
}



/* Entry: 00023a28; end: 00023b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023a28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x38);
  __sSS6appendyySSF(0xd00000000000002b,0x80000000008b5270);
  uVar1 = param_1;
  func_0x00791ca0();
  uVar2 = 0;
  uStack_48 = uVar1;
  func_0x00010248(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_0099b698,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
  uVar2 = 0xe900000000000020;
  __sSS6appendyySSF(0x3a726f727265202c,0xe900000000000020);
  func_0x00782e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_1);
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = uStack_38;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_40,uStack_38);
  _objc_release();
  _swift_bridgeObjectRelease(uVar1);
  (**(code **)(unaff_x20 + _DAT_00ae65b0))();
  return;
}



/* Entry: 00023b54; end: 00023ba3; -[_TtC19LocationPushHandlerP33_B5EDC4E713018BDC04B9E4F25022C3AE14StreamCallback onSend:] */

void FUN_00023b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00023a28(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00023ba4; end: 00023c03; -[_TtC19LocationPushHandlerP33_B5EDC4E713018BDC04B9E4F25022C3AE14StreamCallback init] */

void FUN_00023ba4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LocationPushHandler.StreamCallback",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x23bd0);
  (*pcVar1)();
}



/* Entry: 00023c04; end: 00023c17; -[_TtC19LocationPushHandlerP33_B5EDC4E713018BDC04B9E4F25022C3AE14StreamCallback .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00ae65b0 + 8));
  return;
}



/* Entry: 00023c18; end: 00023c37;  */

void FUN_00023c18(void)

{
  _objc_opt_self(&PTR_PTR_00ac6898);
  return;
}



/* Entry: 00023c38; end: 00023f37;  */

void FUN_00023c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain(uVar6);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar6);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_retain(uVar6);
    func_0x001d46c8();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar6);
    return;
  }
  puVar1 = &UNK_000061a8;
  func_0x00023dd0(&UNK_000061a8);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_0099d830;
  _swift_allocObject(&UNK_0099d830,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  puVar3 = &UNK_0099d858;
  _swift_allocObject(&UNK_0099d858,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_000254bc;
  puStack_70 = PTR___NSConcreteStackBlock_00999f30;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_000241c0;
  puStack_58 = &UNK_0099d870;
  puStack_48 = puVar3;
  __Block_copy(&puStack_70);
  puVar2 = puStack_48;
  _objc_retain(puVar1);
  _swift_retain(param_2);
  _swift_release(puVar2);
  func_0x00791da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  __Block_release(ppuVar4);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain(uVar6);
  func_0x001d46c8();
  _swift_release(uVar6);
  return;
}



/* Entry: 00023f38; end: 000240a3;  */

void FUN_00023f38(ulong param_1,undefined8 param_2,long param_3,long param_4,code *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  if (param_3 == 0) {
    if ((param_1 & 1) != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x80000000008b5350);
      _objc_release();
      (*param_5)(0);
    }
  }
  else {
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    _swift_errorRetain(param_3);
    __ss11_StringGutsV4growyySiF(0x27);
    _swift_bridgeObjectRelease(uStack_80);
    uStack_88 = 0xd000000000000025;
    uStack_80 = 0x80000000008b5380;
    _swift_getErrorValue(param_3,auStack_58,auStack_70);
    uVar1 = uStack_60;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_68,uStack_60);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = uStack_80;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_88,uStack_80);
    _objc_release();
    _swift_bridgeObjectRelease(uVar1);
    if ((param_1 & 1) == 0) {
      _swift_beginAccess(param_4 + 0x10,&uStack_88,0,0);
      param_4 = param_4 + 0x10;
      _swift_weakLoadStrong();
      if (param_4 != 0) {
        FUN_000240a4(0);
        _swift_release(param_4);
      }
    }
    _swift_errorRetain(param_3);
    (*param_5)(param_3);
    _swift_errorRelease(param_3);
    _swift_errorRelease(param_3);
  }
  return;
}



/* Entry: 000240a4; end: 000241bf;  */

void FUN_000240a4(ulong param_1)

{
  undefined1 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain(uVar2);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar2);
  if ((param_1 & 1) == 0) {
    _swift_beginAccess(unaff_x20 + 0x30,auStack_48,0,0);
    uVar3 = *(ulong *)(unaff_x20 + 0x30);
    if ((uVar3 & 0xc000000000000001) == 0) {
      uVar4 = *(ulong *)(uVar3 + 0x10);
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      _swift_bridgeObjectRetain(uVar3);
      __ss10__CocoaSetV5countSivg();
      _swift_bridgeObjectRelease(uVar3);
    }
    if (uVar4 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000000008b5310);
      uVar1 = 1;
      goto LAB_0002418c;
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000000008b5330);
  _objc_release();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x007803c0();
  }
  uVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
LAB_0002418c:
  _objc_release();
  *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain(uVar2);
  func_0x001d46c8();
  _swift_release(uVar2);
  return;
}



/* Entry: 000241c0; end: 00024247;  */

void FUN_000241c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_3;
  _objc_retain(param_3);
  uVar4 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  _swift_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar4);
  return;
}



/* Entry: 00024248; end: 0002437b;  */

void FUN_00024248(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _swift_retain(uVar1);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(uVar1);
    _swift_beginAccess(param_1 + 0x30,auStack_60,0x21,0);
    FUN_00024e0c(param_2);
    _swift_endAccess(auStack_60);
    _objc_release(param_2);
    if (*(char *)(param_1 + 0x38) == '\x01') {
      uVar2 = *(ulong *)(param_1 + 0x30);
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar2 + 0x10);
      }
      else {
        uVar3 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar3 = uVar2;
        }
        _swift_bridgeObjectRetain(uVar2);
        __ss10__CocoaSetV5countSivg();
        _swift_bridgeObjectRelease(uVar2);
      }
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      _swift_retain(uVar1);
      func_0x001d46c8();
      _swift_release(uVar1);
      if (uVar3 == 0) {
        FUN_000240a4(0);
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      _swift_retain(uVar1);
      func_0x001d46c8();
      _swift_release(uVar1);
    }
    _swift_release(param_1);
  }
  return;
}



/* Entry: 0002437c; end: 000246b7;  */

void FUN_0002437c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &UNK_0099d7b8;
  _swift_allocObject(&UNK_0099d7b8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    puStack_b8 = (undefined *)0x0;
    uStack_b0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(uStack_b0);
    puStack_b8 = (undefined *)0xd000000000000029;
    uStack_b0 = 0x80000000008b52a0;
    uVar6 = 0xae6190;
    func_0x000115a8(0xae6190,&UNK_007ccde8);
    __sSa11descriptionSSvg(param_2,uVar6);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = uStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_b8,uStack_b0);
    _objc_release();
    _swift_bridgeObjectRelease(uVar6);
    puVar4 = &UNK_00002710;
    func_0x00023dd0(&UNK_00002710);
    puVar5 = PTR_PTR_00ac2810;
    _objc_allocWithZone(PTR_PTR_00ac2810);
    func_0x007849a0();
    func_0x00790420();
    puStack_68 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00025268(0,lVar11,0);
    param_2 = param_2 + 0x20;
    puVar9 = puStack_68;
    do {
      FUN_00025284(param_2,&puStack_b8);
      pcVar2 = pcStack_98;
      puVar7 = puStack_a0;
      FUN_0001393c(&puStack_b8,puStack_a0);
      (**(code **)((long)pcVar2 + 8))(puVar7,pcVar2);
      uVar6 = 0;
      FUN_0001a480();
      uStack_70 = uVar6;
      FUN_00011670(&puStack_b8);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      puStack_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_00025268(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      FUN_000252c8(auStack_88,puStack_68 + uVar1 * 0x20 + 0x20);
      param_2 = param_2 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    puVar8 = puVar9;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar9,PTR___sypN_0099b8d8 + 8);
    _swift_bridgeObjectRelease(puVar9);
    func_0x00784c20(puVar7);
    _objc_release(puVar8);
    func_0x00790f40(puVar5);
    _objc_release(puVar7);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    puVar9 = &UNK_0099d7e0;
    _swift_allocObject(&UNK_0099d7e0,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x2481c;
    *(undefined **)(puVar9 + 0x18) = puVar3;
    pcStack_98 = FUN_000252d8;
    puStack_b8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_000246b8;
    puStack_a0 = &UNK_0099d7f8;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar9;
    __Block_copy(ppuVar10);
    puVar9 = puStack_90;
    _objc_retain(puVar4);
    _swift_retain(puVar3);
    _swift_release(puVar9);
    func_0x0078c640(uVar6);
    __Block_release(ppuVar10);
    _swift_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar4);
    return;
  }
  _swift_continuation_throwingResume(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar3);
  return;
}



/* Entry: 000246b8; end: 0002472f;  */

void FUN_000246b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_2;
  _objc_retain(param_2);
  uVar4 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar4);
  return;
}



/* Entry: 00024730; end: 000247af;  */

void FUN_00024730(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    uVar1 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    plVar2 = (long *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *plVar2 = param_1;
    _swift_errorRetain(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_0099c078)(param_2,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_0099c070)(param_2);
  return;
}



/* Entry: 000247b0; end: 0002480b;  */

void FUN_000247b0(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0002480c; end: 00024823;  */

void FUN_0002480c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00024824; end: 00024a0f;  */

undefined * FUN_00024824(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    puVar5 = PTR___swiftEmptySetSingleton_0099b900;
  }
  else {
    func_0x000115a8(0xae6300,&UNK_007ccf40);
    puVar5 = param_1;
    __ss11_SetStorageC7convert_8capacityAByxGs07__CocoaA0V_SitFZ(param_1,param_2);
    puStack_68 = puVar5;
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    puVar7 = param_1;
    __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      FUN_0001a480(0);
      puVar2 = PTR___syXlN_0099b8d0;
      do {
        puStack_78 = puVar7;
        _swift_dynamicCast(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar3 = uStack_70;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          FUN_00024b60(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar11 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar10 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x24a10);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar5 + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar5 + uVar8 + 0x38)
        ;
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      } while (puVar7 != (undefined *)0x0);
    }
    _swift_release(param_1);
  }
  return puVar5;
}



/* Entry: 00024a10; end: 00024b5f;  */

void FUN_00024a10(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x000115a8(0xae6300,&UNK_007ccf40);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      _memmove(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_00024aec;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        _objc_retain();
        if (uVar5 != 0) break;
LAB_00024aec:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x24b60);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_00024b38;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_00024b38:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 00024b60; end: 00024d8b;  */

void FUN_00024b60(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0xae6300;
  func_0x000115a8(0xae6300,&UNK_007ccf40);
  lVar4 = lVar12;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_00024d5c:
    _swift_release(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x24d88);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_00024d5c;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x24d8c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 00024d8c; end: 00024e0b;  */

void FUN_00024d8c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  __ss10_HashTableV8nextHole9atOrAfterAB6BucketVAF_tF(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 00024e0c; end: 000250db;  */

ulong FUN_00024e0c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  uVar5 = *unaff_x20;
  if ((uVar5 & 0xc000000000000001) == 0) {
    FUN_0001a480(0);
    uVar1 = *(ulong *)(uVar5 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar4 = -1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
    uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
      do {
        uVar2 = *(ulong *)(*(long *)(uVar5 + 0x30) + uVar1 * 8);
        _objc_retain();
        uVar3 = uVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          uVar5 = *unaff_x20;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = *unaff_x20;
          if ((uVar5 & 1) == 0) {
            FUN_00024a10();
          }
          uVar5 = *(ulong *)(*(long *)(uVar4 + 0x30) + uVar1 * 8);
          FUN_000250dc(uVar1);
          *unaff_x20 = uVar4;
          return uVar5;
        }
        uVar1 = uVar1 + 1 & ~uVar4;
      } while ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
    }
  }
  else {
    uVar1 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar1 = uVar5;
    }
    _swift_bridgeObjectRetain(uVar5);
    _objc_retain();
    uVar4 = param_1;
    __ss10__CocoaSetV8containsySbyXlF();
    _objc_release(param_1);
    if ((uVar4 & 1) != 0) {
      func_0x00024f90(uVar1,param_1);
      _swift_bridgeObjectRelease(uVar5);
      return uVar1;
    }
    _swift_bridgeObjectRelease(uVar5);
  }
  return 0;
}



/* Entry: 000250dc; end: 00025267;  */

void FUN_000250dc(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *unaff_x20;
  lVar1 = lVar9 + 0x38;
  uVar7 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  uVar8 = 1L << (uVar10 & 0x3f);
  if ((uVar8 & *(ulong *)(lVar1 + (uVar10 >> 6) * 8)) == 0) {
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar7 = ~uVar7;
    uVar6 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar7);
    if ((*(ulong *)(lVar1 + (uVar10 >> 6) * 8) & uVar8) != 0) {
      uVar8 = uVar6 + 1 & uVar7;
      do {
        uVar6 = *(ulong *)(lVar9 + 0x28);
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar10 * 8);
        _objc_retain(uVar5);
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        _objc_release(uVar5);
        uVar6 = uVar6 & uVar7;
        if ((long)param_1 < (long)uVar8) {
          if (uVar8 <= uVar6 || (long)uVar6 <= (long)param_1) {
LAB_000251cc:
            puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + param_1 * 8);
            puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar10 * 8);
            if ((param_1 != uVar10) || (puVar3 + 1 <= puVar2)) {
              *puVar2 = *puVar3;
              param_1 = uVar10;
            }
          }
        }
        else if (uVar8 <= uVar6 && (long)uVar6 <= (long)param_1) goto LAB_000251cc;
        uVar10 = uVar10 + 1 & uVar7;
      } while ((*(ulong *)(lVar1 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
    }
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar7);
  }
  if (!SBORROW8(*(long *)(lVar9 + 0x10),1)) {
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
    *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x25268);
  (*pcVar4)();
}



/* Entry: 00025268; end: 00025283;  */

void FUN_00025268(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00025318();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 00025284; end: 000252c7;  */

long FUN_00025284(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000252c8; end: 000252d7;  */

undefined8 * FUN_000252c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 000252d8; end: 000252fb;  */

void FUN_000252d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_2);
  return;
}



/* Entry: 000252fc; end: 00025317;  */

void FUN_000252fc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 00025318; end: 00025423;  */

undefined * FUN_00025318(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x25424);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xae66a8;
    func_0x000115a8(0xae66a8,&UNK_007cd490);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sypN_0099b8d8 + 8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 00025424; end: 0002546b;  */

undefined8 FUN_00025424(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xae64d0;
  func_0x000115a8(0xae64d0,&UNK_007cd4a0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 0002546c; end: 000254bb;  */

void FUN_0002546c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000254bc; end: 000254c7;  */

void FUN_000254bc(ulong param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  if (param_3 == 0) {
    if ((param_1 & 1) != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x80000000008b5350);
      _objc_release();
      (*pcVar1)(0);
    }
  }
  else {
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    _swift_errorRetain(param_3);
    __ss11_StringGutsV4growyySiF(0x27);
    _swift_bridgeObjectRelease(uStack_80);
    uStack_88 = 0xd000000000000025;
    uStack_80 = 0x80000000008b5380;
    _swift_getErrorValue(param_3,auStack_58,auStack_70);
    uVar3 = uStack_60;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_68,uStack_60);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = uStack_80;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_88,uStack_80);
    _objc_release();
    _swift_bridgeObjectRelease(uVar3);
    if ((param_1 & 1) == 0) {
      _swift_beginAccess(lVar2 + 0x10,&uStack_88,0,0);
      lVar2 = lVar2 + 0x10;
      _swift_weakLoadStrong();
      if (lVar2 != 0) {
        FUN_000240a4(0);
        _swift_release(lVar2);
      }
    }
    _swift_errorRetain(param_3);
    (*pcVar1)(param_3);
    _swift_errorRelease(param_3);
    _swift_errorRelease(param_3);
  }
  return;
}



/* Entry: 000254c8; end: 00025833;  */

void FUN_000254c8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &UNK_0099d8a8;
  _swift_allocObject(&UNK_0099d8a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    puStack_b8 = (undefined *)0x0;
    uStack_b0 = 0xe000000000000000;
    _objc_retain(param_4);
    _swift_retain(param_5);
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(uStack_b0);
    puStack_b8 = (undefined *)0xd000000000000029;
    uStack_b0 = 0x80000000008b52a0;
    uVar6 = 0xae6190;
    func_0x000115a8(0xae6190,&UNK_007ccde8);
    __sSa11descriptionSSvg(param_2,uVar6);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = uStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_b8,uStack_b0);
    _objc_release();
    _swift_bridgeObjectRelease(uVar6);
    puVar4 = &UNK_00002710;
    func_0x00023dd0(&UNK_00002710);
    puVar5 = PTR_PTR_00ac2810;
    _objc_allocWithZone(PTR_PTR_00ac2810);
    func_0x007849a0();
    func_0x00790420();
    puStack_68 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00025268(0,lVar11,0);
    param_2 = param_2 + 0x20;
    puVar9 = puStack_68;
    do {
      FUN_00025284(param_2,&puStack_b8);
      lVar2 = lStack_98;
      puVar7 = puStack_a0;
      FUN_0001393c(&puStack_b8,puStack_a0);
      (**(code **)(lVar2 + 8))(puVar7,lVar2);
      uVar6 = 0;
      FUN_0001a480();
      uStack_70 = uVar6;
      FUN_00011670(&puStack_b8);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      puStack_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_00025268(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      FUN_000252c8(auStack_88,puStack_68 + uVar1 * 0x20 + 0x20);
      param_2 = param_2 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    puVar8 = puVar9;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar9,PTR___sypN_0099b8d8 + 8);
    _swift_bridgeObjectRelease(puVar9);
    func_0x00784c20(puVar7);
    _objc_release(puVar8);
    func_0x00790f40(puVar5);
    _objc_release(puVar7);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    puVar9 = &UNK_0099d8d0;
    _swift_allocObject(&UNK_0099d8d0,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_00025860;
    *(undefined **)(puVar9 + 0x18) = puVar3;
    lStack_98 = 0x25c30;
    puStack_b8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_000246b8;
    puStack_a0 = &UNK_0099d8e8;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar9;
    __Block_copy(ppuVar10);
    puVar9 = puStack_90;
    _objc_retain(puVar4);
    _swift_retain(puVar3);
    _swift_release(puVar9);
    func_0x0078c640(uVar6);
    __Block_release(ppuVar10);
    _swift_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar4);
    return;
  }
  _objc_retain(param_4);
  _swift_retain(param_5);
  FUN_00014e4c(0,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar3);
  return;
}



/* Entry: 00025834; end: 0002585f;  */

void FUN_00025834(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00025860; end: 00025867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025860(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0xae60c8;
  puVar7 = &UNK_007cccd0;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_e0 + -extraout_x8;
  uStack_d8 = 0;
  uStack_d0 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(uStack_d0);
  uStack_d8 = 0xd00000000000002f;
  uStack_d0 = 0x80000000008b4d70;
  func_0x00781e40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar9);
  __sSS6appendyySSF(uVar4,puVar7);
  _swift_bridgeObjectRelease(puVar7);
  uVar9 = uStack_d0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d8,uStack_d0);
  _objc_release();
  _swift_bridgeObjectRelease(uVar9);
  _swift_beginAccess(lVar6 + 0x10,auStack_68,0,0);
  lVar3 = lVar6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    __s10Foundation4DateVACycfC(puVar8);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar8,0,1,lVar5);
    lVar5 = _DAT_00b64798;
    _swift_beginAccess(lVar3 + _DAT_00b64798,&uStack_d8,0x21,0);
    FUN_00013a14(puVar8,lVar3 + lVar5);
    _swift_endAccess(&uStack_d8);
    _objc_release(lVar3);
  }
  _swift_beginAccess(lVar6 + 0x10,auStack_80,0,0);
  lVar3 = lVar6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    FUN_000158fc(&DAT_00b64790,&DAT_00b64798);
    _objc_release(lVar3);
    _swift_beginAccess(lVar6 + 0x10,auStack_98,0,0);
    lVar3 = lVar6 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 != 0) {
      puVar1 = (undefined4 *)(lVar3 + _DAT_00ae6118);
      uVar10 = *puVar1;
      uVar9 = *(undefined8 *)(puVar1 + 2);
      uVar2 = *(undefined1 *)(puVar1 + 4);
      _objc_release();
      _swift_beginAccess(lVar6 + 0x10,auStack_b0,0,0);
      lVar3 = lVar6 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        FUN_00016978(lVar3 + _DAT_00ae60f8,&uStack_d8);
        _objc_release(lVar3);
        FUN_0001393c(&uStack_d8,uStack_c0);
        func_0x0001f7c8(param_1,uVar10,uVar9,uVar2,param_2 == 0);
        FUN_00011670(&uStack_d8);
      }
    }
  }
  _swift_beginAccess(lVar6 + 0x10,&uStack_d8,0,0);
  lVar6 = lVar6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar6 != 0) {
    uVar9 = 0;
    if (param_2 != 0) {
      uVar9 = 5;
    }
    FUN_00013fb0(uVar9);
    _objc_release(lVar6);
  }
  return;
}



/* Entry: 00025868; end: 0002588b;  */

void FUN_00025868(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0002588c; end: 00025beb;  */

void FUN_0002588c(undefined8 param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &UNK_0099d920;
  _swift_allocObject(&UNK_0099d920,0x20,7);
  *(int *)(puVar3 + 0x10) = (int)param_4;
  puVar3[0x14] = (byte)(param_4 >> 0x20) & 1;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    puStack_b8 = (undefined *)0x0;
    uStack_b0 = 0xe000000000000000;
    _swift_retain(param_5);
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(uStack_b0);
    puStack_b8 = (undefined *)0xd000000000000029;
    uStack_b0 = 0x80000000008b52a0;
    uVar6 = 0xae6190;
    func_0x000115a8(0xae6190,&UNK_007ccde8);
    __sSa11descriptionSSvg(param_2,uVar6);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = uStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_b8,uStack_b0);
    _objc_release();
    _swift_bridgeObjectRelease(uVar6);
    puVar4 = &UNK_00002710;
    func_0x00023dd0(&UNK_00002710);
    puVar5 = PTR_PTR_00ac2810;
    _objc_allocWithZone(PTR_PTR_00ac2810);
    func_0x007849a0();
    func_0x00790420();
    puStack_68 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00025268(0,lVar11,0);
    param_2 = param_2 + 0x20;
    puVar9 = puStack_68;
    do {
      FUN_00025284(param_2,&puStack_b8);
      lVar2 = lStack_98;
      puVar7 = puStack_a0;
      FUN_0001393c(&puStack_b8,puStack_a0);
      (**(code **)(lVar2 + 8))(puVar7,lVar2);
      uVar6 = 0;
      FUN_0001a480();
      uStack_70 = uVar6;
      FUN_00011670(&puStack_b8);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      puStack_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_00025268(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      FUN_000252c8(auStack_88,puStack_68 + uVar1 * 0x20 + 0x20);
      param_2 = param_2 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    puVar8 = puVar9;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar9,PTR___sypN_0099b8d8 + 8);
    _swift_bridgeObjectRelease(puVar9);
    func_0x00784c20(puVar7);
    _objc_release(puVar8);
    func_0x00790f40(puVar5);
    _objc_release(puVar7);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    puVar9 = &UNK_0099d948;
    _swift_allocObject(&UNK_0099d948,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_00025bec;
    *(undefined **)(puVar9 + 0x18) = puVar3;
    lStack_98 = 0x25c34;
    puStack_b8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_000246b8;
    puStack_a0 = &UNK_0099d960;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar9;
    __Block_copy(ppuVar10);
    puVar9 = puStack_90;
    _objc_retain(puVar4);
    _swift_retain(puVar3);
    _swift_release(puVar9);
    func_0x0078c640(uVar6);
    __Block_release(ppuVar10);
    _swift_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar4);
    return;
  }
  _swift_retain(param_5);
  FUN_00016114(param_4 & 0x1ffffffff,param_5);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar3);
  return;
}



/* Entry: 00025bec; end: 00025c37;  */

void FUN_00025bec(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  iVar1 = *(int *)(unaff_x20 + 0x10);
  cVar2 = *(char *)(unaff_x20 + 0x14);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x80000000008b4ed0);
  _objc_release();
  if (iVar1 == 3) {
    if (cVar2 != '\0') {
      return;
    }
    _swift_beginAccess(lVar4 + 0x10,auStack_38,0,0);
    lVar4 = lVar4 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 == 0) {
      return;
    }
    uVar3 = 7;
  }
  else {
    _swift_beginAccess(lVar4 + 0x10,auStack_38,0,0);
    lVar4 = lVar4 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 == 0) {
      return;
    }
    uVar3 = 8;
  }
  FUN_00013fb0(uVar3);
  _objc_release(lVar4);
  return;
}



/* Entry: 00025c38; end: 00025f13;  */

long FUN_00025c38(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  
  lVar2 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar3 = PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820;
  _objc_opt_self(PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820);
  func_0x0077fce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000000008b53b0);
  puVar5 = puVar3;
  func_0x0078dc60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar5);
  func_0x00790a00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d420(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d3c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  (**(code **)(lVar9 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88,lVar2)
  ;
  puVar5 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0);
  uVar4 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b53d0);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x00785a40(puVar5);
  _objc_release(uVar4);
  (**(code **)(lVar9 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  puVar6 = PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828);
  func_0x00786460();
  puVar7 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_00ac3208;
  _objc_opt_self();
  uVar4 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x80000000008b53f0);
  func_0x00781100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar6);
    lVar2 = 0;
  }
  else {
    puVar8 = PTR_PTR_00ac2830;
    _objc_allocWithZone();
    func_0x00786c80();
    uVar1 = *(undefined1 *)(param_2 + 0x58);
    lVar2 = 0;
    func_0x000247ec();
    _swift_allocObject();
    uVar4 = 0;
    __s11SwiftSCLock4LockCMa();
    _swift_allocObject();
    func_0x001d45e0();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar7);
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined **)(lVar2 + 0x30) = PTR___swiftEmptySetSingleton_0099b900;
    *(undefined1 *)(lVar2 + 0x38) = 0;
    *(undefined **)(lVar2 + 0x10) = puVar8;
    *(undefined1 *)(lVar2 + 0x18) = uVar1;
  }
  return lVar2;
}



/* Entry: 00025f14; end: 00025f27;  */

bool FUN_00025f14(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00025f28; end: 000260af;  */

void FUN_00025f28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xd000000000000014;
  if (cVar3 != '\x01') {
    uVar1 = 0x4c746f4e72657375;
  }
  uVar2 = 0x80000000008b5420;
  if (cVar3 != '\x01') {
    uVar2 = 0xef6e49646567676f;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000260b0; end: 00026127;  */

void FUN_000260b0(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 00026128; end: 00026187;  */

void FUN_00026128(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0xd000000000000014;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x4c746f4e72657375;
  }
  uVar2 = 0x80000000008b5420;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xef6e49646567676f;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 00026188; end: 00026653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __s23ExtensionsStickerPicker23AppGroupSessionProviderV05fetchF4DataAA0defI0VyKF
               (undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  
  puVar2 = param_2;
  FUN_00073e94();
  if (((ulong)puVar2 & 1) == 0) {
    FUN_00026654();
    _swift_allocError(&__s23ExtensionsStickerPicker20SessionProviderErrorON,puVar2,0,0);
    *puVar2 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___SCExtensionSharedFile_00ac2ab0;
    _objc_allocWithZone();
    func_0x00785c80();
    if (puVar3 != (undefined1 *)0x0) {
      puVar4 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_00ac3028;
      _objc_allocWithZone();
      func_0x00785580();
      puVar2 = puVar4;
      func_0x00792060();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined1 *)0x0) {
        puVar5 = puVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar6 = puVar4;
        puVar9 = param_3;
        func_0x00792060();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined1 *)0x0) {
          puVar7 = puVar6;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          puVar13 = puVar9;
          _objc_release(puVar6);
          puVar8 = PTR__OBJC_CLASS___SCUserExtensionStorageServiceImpl_00ac29f0;
          _objc_opt_self();
          func_0x007915c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = puVar8;
          func_0x0077ed40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00792720();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          if (puVar6 != (undefined1 *)0x0) {
            if (((ulong)param_2 & 0xff) == 0) {
              puVar2 = puVar6;
              func_0x0077fba0();
              if (((ulong)puVar2 & 1) == 0) {
                puVar10 = &UNK_0099da40;
                _swift_allocObject(&UNK_0099da40,0x18,7);
                *(undefined1 **)(puVar10 + 0x10) = puVar6;
                _swift_unknownObjectRetain(puVar6);
                uStack_90 = 1;
                uVar16 = 1;
                puVar13 = (undefined1 *)0x0;
                __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
                          (1,0,0x10,4,0,0,&UNK_007cd4c0,puVar10,PTR___sytN_0099b8e0 + 8);
                _swift_release(puVar10);
                _swift_release(uVar16);
              }
              else {
                uStack_90 = 0;
              }
            }
            else {
              uStack_90 = 0;
            }
            ppuVar11 = &PTR____CFConstantStringClassReference_00a20de0;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                      (&PTR____CFConstantStringClassReference_00a20de0);
            puVar2 = puVar6;
            FUN_00026b14(puVar6,ppuVar11,puVar13,FUN_0007d244);
            _swift_bridgeObjectRelease(puVar13);
            ppuVar12 = &PTR____CFConstantStringClassReference_00a20e00;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                      (&PTR____CFConstantStringClassReference_00a20e00);
            puVar13 = puVar6;
            FUN_00026b14(puVar6,ppuVar12,ppuVar11,FUN_0007d760);
            _swift_bridgeObjectRelease(ppuVar11);
            if (puVar2 == (undefined1 *)0x0) {
              uVar17 = 0;
              uStack_a0 = 0xffffffffffffffff;
              uStack_98 = 0;
              uVar16 = 0xe300000000000000;
              uStack_a8 = 0x412f4e;
            }
            else {
              uStack_98 = *(ulong *)(puVar2 + _DAT_00ae90c8);
              uVar17 = *(ulong *)((long)(puVar2 + _DAT_00ae90c8) + 8);
              uVar1 = uStack_98 & 0xffffffffffff;
              if ((uVar17 & 0x2000000000000000) != 0) {
                uVar1 = uVar17 >> 0x38 & 0xf;
              }
              if (uVar1 == 0) {
                uStack_98 = 0;
                uVar17 = 0;
              }
              else {
                _swift_bridgeObjectRetain(uVar17);
              }
              uStack_a0 = *(undefined8 *)(puVar2 + _DAT_00ae90c0);
              uStack_a8 = *(undefined8 *)(puVar2 + _DAT_00ae90b8);
              uVar16 = *(undefined8 *)((long)(puVar2 + _DAT_00ae90b8) + 8);
              _swift_bridgeObjectRetain(uVar16);
              _objc_release(puVar4);
              puVar4 = puVar8;
              puVar8 = puVar2;
            }
            _objc_release(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar3);
            _swift_unknownObjectRelease(puVar6);
            if (puVar13 == (undefined1 *)0x0) {
              uVar15 = 0;
              uVar14 = 0;
              uVar18 = 0x41200000;
            }
            else {
              uVar18 = *(undefined4 *)(puVar13 + _DAT_00ae90f8);
              uVar15 = *(undefined8 *)(puVar13 + _DAT_00ae9100);
              uVar14 = *(undefined8 *)((long)(puVar13 + _DAT_00ae9100) + 8);
              _swift_bridgeObjectRetain(uVar14);
              _objc_release(puVar13);
            }
            *param_1 = puVar5;
            param_1[1] = param_3;
            param_1[2] = puVar7;
            param_1[3] = puVar9;
            param_1[4] = uStack_98;
            param_1[5] = uVar17;
            param_1[6] = uStack_a0;
            param_1[7] = uStack_a8;
            param_1[8] = uVar16;
            *(undefined4 *)(param_1 + 9) = uVar18;
            param_1[10] = uVar15;
            param_1[0xb] = uVar14;
            *(undefined1 *)(param_1 + 0xc) = uStack_90;
            return;
          }
          _swift_bridgeObjectRelease(param_3);
          _swift_bridgeObjectRelease();
          FUN_00026654();
          _swift_allocError(&__s23ExtensionsStickerPicker20SessionProviderErrorON,puVar9,0,0);
          *puVar9 = 1;
          _swift_willThrow();
          _objc_release(puVar3);
          _objc_release(puVar4);
          _objc_release(puVar8);
          return;
        }
        _swift_bridgeObjectRelease(param_3);
        _objc_release();
      }
      FUN_00026654();
      _swift_allocError(&__s23ExtensionsStickerPicker20SessionProviderErrorON,puVar2,0,0);
      *puVar2 = 1;
      _swift_willThrow();
      _objc_release(puVar3);
      _objc_release(puVar4);
      return;
    }
    FUN_00026654();
    _swift_allocError(&__s23ExtensionsStickerPicker20SessionProviderErrorON,puVar3,0,0);
    *puVar3 = 1;
  }
  _swift_willThrow();
  return;
}



/* Entry: 00026654; end: 00026693;  */

void FUN_00026654(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd590;
  _swift_getWitnessTable(&UNK_007cd590,&__s23ExtensionsStickerPicker20SessionProviderErrorON);
  puRam0000000000ae6708 = puVar1;
  return;
}



/* Entry: 00026694; end: 000266ab;  */

void FUN_00026694(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000266ac,0,0);
  return;
}



/* Entry: 000266ac; end: 0002670b;  */

void FUN_000266ac(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x80000000008b54c0);
  _objc_release();
  func_0x0078d040(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00026708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002670c; end: 0002672b;  */

void FUN_0002670c(void)

{
  __s7SwiftUI17EnvironmentValuesV7openURLAA13OpenURLActionVvg();
  return;
}



/* Entry: 0002672c; end: 0002673f;  */

void FUN_0002672c(undefined8 param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long extraout_x12;
  
  puVar1 = PTR___s7SwiftUI17EnvironmentValuesV7openURLAA13OpenURLActionVvs_00999388;
  (*(code *)PTR___s7SwiftUI13OpenURLActionVMa_009991f0)();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffd0 + -extraout_x12,param_1);
  (*(code *)puVar1)(&stack0xffffffffffffffd0 + -extraout_x12);
  return;
}



/* Entry: 00026740; end: 0002675f;  */

void FUN_00026740(void)

{
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovg();
  return;
}



/* Entry: 00026760; end: 00026773;  */

void FUN_00026760(undefined8 param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long extraout_x12;
  
  puVar1 = PTR___s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovs_00999348;
  (*(code *)PTR___s7SwiftUI11ColorSchemeOMa_00999158)();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffd0 + -extraout_x12,param_1);
  (*(code *)puVar1)(&stack0xffffffffffffffd0 + -extraout_x12);
  return;
}



/* Entry: 00026774; end: 000267ef;  */

void FUN_00026774(undefined8 param_1)

{
  code *in_x4;
  code *in_x5;
  long extraout_x8;
  long extraout_x12;
  
  (*in_x4)();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffd0 + -extraout_x12,param_1);
  (*in_x5)(&stack0xffffffffffffffd0 + -extraout_x12);
  return;
}



/* Entry: 000267f0; end: 000269ab;  */

void FUN_000267f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 000269ac; end: 00026a53;  */

void FUN_000269ac(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_00026a40;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_00026a40:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 00026a54; end: 00026b13;  */

/* WARNING: Removing unreachable block (ram,0x00026c10) */

long FUN_00026a54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_40;
  long lStack_38;
  
  pcVar8 = (code *)&lStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  lStack_40 = 0;
  uVar7 = param_1;
  func_0x00784a40();
  _objc_release(param_1);
  lVar2 = lStack_40;
  if (unaff_x20 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release();
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  uVar3 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,uVar7);
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar2 == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  puVar1 = PTR___sypN_0099b8d8;
  uStack_a8 = uStack_c8;
  uStack_b0 = uStack_d0;
  lStack_98 = lStack_b8;
  uStack_a0 = uStack_c0;
  if (lStack_b8 == 0) {
    FUN_00027748(&uStack_b0);
  }
  else {
    plVar4 = &lStack_e0;
    _swift_dynamicCast(plVar4,&uStack_b0,PTR___sypN_0099b8d8 + 8,PTR___s10Foundation4DataVN_0099c3c0
                       ,6);
    lVar2 = lStack_e0;
    if (((ulong)plVar4 & 1) != 0) {
      _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8);
      func_0x00023304(lVar2,uStack_d8);
      lVar5 = lVar2;
      FUN_00026a54(lVar2,uStack_d8);
      FUN_00023358(lVar2,uStack_d8);
      func_0x0078ff20(lVar5);
      lVar6 = lVar5;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        FUN_00023358(lVar2,uStack_d8);
        _objc_release(lVar5);
        uStack_c8 = 0;
        uStack_d0 = 0;
        lStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0);
        FUN_00023358(lVar2,uStack_d8);
        _swift_unknownObjectRelease(lVar6);
        _objc_release(lVar5);
      }
      uStack_a8 = uStack_c8;
      uStack_b0 = uStack_d0;
      lStack_98 = lStack_b8;
      uStack_a0 = uStack_c0;
      if (lStack_b8 == 0) {
        FUN_00027748(&uStack_b0);
        return 0;
      }
      uVar7 = 0;
      (*pcVar8)(0);
      plVar4 = &lStack_e0;
      _swift_dynamicCast(plVar4,&uStack_b0,puVar1 + 8,uVar7,6);
      if ((int)plVar4 == 0) {
        return 0;
      }
      return lStack_e0;
    }
  }
  uStack_b0 = 0;
  uStack_a8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3b);
  __sSS6appendyySSF(0xd000000000000025,0x80000000008b54f0);
  __sSS6appendyySSF(param_2,uVar7);
  __sSS6appendyySSF(0xd000000000000014,0x80000000008b5520);
  uVar7 = uStack_a8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
  _objc_release();
  _swift_bridgeObjectRelease(uVar7);
  return 0;
}



/* Entry: 00026b14; end: 00026e57;  */

/* WARNING: Removing unreachable block (ram,0x00026c10) */

long FUN_00026b14(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar6 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (param_1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  puVar1 = PTR___sypN_0099b8d8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_00027748(&uStack_70);
  }
  else {
    plVar3 = &lStack_a0;
    _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_0099b8d8 + 8,PTR___s10Foundation4DataVN_0099c3c0
                       ,6);
    lVar2 = lStack_a0;
    if (((ulong)plVar3 & 1) != 0) {
      _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8);
      func_0x00023304(lVar2,uStack_98);
      lVar4 = lVar2;
      FUN_00026a54(lVar2,uStack_98);
      FUN_00023358(lVar2,uStack_98);
      func_0x0078ff20(lVar4);
      lVar5 = lVar4;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        FUN_00023358(lVar2,uStack_98);
        _objc_release(lVar4);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90);
        FUN_00023358(lVar2,uStack_98);
        _swift_unknownObjectRelease(lVar5);
        _objc_release(lVar4);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        FUN_00027748(&uStack_70);
        return 0;
      }
      uVar6 = 0;
      (*param_4)(0);
      plVar3 = &lStack_a0;
      _swift_dynamicCast(plVar3,&uStack_70,puVar1 + 8,uVar6,6);
      if ((int)plVar3 == 0) {
        return 0;
      }
      return lStack_a0;
    }
  }
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3b);
  __sSS6appendyySSF(0xd000000000000025,0x80000000008b54f0);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0xd000000000000014,0x80000000008b5520);
  uVar6 = uStack_68;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_70,uStack_68);
  _objc_release();
  _swift_bridgeObjectRelease(uVar6);
  return 0;
}



/* Entry: 00026e58; end: 00026e7b;  */

void FUN_00026e58(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00026e7c; end: 00026ed3;  */

void FUN_00026e7c(void)

{
  segment_command *psVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  psVar1 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar1;
  psVar1->cmd = (int)unaff_x22;
  psVar1->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar1->segname = FUN_00026ed4;
  *(undefined8 *)(psVar1->segname + 8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000266ac,0,0);
  return;
}



/* Entry: 00026ed4; end: 00026f0f;  */

void FUN_00026ed4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00026f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 00026f10; end: 00026f63;  */

void FUN_00026f10(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  iVar1 = 2;
  FUN_0040c9a8(2,0x1a,4,0);
  if (iVar1 == 0) {
    uVar2 = 0xff;
    __s7SwiftUI13_TaskModifierVMa(0xff);
  }
  else {
    uVar2 = 0xff;
    __s7SwiftUI14_TaskModifier2VMa(0xff);
  }
                    /* WARNING: Could not recover jumptable at 0x00777d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI15ModifiedContentVMa_009992a8)(0,uVar3,uVar2);
  return;
}



/* Entry: 00026f64; end: 0002702f;  */

void FUN_00026f64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar7 = &uStack_50;
  uVar6 = *param_1;
  uVar1 = param_1[1];
  iVar3 = 2;
  FUN_0040c9a8(2,0x1a,4,0);
  if (iVar3 == 0) {
    uVar4 = 0xff;
    __s7SwiftUI13_TaskModifierVMa(0xff);
    puVar2 = PTR___s7SwiftUI13_TaskModifierVMa_00999228;
    uVar5 = 0xff;
    __s7SwiftUI15ModifiedContentVMa(0xff,uVar6,uVar4);
    uVar6 = 0xae6720;
    FUN_00027684(0xae6720,puVar2,PTR___s7SwiftUI13_TaskModifierVAA04ViewD0AAMc_00999220);
    uStack_50 = uVar1;
    uStack_48 = uVar6;
  }
  else {
    uVar4 = 0xff;
    __s7SwiftUI14_TaskModifier2VMa(0xff);
    uVar5 = 0xff;
    __s7SwiftUI15ModifiedContentVMa(0xff,uVar6,uVar4);
    uVar6 = uVar5;
    FUN_00027030();
    puVar7 = &uStack_40;
    uStack_40 = uVar1;
    uStack_38 = uVar6;
  }
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar5,
             puVar7);
  return;
}



/* Entry: 00027030; end: 00027073;  */

void FUN_00027030(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae6718 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s7SwiftUI14_TaskModifier2VMa(0xff);
  puVar2 = PTR___s7SwiftUI14_TaskModifier2VAA12ViewModifierAAMc_00999290;
  _swift_getWitnessTable(PTR___s7SwiftUI14_TaskModifier2VAA12ViewModifierAAMc_00999290,uVar1);
  puRam0000000000ae6718 = puVar2;
  return;
}



/* Entry: 00027074; end: 00027077;  */

void FUN_00027074(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd4f0;
  _swift_getWitnessTable(&UNK_007cd4f0,&__s23ExtensionsStickerPicker20SessionProviderErrorON);
  puRam0000000000ae6740 = puVar1;
  return;
}



/* Entry: 00027078; end: 000270b7;  */

void FUN_00027078(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd4f0;
  _swift_getWitnessTable(&UNK_007cd4f0,&__s23ExtensionsStickerPicker20SessionProviderErrorON);
  puRam0000000000ae6740 = puVar1;
  return;
}



/* Entry: 000270b8; end: 00027123;  */

long FUN_000270b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00027124; end: 000271b7;  */

undefined8 * FUN_00027124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  uVar3 = param_2[8];
  param_1[8] = uVar3;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 000271b8; end: 0002729b;  */

undefined8 * FUN_000271b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



/* Entry: 0002729c; end: 000272c7;  */

void FUN_0002729c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 000272c8; end: 00027353;  */

undefined8 * FUN_000272c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



/* Entry: 00027354; end: 00027613;  */

int FUN_00027354(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x61) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00027614; end: 00027657;  */

void FUN_00027614(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 00027658; end: 00027683;  */

void FUN_00027658(void)

{
  FUN_00027684(0xae6760,0x27598,&UNK_007cd698);
  return;
}



/* Entry: 00027684; end: 000276c3;  */

void FUN_00027684(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 000276c4; end: 00027747;  */

void FUN_000276c4(void)

{
  FUN_00027684(0xae6768,0x27598,&UNK_007cd668);
  return;
}



/* Entry: 00027748; end: 0002778f;  */

undefined8 FUN_00027748(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xae65a0;
  func_0x000115a8(0xae65a0,&UNK_007ce270);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 00027790; end: 000277bb;  */

bool FUN_00027790(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 000277bc; end: 00027867;  */

void FUN_000277bc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00027868; end: 0002786b;  */

void FUN_00027868(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd800;
  _swift_getWitnessTable(&UNK_007cd800,&UNK_0099deb8);
  puRam0000000000ae6780 = puVar1;
  return;
}



/* Entry: 0002786c; end: 000278ab;  */

void FUN_0002786c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd800;
  _swift_getWitnessTable(&UNK_007cd800,&UNK_0099deb8);
  puRam0000000000ae6780 = puVar1;
  return;
}



/* Entry: 000278ac; end: 00027a23;  */

int FUN_000278ac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00027928;
        goto LAB_0002790c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0002790c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_00027928:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00027a24; end: 00027acf;  */

void FUN_00027a24(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00027ad0; end: 00027ad3;  */

void FUN_00027ad0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd880;
  _swift_getWitnessTable(&UNK_007cd880,&UNK_0099df80);
  puRam0000000000ae6788 = puVar1;
  return;
}



/* Entry: 00027ad4; end: 00027b13;  */

void FUN_00027ad4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd880;
  _swift_getWitnessTable(&UNK_007cd880,&UNK_0099df80);
  puRam0000000000ae6788 = puVar1;
  return;
}



/* Entry: 00027b14; end: 00027c8b;  */

int FUN_00027b14(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00027b90;
        goto LAB_00027b74;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00027b74:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_00027b90:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00027c8c; end: 00027d37;  */

void FUN_00027c8c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00027d38; end: 00027d3b;  */

void FUN_00027d38(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd900;
  _swift_getWitnessTable(&UNK_007cd900,&UNK_0099e048);
  puRam0000000000ae6790 = puVar1;
  return;
}



/* Entry: 00027d3c; end: 00027d7b;  */

void FUN_00027d3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd900;
  _swift_getWitnessTable(&UNK_007cd900,&UNK_0099e048);
  puRam0000000000ae6790 = puVar1;
  return;
}



/* Entry: 00027d7c; end: 00027ef3;  */

int FUN_00027d7c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00027df8;
        goto LAB_00027ddc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00027ddc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_00027df8:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00027ef4; end: 0002800f;  */

void FUN_00027ef4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00028010; end: 00028027;  */

undefined8 * FUN_00028010(long param_1,undefined8 *param_2)

{
  if ((*(byte *)(*(long *)(param_1 + -8) + 0x52) >> 1 & 1) != 0) {
    param_2 = (undefined8 *)*param_2;
  }
  return param_2;
}



/* Entry: 00028028; end: 000282c3;  */

undefined1  [16] FUN_00028028(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_90 [48];
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar7 - extraout_x12_00;
  if (lRam0000000000ae6798 != -1) {
    _swift_once(0xae6798,0x27fa0);
  }
  FUN_00028010(lVar1,0xae67a0);
  _swift_beginAccess();
  FUN_000138a4(lVar1,lVar5);
  lVar3 = lVar5;
  (**(code **)(lVar10 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000138f4(lVar5);
    uVar8 = 1;
    (**(code **)(lVar10 + 0x38))(puVar4,1,1,lVar2);
    _swift_beginAccess(lVar1,auStack_90,0x21,0);
    FUN_00013a14(puVar4,lVar1);
    _swift_endAccess(auStack_90);
    lVar5 = 0;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar9,lVar5,lVar2);
    __s10Foundation4DateVACycfC(lVar7);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar9);
    pcVar6 = *(code **)(lVar10 + 8);
    (*pcVar6)(lVar7,lVar2);
    dVar11 = (double)(long)param_1;
    (*pcVar6)(lVar9,lVar2);
    if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x282bc);
      (*pcVar6)();
    }
    if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x282c0);
      (*pcVar6)();
    }
    if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x282c4);
      (*pcVar6)();
    }
    lVar5 = (long)dVar11;
    (**(code **)(lVar10 + 0x38))(puVar4,1,1,lVar2);
    _swift_beginAccess(lVar1,auStack_90,0x21,0);
    FUN_00013a14(puVar4,lVar1);
    _swift_endAccess(auStack_90);
    uVar8 = 0;
  }
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = lVar5;
  return auVar12;
}



/* Entry: 000282c4; end: 000282c7;  */

void FUN_000282c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae67b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cd978;
  _swift_getWitnessTable(&UNK_007cd978,&UNK_0099e190);
  puRam0000000000ae67b8 = puVar1;
  return;
}


