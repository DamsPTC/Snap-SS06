/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad91e38; end: 10ad91eaf;  */

undefined8 * FUN_10ad91e38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c72bf8;
  param_1[1] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10ad91eb0; end: 10ad91ebf;  */

void FUN_10ad91eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startCompassUpdates_112671378);
  return;
}



/* Entry: 10ad91ec0; end: 10ad91fbf;  */

void FUN_10ad91ec0(int *param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  
  lVar2 = *(long *)(param_3 + 8);
  func_0x00010bfe0320();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x00010bfe0340(lVar2);
    bVar1 = false;
    if ((0.0 <= param_2) && (bVar1 = false, !NAN(param_2))) {
      bVar1 = param_2 < 30.0;
    }
    if (bVar1) {
      iVar4 = 3;
    }
    else {
      bVar1 = false;
      if ((30.0 <= param_2) && (bVar1 = false, !NAN(param_2))) {
        bVar1 = param_2 < 60.0;
      }
      if (bVar1) {
        iVar4 = 2;
      }
      else if ((param_2 < 60.0) || (90.0 <= param_2)) {
        iVar4 = -(uint)(param_2 < 90.0);
      }
      else {
        iVar4 = 1;
      }
    }
    func_0x00010c27cae0(lVar2);
    if (0.0 <= param_2) {
      func_0x00010c27cae0(lVar2);
    }
    else {
      func_0x00010c0b6560(lVar2);
    }
    *param_1 = iVar4;
    *(double *)(param_1 + 2) = param_2;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10ad91fc0; end: 10ad9207b;  */

undefined8 * FUN_10ad91fc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_110c72c58;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2;
  func_0x00010bf51e00();
  uVar2 = param_1[5];
  param_1[5] = uVar1;
  _objc_release(uVar2);
  uVar1 = param_1[4];
  param_1[4] = param_3;
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10ad9207c; end: 10ad920db;  */

undefined8 * FUN_10ad9207c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c72c58;
  uVar1 = param_1[5];
  param_1[5] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[4];
  param_1[4] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[5]);
  _objc_release(param_1[4]);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad920dc; end: 10ad920df;  */

undefined8 * FUN_10ad920dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c72c58;
  uVar1 = param_1[5];
  param_1[5] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[4];
  param_1[4] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[5]);
  _objc_release(param_1[4]);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad920e0; end: 10ad920f3;  */

void FUN_10ad920e0(void)

{
  FUN_10ad9207c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad920f4; end: 10ad9219b;  */

ulong FUN_10ad920f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  FUN_10ad9219c();
  if ((uVar1 >> 0x20 == 0) && (uVar3 = *(ulong *)(param_1 + 0x20), uVar1 = param_3, uVar3 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6680(uVar3);
    _objc_release(puVar2);
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 10ad9219c; end: 10ad9235f;  */

ulong FUN_10ad9219c(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (uVar7 != 0) {
      uVar3 = uVar7;
      _objc_retainAutorelease();
      func_0x00010bf260e0();
      if (uVar3 != 0) {
        uVar4 = uVar3;
        _strlen();
        if (0x7ffffffffffffff7 < uVar4) {
          func_0x000104c4f6b8();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad92314);
          (*pcVar1)();
        }
        if (uVar4 < 0x17) {
          uStack_48 = CONCAT17((char)uVar4,(undefined7)uStack_48);
          ppppuVar5 = &pppuStack_58;
          if (uVar4 != 0) goto LAB_10ad92298;
        }
        else {
          ppppuVar6 = (undefined8 ****)0x19;
          if ((uVar4 | 7) != 0x17) {
            ppppuVar6 = (undefined8 ****)((uVar4 | 7) + 1);
          }
          ppppuVar5 = ppppuVar6;
          __Znwm();
          uStack_48 = (ulong)ppppuVar6 | 0x8000000000000000;
          pppuStack_58 = ppppuVar5;
          uStack_50 = uVar4;
LAB_10ad92298:
          _memmove(ppppuVar5,uVar3,uVar4);
        }
        *(undefined1 *)((long)ppppuVar5 + uVar4) = 0;
        ppppuVar6 = &pppuStack_58;
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                  (ppppuVar6,0,10);
        if ((long)uStack_48 < 0) {
          __ZdlPv(pppuStack_58);
        }
        uVar9 = (uint)ppppuVar6 & 0xffffff00;
        _objc_release(uVar7);
        uVar8 = (uint)ppppuVar6 & 0xff;
        uVar7 = 0x100000000;
        goto LAB_10ad922e4;
      }
    }
    _objc_release(uVar7);
  }
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
LAB_10ad922e4:
  _objc_release(param_1);
  return uVar7 | (uVar9 | uVar8);
}



/* Entry: 10ad92360; end: 10ad92403;  */

long FUN_10ad92360(long param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_10ad92404(lVar1);
  if (((param_2 & 1) == 0) && (lVar3 = *(long *)(param_1 + 0x20), lVar1 = param_3, lVar3 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc74e0(lVar3);
    _objc_release(puVar2);
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 10ad92404; end: 10ad925c7;  */

undefined1  [16] FUN_10ad92404(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (uVar7 != 0) {
      uVar8 = uVar7;
      _objc_retainAutorelease();
      func_0x00010bf260e0();
      if (uVar8 != 0) {
        uVar3 = uVar8;
        _strlen();
        if (0x7ffffffffffffff7 < uVar3) {
          func_0x000104c4f6b8();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad9257c);
          (*pcVar1)();
        }
        if (uVar3 < 0x17) {
          uStack_48 = CONCAT17((char)uVar3,(undefined7)uStack_48);
          ppppuVar4 = &pppuStack_58;
          if (uVar3 != 0) goto LAB_10ad92500;
        }
        else {
          ppppuVar5 = (undefined8 ****)0x19;
          if ((uVar3 | 7) != 0x17) {
            ppppuVar5 = (undefined8 ****)((uVar3 | 7) + 1);
          }
          ppppuVar4 = ppppuVar5;
          __Znwm();
          uStack_48 = (ulong)ppppuVar5 | 0x8000000000000000;
          pppuStack_58 = ppppuVar4;
          uStack_50 = uVar3;
LAB_10ad92500:
          _memmove(ppppuVar4,uVar8,uVar3);
        }
        *(undefined1 *)((long)ppppuVar4 + uVar3) = 0;
        ppppuVar5 = &pppuStack_58;
        __ZNSt3__15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                  (ppppuVar5,0,10);
        if ((long)uStack_48 < 0) {
          __ZdlPv(pppuStack_58);
        }
        uVar8 = (ulong)ppppuVar5 & 0xffffffffffffff00;
        _objc_release(uVar7);
        uVar7 = (ulong)ppppuVar5 & 0xff;
        uVar6 = 1;
        goto LAB_10ad9254c;
      }
    }
    _objc_release(uVar7);
  }
  uVar7 = 0;
  uVar6 = 0;
  uVar8 = 0;
LAB_10ad9254c:
  _objc_release(param_1);
  auVar9._0_8_ = uVar8 | uVar7;
  auVar9._8_8_ = uVar6;
  return auVar9;
}



/* Entry: 10ad925c8; end: 10ad9266f;  */

ulong FUN_10ad925c8(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x28);
  FUN_10ad92670();
  if (uVar1 >> 0x20 == 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    if (lVar3 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc5a80(param_1,lVar3);
      _objc_release(puVar2);
    }
  }
  else {
    param_1 = uVar1 & 0xffffffff;
  }
  return param_1;
}



/* Entry: 10ad92670; end: 10ad9282b;  */

ulong FUN_10ad92670(uint param_1,ulong param_2)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  if (param_2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (uVar6 != 0) {
      uVar7 = uVar6;
      _objc_retainAutorelease();
      func_0x00010bf260e0();
      if (uVar7 != 0) {
        uVar4 = uVar7;
        _strlen();
        if (0x7ffffffffffffff7 < uVar4) {
          func_0x000104c4f6b8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad927e0);
          (*pcVar2)();
        }
        if (uVar4 < 0x17) {
          uStack_58 = CONCAT17((char)uVar4,(undefined7)uStack_58);
          ppppuVar5 = &pppuStack_68;
          if (uVar4 != 0) goto LAB_10ad9276c;
        }
        else {
          ppppuVar1 = (undefined8 ****)0x19;
          if ((uVar4 | 7) != 0x17) {
            ppppuVar1 = (undefined8 ****)((uVar4 | 7) + 1);
          }
          ppppuVar5 = ppppuVar1;
          __Znwm();
          uStack_58 = (ulong)ppppuVar1 | 0x8000000000000000;
          pppuStack_68 = ppppuVar5;
          uStack_60 = uVar4;
LAB_10ad9276c:
          _memmove(ppppuVar5,uVar7,uVar4);
        }
        *(undefined1 *)((long)ppppuVar5 + uVar4) = 0;
        __ZNSt3__14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm
                  (&pppuStack_68,0);
        if ((long)uStack_58 < 0) {
          __ZdlPv(pppuStack_68);
        }
        _objc_release(uVar6);
        uVar7 = (ulong)param_1;
        uVar6 = 0x100000000;
        goto LAB_10ad927b0;
      }
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar7 = 0;
LAB_10ad927b0:
  _objc_release(param_2);
  return uVar7 | uVar6;
}



/* Entry: 10ad9282c; end: 10ad928d7;  */

uint FUN_10ad9282c(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x28);
  FUN_10ad928d8();
  uVar1 = uVar1 & 0xffff;
  if ((uVar1 < 0x100) && (lVar3 = *(long *)(param_1 + 0x20), uVar1 = param_3, lVar3 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc3160(lVar3);
    uVar1 = (uint)lVar3;
    _objc_release(puVar2);
  }
  return uVar1 & 1;
}



/* Entry: 10ad928d8; end: 10ad92a1b;  */

uint FUN_10ad928d8(int *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  _objc_retain();
  if (param_1 == (int *)0x0) {
    uVar6 = 0;
    iVar7 = 0;
    goto LAB_10ad929cc;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  piVar3 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (piVar3 == (int *)0x0) {
LAB_10ad929a4:
    uVar6 = 0;
    iVar7 = 0;
  }
  else {
    piVar4 = piVar3;
    _objc_retainAutorelease();
    func_0x00010bf260e0();
    if (piVar4 == (int *)0x0) goto LAB_10ad929a4;
    piVar5 = piVar4;
    _strlen();
    if (piVar5 == (int *)0x1) {
      bVar1 = (char)*piVar4 == '0';
LAB_10ad929b4:
      uVar6 = (uint)!bVar1;
    }
    else {
      if (piVar5 == (int *)0x5) {
        bVar1 = *piVar4 == 0x736c6166 && (char)piVar4[1] == 'e';
        goto LAB_10ad929b4;
      }
      uVar6 = 1;
    }
    iVar7 = 1;
  }
  _objc_release(piVar3);
LAB_10ad929cc:
  _objc_release(param_1);
  return uVar6 | iVar7 << 8;
}



/* Entry: 10ad92a1c; end: 10ad92bfb;  */

/* WARNING: Possible PIC construction at 0x00010ad92b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad92b80) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10ad92a1c(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined1 *unaff_x29;
  undefined *puVar6;
  undefined8 unaff_x30;
  long lStack_60;
  ulong uStack_58;
  undefined7 uStack_50;
  char cStack_49;
  char cStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  FUN_10ad92bfc(&lStack_60,*(undefined8 *)(param_2 + 0x28),param_3);
  if (cStack_48 == '\x01') {
    if (cStack_49 < '\0') {
      unaff_x30 = 0x10ad92b80;
      register0x00000008 = (BADSPACEBASE *)&lStack_60;
      lVar5 = lStack_60;
      uVar4 = uStack_58;
      unaff_x19 = param_1;
      unaff_x20 = lStack_60;
      unaff_x21 = param_3;
      unaff_x22 = param_2;
      unaff_x29 = puVar1;
code_r0x000100033dac:
      *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (uVar4 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_1,lVar5,uVar4 + 1);
        return;
      }
      if (uVar4 < 0x7ffffffffffffff7) {
        lVar3 = 0x19;
        if ((uVar4 | 7) != 0x17) {
          lVar3 = (uVar4 | 7) + 1;
        }
        puVar6 = &UNK_100033e00;
      }
      else {
        puVar6 = &UNK_100033e30;
        lVar3 = lVar5;
        func_0x000104bd47d4();
      }
      *(ulong *)((long)register0x00000008 + -0x50) = uVar4;
      *(long *)((long)register0x00000008 + -0x48) = lVar5;
      *(undefined1 **)((long)register0x00000008 + -0x40) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x38) = puVar6;
      func_0x000107c60e20(lVar3);
      return;
    }
    param_1[1] = uStack_58;
    *param_1 = lStack_60;
    lVar5 = CONCAT17(cStack_49,uStack_50);
  }
  else {
    lVar5 = *(long *)(param_2 + 0x20);
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcadc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
      if (lVar5 != 0) {
        lVar3 = lVar5;
        _objc_retainAutorelease();
        func_0x00010bf260e0();
        if (lVar3 != 0) {
          func_0x000107c31940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(lVar5);
          return;
        }
      }
      _objc_release(lVar5);
    }
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      lVar5 = *param_4;
      uVar4 = param_4[1];
      goto code_r0x000100033dac;
    }
    lVar5 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = lVar5;
    lVar5 = param_4[2];
  }
  param_1[2] = lVar5;
  return;
}



/* Entry: 10ad92bfc; end: 10ad92d8f;  */

void FUN_10ad92bfc(ulong *param_1,ulong param_2)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (uVar4 != 0) {
      uVar5 = uVar4;
      _objc_retainAutorelease();
      func_0x00010bf260e0();
      if (uVar5 != 0) {
        uVar6 = uVar5;
        _strlen();
        if (0x7ffffffffffffff7 < uVar6) {
          func_0x000104c4f6b8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad92d5c);
          (*pcVar2)();
        }
        if (uVar6 < 0x17) {
          uStack_58 = CONCAT17((char)uVar6,(undefined7)uStack_58);
          ppppuVar7 = &pppuStack_68;
          if (uVar6 != 0) goto LAB_10ad92d00;
        }
        else {
          ppppuVar1 = (undefined8 ****)0x19;
          if ((uVar6 | 7) != 0x17) {
            ppppuVar1 = (undefined8 ****)((uVar6 | 7) + 1);
          }
          ppppuVar7 = ppppuVar1;
          __Znwm();
          uStack_58 = (ulong)ppppuVar1 | 0x8000000000000000;
          pppuStack_68 = ppppuVar7;
          uStack_60 = uVar6;
LAB_10ad92d00:
          _memmove(ppppuVar7,uVar5,uVar6);
        }
        *(undefined1 *)((long)ppppuVar7 + uVar6) = 0;
        param_1[1] = uStack_60;
        *param_1 = (ulong)pppuStack_68;
        param_1[2] = uStack_58;
        *(undefined1 *)(param_1 + 3) = 1;
        _objc_release(uVar4);
        goto LAB_10ad92d34;
      }
    }
    _objc_release(uVar4);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_10ad92d34:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad92d90; end: 10ad92f87;  */

/* WARNING: Possible PIC construction at 0x00010ad92dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad92f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad92df0) */
/* WARNING: Removing unreachable block (ram,0x00010ad92edc) */
/* WARNING: Removing unreachable block (ram,0x00010ad92df4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

void FUN_10ad92d90(undefined8 *param_1,long param_2,undefined *param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar5;
  long *unaff_x21;
  undefined *unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_60;
  long lStack_58;
  char cStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  FUN_10ad92f88(&lStack_60,*(undefined8 *)(param_2 + 0x28),param_3);
  if (cStack_48 == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar4 = lStack_58 - lStack_60;
    unaff_x30 = 0x10ad92df0;
    register0x00000008 = (BADSPACEBASE *)&lStack_60;
    lVar5 = lStack_60;
    lVar3 = lStack_58;
    unaff_x19 = param_1;
    unaff_x20 = lStack_60;
    unaff_x21 = param_4;
    unaff_x22 = param_3;
    unaff_x29 = puVar1;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x20);
    if (lVar5 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar5 = *param_4;
      lVar3 = param_4[1];
      lVar4 = lVar3 - lVar5;
    }
    else {
      unaff_x22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_new(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bfc32e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(unaff_x22);
      if (lVar5 != 0) {
        lVar3 = lVar5;
        func_0x00010c08fa60(lVar5);
        func_0x000109246310(param_1,lVar3);
        func_0x00010bfc3360(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar5);
        return;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar5 = *param_4;
      lVar3 = param_4[1];
      lVar4 = lVar3 - lVar5;
      unaff_x30 = 0x10ad92f0c;
      unaff_x20 = 0;
      register0x00000008 = (BADSPACEBASE *)&lStack_60;
      unaff_x19 = param_1;
      unaff_x21 = param_4;
      unaff_x29 = puVar1;
    }
  }
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (lVar4 != 0) {
    func_0x000109246380(param_1,lVar4);
    lVar4 = param_1[1];
    lVar3 = lVar3 - lVar5;
    if (lVar3 != 0) {
      _memmove(lVar4,lVar5,lVar3);
    }
    param_1[1] = lVar4 + lVar3;
  }
  return;
}



/* Entry: 10ad92f88; end: 10ad930db;  */

void FUN_10ad92f88(undefined8 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  _objc_retain(param_2);
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 != (undefined1 *)0x0) {
      puVar9 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bf260e0();
      if (puVar9 != (undefined1 *)0x0) {
        puVar4 = puVar9;
        _strlen();
        if (puVar4 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          puVar9 = (undefined1 *)0x0;
        }
        else {
          if ((long)puVar4 < 0) {
            func_0x000104c591bc();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad930a8);
            (*pcVar1)();
          }
          puVar5 = puVar4;
          __Znwm();
          puVar6 = puVar5;
          puVar8 = puVar4;
          do {
            puVar7 = puVar6 + 1;
            *puVar6 = *puVar9;
            puVar8 = puVar8 + -1;
            puVar6 = puVar7;
            puVar9 = puVar9 + 1;
          } while (puVar8 != (undefined1 *)0x0);
          puVar9 = puVar5 + (long)puVar4;
          puVar4 = puVar5;
        }
        *param_1 = puVar4;
        param_1[1] = puVar7;
        param_1[2] = puVar9;
        *(undefined1 *)(param_1 + 3) = 1;
        _objc_release(puVar3);
        goto LAB_10ad93088;
      }
    }
    _objc_release(puVar3);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_10ad93088:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad930dc; end: 10ad93217;  */

void FUN_10ad930dc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [7];
  undefined4 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar6 = param_1[5];
  FUN_10ad9219c();
  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad93140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_4)();
    return;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010a2173a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_4)();
      return;
    }
LAB_10a217628:
    ___stack_chk_fail();
LAB_10a21762c:
    plStack_78 = (long *)0x0;
  }
  else {
    plVar9 = param_1;
    FUN_109d1a80c();
    puVar8 = (undefined8 *)*plVar9;
    uStack_c8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_c0,param_4 + 1);
    uStack_88 = (undefined4)param_3;
    lStack_80 = param_1[1];
    plStack_78 = (long *)param_1[2];
    if (plStack_78 == (long *)0x0) goto LAB_10a21762c;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_78 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        uStack_70 = *param_2;
        lStack_60 = param_2[2];
      }
      plVar9 = (long *)puVar8[2];
      if (plVar9 == (long *)0x0) {
        puVar5 = (undefined8 *)0x80;
        __Znwm();
        *puVar5 = uStack_c8;
        (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
        puVar5[10] = plStack_78;
        puVar5[9] = lStack_80;
        *(undefined4 *)(puVar5 + 8) = uStack_88;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_70,uStack_68);
        }
        else {
          puVar5[0xc] = uStack_68;
          puVar5[0xb] = uStack_70;
          puVar5[0xd] = lStack_60;
        }
        puVar5[0xf] = 0x10a233264;
        pcStack_e0 = FUN_10a2331b8;
        puStack_d8 = puVar5;
        puStack_d0 = puVar8;
        (**(code **)*puVar8)(puVar8,&pcStack_e0);
      }
      else {
        lStack_e8 = 0;
        (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_e8);
        if (lStack_e8 != 0) {
          func_0x0001092af97c(&lStack_e8);
          goto LAB_10a217634;
        }
        puVar5 = (undefined8 *)0x88;
        __Znwm();
        *puVar5 = uStack_c8;
        (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
        puVar5[10] = plStack_78;
        puVar5[9] = lStack_80;
        *(undefined4 *)(puVar5 + 8) = uStack_88;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_70,uStack_68);
        }
        else {
          puVar5[0xc] = uStack_68;
          puVar5[0xb] = uStack_70;
          puVar5[0xd] = lStack_60;
        }
        puVar5[0xf] = FUN_10a233214;
        puVar5[0x10] = plVar9;
        pcStack_e0 = FUN_10a233188;
        puStack_d8 = puVar5;
        puStack_d0 = puVar8;
        (**(code **)*puVar8)(puVar8,&pcStack_e0);
        __ZNSt13exception_ptrD1Ev(&lStack_e8);
      }
      lStack_e8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_e8);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      plVar9 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      (*(code *)*apuStack_c0[0])(apuStack_c0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto LAB_10a217628;
    }
  }
  FUN_10a043ecc();
LAB_10a217634:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a217638);
  (*pcVar4)();
}



/* Entry: 10ad93218; end: 10ad9328f;  */

void FUN_10ad93218(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *apuStack_d0 [7];
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar6 = param_2[5];
  FUN_10ad92670();
  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad9328c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_4)(uVar6 & 0xffffffff,param_4);
    return;
  }
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_2[3] == '\x01') {
    (**(code **)(*param_2 + 0x58))(param_1,param_2,param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010a217fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_4)(param_4);
      return;
    }
LAB_10a218248:
    ___stack_chk_fail();
LAB_10a21824c:
    plStack_88 = (long *)0x0;
  }
  else {
    plVar9 = param_2;
    FUN_109d1a80c();
    puVar8 = (undefined8 *)*plVar9;
    uStack_d8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_d0,param_4 + 1);
    uStack_98 = (undefined4)param_1;
    lStack_90 = param_2[1];
    plStack_88 = (long *)param_2[2];
    if (plStack_88 == (long *)0x0) goto LAB_10a21824c;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_88 != (long *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_80,*param_3,param_3[1]);
      }
      else {
        uStack_78 = param_3[1];
        uStack_80 = *param_3;
        lStack_70 = param_3[2];
      }
      plVar9 = (long *)puVar8[2];
      if (plVar9 == (long *)0x0) {
        puVar5 = (undefined8 *)0x80;
        __Znwm();
        *puVar5 = uStack_d8;
        (*(code *)apuStack_d0[0][2])(puVar5 + 1,apuStack_d0);
        puVar5[10] = plStack_88;
        puVar5[9] = lStack_90;
        *(undefined4 *)(puVar5 + 8) = uStack_98;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (lStack_70 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_80,uStack_78);
        }
        else {
          puVar5[0xc] = uStack_78;
          puVar5[0xb] = uStack_80;
          puVar5[0xd] = lStack_70;
        }
        puVar5[0xf] = 0x10a2335e8;
        pcStack_f0 = FUN_10a23353c;
        puStack_e8 = puVar5;
        puStack_e0 = puVar8;
        (**(code **)*puVar8)(puVar8,&pcStack_f0);
      }
      else {
        lStack_f8 = 0;
        (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_f8);
        if (lStack_f8 != 0) {
          func_0x0001092af97c(&lStack_f8);
          goto LAB_10a218254;
        }
        puVar5 = (undefined8 *)0x88;
        __Znwm();
        *puVar5 = uStack_d8;
        (*(code *)apuStack_d0[0][2])(puVar5 + 1,apuStack_d0);
        puVar5[10] = plStack_88;
        puVar5[9] = lStack_90;
        *(undefined4 *)(puVar5 + 8) = uStack_98;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (lStack_70 < 0) {
          func_0x000107c3192c(puVar5 + 0xb,uStack_80,uStack_78);
        }
        else {
          puVar5[0xc] = uStack_78;
          puVar5[0xb] = uStack_80;
          puVar5[0xd] = lStack_70;
        }
        puVar5[0xf] = FUN_10a233598;
        puVar5[0x10] = plVar9;
        pcStack_f0 = (code *)0x10a23350c;
        puStack_e8 = puVar5;
        puStack_e0 = puVar8;
        (**(code **)*puVar8)(puVar8,&pcStack_f0);
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
      }
      lStack_f8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_f8);
      if (lStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      plVar9 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      (*(code *)*apuStack_d0[0])(apuStack_d0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      goto LAB_10a218248;
    }
  }
  FUN_10a043ecc();
LAB_10a218254:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a218258);
  (*pcVar4)();
}



/* Entry: 10ad93290; end: 10ad93357;  */

void FUN_10ad93290(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_108;
  code *pcStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  char cStack_d1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 in_stack_ffffffffffffffb0;
  long in_stack_ffffffffffffffc0;
  char in_stack_ffffffffffffffc8;
  
  FUN_10ad92bfc(&stack0xffffffffffffffb0,param_1[5],param_2);
  if (in_stack_ffffffffffffffc8 == '\x01') {
    FUN_10a35509c(param_4,&stack0xffffffffffffffb0);
    if (in_stack_ffffffffffffffc0 < 0) {
      __ZdlPv(in_stack_ffffffffffffffb0);
    }
    return;
  }
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x60))(&uStack_e8,param_1,param_2,param_3);
    FUN_10a2187a0(param_4,&uStack_e8);
    if (cStack_d1 < '\0') {
      __ZdlPv(uStack_e8);
    }
LAB_10a21865c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
LAB_10a2186a4:
    plStack_88 = (long *)0x0;
  }
  else {
    plVar8 = param_1;
    FUN_109d1a80c();
    puVar7 = (undefined8 *)*plVar8;
    uStack_e8 = *param_4;
    (**(code **)(param_4[1] + 0x10))(&puStack_e0,param_4 + 1);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_a8,*param_3,param_3[1]);
    }
    else {
      uStack_a0 = param_3[1];
      uStack_a8 = *param_3;
      lStack_98 = param_3[2];
    }
    lStack_90 = param_1[1];
    lVar6 = param_1[2];
    if (lVar6 == 0) goto LAB_10a2186a4;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_88 = (long *)lVar6;
    if (lVar6 != 0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_80,*param_2,param_2[1]);
      }
      else {
        uStack_78 = param_2[1];
        uStack_80 = *param_2;
        lStack_70 = param_2[2];
      }
      plVar8 = (long *)puVar7[2];
      if (plVar8 == (long *)0x0) {
        puVar5 = (undefined8 *)0x90;
        __Znwm();
        *puVar5 = uStack_e8;
        (*(code *)puStack_e0[2])(puVar5 + 1,&puStack_e0);
        puVar5[0xc] = plStack_88;
        puVar5[0xb] = lStack_90;
        puVar5[9] = uStack_a0;
        puVar5[8] = uStack_a8;
        puVar5[10] = lStack_98;
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_a8 = 0;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (lStack_70 < 0) {
          func_0x000107c3192c(puVar5 + 0xd,uStack_80,uStack_78);
        }
        else {
          puVar5[0xe] = uStack_78;
          puVar5[0xd] = uStack_80;
          puVar5[0xf] = lStack_70;
        }
        puVar5[0x11] = 0x10a233760;
        pcStack_100 = FUN_10a233668;
        puStack_f8 = puVar5;
        puStack_f0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_100);
      }
      else {
        lStack_108 = 0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_108);
        if (lStack_108 != 0) {
          func_0x0001092af97c(&lStack_108);
          goto LAB_10a2186ac;
        }
        puVar5 = (undefined8 *)0x98;
        __Znwm();
        *puVar5 = uStack_e8;
        (*(code *)puStack_e0[2])(puVar5 + 1,&puStack_e0);
        puVar5[0xc] = plStack_88;
        puVar5[0xb] = lStack_90;
        puVar5[9] = uStack_a0;
        puVar5[8] = uStack_a8;
        puVar5[10] = lStack_98;
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_a8 = 0;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        if (lStack_70 < 0) {
          func_0x000107c3192c(puVar5 + 0xd,uStack_80,uStack_78);
        }
        else {
          puVar5[0xe] = uStack_78;
          puVar5[0xd] = uStack_80;
          puVar5[0xf] = lStack_70;
        }
        puVar5[0x11] = FUN_10a233700;
        puVar5[0x12] = plVar8;
        pcStack_100 = (code *)0x10a233638;
        puStack_f8 = puVar5;
        puStack_f0 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_100);
        __ZNSt13exception_ptrD1Ev(&lStack_108);
      }
      lStack_108 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_108);
      if (lStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      plVar8 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_98 < 0) {
        __ZdlPv(uStack_a8);
      }
      (*(code *)*puStack_e0)(&puStack_e0);
      goto LAB_10a21865c;
    }
  }
  FUN_10a043ecc();
LAB_10a2186ac:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2186b0);
  (*pcVar4)();
}



/* Entry: 10ad93358; end: 10ad93447;  */

/* WARNING: Removing unreachable block (ram,0x00010ad933cc) */

void FUN_10ad93358(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  long lStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *apuStack_d0 [7];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  char in_stack_ffffffffffffffb0;
  
  FUN_10ad92f88(&lStack_68,param_1[5],param_2);
  if (in_stack_ffffffffffffffb0 == '\x01') {
    pcVar8 = (code *)*param_4;
    func_0x0001092bfde0(&stack0xffffffffffffffb8,lStack_68,lStack_60,lStack_60 - lStack_68);
    (*pcVar8)(&stack0xffffffffffffffb8,param_4);
    if (lStack_68 != 0) {
      __ZdlPv(lStack_68);
    }
    return;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x68))(&puStack_d8,param_1,param_2,param_3);
    FUN_10a218cb4(param_4,&puStack_d8);
    if (puStack_d8 != (undefined8 *)0x0) {
      apuStack_d0[0] = puStack_d8;
      __ZdlPv();
    }
LAB_10a218b74:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
LAB_10a218bb8:
    plStack_78 = (long *)0x0;
  }
  else {
    plVar7 = param_1;
    FUN_109d1a80c();
    puVar6 = (undefined8 *)*plVar7;
    puStack_d8 = (undefined8 *)*param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_d0,param_4 + 1);
    lStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = 0;
    FUN_10a05151c(&lStack_98,*param_3,param_3[1],param_3[1] - *param_3);
    lStack_80 = param_1[1];
    plStack_78 = (long *)param_1[2];
    if (plStack_78 == (long *)0x0) goto LAB_10a218bb8;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_78 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_70,*param_2,param_2[1]);
      }
      else {
        lStack_68 = param_2[1];
        uStack_70 = *param_2;
        lStack_60 = param_2[2];
      }
      plVar7 = (long *)puVar6[2];
      if (plVar7 == (long *)0x0) {
        puVar4 = (undefined8 *)0x90;
        __Znwm();
        *puVar4 = puStack_d8;
        (*(code *)apuStack_d0[0][2])(puVar4 + 1,apuStack_d0);
        puVar4[0xc] = plStack_78;
        puVar4[0xb] = lStack_80;
        puVar4[9] = lStack_90;
        puVar4[8] = lStack_98;
        puVar4[10] = uStack_88;
        lStack_98 = 0;
        lStack_90 = 0;
        uStack_88 = 0;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar4 + 0xd,uStack_70,lStack_68);
        }
        else {
          puVar4[0xe] = lStack_68;
          puVar4[0xd] = uStack_70;
          puVar4[0xf] = lStack_60;
        }
        puVar4[0x11] = 0x10a2338e8;
        pcStack_f0 = FUN_10a2337f0;
        puStack_e8 = puVar4;
        puStack_e0 = puVar6;
        (**(code **)*puVar6)(puVar6,&pcStack_f0);
      }
      else {
        lStack_f8 = 0;
        (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_f8);
        if (lStack_f8 != 0) {
          func_0x0001092af97c(&lStack_f8);
          goto LAB_10a218bc0;
        }
        puVar4 = (undefined8 *)0x98;
        __Znwm();
        *puVar4 = puStack_d8;
        (*(code *)apuStack_d0[0][2])(puVar4 + 1,apuStack_d0);
        puVar4[0xc] = plStack_78;
        puVar4[0xb] = lStack_80;
        puVar4[9] = lStack_90;
        puVar4[8] = lStack_98;
        puVar4[10] = uStack_88;
        lStack_98 = 0;
        lStack_90 = 0;
        uStack_88 = 0;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (lStack_60 < 0) {
          func_0x000107c3192c(puVar4 + 0xd,uStack_70,lStack_68);
        }
        else {
          puVar4[0xe] = lStack_68;
          puVar4[0xd] = uStack_70;
          puVar4[0xf] = lStack_60;
        }
        puVar4[0x11] = FUN_10a233888;
        puVar4[0x12] = plVar7;
        pcStack_f0 = (code *)0x10a2337c0;
        puStack_e8 = puVar4;
        puStack_e0 = puVar6;
        (**(code **)*puVar6)(puVar6,&pcStack_f0);
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
      }
      lStack_f8 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_f8);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      plVar7 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      (*(code *)*apuStack_d0[0])(apuStack_d0);
      goto LAB_10a218b74;
    }
  }
  FUN_10a043ecc();
LAB_10a218bc0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a218bc4);
  (*pcVar8)();
}



/* Entry: 10ad93448; end: 10ad9359b; -[LSAConnectedLensComponent addRemoteVideoStreamForExternalUserId:videoStreamProvider:] */

void FUN_10ad93448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010bf487c0(PTR_PTR_1126db570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10ad9359c;
  puStack_60 = &UNK_110896e48;
  uStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x00010c0f91a0(uVar1,param_2,puVar2,&puStack_78,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad9359c; end: 10ad937d7;  */

/* WARNING: Removing unreachable block (ram,0x00010ad93750) */
/* WARNING: Removing unreachable block (ram,0x00010ad93754) */
/* WARNING: Removing unreachable block (ram,0x00010ad9375c) */
/* WARNING: Removing unreachable block (ram,0x00010ad93764) */
/* WARNING: Removing unreachable block (ram,0x00010ad93768) */

void FUN_10ad9359c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plStack_68;
  long *plStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  long *plStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_40);
    if (plStack_38 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_38;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      if (plStack_40 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        plVar1 = plVar5 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long *)(*(long *)(*plStack_40 + 0x180) + 0xb8) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(*(long *)(*(long *)(*plStack_40 + 0x180) + 0xa8) + 0x28);
        }
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x108) + 0x980);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retainAutorelease(uVar4);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_58,uVar4);
    plVar5 = (long *)0x28;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110c72d50;
    lVar8 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar8);
    plStack_68 = plVar5 + 3;
    *plStack_68 = (long)&PTR_FUN_110c72da0;
    plVar5[4] = lVar8;
    plStack_60 = plVar5;
    FUN_10a8789a0(uVar7,auStack_58,&plStack_68);
    plVar5 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar1 = plStack_60 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return;
}



/* Entry: 10ad937d8; end: 10ad938eb; -[LSAConnectedLensComponent removeRemoteVideoStreamForExternalUserId:] */

void FUN_10ad937d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010bf487c0(PTR_PTR_1126db570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ad938ec;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f91a0(uVar1,param_2,puVar2,&puStack_60,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad938ec; end: 10ad93a57;  */

void FUN_10ad938ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 auStack_58 [2];
  char cStack_41;
  long *plStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_40);
    if (plStack_38 == (long *)0x0) {
      return;
    }
    plVar4 = plStack_38;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      if (plStack_40 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        plVar1 = plVar4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long *)(*(long *)(*plStack_40 + 0x180) + 0xb8) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(*(long *)(*(long *)(*plStack_40 + 0x180) + 0xa8) + 0x28);
        }
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
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
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x108) + 0x980);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retainAutorelease(uVar5);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_58,uVar5);
    FUN_10a878d44(uVar7,auStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return;
}



/* Entry: 10ad93a58; end: 10ad93b27; -[LSAConnectedLensComponent startedLocalVideoStream] */

void FUN_10ad93a58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010bf487c0(PTR_PTR_1126db570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ad93b28;
  puStack_40 = &UNK_11087bb00;
  uStack_38 = param_1;
  func_0x00010c0f91a0(uVar1,param_2,puVar2,&puStack_58,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10ad93b28; end: 10ad93c4f;  */

void FUN_10ad93b28(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
    plStack_30 = (long *)0x0;
    plStack_28 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_28;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      if (plStack_30 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        plVar1 = plVar5 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (*(long *)(*(long *)(*plStack_30 + 0x180) + 0xb8) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(*(long *)(*(long *)(*plStack_30 + 0x180) + 0xa8) + 0x28);
        }
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_28 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x108) + 0x980);
    puVar2 = *(undefined8 **)(lVar8 + 0x58);
    for (puVar7 = *(undefined8 **)(lVar8 + 0x50); puVar7 != puVar2; puVar7 = puVar7 + 4) {
      FUN_10a860a30(*puVar7);
    }
  }
  return;
}



/* Entry: 10ad93c50; end: 10ad93d1f; -[LSAConnectedLensComponent stoppedLocalVideoStream] */

void FUN_10ad93c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010bf487c0(PTR_PTR_1126db570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ad93d20;
  puStack_40 = &UNK_11087bb00;
  uStack_38 = param_1;
  func_0x00010c0f91a0(uVar1,param_2,puVar2,&puStack_58,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10ad93d20; end: 10ad93e47;  */

void FUN_10ad93d20(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
    plStack_30 = (long *)0x0;
    plStack_28 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_28;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      if (plStack_30 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        plVar1 = plVar5 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (*(long *)(*(long *)(*plStack_30 + 0x180) + 0xb8) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(*(long *)(*(long *)(*plStack_30 + 0x180) + 0xa8) + 0x28);
        }
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_28 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x108) + 0x980);
    puVar2 = *(undefined8 **)(lVar8 + 0x58);
    for (puVar7 = *(undefined8 **)(lVar8 + 0x50); puVar7 != puVar2; puVar7 = puVar7 + 4) {
      FUN_10a860acc(*puVar7);
    }
  }
  return;
}



/* Entry: 10ad93e48; end: 10ad93e57;  */

void FUN_10ad93e48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72d50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad93e58; end: 10ad93e77;  */

void FUN_10ad93e58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72d50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad93e78; end: 10ad93e87;  */

void FUN_10ad93e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad93e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ad93e88; end: 10ad93ed7;  */

long FUN_10ad93e88(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10ad93ed8; end: 10ad94093;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ad93ed8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long alStack_58 [2];
  long *plStack_48;
  
  lVar7 = *(long *)(param_2 + 8);
  func_0x00010bf5ec20();
  alStack_58[0] = lVar7;
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar8 = (long *)0x1a0;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar9 = plVar8 + 3;
    *plVar8 = (long)&PTR_FUN_110c72198;
    FUN_10ad6fc68(plVar9,lVar7,4,0);
    lVar7 = plVar8[0xf];
    uVar4 = *(undefined4 *)((long)plVar8 + 0x7c);
    puVar10 = (undefined8 *)0x1a0;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110c72198;
    puVar1 = puVar10 + 3;
    alStack_58[1] = 0;
    plStack_48 = (long *)0x0;
    FUN_10ad6f9f4(puVar1,(int)lVar7,uVar4,4,0,0,0,alStack_58 + 1);
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar7 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    FUN_10ad707c0(puVar1,plVar9,&UNK_10e482b00);
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar10;
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 1;
      do {
        lVar7 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  FUN_10ad579f0(alStack_58);
  return;
}



/* Entry: 10ad94094; end: 10ad94137;  */

undefined1  [16] FUN_10ad94094(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_currentFrameTimestampUs_1125b54d0);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bf5eca0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar4 = 0;
      uVar1 = 0;
    }
    else {
      uVar4 = uVar2;
      func_0x00010c0b4ca0(uVar2);
      uVar1 = uVar4 & 0xffffffffffffff00;
      uVar4 = uVar4 & 0xff;
    }
    uVar3 = (ulong)(uVar2 != 0);
    _objc_release(uVar2);
    uVar1 = uVar1 | uVar4;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 10ad94138; end: 10ad9423f;  */

long FUN_10ad94138(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ad94240; end: 10ad94307; -[LSACompassDataProvider startCompassUpdates] */

void FUN_10ad94240(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010c09efc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126de0d0;
    func_0x00010c0b6bc0(PTR_PTR_1126de0d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 10ad94308; end: 10ad94443;  */

void FUN_10ad94308(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_sync_enter(uVar3);
  puVar1 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
  func_0x00010bf10fa0();
  if ((uint)puVar1 < 5 && (1 << (ulong)((uint)puVar1 & 0x1f) & 0x19U) != 0) {
    puVar1 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
    _objc_opt_new(PTR__OBJC_CLASS___CLLocationManager_1126bc328);
    func_0x00010c1bfa20(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09efc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190a20(0x4014000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09efc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136fc0();
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
    func_0x00010c09f4c0();
    if ((int)puVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c09efc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2515c0();
      _objc_release(uVar2);
    }
  }
  puVar1 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
  func_0x00010bfe0360();
  if ((int)puVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09efc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251580();
    _objc_release(uVar2);
  }
  _objc_sync_exit(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10ad94444; end: 10ad944f3; -[LSACompassDataProvider stopCompassUpdates] */

void FUN_10ad94444(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010c09efc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c09efc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256dc0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c09efc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256d80();
    _objc_release(lVar1);
    func_0x00010c1bfa20(param_1,param_2,0);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad944f4; end: 10ad94577; -[LSACompassDataProvider heading] */

void FUN_10ad944f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010c09efc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe0320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ad94578; end: 10ad9457f; -[LSACompassDataProvider locationManager] */

undefined8 FUN_10ad94578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad94580; end: 10ad945af; -[LSACompassDataProvider setLocationManager:] */

void FUN_10ad94580(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ad945b0; end: 10ad945bb; -[LSACompassDataProvider .cxx_destruct] */

void FUN_10ad945b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad945bc; end: 10ad9468f; -[LSADeviceMotionDataProvider init] */

undefined1 * FUN_10ad945bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701310;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x00010c1d5a00(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c0ebaa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c3080();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10ad94690; end: 10ad948ef; -[LSADeviceMotionDataProvider startDeviceMotionUpdatesWithParams:callback:] */

void FUN_10ad94690(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0d1260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___CMMotionManager_1126b78a8;
    _objc_opt_new(PTR__OBJC_CLASS___CMMotionManager_1126b78a8);
    func_0x00010c1c91a0(param_1,param_2,puVar2);
    _objc_release(puVar2);
    uVar1 = param_1;
    func_0x00010c0d1260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c070880();
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010c0d1260(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18cbe0(0x3f847ae147ae147b);
      _objc_release(uVar1);
      uVar4 = param_3;
      func_0x00010c137780();
      uVar1 = param_1;
      if ((int)uVar4 == 0) {
        func_0x00010c0d1260(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ebaa0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        uStack_80 = 0x10ad94904;
        puStack_78 = &UNK_110c72dd8;
        _objc_retain(param_4);
        uStack_70 = param_4;
        func_0x00010c24e940(uVar1,param_2,param_1,&puStack_90);
      }
      else {
        func_0x00010c0d1260(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ebaa0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_10ad948f0;
        puStack_50 = &UNK_110c72dd8;
        ppuVar5 = &puStack_68;
        _objc_retain(param_4);
        uStack_48 = param_4;
        func_0x00010c24e960(uVar1,param_2,4,param_1,&puStack_68);
      }
      _objc_release(param_1);
      _objc_release(uVar1);
      _objc_release(ppuVar5[4]);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad948f0; end: 10ad94917;  */

void FUN_10ad948f0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad94900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0,0);
  return;
}



/* Entry: 10ad94918; end: 10ad94993; -[LSADeviceMotionDataProvider stopDeviceMotionUpdates] */

void FUN_10ad94918(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0d1260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0d1260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e20();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1c91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setMotionManager__11264fe90,0);
    return;
  }
  return;
}



/* Entry: 10ad94994; end: 10ad9499b; -[LSADeviceMotionDataProvider deviceMotion] */

undefined8 FUN_10ad94994(void)

{
  return 0;
}



/* Entry: 10ad9499c; end: 10ad949a3; -[LSADeviceMotionDataProvider motionManager] */

undefined8 FUN_10ad9499c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad949a4; end: 10ad949d3; -[LSADeviceMotionDataProvider setMotionManager:] */

void FUN_10ad949a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ad949d4; end: 10ad949db; -[LSADeviceMotionDataProvider operationQueue] */

undefined8 FUN_10ad949d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ad949dc; end: 10ad94a0b; -[LSADeviceMotionDataProvider setOperationQueue:] */

void FUN_10ad949dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ad94a0c; end: 10ad94a3b; -[LSADeviceMotionDataProvider .cxx_destruct] */

void FUN_10ad94a0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad94a3c; end: 10ad94bb3; -[LSALocationDataProvider startLocationUpdates:] */

void FUN_10ad94a3c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_sync_enter(param_2);
  lVar1 = param_2;
  func_0x00010c09efc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_sync_exit(param_2);
    _objc_release(param_2);
    puVar2 = PTR_PTR_1126de0d0;
    func_0x00010c0b6bc0(PTR_PTR_1126de0d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10ad94bb4;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_2;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010c0f7fc0(puVar2,param_3,&puStack_70);
    _objc_release(puVar2);
    param_2 = lStack_48;
  }
  else {
    func_0x00010bf86f00(param_4);
    lVar1 = param_2;
    func_0x00010c09efc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190a20(param_1);
    _objc_release(lVar1);
    func_0x00010bf6e9c0(param_4);
    lVar1 = param_2;
    func_0x00010c09efc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c1c0(param_1);
    _objc_release(lVar1);
    _objc_sync_exit(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_4);
  return;
}



/* Entry: 10ad94bb4; end: 10ad94d07;  */

void FUN_10ad94bb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar3);
  _objc_sync_enter(uVar3);
  puVar1 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
  func_0x00010bf10fa0();
  if ((uint)puVar1 < 5 && (1 << (ulong)((uint)puVar1 & 0x1f) & 0x19U) != 0) {
    puVar1 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
    _objc_opt_new(PTR__OBJC_CLASS___CLLocationManager_1126bc328);
    func_0x00010c1bfa20(*(undefined8 *)(param_2 + 0x20),param_3,puVar1);
    _objc_release(puVar1);
    func_0x00010bf86f00(*(undefined8 *)(param_2 + 0x28));
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c09efc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190a20(param_1);
    _objc_release(uVar2);
    func_0x00010bf6e9c0(*(undefined8 *)(param_2 + 0x28));
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c09efc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c1c0(param_1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c09efc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136fc0();
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
    func_0x00010c09f4c0();
    if ((int)puVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c09efc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2515c0();
      _objc_release(uVar2);
    }
  }
  _objc_sync_exit(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10ad94d08; end: 10ad94d97; -[LSALocationDataProvider stopLocationUpdates] */

void FUN_10ad94d08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010c09efc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c09efc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256dc0();
    _objc_release(lVar1);
    func_0x00010c1bfa20(param_1,param_2,0);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad94d98; end: 10ad94e1b; -[LSALocationDataProvider location] */

void FUN_10ad94d98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010c09efc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ad94e1c; end: 10ad94e23; -[LSALocationDataProvider locationManager] */

undefined8 FUN_10ad94e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad94e24; end: 10ad94e53; -[LSALocationDataProvider setLocationManager:] */

void FUN_10ad94e24(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ad94e54; end: 10ad94e5f; -[LSALocationDataProvider .cxx_destruct] */

void FUN_10ad94e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad94e60; end: 10ad9504b; -[LSADeviceMotionComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad94e60(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_48 = (long *)param_3[1];
  uStack_50 = *param_3;
  if (param_3[1] != 0) {
    plVar8 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_58 = PTR_PTR_112701318;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_50,param_4
                      ,param_5);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c72e18;
  puStack_70 = puVar5 + 3;
  *puStack_70 = &PTR_FUN_110c72e68;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 5) = 0;
  *(undefined1 *)((long)puVar5 + 0x2c) = 0;
  puVar2 = (undefined8 *)(param_1 + _DAT_1127842d4);
  plVar8 = (long *)puVar2[1];
  *puVar2 = puStack_70;
  puVar2[1] = puVar5;
  if (plVar8 == (long *)0x0) {
    uVar6 = *param_3;
    puStack_68 = puVar5;
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    uVar6 = *param_3;
    puVar5 = (undefined8 *)puVar2[1];
    puStack_68 = (undefined8 *)puVar2[1];
    puStack_70 = (undefined8 *)*puVar2;
    if (puVar5 == (undefined8 *)0x0) goto LAB_10ad94fcc;
  }
  plVar8 = puVar5 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_10ad94fcc:
  FUN_10a226594(uVar6,&puStack_70);
  if (puStack_68 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10ad9504c; end: 10ad95123; -[LSADeviceMotionComponent setDataProvider:] */

void FUN_10ad9504c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ad95124;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad95124; end: 10ad9515b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad95124(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127842d4);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10ad9515c; end: 10ad951bf; -[LSADeviceMotionComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad9515c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + _DAT_1127842d4 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ad951c0; end: 10ad951e3; -[LSADeviceMotionComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad951c0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127842d4;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10ad951e4; end: 10ad95203;  */

void FUN_10ad951e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c72e18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad95204; end: 10ad95213;  */

void FUN_10ad95204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad9520c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ad95214; end: 10ad9528b;  */

undefined8 * FUN_10ad95214(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c72e68;
  param_1[1] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10ad9528c; end: 10ad95293;  */

undefined8 FUN_10ad9528c(void)

{
  return 2;
}



/* Entry: 10ad95294; end: 10ad953c7;  */

void FUN_10ad95294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 *param_6,undefined8 *param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  uVar23 = (undefined4)((ulong)param_4 >> 0x20);
  uVar22 = (undefined4)param_4;
  uVar21 = (undefined4)((ulong)param_3 >> 0x20);
  uVar19 = (undefined4)param_3;
  uVar18 = (undefined4)((ulong)param_2 >> 0x20);
  uVar17 = (undefined4)param_2;
  ppuVar11 = &puStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_5 + 0x10) = 0;
  *(undefined1 *)(param_5 + 0x14) = *param_6;
  puVar6 = PTR_PTR_1126de100;
  _objc_alloc();
  func_0x00010c000340();
  uVar12 = *(undefined8 *)(param_5 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar14 = 1.6412311195747e-314;
  uStack_98 = 0xc6000000;
  pcStack_90 = FUN_10ad953c8;
  puStack_88 = &UNK_110c72e90;
  uStack_78 = *param_7;
  plVar9 = param_7 + 1;
  lStack_80 = param_5;
  (**(code **)(*plVar9 + 0x18))(apuStack_70);
  puVar10 = puVar6;
  func_0x00010c24e9a0(uVar12);
  (*(code *)*apuStack_70[0])(apuStack_70);
  puVar7 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  _objc_release(puVar6);
  __Unwind_Resume();
  _objc_retain(plVar9);
  _objc_retain(puVar10);
  if (plVar9 == (long *)0x0) goto joined_r0x00010ad95610;
  lVar13 = *(long *)(puVar7 + 0x20);
  _objc_retain(plVar9);
  plVar8 = plVar9;
  func_0x00010bf0dd80(plVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d000();
  fVar29 = (float)(double)CONCAT44(uVar23,uVar22);
  fStack_140 = (float)dVar14;
  fVar27 = (float)(double)CONCAT44(uVar18,uVar17);
  fVar28 = (float)(double)CONCAT44(uVar21,uVar19);
  _objc_release(plVar8);
  fVar25 = fVar27;
  if ((*(byte *)(lVar13 + 0x14) & 1) == 0) {
LAB_10ad954cc:
    fVar20 = fVar25 * fVar25;
    fVar27 = fVar20 + fVar28 * fVar28 + fStack_140 * fStack_140 + fVar29 * fVar29;
    if (fVar27 == 0.0) {
      fVar25 = 1.0;
      fVar27 = 0.0;
      fStack_140 = 0.0;
      fStack_13c = 1.0;
      fStack_144 = 0.0;
      fVar28 = 0.0;
    }
    else {
      fVar27 = 1.0 / SQRT(fVar27);
      fVar20 = fVar29 * fVar27;
      fStack_140 = fStack_140 * fVar27;
      fVar25 = fVar25 * fVar27;
      fVar28 = fVar28 * fVar27;
      fStack_144 = fVar25;
      fStack_13c = fVar20;
    }
    uVar18 = 0;
    uVar17 = 0;
    dVar14 = (double)(ulong)(uint)fVar27;
    piVar1 = (int *)(lVar13 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (3 < *piVar1) {
      func_0x00010c2709c0(plVar9);
      dVar15 = dVar14;
      func_0x00010bfce0a0(plVar9);
      dVar4 = (double)CONCAT44(uVar17,fVar25);
      dVar5 = (double)CONCAT44(uVar18,fVar20);
      dVar16 = dVar15;
      func_0x00010c291000(plVar9);
      _objc_release(plVar9);
      plVar8 = (long *)0x28;
      __Znwm();
      plStack_130 = plVar8 + 5;
      *plVar8 = (long)(dVar14 * 1000000000.0);
      *(float *)(plVar8 + 1) = fStack_140;
      *(float *)((long)plVar8 + 0xc) = fStack_144;
      *(float *)(plVar8 + 2) = fVar28;
      *(float *)((long)plVar8 + 0x14) = fStack_13c;
      *(float *)(plVar8 + 3) = (float)dVar15 + (float)dVar16;
      *(float *)((long)plVar8 + 0x1c) = (float)dVar4 + (float)(double)CONCAT44(uVar17,fVar25);
      *(float *)(plVar8 + 4) = (float)dVar5 + (float)(double)CONCAT44(uVar18,fVar20);
      plStack_138 = plVar8;
      plStack_128 = plStack_130;
      (**(code **)(puVar7 + 0x28))(&plStack_138,ppuVar11);
      if (plStack_138 != (long *)0x0) {
        plStack_130 = plStack_138;
        __ZdlPv();
      }
      goto joined_r0x00010ad95610;
    }
  }
  else if (((fStack_140 != 0.0) || (fVar27 != 0.0)) || (fVar28 != 0.0)) {
    fVar24 = fVar29 * 0.0;
    fVar26 = fVar29 * 0.70710677;
    fVar29 = fStack_140 * -0.0 + fVar29 * 0.70710677 + fVar27 * -0.0 + fVar28 * -0.70710677;
    fVar20 = fVar28 * 0.0;
    fVar25 = fVar24 + fVar27 * 0.70710677 + fStack_140 * 0.70710677 + fVar28 * -0.0;
    fVar28 = fVar26 + fVar28 * 0.70710677 + fVar27 * 0.0 + fStack_140 * -0.0;
    fStack_140 = fVar24 + fStack_140 * 0.70710677 + fVar20 + fVar27 * -0.70710677;
    goto LAB_10ad954cc;
  }
  _objc_release(plVar9);
joined_r0x00010ad95610:
  if (puVar10 != (undefined *)0x0) {
    func_0x00010bfbc3c0(&plStack_138,puVar10);
    (**(code **)(puVar7 + 0x28))(&plStack_138,ppuVar11,puVar7 + 0x28);
    if (plStack_138 != (long *)0x0) {
      plStack_130 = plStack_138;
      __ZdlPv();
    }
  }
  _objc_release(puVar10);
  _objc_release(plVar9);
  return;
}



/* Entry: 10ad953c8; end: 10ad956f3;  */

void FUN_10ad953c8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  
  uVar18 = (undefined4)((ulong)param_4 >> 0x20);
  uVar17 = (undefined4)param_4;
  uVar16 = (undefined4)((ulong)param_3 >> 0x20);
  uVar14 = (undefined4)param_3;
  uVar13 = (undefined4)((ulong)param_2 >> 0x20);
  uVar12 = (undefined4)param_2;
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_6 == 0) goto joined_r0x00010ad95610;
  lVar8 = *(long *)(param_5 + 0x20);
  _objc_retain(param_6);
  lVar6 = param_6;
  func_0x00010bf0dd80(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d000();
  fVar24 = (float)(double)CONCAT44(uVar18,uVar17);
  fStack_a0 = (float)param_1;
  fVar22 = (float)(double)CONCAT44(uVar13,uVar12);
  fVar23 = (float)(double)CONCAT44(uVar16,uVar14);
  _objc_release(lVar6);
  fVar20 = fVar22;
  if ((*(byte *)(lVar8 + 0x14) & 1) == 0) {
LAB_10ad954cc:
    fVar15 = fVar20 * fVar20;
    fVar22 = fVar15 + fVar23 * fVar23 + fStack_a0 * fStack_a0 + fVar24 * fVar24;
    if (fVar22 == 0.0) {
      fVar20 = 1.0;
      fVar22 = 0.0;
      fStack_a0 = 0.0;
      fStack_9c = 1.0;
      fStack_a4 = 0.0;
      fVar23 = 0.0;
    }
    else {
      fVar22 = 1.0 / SQRT(fVar22);
      fVar15 = fVar24 * fVar22;
      fStack_a0 = fStack_a0 * fVar22;
      fVar20 = fVar20 * fVar22;
      fVar23 = fVar23 * fVar22;
      fStack_a4 = fVar20;
      fStack_9c = fVar15;
    }
    uVar13 = 0;
    uVar12 = 0;
    dVar9 = (double)(ulong)(uint)fVar22;
    piVar1 = (int *)(lVar8 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (3 < *piVar1) {
      func_0x00010c2709c0(param_6);
      dVar10 = dVar9;
      func_0x00010bfce0a0(param_6);
      dVar4 = (double)CONCAT44(uVar12,fVar20);
      dVar5 = (double)CONCAT44(uVar13,fVar15);
      dVar11 = dVar10;
      func_0x00010c291000(param_6);
      _objc_release(param_6);
      plVar7 = (long *)0x28;
      __Znwm();
      plStack_90 = plVar7 + 5;
      *plVar7 = (long)(dVar9 * 1000000000.0);
      *(float *)(plVar7 + 1) = fStack_a0;
      *(float *)((long)plVar7 + 0xc) = fStack_a4;
      *(float *)(plVar7 + 2) = fVar23;
      *(float *)((long)plVar7 + 0x14) = fStack_9c;
      *(float *)(plVar7 + 3) = (float)dVar10 + (float)dVar11;
      *(float *)((long)plVar7 + 0x1c) = (float)dVar4 + (float)(double)CONCAT44(uVar12,fVar20);
      *(float *)(plVar7 + 4) = (float)dVar5 + (float)(double)CONCAT44(uVar13,fVar15);
      plStack_98 = plVar7;
      plStack_88 = plStack_90;
      (**(code **)(param_5 + 0x28))(&plStack_98,param_8);
      if (plStack_98 != (long *)0x0) {
        plStack_90 = plStack_98;
        __ZdlPv();
      }
      goto joined_r0x00010ad95610;
    }
  }
  else if (((fStack_a0 != 0.0) || (fVar22 != 0.0)) || (fVar23 != 0.0)) {
    fVar19 = fVar24 * 0.0;
    fVar21 = fVar24 * 0.70710677;
    fVar24 = fStack_a0 * -0.0 + fVar24 * 0.70710677 + fVar22 * -0.0 + fVar23 * -0.70710677;
    fVar15 = fVar23 * 0.0;
    fVar20 = fVar19 + fVar22 * 0.70710677 + fStack_a0 * 0.70710677 + fVar23 * -0.0;
    fVar23 = fVar21 + fVar23 * 0.70710677 + fVar22 * 0.0 + fStack_a0 * -0.0;
    fStack_a0 = fVar19 + fStack_a0 * 0.70710677 + fVar15 + fVar22 * -0.70710677;
    goto LAB_10ad954cc;
  }
  _objc_release(param_6);
joined_r0x00010ad95610:
  if (param_7 != 0) {
    func_0x00010bfbc3c0(&plStack_98,param_7);
    (**(code **)(param_5 + 0x28))(&plStack_98,param_8,(undefined8 *)(param_5 + 0x28));
    if (plStack_98 != (long *)0x0) {
      plStack_90 = plStack_98;
      __ZdlPv();
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 10ad956f4; end: 10ad95743;  */

void FUN_10ad956f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(param_1 + 0x30);
  return;
}



/* Entry: 10ad95744; end: 10ad95757;  */

void FUN_10ad95744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad9574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x30))();
  return;
}



/* Entry: 10ad95758; end: 10ad9579f;  */

void FUN_10ad95758(long *param_1,ulong param_2,undefined1 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined *puStack_78;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_10ad957b4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    return;
  }
  FUN_10ad957a0();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000104c4f740();
  ppuVar3 = &puStack_80;
  puStack_78 = PTR_PTR_112701320;
  puStack_80 = puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    *(undefined1 *)((long)ppuVar3 + 8) = param_3;
  }
  return;
}



/* Entry: 10ad957a0; end: 10ad957b3;  */

void FUN_10ad957a0(undefined8 param_1,ulong param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000104c4f740();
  ppuVar2 = &puStack_60;
  puStack_58 = PTR_PTR_112701320;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    *(undefined1 *)((long)ppuVar2 + 8) = param_3;
  }
  return;
}



/* Entry: 10ad957b4; end: 10ad957f7;  */

void FUN_10ad957b4(undefined8 param_1,ulong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000104c4f740();
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112701320;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10ad957f8; end: 10ad9583f; -[LSADeviceMotionTrackingParameters initWithCompassAlignment:] */

void FUN_10ad957f8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701320;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10ad95840; end: 10ad95847; -[LSADeviceMotionTrackingParameters requiresCompassAlignment] */

undefined1 FUN_10ad95840(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10ad95848; end: 10ad959ff; -[LSAFusedDeviceMotionData initWithFusedDeviceMotionSamples:] */

undefined1 * FUN_10ad95848(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar5 = &uStack_60;
  puStack_58 = PTR_PTR_112701328;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  plVar1 = (long *)((long)puVar5 + 8);
  if (puVar5 != (undefined8 *)0x0 && plVar1 != param_3) {
    lVar2 = *param_3;
    lVar3 = param_3[1];
    uVar10 = lVar3 - lVar2;
    lVar6 = *(long *)((long)puVar5 + 0x18);
    lVar8 = *(long *)((long)puVar5 + 8);
    if ((ulong)(lVar6 - lVar8) < uVar10) {
      uVar9 = ((long)uVar10 >> 3) * -0x3333333333333333;
      if (lVar8 != 0) {
        *(long *)((long)puVar5 + 0x10) = lVar8;
        __ZdlPv(lVar8);
        lVar6 = 0;
        *plVar1 = 0;
        *(undefined8 *)((long)puVar5 + 0x10) = 0;
        *(undefined8 *)((long)puVar5 + 0x18) = 0;
      }
      if (0x666666666666666 < uVar9) {
        FUN_10ad957a0();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad959ec);
        (*pcVar4)();
      }
      uVar7 = (lVar6 >> 3) * -0x6666666666666666;
      if (uVar7 < uVar9 || uVar7 + ((long)uVar10 >> 3) * 0x3333333333333333 == 0) {
        uVar7 = uVar9;
      }
      if (0x333333333333332 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
        uVar7 = 0x666666666666666;
      }
      FUN_10ad95758(plVar1,uVar7);
      lVar6 = *(long *)((long)puVar5 + 0x10);
      if (lVar3 != lVar2) {
        _memmove(lVar6,lVar2,uVar10 - 4);
      }
      lVar6 = lVar6 + uVar10;
    }
    else {
      lVar6 = *(long *)((long)puVar5 + 0x10);
      uVar9 = lVar6 - lVar8;
      if (uVar9 < uVar10) {
        if (lVar6 != lVar8) {
          _memmove(lVar8,lVar2,uVar9 - 4);
          lVar6 = *(long *)((long)puVar5 + 0x10);
        }
        lVar3 = lVar3 - (lVar2 + uVar9);
        if (lVar3 != 0) {
          _memmove(lVar6,lVar2 + uVar9,lVar3 + -4);
        }
        lVar6 = lVar6 + lVar3;
      }
      else {
        if (lVar3 != lVar2) {
          _memmove(lVar8,lVar2,uVar10 - 4);
        }
        lVar6 = lVar8 + uVar10;
      }
    }
    *(long *)((long)puVar5 + 0x10) = lVar6;
  }
  return (undefined1 *)puVar5;
}



/* Entry: 10ad95a00; end: 10ad95a87; -[LSAFusedDeviceMotionData fusedDeviceMotionSamples] */

void FUN_10ad95a00(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10) - lVar1;
  if (lVar2 != 0) {
    FUN_10ad95758(param_1,(lVar2 >> 3) * -0x3333333333333333);
    lVar3 = param_1[1];
    _memmove(lVar3,lVar1,lVar2 + -4);
    param_1[1] = lVar3 + lVar2;
  }
  return;
}



/* Entry: 10ad95a88; end: 10ad95a9f; -[LSAFusedDeviceMotionData .cxx_destruct] */

void FUN_10ad95a88(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad95aa0; end: 10ad95aab; -[LSAFusedDeviceMotionData .cxx_construct] */

void FUN_10ad95aa0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10ad95aac; end: 10ad95b53; -[LSARawDeviceMotionData initWithImuData:] */

undefined1 * FUN_10ad95aac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar4 = &uStack_30;
  puStack_28 = PTR_PTR_112701330;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar8 = param_3[1];
    uVar7 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)((long)puVar4 + 0x10);
    *(undefined8 *)((long)puVar4 + 0x10) = uVar8;
    *(undefined8 *)((long)puVar4 + 8) = uVar7;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10ad95b54; end: 10ad95b7b; -[LSARawDeviceMotionData imuData] */

void FUN_10ad95b54(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar5;
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



/* Entry: 10ad95b7c; end: 10ad95bd3; -[LSARawDeviceMotionData .cxx_destruct] */

void FUN_10ad95b7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ad95bd4; end: 10ad95bdb; -[LSARawDeviceMotionData .cxx_construct] */

void FUN_10ad95bd4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10ad95bdc; end: 10ad95cef; -[LSAExternalImageComponent setExternalVideoWithPath:relStartPosition:relEndPosition:volume:rotation:completion:] */

void FUN_10ad95bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10ad95cf0;
  puStack_70 = &UNK_110c72ee8;
  uStack_68 = param_6;
  uStack_60 = param_1;
  uStack_5c = param_2;
  uStack_58 = param_3;
  uStack_54 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_8);
  ppuVar1 = &puStack_88;
  _objc_retainBlock(ppuVar1);
  func_0x00010bea3d00(param_4,param_5,3,ppuVar1,param_8);
  _objc_release(param_8);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(param_6);
  return;
}



/* Entry: 10ad95cf0; end: 10ad95d8b;  */

void FUN_10ad95cf0(long param_1,long *param_2)

{
  char *pcVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  pcVar1 = *(char **)(param_1 + 0x20);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  else {
    _objc_retainAutorelease();
    func_0x00010bdc3520();
  }
  func_0x000107c31940(auStack_38,pcVar1);
  (**(code **)(*param_2 + 0x10))
            (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
             *(undefined4 *)(param_1 + 0x30),param_2,auStack_38,*(undefined4 *)(param_1 + 0x34));
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10ad95d8c; end: 10ad95f03; -[LSAExternalImageComponent _setExternalVideoWithErrorCode:mediaFileBlock:completion:] */

void FUN_10ad95d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  else {
    puVar1 = PTR_PTR_1126db570;
    func_0x00010bf9e180(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10ad95f04;
    puStack_58 = &UNK_1107d0af0;
    uStack_50 = param_1;
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retainBlock(&puStack_70);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9160();
    _objc_release(param_1);
    _objc_release(ppuVar2);
    _objc_release(lStack_48);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10ad95f04; end: 10ad960ab;  */

void FUN_10ad95f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code **unaff_x21;
  long *plStack_a8;
  long *plStack_a0;
  long *aplStack_98 [2];
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_5 + 0x20) == 0) {
    plStack_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_a8);
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    if (plStack_a0 != (long *)0x0) {
      plVar4 = plStack_a0;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_80 = plVar4;
      if (plVar4 != (long *)0x0) {
        plStack_88 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          lStack_68 = param_5 + 0x28;
          aplStack_98[0] = plStack_a8;
          plVar1 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          unaff_x21 = &pcStack_78;
          pcStack_78 = FUN_10ad97024;
          ppuStack_70 = &PTR_DAT_110c72fa8;
          FUN_10ad470d8(*(long *)(*plStack_a8 + 0x180) + 0xa8,&pcStack_78);
          (*(code *)*ppuStack_70)(&ppuStack_70);
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
  }
  plVar4 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  FUN_10ad8b754(aplStack_98);
  FUN_10ad8b754(&plStack_88);
  if (plStack_a0 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume(plVar4);
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_7;
  func_0x00010c1995e0(plVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_8);
  uVar7 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  __Unwind_Resume(uVar7);
  _objc_retain(uVar8);
  _objc_retain(uVar8);
  func_0x00010bea3ca0(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar8);
  return;
}



/* Entry: 10ad960ac; end: 10ad96207; -[LSAExternalImageComponent setExternalImageWithPath:faceRect:completion:] */

void FUN_10ad960ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_7;
  puVar6 = puVar2;
  uVar7 = param_8;
  func_0x00010c1995e0(param_5,param_6,param_7,puVar2,param_8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  uVar3 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  uVar4 = uVar3;
  __Unwind_Resume(uVar3);
  pcStack_78 = FUN_10ad96208;
  uStack_a0 = uVar3;
  puStack_98 = puVar1;
  uStack_90 = param_8;
  uStack_88 = param_7;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(uVar5);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10ad962c4;
  puStack_b0 = &UNK_110c72f18;
  uStack_a8 = uVar5;
  _objc_retain(uVar5);
  func_0x00010bea3ca0(uVar4,param_6,puVar6,1,&puStack_c8,uVar7);
  _objc_release(uStack_a8);
  _objc_release(uVar5);
  return;
}



/* Entry: 10ad96208; end: 10ad962c3; -[LSAExternalImageComponent setExternalImageWithPath:faceRects:completion:] */

void FUN_10ad96208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ad962c4;
  puStack_40 = &UNK_110c72f18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bea3ca0(param_1,param_2,param_4,1,&puStack_58,param_5);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad962c4; end: 10ad96463;  */

undefined8 FUN_10ad962c4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  if (uVar6 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_opt_isKindOfClass(uVar6,puVar2);
    if ((uVar6 & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe9380();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126db500;
        if (puVar4 != (undefined *)0x0) {
          func_0x00010bfe8380(puVar4);
          func_0x00010be6e5c0(puVar2);
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          _objc_retainAutorelease(uVar5);
          func_0x00010bdc3520();
          func_0x000107c31940(auStack_58,uVar5);
          (**(code **)(*param_2 + 0x18))(param_2,auStack_58,param_3,param_4,puVar2);
          if (cStack_41 < '\0') {
            __ZdlPv(auStack_58[0]);
          }
          _objc_release(puVar4);
          return 1;
        }
        goto LAB_10ad963d4;
      }
    }
  }
  FUN_10a0ee06c(&UNK_10f6ac21c);
LAB_10ad963d4:
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfacbe0();
  _objc_release(puVar2);
  puVar2 = &UNK_10f6ac24a;
  if ((int)puVar4 == 0) {
    puVar2 = &UNK_10f6ac231;
  }
  FUN_10a0ee06c(puVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad96420);
  (*pcVar1)();
}



/* Entry: 10ad96464; end: 10ad965bf; -[LSAExternalImageComponent setExternalImage:faceRect:completion:] */

void FUN_10ad96464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_7;
  puVar6 = puVar2;
  uVar7 = param_8;
  func_0x00010c1995c0(param_5,param_6,param_7,puVar2,param_8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  uVar3 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  uVar4 = uVar3;
  __Unwind_Resume(uVar3);
  pcStack_78 = FUN_10ad965c0;
  uStack_a0 = uVar3;
  puStack_98 = puVar1;
  uStack_90 = param_8;
  uStack_88 = param_7;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(uVar5);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10ad9667c;
  puStack_b0 = &UNK_110c72f18;
  uStack_a8 = uVar5;
  _objc_retain(uVar5);
  func_0x00010bea3ca0(uVar4,param_6,puVar6,2,&puStack_c8,uVar7);
  _objc_release(uStack_a8);
  _objc_release(uVar5);
  return;
}



/* Entry: 10ad965c0; end: 10ad9667b; -[LSAExternalImageComponent setExternalImage:faceRects:completion:] */

void FUN_10ad965c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ad9667c;
  puStack_40 = &UNK_110c72f18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bea3ca0(param_1,param_2,param_4,2,&puStack_58,param_5);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad9667c; end: 10ad968d7;  */

undefined4 FUN_10ad9667c(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined1 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(ulong *)(param_1 + 0x20);
  lVar6 = param_3;
  if (uVar7 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_opt_isKindOfClass(uVar7,puVar4);
    puVar4 = PTR_PTR_1126db500;
    if ((uVar7 & 1) != 0) {
      func_0x00010bfe8380(*(undefined8 *)(param_1 + 0x20));
      func_0x00010be6e5c0(puVar4);
      _objc_retainAutorelease(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bdc1020();
      FUN_10ad52c3c(auStack_e8);
      plVar5 = (long *)0xa8;
      __Znwm();
      plVar5[6] = lStack_d0;
      plVar5[5] = lStack_d8;
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110baa4d8;
      plVar5[8] = lStack_c0;
      plVar5[7] = lStack_c8;
      plVar5[10] = lStack_b0;
      plVar5[9] = lStack_b8;
      *(undefined1 *)(plVar5 + 4) = 0;
      plVar5[3] = (long)&PTR_FUN_110bab9a0;
      plVar5[0xb] = 0;
      plVar5[0xc] = lStack_a0;
      (*(code *)ppuStack_98[2])(plVar5 + 0xd,&ppuStack_98);
      *(undefined1 *)(plVar5 + 0x14) = uStack_60;
      lStack_a0 = 0x109d138c8;
      (*(code *)*ppuStack_98)(&ppuStack_98);
      ppuStack_98 = &PTR_DAT_110b3e838;
      pcStack_90 = FUN_10a1b2664;
      uStack_108 = 0;
      plStack_100 = (long *)0x0;
      plStack_f8 = plVar5 + 3;
      plStack_f0 = plVar5;
      (**(code **)(*param_2 + 0x20))(param_2,&plStack_f8,param_3,param_4,puVar4);
      plVar5 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        plVar1 = plStack_f0 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_100;
      if (plStack_100 != (long *)0x0) {
        plVar1 = plStack_100 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      puVar4 = auStack_e8;
      FUN_10a1b2b9c(puVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return 1;
      }
      goto LAB_10ad968a0;
    }
  }
  param_3 = lVar6;
  puVar4 = &UNK_10f6ac2d0;
  FUN_10a0ee06c(&UNK_10f6ac2d0);
LAB_10ad968a0:
  ___stack_chk_fail();
  FUN_10ad908a4(&plStack_f8);
  func_0x00010ad908fc(&uStack_108);
  FUN_10a1b2b9c(auStack_e8);
  __Unwind_Resume(puVar4);
  if (param_3 - 1U < 7) {
    return *(undefined4 *)(&UNK_10e512ce0 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10ad968d8; end: 10ad968fb; +[LSAExternalImageComponent _orientationWithUIImageOrientation:] */

undefined4 FUN_10ad968d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 7) {
    return *(undefined4 *)(&UNK_10e512ce0 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10ad968fc; end: 10ad96b13; -[LSAExternalImageComponent _setExternalImageWithFaceRects:errorCode:setImageBlock:completion:] */

void FUN_10ad968fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,0);
    }
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126db570;
    func_0x00010bf9e180(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0f9160(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}


