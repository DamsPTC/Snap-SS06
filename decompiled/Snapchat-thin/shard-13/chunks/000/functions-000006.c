/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109cdb604; end: 109cdb6fb;  */

undefined * FUN_109cdb604(undefined8 param_1,undefined8 param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_4 < 0xf) {
    uStack_88 = (ulong)(uint)(param_3[2] * param_3[3] * param_3[1] * *param_3 *
                             *(int *)(&UNK_10e03e670 + (ulong)*param_4 * 4));
    FUN_109cdb95c(auStack_80,param_2,&uStack_88);
    FUN_109d0f52c(param_1,param_3,param_4,auStack_80);
    puVar3 = auStack_80;
    FUN_109cdc6dc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return puVar3;
    }
  }
  else {
    puVar3 = &UNK_10dfd21d7;
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5a92be,&UNK_10f5a92cd);
  }
  ___stack_chk_fail();
  FUN_109cdc6dc(auStack_80);
  __Unwind_Resume();
  iVar2 = (int)puVar3;
  puVar4 = (undefined *)0x1;
  if (((ulong)puVar3 & 0x20190) == 0) {
    uVar5 = 1;
    if (((ulong)puVar3 & 0x1b800) == 0) {
      uVar5 = (uint)(((ulong)puVar3 & 0x2c0000) != 0);
    }
    uVar1 = 1;
    if (iVar2 != 0x400) {
      uVar1 = uVar5;
    }
    uVar5 = 1;
    if (iVar2 != 0x200) {
      uVar5 = uVar1;
    }
    uVar1 = 1;
    if (((uint)(iVar2 - 2U < 0x3f) & (uint)(0x4000000040000041 >> ((ulong)(iVar2 - 2U) & 0x3f))) ==
        0) {
      uVar1 = uVar5;
    }
    puVar4 = (undefined *)(ulong)uVar1;
  }
  return puVar4;
}



/* Entry: 109cdb6fc; end: 109cdb76f;  */

bool FUN_109cdb6fc(uint param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 & 0x20190) == 0) {
    bVar1 = ((uint)(param_1 - 2 < 0x3f) &
            (uint)(0x4000000040000041 >> ((ulong)(param_1 - 2) & 0x3f))) != 0 ||
            (param_1 == 0x200 ||
            (param_1 == 0x400 || ((param_1 & 0x1b800) != 0 || (param_1 & 0x2c0000) != 0)));
  }
  return bVar1;
}



/* Entry: 109cdb770; end: 109cdb82b;  */

/* WARNING: Removing unreachable block (ram,0x000109d0cebc) */

void FUN_109cdb770(ulong *param_1,long *param_2,long param_3,int param_4,long *param_5)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined *puVar11;
  undefined8 *extraout_x8;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined4 auStack_560 [2];
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined4 uStack_548;
  undefined3 uStack_544;
  char cStack_541;
  undefined8 uStack_540;
  undefined8 ****appppuStack_538 [2];
  char cStack_521;
  undefined8 ***pppuStack_520;
  undefined8 ****ppppuStack_518;
  undefined8 ***pppuStack_510;
  undefined8 ****ppppuStack_500;
  undefined8 **ppuStack_4f8;
  undefined8 uStack_4f0;
  undefined8 ****ppppuStack_4e0;
  undefined8 ***pppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  byte bStack_499;
  undefined8 **ppuStack_498;
  undefined8 ****ppppuStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined1 uStack_471;
  ulong uStack_470;
  undefined8 ***pppuStack_468;
  undefined8 ***pppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_70;
  long *in_stack_ffffffffffffffb8;
  
  if (param_4 == 2) {
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar5 = (undefined8 ***)PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_498 = pppuVar5;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfacc00();
    _objc_release(puVar3);
    if (((uint)pppuVar5 & (uint)bStack_499 & 1) == 0) {
      FUN_109cda0d4(&UNK_10f5ac147,&UNK_10f5ac191,&UNK_10f5a8bcd);
      goto LAB_109d0d4c0;
    }
    puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      ppppuStack_490 = (undefined8 *****)0x0;
      uStack_488 = 0;
      uStack_480 = 0;
    }
    else {
      func_0x00010c0eb960(&ppppuStack_490,puVar3);
    }
    _objc_release(puVar3);
    ppppuVar10 = ppppuStack_490;
    uVar15 = 0;
    while (plVar6 = param_2,
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(param_2,&uStack_470,0x400),
          (*(byte *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x20) & 5) == 0) {
      lVar14 = 0;
      uVar12 = 0;
      do {
        uVar12 = uVar12 * 0x40 + 0x9e3779b9 + (uVar12 >> 2) + *(long *)((long)&uStack_470 + lVar14)
                 ^ uVar12;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0x400);
      uVar15 = uVar15 * 0x40 + 0x9e3779b9 + (uVar15 >> 2) + uVar12 ^ uVar15;
    }
    if (param_2[1] != 0) {
      puVar7 = &uStack_470;
      func_0x000109549058();
      uVar15 = uVar15 * 0x40 + 0x9e3779b9 + (uVar15 >> 2) + (long)puVar7 ^ uVar15;
    }
    uStack_470 = uVar15;
    FUN_109d0d770(&uStack_470,param_3);
    FUN_109d0d770(&uStack_470,param_3 + 0x18);
    uVar13 = (long)ppppuVar10 + (uStack_470 >> 2) + uStack_470 * 0x40 + 0x9e3779b9 ^ uStack_470;
    uVar13 = uStack_488 + 0x9e3779b9 + uVar13 * 0x40 + (uVar13 >> 2) ^ uVar13;
    uVar15 = uStack_480 + 0x9e3779b9 + uVar13 * 0x40 + (uVar13 >> 2);
    __ZNSt3__19to_stringEy(&ppppuStack_490,uVar15 ^ uVar13);
    uVar12 = param_5[1];
    if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)param_5 + 0x17);
    }
    func_0x000104c4f768(&ppppuStack_4e0,uVar12 + 1,&ppppuStack_500);
    pppppuVar9 = (undefined8 *****)ppppuStack_4e0;
    if (-1 < (long)pppuStack_4d0) {
      pppppuVar9 = &ppppuStack_4e0;
    }
    if (uVar12 != 0) {
      plVar6 = (long *)*param_5;
      if (-1 < *(char *)((long)param_5 + 0x17)) {
        plVar6 = param_5;
      }
      _memmove(pppppuVar9,plVar6,uVar12);
    }
    *(undefined2 *)((long)pppppuVar9 + uVar12) = 0x2f;
    uVar12 = uStack_488;
    pppppuVar9 = (undefined8 *****)ppppuStack_490;
    if (-1 < (long)uStack_480) {
      uVar12 = uStack_480 >> 0x38;
      pppppuVar9 = &ppppuStack_490;
    }
    pppppuVar8 = &ppppuStack_4e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar8,pppppuVar9,uVar12);
    pppuStack_468 = pppppuVar8[1];
    uStack_470 = (ulong)*pppppuVar8;
    pppuStack_460 = pppppuVar8[2];
    pppppuVar8[1] = (undefined8 ****)0x0;
    pppppuVar8[2] = (undefined8 ****)0x0;
    *pppppuVar8 = (undefined8 ****)0x0;
    puVar7 = &uStack_470;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f5ac1dc,0x10);
    uStack_4b8 = puVar7[1];
    uStack_4c0 = *puVar7;
    uStack_4b0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    if ((long)pppuStack_460 < 0) {
      __ZdlPv(uStack_470);
    }
    if ((long)pppuStack_4d0 < 0) {
      __ZdlPv(ppppuStack_4e0);
    }
    uVar15 = uVar15 ^ uVar13;
    FUN_109d13904(uVar15);
    __ZNSt3__15mutex4lockEv();
    pppuVar5 = (undefined8 ***)ppuStack_498;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfacbe0();
    _objc_release(puVar3);
    if ((int)pppuVar5 == 0) {
      __ZNSt3__18ios_base5clearEj((long)param_2 + *(long *)(*param_2 + -0x18),0);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1,0xffffffff);
      uStack_3f0 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      pppuStack_468 = (undefined8 ***)0x0;
      uStack_470 = 0;
      uStack_458 = 0;
      pppuStack_460 = (undefined8 ***)0x0;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                (param_2,&uStack_470);
      uVar12 = param_5[1];
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)param_5 + 0x17);
      }
      func_0x000104c4f768(&ppppuStack_500,uVar12 + 1,&pppuStack_520);
      pppppuVar9 = (undefined8 *****)ppppuStack_500;
      if (-1 < (long)uStack_4f0) {
        pppppuVar9 = &ppppuStack_500;
      }
      if (uVar12 != 0) {
        plVar6 = (long *)*param_5;
        if (-1 < *(char *)((long)param_5 + 0x17)) {
          plVar6 = param_5;
        }
        _memmove(pppppuVar9,plVar6,uVar12);
      }
      *(undefined2 *)((long)pppppuVar9 + uVar12) = 0x2f;
      uVar12 = uStack_488;
      pppppuVar9 = (undefined8 *****)ppppuStack_490;
      if (-1 < (long)uStack_480) {
        uVar12 = uStack_480 >> 0x38;
        pppppuVar9 = &ppppuStack_490;
      }
      pppppuVar8 = &ppppuStack_500;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar8,pppppuVar9,uVar12);
      pppuStack_4d8 = pppppuVar8[1];
      ppppuStack_4e0 = *pppppuVar8;
      pppuStack_4d0 = pppppuVar8[2];
      pppppuVar8[1] = (undefined8 ****)0x0;
      pppppuVar8[2] = (undefined8 ****)0x0;
      *pppppuVar8 = (undefined8 ****)0x0;
      pppppuVar9 = &ppppuStack_4e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar9,&UNK_10f5ac1ed,0x14);
      pppuStack_468 = pppppuVar9[1];
      uStack_470 = (ulong)*pppppuVar9;
      pppuStack_460 = pppppuVar9[2];
      pppppuVar9[1] = (undefined8 ****)0x0;
      pppppuVar9[2] = (undefined8 ****)0x0;
      *pppppuVar9 = (undefined8 ****)0x0;
      if ((long)pppuStack_4d0 < 0) {
        __ZdlPv(ppppuStack_4e0);
      }
      if (uStack_4f0._7_1_ < '\0') {
        __ZdlPv(ppppuStack_500);
      }
      FUN_109cf4ccc(&ppppuStack_4e0,1,2);
      uVar12 = param_5[1];
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)param_5 + 0x17);
      }
      func_0x000104c4f768(appppuStack_538,uVar12 + 1,&uStack_471);
      pppppuVar9 = (undefined8 *****)appppuStack_538[0];
      if (-1 < cStack_521) {
        pppppuVar9 = appppuStack_538;
      }
      if (uVar12 != 0) {
        plVar6 = (long *)*param_5;
        if (-1 < *(char *)((long)param_5 + 0x17)) {
          plVar6 = param_5;
        }
        _memmove(pppppuVar9,plVar6,uVar12);
      }
      *(undefined2 *)((long)pppppuVar9 + uVar12) = 0x2f;
      uVar12 = uStack_488;
      pppppuVar9 = (undefined8 *****)ppppuStack_490;
      if (-1 < (long)uStack_480) {
        uVar12 = uStack_480 >> 0x38;
        pppppuVar9 = &ppppuStack_490;
      }
      pppppuVar8 = appppuStack_538;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar8,pppppuVar9,uVar12);
      ppppuStack_518 = pppppuVar8[1];
      pppuStack_520 = *pppppuVar8;
      pppuStack_510 = pppppuVar8[2];
      pppppuVar8[1] = (undefined8 ****)0x0;
      pppppuVar8[2] = (undefined8 ****)0x0;
      *pppppuVar8 = (undefined8 ****)0x0;
      ppppuVar10 = &pppuStack_520;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar10,&UNK_10f5ac202,0xd);
      ppuStack_4f8 = ppppuVar10[1];
      ppppuStack_500 = (undefined8 ****)*ppppuVar10;
      uStack_4f0 = ppppuVar10[2];
      ppppuVar10[1] = (undefined8 ***)0x0;
      ppppuVar10[2] = (undefined8 ***)0x0;
      *ppppuVar10 = (undefined8 ***)0x0;
      if ((long)pppuStack_510 < 0) {
        __ZdlPv(pppuStack_520);
      }
      if (cStack_521 < '\0') {
        __ZdlPv(appppuStack_538[0]);
      }
      if (lRam00000001137e1c60 != -1) {
        pppuStack_520 = (undefined8 ***)&uStack_471;
        appppuStack_538[0] = &pppuStack_520;
        __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137e1c60,appppuStack_538,FUN_109d0e730);
      }
      auStack_560[0] = 0x50100;
      if (cRam00000001137e1c58 == '\0') {
        auStack_560[0] = 0x100;
      }
      uStack_548 = 0;
      uStack_544 = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      cStack_541 = '\0';
      uStack_540 = 0;
      FUN_109cf4d54(&ppppuStack_4e0,param_2,param_3,&ppppuStack_500,auStack_560);
      if (cStack_541 < '\0') {
        __ZdlPv(uStack_558);
      }
      pppuStack_520 = &ppuStack_498;
      ppppuStack_518 = &ppppuStack_500;
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      FUN_109ce0e30(&ppppuStack_500,&uStack_470);
      _objc_release(puVar3);
      pppuVar5 = (undefined8 ***)ppuStack_498;
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d1560();
      _objc_release(puVar11);
      _objc_release(puVar3);
      if (((ulong)pppuVar5 & 1) != 0) {
        if ((long)uStack_4b0 < 0) {
          func_0x000107c3192c(param_1,uStack_4c0,uStack_4b8);
        }
        else {
          param_1[1] = uStack_4b8;
          *param_1 = uStack_4c0;
          param_1[2] = uStack_4b0;
        }
        *(undefined1 *)(param_1 + 3) = 1;
        FUN_109d0d6f0(&pppuStack_520);
        if ((long)uStack_4f0 < 0) {
          __ZdlPv(ppppuStack_500);
        }
        pppuVar5 = pppuStack_4d0;
        pppuStack_4d0 = (undefined8 ****)0x0;
        if ((undefined8 ****)pppuVar5 != (undefined8 ****)0x0) {
          (*(code *)(*pppuVar5)[1])();
        }
        pppuVar5 = pppuStack_4d8;
        pppuStack_4d8 = (undefined8 ****)0x0;
        if ((undefined8 ****)pppuVar5 != (undefined8 ****)0x0) {
          __ZdlPv();
        }
        if ((long)pppuStack_460 < 0) {
          __ZdlPv(uStack_470);
        }
        goto LAB_109d0d36c;
      }
    }
    else {
      if ((long)uStack_4b0 < 0) {
        func_0x000107c3192c(param_1,uStack_4c0,uStack_4b8);
      }
      else {
        param_1[1] = uStack_4b8;
        *param_1 = uStack_4c0;
        param_1[2] = uStack_4b0;
      }
      *(undefined1 *)(param_1 + 3) = 0;
LAB_109d0d36c:
      __ZNSt3__15mutex6unlockEv(uVar15);
      if ((long)uStack_4b0 < 0) {
        __ZdlPv(uStack_4c0);
      }
      if ((long)uStack_480 < 0) {
        __ZdlPv(ppppuStack_490);
      }
      _objc_release(ppuStack_498);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
    }
    ppuVar1 = ppuStack_498;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40(ppuVar1);
    _objc_release(puVar3);
    func_0x00010952d0c4(&UNK_10f5ac147,&UNK_10f5ac191,&UNK_10f5ac210);
LAB_109d0d4c0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109d0d4c4);
    (*pcVar2)();
  }
  if (param_4 < 0x8000) {
    if (0xfff < param_4) {
      if ((param_4 != 0x1000) && (param_4 != 0x2000)) goto LAB_109cdb810;
      goto LAB_109cdb7f0;
    }
    if (param_4 != 8) {
      if (param_4 != 0x800) goto LAB_109cdb810;
      goto LAB_109cdb7f0;
    }
  }
  else {
    if (param_4 < 0x40000) {
      if ((param_4 != 0x8000) && (param_4 != 0x10000)) goto LAB_109cdb810;
    }
    else if ((param_4 != 0x40000) && (param_4 != 0x80000)) goto LAB_109cdb810;
LAB_109cdb7f0:
    FUN_109d0caf0(param_2,param_3,param_5,0);
  }
  FUN_109ceaea0(&UNK_10f5ac147,&UNK_10f5ac159);
LAB_109cdb810:
  puVar3 = &UNK_10f5a9249;
  func_0x00010952d0c4(&UNK_10f5a9249,&UNK_10f5a9251,&UNK_10f5a9268);
  FUN_109d0c938(&stack0xffffffffffffffb8,&UNK_10e03e591);
  (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8,puVar3);
  *extraout_x8 = in_stack_ffffffffffffffb8;
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  *puVar4 = &PTR_FUN_110b3cb18;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = in_stack_ffffffffffffffb8;
  extraout_x8[1] = puVar4;
  return;
}



/* Entry: 109cdb82c; end: 109cdb8bf;  */

void FUN_109cdb82c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plStack_38;
  
  FUN_109d0c938(&plStack_38,&UNK_10e03e591);
  (**(code **)(*plStack_38 + 0x10))(plStack_38,param_2);
  *param_1 = plStack_38;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110b3cb18;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = plStack_38;
  param_1[1] = puVar1;
  return;
}



/* Entry: 109cdb8c0; end: 109cdb95b;  */

void FUN_109cdb8c0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plStack_38;
  
  FUN_109d0c938(&plStack_38,&UNK_10e03e592,*(undefined1 *)(param_2 + 0x22),param_3);
  (**(code **)(*plStack_38 + 0x18))(plStack_38,param_2);
  *param_1 = plStack_38;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110b3cb18;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = plStack_38;
  param_1[1] = puVar1;
  return;
}



/* Entry: 109cdb95c; end: 109cdbbef;  */

void FUN_109cdb95c(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  code *pcStack_128;
  undefined8 *apuStack_120 [8];
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  pcStack_98 = FUN_109cdbc70;
  ppuStack_90 = &PTR_DAT_110950c70;
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x18))();
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  plVar8 = param_2 + 3;
  FUN_109cdbc80(plVar8,param_3);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(&lStack_140,param_2,param_3);
    FUN_109cdbbf0(&lStack_a0,&lStack_140);
    FUN_109cdc6dc(&lStack_140);
    lVar5 = lStack_a0;
    if ((ulong)(param_2[0x11] + (long)plVar7) <= (ulong)param_2[0x10]) {
      param_2[0x11] = param_2[0x11] + (long)plVar7;
      goto LAB_109cdba70;
    }
    lStack_a0 = 0;
    *param_1 = lVar5;
    param_1[1] = (long)pcStack_98;
    (*(code *)ppuStack_90[2])(param_1 + 2,&ppuStack_90);
    __ZNSt3__15mutex6unlockEv(param_2 + 8);
  }
  else {
    FUN_109cdbbf0(&lStack_a0,plVar8 + 3);
    FUN_109cdbd20(param_2 + 3,plVar8);
LAB_109cdba70:
    __ZNSt3__15mutex6unlockEv(param_2 + 8);
    lVar5 = lStack_a0;
    if (lStack_a0 == 0) goto LAB_109cdbb78;
    lStack_a0 = 0;
    lStack_138 = param_2[2];
    lStack_140 = param_2[1];
    if (param_2[2] != 0) {
      plVar8 = (long *)(param_2[2] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_130 = *param_3;
    pcStack_128 = pcStack_98;
    (*(code *)ppuStack_90[2])(apuStack_120,&ppuStack_90);
    pcStack_e0 = FUN_109cdbee0;
    ppuStack_d8 = &PTR_SUB_110b3cb68;
    plVar8 = (long *)0x58;
    __Znwm();
    lVar4 = lStack_138;
    lVar3 = lStack_140;
    lStack_140 = 0;
    lStack_138 = 0;
    plVar8[1] = lVar4;
    *plVar8 = lVar3;
    plVar8[3] = (long)pcStack_128;
    plVar8[2] = lStack_130;
    (*(code *)apuStack_120[0][2])(plVar8 + 4,apuStack_120);
    *param_1 = lVar5;
    param_1[1] = (long)FUN_109cdbee0;
    param_1[2] = (long)&PTR_SUB_110b3cb68;
    param_1[3] = (long)plVar8;
    uStack_d0 = 0;
    func_0x000109cdc5b4(&ppuStack_d8);
    (*(code *)*apuStack_120[0])(apuStack_120);
    if (lStack_138 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  FUN_109cdc6dc(&lStack_a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_109cdbb78:
  func_0x00010952d0c4(&UNK_10e03e636,&UNK_10f5a928b,&UNK_10f5a928f);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109cdbb9c);
  (*pcVar6)();
}



/* Entry: 109cdbbf0; end: 109cdbc6f;  */

long * FUN_109cdbbf0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  param_1[1] = param_2[1];
  plVar3 = param_1 + 2;
  (**(code **)*plVar3)(plVar3);
  (**(code **)(param_2[2] + 0x10))(plVar3,param_2 + 2);
  return param_1;
}



/* Entry: 109cdbc70; end: 109cdbc7f;  */

long * FUN_109cdbc70(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  puVar2 = param_2;
  func_0x000105277f8c();
  uVar3 = param_2[1];
  if (uVar3 != 0) {
    uVar4 = *puVar2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_2 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar4) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109cdbc80; end: 109cdbd1f;  */

long * FUN_109cdbc80(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109cdbd20; end: 109cdbd77;  */

undefined8 FUN_109cdbd20(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_38 [2];
  char cStack_28;
  
  uVar2 = *param_2;
  FUN_109cdbd78(alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    if (cStack_28 == '\x01') {
      FUN_109cdc6dc(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return uVar2;
}



/* Entry: 109cdbd78; end: 109cdbe97;  */

void FUN_109cdbd78(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_109cdbe2c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_109cdbe2c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_109cdbe2c:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 109cdbe98; end: 109cdbedf;  */

void FUN_109cdbe98(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_109cdc6dc(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109cdbee0; end: 109cdbeef;  */

long * FUN_109cdbee0(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long alStack_c0 [7];
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 auStack_70 [56];
  long lStack_38;
  
  plVar3 = *(long **)(param_2 + 0x10);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  plVar4 = (long *)plVar3[1];
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_d8 = plVar4, plVar4 == (long *)0x0)) ||
     (unaff_x22 = *plVar3, lStack_e0 = unaff_x22, unaff_x22 == 0)) {
    plVar4 = plStack_d8;
    plVar3 = plVar3 + 3;
    plVar5 = plVar3;
    (*(code *)*plVar3)();
    if (plVar4 == (long *)0x0) goto LAB_109cdc008;
  }
  else {
    __ZNSt3__15mutex4lockEv(unaff_x22 + 0x40);
    lStack_c8 = plVar3[3];
    plStack_d0 = param_1;
    (**(code **)(plVar3[4] + 0x10))(alStack_c0,plVar3 + 4);
    plStack_80 = plStack_d0;
    lStack_88 = plVar3[2];
    plVar3 = &lStack_88;
    plStack_d0 = (long *)0x0;
    lStack_78 = lStack_c8;
    (**(code **)(alStack_c0[0] + 0x10))(auStack_70,alStack_c0);
    plVar5 = &lStack_88;
    FUN_109cdc070(unaff_x22 + 0x18);
    FUN_109cdc6dc(&plStack_80);
    FUN_109cdc6dc(&plStack_d0);
    param_1 = (long *)(unaff_x22 + 0x40);
    __ZNSt3__15mutex6unlockEv();
  }
  plVar7 = plVar4 + 1;
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    param_1 = plVar4;
  }
LAB_109cdc008:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109cdc6dc(plVar3 + 1);
    FUN_109cdc6dc(&plStack_d0);
    __ZNSt3__15mutex6unlockEv(unaff_x22 + 0x40);
    func_0x000109cdc55c(&lStack_e0);
    __Unwind_Resume();
    plVar4 = (long *)0x60;
    __Znwm();
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar6 = *plVar5;
    plVar7 = plVar4 + 2;
    plVar4[3] = plVar5[1];
    *plVar7 = lVar6;
    plVar5[1] = 0;
    plVar4[4] = plVar5[2];
    (**(code **)(plVar5[3] + 0x10))(plVar4 + 5,plVar5 + 3);
    plVar4[1] = *plVar7;
    plVar3 = param_1;
    FUN_109cdc128(param_1,*plVar7,plVar7);
    FUN_109cdc270(param_1,plVar4,plVar3);
    return plVar4;
  }
  return param_1;
}



/* Entry: 109cdbef0; end: 109cdc06f;  */

long * FUN_109cdbef0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long alStack_c0 [7];
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 auStack_70 [56];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  plVar3 = (long *)param_1[1];
  if (((plVar3 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_d8 = plVar3, plVar3 == (long *)0x0)) ||
     (unaff_x22 = *param_1, lStack_e0 = unaff_x22, unaff_x22 == 0)) {
    plVar3 = plStack_d8;
    param_1 = param_1 + 3;
    plVar5 = param_1;
    (*(code *)*param_1)();
    if (plVar3 == (long *)0x0) goto LAB_109cdc008;
  }
  else {
    __ZNSt3__15mutex4lockEv(unaff_x22 + 0x40);
    lStack_c8 = param_1[3];
    plStack_d0 = param_2;
    (**(code **)(param_1[4] + 0x10))(alStack_c0,param_1 + 4);
    plStack_80 = plStack_d0;
    lStack_88 = param_1[2];
    param_1 = &lStack_88;
    plStack_d0 = (long *)0x0;
    lStack_78 = lStack_c8;
    (**(code **)(alStack_c0[0] + 0x10))(auStack_70,alStack_c0);
    plVar5 = &lStack_88;
    FUN_109cdc070(unaff_x22 + 0x18);
    FUN_109cdc6dc(&plStack_80);
    FUN_109cdc6dc(&plStack_d0);
    param_2 = (long *)(unaff_x22 + 0x40);
    __ZNSt3__15mutex6unlockEv();
  }
  plVar4 = plVar3 + 1;
  do {
    lVar6 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    param_2 = plVar3;
  }
LAB_109cdc008:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109cdc6dc(param_1 + 1);
    FUN_109cdc6dc(&plStack_d0);
    __ZNSt3__15mutex6unlockEv(unaff_x22 + 0x40);
    func_0x000109cdc55c(&lStack_e0);
    __Unwind_Resume();
    plVar4 = (long *)0x60;
    __Znwm();
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar6 = *plVar5;
    plVar7 = plVar4 + 2;
    plVar4[3] = plVar5[1];
    *plVar7 = lVar6;
    plVar5[1] = 0;
    plVar4[4] = plVar5[2];
    (**(code **)(plVar5[3] + 0x10))(plVar4 + 5,plVar5 + 3);
    plVar4[1] = *plVar7;
    plVar3 = param_2;
    FUN_109cdc128(param_2,*plVar7,plVar7);
    FUN_109cdc270(param_2,plVar4,plVar3);
    return plVar4;
  }
  return param_2;
}



/* Entry: 109cdc070; end: 109cdc127;  */

undefined8 * FUN_109cdc070(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar3 = *param_2;
  puVar2 = puVar1 + 2;
  puVar1[3] = param_2[1];
  *puVar2 = uVar3;
  param_2[1] = 0;
  puVar1[4] = param_2[2];
  (**(code **)(param_2[3] + 0x10))(puVar1 + 5,param_2 + 3);
  puVar1[1] = *puVar2;
  uVar3 = param_1;
  FUN_109cdc128(param_1,*puVar2,puVar2);
  FUN_109cdc270(param_1,puVar1,uVar3);
  return puVar1;
}



/* Entry: 109cdc128; end: 109cdc26f;  */

long * FUN_109cdc128(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_109cdc340(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = plVar8[2] == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 109cdc270; end: 109cdc33f;  */

void FUN_109cdc270(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_109cdc298;
LAB_109cdc2d4:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_109cdc330;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_109cdc2d4;
LAB_109cdc298:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_109cdc330;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_109cdc330;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_109cdc330:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 109cdc340; end: 109cdc40f;  */

long * FUN_109cdc340(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar5 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (param_2 <= plVar12) {
    if (param_2 < plVar12) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar5) {
        plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
      }
      if (param_2 <= plVar5) {
        param_2 = plVar5;
      }
      if (param_2 < plVar12) goto LAB_109cdc388;
    }
    return plVar5;
  }
LAB_109cdc388:
  if (param_2 == (long *)0x0) {
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar5 = (long *)param_1[1];
      if (plVar5 != (long *)0x0) {
        plVar12 = plVar5 + 1;
        do {
          lVar4 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return param_1;
    }
    lVar4 = (long)param_2 << 3;
    __Znwm();
    plVar5 = (long *)*param_1;
    *param_1 = lVar4;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    plVar12 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
      plVar12 = (long *)((long)plVar12 + 1);
    } while (param_2 != plVar12);
    plVar12 = (long *)param_1[2];
    if (plVar12 != (long *)0x0) {
      plVar8 = (long *)plVar12[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        plVar8 = (long *)((ulong)plVar8 & uVar7);
      }
      else if (param_2 <= plVar8) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar8 / (ulong)param_2;
        }
        plVar8 = (long *)((long)plVar8 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = param_1 + 2;
      while (plVar6 = plVar12, plVar12 = (long *)*plVar6, plVar12 != (long *)0x0) {
        plVar9 = (long *)plVar12[1];
        if (((ulong)param_2 & uVar7) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar7);
        }
        else if (param_2 <= plVar9) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar3 * (long)param_2);
        }
        if (plVar9 != plVar8) {
          lVar4 = *param_1;
          plVar11 = plVar12;
          if (*(long *)(lVar4 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar9 * 8) = plVar6;
            plVar8 = plVar9;
          }
          else {
            do {
              plVar10 = plVar11;
              plVar11 = (long *)*plVar10;
              if (plVar11 == (long *)0x0) break;
            } while (plVar12[2] == plVar11[2]);
            *plVar6 = (long)plVar11;
            *plVar10 = **(long **)(lVar4 + (long)plVar9 * 8);
            **(long **)(lVar4 + (long)plVar9 * 8) = (long)plVar12;
            plVar12 = plVar6;
          }
        }
      }
    }
  }
  return plVar5;
}



/* Entry: 109cdc410; end: 109cdc603;  */

long * FUN_109cdc410(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  if (param_2 == 0) {
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar5 = (long *)param_1[1];
      if (plVar5 != (long *)0x0) {
        plVar7 = plVar5 + 1;
        do {
          lVar4 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return param_1;
    }
    lVar4 = param_2 << 3;
    __Znwm();
    plVar5 = (long *)*param_1;
    *param_1 = lVar4;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    uVar6 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar6 = plVar7[1];
      uVar9 = param_2 - 1;
      if ((param_2 & uVar9) == 0) {
        uVar6 = uVar6 & uVar9;
      }
      else if (param_2 <= uVar6) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        uVar10 = plVar7[1];
        if ((param_2 & uVar9) == 0) {
          uVar10 = uVar10 & uVar9;
        }
        else if (param_2 <= uVar10) {
          uVar3 = 0;
          if (param_2 != 0) {
            uVar3 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar3 * param_2;
        }
        if (uVar10 != uVar6) {
          lVar4 = *param_1;
          plVar12 = plVar7;
          if (*(long *)(lVar4 + uVar10 * 8) == 0) {
            *(long **)(lVar4 + uVar10 * 8) = plVar8;
            uVar6 = uVar10;
          }
          else {
            do {
              plVar11 = plVar12;
              plVar12 = (long *)*plVar11;
              if (plVar12 == (long *)0x0) break;
            } while (plVar7[2] == plVar12[2]);
            *plVar8 = (long)plVar12;
            *plVar11 = **(long **)(lVar4 + uVar10 * 8);
            **(long **)(lVar4 + uVar10 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  return plVar5;
}



/* Entry: 109cdc604; end: 109cdc62b;  */

void FUN_109cdc604(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 109cdc62c; end: 109cdc6db;  */

undefined8 * FUN_109cdc62c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = param_2;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  lVar5 = param_3[1];
  uVar6 = *param_3;
  puVar4[1] = param_3[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = param_3[4];
  uVar6 = param_3[2];
  puVar4[3] = param_3[3];
  puVar4[2] = uVar6;
  (**(code **)(lVar5 + 0x18))(puVar4 + 4,param_3 + 4);
  param_1[1] = puVar4;
  return param_1;
}



/* Entry: 109cdc6dc; end: 109cdc727;  */

long * FUN_109cdc6dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 109cdc728; end: 109cdc7fb;  */

void FUN_109cdc728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,param_1);
  func_0x000107c31940(auStack_60,param_2);
  func_0x00010952d1c4(uVar2,auStack_48,auStack_60,param_3);
  ___cxa_throw(uVar2,&PTR_DAT_110afb398,&DAT_10952d1c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109cdc7a4);
  (*pcVar1)();
}



/* Entry: 109cdc7fc; end: 109cdc7ff;  */

void FUN_109cdc7fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cdc800; end: 109cdc813;  */

void FUN_109cdc800(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cdc814; end: 109cdc82b;  */

void FUN_109cdc814(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109cdc824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 109cdc82c; end: 109cdc863;  */

undefined8 FUN_109cdc82c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b3cb58);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109cdc864; end: 109cdc867;  */

void FUN_109cdc864(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cdc868; end: 109cdc983;  */

undefined8 *
FUN_109cdc868(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b3cb98;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 0x200;
  *(undefined4 *)((long)param_1 + 0x42) = 0;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  *(undefined2 *)(param_1 + 9) = 1;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x54) = 0x100;
  *(undefined1 *)((long)param_1 + 0x56) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x1000000;
  *(undefined2 *)((long)param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x100;
  param_1[0xd] = 100000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = param_3;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = *param_4;
  param_1[0x26] = param_4[1];
  param_1[0x25] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_109cdc984();
  return param_1;
}



/* Entry: 109cdc984; end: 109cdca7b;  */

void FUN_109cdc984(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 + 8 != param_2) {
    func_0x00010942bf40();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x28,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x61);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x71) = *(undefined8 *)(param_2 + 0x69);
  *(undefined8 *)(param_1 + 0x69) = uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  return;
}



/* Entry: 109cdca7c; end: 109cdcb5b;  */

void FUN_109cdca7c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **appuStack_278 [2];
  undefined1 auStack_268 [408];
  undefined **appuStack_d0 [19];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d14e6c(appuStack_278,param_2,0xc);
  (**(code **)(*param_1 + 0x28))(param_1,appuStack_278,param_3);
  appuStack_278[0] = &PTR_DAT_11087cf48;
  appuStack_d0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28018(auStack_268);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_278,&PTR_PTR_11087cf88);
  pppuVar3 = appuStack_d0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x000107c2803c(appuStack_278);
    __Unwind_Resume(pppuVar3);
    plVar4 = (long *)&UNK_10e03e6ac;
    puVar5 = (undefined8 *)&UNK_10f5a92e5;
    puVar6 = &UNK_10f5a92ef;
    func_0x00010952d0c4(&UNK_10e03e6ac,&UNK_10f5a92e5,&UNK_10f5a92ef);
    FUN_109d0a114(puVar5);
    lVar1 = 0x28;
    puVar2 = (undefined8 *)*puVar5;
    if (*(char *)(puVar5 + 3) != '\x02') {
      lVar1 = 0x20;
      puVar2 = puVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x000109cdcbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + lVar1))(plVar4,puVar2,puVar6);
    return;
  }
  return;
}



/* Entry: 109cdcb5c; end: 109cdcb83;  */

void FUN_109cdcb5c(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  
  plVar3 = (long *)&UNK_10e03e6ac;
  puVar4 = (undefined8 *)&UNK_10f5a92e5;
  puVar5 = &UNK_10f5a92ef;
  func_0x00010952d0c4(&UNK_10e03e6ac,&UNK_10f5a92e5,&UNK_10f5a92ef);
  FUN_109d0a114(puVar4);
  lVar1 = 0x28;
  puVar2 = (undefined8 *)*puVar4;
  if (*(char *)(puVar4 + 3) != '\x02') {
    lVar1 = 0x20;
    puVar2 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000109cdcbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + lVar1))(plVar3,puVar2,puVar5);
  return;
}



/* Entry: 109cdcb84; end: 109cdcbe3;  */

void FUN_109cdcb84(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_109d0a114(param_2);
  lVar1 = 0x28;
  plVar2 = (long *)*param_2;
  if ((char)param_2[3] != '\x02') {
    lVar1 = 0x20;
    plVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000109cdcbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))(param_1,plVar2,param_3);
  return;
}



/* Entry: 109cdcbe4; end: 109cdcd5b;  */

/* WARNING: Removing unreachable block (ram,0x000109cdccd4) */
/* WARNING: Removing unreachable block (ram,0x000109cdccd8) */
/* WARNING: Removing unreachable block (ram,0x000109cdcce0) */
/* WARNING: Removing unreachable block (ram,0x000109cdcce8) */
/* WARNING: Removing unreachable block (ram,0x000109cdccf4) */
/* WARNING: Removing unreachable block (ram,0x000109cdccfc) */
/* WARNING: Removing unreachable block (ram,0x000109cdcd04) */
/* WARNING: Removing unreachable block (ram,0x000109cdcd08) */

void FUN_109cdcbe4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar6 = puVar4 + 3;
  *(undefined2 *)puVar6 = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar6;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_48 = puVar4;
  (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4);
  plVar1 = puVar4 + 2;
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_109cdccb4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_109cdccb4:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_48,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 109cdcd5c; end: 109cdced3;  */

/* WARNING: Removing unreachable block (ram,0x000109cdce4c) */
/* WARNING: Removing unreachable block (ram,0x000109cdce50) */
/* WARNING: Removing unreachable block (ram,0x000109cdce58) */
/* WARNING: Removing unreachable block (ram,0x000109cdce60) */
/* WARNING: Removing unreachable block (ram,0x000109cdce6c) */
/* WARNING: Removing unreachable block (ram,0x000109cdce74) */
/* WARNING: Removing unreachable block (ram,0x000109cdce7c) */
/* WARNING: Removing unreachable block (ram,0x000109cdce80) */

void FUN_109cdcd5c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar6 = puVar4 + 3;
  *(undefined2 *)puVar6 = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar6;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  puStack_48 = puVar4;
  (**(code **)(*param_2 + 0x20))(param_2,param_3,param_4);
  plVar1 = puVar4 + 2;
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_109cdce2c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_109cdce2c:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_48,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 109cdced4; end: 109cdcfeb;  */

long ****** FUN_109cdced4(undefined8 param_1,long *param_2,undefined8 param_3,long *****param_4)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  float *pfVar11;
  long ******pppppplVar12;
  ulong uVar13;
  double *pdVar14;
  undefined8 *puVar15;
  long ******pppppplVar16;
  long lVar17;
  double *pdVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  long ******extraout_x8;
  undefined8 *extraout_x8_00;
  int *piVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  float *pfVar32;
  ulong uVar33;
  ulong uVar34;
  long ******pppppplVar35;
  long *****ppppplVar36;
  long *****ppppplVar37;
  uint *puVar38;
  float fVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  undefined8 uVar43;
  long *****ppppplStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [32];
  undefined8 uStack_330;
  undefined1 auStack_328 [8];
  long *plStack_320;
  uint auStack_318 [2];
  ulong uStack_310;
  undefined8 *apuStack_308 [7];
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined7 uStack_2c0;
  char cStack_2b9;
  ulong uStack_288;
  undefined8 *apuStack_280 [7];
  long lStack_248;
  undefined1 uStack_1e9;
  long ****pppplStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  long *****appppplStack_180 [2];
  char cStack_169;
  undefined1 auStack_168 [80];
  long lStack_118;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long ****apppplStack_c8 [5];
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined1 auStack_88 [80];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2[0x11] - param_2[0x10] == 0x58) {
    func_0x0001094c8428(auStack_a0,param_2[0x10],param_3);
    func_0x0001094c8958(apppplStack_c8,auStack_a0,1);
    func_0x000105675c90(auStack_88);
    if (cStack_89 < '\0') {
      __ZdlPv(auStack_a0[0]);
    }
    pppppplVar12 = (long ******)apppplStack_c8;
    (**(code **)(*param_2 + 0x18))(param_1,param_2);
    pppppplVar35 = (long ******)apppplStack_c8;
    func_0x000109379fe8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return pppppplVar35;
    }
  }
  else {
    pppppplVar35 = (long ******)&UNK_10e03e6ac;
    pppppplVar12 = (long ******)&UNK_10f5a9324;
    param_4 = (long *****)&UNK_10f5a932c;
    func_0x00010952d0c4();
  }
  ___stack_chk_fail();
  func_0x000109379fe8(apppplStack_c8);
  __Unwind_Resume();
  pppppplVar10 = (long ******)&uStack_1d0;
  pcStack_d8 = FUN_109cdcfec;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar9 = pppppplVar35;
  pppppplVar16 = pppppplVar12;
  ppppplVar36 = param_4;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_109cdd1fc();
  if ((int)pppppplVar9 == 4) {
    pppppplVar10 = pppppplVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
      extraout_x8[1] = (long *****)0x0;
      *extraout_x8 = (long *****)0x0;
      extraout_x8[3] = (long *****)0x0;
      extraout_x8[2] = (long *****)0x0;
      *(undefined4 *)(extraout_x8 + 4) = *(undefined4 *)(pppppplVar12 + 4);
      func_0x00010937a3dc(extraout_x8,pppppplVar12[1]);
      for (ppppplVar36 = pppppplVar12[2]; ppppplVar36 != (long *****)0x0;
          ppppplVar36 = (long *****)*ppppplVar36) {
        func_0x0001094c89d0(extraout_x8,ppppplVar36 + 2,ppppplVar36 + 2);
      }
      return extraout_x8;
    }
  }
  else {
    if (pppppplVar12[3] == (long *****)0x1) {
      ppppplVar36 = pppppplVar12[2];
      FUN_109cdd248(&uStack_1d0,pppppplVar35,ppppplVar36 + 5,param_4);
      func_0x0001094c86f8(appppplStack_180,ppppplVar36 + 2,&uStack_1d0);
      pppppplVar16 = appppplStack_180;
      ppppplVar36 = (long *****)0x1;
      func_0x0001094c8958(extraout_x8);
      func_0x000105675c90(auStack_168);
      if (cStack_169 < '\0') {
        __ZdlPv(appppplStack_180[0]);
      }
      func_0x000105675c90();
    }
    else {
      extraout_x8[1] = (long *****)0x0;
      *extraout_x8 = (long *****)0x0;
      extraout_x8[3] = (long *****)0x0;
      extraout_x8[2] = (long *****)0x0;
      *(undefined4 *)(extraout_x8 + 4) = 0x3f800000;
      ppppplVar37 = pppppplVar12[2];
      pppppplVar10 = pppppplVar9;
      if (ppppplVar37 != (long *****)0x0) {
        bVar6 = true;
        do {
          pppppplVar12 = pppppplVar35;
          FUN_109cde1d4(pppppplVar35,ppppplVar37 + 2);
          ppppplVar36 = ppppplVar37 + 8;
          appppplStack_180[0] = (long *****)pppppplVar12;
          FUN_109cddea4(ppppplVar36,appppplStack_180);
          uStack_1d0 = ppppplVar36;
          FUN_109d0e828(appppplStack_180,ppppplVar37 + 5,&uStack_1d0,pppppplVar35[0x25]);
          pppppplVar16 = (long ******)(ppppplVar37 + 2);
          ppppplVar36 = ppppplVar37 + 2;
          func_0x00010955c3e0(extraout_x8,pppppplVar16,ppppplVar36,appppplStack_180);
          pppppplVar10 = appppplStack_180;
          func_0x000105675c90();
          if ((int)uStack_1d0 == *(int *)(ppppplVar37 + 8)) {
            bVar6 = (bool)(uStack_1d0._4_4_ != *(int *)((long)ppppplVar37 + 0x44) & bVar6);
          }
          ppppplVar37 = (long *****)*ppppplVar37;
        } while (ppppplVar37 != (long *****)0x0);
        if (!bVar6) goto LAB_109cdd178;
      }
      *(byte *)param_4 = 1;
    }
LAB_109cdd178:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
      return pppppplVar10;
    }
  }
  ___stack_chk_fail();
  func_0x0001094c8180(appppplStack_180);
  func_0x000105675c90(&uStack_1d0);
  __Unwind_Resume();
  pcStack_1d8 = FUN_109cdd1fc;
  ppuStack_1e0 = &puStack_e0;
  if (*(uint *)(pppppplVar10 + 0x23) != 0xffffffff) {
    pppplStack_1e8 = (long ****)&uStack_1e9;
    pppppplVar12 = (long ******)&pppplStack_1e8;
    (*(code *)(&PTR_DAT_110b3cc08)[*(uint *)(pppppplVar10 + 0x23)])
              (pppppplVar12,pppppplVar10 + 0x17);
    return pppppplVar12;
  }
  func_0x0001092612e0();
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar12 = pppppplVar10;
  FUN_109cdd1fc();
  if ((int)pppppplVar12 == 4) {
    *extraout_x8_00 = &PTR_DAT_1108a5c28;
    ppppplVar36 = pppppplVar16[1];
    extraout_x8_00[2] = pppppplVar16[2];
    extraout_x8_00[1] = ppppplVar36;
    extraout_x8_00[3] = pppppplVar16[3];
    ppppplVar36 = pppppplVar16[4];
    extraout_x8_00[5] = pppppplVar16[5];
    extraout_x8_00[4] = ppppplVar36;
    if (pppppplVar16[5] != (long *****)0x0) {
      ppppplVar36 = pppppplVar16[5] + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppplVar36,0x10);
        if (bVar6) {
          *ppppplVar36 = (long ****)((long)*ppppplVar36 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppppplVar12 = (long ******)(extraout_x8_00 + 6);
    func_0x000109407928(pppppplVar12,pppppplVar16 + 6);
    goto LAB_109cdd2e0;
  }
  if ((long)pppppplVar10[0x11] - (long)pppppplVar10[0x10] == 0x58) {
    pppppplVar12 = pppppplVar10;
    FUN_109cde1d4();
    pppppplVar35 = pppppplVar16 + 3;
    ppppplStack_380 = (long *****)pppppplVar12;
    FUN_109cddea4(pppppplVar35,&ppppplStack_380);
    pppppplVar12 = pppppplVar16;
    uStack_330 = pppppplVar35;
    FUN_109d0e828(extraout_x8_00,pppppplVar16,&uStack_330,pppppplVar10[0x25]);
    if (((int)uStack_330 != *(int *)(pppppplVar16 + 3)) ||
       (uStack_330._4_4_ != *(int *)((long)pppppplVar16 + 0x1c))) {
      *(byte *)ppppplVar36 = 1;
    }
    if (((*(byte *)((long)pppppplVar10 + 0x25) & 1) == 0) &&
       (*(char *)((long)pppppplVar10 + 0x24) != '\x01')) goto LAB_109cdd2e0;
    if (((ulong)*ppppplVar36 & 1) != 0) {
LAB_109cdd54c:
      if (*(int *)(extraout_x8_00 + 3) == 1) {
        if ((*(byte *)(extraout_x8_00 + 9) & 1) == 0) {
          uVar31 = *(int *)(extraout_x8_00 + 2) * *(int *)((long)extraout_x8_00 + 0x14) *
                   *(int *)((long)extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 1);
        }
        else {
          uVar31 = 1;
          for (piVar25 = (int *)extraout_x8_00[6]; piVar25 != (int *)extraout_x8_00[7];
              piVar25 = piVar25 + 1) {
            uVar31 = *piVar25 * uVar31;
          }
        }
        uVar26 = extraout_x8_00[4];
        if ((*(char *)((long)pppppplVar10 + 0x24) == '\x01') &&
           ((ulong)*(uint *)(extraout_x8_00 + 2) !=
            (long)pppppplVar10[2] - (long)pppppplVar10[1] >> 2)) {
LAB_109cddd24:
          func_0x00010952d0c4(&UNK_10f5a9547,&UNK_10f5a9547,&UNK_10f5a9510);
          goto LAB_109cdddc4;
        }
        uVar27 = *(uint *)((long)extraout_x8_00 + 0x1c);
        pppppplVar12 = (long ******)(ulong)uVar27;
        if (uVar27 == 1) {
          uVar33 = 0;
          ppppplVar36 = pppppplVar10[1];
          ppppplVar37 = pppppplVar10[2];
          uVar27 = *(int *)(extraout_x8_00 + 1) * *(int *)(extraout_x8_00 + 2);
          uVar3 = 0;
          if (*(uint *)((long)extraout_x8_00 + 0x14) != 0) {
            uVar3 = uVar31 / *(uint *)((long)extraout_x8_00 + 0x14);
          }
          do {
            lVar28 = uVar26 + uVar33 * uVar3 * 4;
            uVar31 = *(uint *)((long)extraout_x8_00 + 0xc);
            if (*(char *)((long)pppppplVar10 + 0x24) == '\x01' && uVar27 != 0) {
              uVar30 = 0;
              pppppplVar12 = (long ******)pppppplVar10[1];
              lVar20 = 0;
              do {
                if (uVar31 != 0) {
                  lVar17 = 0;
                  fVar39 = *(float *)((long)pppppplVar12 + lVar20 * 4);
                  lVar22 = lVar28 + uVar30 * 4;
                  uVar29 = (ulong)uVar31;
                  do {
                    lVar21 = lVar17 * (ulong)uVar27;
                    *(float *)(lVar22 + lVar21 * 4) = *(float *)(lVar22 + lVar21 * 4) - fVar39;
                    lVar17 = lVar17 + 1;
                    uVar29 = uVar29 - 1;
                  } while (uVar29 != 0);
                }
                lVar17 = 0;
                if (lVar20 + 1 != (long)ppppplVar37 - (long)ppppplVar36 >> 2) {
                  lVar17 = lVar20 + 1;
                }
                uVar30 = uVar30 + 1;
                lVar20 = lVar17;
              } while (uVar30 != uVar27);
            }
            if (*(char *)((long)pppppplVar10 + 0x25) == '\x01') {
              uVar29 = (ulong)uVar31 * (ulong)uVar27;
              uVar30 = uVar29;
              if (((uVar26 & 3) == 0) &&
                 (uVar30 = (ulong)-((uint)lVar28 >> 2) & 3, (long)uVar29 <= (long)uVar30)) {
                uVar30 = uVar29;
              }
              fVar39 = *(float *)(pppppplVar10 + 4);
              uVar13 = uVar29 - uVar30;
              uVar34 = uVar13 + 3;
              if ((long)uVar30 <= (long)uVar29) {
                uVar34 = uVar13;
              }
              if (0 < (long)uVar30) {
                lVar20 = 0;
                uVar19 = uVar30;
                do {
                  *(float *)(lVar28 + lVar20 * 4) = fVar39 * *(float *)(lVar28 + lVar20 * 4);
                  lVar20 = lVar20 + 1;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
              pppppplVar12 = (long ******)((uVar34 & 0xfffffffffffffffc) + uVar30);
              if (3 < (long)uVar13) {
                do {
                  puVar15 = (undefined8 *)(lVar28 + uVar30 * 4);
                  uVar43 = puVar15[1];
                  uVar41 = *puVar15;
                  puVar15 = (undefined8 *)(lVar28 + uVar30 * 4);
                  puVar15[1] = CONCAT44((float)((ulong)uVar43 >> 0x20) * fVar39,
                                        (float)uVar43 * fVar39);
                  *puVar15 = CONCAT44((float)((ulong)uVar41 >> 0x20) * fVar39,(float)uVar41 * fVar39
                                     );
                  uVar30 = uVar30 + 4;
                } while ((long)uVar30 < (long)pppppplVar12);
              }
              if ((long)pppppplVar12 < (long)uVar29) {
                lVar20 = uVar13 - (uVar34 & 0xfffffffffffffffc);
                do {
                  *(float *)(lVar28 + (long)pppppplVar12 * 4) =
                       fVar39 * *(float *)(lVar28 + (long)pppppplVar12 * 4);
                  pppppplVar12 = (long ******)((long)pppppplVar12 + 1);
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
              }
            }
            uVar33 = uVar33 + 1;
          } while (uVar33 < *(uint *)((long)extraout_x8_00 + 0x14));
        }
        else {
          if (uVar27 != 0) {
            __ZNSt3__19to_stringEi(&uStack_2d0);
            func_0x00010928a5e0(&ppppplStack_380,&UNK_10f5a9558,&uStack_2d0);
            if (cStack_2b9 < '\0') {
              __ZdlPv(uStack_2d0);
            }
            FUN_109cdc728(&UNK_10f5a9547,&UNK_10f5a9547,&ppppplStack_380);
            goto LAB_109cdddc4;
          }
          uVar31 = *(uint *)((long)extraout_x8_00 + 0x14);
          if (uVar31 != 0) {
            uVar27 = 0;
            iVar24 = *(int *)((long)extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 1);
            uVar33 = (ulong)*(uint *)(extraout_x8_00 + 2);
            do {
              if ((int)uVar33 != 0) {
                uVar29 = 0;
                uVar30 = 0;
                do {
                  lVar28 = uVar29 * 4;
                  pfVar32 = (float *)(uVar26 + uVar29 * 4);
                  uVar33 = uVar26 + (ulong)(uint)(iVar24 * (int)uVar30) * 4;
                  uVar31 = *(uint *)(extraout_x8_00 + 1);
                  uVar3 = *(uint *)((long)extraout_x8_00 + 0xc);
                  if (*(char *)((long)pppppplVar10 + 0x24) == '\x01') {
                    fVar39 = *(float *)((long)pppppplVar10[1] + uVar30 * 4);
                    uVar13 = (ulong)uVar31 * (ulong)uVar3;
                    uVar34 = (ulong)-((uint)uVar33 >> 2) & 3;
                    if (uVar13 <= uVar34) {
                      uVar34 = uVar13;
                    }
                    uVar19 = uVar13;
                    if ((uVar33 & 3) == 0) {
                      uVar19 = uVar34;
                    }
                    uVar7 = uVar13 - uVar19;
                    pfVar11 = pfVar32;
                    uVar23 = uVar19;
                    uVar34 = uVar7 + 3;
                    if ((long)uVar19 <= (long)uVar13) {
                      uVar34 = uVar7;
                    }
                    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
                      *pfVar11 = *pfVar11 - fVar39;
                      pfVar11 = pfVar11 + 1;
                    }
                    lVar20 = (uVar34 & 0xfffffffffffffffc) + uVar19;
                    if (3 < (long)uVar7) {
                      puVar15 = (undefined8 *)(uVar26 + lVar28 + uVar19 * 4);
                      uVar23 = uVar19;
                      do {
                        puVar15[1] = CONCAT44((float)((ulong)puVar15[1] >> 0x20) - fVar39,
                                              (float)puVar15[1] - fVar39);
                        *puVar15 = CONCAT44((float)((ulong)*puVar15 >> 0x20) - fVar39,
                                            (float)*puVar15 - fVar39);
                        uVar23 = uVar23 + 4;
                        puVar15 = puVar15 + 2;
                      } while ((long)uVar23 < lVar20);
                    }
                    if (lVar20 < (long)uVar13) {
                      lVar20 = uVar7 - (uVar34 & 0xfffffffffffffffc);
                      pfVar11 = (float *)(uVar26 + lVar28 + ((long)uVar34 >> 2) * 0x10 + uVar19 * 4)
                      ;
                      do {
                        *pfVar11 = *pfVar11 - fVar39;
                        lVar20 = lVar20 + -1;
                        pfVar11 = pfVar11 + 1;
                      } while (lVar20 != 0);
                    }
                  }
                  pppppplVar12 = (long ******)(ulong)*(byte *)((long)pppppplVar10 + 0x25);
                  if (*(byte *)((long)pppppplVar10 + 0x25) == 1) {
                    fVar39 = *(float *)(pppppplVar10 + 4);
                    uVar13 = (ulong)uVar31 * (ulong)uVar3;
                    uVar34 = (ulong)-((uint)uVar33 >> 2) & 3;
                    if (uVar13 <= uVar34) {
                      uVar34 = uVar13;
                    }
                    uVar19 = uVar13;
                    if ((uVar33 & 3) == 0) {
                      uVar19 = uVar34;
                    }
                    pppppplVar35 = (long ******)(uVar13 - uVar19);
                    uVar33 = uVar19;
                    pppppplVar12 = (long ******)((long)pppppplVar35 + 3);
                    if ((long)uVar19 <= (long)uVar13) {
                      pppppplVar12 = pppppplVar35;
                    }
                    for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                      *pfVar32 = fVar39 * *pfVar32;
                      pfVar32 = pfVar32 + 1;
                    }
                    lVar20 = ((ulong)pppppplVar12 & 0xfffffffffffffffc) + uVar19;
                    if (3 < (long)pppppplVar35) {
                      puVar15 = (undefined8 *)(uVar26 + lVar28 + uVar19 * 4);
                      uVar33 = uVar19;
                      do {
                        puVar15[1] = CONCAT44((float)((ulong)puVar15[1] >> 0x20) * fVar39,
                                              (float)puVar15[1] * fVar39);
                        *puVar15 = CONCAT44((float)((ulong)*puVar15 >> 0x20) * fVar39,
                                            (float)*puVar15 * fVar39);
                        uVar33 = uVar33 + 4;
                        puVar15 = puVar15 + 2;
                      } while ((long)uVar33 < lVar20);
                    }
                    if (lVar20 < (long)uVar13) {
                      lVar20 = (long)pppppplVar35 - ((ulong)pppppplVar12 & 0xfffffffffffffffc);
                      pfVar32 = (float *)(uVar26 + lVar28 +
                                         ((long)pppppplVar12 >> 2) * 0x10 + uVar19 * 4);
                      do {
                        *pfVar32 = fVar39 * *pfVar32;
                        lVar20 = lVar20 + -1;
                        pfVar32 = pfVar32 + 1;
                      } while (lVar20 != 0);
                    }
                  }
                  uVar30 = uVar30 + 1;
                  uVar33 = (ulong)*(uint *)(extraout_x8_00 + 2);
                  uVar29 = (ulong)(uint)((int)uVar29 + iVar24);
                } while (uVar30 < uVar33);
                uVar31 = *(uint *)((long)extraout_x8_00 + 0x14);
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < uVar31);
          }
        }
      }
      else {
        if (*(int *)(extraout_x8_00 + 3) != 2) {
          __ZNSt3__19to_stringEi(&uStack_2d0);
          func_0x00010928a5e0(&ppppplStack_380,&UNK_10f5a9374,&uStack_2d0);
          FUN_109cd45b4(&UNK_10e03e6ac,&UNK_10f5a9369,&ppppplStack_380);
          goto LAB_109cdddc4;
        }
        if ((*(byte *)(extraout_x8_00 + 9) & 1) == 0) {
          uVar31 = *(int *)(extraout_x8_00 + 2) * *(int *)((long)extraout_x8_00 + 0x14) *
                   *(int *)((long)extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 1);
        }
        else {
          uVar31 = 1;
          for (piVar25 = (int *)extraout_x8_00[6]; piVar25 != (int *)extraout_x8_00[7];
              piVar25 = piVar25 + 1) {
            uVar31 = *piVar25 * uVar31;
          }
        }
        uVar26 = extraout_x8_00[4];
        if ((*(char *)((long)pppppplVar10 + 0x24) == '\x01') &&
           ((ulong)*(uint *)(extraout_x8_00 + 2) !=
            (long)pppppplVar10[2] - (long)pppppplVar10[1] >> 2)) goto LAB_109cddd24;
        uVar27 = *(uint *)((long)extraout_x8_00 + 0x1c);
        pppppplVar12 = (long ******)(ulong)uVar27;
        if (uVar27 == 1) {
          uVar33 = 0;
          ppppplVar36 = pppppplVar10[1];
          ppppplVar37 = pppppplVar10[2];
          uVar27 = *(int *)(extraout_x8_00 + 1) * *(int *)(extraout_x8_00 + 2);
          uVar3 = 0;
          if (*(uint *)((long)extraout_x8_00 + 0x14) != 0) {
            uVar3 = uVar31 / *(uint *)((long)extraout_x8_00 + 0x14);
          }
          do {
            uVar30 = uVar26 + uVar33 * uVar3 * 8;
            uVar31 = *(uint *)((long)extraout_x8_00 + 0xc);
            if (*(char *)((long)pppppplVar10 + 0x24) == '\x01' && uVar27 != 0) {
              uVar29 = 0;
              pppppplVar12 = (long ******)pppppplVar10[1];
              lVar28 = 0;
              do {
                if (uVar31 != 0) {
                  lVar20 = 0;
                  fVar39 = *(float *)((long)pppppplVar12 + lVar28 * 4);
                  lVar17 = uVar30 + uVar29 * 8;
                  uVar34 = (ulong)uVar31;
                  do {
                    lVar22 = lVar20 * (ulong)uVar27;
                    *(double *)(lVar17 + lVar22 * 8) =
                         *(double *)(lVar17 + lVar22 * 8) - (double)fVar39;
                    lVar20 = lVar20 + 1;
                    uVar34 = uVar34 - 1;
                  } while (uVar34 != 0);
                }
                lVar20 = 0;
                if (lVar28 + 1 != (long)ppppplVar37 - (long)ppppplVar36 >> 2) {
                  lVar20 = lVar28 + 1;
                }
                uVar29 = uVar29 + 1;
                lVar28 = lVar20;
              } while (uVar29 != uVar27);
            }
            if (*(char *)((long)pppppplVar10 + 0x25) == '\x01') {
              dVar40 = (double)*(float *)(pppppplVar10 + 4);
              uVar34 = (ulong)uVar31 * (ulong)uVar27;
              uVar29 = uVar30 >> 3 & 1;
              if ((long)uVar34 <= (long)uVar29) {
                uVar29 = uVar34;
              }
              if ((uVar26 & 7) != 0) {
                uVar29 = uVar34;
              }
              if (uVar29 != 0) {
                lVar28 = 0;
                uVar13 = uVar29;
                do {
                  *(double *)(uVar30 + lVar28 * 8) = *(double *)(uVar30 + lVar28 * 8) * dVar40;
                  lVar28 = lVar28 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              pppppplVar12 = (long ******)(uVar34 - uVar29);
              lVar28 = ((long)pppppplVar12 - ((long)pppppplVar12 >> 0x3f) & 0xfffffffffffffffeU) +
                       uVar29;
              if (1 < (long)pppppplVar12) {
                do {
                  pdVar18 = (double *)(uVar30 + uVar29 * 8);
                  dVar42 = *pdVar18;
                  pdVar14 = (double *)(uVar30 + uVar29 * 8);
                  pdVar14[1] = pdVar18[1] * dVar40;
                  *pdVar14 = dVar42 * dVar40;
                  uVar29 = uVar29 + 2;
                } while ((long)uVar29 < lVar28);
              }
              if (lVar28 < (long)uVar34) {
                lVar20 = (long)pppppplVar12 % 2;
                do {
                  *(double *)(uVar30 + lVar28 * 8) = *(double *)(uVar30 + lVar28 * 8) * dVar40;
                  lVar28 = lVar28 + 1;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
              }
            }
            uVar33 = uVar33 + 1;
          } while (uVar33 < *(uint *)((long)extraout_x8_00 + 0x14));
        }
        else {
          if (uVar27 != 0) {
            __ZNSt3__19to_stringEi(&uStack_2d0);
            func_0x00010928a5e0(&ppppplStack_380,&UNK_10f5a9558,&uStack_2d0);
            if (cStack_2b9 < '\0') {
              __ZdlPv(uStack_2d0);
            }
            FUN_109cdc728(&UNK_10f5a9547,&UNK_10f5a9547,&ppppplStack_380);
            goto LAB_109cdddc4;
          }
          uVar31 = *(uint *)((long)extraout_x8_00 + 0x14);
          if (uVar31 != 0) {
            uVar27 = 0;
            iVar24 = *(int *)((long)extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 1);
            uVar33 = (ulong)*(uint *)(extraout_x8_00 + 2);
            do {
              if ((int)uVar33 != 0) {
                uVar29 = 0;
                uVar30 = 0;
                do {
                  lVar28 = uVar29 * 8;
                  pdVar18 = (double *)(uVar26 + uVar29 * 8);
                  uVar33 = uVar26 + (ulong)(uint)(iVar24 * (int)uVar30) * 8;
                  uVar31 = *(uint *)(extraout_x8_00 + 1);
                  uVar3 = *(uint *)((long)extraout_x8_00 + 0xc);
                  pppppplVar12 = (long ******)(uVar33 >> 3 & 1);
                  if (*(char *)((long)pppppplVar10 + 0x24) == '\x01') {
                    dVar40 = (double)*(float *)((long)pppppplVar10[1] + uVar30 * 4);
                    pppppplVar16 = (long ******)((ulong)uVar31 * (ulong)uVar3);
                    pppppplVar35 = pppppplVar12;
                    if (pppppplVar16 <= pppppplVar12) {
                      pppppplVar35 = pppppplVar16;
                    }
                    pdVar14 = pdVar18;
                    pppppplVar9 = pppppplVar35;
                    if ((uVar33 & 7) != 0) {
                      pppppplVar35 = pppppplVar16;
                      pppppplVar9 = pppppplVar16;
                    }
                    for (; pppppplVar35 != (long ******)0x0;
                        pppppplVar35 = (long ******)((long)pppppplVar35 + -1)) {
                      *pdVar14 = *pdVar14 - dVar40;
                      pdVar14 = pdVar14 + 1;
                    }
                    lVar20 = (long)pppppplVar16 - (long)pppppplVar9;
                    puVar2 = (undefined *)
                             ((lVar20 - (lVar20 >> 0x3f) & 0xfffffffffffffffeU) + (long)pppppplVar9)
                    ;
                    if (1 < lVar20) {
                      pdVar14 = (double *)(uVar26 + lVar28 + (long)pppppplVar9 * 8);
                      pppppplVar35 = pppppplVar9;
                      do {
                        pdVar14[1] = pdVar14[1] - dVar40;
                        *pdVar14 = *pdVar14 - dVar40;
                        pppppplVar35 = (long ******)((long)pppppplVar35 + 2);
                        pdVar14 = pdVar14 + 2;
                      } while ((long)pppppplVar35 < (long)puVar2);
                    }
                    if ((long)puVar2 < (long)pppppplVar16) {
                      lVar17 = lVar20 % 2;
                      pdVar14 = (double *)
                                (uVar26 + lVar28 + (lVar20 / 2) * 0x10 + (long)pppppplVar9 * 8);
                      do {
                        *pdVar14 = *pdVar14 - dVar40;
                        lVar17 = lVar17 + -1;
                        pdVar14 = pdVar14 + 1;
                      } while (lVar17 != 0);
                    }
                  }
                  if (*(char *)((long)pppppplVar10 + 0x25) == '\x01') {
                    dVar40 = (double)*(float *)(pppppplVar10 + 4);
                    pppppplVar35 = (long ******)((ulong)uVar31 * (ulong)uVar3);
                    if (pppppplVar35 <= pppppplVar12) {
                      pppppplVar12 = pppppplVar35;
                    }
                    pppppplVar16 = pppppplVar12;
                    if ((uVar33 & 7) != 0) {
                      pppppplVar12 = pppppplVar35;
                      pppppplVar16 = pppppplVar35;
                    }
                    for (; pppppplVar12 != (long ******)0x0;
                        pppppplVar12 = (long ******)((long)pppppplVar12 + -1)) {
                      *pdVar18 = *pdVar18 * dVar40;
                      pdVar18 = pdVar18 + 1;
                    }
                    lVar20 = (long)pppppplVar35 - (long)pppppplVar16;
                    pppppplVar12 = (long ******)(lVar20 - (lVar20 >> 0x3f) & 0xfffffffffffffffe);
                    if (1 < lVar20) {
                      pdVar18 = (double *)(uVar26 + lVar28 + (long)pppppplVar16 * 8);
                      pppppplVar9 = pppppplVar16;
                      do {
                        pdVar18[1] = pdVar18[1] * dVar40;
                        *pdVar18 = *pdVar18 * dVar40;
                        pppppplVar9 = (long ******)((long)pppppplVar9 + 2);
                        pdVar18 = pdVar18 + 2;
                      } while ((long)pppppplVar9 < (long)pppppplVar12 + (long)pppppplVar16);
                    }
                    if ((long)((long)pppppplVar12 + (long)pppppplVar16) < (long)pppppplVar35) {
                      lVar17 = lVar20 % 2;
                      pdVar18 = (double *)
                                (uVar26 + lVar28 + (lVar20 / 2) * 0x10 + (long)pppppplVar16 * 8);
                      do {
                        *pdVar18 = *pdVar18 * dVar40;
                        lVar17 = lVar17 + -1;
                        pdVar18 = pdVar18 + 1;
                      } while (lVar17 != 0);
                    }
                  }
                  uVar30 = uVar30 + 1;
                  uVar33 = (ulong)*(uint *)(extraout_x8_00 + 2);
                  uVar29 = (ulong)(uint)((int)uVar29 + iVar24);
                } while (uVar30 < uVar33);
                uVar31 = *(uint *)((long)extraout_x8_00 + 0x14);
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < uVar31);
          }
        }
      }
LAB_109cdd2e0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
        return pppppplVar12;
      }
      ___stack_chk_fail();
      goto LAB_109cddca4;
    }
    if ((*(byte *)(extraout_x8_00 + 9) & 1) == 0) {
      iVar24 = *(int *)(extraout_x8_00 + 2) * *(int *)((long)extraout_x8_00 + 0x14) *
               *(int *)((long)extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 1);
    }
    else {
      iVar24 = 1;
      for (piVar25 = (int *)extraout_x8_00[6]; piVar25 != (int *)extraout_x8_00[7];
          piVar25 = piVar25 + 1) {
        iVar24 = *piVar25 * iVar24;
      }
    }
    puVar38 = (uint *)(extraout_x8_00 + 3);
    if (*puVar38 < 0xf) {
      iVar4 = *(int *)(&UNK_10e03e840 + (ulong)*puVar38 * 4);
      uStack_288 = (ulong)(uint)(iVar4 * iVar24);
      FUN_109cdb95c(&uStack_2d0,pppppplVar10[0x25],&uStack_288);
      _memcpy(uStack_2d0,extraout_x8_00[4],(ulong)(uint)(iVar4 * iVar24));
      uVar41 = uStack_2d0;
      if (*(char *)(extraout_x8_00 + 9) == '\x01') {
        uVar31 = *puVar38;
        uStack_2d0 = 0;
        uStack_310 = uStack_2c8;
        (**(code **)(CONCAT17(cStack_2b9,uStack_2c0) + 0x10))(apuStack_308,&uStack_2c0);
        auStack_318[1] = 4;
        uStack_288 = uStack_310;
        auStack_318[0] = uVar31;
        (*(code *)apuStack_308[0][2])(apuStack_280,apuStack_308);
        FUN_109cde3b8(auStack_328,uVar41,&uStack_288);
        func_0x0001099ae514(&ppppplStack_380,extraout_x8_00 + 6,auStack_318,auStack_328);
        if (plStack_320 != (long *)0x0) {
          plVar1 = plStack_320 + 1;
          do {
            lVar28 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar28 == 0) {
            (**(code **)(*plStack_320 + 0x10))(plStack_320);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_320);
          }
        }
        (*(code *)*apuStack_280[0])(apuStack_280);
        (*(code *)*apuStack_308[0])(apuStack_308);
      }
      else {
        FUN_109d0f52c(&ppppplStack_380,extraout_x8_00 + 1,puVar38,&uStack_2d0);
      }
      FUN_109cdc6dc(&uStack_2d0);
      extraout_x8_00[2] = uStack_370;
      extraout_x8_00[1] = uStack_378;
      extraout_x8_00[3] = uStack_368;
      func_0x0001093783c0(extraout_x8_00 + 4,auStack_360);
      func_0x00010937843c(extraout_x8_00 + 6,auStack_350);
      func_0x000105675c90(&ppppplStack_380);
      *(byte *)ppppplVar36 = 1;
      goto LAB_109cdd54c;
    }
  }
  else {
LAB_109cddca4:
    func_0x00010952d0c4(&UNK_10e03e6ac,&UNK_10f5a9369,&UNK_10f5a932c);
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
LAB_109cdddc4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109cdddc8);
  (*pcVar8)();
}



/* Entry: 109cdcfec; end: 109cdd1fb;  */

long ******
FUN_109cdcfec(long ******param_1,long ******param_2,long ******param_3,long *****param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long ******pppppplVar8;
  float *pfVar9;
  long ******pppppplVar10;
  ulong uVar11;
  double *pdVar12;
  undefined8 *puVar13;
  long ******pppppplVar14;
  long lVar15;
  double *pdVar16;
  ulong uVar17;
  long lVar18;
  long ******pppppplVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  undefined8 *extraout_x8;
  int *piVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  float *pfVar31;
  ulong uVar32;
  ulong uVar33;
  long ******pppppplVar34;
  long *****ppppplVar35;
  long *****ppppplVar36;
  uint *puVar37;
  float fVar38;
  double dVar39;
  undefined8 uVar40;
  double dVar41;
  undefined8 uVar42;
  long *****ppppplStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [32];
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  long *plStack_250;
  uint auStack_248 [2];
  ulong uStack_240;
  undefined8 *apuStack_238 [7];
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined7 uStack_1f0;
  char cStack_1e9;
  ulong uStack_1b8;
  undefined8 *apuStack_1b0 [7];
  long lStack_178;
  undefined1 uStack_119;
  long ****pppplStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  long *****appppplStack_b0 [2];
  char cStack_99;
  undefined1 auStack_98 [80];
  long lStack_48;
  
  pppppplVar8 = (long ******)&uStack_100;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar10 = param_2;
  pppppplVar34 = param_3;
  ppppplVar35 = param_4;
  FUN_109cdd1fc();
  if ((int)pppppplVar10 == 4) {
    pppppplVar8 = pppppplVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      param_1[1] = (long *****)0x0;
      *param_1 = (long *****)0x0;
      param_1[3] = (long *****)0x0;
      param_1[2] = (long *****)0x0;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
      func_0x00010937a3dc(param_1,param_3[1]);
      for (ppppplVar35 = param_3[2]; ppppplVar35 != (long *****)0x0;
          ppppplVar35 = (long *****)*ppppplVar35) {
        func_0x0001094c89d0(param_1,ppppplVar35 + 2,ppppplVar35 + 2);
      }
      return param_1;
    }
  }
  else {
    if (param_3[3] == (long *****)0x1) {
      ppppplVar35 = param_3[2];
      FUN_109cdd248(&uStack_100,param_2,ppppplVar35 + 5,param_4);
      func_0x0001094c86f8(appppplStack_b0,ppppplVar35 + 2,&uStack_100);
      pppppplVar34 = appppplStack_b0;
      ppppplVar35 = (long *****)0x1;
      func_0x0001094c8958(param_1);
      func_0x000105675c90(auStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(appppplStack_b0[0]);
      }
      func_0x000105675c90();
    }
    else {
      param_1[1] = (long *****)0x0;
      *param_1 = (long *****)0x0;
      param_1[3] = (long *****)0x0;
      param_1[2] = (long *****)0x0;
      *(undefined4 *)(param_1 + 4) = 0x3f800000;
      ppppplVar36 = param_3[2];
      pppppplVar8 = pppppplVar10;
      if (ppppplVar36 != (long *****)0x0) {
        bVar5 = true;
        do {
          pppppplVar34 = param_2;
          FUN_109cde1d4(param_2,ppppplVar36 + 2);
          ppppplVar35 = ppppplVar36 + 8;
          appppplStack_b0[0] = (long *****)pppppplVar34;
          FUN_109cddea4(ppppplVar35,appppplStack_b0);
          uStack_100 = ppppplVar35;
          FUN_109d0e828(appppplStack_b0,ppppplVar36 + 5,&uStack_100,param_2[0x25]);
          pppppplVar34 = (long ******)(ppppplVar36 + 2);
          ppppplVar35 = ppppplVar36 + 2;
          func_0x00010955c3e0(param_1,pppppplVar34,ppppplVar35,appppplStack_b0);
          pppppplVar8 = appppplStack_b0;
          func_0x000105675c90();
          if ((int)uStack_100 == *(int *)(ppppplVar36 + 8)) {
            bVar5 = (bool)(uStack_100._4_4_ != *(int *)((long)ppppplVar36 + 0x44) & bVar5);
          }
          ppppplVar36 = (long *****)*ppppplVar36;
        } while (ppppplVar36 != (long *****)0x0);
        if (!bVar5) goto LAB_109cdd178;
      }
      *(byte *)param_4 = 1;
    }
LAB_109cdd178:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pppppplVar8;
    }
  }
  ___stack_chk_fail();
  func_0x0001094c8180(appppplStack_b0);
  func_0x000105675c90(&uStack_100);
  __Unwind_Resume();
  pcStack_108 = FUN_109cdd1fc;
  puStack_110 = &stack0xfffffffffffffff0;
  if (*(uint *)(pppppplVar8 + 0x23) != 0xffffffff) {
    pppplStack_118 = (long ****)&uStack_119;
    pppppplVar34 = (long ******)&pppplStack_118;
    (*(code *)(&PTR_DAT_110b3cc08)[*(uint *)(pppppplVar8 + 0x23)])(pppppplVar34,pppppplVar8 + 0x17);
    return pppppplVar34;
  }
  func_0x0001092612e0();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar10 = pppppplVar8;
  FUN_109cdd1fc();
  if ((int)pppppplVar10 == 4) {
    *extraout_x8 = &PTR_DAT_1108a5c28;
    ppppplVar35 = pppppplVar34[1];
    extraout_x8[2] = pppppplVar34[2];
    extraout_x8[1] = ppppplVar35;
    extraout_x8[3] = pppppplVar34[3];
    ppppplVar35 = pppppplVar34[4];
    extraout_x8[5] = pppppplVar34[5];
    extraout_x8[4] = ppppplVar35;
    if (pppppplVar34[5] != (long *****)0x0) {
      ppppplVar35 = pppppplVar34[5] + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppplVar35,0x10);
        if (bVar5) {
          *ppppplVar35 = (long ****)((long)*ppppplVar35 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppppplVar10 = (long ******)(extraout_x8 + 6);
    func_0x000109407928(pppppplVar10,pppppplVar34 + 6);
    goto LAB_109cdd2e0;
  }
  if ((long)pppppplVar8[0x11] - (long)pppppplVar8[0x10] == 0x58) {
    pppppplVar10 = pppppplVar8;
    FUN_109cde1d4();
    pppppplVar14 = pppppplVar34 + 3;
    ppppplStack_2b0 = (long *****)pppppplVar10;
    FUN_109cddea4(pppppplVar14,&ppppplStack_2b0);
    pppppplVar10 = pppppplVar34;
    uStack_260 = pppppplVar14;
    FUN_109d0e828(extraout_x8,pppppplVar34,&uStack_260,pppppplVar8[0x25]);
    if (((int)uStack_260 != *(int *)(pppppplVar34 + 3)) ||
       (uStack_260._4_4_ != *(int *)((long)pppppplVar34 + 0x1c))) {
      *(byte *)ppppplVar35 = 1;
    }
    if (((*(byte *)((long)pppppplVar8 + 0x25) & 1) == 0) &&
       (*(char *)((long)pppppplVar8 + 0x24) != '\x01')) goto LAB_109cdd2e0;
    if (((ulong)*ppppplVar35 & 1) != 0) {
LAB_109cdd54c:
      if (*(int *)(extraout_x8 + 3) == 1) {
        if ((*(byte *)(extraout_x8 + 9) & 1) == 0) {
          uVar30 = *(int *)(extraout_x8 + 2) * *(int *)((long)extraout_x8 + 0x14) *
                   *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
        }
        else {
          uVar30 = 1;
          for (piVar24 = (int *)extraout_x8[6]; piVar24 != (int *)extraout_x8[7];
              piVar24 = piVar24 + 1) {
            uVar30 = *piVar24 * uVar30;
          }
        }
        uVar25 = extraout_x8[4];
        if ((*(char *)((long)pppppplVar8 + 0x24) == '\x01') &&
           ((ulong)*(uint *)(extraout_x8 + 2) != (long)pppppplVar8[2] - (long)pppppplVar8[1] >> 2))
        {
LAB_109cddd24:
          func_0x00010952d0c4(&UNK_10f5a9547,&UNK_10f5a9547,&UNK_10f5a9510);
          goto LAB_109cdddc4;
        }
        uVar26 = *(uint *)((long)extraout_x8 + 0x1c);
        pppppplVar10 = (long ******)(ulong)uVar26;
        if (uVar26 == 1) {
          uVar32 = 0;
          ppppplVar35 = pppppplVar8[1];
          ppppplVar36 = pppppplVar8[2];
          uVar26 = *(int *)(extraout_x8 + 1) * *(int *)(extraout_x8 + 2);
          uVar2 = 0;
          if (*(uint *)((long)extraout_x8 + 0x14) != 0) {
            uVar2 = uVar30 / *(uint *)((long)extraout_x8 + 0x14);
          }
          do {
            lVar27 = uVar25 + uVar32 * uVar2 * 4;
            uVar30 = *(uint *)((long)extraout_x8 + 0xc);
            if (*(char *)((long)pppppplVar8 + 0x24) == '\x01' && uVar26 != 0) {
              uVar29 = 0;
              pppppplVar10 = (long ******)pppppplVar8[1];
              lVar15 = 0;
              do {
                if (uVar30 != 0) {
                  lVar18 = 0;
                  fVar38 = *(float *)((long)pppppplVar10 + lVar15 * 4);
                  lVar21 = lVar27 + uVar29 * 4;
                  uVar28 = (ulong)uVar30;
                  do {
                    lVar20 = lVar18 * (ulong)uVar26;
                    *(float *)(lVar21 + lVar20 * 4) = *(float *)(lVar21 + lVar20 * 4) - fVar38;
                    lVar18 = lVar18 + 1;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
                lVar18 = 0;
                if (lVar15 + 1 != (long)ppppplVar36 - (long)ppppplVar35 >> 2) {
                  lVar18 = lVar15 + 1;
                }
                uVar29 = uVar29 + 1;
                lVar15 = lVar18;
              } while (uVar29 != uVar26);
            }
            if (*(char *)((long)pppppplVar8 + 0x25) == '\x01') {
              uVar28 = (ulong)uVar30 * (ulong)uVar26;
              uVar29 = uVar28;
              if (((uVar25 & 3) == 0) &&
                 (uVar29 = (ulong)-((uint)lVar27 >> 2) & 3, (long)uVar28 <= (long)uVar29)) {
                uVar29 = uVar28;
              }
              fVar38 = *(float *)(pppppplVar8 + 4);
              uVar11 = uVar28 - uVar29;
              uVar33 = uVar11 + 3;
              if ((long)uVar29 <= (long)uVar28) {
                uVar33 = uVar11;
              }
              if (0 < (long)uVar29) {
                lVar15 = 0;
                uVar17 = uVar29;
                do {
                  *(float *)(lVar27 + lVar15 * 4) = fVar38 * *(float *)(lVar27 + lVar15 * 4);
                  lVar15 = lVar15 + 1;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              pppppplVar10 = (long ******)((uVar33 & 0xfffffffffffffffc) + uVar29);
              if (3 < (long)uVar11) {
                do {
                  puVar13 = (undefined8 *)(lVar27 + uVar29 * 4);
                  uVar42 = puVar13[1];
                  uVar40 = *puVar13;
                  puVar13 = (undefined8 *)(lVar27 + uVar29 * 4);
                  puVar13[1] = CONCAT44((float)((ulong)uVar42 >> 0x20) * fVar38,
                                        (float)uVar42 * fVar38);
                  *puVar13 = CONCAT44((float)((ulong)uVar40 >> 0x20) * fVar38,(float)uVar40 * fVar38
                                     );
                  uVar29 = uVar29 + 4;
                } while ((long)uVar29 < (long)pppppplVar10);
              }
              if ((long)pppppplVar10 < (long)uVar28) {
                lVar15 = uVar11 - (uVar33 & 0xfffffffffffffffc);
                do {
                  *(float *)(lVar27 + (long)pppppplVar10 * 4) =
                       fVar38 * *(float *)(lVar27 + (long)pppppplVar10 * 4);
                  pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 < *(uint *)((long)extraout_x8 + 0x14));
        }
        else {
          if (uVar26 != 0) {
            __ZNSt3__19to_stringEi(&uStack_200);
            func_0x00010928a5e0(&ppppplStack_2b0,&UNK_10f5a9558,&uStack_200);
            if (cStack_1e9 < '\0') {
              __ZdlPv(uStack_200);
            }
            FUN_109cdc728(&UNK_10f5a9547,&UNK_10f5a9547,&ppppplStack_2b0);
            goto LAB_109cdddc4;
          }
          uVar30 = *(uint *)((long)extraout_x8 + 0x14);
          if (uVar30 != 0) {
            uVar26 = 0;
            iVar23 = *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
            uVar32 = (ulong)*(uint *)(extraout_x8 + 2);
            do {
              if ((int)uVar32 != 0) {
                uVar28 = 0;
                uVar29 = 0;
                do {
                  lVar27 = uVar28 * 4;
                  pfVar31 = (float *)(uVar25 + uVar28 * 4);
                  uVar32 = uVar25 + (ulong)(uint)(iVar23 * (int)uVar29) * 4;
                  uVar30 = *(uint *)(extraout_x8 + 1);
                  uVar2 = *(uint *)((long)extraout_x8 + 0xc);
                  if (*(char *)((long)pppppplVar8 + 0x24) == '\x01') {
                    fVar38 = *(float *)((long)pppppplVar8[1] + uVar29 * 4);
                    uVar11 = (ulong)uVar30 * (ulong)uVar2;
                    uVar33 = (ulong)-((uint)uVar32 >> 2) & 3;
                    if (uVar11 <= uVar33) {
                      uVar33 = uVar11;
                    }
                    uVar17 = uVar11;
                    if ((uVar32 & 3) == 0) {
                      uVar17 = uVar33;
                    }
                    uVar6 = uVar11 - uVar17;
                    pfVar9 = pfVar31;
                    uVar22 = uVar17;
                    uVar33 = uVar6 + 3;
                    if ((long)uVar17 <= (long)uVar11) {
                      uVar33 = uVar6;
                    }
                    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
                      *pfVar9 = *pfVar9 - fVar38;
                      pfVar9 = pfVar9 + 1;
                    }
                    lVar15 = (uVar33 & 0xfffffffffffffffc) + uVar17;
                    if (3 < (long)uVar6) {
                      puVar13 = (undefined8 *)(uVar25 + lVar27 + uVar17 * 4);
                      uVar22 = uVar17;
                      do {
                        puVar13[1] = CONCAT44((float)((ulong)puVar13[1] >> 0x20) - fVar38,
                                              (float)puVar13[1] - fVar38);
                        *puVar13 = CONCAT44((float)((ulong)*puVar13 >> 0x20) - fVar38,
                                            (float)*puVar13 - fVar38);
                        uVar22 = uVar22 + 4;
                        puVar13 = puVar13 + 2;
                      } while ((long)uVar22 < lVar15);
                    }
                    if (lVar15 < (long)uVar11) {
                      lVar15 = uVar6 - (uVar33 & 0xfffffffffffffffc);
                      pfVar9 = (float *)(uVar25 + lVar27 + ((long)uVar33 >> 2) * 0x10 + uVar17 * 4);
                      do {
                        *pfVar9 = *pfVar9 - fVar38;
                        lVar15 = lVar15 + -1;
                        pfVar9 = pfVar9 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  pppppplVar10 = (long ******)(ulong)*(byte *)((long)pppppplVar8 + 0x25);
                  if (*(byte *)((long)pppppplVar8 + 0x25) == 1) {
                    fVar38 = *(float *)(pppppplVar8 + 4);
                    uVar11 = (ulong)uVar30 * (ulong)uVar2;
                    uVar33 = (ulong)-((uint)uVar32 >> 2) & 3;
                    if (uVar11 <= uVar33) {
                      uVar33 = uVar11;
                    }
                    uVar17 = uVar11;
                    if ((uVar32 & 3) == 0) {
                      uVar17 = uVar33;
                    }
                    pppppplVar34 = (long ******)(uVar11 - uVar17);
                    uVar32 = uVar17;
                    pppppplVar10 = (long ******)((long)pppppplVar34 + 3);
                    if ((long)uVar17 <= (long)uVar11) {
                      pppppplVar10 = pppppplVar34;
                    }
                    for (; uVar32 != 0; uVar32 = uVar32 - 1) {
                      *pfVar31 = fVar38 * *pfVar31;
                      pfVar31 = pfVar31 + 1;
                    }
                    lVar15 = ((ulong)pppppplVar10 & 0xfffffffffffffffc) + uVar17;
                    if (3 < (long)pppppplVar34) {
                      puVar13 = (undefined8 *)(uVar25 + lVar27 + uVar17 * 4);
                      uVar32 = uVar17;
                      do {
                        puVar13[1] = CONCAT44((float)((ulong)puVar13[1] >> 0x20) * fVar38,
                                              (float)puVar13[1] * fVar38);
                        *puVar13 = CONCAT44((float)((ulong)*puVar13 >> 0x20) * fVar38,
                                            (float)*puVar13 * fVar38);
                        uVar32 = uVar32 + 4;
                        puVar13 = puVar13 + 2;
                      } while ((long)uVar32 < lVar15);
                    }
                    if (lVar15 < (long)uVar11) {
                      lVar15 = (long)pppppplVar34 - ((ulong)pppppplVar10 & 0xfffffffffffffffc);
                      pfVar31 = (float *)(uVar25 + lVar27 +
                                         ((long)pppppplVar10 >> 2) * 0x10 + uVar17 * 4);
                      do {
                        *pfVar31 = fVar38 * *pfVar31;
                        lVar15 = lVar15 + -1;
                        pfVar31 = pfVar31 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  uVar29 = uVar29 + 1;
                  uVar32 = (ulong)*(uint *)(extraout_x8 + 2);
                  uVar28 = (ulong)(uint)((int)uVar28 + iVar23);
                } while (uVar29 < uVar32);
                uVar30 = *(uint *)((long)extraout_x8 + 0x14);
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 < uVar30);
          }
        }
      }
      else {
        if (*(int *)(extraout_x8 + 3) != 2) {
          __ZNSt3__19to_stringEi(&uStack_200);
          func_0x00010928a5e0(&ppppplStack_2b0,&UNK_10f5a9374,&uStack_200);
          FUN_109cd45b4(&UNK_10e03e6ac,&UNK_10f5a9369,&ppppplStack_2b0);
          goto LAB_109cdddc4;
        }
        if ((*(byte *)(extraout_x8 + 9) & 1) == 0) {
          uVar30 = *(int *)(extraout_x8 + 2) * *(int *)((long)extraout_x8 + 0x14) *
                   *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
        }
        else {
          uVar30 = 1;
          for (piVar24 = (int *)extraout_x8[6]; piVar24 != (int *)extraout_x8[7];
              piVar24 = piVar24 + 1) {
            uVar30 = *piVar24 * uVar30;
          }
        }
        uVar25 = extraout_x8[4];
        if ((*(char *)((long)pppppplVar8 + 0x24) == '\x01') &&
           ((ulong)*(uint *)(extraout_x8 + 2) != (long)pppppplVar8[2] - (long)pppppplVar8[1] >> 2))
        goto LAB_109cddd24;
        uVar26 = *(uint *)((long)extraout_x8 + 0x1c);
        pppppplVar10 = (long ******)(ulong)uVar26;
        if (uVar26 == 1) {
          uVar32 = 0;
          ppppplVar35 = pppppplVar8[1];
          ppppplVar36 = pppppplVar8[2];
          uVar26 = *(int *)(extraout_x8 + 1) * *(int *)(extraout_x8 + 2);
          uVar2 = 0;
          if (*(uint *)((long)extraout_x8 + 0x14) != 0) {
            uVar2 = uVar30 / *(uint *)((long)extraout_x8 + 0x14);
          }
          do {
            uVar29 = uVar25 + uVar32 * uVar2 * 8;
            uVar30 = *(uint *)((long)extraout_x8 + 0xc);
            if (*(char *)((long)pppppplVar8 + 0x24) == '\x01' && uVar26 != 0) {
              uVar28 = 0;
              pppppplVar10 = (long ******)pppppplVar8[1];
              lVar27 = 0;
              do {
                if (uVar30 != 0) {
                  lVar15 = 0;
                  fVar38 = *(float *)((long)pppppplVar10 + lVar27 * 4);
                  lVar18 = uVar29 + uVar28 * 8;
                  uVar33 = (ulong)uVar30;
                  do {
                    lVar21 = lVar15 * (ulong)uVar26;
                    *(double *)(lVar18 + lVar21 * 8) =
                         *(double *)(lVar18 + lVar21 * 8) - (double)fVar38;
                    lVar15 = lVar15 + 1;
                    uVar33 = uVar33 - 1;
                  } while (uVar33 != 0);
                }
                lVar15 = 0;
                if (lVar27 + 1 != (long)ppppplVar36 - (long)ppppplVar35 >> 2) {
                  lVar15 = lVar27 + 1;
                }
                uVar28 = uVar28 + 1;
                lVar27 = lVar15;
              } while (uVar28 != uVar26);
            }
            if (*(char *)((long)pppppplVar8 + 0x25) == '\x01') {
              dVar39 = (double)*(float *)(pppppplVar8 + 4);
              uVar33 = (ulong)uVar30 * (ulong)uVar26;
              uVar28 = uVar29 >> 3 & 1;
              if ((long)uVar33 <= (long)uVar28) {
                uVar28 = uVar33;
              }
              if ((uVar25 & 7) != 0) {
                uVar28 = uVar33;
              }
              if (uVar28 != 0) {
                lVar27 = 0;
                uVar11 = uVar28;
                do {
                  *(double *)(uVar29 + lVar27 * 8) = *(double *)(uVar29 + lVar27 * 8) * dVar39;
                  lVar27 = lVar27 + 1;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              pppppplVar10 = (long ******)(uVar33 - uVar28);
              lVar27 = ((long)pppppplVar10 - ((long)pppppplVar10 >> 0x3f) & 0xfffffffffffffffeU) +
                       uVar28;
              if (1 < (long)pppppplVar10) {
                do {
                  pdVar16 = (double *)(uVar29 + uVar28 * 8);
                  dVar41 = *pdVar16;
                  pdVar12 = (double *)(uVar29 + uVar28 * 8);
                  pdVar12[1] = pdVar16[1] * dVar39;
                  *pdVar12 = dVar41 * dVar39;
                  uVar28 = uVar28 + 2;
                } while ((long)uVar28 < lVar27);
              }
              if (lVar27 < (long)uVar33) {
                lVar15 = (long)pppppplVar10 % 2;
                do {
                  *(double *)(uVar29 + lVar27 * 8) = *(double *)(uVar29 + lVar27 * 8) * dVar39;
                  lVar27 = lVar27 + 1;
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 < *(uint *)((long)extraout_x8 + 0x14));
        }
        else {
          if (uVar26 != 0) {
            __ZNSt3__19to_stringEi(&uStack_200);
            func_0x00010928a5e0(&ppppplStack_2b0,&UNK_10f5a9558,&uStack_200);
            if (cStack_1e9 < '\0') {
              __ZdlPv(uStack_200);
            }
            FUN_109cdc728(&UNK_10f5a9547,&UNK_10f5a9547,&ppppplStack_2b0);
            goto LAB_109cdddc4;
          }
          uVar30 = *(uint *)((long)extraout_x8 + 0x14);
          if (uVar30 != 0) {
            uVar26 = 0;
            iVar23 = *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
            uVar32 = (ulong)*(uint *)(extraout_x8 + 2);
            do {
              if ((int)uVar32 != 0) {
                uVar28 = 0;
                uVar29 = 0;
                do {
                  lVar27 = uVar28 * 8;
                  pdVar16 = (double *)(uVar25 + uVar28 * 8);
                  uVar32 = uVar25 + (ulong)(uint)(iVar23 * (int)uVar29) * 8;
                  uVar30 = *(uint *)(extraout_x8 + 1);
                  uVar2 = *(uint *)((long)extraout_x8 + 0xc);
                  pppppplVar10 = (long ******)(uVar32 >> 3 & 1);
                  if (*(char *)((long)pppppplVar8 + 0x24) == '\x01') {
                    dVar39 = (double)*(float *)((long)pppppplVar8[1] + uVar29 * 4);
                    pppppplVar14 = (long ******)((ulong)uVar30 * (ulong)uVar2);
                    pppppplVar34 = pppppplVar10;
                    if (pppppplVar14 <= pppppplVar10) {
                      pppppplVar34 = pppppplVar14;
                    }
                    pdVar12 = pdVar16;
                    pppppplVar19 = pppppplVar34;
                    if ((uVar32 & 7) != 0) {
                      pppppplVar34 = pppppplVar14;
                      pppppplVar19 = pppppplVar14;
                    }
                    for (; pppppplVar34 != (long ******)0x0;
                        pppppplVar34 = (long ******)((long)pppppplVar34 + -1)) {
                      *pdVar12 = *pdVar12 - dVar39;
                      pdVar12 = pdVar12 + 1;
                    }
                    lVar18 = (long)pppppplVar14 - (long)pppppplVar19;
                    lVar15 = (lVar18 - (lVar18 >> 0x3f) & 0xfffffffffffffffeU) + (long)pppppplVar19;
                    if (1 < lVar18) {
                      pdVar12 = (double *)(uVar25 + lVar27 + (long)pppppplVar19 * 8);
                      pppppplVar34 = pppppplVar19;
                      do {
                        pdVar12[1] = pdVar12[1] - dVar39;
                        *pdVar12 = *pdVar12 - dVar39;
                        pppppplVar34 = (long ******)((long)pppppplVar34 + 2);
                        pdVar12 = pdVar12 + 2;
                      } while ((long)pppppplVar34 < lVar15);
                    }
                    if (lVar15 < (long)pppppplVar14) {
                      lVar15 = lVar18 % 2;
                      pdVar12 = (double *)
                                (uVar25 + lVar27 + (lVar18 / 2) * 0x10 + (long)pppppplVar19 * 8);
                      do {
                        *pdVar12 = *pdVar12 - dVar39;
                        lVar15 = lVar15 + -1;
                        pdVar12 = pdVar12 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  if (*(char *)((long)pppppplVar8 + 0x25) == '\x01') {
                    dVar39 = (double)*(float *)(pppppplVar8 + 4);
                    pppppplVar34 = (long ******)((ulong)uVar30 * (ulong)uVar2);
                    if (pppppplVar34 <= pppppplVar10) {
                      pppppplVar10 = pppppplVar34;
                    }
                    pppppplVar14 = pppppplVar10;
                    if ((uVar32 & 7) != 0) {
                      pppppplVar10 = pppppplVar34;
                      pppppplVar14 = pppppplVar34;
                    }
                    for (; pppppplVar10 != (long ******)0x0;
                        pppppplVar10 = (long ******)((long)pppppplVar10 + -1)) {
                      *pdVar16 = *pdVar16 * dVar39;
                      pdVar16 = pdVar16 + 1;
                    }
                    lVar15 = (long)pppppplVar34 - (long)pppppplVar14;
                    pppppplVar10 = (long ******)(lVar15 - (lVar15 >> 0x3f) & 0xfffffffffffffffe);
                    if (1 < lVar15) {
                      pdVar16 = (double *)(uVar25 + lVar27 + (long)pppppplVar14 * 8);
                      pppppplVar19 = pppppplVar14;
                      do {
                        pdVar16[1] = pdVar16[1] * dVar39;
                        *pdVar16 = *pdVar16 * dVar39;
                        pppppplVar19 = (long ******)((long)pppppplVar19 + 2);
                        pdVar16 = pdVar16 + 2;
                      } while ((long)pppppplVar19 < (long)pppppplVar10 + (long)pppppplVar14);
                    }
                    if ((long)pppppplVar10 + (long)pppppplVar14 < (long)pppppplVar34) {
                      lVar18 = lVar15 % 2;
                      pdVar16 = (double *)
                                (uVar25 + lVar27 + (lVar15 / 2) * 0x10 + (long)pppppplVar14 * 8);
                      do {
                        *pdVar16 = *pdVar16 * dVar39;
                        lVar18 = lVar18 + -1;
                        pdVar16 = pdVar16 + 1;
                      } while (lVar18 != 0);
                    }
                  }
                  uVar29 = uVar29 + 1;
                  uVar32 = (ulong)*(uint *)(extraout_x8 + 2);
                  uVar28 = (ulong)(uint)((int)uVar28 + iVar23);
                } while (uVar29 < uVar32);
                uVar30 = *(uint *)((long)extraout_x8 + 0x14);
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 < uVar30);
          }
        }
      }
LAB_109cdd2e0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
        return pppppplVar10;
      }
      ___stack_chk_fail();
      goto LAB_109cddca4;
    }
    if ((*(byte *)(extraout_x8 + 9) & 1) == 0) {
      iVar23 = *(int *)(extraout_x8 + 2) * *(int *)((long)extraout_x8 + 0x14) *
               *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
    }
    else {
      iVar23 = 1;
      for (piVar24 = (int *)extraout_x8[6]; piVar24 != (int *)extraout_x8[7]; piVar24 = piVar24 + 1)
      {
        iVar23 = *piVar24 * iVar23;
      }
    }
    puVar37 = (uint *)(extraout_x8 + 3);
    if (*puVar37 < 0xf) {
      iVar3 = *(int *)(&UNK_10e03e840 + (ulong)*puVar37 * 4);
      uStack_1b8 = (ulong)(uint)(iVar3 * iVar23);
      FUN_109cdb95c(&uStack_200,pppppplVar8[0x25],&uStack_1b8);
      _memcpy(uStack_200,extraout_x8[4],(ulong)(uint)(iVar3 * iVar23));
      uVar40 = uStack_200;
      if (*(char *)(extraout_x8 + 9) == '\x01') {
        uVar30 = *puVar37;
        uStack_200 = 0;
        uStack_240 = uStack_1f8;
        (**(code **)(CONCAT17(cStack_1e9,uStack_1f0) + 0x10))(apuStack_238,&uStack_1f0);
        auStack_248[1] = 4;
        uStack_1b8 = uStack_240;
        auStack_248[0] = uVar30;
        (*(code *)apuStack_238[0][2])(apuStack_1b0,apuStack_238);
        FUN_109cde3b8(auStack_258,uVar40,&uStack_1b8);
        func_0x0001099ae514(&ppppplStack_2b0,extraout_x8 + 6,auStack_248,auStack_258);
        if (plStack_250 != (long *)0x0) {
          plVar1 = plStack_250 + 1;
          do {
            lVar27 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar27 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar27 == 0) {
            (**(code **)(*plStack_250 + 0x10))(plStack_250);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_250);
          }
        }
        (*(code *)*apuStack_1b0[0])(apuStack_1b0);
        (*(code *)*apuStack_238[0])(apuStack_238);
      }
      else {
        FUN_109d0f52c(&ppppplStack_2b0,extraout_x8 + 1,puVar37,&uStack_200);
      }
      FUN_109cdc6dc(&uStack_200);
      extraout_x8[2] = uStack_2a0;
      extraout_x8[1] = uStack_2a8;
      extraout_x8[3] = uStack_298;
      func_0x0001093783c0(extraout_x8 + 4,auStack_290);
      func_0x00010937843c(extraout_x8 + 6,auStack_280);
      func_0x000105675c90(&ppppplStack_2b0);
      *(byte *)ppppplVar35 = 1;
      goto LAB_109cdd54c;
    }
  }
  else {
LAB_109cddca4:
    func_0x00010952d0c4(&UNK_10e03e6ac,&UNK_10f5a9369,&UNK_10f5a932c);
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
LAB_109cdddc4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109cdddc8);
  (*pcVar7)();
}



/* Entry: 109cdd1fc; end: 109cdd247;  */

void FUN_109cdd1fc(long param_1,long param_2,byte *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  double *pdVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  undefined8 *extraout_x8;
  int *piVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  float *pfVar30;
  ulong uVar31;
  ulong uVar32;
  uint *puVar33;
  float fVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  long *plStack_150;
  uint auStack_148 [2];
  ulong uStack_140;
  undefined8 *apuStack_138 [7];
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined7 uStack_f0;
  char cStack_e9;
  ulong uStack_b8;
  undefined8 *apuStack_b0 [7];
  long lStack_78;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  if (*(uint *)(param_1 + 0x118) != 0xffffffff) {
    puStack_18 = &uStack_19;
    (*(code *)(&PTR_DAT_110b3cc08)[*(uint *)(param_1 + 0x118)])(&puStack_18,param_1 + 0xb8);
    return;
  }
  func_0x0001092612e0();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = param_1;
  FUN_109cdd1fc();
  if ((int)lVar26 == 4) {
    *extraout_x8 = &PTR_DAT_1108a5c28;
    uVar35 = *(undefined8 *)(param_2 + 8);
    extraout_x8[2] = *(undefined8 *)(param_2 + 0x10);
    extraout_x8[1] = uVar35;
    extraout_x8[3] = *(undefined8 *)(param_2 + 0x18);
    uVar35 = *(undefined8 *)(param_2 + 0x20);
    extraout_x8[5] = *(undefined8 *)(param_2 + 0x28);
    extraout_x8[4] = uVar35;
    if (*(long *)(param_2 + 0x28) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x28) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x000109407928(extraout_x8 + 6,param_2 + 0x30);
    goto LAB_109cdd2e0;
  }
  if (*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) == 0x58) {
    lVar15 = param_1;
    FUN_109cde1d4();
    lVar26 = param_2 + 0x18;
    lStack_1b0 = lVar15;
    FUN_109cddea4(lVar26,&lStack_1b0);
    uStack_160 = lVar26;
    FUN_109d0e828(extraout_x8,param_2,&uStack_160,*(undefined8 *)(param_1 + 0x128));
    if (((int)uStack_160 != *(int *)(param_2 + 0x18)) ||
       (uStack_160._4_4_ != *(int *)(param_2 + 0x1c))) {
      *param_3 = 1;
    }
    if (((*(byte *)(param_1 + 0x25) & 1) == 0) && (*(char *)(param_1 + 0x24) != '\x01'))
    goto LAB_109cdd2e0;
    if ((*param_3 & 1) != 0) {
LAB_109cdd54c:
      if (*(int *)(extraout_x8 + 3) == 1) {
        if ((*(byte *)(extraout_x8 + 9) & 1) == 0) {
          uVar29 = *(int *)(extraout_x8 + 2) * *(int *)((long)extraout_x8 + 0x14) *
                   *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
        }
        else {
          uVar29 = 1;
          for (piVar23 = (int *)extraout_x8[6]; piVar23 != (int *)extraout_x8[7];
              piVar23 = piVar23 + 1) {
            uVar29 = *piVar23 * uVar29;
          }
        }
        uVar24 = extraout_x8[4];
        if ((*(char *)(param_1 + 0x24) == '\x01') &&
           ((ulong)*(uint *)(extraout_x8 + 2) !=
            *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2)) {
LAB_109cddd24:
          func_0x00010952d0c4(&UNK_10f5a9547,&UNK_10f5a9547,&UNK_10f5a9510);
          goto LAB_109cdddc4;
        }
        if (*(int *)((long)extraout_x8 + 0x1c) == 1) {
          uVar31 = 0;
          lVar26 = *(long *)(param_1 + 8);
          lVar15 = *(long *)(param_1 + 0x10);
          uVar25 = *(int *)(extraout_x8 + 1) * *(int *)(extraout_x8 + 2);
          uVar2 = 0;
          if (*(uint *)((long)extraout_x8 + 0x14) != 0) {
            uVar2 = uVar29 / *(uint *)((long)extraout_x8 + 0x14);
          }
          do {
            lVar18 = uVar24 + uVar31 * uVar2 * 4;
            uVar29 = *(uint *)((long)extraout_x8 + 0xc);
            if (*(char *)(param_1 + 0x24) == '\x01' && uVar25 != 0) {
              uVar28 = 0;
              lVar12 = *(long *)(param_1 + 8);
              lVar9 = 0;
              do {
                if (uVar29 != 0) {
                  lVar11 = 0;
                  fVar34 = *(float *)(lVar12 + lVar9 * 4);
                  lVar20 = lVar18 + uVar28 * 4;
                  uVar27 = (ulong)uVar29;
                  do {
                    lVar19 = lVar11 * (ulong)uVar25;
                    *(float *)(lVar20 + lVar19 * 4) = *(float *)(lVar20 + lVar19 * 4) - fVar34;
                    lVar11 = lVar11 + 1;
                    uVar27 = uVar27 - 1;
                  } while (uVar27 != 0);
                }
                lVar11 = 0;
                if (lVar9 + 1 != lVar15 - lVar26 >> 2) {
                  lVar11 = lVar9 + 1;
                }
                uVar28 = uVar28 + 1;
                lVar9 = lVar11;
              } while (uVar28 != uVar25);
            }
            if (*(char *)(param_1 + 0x25) == '\x01') {
              uVar27 = (ulong)uVar29 * (ulong)uVar25;
              uVar28 = uVar27;
              if (((uVar24 & 3) == 0) &&
                 (uVar28 = (ulong)-((uint)lVar18 >> 2) & 3, (long)uVar27 <= (long)uVar28)) {
                uVar28 = uVar27;
              }
              fVar34 = *(float *)(param_1 + 0x20);
              uVar32 = uVar27 - uVar28;
              uVar8 = uVar32 + 3;
              if ((long)uVar28 <= (long)uVar27) {
                uVar8 = uVar32;
              }
              if (0 < (long)uVar28) {
                lVar9 = 0;
                uVar14 = uVar28;
                do {
                  *(float *)(lVar18 + lVar9 * 4) = fVar34 * *(float *)(lVar18 + lVar9 * 4);
                  lVar9 = lVar9 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar28;
              if (3 < (long)uVar32) {
                do {
                  puVar13 = (undefined8 *)(lVar18 + uVar28 * 4);
                  uVar38 = puVar13[1];
                  uVar35 = *puVar13;
                  puVar13 = (undefined8 *)(lVar18 + uVar28 * 4);
                  puVar13[1] = CONCAT44((float)((ulong)uVar38 >> 0x20) * fVar34,
                                        (float)uVar38 * fVar34);
                  *puVar13 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar34,(float)uVar35 * fVar34
                                     );
                  uVar28 = uVar28 + 4;
                } while ((long)uVar28 < lVar9);
              }
              if (lVar9 < (long)uVar27) {
                lVar12 = uVar32 - (uVar8 & 0xfffffffffffffffc);
                do {
                  *(float *)(lVar18 + lVar9 * 4) = fVar34 * *(float *)(lVar18 + lVar9 * 4);
                  lVar9 = lVar9 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < *(uint *)((long)extraout_x8 + 0x14));
        }
        else {
          if (*(int *)((long)extraout_x8 + 0x1c) != 0) {
            __ZNSt3__19to_stringEi(&uStack_100);
            func_0x00010928a5e0(&lStack_1b0,&UNK_10f5a9558,&uStack_100);
            if (cStack_e9 < '\0') {
              __ZdlPv(uStack_100);
            }
            FUN_109cdc728(&UNK_10f5a9547,&UNK_10f5a9547,&lStack_1b0);
            goto LAB_109cdddc4;
          }
          uVar29 = *(uint *)((long)extraout_x8 + 0x14);
          if (uVar29 != 0) {
            uVar25 = 0;
            iVar22 = *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
            uVar31 = (ulong)*(uint *)(extraout_x8 + 2);
            do {
              if ((int)uVar31 != 0) {
                uVar27 = 0;
                uVar28 = 0;
                do {
                  lVar26 = uVar27 * 4;
                  pfVar30 = (float *)(uVar24 + uVar27 * 4);
                  uVar31 = uVar24 + (ulong)(uint)(iVar22 * (int)uVar28) * 4;
                  uVar29 = *(uint *)(extraout_x8 + 1);
                  uVar2 = *(uint *)((long)extraout_x8 + 0xc);
                  if (*(char *)(param_1 + 0x24) == '\x01') {
                    fVar34 = *(float *)(*(long *)(param_1 + 8) + uVar28 * 4);
                    uVar32 = (ulong)uVar29 * (ulong)uVar2;
                    uVar8 = (ulong)-((uint)uVar31 >> 2) & 3;
                    if (uVar32 <= uVar8) {
                      uVar8 = uVar32;
                    }
                    uVar14 = uVar32;
                    if ((uVar31 & 3) == 0) {
                      uVar14 = uVar8;
                    }
                    uVar17 = uVar32 - uVar14;
                    pfVar7 = pfVar30;
                    uVar21 = uVar14;
                    uVar8 = uVar17 + 3;
                    if ((long)uVar14 <= (long)uVar32) {
                      uVar8 = uVar17;
                    }
                    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                      *pfVar7 = *pfVar7 - fVar34;
                      pfVar7 = pfVar7 + 1;
                    }
                    lVar15 = (uVar8 & 0xfffffffffffffffc) + uVar14;
                    if (3 < (long)uVar17) {
                      puVar13 = (undefined8 *)(uVar24 + lVar26 + uVar14 * 4);
                      uVar21 = uVar14;
                      do {
                        puVar13[1] = CONCAT44((float)((ulong)puVar13[1] >> 0x20) - fVar34,
                                              (float)puVar13[1] - fVar34);
                        *puVar13 = CONCAT44((float)((ulong)*puVar13 >> 0x20) - fVar34,
                                            (float)*puVar13 - fVar34);
                        uVar21 = uVar21 + 4;
                        puVar13 = puVar13 + 2;
                      } while ((long)uVar21 < lVar15);
                    }
                    if (lVar15 < (long)uVar32) {
                      lVar15 = uVar17 - (uVar8 & 0xfffffffffffffffc);
                      pfVar7 = (float *)(uVar24 + lVar26 + ((long)uVar8 >> 2) * 0x10 + uVar14 * 4);
                      do {
                        *pfVar7 = *pfVar7 - fVar34;
                        lVar15 = lVar15 + -1;
                        pfVar7 = pfVar7 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  if (*(char *)(param_1 + 0x25) == '\x01') {
                    fVar34 = *(float *)(param_1 + 0x20);
                    uVar32 = (ulong)uVar29 * (ulong)uVar2;
                    uVar8 = (ulong)-((uint)uVar31 >> 2) & 3;
                    if (uVar32 <= uVar8) {
                      uVar8 = uVar32;
                    }
                    uVar14 = uVar32;
                    if ((uVar31 & 3) == 0) {
                      uVar14 = uVar8;
                    }
                    uVar8 = uVar32 - uVar14;
                    uVar17 = uVar14;
                    uVar31 = uVar8 + 3;
                    if ((long)uVar14 <= (long)uVar32) {
                      uVar31 = uVar8;
                    }
                    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                      *pfVar30 = fVar34 * *pfVar30;
                      pfVar30 = pfVar30 + 1;
                    }
                    lVar15 = (uVar31 & 0xfffffffffffffffc) + uVar14;
                    if (3 < (long)uVar8) {
                      puVar13 = (undefined8 *)(uVar24 + lVar26 + uVar14 * 4);
                      uVar17 = uVar14;
                      do {
                        puVar13[1] = CONCAT44((float)((ulong)puVar13[1] >> 0x20) * fVar34,
                                              (float)puVar13[1] * fVar34);
                        *puVar13 = CONCAT44((float)((ulong)*puVar13 >> 0x20) * fVar34,
                                            (float)*puVar13 * fVar34);
                        uVar17 = uVar17 + 4;
                        puVar13 = puVar13 + 2;
                      } while ((long)uVar17 < lVar15);
                    }
                    if (lVar15 < (long)uVar32) {
                      lVar15 = uVar8 - (uVar31 & 0xfffffffffffffffc);
                      pfVar30 = (float *)(uVar24 + lVar26 + ((long)uVar31 >> 2) * 0x10 + uVar14 * 4)
                      ;
                      do {
                        *pfVar30 = fVar34 * *pfVar30;
                        lVar15 = lVar15 + -1;
                        pfVar30 = pfVar30 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  uVar28 = uVar28 + 1;
                  uVar31 = (ulong)*(uint *)(extraout_x8 + 2);
                  uVar27 = (ulong)(uint)((int)uVar27 + iVar22);
                } while (uVar28 < uVar31);
                uVar29 = *(uint *)((long)extraout_x8 + 0x14);
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar29);
          }
        }
      }
      else {
        if (*(int *)(extraout_x8 + 3) != 2) {
          __ZNSt3__19to_stringEi(&uStack_100);
          func_0x00010928a5e0(&lStack_1b0,&UNK_10f5a9374,&uStack_100);
          FUN_109cd45b4(&UNK_10e03e6ac,&UNK_10f5a9369,&lStack_1b0);
          goto LAB_109cdddc4;
        }
        if ((*(byte *)(extraout_x8 + 9) & 1) == 0) {
          uVar29 = *(int *)(extraout_x8 + 2) * *(int *)((long)extraout_x8 + 0x14) *
                   *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
        }
        else {
          uVar29 = 1;
          for (piVar23 = (int *)extraout_x8[6]; piVar23 != (int *)extraout_x8[7];
              piVar23 = piVar23 + 1) {
            uVar29 = *piVar23 * uVar29;
          }
        }
        uVar24 = extraout_x8[4];
        if ((*(char *)(param_1 + 0x24) == '\x01') &&
           ((ulong)*(uint *)(extraout_x8 + 2) !=
            *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2)) goto LAB_109cddd24;
        if (*(int *)((long)extraout_x8 + 0x1c) == 1) {
          uVar31 = 0;
          lVar26 = *(long *)(param_1 + 8);
          lVar15 = *(long *)(param_1 + 0x10);
          uVar25 = *(int *)(extraout_x8 + 1) * *(int *)(extraout_x8 + 2);
          uVar2 = 0;
          if (*(uint *)((long)extraout_x8 + 0x14) != 0) {
            uVar2 = uVar29 / *(uint *)((long)extraout_x8 + 0x14);
          }
          do {
            uVar28 = uVar24 + uVar31 * uVar2 * 8;
            uVar29 = *(uint *)((long)extraout_x8 + 0xc);
            if (*(char *)(param_1 + 0x24) == '\x01' && uVar25 != 0) {
              uVar27 = 0;
              lVar9 = *(long *)(param_1 + 8);
              lVar18 = 0;
              do {
                if (uVar29 != 0) {
                  lVar12 = 0;
                  fVar34 = *(float *)(lVar9 + lVar18 * 4);
                  lVar11 = uVar28 + uVar27 * 8;
                  uVar8 = (ulong)uVar29;
                  do {
                    lVar20 = lVar12 * (ulong)uVar25;
                    *(double *)(lVar11 + lVar20 * 8) =
                         *(double *)(lVar11 + lVar20 * 8) - (double)fVar34;
                    lVar12 = lVar12 + 1;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                lVar12 = 0;
                if (lVar18 + 1 != lVar15 - lVar26 >> 2) {
                  lVar12 = lVar18 + 1;
                }
                uVar27 = uVar27 + 1;
                lVar18 = lVar12;
              } while (uVar27 != uVar25);
            }
            if (*(char *)(param_1 + 0x25) == '\x01') {
              dVar36 = (double)*(float *)(param_1 + 0x20);
              uVar8 = (ulong)uVar29 * (ulong)uVar25;
              uVar27 = uVar28 >> 3 & 1;
              if ((long)uVar8 <= (long)uVar27) {
                uVar27 = uVar8;
              }
              if ((uVar24 & 7) != 0) {
                uVar27 = uVar8;
              }
              if (uVar27 != 0) {
                lVar18 = 0;
                uVar32 = uVar27;
                do {
                  *(double *)(uVar28 + lVar18 * 8) = *(double *)(uVar28 + lVar18 * 8) * dVar36;
                  lVar18 = lVar18 + 1;
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
              lVar9 = uVar8 - uVar27;
              lVar18 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + uVar27;
              if (1 < lVar9) {
                do {
                  pdVar16 = (double *)(uVar28 + uVar27 * 8);
                  dVar37 = *pdVar16;
                  pdVar10 = (double *)(uVar28 + uVar27 * 8);
                  pdVar10[1] = pdVar16[1] * dVar36;
                  *pdVar10 = dVar37 * dVar36;
                  uVar27 = uVar27 + 2;
                } while ((long)uVar27 < lVar18);
              }
              if (lVar18 < (long)uVar8) {
                lVar9 = lVar9 % 2;
                do {
                  *(double *)(uVar28 + lVar18 * 8) = *(double *)(uVar28 + lVar18 * 8) * dVar36;
                  lVar18 = lVar18 + 1;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < *(uint *)((long)extraout_x8 + 0x14));
        }
        else {
          if (*(int *)((long)extraout_x8 + 0x1c) != 0) {
            __ZNSt3__19to_stringEi(&uStack_100);
            func_0x00010928a5e0(&lStack_1b0,&UNK_10f5a9558,&uStack_100);
            if (cStack_e9 < '\0') {
              __ZdlPv(uStack_100);
            }
            FUN_109cdc728(&UNK_10f5a9547,&UNK_10f5a9547,&lStack_1b0);
            goto LAB_109cdddc4;
          }
          uVar29 = *(uint *)((long)extraout_x8 + 0x14);
          if (uVar29 != 0) {
            uVar25 = 0;
            iVar22 = *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
            uVar31 = (ulong)*(uint *)(extraout_x8 + 2);
            do {
              if ((int)uVar31 != 0) {
                uVar27 = 0;
                uVar28 = 0;
                do {
                  lVar26 = uVar27 * 8;
                  pdVar16 = (double *)(uVar24 + uVar27 * 8);
                  uVar31 = uVar24 + (ulong)(uint)(iVar22 * (int)uVar28) * 8;
                  uVar29 = *(uint *)(extraout_x8 + 1);
                  uVar2 = *(uint *)((long)extraout_x8 + 0xc);
                  uVar8 = uVar31 >> 3 & 1;
                  if (*(char *)(param_1 + 0x24) == '\x01') {
                    dVar36 = (double)*(float *)(*(long *)(param_1 + 8) + uVar28 * 4);
                    uVar14 = (ulong)uVar29 * (ulong)uVar2;
                    uVar32 = uVar8;
                    if (uVar14 <= uVar8) {
                      uVar32 = uVar14;
                    }
                    pdVar10 = pdVar16;
                    uVar17 = uVar32;
                    if ((uVar31 & 7) != 0) {
                      uVar32 = uVar14;
                      uVar17 = uVar14;
                    }
                    for (; uVar32 != 0; uVar32 = uVar32 - 1) {
                      *pdVar10 = *pdVar10 - dVar36;
                      pdVar10 = pdVar10 + 1;
                    }
                    lVar18 = uVar14 - uVar17;
                    lVar15 = (lVar18 - (lVar18 >> 0x3f) & 0xfffffffffffffffeU) + uVar17;
                    if (1 < lVar18) {
                      pdVar10 = (double *)(uVar24 + lVar26 + uVar17 * 8);
                      uVar32 = uVar17;
                      do {
                        pdVar10[1] = pdVar10[1] - dVar36;
                        *pdVar10 = *pdVar10 - dVar36;
                        uVar32 = uVar32 + 2;
                        pdVar10 = pdVar10 + 2;
                      } while ((long)uVar32 < lVar15);
                    }
                    if (lVar15 < (long)uVar14) {
                      lVar15 = lVar18 % 2;
                      pdVar10 = (double *)(uVar24 + lVar26 + (lVar18 / 2) * 0x10 + uVar17 * 8);
                      do {
                        *pdVar10 = *pdVar10 - dVar36;
                        lVar15 = lVar15 + -1;
                        pdVar10 = pdVar10 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  if (*(char *)(param_1 + 0x25) == '\x01') {
                    dVar36 = (double)*(float *)(param_1 + 0x20);
                    uVar32 = (ulong)uVar29 * (ulong)uVar2;
                    if (uVar32 <= uVar8) {
                      uVar8 = uVar32;
                    }
                    uVar14 = uVar8;
                    if ((uVar31 & 7) != 0) {
                      uVar8 = uVar32;
                      uVar14 = uVar32;
                    }
                    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *pdVar16 = *pdVar16 * dVar36;
                      pdVar16 = pdVar16 + 1;
                    }
                    lVar18 = uVar32 - uVar14;
                    lVar15 = (lVar18 - (lVar18 >> 0x3f) & 0xfffffffffffffffeU) + uVar14;
                    if (1 < lVar18) {
                      pdVar16 = (double *)(uVar24 + lVar26 + uVar14 * 8);
                      uVar31 = uVar14;
                      do {
                        pdVar16[1] = pdVar16[1] * dVar36;
                        *pdVar16 = *pdVar16 * dVar36;
                        uVar31 = uVar31 + 2;
                        pdVar16 = pdVar16 + 2;
                      } while ((long)uVar31 < lVar15);
                    }
                    if (lVar15 < (long)uVar32) {
                      lVar15 = lVar18 % 2;
                      pdVar16 = (double *)(uVar24 + lVar26 + (lVar18 / 2) * 0x10 + uVar14 * 8);
                      do {
                        *pdVar16 = *pdVar16 * dVar36;
                        lVar15 = lVar15 + -1;
                        pdVar16 = pdVar16 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  uVar28 = uVar28 + 1;
                  uVar31 = (ulong)*(uint *)(extraout_x8 + 2);
                  uVar27 = (ulong)(uint)((int)uVar27 + iVar22);
                } while (uVar28 < uVar31);
                uVar29 = *(uint *)((long)extraout_x8 + 0x14);
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar29);
          }
        }
      }
LAB_109cdd2e0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
      ___stack_chk_fail();
      goto LAB_109cddca4;
    }
    if ((*(byte *)(extraout_x8 + 9) & 1) == 0) {
      iVar22 = *(int *)(extraout_x8 + 2) * *(int *)((long)extraout_x8 + 0x14) *
               *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
    }
    else {
      iVar22 = 1;
      for (piVar23 = (int *)extraout_x8[6]; piVar23 != (int *)extraout_x8[7]; piVar23 = piVar23 + 1)
      {
        iVar22 = *piVar23 * iVar22;
      }
    }
    puVar33 = (uint *)(extraout_x8 + 3);
    if (*puVar33 < 0xf) {
      iVar3 = *(int *)(&UNK_10e03e840 + (ulong)*puVar33 * 4);
      uStack_b8 = (ulong)(uint)(iVar3 * iVar22);
      FUN_109cdb95c(&uStack_100,*(undefined8 *)(param_1 + 0x128),&uStack_b8);
      _memcpy(uStack_100,extraout_x8[4],(ulong)(uint)(iVar3 * iVar22));
      uVar35 = uStack_100;
      if (*(char *)(extraout_x8 + 9) == '\x01') {
        uVar29 = *puVar33;
        uStack_100 = 0;
        uStack_140 = uStack_f8;
        (**(code **)(CONCAT17(cStack_e9,uStack_f0) + 0x10))(apuStack_138,&uStack_f0);
        auStack_148[1] = 4;
        uStack_b8 = uStack_140;
        auStack_148[0] = uVar29;
        (*(code *)apuStack_138[0][2])(apuStack_b0,apuStack_138);
        FUN_109cde3b8(auStack_158,uVar35,&uStack_b8);
        func_0x0001099ae514(&lStack_1b0,extraout_x8 + 6,auStack_148,auStack_158);
        if (plStack_150 != (long *)0x0) {
          plVar1 = plStack_150 + 1;
          do {
            lVar26 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plStack_150 + 0x10))(plStack_150);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
          }
        }
        (*(code *)*apuStack_b0[0])(apuStack_b0);
        (*(code *)*apuStack_138[0])(apuStack_138);
      }
      else {
        FUN_109d0f52c(&lStack_1b0,extraout_x8 + 1,puVar33,&uStack_100);
      }
      FUN_109cdc6dc(&uStack_100);
      extraout_x8[2] = uStack_1a0;
      extraout_x8[1] = uStack_1a8;
      extraout_x8[3] = uStack_198;
      func_0x0001093783c0(extraout_x8 + 4,auStack_190);
      func_0x00010937843c(extraout_x8 + 6,auStack_180);
      func_0x000105675c90(&lStack_1b0);
      *param_3 = 1;
      goto LAB_109cdd54c;
    }
  }
  else {
LAB_109cddca4:
    func_0x00010952d0c4(&UNK_10e03e6ac,&UNK_10f5a9369,&UNK_10f5a932c);
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
LAB_109cdddc4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109cdddc8);
  (*pcVar6)();
}



/* Entry: 109cdd248; end: 109cddea3;  */

void FUN_109cdd248(undefined8 *param_1,long param_2,long param_3,byte *param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  double *pdVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  int *piVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  float *pfVar30;
  ulong uVar31;
  ulong uVar32;
  uint *puVar33;
  float fVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [32];
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  long *plStack_130;
  uint auStack_128 [2];
  ulong uStack_120;
  undefined8 *apuStack_118 [7];
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined7 uStack_d0;
  char cStack_c9;
  ulong uStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = param_2;
  FUN_109cdd1fc();
  if ((int)lVar26 == 4) {
    *param_1 = &PTR_DAT_1108a5c28;
    uVar35 = *(undefined8 *)(param_3 + 8);
    param_1[2] = *(undefined8 *)(param_3 + 0x10);
    param_1[1] = uVar35;
    param_1[3] = *(undefined8 *)(param_3 + 0x18);
    uVar35 = *(undefined8 *)(param_3 + 0x20);
    param_1[5] = *(undefined8 *)(param_3 + 0x28);
    param_1[4] = uVar35;
    if (*(long *)(param_3 + 0x28) != 0) {
      plVar1 = (long *)(*(long *)(param_3 + 0x28) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x000109407928(param_1 + 6,param_3 + 0x30);
    goto LAB_109cdd2e0;
  }
  if (*(long *)(param_2 + 0x88) - *(long *)(param_2 + 0x80) == 0x58) {
    lVar15 = param_2;
    FUN_109cde1d4();
    lVar26 = param_3 + 0x18;
    lStack_190 = lVar15;
    FUN_109cddea4(lVar26,&lStack_190);
    uStack_140 = lVar26;
    FUN_109d0e828(param_1,param_3,&uStack_140,*(undefined8 *)(param_2 + 0x128));
    if (((int)uStack_140 != *(int *)(param_3 + 0x18)) ||
       (uStack_140._4_4_ != *(int *)(param_3 + 0x1c))) {
      *param_4 = 1;
    }
    if (((*(byte *)(param_2 + 0x25) & 1) == 0) && (*(char *)(param_2 + 0x24) != '\x01'))
    goto LAB_109cdd2e0;
    if ((*param_4 & 1) != 0) {
LAB_109cdd54c:
      if (*(int *)(param_1 + 3) == 1) {
        if ((*(byte *)(param_1 + 9) & 1) == 0) {
          uVar29 = *(int *)(param_1 + 2) * *(int *)((long)param_1 + 0x14) *
                   *(int *)((long)param_1 + 0xc) * *(int *)(param_1 + 1);
        }
        else {
          uVar29 = 1;
          for (piVar23 = (int *)param_1[6]; piVar23 != (int *)param_1[7]; piVar23 = piVar23 + 1) {
            uVar29 = *piVar23 * uVar29;
          }
        }
        uVar24 = param_1[4];
        if ((*(char *)(param_2 + 0x24) == '\x01') &&
           ((ulong)*(uint *)(param_1 + 2) != *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2
           )) {
LAB_109cddd24:
          func_0x00010952d0c4(&UNK_10f5a9547,&UNK_10f5a9547,&UNK_10f5a9510);
          goto LAB_109cdddc4;
        }
        if (*(int *)((long)param_1 + 0x1c) == 1) {
          uVar31 = 0;
          lVar26 = *(long *)(param_2 + 8);
          lVar15 = *(long *)(param_2 + 0x10);
          uVar25 = *(int *)(param_1 + 1) * *(int *)(param_1 + 2);
          uVar2 = 0;
          if (*(uint *)((long)param_1 + 0x14) != 0) {
            uVar2 = uVar29 / *(uint *)((long)param_1 + 0x14);
          }
          do {
            lVar18 = uVar24 + uVar31 * uVar2 * 4;
            uVar29 = *(uint *)((long)param_1 + 0xc);
            if (*(char *)(param_2 + 0x24) == '\x01' && uVar25 != 0) {
              uVar28 = 0;
              lVar12 = *(long *)(param_2 + 8);
              lVar9 = 0;
              do {
                if (uVar29 != 0) {
                  lVar11 = 0;
                  fVar34 = *(float *)(lVar12 + lVar9 * 4);
                  lVar20 = lVar18 + uVar28 * 4;
                  uVar27 = (ulong)uVar29;
                  do {
                    lVar19 = lVar11 * (ulong)uVar25;
                    *(float *)(lVar20 + lVar19 * 4) = *(float *)(lVar20 + lVar19 * 4) - fVar34;
                    lVar11 = lVar11 + 1;
                    uVar27 = uVar27 - 1;
                  } while (uVar27 != 0);
                }
                lVar11 = 0;
                if (lVar9 + 1 != lVar15 - lVar26 >> 2) {
                  lVar11 = lVar9 + 1;
                }
                uVar28 = uVar28 + 1;
                lVar9 = lVar11;
              } while (uVar28 != uVar25);
            }
            if (*(char *)(param_2 + 0x25) == '\x01') {
              uVar27 = (ulong)uVar29 * (ulong)uVar25;
              uVar28 = uVar27;
              if (((uVar24 & 3) == 0) &&
                 (uVar28 = (ulong)-((uint)lVar18 >> 2) & 3, (long)uVar27 <= (long)uVar28)) {
                uVar28 = uVar27;
              }
              fVar34 = *(float *)(param_2 + 0x20);
              uVar32 = uVar27 - uVar28;
              uVar8 = uVar32 + 3;
              if ((long)uVar28 <= (long)uVar27) {
                uVar8 = uVar32;
              }
              if (0 < (long)uVar28) {
                lVar9 = 0;
                uVar14 = uVar28;
                do {
                  *(float *)(lVar18 + lVar9 * 4) = fVar34 * *(float *)(lVar18 + lVar9 * 4);
                  lVar9 = lVar9 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar28;
              if (3 < (long)uVar32) {
                do {
                  puVar13 = (undefined8 *)(lVar18 + uVar28 * 4);
                  uVar38 = puVar13[1];
                  uVar35 = *puVar13;
                  puVar13 = (undefined8 *)(lVar18 + uVar28 * 4);
                  puVar13[1] = CONCAT44((float)((ulong)uVar38 >> 0x20) * fVar34,
                                        (float)uVar38 * fVar34);
                  *puVar13 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar34,(float)uVar35 * fVar34
                                     );
                  uVar28 = uVar28 + 4;
                } while ((long)uVar28 < lVar9);
              }
              if (lVar9 < (long)uVar27) {
                lVar12 = uVar32 - (uVar8 & 0xfffffffffffffffc);
                do {
                  *(float *)(lVar18 + lVar9 * 4) = fVar34 * *(float *)(lVar18 + lVar9 * 4);
                  lVar9 = lVar9 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < *(uint *)((long)param_1 + 0x14));
        }
        else {
          if (*(int *)((long)param_1 + 0x1c) != 0) {
            __ZNSt3__19to_stringEi(&uStack_e0);
            func_0x00010928a5e0(&lStack_190,&UNK_10f5a9558,&uStack_e0);
            if (cStack_c9 < '\0') {
              __ZdlPv(uStack_e0);
            }
            FUN_109cdc728(&UNK_10f5a9547,&UNK_10f5a9547,&lStack_190);
            goto LAB_109cdddc4;
          }
          uVar29 = *(uint *)((long)param_1 + 0x14);
          if (uVar29 != 0) {
            uVar25 = 0;
            iVar22 = *(int *)((long)param_1 + 0xc) * *(int *)(param_1 + 1);
            uVar31 = (ulong)*(uint *)(param_1 + 2);
            do {
              if ((int)uVar31 != 0) {
                uVar27 = 0;
                uVar28 = 0;
                do {
                  lVar26 = uVar27 * 4;
                  pfVar30 = (float *)(uVar24 + uVar27 * 4);
                  uVar31 = uVar24 + (ulong)(uint)(iVar22 * (int)uVar28) * 4;
                  uVar29 = *(uint *)(param_1 + 1);
                  uVar2 = *(uint *)((long)param_1 + 0xc);
                  if (*(char *)(param_2 + 0x24) == '\x01') {
                    fVar34 = *(float *)(*(long *)(param_2 + 8) + uVar28 * 4);
                    uVar32 = (ulong)uVar29 * (ulong)uVar2;
                    uVar8 = (ulong)-((uint)uVar31 >> 2) & 3;
                    if (uVar32 <= uVar8) {
                      uVar8 = uVar32;
                    }
                    uVar14 = uVar32;
                    if ((uVar31 & 3) == 0) {
                      uVar14 = uVar8;
                    }
                    uVar17 = uVar32 - uVar14;
                    pfVar7 = pfVar30;
                    uVar21 = uVar14;
                    uVar8 = uVar17 + 3;
                    if ((long)uVar14 <= (long)uVar32) {
                      uVar8 = uVar17;
                    }
                    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                      *pfVar7 = *pfVar7 - fVar34;
                      pfVar7 = pfVar7 + 1;
                    }
                    lVar15 = (uVar8 & 0xfffffffffffffffc) + uVar14;
                    if (3 < (long)uVar17) {
                      puVar13 = (undefined8 *)(uVar24 + lVar26 + uVar14 * 4);
                      uVar21 = uVar14;
                      do {
                        puVar13[1] = CONCAT44((float)((ulong)puVar13[1] >> 0x20) - fVar34,
                                              (float)puVar13[1] - fVar34);
                        *puVar13 = CONCAT44((float)((ulong)*puVar13 >> 0x20) - fVar34,
                                            (float)*puVar13 - fVar34);
                        uVar21 = uVar21 + 4;
                        puVar13 = puVar13 + 2;
                      } while ((long)uVar21 < lVar15);
                    }
                    if (lVar15 < (long)uVar32) {
                      lVar15 = uVar17 - (uVar8 & 0xfffffffffffffffc);
                      pfVar7 = (float *)(uVar24 + lVar26 + ((long)uVar8 >> 2) * 0x10 + uVar14 * 4);
                      do {
                        *pfVar7 = *pfVar7 - fVar34;
                        lVar15 = lVar15 + -1;
                        pfVar7 = pfVar7 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  if (*(char *)(param_2 + 0x25) == '\x01') {
                    fVar34 = *(float *)(param_2 + 0x20);
                    uVar32 = (ulong)uVar29 * (ulong)uVar2;
                    uVar8 = (ulong)-((uint)uVar31 >> 2) & 3;
                    if (uVar32 <= uVar8) {
                      uVar8 = uVar32;
                    }
                    uVar14 = uVar32;
                    if ((uVar31 & 3) == 0) {
                      uVar14 = uVar8;
                    }
                    uVar8 = uVar32 - uVar14;
                    uVar17 = uVar14;
                    uVar31 = uVar8 + 3;
                    if ((long)uVar14 <= (long)uVar32) {
                      uVar31 = uVar8;
                    }
                    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                      *pfVar30 = fVar34 * *pfVar30;
                      pfVar30 = pfVar30 + 1;
                    }
                    lVar15 = (uVar31 & 0xfffffffffffffffc) + uVar14;
                    if (3 < (long)uVar8) {
                      puVar13 = (undefined8 *)(uVar24 + lVar26 + uVar14 * 4);
                      uVar17 = uVar14;
                      do {
                        puVar13[1] = CONCAT44((float)((ulong)puVar13[1] >> 0x20) * fVar34,
                                              (float)puVar13[1] * fVar34);
                        *puVar13 = CONCAT44((float)((ulong)*puVar13 >> 0x20) * fVar34,
                                            (float)*puVar13 * fVar34);
                        uVar17 = uVar17 + 4;
                        puVar13 = puVar13 + 2;
                      } while ((long)uVar17 < lVar15);
                    }
                    if (lVar15 < (long)uVar32) {
                      lVar15 = uVar8 - (uVar31 & 0xfffffffffffffffc);
                      pfVar30 = (float *)(uVar24 + lVar26 + ((long)uVar31 >> 2) * 0x10 + uVar14 * 4)
                      ;
                      do {
                        *pfVar30 = fVar34 * *pfVar30;
                        lVar15 = lVar15 + -1;
                        pfVar30 = pfVar30 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  uVar28 = uVar28 + 1;
                  uVar31 = (ulong)*(uint *)(param_1 + 2);
                  uVar27 = (ulong)(uint)((int)uVar27 + iVar22);
                } while (uVar28 < uVar31);
                uVar29 = *(uint *)((long)param_1 + 0x14);
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar29);
          }
        }
      }
      else {
        if (*(int *)(param_1 + 3) != 2) {
          __ZNSt3__19to_stringEi(&uStack_e0);
          func_0x00010928a5e0(&lStack_190,&UNK_10f5a9374,&uStack_e0);
          FUN_109cd45b4(&UNK_10e03e6ac,&UNK_10f5a9369,&lStack_190);
          goto LAB_109cdddc4;
        }
        if ((*(byte *)(param_1 + 9) & 1) == 0) {
          uVar29 = *(int *)(param_1 + 2) * *(int *)((long)param_1 + 0x14) *
                   *(int *)((long)param_1 + 0xc) * *(int *)(param_1 + 1);
        }
        else {
          uVar29 = 1;
          for (piVar23 = (int *)param_1[6]; piVar23 != (int *)param_1[7]; piVar23 = piVar23 + 1) {
            uVar29 = *piVar23 * uVar29;
          }
        }
        uVar24 = param_1[4];
        if ((*(char *)(param_2 + 0x24) == '\x01') &&
           ((ulong)*(uint *)(param_1 + 2) != *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2
           )) goto LAB_109cddd24;
        if (*(int *)((long)param_1 + 0x1c) == 1) {
          uVar31 = 0;
          lVar26 = *(long *)(param_2 + 8);
          lVar15 = *(long *)(param_2 + 0x10);
          uVar25 = *(int *)(param_1 + 1) * *(int *)(param_1 + 2);
          uVar2 = 0;
          if (*(uint *)((long)param_1 + 0x14) != 0) {
            uVar2 = uVar29 / *(uint *)((long)param_1 + 0x14);
          }
          do {
            uVar28 = uVar24 + uVar31 * uVar2 * 8;
            uVar29 = *(uint *)((long)param_1 + 0xc);
            if (*(char *)(param_2 + 0x24) == '\x01' && uVar25 != 0) {
              uVar27 = 0;
              lVar9 = *(long *)(param_2 + 8);
              lVar18 = 0;
              do {
                if (uVar29 != 0) {
                  lVar12 = 0;
                  fVar34 = *(float *)(lVar9 + lVar18 * 4);
                  lVar11 = uVar28 + uVar27 * 8;
                  uVar8 = (ulong)uVar29;
                  do {
                    lVar20 = lVar12 * (ulong)uVar25;
                    *(double *)(lVar11 + lVar20 * 8) =
                         *(double *)(lVar11 + lVar20 * 8) - (double)fVar34;
                    lVar12 = lVar12 + 1;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                lVar12 = 0;
                if (lVar18 + 1 != lVar15 - lVar26 >> 2) {
                  lVar12 = lVar18 + 1;
                }
                uVar27 = uVar27 + 1;
                lVar18 = lVar12;
              } while (uVar27 != uVar25);
            }
            if (*(char *)(param_2 + 0x25) == '\x01') {
              dVar36 = (double)*(float *)(param_2 + 0x20);
              uVar8 = (ulong)uVar29 * (ulong)uVar25;
              uVar27 = uVar28 >> 3 & 1;
              if ((long)uVar8 <= (long)uVar27) {
                uVar27 = uVar8;
              }
              if ((uVar24 & 7) != 0) {
                uVar27 = uVar8;
              }
              if (uVar27 != 0) {
                lVar18 = 0;
                uVar32 = uVar27;
                do {
                  *(double *)(uVar28 + lVar18 * 8) = *(double *)(uVar28 + lVar18 * 8) * dVar36;
                  lVar18 = lVar18 + 1;
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
              lVar9 = uVar8 - uVar27;
              lVar18 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + uVar27;
              if (1 < lVar9) {
                do {
                  pdVar16 = (double *)(uVar28 + uVar27 * 8);
                  dVar37 = *pdVar16;
                  pdVar10 = (double *)(uVar28 + uVar27 * 8);
                  pdVar10[1] = pdVar16[1] * dVar36;
                  *pdVar10 = dVar37 * dVar36;
                  uVar27 = uVar27 + 2;
                } while ((long)uVar27 < lVar18);
              }
              if (lVar18 < (long)uVar8) {
                lVar9 = lVar9 % 2;
                do {
                  *(double *)(uVar28 + lVar18 * 8) = *(double *)(uVar28 + lVar18 * 8) * dVar36;
                  lVar18 = lVar18 + 1;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < *(uint *)((long)param_1 + 0x14));
        }
        else {
          if (*(int *)((long)param_1 + 0x1c) != 0) {
            __ZNSt3__19to_stringEi(&uStack_e0);
            func_0x00010928a5e0(&lStack_190,&UNK_10f5a9558,&uStack_e0);
            if (cStack_c9 < '\0') {
              __ZdlPv(uStack_e0);
            }
            FUN_109cdc728(&UNK_10f5a9547,&UNK_10f5a9547,&lStack_190);
            goto LAB_109cdddc4;
          }
          uVar29 = *(uint *)((long)param_1 + 0x14);
          if (uVar29 != 0) {
            uVar25 = 0;
            iVar22 = *(int *)((long)param_1 + 0xc) * *(int *)(param_1 + 1);
            uVar31 = (ulong)*(uint *)(param_1 + 2);
            do {
              if ((int)uVar31 != 0) {
                uVar27 = 0;
                uVar28 = 0;
                do {
                  lVar26 = uVar27 * 8;
                  pdVar16 = (double *)(uVar24 + uVar27 * 8);
                  uVar31 = uVar24 + (ulong)(uint)(iVar22 * (int)uVar28) * 8;
                  uVar29 = *(uint *)(param_1 + 1);
                  uVar2 = *(uint *)((long)param_1 + 0xc);
                  uVar8 = uVar31 >> 3 & 1;
                  if (*(char *)(param_2 + 0x24) == '\x01') {
                    dVar36 = (double)*(float *)(*(long *)(param_2 + 8) + uVar28 * 4);
                    uVar14 = (ulong)uVar29 * (ulong)uVar2;
                    uVar32 = uVar8;
                    if (uVar14 <= uVar8) {
                      uVar32 = uVar14;
                    }
                    pdVar10 = pdVar16;
                    uVar17 = uVar32;
                    if ((uVar31 & 7) != 0) {
                      uVar32 = uVar14;
                      uVar17 = uVar14;
                    }
                    for (; uVar32 != 0; uVar32 = uVar32 - 1) {
                      *pdVar10 = *pdVar10 - dVar36;
                      pdVar10 = pdVar10 + 1;
                    }
                    lVar18 = uVar14 - uVar17;
                    lVar15 = (lVar18 - (lVar18 >> 0x3f) & 0xfffffffffffffffeU) + uVar17;
                    if (1 < lVar18) {
                      pdVar10 = (double *)(uVar24 + lVar26 + uVar17 * 8);
                      uVar32 = uVar17;
                      do {
                        pdVar10[1] = pdVar10[1] - dVar36;
                        *pdVar10 = *pdVar10 - dVar36;
                        uVar32 = uVar32 + 2;
                        pdVar10 = pdVar10 + 2;
                      } while ((long)uVar32 < lVar15);
                    }
                    if (lVar15 < (long)uVar14) {
                      lVar15 = lVar18 % 2;
                      pdVar10 = (double *)(uVar24 + lVar26 + (lVar18 / 2) * 0x10 + uVar17 * 8);
                      do {
                        *pdVar10 = *pdVar10 - dVar36;
                        lVar15 = lVar15 + -1;
                        pdVar10 = pdVar10 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  if (*(char *)(param_2 + 0x25) == '\x01') {
                    dVar36 = (double)*(float *)(param_2 + 0x20);
                    uVar32 = (ulong)uVar29 * (ulong)uVar2;
                    if (uVar32 <= uVar8) {
                      uVar8 = uVar32;
                    }
                    uVar14 = uVar8;
                    if ((uVar31 & 7) != 0) {
                      uVar8 = uVar32;
                      uVar14 = uVar32;
                    }
                    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *pdVar16 = *pdVar16 * dVar36;
                      pdVar16 = pdVar16 + 1;
                    }
                    lVar18 = uVar32 - uVar14;
                    lVar15 = (lVar18 - (lVar18 >> 0x3f) & 0xfffffffffffffffeU) + uVar14;
                    if (1 < lVar18) {
                      pdVar16 = (double *)(uVar24 + lVar26 + uVar14 * 8);
                      uVar31 = uVar14;
                      do {
                        pdVar16[1] = pdVar16[1] * dVar36;
                        *pdVar16 = *pdVar16 * dVar36;
                        uVar31 = uVar31 + 2;
                        pdVar16 = pdVar16 + 2;
                      } while ((long)uVar31 < lVar15);
                    }
                    if (lVar15 < (long)uVar32) {
                      lVar15 = lVar18 % 2;
                      pdVar16 = (double *)(uVar24 + lVar26 + (lVar18 / 2) * 0x10 + uVar14 * 8);
                      do {
                        *pdVar16 = *pdVar16 * dVar36;
                        lVar15 = lVar15 + -1;
                        pdVar16 = pdVar16 + 1;
                      } while (lVar15 != 0);
                    }
                  }
                  uVar28 = uVar28 + 1;
                  uVar31 = (ulong)*(uint *)(param_1 + 2);
                  uVar27 = (ulong)(uint)((int)uVar27 + iVar22);
                } while (uVar28 < uVar31);
                uVar29 = *(uint *)((long)param_1 + 0x14);
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar29);
          }
        }
      }
LAB_109cdd2e0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      ___stack_chk_fail();
      goto LAB_109cddca4;
    }
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
      iVar22 = *(int *)(param_1 + 2) * *(int *)((long)param_1 + 0x14) *
               *(int *)((long)param_1 + 0xc) * *(int *)(param_1 + 1);
    }
    else {
      iVar22 = 1;
      for (piVar23 = (int *)param_1[6]; piVar23 != (int *)param_1[7]; piVar23 = piVar23 + 1) {
        iVar22 = *piVar23 * iVar22;
      }
    }
    puVar33 = (uint *)(param_1 + 3);
    if (*puVar33 < 0xf) {
      iVar3 = *(int *)(&UNK_10e03e840 + (ulong)*puVar33 * 4);
      uStack_98 = (ulong)(uint)(iVar3 * iVar22);
      FUN_109cdb95c(&uStack_e0,*(undefined8 *)(param_2 + 0x128),&uStack_98);
      _memcpy(uStack_e0,param_1[4],(ulong)(uint)(iVar3 * iVar22));
      uVar35 = uStack_e0;
      if (*(char *)(param_1 + 9) == '\x01') {
        uVar29 = *puVar33;
        uStack_e0 = 0;
        uStack_120 = uStack_d8;
        (**(code **)(CONCAT17(cStack_c9,uStack_d0) + 0x10))(apuStack_118,&uStack_d0);
        auStack_128[1] = 4;
        uStack_98 = uStack_120;
        auStack_128[0] = uVar29;
        (*(code *)apuStack_118[0][2])(apuStack_90,apuStack_118);
        FUN_109cde3b8(auStack_138,uVar35,&uStack_98);
        func_0x0001099ae514(&lStack_190,param_1 + 6,auStack_128,auStack_138);
        if (plStack_130 != (long *)0x0) {
          plVar1 = plStack_130 + 1;
          do {
            lVar26 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plStack_130 + 0x10))(plStack_130);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
          }
        }
        (*(code *)*apuStack_90[0])(apuStack_90);
        (*(code *)*apuStack_118[0])(apuStack_118);
      }
      else {
        FUN_109d0f52c(&lStack_190,param_1 + 1,puVar33,&uStack_e0);
      }
      FUN_109cdc6dc(&uStack_e0);
      param_1[2] = uStack_180;
      param_1[1] = uStack_188;
      param_1[3] = uStack_178;
      func_0x0001093783c0(param_1 + 4,auStack_170);
      func_0x00010937843c(param_1 + 6,auStack_160);
      func_0x000105675c90(&lStack_190);
      *param_4 = 1;
      goto LAB_109cdd54c;
    }
  }
  else {
LAB_109cddca4:
    func_0x00010952d0c4(&UNK_10e03e6ac,&UNK_10f5a9369,&UNK_10f5a932c);
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
LAB_109cdddc4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109cdddc8);
  (*pcVar6)();
}



/* Entry: 109cddea4; end: 109cde1d3;  */

ulong FUN_109cddea4(ulong *param_1,ulong *param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 **ppuStack_150;
  ulong uStack_148;
  byte bStack_139;
  undefined8 **ppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  undefined8 **ppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  iVar1 = (int)*param_1;
  if ((int)*param_2 - 9U < 6) {
    if (iVar1 != (int)*param_2) {
      if (iVar1 != 1) goto LAB_109cddf48;
      uVar5 = (ulong)*(uint *)((long)param_2 + 4);
      uVar3 = 1;
      goto LAB_109cddf18;
    }
    if (*(int *)((long)param_1 + 4) != *(int *)((long)param_2 + 4)) {
LAB_109cddf48:
      __ZNSt3__19to_stringEi(auStack_108);
      func_0x00010928a5e0(auStack_f0,&UNK_10f5a9400,auStack_108);
      func_0x000109259240(auStack_d8,auStack_f0,&UNK_10f5a9459);
      __ZNSt3__19to_stringEi(&ppuStack_120,*(int *)((long)param_2 + 4));
      if (-1 < (char)bStack_109) {
        uStack_118 = (ulong)bStack_109;
        ppuStack_120 = &ppuStack_120;
      }
      puVar4 = auStack_d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar4,ppuStack_120,uStack_118);
      uStack_b8 = puVar4[1];
      uStack_c0 = *puVar4;
      uStack_b0 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      func_0x000109259240(auStack_a8,&uStack_c0,&UNK_10f5a9463);
      __ZNSt3__19to_stringEi(&ppuStack_138,(int)*param_1);
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
        ppuStack_138 = &ppuStack_138;
      }
      puVar4 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar4,ppuStack_138,uStack_130);
      uStack_88 = puVar4[1];
      uStack_90 = *puVar4;
      uStack_80 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      func_0x000109259240(auStack_78,&uStack_90,&UNK_10f5a9459);
      __ZNSt3__19to_stringEi(&ppuStack_150,*(int *)((long)param_1 + 4));
      if (-1 < (char)bStack_139) {
        uStack_148 = (ulong)bStack_139;
        ppuStack_150 = &ppuStack_150;
      }
      puVar4 = auStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar4,ppuStack_150,uStack_148);
      uStack_58 = puVar4[1];
      uStack_60 = *puVar4;
      uStack_50 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      func_0x000109259240(auStack_48,&uStack_60,&DAT_10f2da10d);
      FUN_109cd45b4(&UNK_10f5a93f0,&UNK_10f5a939a,auStack_48);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109cde0b0);
      (*pcVar2)();
    }
    uVar3 = *param_1;
  }
  else {
    if (iVar1 - 9U < 6) {
      param_2 = (ulong *)&UNK_10f5a939a;
      func_0x00010952d0c4(&UNK_10f5a939a,&UNK_10f5a939a,&UNK_10f5a93b7);
      goto LAB_109cddf48;
    }
    uVar3 = *param_2;
  }
  uVar5 = uVar3 >> 0x20;
LAB_109cddf18:
  return uVar3 & 0xffffffff | uVar5 << 0x20;
}



/* Entry: 109cde1d4; end: 109cde223;  */

void FUN_109cde1d4(long param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_20;
  uStack_20 = param_2;
  if (*(uint *)(param_1 + 0x118) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110b3cc18)[*(uint *)(param_1 + 0x118)])(&puStack_18,param_1 + 0xb8);
    return;
  }
  func_0x0001092612e0();
  return;
}



/* Entry: 109cde224; end: 109cde227;  */

void FUN_109cde224(void)

{
  return;
}



/* Entry: 109cde228; end: 109cde277;  */

void FUN_109cde228(long param_1,undefined8 param_2)

{
  undefined1 uStack_41;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_20;
  uStack_20 = param_2;
  if (*(uint *)(param_1 + 0x118) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110b3cc28)[*(uint *)(param_1 + 0x118)])(&puStack_18,param_1 + 0xb8);
    return;
  }
  func_0x0001092612e0();
  if (*(uint *)(param_1 + 0x60) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110b3cbf8)[*(uint *)(param_1 + 0x60)])(&uStack_41,param_1);
  }
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return;
}



/* Entry: 109cde278; end: 109cde2cb;  */

void FUN_109cde278(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x60) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110b3cbf8)[*(uint *)(param_1 + 0x60)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return;
}



/* Entry: 109cde2cc; end: 109cde2cf;  */

void FUN_109cde2cc(void)

{
  return;
}



/* Entry: 109cde2d0; end: 109cde3b7;  */

/* WARNING: Possible PIC construction at 0x000109cde2f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cde2f4) */

long * FUN_109cde2d0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x58) == '\x01') {
    plVar1 = (long *)(param_2 + 0x28);
    func_0x000109cde340(plVar1,*(undefined8 *)(param_2 + 0x38));
    lVar2 = *plVar1;
    *plVar1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    return plVar1;
  }
  return param_1;
}



/* Entry: 109cde3b8; end: 109cde4db;  */

undefined8 ** FUN_109cde3b8(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  uVar5 = *param_3;
  plVar6 = param_3 + 1;
  (**(code **)(*plVar6 + 0x10))(apuStack_80,plVar6);
  *puVar2 = &PTR_FUN_110b3cc48;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = uVar5;
  iVar4 = (int)apuStack_80;
  (*(code *)apuStack_80[0][2])(puVar2 + 5);
  param_1[1] = puVar2;
  ppuVar3 = apuStack_80;
  (*(code *)*apuStack_80[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    ___cxa_begin_catch(ppuVar3);
    (*(code *)*plVar6)(param_2,plVar6);
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109cde4b8);
    (*pcVar1)();
  }
  __Unwind_Resume(ppuVar3);
  func_0x000104bd46a0();
  *ppuVar3 = &PTR_FUN_110b3cc48;
  (*(code *)*ppuVar3[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(ppuVar3);
  return ppuVar3;
}



/* Entry: 109cde4dc; end: 109cde54f;  */

void FUN_109cde4dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3cc48;
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109cde550; end: 109cde58b;  */

void FUN_109cde550(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000109cde584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 109cde58c; end: 109cde5c7;  */

long FUN_109cde58c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b3cc98);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109cde5c8; end: 109cde5d3;  */

void FUN_109cde5c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cde5d4; end: 109cde607;  */

ulong FUN_109cde5d4(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_2 + 0x58) & 1) != 0) {
    return (ulong)*(uint *)(param_2 + 0x50);
  }
  puVar1 = (ulong *)&UNK_10f55aaab;
  func_0x00010952d0c4(&UNK_10f5a93f0,&UNK_10f55aaab,&UNK_10f5a9475);
  return *puVar1;
}



/* Entry: 109cde608; end: 109cde60f;  */

undefined8 FUN_109cde608(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 109cde610; end: 109cde73f;  */

undefined8 FUN_109cde610(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    func_0x00010952d0c4(&UNK_10f5a93f0,&UNK_10f55aaab,&UNK_10f5a9475);
  }
  else {
    unaff_x20 = (undefined8 *)*param_1;
    lVar2 = param_2;
    FUN_109cde740(param_2,*unaff_x20);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x60) == 1) {
        return CONCAT44(*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(lVar2 + 0x38));
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f5a94b2,*unaff_x20);
      func_0x000109259240(auStack_38,auStack_50,&UNK_10f5a94c4);
      FUN_109cd45b4(&UNK_10f5a93f0,&UNK_10f55aaab,auStack_38);
      goto LAB_109cde6f4;
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f5a9490,*unaff_x20);
  FUN_109cd45b4(&UNK_10f5a93f0,&UNK_10f55aaab,auStack_38);
LAB_109cde6f4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109cde6f8);
  (*pcVar1)();
}



/* Entry: 109cde740; end: 109cde823;  */

long FUN_109cde740(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109cde824; end: 109cde82b;  */

undefined8 FUN_109cde824(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 109cde82c; end: 109cde95b;  */

undefined8 FUN_109cde82c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    func_0x00010952d0c4(&UNK_10f5a93f0,&UNK_10f55aaab,&UNK_10f5a9475);
  }
  else {
    unaff_x20 = (undefined8 *)*param_1;
    lVar2 = param_2 + 0x28;
    FUN_109cde740(lVar2,*unaff_x20);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x60) == 1) {
        return CONCAT44(*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(lVar2 + 0x38));
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f5a94fd,*unaff_x20);
      func_0x000109259240(auStack_38,auStack_50,&UNK_10f5a94c4);
      FUN_109cd45b4(&UNK_10f5a93f0,&UNK_10f55aaab,auStack_38);
      goto LAB_109cde910;
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f5a94da,*unaff_x20);
  FUN_109cd45b4(&UNK_10f5a93f0,&UNK_10f55aaab,auStack_38);
LAB_109cde910:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109cde914);
  (*pcVar1)();
}



/* Entry: 109cde95c; end: 109cde9b3;  */

long FUN_109cde95c(long param_1)

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



/* Entry: 109cde9b4; end: 109cdea77;  */

undefined8 * FUN_109cde9b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  FUN_109cdfad8(auStack_48,&uStack_31,&UNK_10e03e880);
  FUN_109cdc868(param_1,param_2,param_3,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  *param_1 = &PTR_FUN_110b3cce0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  return param_1;
}



/* Entry: 109cdea78; end: 109cdead7;  */

void FUN_109cdea78(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b3cce0;
  puStack_28 = param_1 + 0x28;
  func_0x000104c607c8(&puStack_28);
  plVar1 = (long *)param_1[0x27];
  param_1[0x27] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109cdc9f8(param_1);
  return;
}



/* Entry: 109cdead8; end: 109cdeadb;  */

void FUN_109cdead8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b3cce0;
  puStack_28 = param_1 + 0x28;
  func_0x000104c607c8(&puStack_28);
  plVar1 = (long *)param_1[0x27];
  param_1[0x27] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109cdc9f8(param_1);
  return;
}



/* Entry: 109cdeadc; end: 109cdeaef;  */

void FUN_109cdeadc(void)

{
  FUN_109cdea78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cdeaf0; end: 109cdec4f;  */

void FUN_109cdeaf0(undefined8 *param_1,long param_2,uint param_3)

{
  unkbyte9 *pVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  long *plVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined ***pppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined4 *puVar21;
  ulong uVar23;
  int *piVar24;
  undefined8 *extraout_x8;
  undefined ***pppuVar25;
  ulong uVar26;
  undefined ***pppuVar27;
  undefined **ppuVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  long lVar32;
  long *plVar33;
  undefined8 uVar34;
  long *plVar35;
  undefined ***unaff_x26;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 auVar43 [16];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined **ppuStack_2e0;
  undefined ***pppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined8 *puStack_2c0;
  long *plStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined8 **ppuStack_288;
  undefined8 *puStack_280;
  long *plStack_278;
  long *plStack_260;
  long *plStack_258;
  undefined8 uStack_250;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  long lStack_210;
  long lStack_208;
  code *pcStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_160;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 *apuStack_a8 [3];
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puVar22;
  
  if (*(char *)(param_2 + 0x48) == '\x01') {
    iStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    puVar2 = *(undefined4 **)(param_2 + 0x38);
    if (*(undefined4 **)(param_2 + 0x30) != puVar2) {
      puVar21 = *(undefined4 **)(param_2 + 0x30);
      do {
        puVar22 = puVar21 + 1;
        lVar32 = (long)iStack_58;
        iStack_58 = iStack_58 + 1;
        *(undefined4 *)(((ulong)&iStack_58 | 4) + lVar32 * 4) = *puVar21;
        puVar21 = puVar22;
      } while (puVar22 != puVar2);
    }
  }
  else {
    iStack_58 = 4;
    pVar1 = (unkbyte9 *)(param_2 + 8);
    uVar34 = *(undefined8 *)(param_2 + 0x10);
    uVar36 = (undefined1)((ulong)uVar34 >> 8);
    uVar37 = (undefined1)((ulong)uVar34 >> 0x10);
    uVar38 = (undefined1)((ulong)uVar34 >> 0x18);
    uVar39 = (undefined1)((ulong)uVar34 >> 0x20);
    uVar40 = (undefined1)((ulong)uVar34 >> 0x28);
    uVar41 = (undefined1)((ulong)uVar34 >> 0x30);
    uVar42 = (undefined1)((ulong)uVar34 >> 0x38);
    auVar43[9] = uVar36;
    auVar43._0_9_ = *pVar1;
    auVar43[10] = uVar37;
    auVar43[0xb] = uVar38;
    auVar43[0xc] = uVar39;
    auVar43[0xd] = uVar40;
    auVar43[0xe] = uVar41;
    auVar43[0xf] = uVar42;
    auVar7[9] = uVar36;
    auVar7._0_9_ = *pVar1;
    auVar7[10] = uVar37;
    auVar7[0xb] = uVar38;
    auVar7[0xc] = uVar39;
    auVar7[0xd] = uVar40;
    auVar7[0xe] = uVar41;
    auVar7[0xf] = uVar42;
    auVar43 = NEON_ext(auVar43,auVar7,0xc,1);
    uStack_4c = (undefined4)*pVar1;
    uStack_48 = (undefined4)
                (CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14((char)((unkuint9)*pVar1 >>
                                                                                0x40),uStack_4c))))
                >> 0x20);
    uStack_54 = auVar43._0_4_;
    uStack_50 = (undefined4)
                (CONCAT17(auVar43[0xb],
                          CONCAT16(auVar43[10],CONCAT15(auVar43[9],CONCAT14(auVar43[8],uStack_54))))
                >> 0x20);
  }
  uStack_44 = 0;
  if (*(int *)(param_2 + 0x18) == 8) {
    uVar34 = *(undefined8 *)(param_2 + 0x20);
    puVar10 = (undefined8 *)0x70;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar11 = puVar10 + 3;
    *puVar10 = &PTR_DAT_110b2c750;
    func_0x000109c10528(puVar11,&iStack_58,uVar34,param_3 ^ 1);
LAB_109cdebf0:
    *param_1 = puVar11;
    param_1[1] = puVar10;
    *(uint *)((long)puVar10 + 0x54) = (uint)*(byte *)(param_2 + 0x48) << 1;
    return;
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    uVar34 = *(undefined8 *)(param_2 + 0x20);
    puVar10 = (undefined8 *)0x70;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar11 = puVar10 + 3;
    *puVar10 = &PTR_DAT_110b2c750;
    func_0x000109c0ffb0(puVar11,&iStack_58,uVar34,param_3 ^ 1);
    goto LAB_109cdebf0;
  }
  puVar12 = &UNK_10f5a9649;
  puVar18 = &UNK_10f55aaab;
  puVar19 = &UNK_10f5a965d;
  func_0x00010952d0c4();
  __ZNSt3__119__shared_weak_countD2Ev();
  __ZdlPv();
  __Unwind_Resume();
  puVar10 = (undefined8 *)0x188;
  puVar20 = puVar19;
  __Znwm();
  *puVar10 = &PTR_DAT_110b2c248;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 5) = 0;
  puVar10[7] = 0;
  puVar10[6] = 0;
  puVar10[9] = 0;
  puVar10[8] = 0;
  puVar10[0xb] = 0;
  puVar10[10] = 0;
  puVar10[0xd] = 0;
  puVar10[0xc] = 0;
  puVar10[0xf] = 0;
  puVar10[0xe] = 0;
  *(undefined4 *)(puVar10 + 0x10) = 0x3f800000;
  *(undefined1 *)((long)puVar10 + 0xa9) = 0;
  *(undefined8 *)((long)puVar10 + 0xac) = 0;
  *(undefined8 *)((long)puVar10 + 0xbc) = 0;
  *(undefined8 *)((long)puVar10 + 0xb4) = 0;
  puVar10[0x12] = 0;
  puVar10[0x11] = 0;
  puVar10[0x14] = 0;
  puVar10[0x13] = 0;
  puVar10[0x20] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1b] = 0;
  plVar13 = *(long **)(puVar12 + 0x138);
  *(undefined8 **)(puVar12 + 0x138) = puVar10;
  puVar10[0x1a] = 0;
  puVar10[0x19] = 0;
  *(undefined8 *)((long)puVar10 + 0x17b) = 0;
  *(undefined8 *)((long)puVar10 + 0x173) = 0;
  puVar10[0x2c] = 0;
  puVar10[0x2b] = 0;
  puVar10[0x2e] = 0;
  puVar10[0x2d] = 0;
  puVar10[0x28] = 0;
  puVar10[0x27] = 0;
  puVar10[0x2a] = 0;
  puVar10[0x29] = 0;
  puVar10[0x24] = 0;
  puVar10[0x23] = 0;
  puVar10[0x26] = 0;
  puVar10[0x25] = 0;
  puVar10[0x22] = 0;
  puVar10[0x21] = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puVar14 = puVar18;
  FUN_109d15d68();
  if ((int)puVar14 == 0) {
    func_0x000109c1eb98(*(undefined8 *)(puVar12 + 0x138),puVar18);
  }
  else {
    FUN_109d15c90(&lStack_f0,puVar18);
    puVar20 = (undefined *)(ulong)(uint)((int)lStack_e8 - (int)lStack_f0);
    func_0x000109c2039c(*(undefined8 *)(puVar12 + 0x138),lStack_f0,puVar20);
    if (lStack_f0 != 0) {
      lStack_e8 = lStack_f0;
      __ZdlPv();
    }
  }
  uVar3 = *(uint *)(*(long *)(puVar12 + 0x138) + 0x28);
  uVar23 = (ulong)uVar3;
  if (uVar3 == 0) {
    ppuVar15 = (undefined8 **)&UNK_10e03e888;
    puVar18 = &UNK_10f5a92e5;
    puVar20 = &UNK_10f5a957d;
    func_0x00010952d0c4(&UNK_10e03e888,&UNK_10f5a92e5,&UNK_10f5a957d);
  }
  else {
    if (0 < (int)uVar3) {
      plVar13 = *(long **)(*(long *)(puVar12 + 0x138) + 0x10);
      do {
        *(undefined1 *)(*plVar13 + 0x61) = 1;
        uVar23 = uVar23 - 1;
        plVar13 = plVar13 + 2;
      } while (uVar23 != 0);
    }
    puVar18 = puVar19 + 0x18;
    FUN_109cd31ac(&lStack_f0,puVar19);
    FUN_109cdfa10(puVar12 + 0x80);
    *(long *)(puVar12 + 0x88) = lStack_e8;
    *(long *)(puVar12 + 0x80) = lStack_f0;
    *(undefined8 *)(puVar12 + 0x90) = uStack_e0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    lStack_f0 = 0;
    func_0x000109cdfa74(puVar12 + 0x98);
    *(undefined8 *)(puVar12 + 0xa0) = uStack_d0;
    *(undefined8 *)(puVar12 + 0x98) = uStack_d8;
    *(undefined8 *)(puVar12 + 0xa8) = uStack_c8;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    apuStack_a8[0] = &uStack_d8;
    FUN_109cd42a0(apuStack_a8);
    apuStack_a8[0] = &lStack_f0;
    func_0x000109cd4310(apuStack_a8);
    FUN_109cd2ef0(&lStack_f0,puVar19 + 0x18);
    func_0x000107c3193c(puVar12 + 0x140);
    *(long *)(puVar12 + 0x148) = lStack_e8;
    *(long *)(puVar12 + 0x140) = lStack_f0;
    *(undefined8 *)(puVar12 + 0x150) = uStack_e0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    lStack_f0 = 0;
    ppuVar15 = apuStack_a8;
    apuStack_a8[0] = &lStack_f0;
    func_0x000104c607c8();
    lVar32 = *(long *)(puVar12 + 0x138);
    *(undefined *)(lVar32 + 0x180) = puVar12[0x40];
    piVar24 = (int *)(lVar32 + 0x138);
    if (*(char *)(lVar32 + 0x14f) < '\0') {
      if (*(long *)(lVar32 + 0x140) != 6) {
        return;
      }
      piVar24 = *(int **)piVar24;
    }
    else if (*(char *)(lVar32 + 0x14f) != '\x06') {
      return;
    }
    if (*piVar24 != 0x494c4654 || (short)piVar24[1] != 0x4554) {
      return;
    }
    if (*(int *)(puVar12 + 0x118) == 0) {
      *(undefined4 *)(puVar12 + 0xbc) = 4;
      return;
    }
  }
  func_0x0001092612e0();
  puVar12 = puVar18;
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if ((int)puVar18 == 1) {
    ___cxa_begin_catch();
    func_0x000107c31940(auStack_c0,*(ulong *)((*ppuVar15)[-1] + 8) & 0x7fffffffffffffff);
    func_0x000109259240(apuStack_a8,auStack_c0,&DAT_10f39abd5);
    (*(code *)(*ppuVar15)[2])(ppuVar15);
    func_0x000109259240(&lStack_f0,apuStack_a8,ppuVar15);
    FUN_109cd45b4(&UNK_10e03e888,&UNK_10f5a92e5,&lStack_f0);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x109cdef64);
    (*pcVar9)();
  }
  __Unwind_Resume();
  func_0x000104bd46a0();
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(puVar12 + 0x18) == 0) {
    pppuVar17 = (undefined ***)&UNK_10e03e888;
    pppuVar27 = (undefined ***)&UNK_10f5a9324;
    func_0x00010952d0c4(&UNK_10e03e888,&UNK_10f5a9324,&UNK_10f5a9597);
    goto LAB_109cdf7b4;
  }
  puStack_240 = (undefined *)0x0;
  puStack_238 = (undefined *)0x0;
  uStack_230 = 0;
  if (*(long *)(puVar12 + 0x18) == 1) {
    FUN_109cdeaf0(&uStack_1a0,*(long *)(puVar12 + 0x10) + 0x28,puVar20);
    if (ppuVar15[0x28] == ppuVar15[0x29]) {
LAB_109cdf334:
      ppuStack_2e0 = (undefined **)0x0;
      pppuStack_2d8 = (undefined ***)0x0;
      func_0x000109c1d4f8(ppuVar15[0x27],&uStack_1a0,&ppuStack_2e0);
      pppuVar27 = &ppuStack_2e0;
      func_0x000109c1eab4(&puStack_240);
      pppuVar17 = pppuStack_2d8;
      if (pppuStack_2d8 != (undefined ***)0x0) {
        pppuVar25 = pppuStack_2d8 + 1;
        do {
          ppuVar28 = *pppuVar25;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar25,0x10);
          if (bVar6) {
            *pppuVar25 = (undefined **)((long)ppuVar28 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppuVar28 == (undefined **)0x0) {
          (*(code *)(*pppuStack_2d8)[2])(pppuStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar17);
        }
      }
    }
    else {
      if ((long)ppuVar15[0x29] - (long)ppuVar15[0x28] == 0x18) {
        puVar10 = ppuVar15[0x27] + 0xc;
        func_0x000109c207f0();
        if (puVar10 == (undefined8 *)0x0) goto LAB_109cdf334;
      }
      pppuVar27 = (undefined ***)&uStack_1a0;
      func_0x000109c1e5b0(ppuVar15[0x27],pppuVar27,ppuVar15 + 0x28,&puStack_240);
    }
    pppuVar17 = (undefined ***)uStack_198;
    if ((undefined ***)uStack_198 != (undefined ***)0x0) {
      pppuVar25 = (undefined ***)(uStack_198 + 1);
      do {
        ppuVar28 = *pppuVar25;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar25,0x10);
        if (bVar6) {
          *pppuVar25 = (undefined **)((long)ppuVar28 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar28 == (undefined **)0x0) {
        (**(code **)((long)*uStack_198 + 0x10))(uStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar17);
      }
    }
  }
  else {
    ppuVar16 = ppuVar15;
    FUN_109cdd1fc();
    pppuStack_2d8 = (undefined ***)0x0;
    ppuStack_2e0 = (undefined **)0x0;
    ppuStack_2c8 = (undefined8 **)0x0;
    ppuStack_2d0 = (undefined **)0x0;
    puStack_2c0 = (undefined8 *)CONCAT44(puStack_2c0._4_4_,0x3f800000);
    plVar13 = *(long **)(puVar12 + 0x10);
    if (plVar13 != (long *)0x0) {
      do {
        if ((*(int *)((long)plVar13 + 0x44) != (int)ppuVar16) &&
           ((int)ppuVar16 != 4 || *(int *)((long)plVar13 + 0x44) != 1)) {
          func_0x00010952d0c4(&UNK_10e03e888,&UNK_10f5a9324,&UNK_10f5a95c3);
          goto LAB_109cdf8c8;
        }
        FUN_109cdeaf0(&plStack_260,plVar13 + 5,puVar20);
        pppuVar27 = &ppuStack_2e0;
        func_0x000107c31944(pppuVar27,plVar13 + 2);
        pppuVar17 = pppuStack_2d8;
        if (pppuStack_2d8 != (undefined ***)0x0) {
          uVar23 = (long)pppuStack_2d8 - 1;
          if (((ulong)pppuStack_2d8 & uVar23) == 0) {
            unaff_x26 = (undefined ***)(uVar23 & (ulong)pppuVar27);
          }
          else {
            unaff_x26 = pppuVar27;
            if (pppuStack_2d8 <= pppuVar27) {
              uVar26 = 0;
              if (pppuStack_2d8 != (undefined ***)0x0) {
                uVar26 = (ulong)pppuVar27 / (ulong)pppuStack_2d8;
              }
              unaff_x26 = (undefined ***)((long)pppuVar27 - uVar26 * (long)pppuStack_2d8);
            }
          }
          if ((long *)ppuStack_2e0[(long)unaff_x26] != (long *)0x0) {
            for (plVar35 = *(long **)ppuStack_2e0[(long)unaff_x26]; plVar35 != (long *)0x0;
                plVar35 = (long *)*plVar35) {
              pppuVar25 = (undefined ***)plVar35[1];
              if (pppuVar25 == pppuVar27) {
                pppuVar25 = &ppuStack_2e0;
                func_0x000104c4fbc4(pppuVar25,plVar35 + 2,plVar13 + 2);
                plVar8 = plStack_258;
                if (((ulong)pppuVar25 & 1) != 0) {
                  if (plStack_258 != (long *)0x0) {
                    plVar35 = plStack_258 + 1;
                    do {
                      lVar32 = *plVar35;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                      if (bVar6) {
                        *plVar35 = lVar32 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar32 == 0) {
                      (**(code **)(*plStack_258 + 0x10))(plStack_258);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                    }
                  }
                  goto LAB_109cdf2cc;
                }
              }
              else {
                if (((ulong)pppuVar17 & uVar23) == 0) {
                  pppuVar25 = (undefined ***)((ulong)pppuVar25 & uVar23);
                }
                else if (pppuVar17 <= pppuVar25) {
                  uVar26 = 0;
                  if (pppuVar17 != (undefined ***)0x0) {
                    uVar26 = (ulong)pppuVar25 / (ulong)pppuVar17;
                  }
                  pppuVar25 = (undefined ***)((long)pppuVar25 - uVar26 * (long)pppuVar17);
                }
                if (pppuVar25 != unaff_x26) break;
              }
            }
          }
        }
        ppuVar28 = (undefined **)0x38;
        __Znwm();
        uStack_1a0 = (code *)ppuVar28;
        uStack_198 = (undefined **)&ppuStack_2e0;
        uStack_190 = 0;
        *ppuVar28 = (undefined *)0x0;
        ppuVar28[1] = (undefined *)pppuVar27;
        if (*(char *)((long)plVar13 + 0x27) < '\0') {
          func_0x000107c3192c(ppuVar28 + 2,plVar13[2],plVar13[3]);
        }
        else {
          puVar18 = (undefined *)plVar13[3];
          puVar12 = (undefined *)plVar13[2];
          ppuVar28[4] = (undefined *)plVar13[4];
          ppuVar28[3] = puVar18;
          ppuVar28[2] = puVar12;
        }
        ppuVar28[6] = (undefined *)plStack_258;
        ppuVar28[5] = (undefined *)plStack_260;
        plStack_260 = (long *)0x0;
        plStack_258 = (long *)0x0;
        uStack_190 = CONCAT71(uStack_190._1_7_,1);
        if ((pppuVar17 == (undefined ***)0x0) ||
           (puStack_2c0._0_4_ * (float)pppuVar17 < (float)(undefined *)((long)ppuStack_2c8 + 1))) {
          uVar23 = 1;
          if ((undefined ***)0x2 < pppuVar17) {
            uVar23 = (ulong)(((ulong)pppuVar17 & (long)pppuVar17 - 1U) != 0);
          }
          uVar23 = uVar23 | (long)pppuVar17 << 1;
          uVar26 = (ulong)((float)(undefined *)((long)ppuStack_2c8 + 1) / puStack_2c0._0_4_);
          if (uVar23 <= uVar26) {
            uVar23 = uVar26;
          }
          func_0x000109c21114(&ppuStack_2e0,uVar23);
          pppuVar17 = pppuStack_2d8;
          if (((ulong)pppuStack_2d8 & (long)pppuStack_2d8 - 1U) == 0) {
            unaff_x26 = (undefined ***)((long)pppuStack_2d8 - 1U & (ulong)pppuVar27);
          }
          else {
            unaff_x26 = pppuVar27;
            if (pppuStack_2d8 <= pppuVar27) {
              uVar23 = 0;
              if (pppuStack_2d8 != (undefined ***)0x0) {
                uVar23 = (ulong)pppuVar27 / (ulong)pppuStack_2d8;
              }
              unaff_x26 = (undefined ***)((long)pppuVar27 - uVar23 * (long)pppuStack_2d8);
            }
          }
        }
        plVar35 = (long *)ppuStack_2e0[(long)unaff_x26];
        if (plVar35 == (long *)0x0) {
          *(undefined ***)uStack_1a0 = ppuStack_2d0;
          ppuStack_2d0 = (undefined **)uStack_1a0;
          ppuStack_2e0[(long)unaff_x26] = (undefined *)&ppuStack_2d0;
          if (*(undefined **)uStack_1a0 != (undefined *)0x0) {
            pppuVar27 = *(undefined ****)(*(undefined **)uStack_1a0 + 8);
            if (((ulong)pppuVar17 & (long)pppuVar17 - 1U) == 0) {
              pppuVar27 = (undefined ***)((ulong)pppuVar27 & (long)pppuVar17 - 1U);
            }
            else if (pppuVar17 <= pppuVar27) {
              uVar23 = 0;
              if (pppuVar17 != (undefined ***)0x0) {
                uVar23 = (ulong)pppuVar27 / (ulong)pppuVar17;
              }
              pppuVar27 = (undefined ***)((long)pppuVar27 - uVar23 * (long)pppuVar17);
            }
            ppuStack_2e0[(long)pppuVar27] = uStack_1a0;
          }
        }
        else {
          *(undefined **)uStack_1a0 = (undefined *)*plVar35;
          *plVar35 = (long)uStack_1a0;
        }
        ppuStack_2c8 = (undefined8 **)((long)ppuStack_2c8 + 1);
LAB_109cdf2cc:
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    pppuVar27 = &ppuStack_2e0;
    func_0x000109c1e820(ppuVar15[0x27],pppuVar27,ppuVar15 + 0x28,&puStack_240);
    func_0x000109c213a4(&ppuStack_2e0);
  }
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  *(undefined4 *)(extraout_x8 + 4) = 0x3f800000;
  if (puStack_238 != puStack_240) {
    uVar23 = 0;
    do {
      lVar32 = *(long *)(puStack_240 + uVar23 * 0x10);
      uVar34 = *(undefined8 *)(lVar32 + 0x40);
      ppuVar16 = ppuVar15;
      FUN_109cde228(ppuVar15,ppuVar15[0x28] + uVar23 * 3);
      ppuStack_288 = ppuVar16;
      if ((ulong)ppuVar16 >> 0x20 == 4) {
        plStack_260 = (long *)0x0;
        plStack_258 = (long *)0x0;
        uStack_250 = 0;
        func_0x0001092d1c20(&plStack_260,lVar32 + 0xc,lVar32 + 0xc + (long)*(int *)(lVar32 + 8) * 4)
        ;
        puVar10 = (undefined8 *)(puStack_240 + uVar23 * 0x10);
        uStack_188 = puVar10[1];
        uStack_190 = *puVar10;
        if (puVar10[1] != 0) {
          plVar13 = (long *)(puVar10[1] + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pcStack_1e0 = FUN_109cdfdb4;
        ppuStack_1d8 = &PTR_DAT_110b3ce68;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_1a0 = FUN_109cdfdb4;
        uStack_198 = &PTR_DAT_110b3ce68;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        FUN_109cde3b8(&puStack_280,uVar34,&uStack_1a0);
        plVar13 = plStack_258;
        pppuStack_2d8 = (undefined ***)0x0;
        ppuStack_2d0 = (undefined **)0x0;
        ppuStack_2e0 = &PTR_DAT_1108a5c28;
        plStack_2b8 = plStack_278;
        puStack_2c0 = puStack_280;
        puStack_280 = (undefined8 *)0x0;
        plStack_278 = (long *)0x0;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        ppuStack_2b0 = (undefined **)0x0;
        uStack_298 = 1;
        plVar35 = plStack_260;
        ppuStack_2c8 = ppuVar16;
        if (plStack_258 != plStack_260) {
          do {
            plVar33 = (long *)((long)plVar35 + 4);
            uStack_224 = (undefined4)*plVar35;
            func_0x0001093aa148(&ppuStack_2b0,&uStack_224);
            plVar8 = plStack_278;
            plVar35 = plVar33;
          } while (plVar33 != plVar13);
          if (plStack_278 != (long *)0x0) {
            plVar13 = plStack_278 + 1;
            do {
              lVar32 = *plVar13;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = lVar32 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar32 == 0) {
              (**(code **)(*plStack_278 + 0x10))(plStack_278);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
        }
        (*(code *)*uStack_198)(&uStack_198);
        uStack_1a0 = (code *)(ppuVar15[0x28] + uVar23 * 3);
        puVar10 = extraout_x8;
        func_0x00010937a098(extraout_x8,uStack_1a0,&UNK_10dd5b8f9,&uStack_1a0,&puStack_280);
        puVar10[7] = ppuStack_2d0;
        puVar10[6] = pppuStack_2d8;
        puVar10[8] = ppuStack_2c8;
        func_0x0001093783c0(puVar10 + 9,&puStack_2c0);
        pppuVar27 = &ppuStack_2b0;
        func_0x00010937843c(puVar10 + 0xb);
        func_0x000105675c90(&ppuStack_2e0);
        (*(code *)*ppuStack_1d8)(&ppuStack_1d8);
        if (plStack_260 != (long *)0x0) {
          plStack_258 = plStack_260;
          __ZdlPv();
        }
      }
      else {
        uStack_198 = (undefined **)((long)&MACH_HEADER.magic + 1);
        uStack_1a0 = (code *)((long)&MACH_HEADER.magic + 1);
        lStack_210 = *(long *)(puStack_240 + uVar23 * 0x10);
        uVar3 = *(uint *)(lStack_210 + 8);
        if (0 < (int)uVar3) {
          iVar4 = *(int *)(lVar32 + 8);
          if (iVar4 < 1) {
            uVar29 = 0xffffffff;
          }
          else {
            uVar29 = *(undefined4 *)(lVar32 + 0xc);
          }
          uStack_198 = (undefined **)CONCAT44(uVar29,1);
          if (uVar3 != 1) {
            if (iVar4 < 2) {
              uVar30 = 0xffffffff;
            }
            else {
              uVar30 = *(undefined4 *)(lVar32 + 0x10);
            }
            uStack_1a0 = (code *)CONCAT44(uVar30,1);
            if (2 < uVar3) {
              if (iVar4 < 3) {
                uVar31 = 0xffffffff;
              }
              else {
                uVar31 = *(undefined4 *)(lVar32 + 0x14);
              }
              uStack_1a0 = (code *)CONCAT44(uVar30,uVar31);
              if (uVar3 != 3) {
                if (iVar4 < 4) {
                  uVar30 = 0xffffffff;
                }
                else {
                  uVar30 = *(undefined4 *)(lVar32 + 0x18);
                }
                uStack_198 = (undefined **)CONCAT44(uVar29,uVar30);
              }
            }
          }
        }
        lStack_208 = *(long *)((long)(puStack_240 + uVar23 * 0x10) + 8);
        if (lStack_208 != 0) {
          plVar13 = (long *)(lStack_208 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_220 = 0x109cdfe10;
        ppuStack_218 = &PTR_DAT_110b3ce88;
        plStack_260 = (long *)0x0;
        plStack_258 = (long *)0x0;
        FUN_109d0eaa4(&ppuStack_2e0,&uStack_1a0,&ppuStack_288,uVar34,&uStack_220);
        puStack_280 = ppuVar15[0x28] + uVar23 * 3;
        puVar10 = extraout_x8;
        func_0x00010937a098(extraout_x8,puStack_280,&UNK_10dd5b8f9,&puStack_280,&uStack_2f0);
        puVar10[7] = ppuStack_2d0;
        puVar10[6] = pppuStack_2d8;
        puVar10[8] = ppuStack_2c8;
        func_0x0001093783c0(puVar10 + 9,&puStack_2c0);
        pppuVar27 = &ppuStack_2b0;
        func_0x00010937843c(puVar10 + 0xb);
        func_0x000105675c90(&ppuStack_2e0);
        (*(code *)*ppuStack_218)(&ppuStack_218);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < (ulong)((long)puStack_238 - (long)puStack_240 >> 4));
  }
  ppuStack_2e0 = &puStack_240;
  pppuVar17 = &ppuStack_2e0;
  func_0x000109c2070c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
    return;
  }
LAB_109cdf7b4:
  ___stack_chk_fail();
  pppuVar25 = pppuVar27;
  func_0x00010959b818(&uStack_1a0);
  uVar36 = SUB81(pppuVar25,0);
  if ((int)pppuVar27 != 1) {
    ppuStack_2e0 = &puStack_240;
    func_0x000109c2070c(&ppuStack_2e0);
    __Unwind_Resume();
    *(undefined1 *)((long)pppuVar17[0x27] + 0x181) = uVar36;
    return;
  }
  ___cxa_begin_catch();
  func_0x000107c31940(&puStack_280,*(ulong *)((*pppuVar17)[-1] + 8) & 0x7fffffffffffffff);
  func_0x000109259240(&plStack_260,&puStack_280,&DAT_10f39abd5);
  (*(code *)(*pppuVar17)[2])(pppuVar17);
  func_0x000109259240(&ppuStack_2e0,&plStack_260,pppuVar17);
  FUN_109cd45b4(&UNK_10e03e888,&UNK_10f5a9324,&ppuStack_2e0);
LAB_109cdf8c8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109cdf8cc);
  (*pcVar9)();
}



/* Entry: 109cdec50; end: 109cdefbf;  */

void FUN_109cdec50(long param_1,undefined8 param_2,undefined *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined ***pppuVar11;
  undefined1 uVar12;
  undefined *puVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *extraout_x8;
  undefined ***pppuVar16;
  long lVar17;
  ulong uVar18;
  undefined ***pppuVar19;
  undefined **ppuVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  undefined ***unaff_x26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined ***pppuStack_278;
  undefined **ppuStack_270;
  undefined8 **ppuStack_268;
  undefined8 *puStack_260;
  long *plStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 **ppuStack_228;
  undefined8 *puStack_220;
  long *plStack_218;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_100;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 *apuStack_48 [3];
  
  puVar7 = (undefined8 *)0x188;
  puVar13 = param_3;
  __Znwm();
  *puVar7 = &PTR_DAT_110b2c248;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 5) = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  *(undefined4 *)(puVar7 + 0x10) = 0x3f800000;
  *(undefined1 *)((long)puVar7 + 0xa9) = 0;
  *(undefined8 *)((long)puVar7 + 0xac) = 0;
  *(undefined8 *)((long)puVar7 + 0xbc) = 0;
  *(undefined8 *)((long)puVar7 + 0xb4) = 0;
  puVar7[0x12] = 0;
  puVar7[0x11] = 0;
  puVar7[0x14] = 0;
  puVar7[0x13] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1b] = 0;
  plVar8 = *(long **)(param_1 + 0x138);
  *(undefined8 **)(param_1 + 0x138) = puVar7;
  puVar7[0x1a] = 0;
  puVar7[0x19] = 0;
  *(undefined8 *)((long)puVar7 + 0x17b) = 0;
  *(undefined8 *)((long)puVar7 + 0x173) = 0;
  puVar7[0x2c] = 0;
  puVar7[0x2b] = 0;
  puVar7[0x2e] = 0;
  puVar7[0x2d] = 0;
  puVar7[0x28] = 0;
  puVar7[0x27] = 0;
  puVar7[0x2a] = 0;
  puVar7[0x29] = 0;
  puVar7[0x24] = 0;
  puVar7[0x23] = 0;
  puVar7[0x26] = 0;
  puVar7[0x25] = 0;
  puVar7[0x22] = 0;
  puVar7[0x21] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  uVar24 = param_2;
  FUN_109d15d68();
  if ((int)uVar24 == 0) {
    func_0x000109c1eb98(*(undefined8 *)(param_1 + 0x138),param_2);
  }
  else {
    FUN_109d15c90(&lStack_90,param_2);
    puVar13 = (undefined *)(ulong)(uint)((int)lStack_88 - (int)lStack_90);
    func_0x000109c2039c(*(undefined8 *)(param_1 + 0x138),lStack_90,puVar13);
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x138) + 0x28);
  uVar14 = (ulong)uVar1;
  if (uVar1 == 0) {
    ppuVar9 = (undefined8 **)&UNK_10e03e888;
    puVar27 = &UNK_10f5a92e5;
    puVar13 = &UNK_10f5a957d;
    func_0x00010952d0c4(&UNK_10e03e888,&UNK_10f5a92e5,&UNK_10f5a957d);
  }
  else {
    if (0 < (int)uVar1) {
      plVar8 = *(long **)(*(long *)(param_1 + 0x138) + 0x10);
      do {
        *(undefined1 *)(*plVar8 + 0x61) = 1;
        uVar14 = uVar14 - 1;
        plVar8 = plVar8 + 2;
      } while (uVar14 != 0);
    }
    puVar27 = param_3 + 0x18;
    FUN_109cd31ac(&lStack_90,param_3);
    FUN_109cdfa10(param_1 + 0x80);
    *(long *)(param_1 + 0x88) = lStack_88;
    *(long *)(param_1 + 0x80) = lStack_90;
    *(undefined8 *)(param_1 + 0x90) = uStack_80;
    lStack_88 = 0;
    uStack_80 = 0;
    lStack_90 = 0;
    func_0x000109cdfa74(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = uStack_70;
    *(undefined8 *)(param_1 + 0x98) = uStack_78;
    *(undefined8 *)(param_1 + 0xa8) = uStack_68;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    apuStack_48[0] = &uStack_78;
    FUN_109cd42a0(apuStack_48);
    apuStack_48[0] = &lStack_90;
    func_0x000109cd4310(apuStack_48);
    FUN_109cd2ef0(&lStack_90,param_3 + 0x18);
    func_0x000107c3193c(param_1 + 0x140);
    *(long *)(param_1 + 0x148) = lStack_88;
    *(long *)(param_1 + 0x140) = lStack_90;
    *(undefined8 *)(param_1 + 0x150) = uStack_80;
    lStack_88 = 0;
    uStack_80 = 0;
    lStack_90 = 0;
    ppuVar9 = apuStack_48;
    apuStack_48[0] = &lStack_90;
    func_0x000104c607c8();
    lVar17 = *(long *)(param_1 + 0x138);
    *(undefined1 *)(lVar17 + 0x180) = *(undefined1 *)(param_1 + 0x40);
    piVar15 = (int *)(lVar17 + 0x138);
    if (*(char *)(lVar17 + 0x14f) < '\0') {
      if (*(long *)(lVar17 + 0x140) != 6) {
        return;
      }
      piVar15 = *(int **)piVar15;
    }
    else if (*(char *)(lVar17 + 0x14f) != '\x06') {
      return;
    }
    if (*piVar15 != 0x494c4654 || (short)piVar15[1] != 0x4554) {
      return;
    }
    if (*(int *)(param_1 + 0x118) == 0) {
      *(undefined4 *)(param_1 + 0xbc) = 4;
      return;
    }
  }
  func_0x0001092612e0();
  puVar28 = puVar27;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if ((int)puVar27 == 1) {
    ___cxa_begin_catch();
    func_0x000107c31940(auStack_60,*(ulong *)((*ppuVar9)[-1] + 8) & 0x7fffffffffffffff);
    func_0x000109259240(apuStack_48,auStack_60,&DAT_10f39abd5);
    (*(code *)(*ppuVar9)[2])(ppuVar9);
    func_0x000109259240(&lStack_90,apuStack_48,ppuVar9);
    FUN_109cd45b4(&UNK_10e03e888,&UNK_10f5a92e5,&lStack_90);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109cdef64);
    (*pcVar6)();
  }
  __Unwind_Resume();
  func_0x000104bd46a0();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(puVar28 + 0x18) == 0) {
    pppuVar11 = (undefined ***)&UNK_10e03e888;
    pppuVar19 = (undefined ***)&UNK_10f5a9324;
    func_0x00010952d0c4(&UNK_10e03e888,&UNK_10f5a9324,&UNK_10f5a9597);
    goto LAB_109cdf7b4;
  }
  puStack_1e0 = (undefined *)0x0;
  puStack_1d8 = (undefined *)0x0;
  uStack_1d0 = 0;
  if (*(long *)(puVar28 + 0x18) == 1) {
    FUN_109cdeaf0(&uStack_140,*(long *)(puVar28 + 0x10) + 0x28,puVar13);
    if (ppuVar9[0x28] == ppuVar9[0x29]) {
LAB_109cdf334:
      ppuStack_280 = (undefined **)0x0;
      pppuStack_278 = (undefined ***)0x0;
      func_0x000109c1d4f8(ppuVar9[0x27],&uStack_140,&ppuStack_280);
      pppuVar19 = &ppuStack_280;
      func_0x000109c1eab4(&puStack_1e0);
      pppuVar11 = pppuStack_278;
      if (pppuStack_278 != (undefined ***)0x0) {
        pppuVar16 = pppuStack_278 + 1;
        do {
          ppuVar20 = *pppuVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
          if (bVar4) {
            *pppuVar16 = (undefined **)((long)ppuVar20 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar20 == (undefined **)0x0) {
          (*(code *)(*pppuStack_278)[2])(pppuStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar11);
        }
      }
    }
    else {
      if ((long)ppuVar9[0x29] - (long)ppuVar9[0x28] == 0x18) {
        puVar7 = ppuVar9[0x27] + 0xc;
        func_0x000109c207f0();
        if (puVar7 == (undefined8 *)0x0) goto LAB_109cdf334;
      }
      pppuVar19 = (undefined ***)&uStack_140;
      func_0x000109c1e5b0(ppuVar9[0x27],pppuVar19,ppuVar9 + 0x28,&puStack_1e0);
    }
    pppuVar11 = (undefined ***)uStack_138;
    if ((undefined ***)uStack_138 != (undefined ***)0x0) {
      pppuVar16 = (undefined ***)(uStack_138 + 1);
      do {
        ppuVar20 = *pppuVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
        if (bVar4) {
          *pppuVar16 = (undefined **)((long)ppuVar20 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar20 == (undefined **)0x0) {
        (**(code **)((long)*uStack_138 + 0x10))(uStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar11);
      }
    }
  }
  else {
    ppuVar10 = ppuVar9;
    FUN_109cdd1fc();
    pppuStack_278 = (undefined ***)0x0;
    ppuStack_280 = (undefined **)0x0;
    ppuStack_268 = (undefined8 **)0x0;
    ppuStack_270 = (undefined **)0x0;
    puStack_260 = (undefined8 *)CONCAT44(puStack_260._4_4_,0x3f800000);
    plVar8 = *(long **)(puVar28 + 0x10);
    if (plVar8 != (long *)0x0) {
      do {
        if ((*(int *)((long)plVar8 + 0x44) != (int)ppuVar10) &&
           ((int)ppuVar10 != 4 || *(int *)((long)plVar8 + 0x44) != 1)) {
          func_0x00010952d0c4(&UNK_10e03e888,&UNK_10f5a9324,&UNK_10f5a95c3);
          goto LAB_109cdf8c8;
        }
        FUN_109cdeaf0(&plStack_200,plVar8 + 5,puVar13);
        pppuVar19 = &ppuStack_280;
        func_0x000107c31944(pppuVar19,plVar8 + 2);
        pppuVar11 = pppuStack_278;
        if (pppuStack_278 != (undefined ***)0x0) {
          uVar14 = (long)pppuStack_278 - 1;
          if (((ulong)pppuStack_278 & uVar14) == 0) {
            unaff_x26 = (undefined ***)(uVar14 & (ulong)pppuVar19);
          }
          else {
            unaff_x26 = pppuVar19;
            if (pppuStack_278 <= pppuVar19) {
              uVar18 = 0;
              if (pppuStack_278 != (undefined ***)0x0) {
                uVar18 = (ulong)pppuVar19 / (ulong)pppuStack_278;
              }
              unaff_x26 = (undefined ***)((long)pppuVar19 - uVar18 * (long)pppuStack_278);
            }
          }
          if ((long *)ppuStack_280[(long)unaff_x26] != (long *)0x0) {
            for (plVar26 = *(long **)ppuStack_280[(long)unaff_x26]; plVar26 != (long *)0x0;
                plVar26 = (long *)*plVar26) {
              pppuVar16 = (undefined ***)plVar26[1];
              if (pppuVar16 == pppuVar19) {
                pppuVar16 = &ppuStack_280;
                func_0x000104c4fbc4(pppuVar16,plVar26 + 2,plVar8 + 2);
                plVar5 = plStack_1f8;
                if (((ulong)pppuVar16 & 1) != 0) {
                  if (plStack_1f8 != (long *)0x0) {
                    plVar26 = plStack_1f8 + 1;
                    do {
                      lVar17 = *plVar26;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                      if (bVar4) {
                        *plVar26 = lVar17 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (lVar17 == 0) {
                      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
                    }
                  }
                  goto LAB_109cdf2cc;
                }
              }
              else {
                if (((ulong)pppuVar11 & uVar14) == 0) {
                  pppuVar16 = (undefined ***)((ulong)pppuVar16 & uVar14);
                }
                else if (pppuVar11 <= pppuVar16) {
                  uVar18 = 0;
                  if (pppuVar11 != (undefined ***)0x0) {
                    uVar18 = (ulong)pppuVar16 / (ulong)pppuVar11;
                  }
                  pppuVar16 = (undefined ***)((long)pppuVar16 - uVar18 * (long)pppuVar11);
                }
                if (pppuVar16 != unaff_x26) break;
              }
            }
          }
        }
        ppuVar20 = (undefined **)0x38;
        __Znwm();
        uStack_140 = (code *)ppuVar20;
        uStack_138 = (undefined **)&ppuStack_280;
        uStack_130 = 0;
        *ppuVar20 = (undefined *)0x0;
        ppuVar20[1] = (undefined *)pppuVar19;
        if (*(char *)((long)plVar8 + 0x27) < '\0') {
          func_0x000107c3192c(ppuVar20 + 2,plVar8[2],plVar8[3]);
        }
        else {
          puVar28 = (undefined *)plVar8[3];
          puVar27 = (undefined *)plVar8[2];
          ppuVar20[4] = (undefined *)plVar8[4];
          ppuVar20[3] = puVar28;
          ppuVar20[2] = puVar27;
        }
        ppuVar20[6] = (undefined *)plStack_1f8;
        ppuVar20[5] = (undefined *)plStack_200;
        plStack_200 = (long *)0x0;
        plStack_1f8 = (long *)0x0;
        uStack_130 = CONCAT71(uStack_130._1_7_,1);
        if ((pppuVar11 == (undefined ***)0x0) ||
           (puStack_260._0_4_ * (float)pppuVar11 < (float)(undefined *)((long)ppuStack_268 + 1))) {
          uVar14 = 1;
          if ((undefined ***)0x2 < pppuVar11) {
            uVar14 = (ulong)(((ulong)pppuVar11 & (long)pppuVar11 - 1U) != 0);
          }
          uVar14 = uVar14 | (long)pppuVar11 << 1;
          uVar18 = (ulong)((float)(undefined *)((long)ppuStack_268 + 1) / puStack_260._0_4_);
          if (uVar14 <= uVar18) {
            uVar14 = uVar18;
          }
          func_0x000109c21114(&ppuStack_280,uVar14);
          pppuVar11 = pppuStack_278;
          if (((ulong)pppuStack_278 & (long)pppuStack_278 - 1U) == 0) {
            unaff_x26 = (undefined ***)((long)pppuStack_278 - 1U & (ulong)pppuVar19);
          }
          else {
            unaff_x26 = pppuVar19;
            if (pppuStack_278 <= pppuVar19) {
              uVar14 = 0;
              if (pppuStack_278 != (undefined ***)0x0) {
                uVar14 = (ulong)pppuVar19 / (ulong)pppuStack_278;
              }
              unaff_x26 = (undefined ***)((long)pppuVar19 - uVar14 * (long)pppuStack_278);
            }
          }
        }
        plVar26 = (long *)ppuStack_280[(long)unaff_x26];
        if (plVar26 == (long *)0x0) {
          *(undefined ***)uStack_140 = ppuStack_270;
          ppuStack_270 = (undefined **)uStack_140;
          ppuStack_280[(long)unaff_x26] = (undefined *)&ppuStack_270;
          if (*(undefined **)uStack_140 != (undefined *)0x0) {
            pppuVar19 = *(undefined ****)(*(undefined **)uStack_140 + 8);
            if (((ulong)pppuVar11 & (long)pppuVar11 - 1U) == 0) {
              pppuVar19 = (undefined ***)((ulong)pppuVar19 & (long)pppuVar11 - 1U);
            }
            else if (pppuVar11 <= pppuVar19) {
              uVar14 = 0;
              if (pppuVar11 != (undefined ***)0x0) {
                uVar14 = (ulong)pppuVar19 / (ulong)pppuVar11;
              }
              pppuVar19 = (undefined ***)((long)pppuVar19 - uVar14 * (long)pppuVar11);
            }
            ppuStack_280[(long)pppuVar19] = uStack_140;
          }
        }
        else {
          *(undefined **)uStack_140 = (undefined *)*plVar26;
          *plVar26 = (long)uStack_140;
        }
        ppuStack_268 = (undefined8 **)((long)ppuStack_268 + 1);
LAB_109cdf2cc:
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    pppuVar19 = &ppuStack_280;
    func_0x000109c1e820(ppuVar9[0x27],pppuVar19,ppuVar9 + 0x28,&puStack_1e0);
    func_0x000109c213a4(&ppuStack_280);
  }
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  *(undefined4 *)(extraout_x8 + 4) = 0x3f800000;
  if (puStack_1d8 != puStack_1e0) {
    uVar14 = 0;
    do {
      lVar17 = *(long *)(puStack_1e0 + uVar14 * 0x10);
      uVar24 = *(undefined8 *)(lVar17 + 0x40);
      ppuVar10 = ppuVar9;
      FUN_109cde228(ppuVar9,ppuVar9[0x28] + uVar14 * 3);
      ppuStack_228 = ppuVar10;
      if ((ulong)ppuVar10 >> 0x20 == 4) {
        plStack_200 = (long *)0x0;
        plStack_1f8 = (long *)0x0;
        uStack_1f0 = 0;
        func_0x0001092d1c20(&plStack_200,lVar17 + 0xc,lVar17 + 0xc + (long)*(int *)(lVar17 + 8) * 4)
        ;
        puVar7 = (undefined8 *)(puStack_1e0 + uVar14 * 0x10);
        uStack_128 = puVar7[1];
        uStack_130 = *puVar7;
        if (puVar7[1] != 0) {
          plVar8 = (long *)(puVar7[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pcStack_180 = FUN_109cdfdb4;
        ppuStack_178 = &PTR_DAT_110b3ce68;
        uStack_290 = 0;
        uStack_288 = 0;
        uStack_140 = FUN_109cdfdb4;
        uStack_138 = &PTR_DAT_110b3ce68;
        uStack_170 = 0;
        uStack_168 = 0;
        FUN_109cde3b8(&puStack_220,uVar24,&uStack_140);
        plVar8 = plStack_1f8;
        pppuStack_278 = (undefined ***)0x0;
        ppuStack_270 = (undefined **)0x0;
        ppuStack_280 = &PTR_DAT_1108a5c28;
        plStack_258 = plStack_218;
        puStack_260 = puStack_220;
        puStack_220 = (undefined8 *)0x0;
        plStack_218 = (long *)0x0;
        uStack_248 = 0;
        uStack_240 = 0;
        ppuStack_250 = (undefined **)0x0;
        uStack_238 = 1;
        plVar26 = plStack_200;
        ppuStack_268 = ppuVar10;
        if (plStack_1f8 != plStack_200) {
          do {
            plVar25 = (long *)((long)plVar26 + 4);
            uStack_1c4 = (undefined4)*plVar26;
            func_0x0001093aa148(&ppuStack_250,&uStack_1c4);
            plVar5 = plStack_218;
            plVar26 = plVar25;
          } while (plVar25 != plVar8);
          if (plStack_218 != (long *)0x0) {
            plVar8 = plStack_218 + 1;
            do {
              lVar17 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar17 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plStack_218 + 0x10))(plStack_218);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
        (*(code *)*uStack_138)(&uStack_138);
        uStack_140 = (code *)(ppuVar9[0x28] + uVar14 * 3);
        puVar7 = extraout_x8;
        func_0x00010937a098(extraout_x8,uStack_140,&UNK_10dd5b8f9,&uStack_140,&puStack_220);
        puVar7[7] = ppuStack_270;
        puVar7[6] = pppuStack_278;
        puVar7[8] = ppuStack_268;
        func_0x0001093783c0(puVar7 + 9,&puStack_260);
        pppuVar19 = &ppuStack_250;
        func_0x00010937843c(puVar7 + 0xb);
        func_0x000105675c90(&ppuStack_280);
        (*(code *)*ppuStack_178)(&ppuStack_178);
        if (plStack_200 != (long *)0x0) {
          plStack_1f8 = plStack_200;
          __ZdlPv();
        }
      }
      else {
        uStack_138 = (undefined **)((long)&MACH_HEADER.magic + 1);
        uStack_140 = (code *)((long)&MACH_HEADER.magic + 1);
        lStack_1b0 = *(long *)(puStack_1e0 + uVar14 * 0x10);
        uVar1 = *(uint *)(lStack_1b0 + 8);
        if (0 < (int)uVar1) {
          iVar2 = *(int *)(lVar17 + 8);
          if (iVar2 < 1) {
            uVar21 = 0xffffffff;
          }
          else {
            uVar21 = *(undefined4 *)(lVar17 + 0xc);
          }
          uStack_138 = (undefined **)CONCAT44(uVar21,1);
          if (uVar1 != 1) {
            if (iVar2 < 2) {
              uVar22 = 0xffffffff;
            }
            else {
              uVar22 = *(undefined4 *)(lVar17 + 0x10);
            }
            uStack_140 = (code *)CONCAT44(uVar22,1);
            if (2 < uVar1) {
              if (iVar2 < 3) {
                uVar23 = 0xffffffff;
              }
              else {
                uVar23 = *(undefined4 *)(lVar17 + 0x14);
              }
              uStack_140 = (code *)CONCAT44(uVar22,uVar23);
              if (uVar1 != 3) {
                if (iVar2 < 4) {
                  uVar22 = 0xffffffff;
                }
                else {
                  uVar22 = *(undefined4 *)(lVar17 + 0x18);
                }
                uStack_138 = (undefined **)CONCAT44(uVar21,uVar22);
              }
            }
          }
        }
        lStack_1a8 = *(long *)((long)(puStack_1e0 + uVar14 * 0x10) + 8);
        if (lStack_1a8 != 0) {
          plVar8 = (long *)(lStack_1a8 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_1c0 = 0x109cdfe10;
        ppuStack_1b8 = &PTR_DAT_110b3ce88;
        plStack_200 = (long *)0x0;
        plStack_1f8 = (long *)0x0;
        FUN_109d0eaa4(&ppuStack_280,&uStack_140,&ppuStack_228,uVar24,&uStack_1c0);
        puStack_220 = ppuVar9[0x28] + uVar14 * 3;
        puVar7 = extraout_x8;
        func_0x00010937a098(extraout_x8,puStack_220,&UNK_10dd5b8f9,&puStack_220,&uStack_290);
        puVar7[7] = ppuStack_270;
        puVar7[6] = pppuStack_278;
        puVar7[8] = ppuStack_268;
        func_0x0001093783c0(puVar7 + 9,&puStack_260);
        pppuVar19 = &ppuStack_250;
        func_0x00010937843c(puVar7 + 0xb);
        func_0x000105675c90(&ppuStack_280);
        (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulong)((long)puStack_1d8 - (long)puStack_1e0 >> 4));
  }
  ppuStack_280 = &puStack_1e0;
  pppuVar11 = &ppuStack_280;
  func_0x000109c2070c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    return;
  }
LAB_109cdf7b4:
  ___stack_chk_fail();
  pppuVar16 = pppuVar19;
  func_0x00010959b818(&uStack_140);
  uVar12 = SUB81(pppuVar16,0);
  if ((int)pppuVar19 != 1) {
    ppuStack_280 = &puStack_1e0;
    func_0x000109c2070c(&ppuStack_280);
    __Unwind_Resume();
    *(undefined1 *)((long)pppuVar11[0x27] + 0x181) = uVar12;
    return;
  }
  ___cxa_begin_catch();
  func_0x000107c31940(&puStack_220,*(ulong *)((*pppuVar11)[-1] + 8) & 0x7fffffffffffffff);
  func_0x000109259240(&plStack_200,&puStack_220,&DAT_10f39abd5);
  (*(code *)(*pppuVar11)[2])(pppuVar11);
  func_0x000109259240(&ppuStack_280,&plStack_200,pppuVar11);
  FUN_109cd45b4(&UNK_10e03e888,&UNK_10f5a9324,&ppuStack_280);
LAB_109cdf8c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109cdf8cc);
  (*pcVar6)();
}



/* Entry: 109cdefc0; end: 109cdf9ff;  */

void FUN_109cdefc0(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined1 uVar9;
  undefined ***pppuVar10;
  ulong uVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined ***unaff_x26;
  long lVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  undefined ***pppuStack_1e8;
  undefined **ppuStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  ulong uStack_198;
  long lStack_190;
  long *plStack_188;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  long lStack_118;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_3 + 0x18) == 0) {
    pppuVar8 = (undefined ***)&UNK_10e03e888;
    pppuVar12 = (undefined ***)&UNK_10f5a9324;
    func_0x00010952d0c4(&UNK_10e03e888,&UNK_10f5a9324,&UNK_10f5a9597);
    goto LAB_109cdf7b4;
  }
  puStack_150 = (undefined *)0x0;
  puStack_148 = (undefined *)0x0;
  uStack_140 = 0;
  if (*(long *)(param_3 + 0x18) == 1) {
    FUN_109cdeaf0(&uStack_b0,*(long *)(param_3 + 0x10) + 0x28,param_4);
    if (*(long *)(param_2 + 0x140) == *(long *)(param_2 + 0x148)) {
LAB_109cdf334:
      ppuStack_1f0 = (undefined **)0x0;
      pppuStack_1e8 = (undefined ***)0x0;
      func_0x000109c1d4f8(*(undefined8 *)(param_2 + 0x138),&uStack_b0,&ppuStack_1f0);
      pppuVar12 = &ppuStack_1f0;
      func_0x000109c1eab4(&puStack_150);
      pppuVar8 = pppuStack_1e8;
      if (pppuStack_1e8 != (undefined ***)0x0) {
        pppuVar10 = pppuStack_1e8 + 1;
        do {
          ppuVar13 = *pppuVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
          if (bVar4) {
            *pppuVar10 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_1e8)[2])(pppuStack_1e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
        }
      }
    }
    else {
      if (*(long *)(param_2 + 0x148) - *(long *)(param_2 + 0x140) == 0x18) {
        lVar22 = *(long *)(param_2 + 0x138) + 0x60;
        func_0x000109c207f0();
        if (lVar22 == 0) goto LAB_109cdf334;
      }
      pppuVar12 = (undefined ***)&uStack_b0;
      func_0x000109c1e5b0(*(undefined8 *)(param_2 + 0x138),pppuVar12,param_2 + 0x140,&puStack_150);
    }
    pppuVar8 = (undefined ***)uStack_a8;
    if ((undefined ***)uStack_a8 != (undefined ***)0x0) {
      pppuVar10 = (undefined ***)(uStack_a8 + 1);
      do {
        ppuVar13 = *pppuVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar4) {
          *pppuVar10 = (undefined **)((long)ppuVar13 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (**(code **)((long)*uStack_a8 + 0x10))(uStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
      }
    }
  }
  else {
    uVar23 = param_2;
    FUN_109cdd1fc();
    pppuStack_1e8 = (undefined ***)0x0;
    ppuStack_1f0 = (undefined **)0x0;
    uStack_1d8 = 0;
    ppuStack_1e0 = (undefined **)0x0;
    lStack_1d0 = CONCAT44(lStack_1d0._4_4_,0x3f800000);
    plVar17 = *(long **)(param_3 + 0x10);
    if (plVar17 != (long *)0x0) {
      do {
        if ((*(int *)((long)plVar17 + 0x44) != (int)uVar23) &&
           ((int)uVar23 != 4 || *(int *)((long)plVar17 + 0x44) != 1)) {
          func_0x00010952d0c4(&UNK_10e03e888,&UNK_10f5a9324,&UNK_10f5a95c3);
          goto LAB_109cdf8c8;
        }
        FUN_109cdeaf0(&plStack_170,plVar17 + 5,param_4);
        pppuVar12 = &ppuStack_1f0;
        func_0x000107c31944(pppuVar12,plVar17 + 2);
        pppuVar8 = pppuStack_1e8;
        if (pppuStack_1e8 != (undefined ***)0x0) {
          uVar20 = (long)pppuStack_1e8 - 1;
          if (((ulong)pppuStack_1e8 & uVar20) == 0) {
            unaff_x26 = (undefined ***)(uVar20 & (ulong)pppuVar12);
          }
          else {
            unaff_x26 = pppuVar12;
            if (pppuStack_1e8 <= pppuVar12) {
              uVar11 = 0;
              if (pppuStack_1e8 != (undefined ***)0x0) {
                uVar11 = (ulong)pppuVar12 / (ulong)pppuStack_1e8;
              }
              unaff_x26 = (undefined ***)((long)pppuVar12 - uVar11 * (long)pppuStack_1e8);
            }
          }
          if ((long *)ppuStack_1f0[(long)unaff_x26] != (long *)0x0) {
            for (plVar21 = *(long **)ppuStack_1f0[(long)unaff_x26]; plVar21 != (long *)0x0;
                plVar21 = (long *)*plVar21) {
              pppuVar10 = (undefined ***)plVar21[1];
              if (pppuVar10 == pppuVar12) {
                pppuVar10 = &ppuStack_1f0;
                func_0x000104c4fbc4(pppuVar10,plVar21 + 2,plVar17 + 2);
                plVar5 = plStack_168;
                if (((ulong)pppuVar10 & 1) != 0) {
                  if (plStack_168 != (long *)0x0) {
                    plVar21 = plStack_168 + 1;
                    do {
                      lVar22 = *plVar21;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                      if (bVar4) {
                        *plVar21 = lVar22 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (lVar22 == 0) {
                      (**(code **)(*plStack_168 + 0x10))(plStack_168);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
                    }
                  }
                  goto LAB_109cdf2cc;
                }
              }
              else {
                if (((ulong)pppuVar8 & uVar20) == 0) {
                  pppuVar10 = (undefined ***)((ulong)pppuVar10 & uVar20);
                }
                else if (pppuVar8 <= pppuVar10) {
                  uVar11 = 0;
                  if (pppuVar8 != (undefined ***)0x0) {
                    uVar11 = (ulong)pppuVar10 / (ulong)pppuVar8;
                  }
                  pppuVar10 = (undefined ***)((long)pppuVar10 - uVar11 * (long)pppuVar8);
                }
                if (pppuVar10 != unaff_x26) break;
              }
            }
          }
        }
        ppuVar13 = (undefined **)0x38;
        __Znwm();
        uStack_a8 = (undefined **)&ppuStack_1f0;
        uStack_a0 = 0;
        *ppuVar13 = (undefined *)0x0;
        ppuVar13[1] = (undefined *)pppuVar12;
        uStack_b0 = (code *)ppuVar13;
        if (*(char *)((long)plVar17 + 0x27) < '\0') {
          func_0x000107c3192c(ppuVar13 + 2,plVar17[2],plVar17[3]);
        }
        else {
          puVar25 = (undefined *)plVar17[3];
          puVar24 = (undefined *)plVar17[2];
          ppuVar13[4] = (undefined *)plVar17[4];
          ppuVar13[3] = puVar25;
          ppuVar13[2] = puVar24;
        }
        ppuVar13[6] = (undefined *)plStack_168;
        ppuVar13[5] = (undefined *)plStack_170;
        plStack_170 = (long *)0x0;
        plStack_168 = (long *)0x0;
        uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
        if ((pppuVar8 == (undefined ***)0x0) ||
           ((float)lStack_1d0 * (float)pppuVar8 < (float)(uStack_1d8 + 1))) {
          uVar20 = 1;
          if ((undefined ***)0x2 < pppuVar8) {
            uVar20 = (ulong)(((ulong)pppuVar8 & (long)pppuVar8 - 1U) != 0);
          }
          uVar20 = uVar20 | (long)pppuVar8 << 1;
          uVar11 = (ulong)((float)(uStack_1d8 + 1) / (float)lStack_1d0);
          if (uVar20 <= uVar11) {
            uVar20 = uVar11;
          }
          func_0x000109c21114(&ppuStack_1f0,uVar20);
          pppuVar8 = pppuStack_1e8;
          if (((ulong)pppuStack_1e8 & (long)pppuStack_1e8 - 1U) == 0) {
            unaff_x26 = (undefined ***)((long)pppuStack_1e8 - 1U & (ulong)pppuVar12);
          }
          else {
            unaff_x26 = pppuVar12;
            if (pppuStack_1e8 <= pppuVar12) {
              uVar20 = 0;
              if (pppuStack_1e8 != (undefined ***)0x0) {
                uVar20 = (ulong)pppuVar12 / (ulong)pppuStack_1e8;
              }
              unaff_x26 = (undefined ***)((long)pppuVar12 - uVar20 * (long)pppuStack_1e8);
            }
          }
        }
        plVar21 = (long *)ppuStack_1f0[(long)unaff_x26];
        if (plVar21 == (long *)0x0) {
          *(undefined ***)uStack_b0 = ppuStack_1e0;
          ppuStack_1e0 = (undefined **)uStack_b0;
          ppuStack_1f0[(long)unaff_x26] = (undefined *)&ppuStack_1e0;
          if (*(undefined **)uStack_b0 != (undefined *)0x0) {
            pppuVar12 = *(undefined ****)(*(undefined **)uStack_b0 + 8);
            if (((ulong)pppuVar8 & (long)pppuVar8 - 1U) == 0) {
              pppuVar12 = (undefined ***)((ulong)pppuVar12 & (long)pppuVar8 - 1U);
            }
            else if (pppuVar8 <= pppuVar12) {
              uVar20 = 0;
              if (pppuVar8 != (undefined ***)0x0) {
                uVar20 = (ulong)pppuVar12 / (ulong)pppuVar8;
              }
              pppuVar12 = (undefined ***)((long)pppuVar12 - uVar20 * (long)pppuVar8);
            }
            ppuStack_1f0[(long)pppuVar12] = uStack_b0;
          }
        }
        else {
          *(undefined **)uStack_b0 = (undefined *)*plVar21;
          *plVar21 = (long)uStack_b0;
        }
        uStack_1d8 = uStack_1d8 + 1;
LAB_109cdf2cc:
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    pppuVar12 = &ppuStack_1f0;
    func_0x000109c1e820(*(undefined8 *)(param_2 + 0x138),pppuVar12,param_2 + 0x140,&puStack_150);
    func_0x000109c213a4(&ppuStack_1f0);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (puStack_148 != puStack_150) {
    uVar23 = 0;
    do {
      lVar22 = *(long *)(puStack_150 + uVar23 * 0x10);
      uVar18 = *(undefined8 *)(lVar22 + 0x40);
      uVar20 = param_2;
      FUN_109cde228(param_2,*(long *)(param_2 + 0x140) + uVar23 * 0x18);
      uStack_198 = uVar20;
      if (uVar20 >> 0x20 == 4) {
        plStack_170 = (long *)0x0;
        plStack_168 = (long *)0x0;
        uStack_160 = 0;
        func_0x0001092d1c20(&plStack_170,lVar22 + 0xc,lVar22 + 0xc + (long)*(int *)(lVar22 + 8) * 4)
        ;
        puVar7 = (undefined8 *)(puStack_150 + uVar23 * 0x10);
        uStack_98 = puVar7[1];
        uStack_a0 = *puVar7;
        if (puVar7[1] != 0) {
          plVar17 = (long *)(puVar7[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *plVar17 = *plVar17 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pcStack_f0 = FUN_109cdfdb4;
        ppuStack_e8 = &PTR_DAT_110b3ce68;
        uStack_200 = 0;
        uStack_1f8 = 0;
        uStack_b0 = FUN_109cdfdb4;
        uStack_a8 = &PTR_DAT_110b3ce68;
        uStack_e0 = 0;
        uStack_d8 = 0;
        FUN_109cde3b8(&lStack_190,uVar18,&uStack_b0);
        plVar17 = plStack_168;
        pppuStack_1e8 = (undefined ***)0x0;
        ppuStack_1e0 = (undefined **)0x0;
        ppuStack_1f0 = &PTR_DAT_1108a5c28;
        plStack_1c8 = plStack_188;
        lStack_1d0 = lStack_190;
        lStack_190 = 0;
        plStack_188 = (long *)0x0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        ppuStack_1c0 = (undefined **)0x0;
        uStack_1a8 = 1;
        plVar21 = plStack_170;
        uStack_1d8 = uVar20;
        if (plStack_168 != plStack_170) {
          do {
            plVar19 = (long *)((long)plVar21 + 4);
            uStack_134 = (undefined4)*plVar21;
            func_0x0001093aa148(&ppuStack_1c0,&uStack_134);
            plVar5 = plStack_188;
            plVar21 = plVar19;
          } while (plVar19 != plVar17);
          if (plStack_188 != (long *)0x0) {
            plVar17 = plStack_188 + 1;
            do {
              lVar22 = *plVar17;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *plVar17 = lVar22 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_188 + 0x10))(plStack_188);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
        (*(code *)*uStack_a8)(&uStack_a8);
        uStack_b0 = (code *)(*(long *)(param_2 + 0x140) + uVar23 * 0x18);
        puVar7 = param_1;
        func_0x00010937a098(param_1,uStack_b0,&UNK_10dd5b8f9,&uStack_b0,&lStack_190);
        puVar7[7] = ppuStack_1e0;
        puVar7[6] = pppuStack_1e8;
        puVar7[8] = uStack_1d8;
        func_0x0001093783c0(puVar7 + 9,&lStack_1d0);
        pppuVar12 = &ppuStack_1c0;
        func_0x00010937843c(puVar7 + 0xb);
        func_0x000105675c90(&ppuStack_1f0);
        (*(code *)*ppuStack_e8)(&ppuStack_e8);
        if (plStack_170 != (long *)0x0) {
          plStack_168 = plStack_170;
          __ZdlPv();
        }
      }
      else {
        uStack_a8 = (undefined **)((long)&MACH_HEADER.magic + 1);
        uStack_b0 = (code *)((long)&MACH_HEADER.magic + 1);
        lStack_120 = *(long *)(puStack_150 + uVar23 * 0x10);
        uVar1 = *(uint *)(lStack_120 + 8);
        if (0 < (int)uVar1) {
          iVar2 = *(int *)(lVar22 + 8);
          if (iVar2 < 1) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = *(undefined4 *)(lVar22 + 0xc);
          }
          uStack_a8 = (undefined **)CONCAT44(uVar14,1);
          if (uVar1 != 1) {
            if (iVar2 < 2) {
              uVar15 = 0xffffffff;
            }
            else {
              uVar15 = *(undefined4 *)(lVar22 + 0x10);
            }
            uStack_b0 = (code *)CONCAT44(uVar15,1);
            if (2 < uVar1) {
              if (iVar2 < 3) {
                uVar16 = 0xffffffff;
              }
              else {
                uVar16 = *(undefined4 *)(lVar22 + 0x14);
              }
              uStack_b0 = (code *)CONCAT44(uVar15,uVar16);
              if (uVar1 != 3) {
                if (iVar2 < 4) {
                  uVar15 = 0xffffffff;
                }
                else {
                  uVar15 = *(undefined4 *)(lVar22 + 0x18);
                }
                uStack_a8 = (undefined **)CONCAT44(uVar14,uVar15);
              }
            }
          }
        }
        lStack_118 = *(long *)((long)(puStack_150 + uVar23 * 0x10) + 8);
        if (lStack_118 != 0) {
          plVar17 = (long *)(lStack_118 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *plVar17 = *plVar17 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_130 = 0x109cdfe10;
        ppuStack_128 = &PTR_DAT_110b3ce88;
        plStack_170 = (long *)0x0;
        plStack_168 = (long *)0x0;
        FUN_109d0eaa4(&ppuStack_1f0,&uStack_b0,&uStack_198,uVar18,&uStack_130);
        lStack_190 = *(long *)(param_2 + 0x140) + uVar23 * 0x18;
        puVar7 = param_1;
        func_0x00010937a098(param_1,lStack_190,&UNK_10dd5b8f9,&lStack_190,&uStack_200);
        puVar7[7] = ppuStack_1e0;
        puVar7[6] = pppuStack_1e8;
        puVar7[8] = uStack_1d8;
        func_0x0001093783c0(puVar7 + 9,&lStack_1d0);
        pppuVar12 = &ppuStack_1c0;
        func_0x00010937843c(puVar7 + 0xb);
        func_0x000105675c90(&ppuStack_1f0);
        (*(code *)*ppuStack_128)(&ppuStack_128);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < (ulong)((long)puStack_148 - (long)puStack_150 >> 4));
  }
  ppuStack_1f0 = &puStack_150;
  pppuVar8 = &ppuStack_1f0;
  func_0x000109c2070c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_109cdf7b4:
  ___stack_chk_fail();
  pppuVar10 = pppuVar12;
  func_0x00010959b818(&uStack_b0);
  uVar9 = SUB81(pppuVar10,0);
  if ((int)pppuVar12 != 1) {
    ppuStack_1f0 = &puStack_150;
    func_0x000109c2070c(&ppuStack_1f0);
    __Unwind_Resume();
    *(undefined1 *)((long)pppuVar8[0x27] + 0x181) = uVar9;
    return;
  }
  ___cxa_begin_catch();
  func_0x000107c31940(&lStack_190,*(ulong *)((*pppuVar8)[-1] + 8) & 0x7fffffffffffffff);
  func_0x000109259240(&plStack_170,&lStack_190,&DAT_10f39abd5);
  (*(code *)(*pppuVar8)[2])(pppuVar8);
  func_0x000109259240(&ppuStack_1f0,&plStack_170,pppuVar8);
  FUN_109cd45b4(&UNK_10e03e888,&UNK_10f5a9324,&ppuStack_1f0);
LAB_109cdf8c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109cdf8cc);
  (*pcVar6)();
}



/* Entry: 109cdfa00; end: 109cdfa0f;  */

void FUN_109cdfa00(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(param_1 + 0x138) + 0x181) = param_2;
  return;
}



/* Entry: 109cdfa10; end: 109cdfad7;  */

void FUN_109cdfa10(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_109cd4074(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109cdfad8; end: 109cdfb5f;  */

void FUN_109cdfad8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar4 = (undefined8 *)0xa8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110b3cd58;
  uVar8 = *param_3;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 10) = 0x3f800000;
  puVar4[0xb] = 0x32aaaba7;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = uVar8;
  puVar4[0x14] = 0;
  puVar7 = puVar4 + 3;
  *puVar7 = &PTR_DAT_110b3cda8;
  *param_1 = puVar7;
  param_1[1] = puVar4;
  puVar6 = puVar4 + 4;
  puVar4[5] = 0;
  *puVar6 = 0;
  if ((puVar6 != (undefined8 *)0x0) &&
     ((lVar5 = puVar4[5], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar9 = (long *)param_1[1];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar9 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = puVar4[5];
    }
    *puVar6 = puVar7;
    puVar4[5] = plVar9;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
        return;
      }
    }
  }
  return;
}



/* Entry: 109cdfb60; end: 109cdfb6f;  */

void FUN_109cdfb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3cd58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109cdfb70; end: 109cdfb8f;  */

void FUN_109cdfb70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3cd58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cdfb90; end: 109cdfba3;  */

void FUN_109cdfb90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109cdfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109cdfba4; end: 109cdfbb7;  */

void FUN_109cdfba4(void)

{
  FUN_109cdfc1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cdfbb8; end: 109cdfc0b;  */

void FUN_109cdfbb8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  __Znam();
  _bzero();
  *param_1 = uVar1;
  param_1[1] = FUN_109cdfcd4;
  param_1[2] = &PTR_DAT_110b3ce48;
  return;
}



/* Entry: 109cdfc0c; end: 109cdfc1b;  */

undefined8 FUN_109cdfc0c(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 109cdfc1c; end: 109cdfcd3;  */

undefined8 * FUN_109cdfc1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b3ce28;
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  func_0x000109cdfc60(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109cdfcd4; end: 109cdfd03;  */

void FUN_109cdfcd4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 109cdfd04; end: 109cdfdb3;  */

void FUN_109cdfd04(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 109cdfdb4; end: 109cdfe6b;  */

void FUN_109cdfdb4(void)

{
  return;
}



/* Entry: 109cdfe6c; end: 109cdffc7;  */

long ***** FUN_109cdfe6c(long *****param_1,long *****param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long ****pppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ***ppplVar9;
  long *****ppppplVar10;
  long ***ppplVar11;
  ulong uVar12;
  long ****pppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long lVar16;
  ulong uVar17;
  long *****ppppplVar18;
  long *****unaff_x23;
  long *****unaff_x24;
  long *****unaff_x25;
  long *****ppppplVar19;
  long *****ppppplVar20;
  long *****unaff_x27;
  long *****unaff_x28;
  long *****ppppplVar21;
  undefined1 auStack_568 [8];
  long *plStack_560;
  undefined1 uStack_551;
  long ****pppplStack_550;
  long ****pppplStack_548;
  undefined1 ***pppuStack_540;
  code *pcStack_538;
  long ****pppplStack_530;
  long ****pppplStack_528;
  long ****pppplStack_520;
  long ****pppplStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long ****pppplStack_4c8;
  long ****pppplStack_4c0;
  undefined4 uStack_4b8;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  char cStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_350;
  long ****pppplStack_340;
  long ****pppplStack_338;
  undefined8 uStack_330;
  long ****pppplStack_328;
  long ****pppplStack_320;
  long ****pppplStack_318;
  long ****pppplStack_310;
  long ****pppplStack_308;
  long ****pppplStack_300;
  long ****pppplStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  long ****pppplStack_2e0;
  long ****pppplStack_2d8;
  long ****pppplStack_2d0;
  long ****pppplStack_2c8;
  long ****pppplStack_2c0;
  long ****pppplStack_2b8;
  long ****pppplStack_2b0;
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  long ***ppplStack_298;
  long ***ppplStack_290;
  long ***ppplStack_288;
  long ***ppplStack_280;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long ****pppplStack_228;
  long ****pppplStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined4 uStack_114;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar14 = param_2;
  _objc_retain(param_2);
  param_1[1] = (long ****)0x0;
  param_1[2] = (long ****)0x0;
  *param_1 = (long ****)0x0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_2);
  ppppplVar18 = param_2;
  func_0x00010bf52a60();
  if (ppppplVar18 != (long *****)0x0) {
    lVar16 = *plStack_100;
    do {
      unaff_x23 = (long *****)0x0;
      do {
        if (*plStack_100 != lVar16) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = (int)*(undefined8 *)(lStack_108 + (long)unaff_x23 * 8);
        func_0x00010c2827c0();
        uStack_114 = uVar4;
        ppppplVar14 = (long *****)&uStack_114;
        func_0x0001093aa148(param_1);
        unaff_x23 = (long *****)((long)unaff_x23 + 1);
      } while (ppppplVar18 != unaff_x23);
      ppppplVar18 = param_2;
      func_0x00010bf52a60();
    } while (ppppplVar18 != (long *****)0x0);
  }
  _objc_release(param_2);
  ppppplVar18 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppplVar18;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  if (*param_1 != (long ****)0x0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  _objc_release(param_2);
  ppppplVar15 = ppppplVar18;
  __Unwind_Resume();
  pcStack_128 = FUN_109cdffc8;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(ppppplVar14);
  _objc_retain(ppppplVar14);
  pppplVar5 = *ppppplVar15;
  *ppppplVar15 = (long ****)ppppplVar14;
  _objc_release(pppplVar5);
  pppplStack_2e0 = (long ****)ppppplVar14;
  func_0x00010c065a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  pppplStack_2b0 = (long ****)(ppppplVar15 + 4);
  func_0x000109ce4564();
  func_0x000109ce4564(ppppplVar15 + 0xe);
  func_0x000109ce4564(ppppplVar15 + 9);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  puStack_260 = (undefined8 *)0x0;
  _objc_retain(ppppplVar14);
  ppppplVar20 = ppppplVar14;
  pppplStack_2b8 = (long ****)ppppplVar14;
  func_0x00010bf52a60();
  if (ppppplVar20 != (long *****)0x0) {
    unaff_x23 = (long *****)*puStack_260;
    pppplStack_2d8 = (long ****)(ppppplVar15 + 6);
    pppplStack_2d0 = (long ****)unaff_x23;
    do {
      param_1 = (long *****)0x0;
      pppplStack_2c8 = (long ****)ppppplVar20;
      do {
        if ((long *****)*puStack_260 != unaff_x23) {
          _objc_enumerationMutation(pppplStack_2b8);
        }
        unaff_x28 = *(long ******)(lStack_268 + (long)param_1 * 8);
        ppppplVar18 = (long *****)pppplStack_2b8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppplVar6 = ppppplVar18;
        func_0x00010c27dd80();
        if (ppppplVar6 == (long *****)0x5) {
          unaff_x24 = ppppplVar18;
          func_0x00010c0d1ba0();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar14 = unaff_x24;
          func_0x00010c22a640();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppppplVar14;
          func_0x00010c23d560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppplVar14);
          if (unaff_x25 != (long *****)0x0) {
            ppppplVar14 = unaff_x25;
            func_0x00010bf529e0(unaff_x25);
            func_0x000109265eec(&pppplStack_228,ppppplVar14);
            ppppplVar20 = unaff_x25;
            func_0x00010bf529e0();
            func_0x000109265eec(&ppplStack_290);
            for (ppppplVar14 = (long *****)0x0; ppppplVar6 = unaff_x25, func_0x00010bf529e0(),
                ppppplVar14 < ppppplVar6; ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
              ppppplVar6 = unaff_x25;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              ppppplVar10 = ppppplVar6;
              func_0x00010c11f4c0();
              *(int *)((long)pppplStack_228 + (long)ppppplVar14 * 4) = (int)ppppplVar10;
              *(int *)((long)ppplStack_290 + (long)ppppplVar14 * 4) =
                   (int)ppppplVar10 + (int)ppppplVar20 + -1;
              _objc_release(ppppplVar6);
            }
            _objc_retainAutorelease(unaff_x28);
            ppppplVar14 = unaff_x28;
            func_0x00010bdc3520(unaff_x28);
            FUN_109ce4638(ppppplVar15 + 9,ppppplVar14,&pppplStack_228);
            _objc_retainAutorelease(unaff_x28);
            ppppplVar14 = unaff_x28;
            func_0x00010bdc3520(unaff_x28);
            FUN_109ce4638(ppppplVar15 + 0xe,ppppplVar14,&ppplStack_290);
            if ((long ****)ppplStack_290 != (long ****)0x0) {
              ppplStack_288 = ppplStack_290;
              __ZdlPv();
            }
            if ((long *****)pppplStack_228 != (long *****)0x0) {
              pppplStack_220 = pppplStack_228;
              __ZdlPv();
            }
          }
          unaff_x27 = unaff_x24;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          FUN_109cdfe6c(&ppplStack_290,unaff_x27);
          _objc_retainAutorelease(unaff_x28);
          func_0x00010bdc3520(unaff_x28);
          func_0x000107c31940(&ppplStack_2a8,unaff_x28);
          ppppplVar14 = (long *****)pppplStack_2b0;
          func_0x000107c31944(pppplStack_2b0,&ppplStack_2a8);
          ppppplVar20 = (long *****)ppppplVar15[5];
          if (ppppplVar20 != (long *****)0x0) {
            uVar17 = (long)ppppplVar20 - 1;
            if (((ulong)ppppplVar20 & uVar17) == 0) {
              unaff_x23 = (long *****)(uVar17 & (ulong)ppppplVar14);
            }
            else {
              unaff_x23 = ppppplVar14;
              if (ppppplVar20 <= ppppplVar14) {
                uVar12 = 0;
                if (ppppplVar20 != (long *****)0x0) {
                  uVar12 = (ulong)ppppplVar14 / (ulong)ppppplVar20;
                }
                unaff_x23 = (long *****)((long)ppppplVar14 - uVar12 * (long)ppppplVar20);
              }
            }
            pppplStack_2c0 = (long ****)unaff_x24;
            if ((long ***)(*pppplStack_2b0)[(long)unaff_x23] != (long ***)0x0) {
              ppppplVar6 = (long *****)pppplStack_2b0;
              for (unaff_x28 = (long *****)*(*pppplStack_2b0)[(long)unaff_x23];
                  pppplStack_2c0 = (long ****)unaff_x24, pppplStack_2b0 = (long ****)ppppplVar6,
                  unaff_x28 != (long *****)0x0; unaff_x28 = (long *****)*unaff_x28) {
                ppppplVar10 = (long *****)unaff_x28[1];
                if (ppppplVar10 == ppppplVar14) {
                  func_0x000104c4fbc4(ppppplVar6,unaff_x28 + 2,&ppplStack_2a8);
                  unaff_x24 = (long *****)pppplStack_2c0;
                  if (((ulong)ppppplVar6 & 1) != 0) goto LAB_109ce0448;
                }
                else {
                  if (((ulong)ppppplVar20 & uVar17) == 0) {
                    ppppplVar10 = (long *****)((ulong)ppppplVar10 & uVar17);
                  }
                  else if (ppppplVar20 <= ppppplVar10) {
                    uVar12 = 0;
                    if (ppppplVar20 != (long *****)0x0) {
                      uVar12 = (ulong)ppppplVar10 / (ulong)ppppplVar20;
                    }
                    ppppplVar10 = (long *****)((long)ppppplVar10 - uVar12 * (long)ppppplVar20);
                  }
                  if (ppppplVar10 != unaff_x23) break;
                }
                unaff_x24 = (long *****)pppplStack_2c0;
                ppppplVar6 = (long *****)pppplStack_2b0;
              }
            }
          }
          unaff_x28 = (long *****)0x40;
          __Znwm();
          ppplVar9 = ppplStack_298;
          pppplStack_220 = pppplStack_2b0;
          uStack_218 = 1;
          *unaff_x28 = (long ****)0x0;
          unaff_x28[1] = (long ****)ppppplVar14;
          unaff_x28[3] = (long ****)ppplStack_2a0;
          unaff_x28[2] = (long ****)ppplStack_2a8;
          ppplStack_2a8 = (long ***)0x0;
          ppplStack_2a0 = (long ***)0x0;
          ppplStack_298 = (long ***)0x0;
          unaff_x28[4] = (long ****)ppplVar9;
          unaff_x28[5] = (long ****)0x0;
          unaff_x28[6] = (long ****)0x0;
          unaff_x28[7] = (long ****)0x0;
          pppplStack_228 = (long ****)unaff_x28;
          if ((ppppplVar20 == (long *****)0x0) ||
             (*(float *)(ppppplVar15 + 8) * (float)ppppplVar20 < (float)((long)ppppplVar15[7] + 1)))
          {
            uVar17 = 1;
            if ((long *****)0x2 < ppppplVar20) {
              uVar17 = (ulong)(((ulong)ppppplVar20 & (long)ppppplVar20 - 1U) != 0);
            }
            uVar17 = uVar17 | (long)ppppplVar20 << 1;
            uVar12 = (ulong)((float)((long)ppppplVar15[7] + 1) / *(float *)(ppppplVar15 + 8));
            if (uVar17 <= uVar12) {
              uVar17 = uVar12;
            }
            FUN_109ce48b0(pppplStack_2b0,uVar17);
            ppppplVar20 = (long *****)ppppplVar15[5];
            if (((ulong)ppppplVar20 & (long)ppppplVar20 - 1U) == 0) {
              unaff_x23 = (long *****)((long)ppppplVar20 - 1U & (ulong)ppppplVar14);
            }
            else {
              unaff_x23 = ppppplVar14;
              if (ppppplVar20 <= ppppplVar14) {
                uVar17 = 0;
                if (ppppplVar20 != (long *****)0x0) {
                  uVar17 = (ulong)ppppplVar14 / (ulong)ppppplVar20;
                }
                unaff_x23 = (long *****)((long)ppppplVar14 - uVar17 * (long)ppppplVar20);
              }
            }
          }
          pppplVar13 = (long ****)*pppplStack_2b0;
          pppplVar5 = (long ****)pppplVar13[(long)unaff_x23];
          if (pppplVar5 == (long ****)0x0) {
            *unaff_x28 = (long ****)*pppplStack_2d8;
            *pppplStack_2d8 = (long ***)unaff_x28;
            pppplVar13[(long)unaff_x23] = (long ***)pppplStack_2d8;
            if (*unaff_x28 != (long ****)0x0) {
              ppppplVar14 = (long *****)(*unaff_x28)[1];
              if (((ulong)ppppplVar20 & (long)ppppplVar20 - 1U) == 0) {
                ppppplVar14 = (long *****)((ulong)ppppplVar14 & (long)ppppplVar20 - 1U);
              }
              else if (ppppplVar20 <= ppppplVar14) {
                uVar17 = 0;
                if (ppppplVar20 != (long *****)0x0) {
                  uVar17 = (ulong)ppppplVar14 / (ulong)ppppplVar20;
                }
                ppppplVar14 = (long *****)((long)ppppplVar14 - uVar17 * (long)ppppplVar20);
              }
              pppplVar5 = (long ****)(*pppplStack_2b0 + (long)ppppplVar14);
              goto LAB_109ce0438;
            }
          }
          else {
            *unaff_x28 = (long ****)*pppplVar5;
LAB_109ce0438:
            *pppplVar5 = (long ***)unaff_x28;
          }
          ppppplVar15[7] = (long ****)((long)ppppplVar15[7] + 1);
LAB_109ce0448:
          ppppplVar20 = (long *****)pppplStack_2c8;
          unaff_x23 = (long *****)pppplStack_2d0;
          ppppplVar14 = unaff_x28 + 5;
          if (*ppppplVar14 != (long ****)0x0) {
            unaff_x28[6] = *ppppplVar14;
            __ZdlPv();
            *ppppplVar14 = (long ****)0x0;
            unaff_x28[6] = (long ****)0x0;
            unaff_x28[7] = (long ****)0x0;
          }
          unaff_x28[6] = (long ****)ppplStack_288;
          unaff_x28[5] = (long ****)ppplStack_290;
          unaff_x28[7] = (long ****)ppplStack_280;
          ppplStack_288 = (long ***)0x0;
          ppplStack_280 = (long ***)0x0;
          ppplStack_290 = (long ***)0x0;
          if (((long)ppplStack_298 < 0) &&
             (__ZdlPv(ppplStack_2a8), (long ****)ppplStack_290 != (long ****)0x0)) {
            ppplStack_288 = ppplStack_290;
            __ZdlPv();
          }
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
        }
        _objc_release(ppppplVar18);
        param_1 = (long *****)((long)param_1 + 1);
      } while (param_1 != ppppplVar20);
      ppppplVar20 = (long *****)pppplStack_2b8;
      func_0x00010bf52a60();
    } while (ppppplVar20 != (long *****)0x0);
  }
  _objc_release(pppplStack_2b8);
  _objc_release(pppplStack_2b8);
  _objc_release(pppplStack_2b8);
  ppppplVar6 = (long *****)0x2;
  ppppplVar20 = (long *****)0x10;
  func_0x000107c31924(2,0x10,0,0);
  if (((int)ppppplVar6 != 0) && (*(char *)(ppppplVar15 + 3) == '\x01')) {
    ppppplVar6 = (long *****)ppppplVar15[2];
    func_0x00010c1d6ec0();
    *(undefined1 *)(ppppplVar15 + 3) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pppplStack_2e0);
    return (long *****)pppplStack_2e0;
  }
  ___stack_chk_fail();
  _objc_release(pppplStack_2b8);
  _objc_release(pppplStack_2b8);
  _objc_release(pppplStack_2b8);
  _objc_release(pppplStack_2e0);
  ppppplVar15 = ppppplVar6;
  __Unwind_Resume();
  pcStack_2e8 = FUN_109ce06b8;
  lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar10 = ppppplVar20;
  pppplStack_340 = (long ****)unaff_x28;
  pppplStack_338 = (long ****)unaff_x27;
  uStack_330 = 0;
  pppplStack_328 = (long ****)unaff_x25;
  pppplStack_320 = (long ****)unaff_x24;
  pppplStack_318 = (long ****)unaff_x23;
  pppplStack_310 = (long ****)ppppplVar6;
  pppplStack_308 = (long ****)ppppplVar18;
  pppplStack_300 = (long ****)param_1;
  pppplStack_2f8 = (long ****)ppppplVar14;
  ppuStack_2f0 = &puStack_130;
  _objc_retain(ppppplVar20);
  ppppplVar15[1] = (long ****)0x0;
  *ppppplVar15 = (long ****)0x0;
  ppppplVar15[3] = (long ****)0x0;
  ppppplVar15[2] = (long ****)0x0;
  *(undefined4 *)(ppppplVar15 + 4) = 0x3f800000;
  pppplStack_528 = (long ****)(ppppplVar15 + 5);
  ppppplVar15[6] = (long ****)0x0;
  *pppplStack_528 = (long ***)0x0;
  ppppplVar15[8] = (long ****)0x0;
  ppppplVar15[7] = (long ****)0x0;
  *(undefined4 *)(ppppplVar15 + 9) = 0x3f800000;
  *(undefined4 *)(ppppplVar15 + 10) = 0;
  pppplStack_530 = (long ****)ppppplVar20;
  pppplStack_520 = (long ****)ppppplVar15;
  func_0x00010c065a20();
  _objc_retainAutoreleasedReturnValue();
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  lStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  plStack_480 = (long *)0x0;
  _objc_retain();
  ppppplVar14 = ppppplVar20;
  pppplStack_518 = (long ****)ppppplVar20;
  func_0x00010bf52a60();
  if (ppppplVar14 != (long *****)0x0) {
    lVar16 = *plStack_480;
    do {
      ppppplVar18 = (long *****)0x0;
      do {
        if (*plStack_480 != lVar16) {
          _objc_enumerationMutation(pppplStack_518);
        }
        ppppplVar19 = *(long ******)(lStack_488 + (long)ppppplVar18 * 8);
        ppppplVar6 = (long *****)pppplStack_518;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppplVar10 = ppppplVar6;
        func_0x00010c27dd80();
        if (ppppplVar10 == (long *****)0x5) {
          ppppplVar15 = ppppplVar6;
          func_0x00010c0d1ba0();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar7 = ppppplVar15;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar20 = ppppplVar7;
          func_0x00010bf529e0();
          if (ppppplVar20 == (long *****)0x0) {
            ppppplVar21 = (long *****)0x0;
            ppppplVar20 = (long *****)0x0;
          }
          else {
            ppppplVar21 = ppppplVar7;
            FUN_109cdfe6c(&pppplStack_4c8);
            ppppplVar20 = &pppplStack_4c8;
            FUN_109cd86d8();
            if ((long *****)pppplStack_4c8 != (long *****)0x0) {
              pppplStack_4c0 = pppplStack_4c8;
              __ZdlPv();
            }
          }
          _objc_retainAutorelease(ppppplVar19);
          func_0x00010bdc3520();
          ppppplVar10 = ppppplVar15;
          func_0x00010bf64880();
          uVar4 = SUB84(ppppplVar10,0);
          FUN_109ce3bec();
          uStack_4b0 = 0;
          cStack_498 = '\0';
          ppppplVar10 = ppppplVar19;
          pppplStack_4c8 = (long ****)ppppplVar20;
          pppplStack_4c0 = (long ****)ppppplVar21;
          uStack_4b8 = uVar4;
          FUN_109ce4130(pppplStack_520,ppppplVar19,&pppplStack_4c8);
          if ((cStack_498 == '\x01') && (CONCAT71(uStack_4af,uStack_4b0) != 0)) {
            __ZdlPv();
          }
          _objc_release(ppppplVar7);
          _objc_release(ppppplVar15);
          ppppplVar15 = ppppplVar19;
        }
        else {
          _objc_retainAutorelease(ppppplVar19);
          func_0x00010bdc3520(ppppplVar19);
          FUN_109ce3cac(pppplStack_520,ppppplVar19);
          ppppplVar10 = ppppplVar19;
        }
        _objc_release(ppppplVar6);
        ppppplVar18 = (long *****)((long)ppppplVar18 + 1);
      } while (ppppplVar14 != ppppplVar18);
      ppppplVar14 = (long *****)pppplStack_518;
      func_0x00010bf52a60();
    } while (ppppplVar14 != (long *****)0x0);
  }
  _objc_release(pppplStack_518);
  ppppplVar14 = (long *****)pppplStack_530;
  func_0x00010c0eecc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  lStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  plStack_500 = (long *)0x0;
  _objc_retain();
  ppppplVar18 = ppppplVar14;
  func_0x00010bf52a60();
  if (ppppplVar18 != (long *****)0x0) {
    lVar16 = *plStack_500;
    do {
      ppppplVar6 = (long *****)0x0;
      do {
        if (*plStack_500 != lVar16) {
          _objc_enumerationMutation(ppppplVar14);
        }
        ppppplVar10 = *(long ******)(lStack_508 + (long)ppppplVar6 * 8);
        ppppplVar19 = ppppplVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppplVar7 = ppppplVar19;
        func_0x00010c27dd80();
        if (ppppplVar7 == (long *****)0x5) {
          ppppplVar7 = ppppplVar19;
          func_0x00010c0d1ba0();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar21 = ppppplVar7;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar20 = ppppplVar21;
          func_0x00010bf529e0();
          if (ppppplVar20 == (long *****)0x0) {
            ppppplVar20 = (long *****)0x0;
            ppppplVar15 = (long *****)0x0;
          }
          else {
            ppppplVar15 = ppppplVar21;
            FUN_109cdfe6c(&pppplStack_4c8);
            ppppplVar20 = &pppplStack_4c8;
            FUN_109cd86d8();
            if ((long *****)pppplStack_4c8 != (long *****)0x0) {
              pppplStack_4c0 = pppplStack_4c8;
              __ZdlPv();
            }
          }
          _objc_retainAutorelease(ppppplVar10);
          func_0x00010bdc3520(ppppplVar10);
          ppppplVar8 = ppppplVar7;
          func_0x00010bf64880();
          uVar4 = SUB84(ppppplVar8,0);
          FUN_109ce3bec();
          uStack_4b0 = 0;
          cStack_498 = '\0';
          pppplStack_4c8 = (long ****)ppppplVar20;
          pppplStack_4c0 = (long ****)ppppplVar15;
          uStack_4b8 = uVar4;
          FUN_109ce4130(pppplStack_528,ppppplVar10,&pppplStack_4c8);
          if ((cStack_498 == '\x01') && (CONCAT71(uStack_4af,uStack_4b0) != 0)) {
            __ZdlPv();
          }
          _objc_release(ppppplVar21);
          _objc_release(ppppplVar7);
        }
        else {
          _objc_retainAutorelease(ppppplVar10);
          func_0x00010bdc3520(ppppplVar10);
          FUN_109ce3cac(pppplStack_528,ppppplVar10);
        }
        _objc_release(ppppplVar19);
        ppppplVar6 = (long *****)((long)ppppplVar6 + 1);
      } while (ppppplVar18 != ppppplVar6);
      ppppplVar18 = ppppplVar14;
      func_0x00010bf52a60();
    } while (ppppplVar18 != (long *****)0x0);
  }
  _objc_release(ppppplVar14);
  _objc_release(ppppplVar14);
  _objc_release(pppplStack_518);
  ppppplVar18 = (long *****)pppplStack_530;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_350) {
    ___stack_chk_fail();
    _objc_release(ppppplVar14);
    _objc_release(ppppplVar14);
    _objc_release(pppplStack_518);
    func_0x000109cde308(pppplStack_528);
    func_0x000109cde308(pppplStack_520);
    _objc_release(pppplStack_530);
    __Unwind_Resume();
    pcStack_538 = FUN_109ce0c58;
    pppplStack_550 = (long ****)ppppplVar15;
    pppplStack_548 = (long ****)ppppplVar20;
    pppuStack_540 = &ppuStack_2f0;
    FUN_109cdfad8(auStack_568,&uStack_551,&UNK_10e03e880);
    FUN_109cdc868(ppppplVar18,ppppplVar10,1,auStack_568);
    if (plStack_560 != (long *)0x0) {
      plVar1 = plStack_560 + 1;
      do {
        lVar16 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_560 + 0x10))(plStack_560);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_560);
      }
    }
    *ppppplVar18 = (long ****)&PTR_FUN_110b3ceb8;
    pppplVar5 = (long ****)0xf8;
    __Znwm();
    pppplVar5[1] = (long ***)0x0;
    pppplVar5[2] = (long ***)0x0;
    *pppplVar5 = (long ***)&PTR_FUN_110b3cfc0;
    pppplVar5[0xc] = (long ***)0x0;
    pppplVar5[0xb] = (long ***)0x0;
    pppplVar5[0xe] = (long ***)0x0;
    pppplVar5[0xd] = (long ***)0x0;
    pppplVar5[0x10] = (long ***)0x0;
    pppplVar5[0xf] = (long ***)0x0;
    pppplVar5[6] = (long ***)0x0;
    pppplVar5[5] = (long ***)0x0;
    pppplVar5[8] = (long ***)0x0;
    pppplVar5[7] = (long ***)0x0;
    pppplVar5[10] = (long ***)0x0;
    pppplVar5[9] = (long ***)0x0;
    pppplVar5[0x12] = (long ***)0x0;
    pppplVar5[0x11] = (long ***)0x0;
    pppplVar5[0x14] = (long ***)0x0;
    pppplVar5[0x13] = (long ***)0x0;
    pppplVar5[0x15] = (long ***)0x0;
    pppplVar5[0x16] = (long ***)0x32aaaba7;
    *(undefined4 *)(pppplVar5 + 0xb) = 0x3f800000;
    *(undefined4 *)(pppplVar5 + 0x10) = 0x3f800000;
    *(undefined4 *)(pppplVar5 + 0x15) = 0x3f800000;
    pppplVar5[4] = (long ***)0x0;
    pppplVar5[3] = (long ***)0x0;
    pppplVar5[0xd] = (long ***)0x0;
    pppplVar5[0xc] = (long ***)0x0;
    pppplVar5[0xf] = (long ***)0x0;
    pppplVar5[0xe] = (long ***)0x0;
    pppplVar5[0x14] = (long ***)0x0;
    pppplVar5[0x13] = (long ***)0x0;
    pppplVar5[0x12] = (long ***)0x0;
    pppplVar5[0x11] = (long ***)0x0;
    pppplVar5[0x1c] = (long ***)0x0;
    pppplVar5[0x1b] = (long ***)0x0;
    pppplVar5[0x1a] = (long ***)0x0;
    pppplVar5[0x19] = (long ***)0x0;
    pppplVar5[0x18] = (long ***)0x0;
    pppplVar5[0x17] = (long ***)0x0;
    ppppplVar18[0x27] = pppplVar5 + 3;
    ppppplVar18[0x28] = pppplVar5;
    pppplVar5[0x1d] = (long ***)0x0;
    pppplVar5[0x1e] = (long ***)ppppplVar18;
    ppplVar9 = (long ***)PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
    _objc_opt_new();
    ppplVar11 = ppppplVar18[0x27][2];
    ppppplVar18[0x27][2] = ppplVar9;
    _objc_release(ppplVar11);
    return ppppplVar18;
  }
  return ppppplVar18;
}



/* Entry: 109cdffc8; end: 109ce06b7;  */

long ***** FUN_109cdffc8(undefined8 *param_1,long *****param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ****pppplVar9;
  long ***ppplVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long ***ppplVar14;
  ulong uVar15;
  long *****ppppplVar16;
  long *****unaff_x20;
  long *****ppppplVar17;
  long *****unaff_x21;
  long lVar18;
  ulong uVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long *unaff_x23;
  long *****unaff_x24;
  long *****unaff_x25;
  long *****ppppplVar22;
  long *plVar23;
  long *****unaff_x27;
  long *unaff_x28;
  long *****ppppplVar24;
  long *****ppppplVar25;
  undefined1 auStack_448 [8];
  long *plStack_440;
  undefined1 uStack_431;
  long ****pppplStack_430;
  long ****pppplStack_428;
  undefined1 **ppuStack_420;
  code *pcStack_418;
  long ****pppplStack_410;
  long ****pppplStack_408;
  long ****pppplStack_400;
  long ****pppplStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long ****pppplStack_3a8;
  long ****pppplStack_3a0;
  undefined4 uStack_398;
  undefined1 uStack_390;
  undefined7 uStack_38f;
  char cStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_230;
  long *plStack_220;
  long ****pppplStack_218;
  undefined8 uStack_210;
  long ****pppplStack_208;
  long ****pppplStack_200;
  long *plStack_1f8;
  long ****pppplStack_1f0;
  long ****pppplStack_1e8;
  long ****pppplStack_1e0;
  long ****pppplStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long ****pppplStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long ****pppplStack_1a8;
  long ****pppplStack_1a0;
  long ****pppplStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  uVar4 = *param_1;
  *param_1 = param_2;
  _objc_release(uVar4);
  pppplStack_1c0 = (long ****)param_2;
  func_0x00010c065a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  plStack_190 = param_1 + 4;
  func_0x000109ce4564();
  func_0x000109ce4564(param_1 + 0xe);
  func_0x000109ce4564(param_1 + 9);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  puStack_140 = (undefined8 *)0x0;
  _objc_retain(param_2);
  ppppplVar16 = param_2;
  pppplStack_198 = (long ****)param_2;
  func_0x00010bf52a60();
  if (ppppplVar16 != (long *****)0x0) {
    unaff_x23 = (long *)*puStack_140;
    plStack_1b8 = param_1 + 6;
    plStack_1b0 = unaff_x23;
    do {
      unaff_x20 = (long *****)0x0;
      pppplStack_1a8 = (long ****)ppppplVar16;
      do {
        if ((long *)*puStack_140 != unaff_x23) {
          _objc_enumerationMutation(pppplStack_198);
        }
        unaff_x28 = *(long **)(lStack_148 + (long)unaff_x20 * 8);
        unaff_x21 = (long *****)pppplStack_198;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppplVar6 = unaff_x21;
        func_0x00010c27dd80();
        if (ppppplVar6 == (long *****)0x5) {
          unaff_x24 = unaff_x21;
          func_0x00010c0d1ba0();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar16 = unaff_x24;
          func_0x00010c22a640();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppppplVar16;
          func_0x00010c23d560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppplVar16);
          if (unaff_x25 != (long *****)0x0) {
            ppppplVar16 = unaff_x25;
            func_0x00010bf529e0(unaff_x25);
            func_0x000109265eec(&plStack_108,ppppplVar16);
            ppppplVar6 = unaff_x25;
            func_0x00010bf529e0();
            func_0x000109265eec(&lStack_170);
            for (ppppplVar16 = (long *****)0x0; ppppplVar17 = unaff_x25, func_0x00010bf529e0(),
                ppppplVar16 < ppppplVar17; ppppplVar16 = (long *****)((long)ppppplVar16 + 1)) {
              ppppplVar17 = unaff_x25;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              ppppplVar25 = ppppplVar17;
              func_0x00010c11f4c0();
              *(int *)((long)plStack_108 + (long)ppppplVar16 * 4) = (int)ppppplVar25;
              *(int *)(lStack_170 + (long)ppppplVar16 * 4) = (int)ppppplVar25 + (int)ppppplVar6 + -1
              ;
              _objc_release(ppppplVar17);
            }
            _objc_retainAutorelease(unaff_x28);
            plVar13 = unaff_x28;
            func_0x00010bdc3520(unaff_x28);
            FUN_109ce4638(param_1 + 9,plVar13,&plStack_108);
            _objc_retainAutorelease(unaff_x28);
            plVar13 = unaff_x28;
            func_0x00010bdc3520(unaff_x28);
            FUN_109ce4638(param_1 + 0xe,plVar13,&lStack_170);
            if (lStack_170 != 0) {
              lStack_168 = lStack_170;
              __ZdlPv();
            }
            if (plStack_108 != (long *)0x0) {
              plStack_100 = plStack_108;
              __ZdlPv();
            }
          }
          unaff_x27 = unaff_x24;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          FUN_109cdfe6c(&lStack_170,unaff_x27);
          _objc_retainAutorelease(unaff_x28);
          func_0x00010bdc3520(unaff_x28);
          func_0x000107c31940(&lStack_188,unaff_x28);
          plVar13 = plStack_190;
          func_0x000107c31944(plStack_190,&lStack_188);
          plVar23 = (long *)param_1[5];
          if (plVar23 != (long *)0x0) {
            uVar19 = (long)plVar23 - 1;
            if (((ulong)plVar23 & uVar19) == 0) {
              unaff_x23 = (long *)(uVar19 & (ulong)plVar13);
            }
            else {
              unaff_x23 = plVar13;
              if (plVar23 <= plVar13) {
                uVar15 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar15 = (ulong)plVar13 / (ulong)plVar23;
                }
                unaff_x23 = (long *)((long)plVar13 - uVar15 * (long)plVar23);
              }
            }
            puVar11 = *(undefined8 **)(*plStack_190 + (long)unaff_x23 * 8);
            pppplStack_1a0 = (long ****)unaff_x24;
            if (puVar11 != (undefined8 *)0x0) {
              plVar5 = plStack_190;
              for (unaff_x28 = (long *)*puVar11; pppplStack_1a0 = (long ****)unaff_x24,
                  plStack_190 = plVar5, unaff_x28 != (long *)0x0; unaff_x28 = (long *)*unaff_x28) {
                plVar12 = (long *)unaff_x28[1];
                if (plVar12 == plVar13) {
                  func_0x000104c4fbc4(plVar5,unaff_x28 + 2,&lStack_188);
                  unaff_x24 = (long *****)pppplStack_1a0;
                  if (((ulong)plVar5 & 1) != 0) goto LAB_109ce0448;
                }
                else {
                  if (((ulong)plVar23 & uVar19) == 0) {
                    plVar12 = (long *)((ulong)plVar12 & uVar19);
                  }
                  else if (plVar23 <= plVar12) {
                    uVar15 = 0;
                    if (plVar23 != (long *)0x0) {
                      uVar15 = (ulong)plVar12 / (ulong)plVar23;
                    }
                    plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar23);
                  }
                  if (plVar12 != unaff_x23) break;
                }
                unaff_x24 = (long *****)pppplStack_1a0;
                plVar5 = plStack_190;
              }
            }
          }
          unaff_x28 = (long *)0x40;
          __Znwm();
          lVar18 = lStack_178;
          plStack_100 = plStack_190;
          uStack_f8 = 1;
          *unaff_x28 = 0;
          unaff_x28[1] = (long)plVar13;
          unaff_x28[3] = lStack_180;
          unaff_x28[2] = lStack_188;
          lStack_188 = 0;
          lStack_180 = 0;
          lStack_178 = 0;
          unaff_x28[4] = lVar18;
          unaff_x28[5] = 0;
          unaff_x28[6] = 0;
          unaff_x28[7] = 0;
          plStack_108 = unaff_x28;
          if ((plVar23 == (long *)0x0) ||
             (*(float *)(param_1 + 8) * (float)plVar23 < (float)(param_1[7] + 1))) {
            uVar19 = 1;
            if ((long *)0x2 < plVar23) {
              uVar19 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
            }
            uVar19 = uVar19 | (long)plVar23 << 1;
            uVar15 = (ulong)((float)(param_1[7] + 1) / *(float *)(param_1 + 8));
            if (uVar19 <= uVar15) {
              uVar19 = uVar15;
            }
            FUN_109ce48b0(plStack_190,uVar19);
            plVar23 = (long *)param_1[5];
            if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
              unaff_x23 = (long *)((long)plVar23 - 1U & (ulong)plVar13);
            }
            else {
              unaff_x23 = plVar13;
              if (plVar23 <= plVar13) {
                uVar19 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar19 = (ulong)plVar13 / (ulong)plVar23;
                }
                unaff_x23 = (long *)((long)plVar13 - uVar19 * (long)plVar23);
              }
            }
          }
          lVar18 = *plStack_190;
          plVar13 = *(long **)(lVar18 + (long)unaff_x23 * 8);
          if (plVar13 == (long *)0x0) {
            *unaff_x28 = *plStack_1b8;
            *plStack_1b8 = (long)unaff_x28;
            *(long **)(lVar18 + (long)unaff_x23 * 8) = plStack_1b8;
            if (*unaff_x28 != 0) {
              plVar13 = *(long **)(*unaff_x28 + 8);
              if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
                plVar13 = (long *)((ulong)plVar13 & (long)plVar23 - 1U);
              }
              else if (plVar23 <= plVar13) {
                uVar19 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar19 = (ulong)plVar13 / (ulong)plVar23;
                }
                plVar13 = (long *)((long)plVar13 - uVar19 * (long)plVar23);
              }
              plVar13 = (long *)(*plStack_190 + (long)plVar13 * 8);
              goto LAB_109ce0438;
            }
          }
          else {
            *unaff_x28 = *plVar13;
LAB_109ce0438:
            *plVar13 = (long)unaff_x28;
          }
          param_1[7] = param_1[7] + 1;
LAB_109ce0448:
          ppppplVar16 = (long *****)pppplStack_1a8;
          unaff_x23 = plStack_1b0;
          param_2 = (long *****)(unaff_x28 + 5);
          if (*param_2 != (long ****)0x0) {
            unaff_x28[6] = (long)*param_2;
            __ZdlPv();
            *param_2 = (long ****)0x0;
            unaff_x28[6] = 0;
            unaff_x28[7] = 0;
          }
          unaff_x28[6] = lStack_168;
          unaff_x28[5] = lStack_170;
          unaff_x28[7] = lStack_160;
          lStack_168 = 0;
          lStack_160 = 0;
          lStack_170 = 0;
          if ((lStack_178 < 0) && (__ZdlPv(lStack_188), lStack_170 != 0)) {
            lStack_168 = lStack_170;
            __ZdlPv();
          }
          _objc_release(unaff_x27);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
        }
        _objc_release(unaff_x21);
        unaff_x20 = (long *****)((long)unaff_x20 + 1);
      } while (unaff_x20 != ppppplVar16);
      ppppplVar16 = (long *****)pppplStack_198;
      func_0x00010bf52a60();
    } while (ppppplVar16 != (long *****)0x0);
  }
  _objc_release(pppplStack_198);
  _objc_release(pppplStack_198);
  _objc_release(pppplStack_198);
  ppppplVar6 = (long *****)0x2;
  ppppplVar16 = (long *****)0x10;
  func_0x000107c31924(2,0x10,0,0);
  if (((int)ppppplVar6 != 0) && (*(char *)(param_1 + 3) == '\x01')) {
    ppppplVar6 = (long *****)param_1[2];
    func_0x00010c1d6ec0();
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pppplStack_1c0);
    return (long *****)pppplStack_1c0;
  }
  ___stack_chk_fail();
  _objc_release(pppplStack_198);
  _objc_release(pppplStack_198);
  _objc_release(pppplStack_198);
  _objc_release(pppplStack_1c0);
  ppppplVar17 = ppppplVar6;
  __Unwind_Resume();
  pcStack_1c8 = FUN_109ce06b8;
  lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar25 = ppppplVar16;
  plStack_220 = unaff_x28;
  pppplStack_218 = (long ****)unaff_x27;
  uStack_210 = 0;
  pppplStack_208 = (long ****)unaff_x25;
  pppplStack_200 = (long ****)unaff_x24;
  plStack_1f8 = unaff_x23;
  pppplStack_1f0 = (long ****)ppppplVar6;
  pppplStack_1e8 = (long ****)unaff_x21;
  pppplStack_1e0 = (long ****)unaff_x20;
  pppplStack_1d8 = (long ****)param_2;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppppplVar16);
  ppppplVar17[1] = (long ****)0x0;
  *ppppplVar17 = (long ****)0x0;
  ppppplVar17[3] = (long ****)0x0;
  ppppplVar17[2] = (long ****)0x0;
  *(undefined4 *)(ppppplVar17 + 4) = 0x3f800000;
  pppplStack_408 = (long ****)(ppppplVar17 + 5);
  ppppplVar17[6] = (long ****)0x0;
  *pppplStack_408 = (long ***)0x0;
  ppppplVar17[8] = (long ****)0x0;
  ppppplVar17[7] = (long ****)0x0;
  *(undefined4 *)(ppppplVar17 + 9) = 0x3f800000;
  *(undefined4 *)(ppppplVar17 + 10) = 0;
  pppplStack_410 = (long ****)ppppplVar16;
  pppplStack_400 = (long ****)ppppplVar17;
  func_0x00010c065a20();
  _objc_retainAutoreleasedReturnValue();
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  _objc_retain();
  ppppplVar6 = ppppplVar16;
  pppplStack_3f8 = (long ****)ppppplVar16;
  func_0x00010bf52a60();
  if (ppppplVar6 != (long *****)0x0) {
    lVar18 = *plStack_360;
    do {
      ppppplVar20 = (long *****)0x0;
      do {
        if (*plStack_360 != lVar18) {
          _objc_enumerationMutation(pppplStack_3f8);
        }
        ppppplVar22 = *(long ******)(lStack_368 + (long)ppppplVar20 * 8);
        ppppplVar21 = (long *****)pppplStack_3f8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppplVar25 = ppppplVar21;
        func_0x00010c27dd80();
        if (ppppplVar25 == (long *****)0x5) {
          ppppplVar17 = ppppplVar21;
          func_0x00010c0d1ba0();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar7 = ppppplVar17;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar16 = ppppplVar7;
          func_0x00010bf529e0();
          if (ppppplVar16 == (long *****)0x0) {
            ppppplVar24 = (long *****)0x0;
            ppppplVar16 = (long *****)0x0;
          }
          else {
            ppppplVar24 = ppppplVar7;
            FUN_109cdfe6c(&pppplStack_3a8);
            ppppplVar16 = &pppplStack_3a8;
            FUN_109cd86d8();
            if ((long *****)pppplStack_3a8 != (long *****)0x0) {
              pppplStack_3a0 = pppplStack_3a8;
              __ZdlPv();
            }
          }
          _objc_retainAutorelease(ppppplVar22);
          func_0x00010bdc3520();
          ppppplVar25 = ppppplVar17;
          func_0x00010bf64880();
          uVar3 = SUB84(ppppplVar25,0);
          FUN_109ce3bec();
          uStack_390 = 0;
          cStack_378 = '\0';
          ppppplVar25 = ppppplVar22;
          pppplStack_3a8 = (long ****)ppppplVar16;
          pppplStack_3a0 = (long ****)ppppplVar24;
          uStack_398 = uVar3;
          FUN_109ce4130(pppplStack_400,ppppplVar22,&pppplStack_3a8);
          if ((cStack_378 == '\x01') && (CONCAT71(uStack_38f,uStack_390) != 0)) {
            __ZdlPv();
          }
          _objc_release(ppppplVar7);
          _objc_release(ppppplVar17);
          ppppplVar17 = ppppplVar22;
        }
        else {
          _objc_retainAutorelease(ppppplVar22);
          func_0x00010bdc3520(ppppplVar22);
          FUN_109ce3cac(pppplStack_400,ppppplVar22);
          ppppplVar25 = ppppplVar22;
        }
        _objc_release(ppppplVar21);
        ppppplVar20 = (long *****)((long)ppppplVar20 + 1);
      } while (ppppplVar6 != ppppplVar20);
      ppppplVar6 = (long *****)pppplStack_3f8;
      func_0x00010bf52a60();
    } while (ppppplVar6 != (long *****)0x0);
  }
  _objc_release(pppplStack_3f8);
  ppppplVar6 = (long *****)pppplStack_410;
  func_0x00010c0eecc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  _objc_retain();
  ppppplVar20 = ppppplVar6;
  func_0x00010bf52a60();
  if (ppppplVar20 != (long *****)0x0) {
    lVar18 = *plStack_3e0;
    do {
      ppppplVar21 = (long *****)0x0;
      do {
        if (*plStack_3e0 != lVar18) {
          _objc_enumerationMutation(ppppplVar6);
        }
        ppppplVar25 = *(long ******)(lStack_3e8 + (long)ppppplVar21 * 8);
        ppppplVar22 = ppppplVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppplVar7 = ppppplVar22;
        func_0x00010c27dd80();
        if (ppppplVar7 == (long *****)0x5) {
          ppppplVar7 = ppppplVar22;
          func_0x00010c0d1ba0();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar24 = ppppplVar7;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          ppppplVar16 = ppppplVar24;
          func_0x00010bf529e0();
          if (ppppplVar16 == (long *****)0x0) {
            ppppplVar16 = (long *****)0x0;
            ppppplVar17 = (long *****)0x0;
          }
          else {
            ppppplVar17 = ppppplVar24;
            FUN_109cdfe6c(&pppplStack_3a8);
            ppppplVar16 = &pppplStack_3a8;
            FUN_109cd86d8();
            if ((long *****)pppplStack_3a8 != (long *****)0x0) {
              pppplStack_3a0 = pppplStack_3a8;
              __ZdlPv();
            }
          }
          _objc_retainAutorelease(ppppplVar25);
          func_0x00010bdc3520(ppppplVar25);
          ppppplVar8 = ppppplVar7;
          func_0x00010bf64880();
          uVar3 = SUB84(ppppplVar8,0);
          FUN_109ce3bec();
          uStack_390 = 0;
          cStack_378 = '\0';
          pppplStack_3a8 = (long ****)ppppplVar16;
          pppplStack_3a0 = (long ****)ppppplVar17;
          uStack_398 = uVar3;
          FUN_109ce4130(pppplStack_408,ppppplVar25,&pppplStack_3a8);
          if ((cStack_378 == '\x01') && (CONCAT71(uStack_38f,uStack_390) != 0)) {
            __ZdlPv();
          }
          _objc_release(ppppplVar24);
          _objc_release(ppppplVar7);
        }
        else {
          _objc_retainAutorelease(ppppplVar25);
          func_0x00010bdc3520(ppppplVar25);
          FUN_109ce3cac(pppplStack_408,ppppplVar25);
        }
        _objc_release(ppppplVar22);
        ppppplVar21 = (long *****)((long)ppppplVar21 + 1);
      } while (ppppplVar20 != ppppplVar21);
      ppppplVar20 = ppppplVar6;
      func_0x00010bf52a60();
    } while (ppppplVar20 != (long *****)0x0);
  }
  _objc_release(ppppplVar6);
  _objc_release(ppppplVar6);
  _objc_release(pppplStack_3f8);
  ppppplVar20 = (long *****)pppplStack_410;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_230) {
    ___stack_chk_fail();
    _objc_release(ppppplVar6);
    _objc_release(ppppplVar6);
    _objc_release(pppplStack_3f8);
    func_0x000109cde308(pppplStack_408);
    func_0x000109cde308(pppplStack_400);
    _objc_release(pppplStack_410);
    __Unwind_Resume();
    pcStack_418 = FUN_109ce0c58;
    pppplStack_430 = (long ****)ppppplVar17;
    pppplStack_428 = (long ****)ppppplVar16;
    ppuStack_420 = &puStack_1d0;
    FUN_109cdfad8(auStack_448,&uStack_431,&UNK_10e03e880);
    FUN_109cdc868(ppppplVar20,ppppplVar25,1,auStack_448);
    if (plStack_440 != (long *)0x0) {
      plVar13 = plStack_440 + 1;
      do {
        lVar18 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar18 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_440 + 0x10))(plStack_440);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_440);
      }
    }
    *ppppplVar20 = (long ****)&PTR_FUN_110b3ceb8;
    pppplVar9 = (long ****)0xf8;
    __Znwm();
    pppplVar9[1] = (long ***)0x0;
    pppplVar9[2] = (long ***)0x0;
    *pppplVar9 = (long ***)&PTR_FUN_110b3cfc0;
    pppplVar9[0xc] = (long ***)0x0;
    pppplVar9[0xb] = (long ***)0x0;
    pppplVar9[0xe] = (long ***)0x0;
    pppplVar9[0xd] = (long ***)0x0;
    pppplVar9[0x10] = (long ***)0x0;
    pppplVar9[0xf] = (long ***)0x0;
    pppplVar9[6] = (long ***)0x0;
    pppplVar9[5] = (long ***)0x0;
    pppplVar9[8] = (long ***)0x0;
    pppplVar9[7] = (long ***)0x0;
    pppplVar9[10] = (long ***)0x0;
    pppplVar9[9] = (long ***)0x0;
    pppplVar9[0x12] = (long ***)0x0;
    pppplVar9[0x11] = (long ***)0x0;
    pppplVar9[0x14] = (long ***)0x0;
    pppplVar9[0x13] = (long ***)0x0;
    pppplVar9[0x15] = (long ***)0x0;
    pppplVar9[0x16] = (long ***)0x32aaaba7;
    *(undefined4 *)(pppplVar9 + 0xb) = 0x3f800000;
    *(undefined4 *)(pppplVar9 + 0x10) = 0x3f800000;
    *(undefined4 *)(pppplVar9 + 0x15) = 0x3f800000;
    pppplVar9[4] = (long ***)0x0;
    pppplVar9[3] = (long ***)0x0;
    pppplVar9[0xd] = (long ***)0x0;
    pppplVar9[0xc] = (long ***)0x0;
    pppplVar9[0xf] = (long ***)0x0;
    pppplVar9[0xe] = (long ***)0x0;
    pppplVar9[0x14] = (long ***)0x0;
    pppplVar9[0x13] = (long ***)0x0;
    pppplVar9[0x12] = (long ***)0x0;
    pppplVar9[0x11] = (long ***)0x0;
    pppplVar9[0x1c] = (long ***)0x0;
    pppplVar9[0x1b] = (long ***)0x0;
    pppplVar9[0x1a] = (long ***)0x0;
    pppplVar9[0x19] = (long ***)0x0;
    pppplVar9[0x18] = (long ***)0x0;
    pppplVar9[0x17] = (long ***)0x0;
    ppppplVar20[0x27] = pppplVar9 + 3;
    ppppplVar20[0x28] = pppplVar9;
    pppplVar9[0x1d] = (long ***)0x0;
    pppplVar9[0x1e] = (long ***)ppppplVar20;
    ppplVar10 = (long ***)PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
    _objc_opt_new();
    ppplVar14 = ppppplVar20[0x27][2];
    ppppplVar20[0x27][2] = ppplVar10;
    _objc_release(ppplVar14);
    return ppppplVar20;
  }
  return ppppplVar20;
}



/* Entry: 109ce06b8; end: 109ce0c57;  */

undefined8 **** FUN_109ce06b8(undefined8 ****param_1,undefined8 ****param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined1 auStack_288 [8];
  long *plStack_280;
  undefined1 uStack_271;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 ***pppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined4 uStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  char cStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar16 = param_2;
  _objc_retain(param_2);
  param_1[1] = (undefined8 ***)0x0;
  *param_1 = (undefined8 ***)0x0;
  param_1[3] = (undefined8 ***)0x0;
  param_1[2] = (undefined8 ***)0x0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  pppuStack_248 = param_1 + 5;
  param_1[6] = (undefined8 ***)0x0;
  *pppuStack_248 = (undefined8 ***)0x0;
  param_1[8] = (undefined8 ***)0x0;
  param_1[7] = (undefined8 ***)0x0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0;
  pppuStack_250 = param_2;
  pppuStack_240 = param_1;
  func_0x00010c065a20();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain();
  ppppuVar5 = param_2;
  pppuStack_238 = param_2;
  func_0x00010bf52a60();
  if (ppppuVar5 != (undefined8 ****)0x0) {
    lVar11 = *plStack_1a0;
    do {
      ppppuVar12 = (undefined8 ****)0x0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(pppuStack_238);
        }
        ppppuVar14 = *(undefined8 *****)(lStack_1a8 + (long)ppppuVar12 * 8);
        ppppuVar13 = (undefined8 ****)pppuStack_238;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar16 = ppppuVar13;
        func_0x00010c27dd80();
        if (ppppuVar16 == (undefined8 ****)0x5) {
          ppppuVar6 = ppppuVar13;
          func_0x00010c0d1ba0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar7 = ppppuVar6;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar16 = ppppuVar7;
          func_0x00010bf529e0();
          if (ppppuVar16 == (undefined8 ****)0x0) {
            ppppuVar15 = (undefined8 ****)0x0;
            param_2 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar15 = ppppuVar7;
            FUN_109cdfe6c(&pppuStack_1e8);
            param_2 = &pppuStack_1e8;
            FUN_109cd86d8();
            if ((undefined8 ****)pppuStack_1e8 != (undefined8 ****)0x0) {
              pppuStack_1e0 = pppuStack_1e8;
              __ZdlPv();
            }
          }
          _objc_retainAutorelease(ppppuVar14);
          func_0x00010bdc3520();
          ppppuVar16 = ppppuVar6;
          func_0x00010bf64880();
          uVar4 = SUB84(ppppuVar16,0);
          FUN_109ce3bec();
          uStack_1d0 = 0;
          cStack_1b8 = '\0';
          ppppuVar16 = ppppuVar14;
          pppuStack_1e8 = param_2;
          pppuStack_1e0 = ppppuVar15;
          uStack_1d8 = uVar4;
          FUN_109ce4130(pppuStack_240,ppppuVar14,&pppuStack_1e8);
          if ((cStack_1b8 == '\x01') && (CONCAT71(uStack_1cf,uStack_1d0) != 0)) {
            __ZdlPv();
          }
          _objc_release(ppppuVar7);
          _objc_release(ppppuVar6);
          param_1 = ppppuVar14;
        }
        else {
          _objc_retainAutorelease(ppppuVar14);
          func_0x00010bdc3520(ppppuVar14);
          FUN_109ce3cac(pppuStack_240,ppppuVar14);
          ppppuVar16 = ppppuVar14;
        }
        _objc_release(ppppuVar13);
        ppppuVar12 = (undefined8 ****)((long)ppppuVar12 + 1);
      } while (ppppuVar5 != ppppuVar12);
      ppppuVar5 = (undefined8 ****)pppuStack_238;
      func_0x00010bf52a60();
    } while (ppppuVar5 != (undefined8 ****)0x0);
  }
  _objc_release(pppuStack_238);
  ppppuVar5 = (undefined8 ****)pppuStack_250;
  func_0x00010c0eecc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  _objc_retain();
  ppppuVar12 = ppppuVar5;
  func_0x00010bf52a60();
  if (ppppuVar12 != (undefined8 ****)0x0) {
    lVar11 = *plStack_220;
    do {
      ppppuVar13 = (undefined8 ****)0x0;
      do {
        if (*plStack_220 != lVar11) {
          _objc_enumerationMutation(ppppuVar5);
        }
        ppppuVar16 = *(undefined8 *****)(lStack_228 + (long)ppppuVar13 * 8);
        ppppuVar14 = ppppuVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar6 = ppppuVar14;
        func_0x00010c27dd80();
        if (ppppuVar6 == (undefined8 ****)0x5) {
          ppppuVar6 = ppppuVar14;
          func_0x00010c0d1ba0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar7 = ppppuVar6;
          func_0x00010c22a600();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar15 = ppppuVar7;
          func_0x00010bf529e0();
          if (ppppuVar15 == (undefined8 ****)0x0) {
            param_2 = (undefined8 ****)0x0;
            param_1 = (undefined8 ****)0x0;
          }
          else {
            param_1 = ppppuVar7;
            FUN_109cdfe6c(&pppuStack_1e8);
            param_2 = &pppuStack_1e8;
            FUN_109cd86d8();
            if ((undefined8 ****)pppuStack_1e8 != (undefined8 ****)0x0) {
              pppuStack_1e0 = pppuStack_1e8;
              __ZdlPv();
            }
          }
          _objc_retainAutorelease(ppppuVar16);
          func_0x00010bdc3520(ppppuVar16);
          ppppuVar15 = ppppuVar6;
          func_0x00010bf64880();
          uVar4 = SUB84(ppppuVar15,0);
          FUN_109ce3bec();
          uStack_1d0 = 0;
          cStack_1b8 = '\0';
          pppuStack_1e8 = param_2;
          pppuStack_1e0 = param_1;
          uStack_1d8 = uVar4;
          FUN_109ce4130(pppuStack_248,ppppuVar16,&pppuStack_1e8);
          if ((cStack_1b8 == '\x01') && (CONCAT71(uStack_1cf,uStack_1d0) != 0)) {
            __ZdlPv();
          }
          _objc_release(ppppuVar7);
          _objc_release(ppppuVar6);
        }
        else {
          _objc_retainAutorelease(ppppuVar16);
          func_0x00010bdc3520(ppppuVar16);
          FUN_109ce3cac(pppuStack_248,ppppuVar16);
        }
        _objc_release(ppppuVar14);
        ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
      } while (ppppuVar12 != ppppuVar13);
      ppppuVar12 = ppppuVar5;
      func_0x00010bf52a60();
    } while (ppppuVar12 != (undefined8 ****)0x0);
  }
  _objc_release(ppppuVar5);
  _objc_release(ppppuVar5);
  _objc_release(pppuStack_238);
  ppppuVar12 = (undefined8 ****)pppuStack_250;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppuVar12;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar5);
  _objc_release(ppppuVar5);
  _objc_release(pppuStack_238);
  func_0x000109cde308(pppuStack_248);
  func_0x000109cde308(pppuStack_240);
  _objc_release(pppuStack_250);
  __Unwind_Resume();
  pcStack_258 = FUN_109ce0c58;
  pppuStack_270 = param_1;
  pppuStack_268 = param_2;
  puStack_260 = &stack0xfffffffffffffff0;
  FUN_109cdfad8(auStack_288,&uStack_271,&UNK_10e03e880);
  FUN_109cdc868(ppppuVar12,ppppuVar16,1,auStack_288);
  if (plStack_280 != (long *)0x0) {
    plVar1 = plStack_280 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_280);
    }
  }
  *ppppuVar12 = (undefined8 ***)&PTR_FUN_110b3ceb8;
  pppuVar8 = (undefined8 ***)0xf8;
  __Znwm();
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)&PTR_FUN_110b3cfc0;
  pppuVar8[0xc] = (undefined8 **)0x0;
  pppuVar8[0xb] = (undefined8 **)0x0;
  pppuVar8[0xe] = (undefined8 **)0x0;
  pppuVar8[0xd] = (undefined8 **)0x0;
  pppuVar8[0x10] = (undefined8 **)0x0;
  pppuVar8[0xf] = (undefined8 **)0x0;
  pppuVar8[6] = (undefined8 **)0x0;
  pppuVar8[5] = (undefined8 **)0x0;
  pppuVar8[8] = (undefined8 **)0x0;
  pppuVar8[7] = (undefined8 **)0x0;
  pppuVar8[10] = (undefined8 **)0x0;
  pppuVar8[9] = (undefined8 **)0x0;
  pppuVar8[0x12] = (undefined8 **)0x0;
  pppuVar8[0x11] = (undefined8 **)0x0;
  pppuVar8[0x14] = (undefined8 **)0x0;
  pppuVar8[0x13] = (undefined8 **)0x0;
  pppuVar8[0x15] = (undefined8 **)0x0;
  pppuVar8[0x16] = (undefined8 **)0x32aaaba7;
  *(undefined4 *)(pppuVar8 + 0xb) = 0x3f800000;
  *(undefined4 *)(pppuVar8 + 0x10) = 0x3f800000;
  *(undefined4 *)(pppuVar8 + 0x15) = 0x3f800000;
  pppuVar8[4] = (undefined8 **)0x0;
  pppuVar8[3] = (undefined8 **)0x0;
  pppuVar8[0xd] = (undefined8 **)0x0;
  pppuVar8[0xc] = (undefined8 **)0x0;
  pppuVar8[0xf] = (undefined8 **)0x0;
  pppuVar8[0xe] = (undefined8 **)0x0;
  pppuVar8[0x14] = (undefined8 **)0x0;
  pppuVar8[0x13] = (undefined8 **)0x0;
  pppuVar8[0x12] = (undefined8 **)0x0;
  pppuVar8[0x11] = (undefined8 **)0x0;
  pppuVar8[0x1c] = (undefined8 **)0x0;
  pppuVar8[0x1b] = (undefined8 **)0x0;
  pppuVar8[0x1a] = (undefined8 **)0x0;
  pppuVar8[0x19] = (undefined8 **)0x0;
  pppuVar8[0x18] = (undefined8 **)0x0;
  pppuVar8[0x17] = (undefined8 **)0x0;
  ppppuVar12[0x27] = pppuVar8 + 3;
  ppppuVar12[0x28] = pppuVar8;
  pppuVar8[0x1d] = (undefined8 **)0x0;
  pppuVar8[0x1e] = ppppuVar12;
  ppuVar9 = (undefined8 **)PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
  _objc_opt_new();
  ppuVar10 = ppppuVar12[0x27][2];
  ppppuVar12[0x27][2] = ppuVar9;
  _objc_release(ppuVar10);
  return ppppuVar12;
}



/* Entry: 109ce0c58; end: 109ce0dc3;  */

undefined8 * FUN_109ce0c58(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_109cdfad8(auStack_38,&uStack_21,&UNK_10e03e880);
  FUN_109cdc868(param_1,param_2,1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  *param_1 = &PTR_FUN_110b3ceb8;
  puVar4 = (undefined8 *)0xf8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110b3cfc0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  puVar4[0x10] = 0;
  puVar4[0xf] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0x12] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = 0;
  puVar4[0x13] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0x32aaaba7;
  *(undefined4 *)(puVar4 + 0xb) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x10) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0x15) = 0x3f800000;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x14] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x11] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  puVar4[0x17] = 0;
  param_1[0x27] = puVar4 + 3;
  param_1[0x28] = puVar4;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = param_1;
  puVar5 = PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1[0x27] + 0x10);
  *(undefined **)(param_1[0x27] + 0x10) = puVar5;
  _objc_release(uVar6);
  return param_1;
}



/* Entry: 109ce0dc4; end: 109ce0e17;  */

undefined8 * FUN_109ce0dc4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b3ceb8;
  lVar1 = param_1[0x27];
  __ZNSt3__15mutex4lockEv(lVar1 + 0x98);
  *(undefined8 *)(param_1[0x27] + 0xd8) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x98);
  func_0x000109ce4b84(param_1 + 0x27);
  *param_1 = &PTR_DAT_110b3cb98;
  FUN_109cde95c(param_1 + 0x25);
  FUN_109cde278(param_1 + 0x17);
  puStack_28 = param_1 + 0x13;
  FUN_109cd42a0(&puStack_28);
  puStack_28 = param_1 + 0x10;
  func_0x000109cd4310(&puStack_28);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ce0e18; end: 109ce0e1b;  */

undefined8 * FUN_109ce0e18(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b3ceb8;
  lVar1 = param_1[0x27];
  __ZNSt3__15mutex4lockEv(lVar1 + 0x98);
  *(undefined8 *)(param_1[0x27] + 0xd8) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x98);
  func_0x000109ce4b84(param_1 + 0x27);
  *param_1 = &PTR_DAT_110b3cb98;
  FUN_109cde95c(param_1 + 0x25);
  FUN_109cde278(param_1 + 0x17);
  puStack_28 = param_1 + 0x13;
  FUN_109cd42a0(&puStack_28);
  puStack_28 = param_1 + 0x10;
  func_0x000109cd4310(&puStack_28);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ce0e1c; end: 109ce0e2f;  */

void FUN_109ce0e1c(void)

{
  FUN_109ce0dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ce0e30; end: 109ce0eeb;  */

void FUN_109ce0e30(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126ddff0;
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43680(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 109ce0eec; end: 109ce0fe7;  */

/* WARNING: Removing unreachable block (ram,0x000109ce13d8) */

void FUN_109ce0eec(long *param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined8 **ppuVar12;
  ulong uVar13;
  undefined8 ****ppppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined4 uStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_198;
  undefined8 ****ppppuStack_190;
  undefined8 *puStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  char cStack_138;
  long lStack_130;
  undefined1 auStack_128 [24];
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  long lStack_88;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  byte bStack_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  long lStack_28;
  
  plVar9 = &lStack_50;
  plVar5 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_38 = 3;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_50,*param_2,param_2[1]);
  }
  else {
    lStack_48 = param_2[1];
    lStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  bStack_38 = 1;
  uStack_30 = 0x100;
  uStack_2e = 2;
  (**(code **)(*param_1 + 0x30))(param_1,&lStack_50,param_3);
  (*(code *)(&PTR_DAT_110af4bf0)[bStack_38])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar10 = &uStack_b0;
  puVar6 = &uStack_b0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_98 = 3;
  if (*(char *)((long)plVar9 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_b0,*plVar9,plVar9[1]);
  }
  else {
    uStack_a8 = plVar9[1];
    uStack_b0 = *plVar9;
    uStack_a0 = plVar9[2];
  }
  bStack_98 = 1;
  uStack_90 = 0x100;
  uStack_8e = 2;
  (**(code **)(*plVar5 + 0x38))(extraout_x8,plVar5,&uStack_b0,param_3);
  (*(code *)(&PTR_DAT_110af4bf0)[bStack_98])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    __Unwind_Resume();
    FUN_109cd31ac(&ppppuStack_190,param_3,param_3 + 0x18);
    FUN_109cdfa10((undefined1 *)((long)puVar6 + 0x80));
    *(undefined8 **)((long)puVar6 + 0x88) = puStack_188;
    *(undefined8 *****)((long)puVar6 + 0x80) = ppppuStack_190;
    *(undefined8 ***)((long)puVar6 + 0x90) = ppuStack_180;
    puStack_188 = (undefined8 *)0x0;
    ppuStack_180 = (undefined8 ***)0x0;
    ppppuStack_190 = (undefined8 ****)0x0;
    func_0x000109cdfa74((undefined1 *)((long)puVar6 + 0x98));
    *(undefined8 *)((long)puVar6 + 0xa0) = uStack_170;
    *(undefined8 ***)((long)puVar6 + 0x98) = ppuStack_178;
    *(long *)((long)puVar6 + 0xa8) = lStack_168;
    uStack_170 = 0;
    lStack_168 = 0;
    ppuStack_178 = (undefined8 **)0x0;
    ppppuStack_1e8 = (undefined8 ****)&ppuStack_178;
    FUN_109cd42a0(&ppppuStack_1e8);
    ppppuStack_1e8 = &ppppuStack_190;
    func_0x000109cd4310(&ppppuStack_1e8);
    FUN_109ce14a4(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_109ce155c(*(undefined1 *)((long)puVar6 + 0x26),*(undefined1 *)((long)puVar6 + 0x41));
    FUN_109ce15cc(auStack_128,puVar10);
    puVar7 = PTR_PTR_1126ddff0;
    _objc_alloc(PTR_PTR_1126ddff0);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    lStack_130 = 0;
    func_0x00010c02c660(puVar7);
    lVar11 = lStack_130;
    _objc_retain(lStack_130);
    _objc_release(puVar8);
    if (lStack_110 != 0) {
      FUN_109d15064(lStack_110,1);
    }
    if (lVar11 != 0) {
      func_0x00010c09e4e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010952d0c4(&UNK_10e03e9bc,&UNK_10f5a92e5,lVar11);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109ce1440);
      (*pcVar4)();
    }
    FUN_109cdffc8(*(undefined8 *)((long)puVar6 + 0x138),puVar7);
    FUN_109ce06b8(&ppppuStack_1e8,puVar7);
    uStack_160 = uStack_1b8;
    lStack_168 = lStack_1c0;
    puStack_188 = puStack_1e0;
    ppppuStack_190 = ppppuStack_1e8;
    ppppuStack_1e8 = (undefined8 ****)0x0;
    puStack_1e0 = (undefined8 *)0x0;
    ppuStack_180 = ppuStack_1d8;
    ppuStack_178 = (undefined8 **)puStack_1d0;
    uStack_170 = CONCAT44(uStack_170._4_4_,uStack_1c8);
    if ((undefined8 **)puStack_1d0 != (undefined8 **)0x0) {
      ppuVar12 = (undefined8 **)ppuStack_1d8[1];
      if (((ulong)puStack_188 & (long)puStack_188 - 1U) == 0) {
        ppuVar12 = (undefined8 **)((ulong)ppuVar12 & (long)puStack_188 - 1U);
      }
      else if (puStack_188 <= ppuVar12) {
        uVar13 = 0;
        if ((undefined8 **)puStack_188 != (undefined8 **)0x0) {
          uVar13 = (ulong)ppuVar12 / (ulong)puStack_188;
        }
        ppuVar12 = (undefined8 **)((long)ppuVar12 - uVar13 * (long)puStack_188);
      }
      ppppuStack_190[(long)ppuVar12] = &ppuStack_180;
      ppuStack_1d8 = (undefined8 ***)0x0;
      puStack_1d0 = (undefined8 **)0x0;
    }
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    lStack_158 = lStack_1b0;
    lStack_150 = lStack_1a8;
    uStack_148 = uStack_1a0;
    if (lStack_1a8 != 0) {
      uVar13 = *(ulong *)(lStack_1b0 + 8);
      if ((uStack_160 & uStack_160 - 1) == 0) {
        uVar13 = uVar13 & uStack_160 - 1;
      }
      else if (uStack_160 <= uVar13) {
        uVar3 = 0;
        if (uStack_160 != 0) {
          uVar3 = uVar13 / uStack_160;
        }
        uVar13 = uVar13 - uVar3 * uStack_160;
      }
      *(long **)(lStack_168 + uVar13 * 8) = &lStack_158;
      lStack_1b0 = 0;
      lStack_1a8 = 0;
    }
    uStack_140 = uStack_198;
    cStack_138 = '\x01';
    FUN_109ce4298((undefined1 *)((long)puVar6 + 0xb8),(undefined1 *)((long)puVar6 + 0xb8),
                  &ppppuStack_190);
    if (cStack_138 == '\x01') {
      func_0x000109cde308(&lStack_168);
      func_0x000109cde308(&ppppuStack_190);
    }
    func_0x000109cde308(&lStack_1c0);
    func_0x000109cde308(&ppppuStack_1e8);
    _objc_release(puVar7);
    if (plStack_108 != (long *)0x0) {
      plVar5 = plStack_108 + 1;
      do {
        lVar11 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
      }
    }
    _objc_release(param_3);
    return;
  }
  return;
}



/* Entry: 109ce0fe8; end: 109ce10f3;  */

/* WARNING: Removing unreachable block (ram,0x000109ce13d8) */

void FUN_109ce0fe8(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 ****ppppuStack_198;
  undefined8 *puStack_190;
  undefined8 **ppuStack_188;
  undefined8 *puStack_180;
  undefined4 uStack_178;
  long lStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 *puStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  char cStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  long lStack_38;
  
  puVar9 = &uStack_60;
  puVar6 = &uStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_48 = 3;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
  }
  bStack_48 = 1;
  uStack_40 = 0x100;
  uStack_3e = 2;
  (**(code **)(*param_2 + 0x38))(param_1,param_2,&uStack_60,param_4);
  (*(code *)(&PTR_DAT_110af4bf0)[bStack_48])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_109cd31ac(&ppppuStack_140,param_4,param_4 + 0x18);
  FUN_109cdfa10((undefined1 *)((long)puVar6 + 0x80));
  *(undefined8 **)((long)puVar6 + 0x88) = puStack_138;
  *(undefined8 *****)((long)puVar6 + 0x80) = ppppuStack_140;
  *(undefined8 ***)((long)puVar6 + 0x90) = ppuStack_130;
  puStack_138 = (undefined8 *)0x0;
  ppuStack_130 = (undefined8 ***)0x0;
  ppppuStack_140 = (undefined8 ****)0x0;
  func_0x000109cdfa74((undefined1 *)((long)puVar6 + 0x98));
  *(undefined8 *)((long)puVar6 + 0xa0) = uStack_120;
  *(undefined8 ***)((long)puVar6 + 0x98) = ppuStack_128;
  *(long *)((long)puVar6 + 0xa8) = lStack_118;
  uStack_120 = 0;
  lStack_118 = 0;
  ppuStack_128 = (undefined8 **)0x0;
  ppppuStack_198 = (undefined8 ****)&ppuStack_128;
  FUN_109cd42a0(&ppppuStack_198);
  ppppuStack_198 = &ppppuStack_140;
  func_0x000109cd4310(&ppppuStack_198);
  FUN_109ce14a4(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_109ce155c(*(undefined1 *)((long)puVar6 + 0x26),*(undefined1 *)((long)puVar6 + 0x41));
  FUN_109ce15cc(auStack_d8,puVar9);
  puVar7 = PTR_PTR_1126ddff0;
  _objc_alloc(PTR_PTR_1126ddff0);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = 0;
  func_0x00010c02c660(puVar7);
  lVar10 = lStack_e0;
  _objc_retain(lStack_e0);
  _objc_release(puVar8);
  if (lStack_c0 != 0) {
    FUN_109d15064(lStack_c0,1);
  }
  if (lVar10 != 0) {
    func_0x00010c09e4e0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010952d0c4(&UNK_10e03e9bc,&UNK_10f5a92e5,lVar10);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109ce1440);
    (*pcVar5)();
  }
  FUN_109cdffc8(*(undefined8 *)((long)puVar6 + 0x138),puVar7);
  FUN_109ce06b8(&ppppuStack_198,puVar7);
  uStack_110 = uStack_168;
  lStack_118 = lStack_170;
  puStack_138 = puStack_190;
  ppppuStack_140 = ppppuStack_198;
  ppppuStack_198 = (undefined8 ****)0x0;
  puStack_190 = (undefined8 *)0x0;
  ppuStack_130 = ppuStack_188;
  ppuStack_128 = (undefined8 **)puStack_180;
  uStack_120 = CONCAT44(uStack_120._4_4_,uStack_178);
  if ((undefined8 **)puStack_180 != (undefined8 **)0x0) {
    ppuVar11 = (undefined8 **)ppuStack_188[1];
    if (((ulong)puStack_138 & (long)puStack_138 - 1U) == 0) {
      ppuVar11 = (undefined8 **)((ulong)ppuVar11 & (long)puStack_138 - 1U);
    }
    else if (puStack_138 <= ppuVar11) {
      uVar12 = 0;
      if ((undefined8 **)puStack_138 != (undefined8 **)0x0) {
        uVar12 = (ulong)ppuVar11 / (ulong)puStack_138;
      }
      ppuVar11 = (undefined8 **)((long)ppuVar11 - uVar12 * (long)puStack_138);
    }
    ppppuStack_140[(long)ppuVar11] = &ppuStack_130;
    ppuStack_188 = (undefined8 ***)0x0;
    puStack_180 = (undefined8 **)0x0;
  }
  lStack_170 = 0;
  uStack_168 = 0;
  lStack_108 = lStack_160;
  lStack_100 = lStack_158;
  uStack_f8 = uStack_150;
  if (lStack_158 != 0) {
    uVar12 = *(ulong *)(lStack_160 + 8);
    if ((uStack_110 & uStack_110 - 1) == 0) {
      uVar12 = uVar12 & uStack_110 - 1;
    }
    else if (uStack_110 <= uVar12) {
      uVar4 = 0;
      if (uStack_110 != 0) {
        uVar4 = uVar12 / uStack_110;
      }
      uVar12 = uVar12 - uVar4 * uStack_110;
    }
    *(long **)(lStack_118 + uVar12 * 8) = &lStack_108;
    lStack_160 = 0;
    lStack_158 = 0;
  }
  uStack_f0 = uStack_148;
  cStack_e8 = '\x01';
  FUN_109ce4298((undefined1 *)((long)puVar6 + 0xb8),(undefined1 *)((long)puVar6 + 0xb8),
                &ppppuStack_140);
  if (cStack_e8 == '\x01') {
    func_0x000109cde308(&lStack_118);
    func_0x000109cde308(&ppppuStack_140);
  }
  func_0x000109cde308(&lStack_170);
  func_0x000109cde308(&ppppuStack_198);
  _objc_release(puVar7);
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 109ce10f4; end: 109ce14a3;  */

/* WARNING: Removing unreachable block (ram,0x000109ce13d8) */

void FUN_109ce10f4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 **ppuVar9;
  ulong uVar10;
  undefined8 ****ppppuStack_138;
  undefined8 *puStack_130;
  undefined8 **ppuStack_128;
  undefined8 *puStack_120;
  undefined4 uStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  char cStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  long lStack_60;
  long *plStack_58;
  
  FUN_109cd31ac(&ppppuStack_e0,param_3,param_3 + 0x18);
  FUN_109cdfa10(param_1 + 0x80);
  *(undefined8 **)(param_1 + 0x88) = puStack_d8;
  *(undefined8 *****)(param_1 + 0x80) = ppppuStack_e0;
  *(undefined8 ***)(param_1 + 0x90) = ppuStack_d0;
  puStack_d8 = (undefined8 *)0x0;
  ppuStack_d0 = (undefined8 ***)0x0;
  ppppuStack_e0 = (undefined8 ****)0x0;
  func_0x000109cdfa74(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uStack_c0;
  *(undefined8 ***)(param_1 + 0x98) = ppuStack_c8;
  *(long *)(param_1 + 0xa8) = lStack_b8;
  uStack_c0 = 0;
  lStack_b8 = 0;
  ppuStack_c8 = (undefined8 **)0x0;
  ppppuStack_138 = (undefined8 ****)&ppuStack_c8;
  FUN_109cd42a0(&ppppuStack_138);
  ppppuStack_138 = &ppppuStack_e0;
  func_0x000109cd4310(&ppppuStack_138);
  FUN_109ce14a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_109ce155c(*(undefined1 *)(param_1 + 0x26),*(undefined1 *)(param_1 + 0x41));
  FUN_109ce15cc(auStack_78,param_2);
  puVar6 = PTR_PTR_1126ddff0;
  _objc_alloc(PTR_PTR_1126ddff0);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lStack_80 = 0;
  func_0x00010c02c660(puVar6);
  lVar8 = lStack_80;
  _objc_retain(lStack_80);
  _objc_release(puVar7);
  if (lStack_60 != 0) {
    FUN_109d15064(lStack_60,1);
  }
  if (lVar8 != 0) {
    func_0x00010c09e4e0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010952d0c4(&UNK_10e03e9bc,&UNK_10f5a92e5,lVar8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109ce1440);
    (*pcVar5)();
  }
  FUN_109cdffc8(*(undefined8 *)(param_1 + 0x138),puVar6);
  FUN_109ce06b8(&ppppuStack_138,puVar6);
  uStack_b0 = uStack_108;
  lStack_b8 = lStack_110;
  puStack_d8 = puStack_130;
  ppppuStack_e0 = ppppuStack_138;
  ppppuStack_138 = (undefined8 ****)0x0;
  puStack_130 = (undefined8 *)0x0;
  ppuStack_d0 = ppuStack_128;
  ppuStack_c8 = (undefined8 **)puStack_120;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uStack_118);
  if ((undefined8 **)puStack_120 != (undefined8 **)0x0) {
    ppuVar9 = (undefined8 **)ppuStack_128[1];
    if (((ulong)puStack_d8 & (long)puStack_d8 - 1U) == 0) {
      ppuVar9 = (undefined8 **)((ulong)ppuVar9 & (long)puStack_d8 - 1U);
    }
    else if (puStack_d8 <= ppuVar9) {
      uVar10 = 0;
      if ((undefined8 **)puStack_d8 != (undefined8 **)0x0) {
        uVar10 = (ulong)ppuVar9 / (ulong)puStack_d8;
      }
      ppuVar9 = (undefined8 **)((long)ppuVar9 - uVar10 * (long)puStack_d8);
    }
    ppppuStack_e0[(long)ppuVar9] = &ppuStack_d0;
    ppuStack_128 = (undefined8 ***)0x0;
    puStack_120 = (undefined8 **)0x0;
  }
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_a8 = lStack_100;
  lStack_a0 = lStack_f8;
  uStack_98 = uStack_f0;
  if (lStack_f8 != 0) {
    uVar10 = *(ulong *)(lStack_100 + 8);
    if ((uStack_b0 & uStack_b0 - 1) == 0) {
      uVar10 = uVar10 & uStack_b0 - 1;
    }
    else if (uStack_b0 <= uVar10) {
      uVar4 = 0;
      if (uStack_b0 != 0) {
        uVar4 = uVar10 / uStack_b0;
      }
      uVar10 = uVar10 - uVar4 * uStack_b0;
    }
    *(long **)(lStack_b8 + uVar10 * 8) = &lStack_a8;
    lStack_100 = 0;
    lStack_f8 = 0;
  }
  uStack_90 = uStack_e8;
  cStack_88 = '\x01';
  FUN_109ce4298(param_1 + 0xb8,param_1 + 0xb8,&ppppuStack_e0);
  if (cStack_88 == '\x01') {
    func_0x000109cde308(&lStack_b8);
    func_0x000109cde308(&ppppuStack_e0);
  }
  func_0x000109cde308(&lStack_110);
  func_0x000109cde308(&ppppuStack_138);
  _objc_release(puVar6);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 109ce14a4; end: 109ce155b;  */

void FUN_109ce14a4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lVar3 = *(long *)(param_1 + 0x20);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  for (plVar2 = *(long **)(param_1 + 0x18); PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar5,
      plVar2 != (long *)lVar3; plVar2 = plVar2 + 0xb) {
    plVar1 = (long *)*plVar2;
    if (-1 < *(char *)((long)plVar2 + 0x17)) {
      plVar1 = plVar2;
    }
    func_0x00010c25da80(puVar5,param_2,plVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109ce155c; end: 109ce15cb;  */

undefined8 * FUN_109ce155c(ulong param_1,byte param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puStack_48;
  
  if ((param_1 & 1) == 0) {
    if (3 < param_2) goto LAB_109ce15b0;
    puVar2 = (undefined8 *)(ulong)param_2;
  }
  else {
    if (param_2 != 2) {
      func_0x00010952d0c4(&UNK_10f5a969a,&UNK_10f5a9864,&UNK_10f5a9873);
LAB_109ce15b0:
      puVar2 = (undefined8 *)&UNK_10f5a969a;
      puVar4 = &UNK_10f5a9864;
      func_0x00010952d0c4(&UNK_10f5a969a,&UNK_10f5a9864,&UNK_10f5a98bf);
      uVar1 = *(ushort *)(puVar4 + 0x20);
      if ((uVar1 >> 8 & 1) != 0) {
        puVar2[4] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        if ((uVar1 & 1) != 0) {
          FUN_109d145f0(&puStack_48,puVar4);
          if (puStack_48 == (undefined *)0x0) {
            puVar3 = (undefined8 *)0x0;
          }
          else {
            puVar3 = (undefined8 *)0x20;
            __Znwm();
            *puVar3 = &PTR_FUN_110b3cf60;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = puStack_48;
          }
          puVar2[3] = puStack_48;
          puVar2[4] = puVar3;
          puVar4 = puStack_48;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar2,puVar4);
        return puVar2;
      }
      puVar2 = (undefined8 *)&UNK_10f5a969a;
      func_0x00010952d0c4(&UNK_10f5a969a,&UNK_10f5a98d0,&UNK_10f5a98e1);
      puStack_48 = (undefined *)0x0;
      FUN_109ce44cc(&puStack_48);
      FUN_109ce16a4();
      __Unwind_Resume();
      func_0x000109ce450c(puVar2 + 3);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __ZdlPv(*puVar2);
      }
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



/* Entry: 109ce15cc; end: 109ce16a3;  */

undefined8 * FUN_109ce15cc(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lStack_38;
  
  uVar1 = *(ushort *)(param_2 + 0x20);
  if ((uVar1 >> 8 & 1) != 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if ((uVar1 & 1) != 0) {
      FUN_109d145f0(&lStack_38,param_2);
      if (lStack_38 == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)0x20;
        __Znwm();
        *puVar2 = &PTR_FUN_110b3cf60;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = lStack_38;
      }
      param_1[3] = lStack_38;
      param_1[4] = puVar2;
      param_2 = lStack_38;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_2);
    return param_1;
  }
  puVar2 = (undefined8 *)&UNK_10f5a969a;
  func_0x00010952d0c4(&UNK_10f5a969a,&UNK_10f5a98d0,&UNK_10f5a98e1);
  lStack_38 = 0;
  FUN_109ce44cc(&lStack_38);
  FUN_109ce16a4();
  __Unwind_Resume();
  func_0x000109ce450c(puVar2 + 3);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    __ZdlPv(*puVar2);
  }
  return puVar2;
}



/* Entry: 109ce16a4; end: 109ce16db;  */

undefined8 * FUN_109ce16a4(undefined8 *param_1)

{
  func_0x000109ce450c(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109ce16dc; end: 109ce1c0b;  */

void FUN_109ce16dc(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 **ppuStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long alStack_70 [2];
  
  FUN_109d1a6fc(&plStack_78);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3812000000;
  pcStack_98 = FUN_109ce1c0c;
  uStack_90 = 0x109ce1c1c;
  uStack_88 = 0;
  lStack_80 = alStack_70[0];
  alStack_70[0] = 0;
  FUN_109cd31ac(&uStack_e0,param_4,param_4 + 0x18);
  FUN_109cdfa10(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(long *)(param_2 + 0x90) = lStack_d0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  uStack_e0 = 0;
  func_0x000109cdfa74(param_2 + 0x98);
  *(long **)(param_2 + 0xa0) = plStack_c0;
  *(undefined8 **)(param_2 + 0x98) = puStack_c8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_b8;
  plStack_c0 = (long *)0x0;
  uStack_b8 = 0;
  puStack_c8 = (undefined8 **)0x0;
  ppuStack_f0 = &puStack_c8;
  FUN_109cd42a0(&ppuStack_f0);
  ppuStack_f0 = (undefined8 **)&uStack_e0;
  func_0x000109cd4310(&ppuStack_f0);
  FUN_109ce14a4(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_109ce155c(*(undefined1 *)(param_2 + 0x26),*(undefined1 *)(param_2 + 0x41));
  FUN_109ce15cc(&uStack_e0,param_3);
  plVar2 = plStack_c0;
  ppuStack_f0 = (undefined8 **)puStack_c8;
  plStack_e8 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar4 = plStack_c0 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = *plVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar4 = *(long **)(param_2 + 0x140);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ddff0;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x00010c09b1e0(puVar7);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  _objc_release(puVar8);
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar4 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar2 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar4 = plStack_e8 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar4 = plStack_c0 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (lStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  _objc_release(param_4);
  *param_1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  __Block_object_dispose(&uStack_b0,8);
  if (lStack_80 != 0) {
    func_0x0001092b4274(&lStack_80);
  }
  if (alStack_70[0] != 0) {
    func_0x0001092b4274(alStack_70);
  }
  if (plStack_78 != (long *)0x0) {
    puVar3 = (ulong *)(plStack_78 + 1);
    do {
      uVar10 = *puVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar6) {
        *puVar3 = uVar10 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar10 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_78 + 8))();
      }
    }
  }
  return;
}



/* Entry: 109ce1c0c; end: 109ce1c2b;  */

void FUN_109ce1c0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 109ce1c2c; end: 109ce1f5b;  */

/* WARNING: Removing unreachable block (ram,0x000109ce1df8) */

void FUN_109ce1c2c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  char cStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_109d15064(*(long *)(param_1 + 0x28),1);
  }
  lVar8 = *(long *)(param_1 + 0x38);
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    if (param_3 == 0) {
      func_0x000107c31940(&lStack_b0,&UNK_10f5a9679);
    }
    else {
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x000107c31940(&lStack_b0,lVar8);
      _objc_release(param_3);
    }
    FUN_109cdc728(&UNK_10f5a969a,&UNK_10f5a96ac,&lStack_b0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109ce1e78);
    (*pcVar5)();
  }
  __ZNSt3__15mutex4lockEv(lVar8 + 0x98);
  FUN_109cdffc8(lVar8,param_2);
  if (*(long *)(lVar8 + 0xd8) != 0) {
    FUN_109ce06b8(&lStack_108,param_2);
    uStack_80 = uStack_d8;
    lStack_88 = lStack_e0;
    uStack_a8 = uStack_100;
    lStack_b0 = lStack_108;
    lStack_108 = 0;
    uStack_100 = 0;
    lStack_a0 = lStack_f8;
    lStack_98 = lStack_f0;
    uStack_90 = uStack_e8;
    if (lStack_f0 != 0) {
      uVar6 = *(ulong *)(lStack_f8 + 8);
      if ((uStack_a8 & uStack_a8 - 1) == 0) {
        uVar6 = uVar6 & uStack_a8 - 1;
      }
      else if (uStack_a8 <= uVar6) {
        uVar4 = 0;
        if (uStack_a8 != 0) {
          uVar4 = uVar6 / uStack_a8;
        }
        uVar6 = uVar6 - uVar4 * uStack_a8;
      }
      *(long **)(lStack_b0 + uVar6 * 8) = &lStack_a0;
      lStack_f8 = 0;
      lStack_f0 = 0;
    }
    lStack_e0 = 0;
    uStack_d8 = 0;
    lStack_78 = lStack_d0;
    lStack_70 = lStack_c8;
    uStack_68 = uStack_c0;
    if (lStack_c8 != 0) {
      uVar6 = *(ulong *)(lStack_d0 + 8);
      if ((uStack_80 & uStack_80 - 1) == 0) {
        uVar6 = uVar6 & uStack_80 - 1;
      }
      else {
        uVar4 = 0;
        if (uStack_80 != 0) {
          uVar4 = uVar6 / uStack_80;
        }
        if (uStack_80 <= uVar6) {
          uVar6 = uVar6 - uVar4 * uStack_80;
        }
      }
      *(long **)(lStack_88 + uVar6 * 8) = &lStack_78;
      lStack_d0 = 0;
      lStack_c8 = 0;
    }
    uStack_60 = uStack_b8;
    cStack_58 = '\x01';
    FUN_109ce4298(*(long *)(lVar8 + 0xd8) + 0xb8,*(long *)(lVar8 + 0xd8) + 0xb8,&lStack_b0);
    if (cStack_58 == '\x01') {
      func_0x000109cde308(&lStack_88);
      func_0x000109cde308(&lStack_b0);
    }
    func_0x000109cde308(&lStack_e0);
    func_0x000109cde308(&lStack_108);
  }
  __ZNSt3__15mutex6unlockEv(lVar8 + 0x98);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30);
  plVar1 = (long *)(lVar8 + 0x10);
  do {
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_109ce1e1c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_109ce1e1c:
      _objc_release(param_3);
      _objc_release(param_2);
      return;
    }
  } while( true );
}



/* Entry: 109ce1f5c; end: 109ce2007;  */

void FUN_109ce1f5c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
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
  lVar4 = *(long *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
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



/* Entry: 109ce2008; end: 109ce3bc3;  */

void FUN_109ce2008(undefined8 *param_1,long *****param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long *****ppppplVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *****pppppuVar8;
  undefined **ppuVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  int **ppiVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  long ***ppplVar21;
  long *****ppppplVar22;
  ulong uVar23;
  long ****pppplVar24;
  long *****ppppplVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  long ***ppplVar29;
  long ****pppplVar30;
  int *piVar32;
  ulong uVar33;
  long *plVar34;
  long *****ppppplVar35;
  long ****pppplVar36;
  uint *****pppppuVar37;
  undefined **ppuVar38;
  long lVar39;
  long *****ppppplVar40;
  undefined8 uVar41;
  long *****unaff_x26;
  undefined *puVar42;
  undefined **unaff_x28;
  uint ****ppppuVar43;
  uint ****ppppuVar44;
  undefined *puStack_398;
  uint ****ppppuStack_360;
  uint ****ppppuStack_348;
  uint ****ppppuStack_340;
  uint ****appppuStack_338 [2];
  char cStack_321;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  int *piStack_2c0;
  int *piStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  int *piStack_280;
  int *piStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_231;
  code *pcStack_230;
  undefined **ppuStack_228;
  uint ****ppppuStack_220;
  long ****pppplStack_170;
  long ****pppplStack_168;
  undefined **ppuStack_160;
  uint ****ppppuStack_158;
  undefined **ppuStack_150;
  long ****pppplStack_f0;
  uint ****ppppuStack_e8;
  undefined *puStack_e0;
  uint ****ppppuStack_d8;
  undefined *apuStack_d0 [2];
  undefined1 auStack_c0 [80];
  long lStack_70;
  ulong uVar31;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar4 = param_2;
  _objc_autoreleasePoolPush();
  ppplVar29 = (long ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bffc4a0();
  ppplVar21 = param_2[0x27][1];
  param_2[0x27][1] = ppplVar29;
  _objc_release(ppplVar21);
  plVar34 = *(long **)(param_3 + 0x10);
  do {
    if (plVar34 == (long *)0x0) {
      func_0x00010c21f9a0(param_2[0x27][2]);
      ppppplVar35 = param_2;
      if ((*(byte *)((long)param_2 + 0x42) & 1) == 0) {
        pppplVar36 = param_2[0x27];
      }
      else {
        iVar20 = 2;
        uVar23 = 0x10;
        func_0x000107c31924(2,0x10,0,0);
        pppplVar36 = param_2[0x27];
        if ((iVar20 != 0) && (((ulong)pppplVar36[3] & 1) == 0)) {
          ppppplVar10 = (long *****)*pppplVar36;
          func_0x00010c0eecc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(ppppplVar10);
          ppppplVar40 = ppppplVar10;
          func_0x00010bf529e0();
          ppppplVar25 = (long *****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          ppppplVar35 = ppppplVar10;
          ppppplVar22 = (long *****)PTR____NSDictionary0__struct_11034ab58;
          if (ppppplVar40 != (long *****)0x0) {
            func_0x00010bf529e0(ppppplVar10);
            func_0x00010bf71fe0();
            _objc_retainAutoreleasedReturnValue();
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_288 = 0;
            uStack_290 = 0;
            piStack_2b8 = (int *)0x0;
            piStack_2c0 = (int *)0x0;
            uStack_2a8 = 0;
            plStack_2b0 = (long *)0x0;
            _objc_retain(ppppplVar10);
            ppppplVar40 = ppppplVar10;
            func_0x00010bf52a60();
            if (ppppplVar40 != (long *****)0x0) {
              lVar5 = *plStack_2b0;
              do {
                ppppplVar22 = (long *****)0x0;
                do {
                  if (*plStack_2b0 != lVar5) {
                    _objc_enumerationMutation(ppppplVar10);
                  }
                  uVar41 = *(undefined8 *)(piStack_2b8 + (long)ppppplVar22 * 2);
                  ppppplVar11 = ppppplVar10;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_retain();
                  ppppplVar12 = ppppplVar11;
                  func_0x00010c27dd80();
                  if (ppppplVar12 != (long *****)0x5) {
                    _objc_release(ppppplVar11);
                    goto LAB_109ce2d88;
                  }
                  unaff_x26 = ppppplVar11;
                  func_0x00010c0d1ba0();
                  _objc_retainAutoreleasedReturnValue();
                  if (unaff_x26 == (long *****)0x0) {
LAB_109ce2d78:
                    _objc_release(unaff_x26);
                    _objc_release(ppppplVar11);
                  }
                  else {
                    ppppplVar12 = unaff_x26;
                    func_0x00010c22a600();
                    _objc_retainAutoreleasedReturnValue();
                    ppppplVar13 = ppppplVar12;
                    func_0x00010bf529e0();
                    ppppplVar35 = (long *****)(ulong)(ppppplVar13 == (long *****)0x0);
                    _objc_release(ppppplVar12);
                    if (ppppplVar13 == (long *****)0x0) goto LAB_109ce2d78;
                    ppppplVar12 = unaff_x26;
                    func_0x00010c22a640();
                    _objc_retainAutoreleasedReturnValue();
                    if ((ppppplVar12 == (long *****)0x0) ||
                       (ppppplVar13 = ppppplVar12, func_0x00010c27dd80(),
                       ppppplVar13 == (long *****)0x1)) {
LAB_109ce2cb4:
                      _objc_release(ppppplVar12);
                      _objc_release(unaff_x26);
                      _objc_release(ppppplVar11);
LAB_109ce2ccc:
                      unaff_x26 = ppppplVar11;
                      func_0x00010c0d1ba0(ppppplVar11);
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x28 = (undefined **)PTR__OBJC_CLASS___MLMultiArray_1126ddfa8;
                      _objc_alloc();
                      ppppplVar12 = unaff_x26;
                      func_0x00010c22a600(unaff_x26);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf64880(unaff_x26);
                      appppuStack_338[0] = (uint ****)0x0;
                      func_0x00010c045980();
                      ppppuVar43 = appppuStack_338[0];
                      _objc_retain(appppuStack_338[0]);
                      _objc_release(ppppplVar12);
                      if ((long *****)unaff_x28 == (long *****)0x0) {
                        _objc_retainAutorelease(uVar41);
                        func_0x00010bdc3520(uVar41);
                        if ((long *****)ppppuVar43 != (long *****)0x0) {
                          ppppplVar35 = (long *****)ppppuVar43;
                          func_0x00010c09e4e0(ppppuVar43);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_retainAutorelease();
                          func_0x00010bdc3520(ppppplVar35);
                        }
                        FUN_10ae030a0(0,uVar41);
                        FUN_10ae030a0();
                        unaff_x28 = &PTR_PTR_1132fe928;
                        ppuVar38 = unaff_x28;
                        FUN_10ae079a0();
                        FUN_10ae030d8();
                        FUN_10ae030d8();
                        FUN_10ae07cd4(ppuVar38,&PTR_PTR_1132fe928);
                        if ((long *****)ppppuVar43 != (long *****)0x0) {
                          _objc_release(ppppplVar35);
                        }
                        _objc_release(ppppuVar43);
                        _objc_release(unaff_x26);
                        _objc_release(ppppplVar11);
                        _objc_release(ppppplVar10);
                        ppppplVar22 = (long *****)PTR____NSDictionary0__struct_11034ab58;
                        goto LAB_109ce2f34;
                      }
                      func_0x00010c1d0640(ppppplVar25);
                      _objc_release(unaff_x28);
                      _objc_release(ppppuVar43);
                      _objc_release(unaff_x26);
                    }
                    else if (ppppplVar13 == (long *****)0x2) {
                      ppppplVar13 = ppppplVar12;
                      func_0x00010bf98120();
                      _objc_retainAutoreleasedReturnValue();
                      ppppplVar14 = ppppplVar13;
                      func_0x00010bf529e0();
                      ppppplVar35 = (long *****)(ulong)(ppppplVar14 < (long *****)0x2);
                      _objc_release(ppppplVar13);
                      _objc_release(ppppplVar12);
                      _objc_release(unaff_x26);
                      _objc_release(ppppplVar11);
                      if (ppppplVar14 < (long *****)0x2) goto LAB_109ce2ccc;
                    }
                    else {
                      if (ppppplVar13 == (long *****)0x3) {
                        uStack_258 = 0;
                        uStack_260 = 0;
                        uStack_248 = 0;
                        uStack_250 = 0;
                        piStack_278 = (int *)0x0;
                        piStack_280 = (int *)0x0;
                        uStack_268 = 0;
                        plStack_270 = (long *)0x0;
                        unaff_x28 = (undefined **)ppppplVar12;
                        func_0x00010c23d560();
                        _objc_retainAutoreleasedReturnValue();
                        ppppplVar13 = (long *****)unaff_x28;
                        func_0x00010bf52a60();
                        if (ppppplVar13 != (long *****)0x0) {
                          lVar39 = *plStack_270;
                          do {
                            ppppplVar35 = (long *****)0x0;
                            do {
                              if (*plStack_270 != lVar39) {
                                _objc_enumerationMutation(unaff_x28);
                              }
                              func_0x00010c11f4c0(*(undefined8 *)
                                                   (piStack_278 + (long)ppppplVar35 * 2));
                              if (1 < uVar23) {
                                _objc_release(unaff_x28);
                                _objc_release(ppppplVar12);
                                _objc_release(unaff_x26);
                                _objc_release(ppppplVar11);
                                goto LAB_109ce2d88;
                              }
                              ppppplVar35 = (long *****)((long)ppppplVar35 + 1);
                            } while (ppppplVar13 != ppppplVar35);
                            ppppplVar13 = (long *****)unaff_x28;
                            func_0x00010bf52a60();
                          } while (ppppplVar13 != (long *****)0x0);
                        }
                        _objc_release(unaff_x28);
                        goto LAB_109ce2cb4;
                      }
                      _objc_release(ppppplVar12);
                      _objc_release(unaff_x26);
                      _objc_release(ppppplVar11);
                    }
                  }
LAB_109ce2d88:
                  _objc_release(ppppplVar11);
                  ppppplVar22 = (long *****)((long)ppppplVar22 + 1);
                } while (ppppplVar22 != ppppplVar40);
                ppppplVar40 = ppppplVar10;
                func_0x00010bf52a60();
              } while (ppppplVar40 != (long *****)0x0);
            }
            _objc_release(ppppplVar10);
            _objc_retain(ppppplVar25);
            ppppplVar22 = ppppplVar25;
LAB_109ce2f34:
            _objc_release(ppppplVar25);
            ppppuStack_360 = (uint ****)ppppplVar25;
          }
          _objc_release(ppppplVar10);
          func_0x00010c1d6ec0(param_2[0x27][2]);
          _objc_release(ppppplVar22);
          _objc_release(ppppplVar10);
          pppplVar36 = param_2[0x27];
          *(undefined1 *)(pppplVar36 + 3) = 1;
        }
      }
      ppppplVar25 = (long *****)*pppplVar36;
      uStack_2c8 = 0;
      func_0x00010c106640();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uStack_2c8;
      _objc_retain();
      if (ppppplVar25 != (long *****)0x0) {
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(undefined4 *)(param_1 + 4) = 0x3f800000;
        ppppplVar40 = ppppplVar25;
        func_0x00010c0d1bc0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        lStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        puStack_300 = (undefined8 *)0x0;
        _objc_retain();
        ppppplVar22 = ppppplVar40;
        func_0x00010bf52a60();
        if (ppppplVar22 != (long *****)0x0) {
          unaff_x28 = (undefined **)*puStack_300;
          puStack_398 = &UNK_10f5a9909;
          do {
            ppppuStack_348 = (uint ****)0x0;
            do {
              if ((long *****)*puStack_300 != (long *****)unaff_x28) {
                _objc_enumerationMutation(ppppplVar40);
              }
              unaff_x26 = *(long ******)(lStack_308 + (long)ppppuStack_348 * 8);
              ppppplVar10 = ppppplVar40;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              ppppplVar35 = ppppplVar10;
              func_0x00010c22a600();
              _objc_retainAutoreleasedReturnValue();
              FUN_109cdfe6c(&piStack_280,ppppplVar35);
              _objc_release(ppppplVar35);
              ppppplVar35 = ppppplVar10;
              func_0x00010c25cc60();
              _objc_retainAutoreleasedReturnValue();
              ppppplVar11 = ppppplVar35;
              FUN_109cdfe6c(&piStack_2c0);
              _objc_release(ppppplVar35);
              if ((long)piStack_278 - (long)piStack_280 != (long)piStack_2b8 - (long)piStack_2c0) {
                func_0x00010952d0c4(&UNK_10e03e9bc,&UNK_10f5a9324,&UNK_10f5a97f3);
                goto LAB_109ce36e8;
              }
              ppiVar15 = &piStack_280;
              FUN_109cd86d8();
              iVar20 = *piStack_2c0;
              iVar26 = *piStack_280;
              uStack_320 = ppiVar15;
              uStack_318 = ppppplVar11;
              _objc_retain(unaff_x26);
              _objc_retainAutorelease(unaff_x26);
              ppppplVar35 = unaff_x26;
              func_0x00010bdc3520(unaff_x26);
              func_0x000107c31940(appppuStack_338,ppppplVar35);
              _objc_release(unaff_x26);
              ppppplVar35 = param_2;
              FUN_109cde228(param_2,appppuStack_338);
              ppppuStack_340 = (uint ****)ppppplVar35;
              if (iVar26 * iVar20 !=
                  (int)uStack_318 * uStack_318._4_4_ * uStack_320._4_4_ * (int)uStack_320) {
                FUN_109cdb604(&pppplStack_f0,param_2[0x25],&uStack_320,&ppppuStack_340);
                puVar42 = apuStack_d0[0];
                if ((uint)ppppuStack_d8 < 0xf) {
                  _objc_retainAutorelease(ppppplVar10);
                  unaff_x26 = ppppplVar10;
                  func_0x00010bf64040(ppppplVar10);
                  piVar32 = piStack_280;
                  piVar17 = piStack_2c0;
                  if (((uint)ppppuStack_340 - 3 < 0xc) || ((uint)ppppuStack_340 < 2)) {
                    /* WARNING: Could not recover jumptable at 0x000109ce3280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((ulong)(byte)(&UNK_10e03e9ad)[(ulong)ppppuStack_340 & 0xffffffff] * 4
                              + 0x109ce3284))((long)piStack_278 - (long)piStack_280 >> 2);
                    return;
                  }
                  if ((uint)ppppuStack_340 == 2) {
                    uVar23 = (long)piStack_278 - (long)piStack_280 >> 2;
                    if ((long)piStack_2b8 - (long)piStack_2c0 >> 2 == (uVar23 & 0xffffffff)) {
                      if ((int)uVar23 != 0) {
                        uVar27 = (int)uVar23 - 1;
                        uVar28 = (ulong)uVar27;
                        if (((int)uVar27 < 0) || (piStack_2c0[uVar28] != 1)) {
                          iVar20 = 1;
                        }
                        else {
                          iVar20 = 1;
                          uVar31 = uVar23;
                          uVar33 = uVar28;
                          do {
                            iVar20 = piStack_280[uVar33] * iVar20;
                            if ((long)uVar33 < 1) goto LAB_109ce3320;
                            lVar5 = uVar33 - 1;
                            uVar33 = uVar33 - 1;
                            iVar26 = (int)uVar31;
                            uVar31 = (ulong)(iVar26 - 1);
                          } while (iVar20 == piStack_2c0[lVar5]);
                          uVar28 = (ulong)(iVar26 - 2);
                          uVar23 = uVar31;
                        }
LAB_109ce3320:
                        func_0x000109265eec(&pppplStack_170,uVar23 & 0xffffffff);
                        pppplVar36 = pppplStack_170;
                        *(uint *)((long)pppplStack_170 + uVar28 * 4) = 1;
                        uVar27 = (int)uVar23 - 2;
                        if (-1 < (int)uVar27) {
                          lVar5 = (ulong)uVar27 << 2;
                          uVar27 = *(uint *)((long)pppplStack_170 + ((ulong)uVar27 + 1) * 4);
                          do {
                            uVar27 = *(int *)((long)piVar32 + lVar5 + 4) * uVar27;
                            *(uint *)((long)pppplStack_170 + lVar5) = uVar27;
                            lVar5 = lVar5 + -4;
                          } while (lVar5 != -4);
                        }
                        uVar27 = *piVar32 * *(uint *)pppplStack_170;
                        if (uVar27 != 0) {
                          uVar28 = 0;
                          do {
                            iVar26 = 0;
                            pppppuVar37 = (uint *****)pppplVar36;
                            piVar32 = piVar17;
                            uVar31 = uVar23 & 0xffffffff;
                            uVar33 = uVar28;
                            do {
                              uVar1 = *(uint *)pppppuVar37;
                              uVar2 = 0;
                              if (uVar1 != 0) {
                                uVar2 = (uint)uVar33 / uVar1;
                              }
                              uVar33 = (ulong)((uint)uVar33 - uVar2 * uVar1);
                              iVar26 = iVar26 + *piVar32 * uVar2;
                              uVar31 = uVar31 - 1;
                              pppppuVar37 = (uint *****)((long)pppppuVar37 + 4);
                              piVar32 = piVar32 + 1;
                            } while (uVar31 != 0);
                            _memcpy(puVar42 + (uint)(iVar20 * 8 * (int)uVar28),
                                    (undefined *)((long)unaff_x26 + (ulong)(uint)(iVar26 * 8)),
                                    iVar20 * 8);
                            uVar28 = uVar28 + 1;
                          } while (uVar28 != uVar27);
                        }
                        pppplStack_168 = pppplVar36;
                        __ZdlPv(pppplVar36);
                      }
                      pppplStack_170 = (long ****)appppuStack_338;
                      puVar16 = param_1;
                      func_0x00010937a098(param_1,appppuStack_338,&UNK_10dd5b8f9,&pppplStack_170,
                                          &uStack_231);
                      puVar16[7] = puStack_e0;
                      puVar16[6] = ppppuStack_e8;
                      puVar16[8] = ppppuStack_d8;
                      func_0x0001093783c0(puVar16 + 9,apuStack_d0);
                      func_0x00010937843c(puVar16 + 0xb,auStack_c0);
                      func_0x000105675c90(&pppplStack_f0);
                      ppppuStack_360 = (uint ****)ppppplVar10;
                      goto LAB_109ce344c;
                    }
                    puVar42 = &UNK_10f5a98f9;
                    puVar7 = puVar42;
                  }
                  else {
                    puVar42 = &UNK_10dfd21d7;
                    puStack_398 = &UNK_10f573129;
                    puVar7 = &UNK_10f57311a;
                  }
                  func_0x00010952d0c4(puVar42,puVar7,puStack_398);
                }
                else {
                  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
                }
                goto LAB_109ce36e8;
              }
              _objc_retainAutorelease(ppppplVar10);
              ppppplVar35 = ppppplVar10;
              func_0x00010bf64040(ppppplVar10);
              _objc_retain(ppppplVar10);
              pcStack_230 = FUN_109ce4cc0;
              ppuStack_228 = &PTR_DAT_110b3d000;
              ppppuStack_220 = (uint ****)ppppplVar10;
              FUN_109d0eaa4(&pppplStack_f0,&uStack_320,&ppppuStack_340,ppppplVar35,&pcStack_230);
              pppplStack_170 = (long ****)appppuStack_338;
              puVar16 = param_1;
              func_0x00010937a098(param_1,appppuStack_338,&UNK_10dd5b8f9,&pppplStack_170,&uStack_231
                                 );
              puVar16[7] = puStack_e0;
              puVar16[6] = ppppuStack_e8;
              puVar16[8] = ppppuStack_d8;
              func_0x0001093783c0(puVar16 + 9,apuStack_d0);
              func_0x00010937843c(puVar16 + 0xb,auStack_c0);
              func_0x000105675c90(&pppplStack_f0);
              (*(code *)*ppuStack_228)(&ppuStack_228);
LAB_109ce344c:
              ppppplVar35 = &pppplStack_f0;
              if (cStack_321 < '\0') {
                __ZdlPv(appppuStack_338[0]);
              }
              if (piStack_2c0 != (int *)0x0) {
                piStack_2b8 = piStack_2c0;
                __ZdlPv();
              }
              if (piStack_280 != (int *)0x0) {
                piStack_278 = piStack_280;
                __ZdlPv();
              }
              _objc_release(ppppplVar10);
              ppppuStack_348 = (uint ****)((long)ppppuStack_348 + 1);
            } while ((long *****)ppppuStack_348 != ppppplVar22);
            ppppplVar22 = ppppplVar40;
            func_0x00010bf52a60();
          } while (ppppplVar22 != (long *****)0x0);
        }
        _objc_release(ppppplVar40);
        _objc_release(ppppplVar40);
        _objc_release(ppppplVar25);
        _objc_release(uVar41);
        _objc_autoreleasePoolPop();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
          ___stack_chk_fail();
          _objc_release(ppppplVar35);
          _objc_release(unaff_x28);
          _objc_release(0);
          _objc_release(unaff_x26);
          _objc_release(ppppplVar25);
          _objc_release(uVar41);
          _objc_release(ppppuStack_360);
          _objc_release(uVar41);
          _objc_release(uVar41);
          __Unwind_Resume();
          if (*ppppplVar4[0x27] != (long ***)0x0) {
            func_0x00010c0cfdc0();
            _objc_retainAutoreleasedReturnValue();
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
          return;
        }
        return;
      }
      func_0x00010c09e4e0(uVar41);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520(uVar41);
      func_0x00010952d0c4(&UNK_10e03e9bc,&UNK_10f5a9324,uVar41);
LAB_109ce36e8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109ce36ec);
      (*pcVar3)();
    }
    puVar16 = plVar34 + 2;
    ppppplVar35 = param_2;
    FUN_109cde1d4(param_2,puVar16);
    if ((*(int *)(plVar34 + 8) != (int)ppppplVar35) ||
       (*(int *)((long)plVar34 + 0x44) != (int)((ulong)ppppplVar35 >> 0x20))) {
      func_0x00010952d0c4(&UNK_10e03e9bc,&UNK_10f5a96c1,&UNK_10f5a96e9);
      goto LAB_109ce36e8;
    }
    pppplVar36 = param_2[0x27] + 4;
    puVar18 = puVar16;
    FUN_109ce4bdc();
    if (pppplVar36 == (long ****)0x0) {
      func_0x00010952d0c4(&UNK_10e03e9f9,&UNK_10f5a9774,&UNK_10f5a9783);
      goto LAB_109ce36e8;
    }
    pppplVar36 = pppplVar36 + 5;
    FUN_109cd86d8();
    if (((*(int *)(plVar34 + 6) != (int)pppplVar36) ||
        (*(int *)((long)plVar34 + 0x34) != (int)((ulong)pppplVar36 >> 0x20) ||
         *(int *)(plVar34 + 7) != (int)puVar18)) ||
       (*(int *)((long)plVar34 + 0x3c) != (int)((ulong)puVar18 >> 0x20))) {
      pppplVar36 = param_2[0x27] + 0xe;
      FUN_109ce4bdc(pppplVar36,puVar16);
      pppplVar24 = param_2[0x27] + 9;
      puVar18 = puVar16;
      FUN_109ce4bdc();
      if (pppplVar36 != (long ****)0x0) {
        pppplVar36 = pppplVar36 + 5;
        FUN_109cd86d8();
        pppplVar24 = pppplVar24 + 5;
        puVar19 = puVar18;
        FUN_109cd86d8();
        if (((int)puVar19 <= *(int *)(plVar34 + 7)) && (*(int *)(plVar34 + 7) <= (int)puVar18)) {
          iVar20 = (int)((ulong)plVar34[6] >> 0x20);
          if (((((int)((ulong)pppplVar24 >> 0x20) <= iVar20) &&
               ((iVar20 <= (int)((ulong)pppplVar36 >> 0x20) &&
                (iVar20 = (int)plVar34[6], (int)pppplVar24 <= iVar20)))) &&
              (iVar20 <= (int)pppplVar36)) &&
             (((int)((ulong)puVar19 >> 0x20) <= *(int *)((long)plVar34 + 0x3c) &&
              (*(int *)((long)plVar34 + 0x3c) <= (int)((ulong)puVar18 >> 0x20)))))
          goto LAB_109ce21a4;
        }
      }
      func_0x00010952d0c4(&UNK_10e03e9bc,&UNK_10f5a96c1,&UNK_10f5a9739);
      goto LAB_109ce36e8;
    }
LAB_109ce21a4:
    pppplVar36 = param_2[0x27];
    ppppplVar35 = (long *****)(pppplVar36 + 4);
    ppppplVar25 = ppppplVar35;
    func_0x000107c31944(ppppplVar35,puVar16);
    ppppplVar40 = (long *****)pppplVar36[5];
    if (ppppplVar40 != (long *****)0x0) {
      puVar42 = (undefined *)((long)ppppplVar40 + -1);
      if (((ulong)ppppplVar40 & (ulong)puVar42) == 0) {
        unaff_x26 = (long *****)((ulong)puVar42 & (ulong)ppppplVar25);
      }
      else {
        unaff_x26 = ppppplVar25;
        if (ppppplVar40 <= ppppplVar25) {
          uVar23 = 0;
          if (ppppplVar40 != (long *****)0x0) {
            uVar23 = (ulong)ppppplVar25 / (ulong)ppppplVar40;
          }
          unaff_x26 = (long *****)((long)ppppplVar25 - uVar23 * (long)ppppplVar40);
        }
      }
      if ((*ppppplVar35)[(long)unaff_x26] != (long ***)0x0) {
        for (pppppuVar37 = (uint *****)*(*ppppplVar35)[(long)unaff_x26];
            pppppuVar37 != (uint *****)0x0; pppppuVar37 = (uint *****)*pppppuVar37) {
          ppppplVar22 = (long *****)pppppuVar37[1];
          if (ppppplVar22 == ppppplVar25) {
            ppppplVar22 = ppppplVar35;
            func_0x000104c4fbc4(ppppplVar35,pppppuVar37 + 2,puVar16);
            if (((ulong)ppppplVar22 & 1) != 0) goto LAB_109ce23a8;
          }
          else {
            if (((ulong)ppppplVar40 & (ulong)puVar42) == 0) {
              ppppplVar22 = (long *****)((ulong)ppppplVar22 & (ulong)puVar42);
            }
            else if (ppppplVar40 <= ppppplVar22) {
              uVar23 = 0;
              if (ppppplVar40 != (long *****)0x0) {
                uVar23 = (ulong)ppppplVar22 / (ulong)ppppplVar40;
              }
              ppppplVar22 = (long *****)((long)ppppplVar22 - uVar23 * (long)ppppplVar40);
            }
            if (ppppplVar22 != unaff_x26) break;
          }
        }
      }
    }
    pppppuVar37 = (uint *****)0x40;
    __Znwm();
    puStack_e0 = (undefined *)0x0;
    *pppppuVar37 = (uint ****)0x0;
    pppppuVar37[1] = (uint ****)ppppplVar25;
    pppplStack_f0 = (long ****)pppppuVar37;
    ppppuStack_e8 = (uint ****)ppppplVar35;
    if (*(char *)((long)plVar34 + 0x27) < '\0') {
      func_0x000107c3192c(pppppuVar37 + 2,plVar34[2],plVar34[3]);
    }
    else {
      ppppuVar44 = (uint ****)plVar34[3];
      ppppuVar43 = (uint ****)*puVar16;
      pppppuVar37[4] = (uint ****)plVar34[4];
      pppppuVar37[3] = ppppuVar44;
      pppppuVar37[2] = ppppuVar43;
    }
    pppppuVar37[5] = (uint ****)0x0;
    pppppuVar37[6] = (uint ****)0x0;
    pppppuVar37[7] = (uint ****)0x0;
    puStack_e0 = (undefined *)CONCAT71(puStack_e0._1_7_,1);
    if ((ppppplVar40 == (long *****)0x0) ||
       (*(float *)(pppplVar36 + 8) * (float)ppppplVar40 < (float)((long)pppplVar36[7] + 1))) {
      uVar23 = 1;
      if ((long *****)0x2 < ppppplVar40) {
        uVar23 = (ulong)(((ulong)ppppplVar40 & (ulong)((long)ppppplVar40 + -1)) != 0);
      }
      uVar23 = uVar23 | (long)ppppplVar40 << 1;
      uVar28 = (ulong)((float)((long)pppplVar36[7] + 1) / *(float *)(pppplVar36 + 8));
      if (uVar23 <= uVar28) {
        uVar23 = uVar28;
      }
      FUN_109ce48b0(ppppplVar35,uVar23);
      ppppplVar40 = (long *****)pppplVar36[5];
      if (((ulong)ppppplVar40 & (ulong)((long)ppppplVar40 + -1)) == 0) {
        unaff_x26 = (long *****)((ulong)((long)ppppplVar40 + -1) & (ulong)ppppplVar25);
      }
      else {
        unaff_x26 = ppppplVar25;
        if (ppppplVar40 <= ppppplVar25) {
          uVar23 = 0;
          if (ppppplVar40 != (long *****)0x0) {
            uVar23 = (ulong)ppppplVar25 / (ulong)ppppplVar40;
          }
          unaff_x26 = (long *****)((long)ppppplVar25 - uVar23 * (long)ppppplVar40);
        }
      }
    }
    pppplVar24 = *ppppplVar35;
    ppplVar29 = pppplVar24[(long)unaff_x26];
    if (ppplVar29 == (long ***)0x0) {
      pppplVar30 = pppplVar36 + 6;
      *pppppuVar37 = (uint ****)*pppplVar30;
      *pppplVar30 = (long ***)pppppuVar37;
      pppplVar24[(long)unaff_x26] = (long ***)pppplVar30;
      if (*pppppuVar37 != (uint ****)0x0) {
        ppppplVar25 = (long *****)(*pppppuVar37)[1];
        if (((ulong)ppppplVar40 & (ulong)((long)ppppplVar40 + -1)) == 0) {
          ppppplVar25 = (long *****)((ulong)ppppplVar25 & (ulong)((long)ppppplVar40 + -1));
        }
        else if (ppppplVar40 <= ppppplVar25) {
          uVar23 = 0;
          if (ppppplVar40 != (long *****)0x0) {
            uVar23 = (ulong)ppppplVar25 / (ulong)ppppplVar40;
          }
          ppppplVar25 = (long *****)((long)ppppplVar25 - uVar23 * (long)ppppplVar40);
        }
        (*ppppplVar35)[(long)ppppplVar25] = (long ***)pppppuVar37;
      }
    }
    else {
      *pppppuVar37 = (uint ****)*ppplVar29;
      *ppplVar29 = (long **)pppppuVar37;
    }
    pppplVar36[7] = (long ***)((long)pppplVar36[7] + 1);
LAB_109ce23a8:
    lVar5 = (long)pppppuVar37[6] - (long)pppppuVar37[5] >> 2;
    if (lVar5 < 3) {
      if (lVar5 == 1) {
        pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar42 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pppplStack_f0 = (long ****)pppppuVar37;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        ppuVar38 = &PTR__OBJC_CLASS___NSConstantArray_111183980;
      }
      else {
        if (lVar5 != 2) {
LAB_109ce3648:
          __ZNSt3__19to_stringEm(&pppplStack_170);
          func_0x00010928a5e0(&pppplStack_f0,&UNK_10f5a9944,&pppplStack_170);
          FUN_109cd45b4(&UNK_10f5a969a,&UNK_10f5a9931,&pppplStack_f0);
          goto LAB_109ce36e8;
        }
        pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        ppppplVar35 = (long *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
        pppplStack_f0 = (long ****)pppppuVar37;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar42 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppppuStack_e8 = (uint ****)ppppplVar35;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppplVar35);
        _objc_release(pppppuVar37);
        pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        pppplStack_168 = (long ****)&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2448;
        ppuVar38 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        pppplStack_170 = (long ****)pppppuVar37;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar5 == 3) {
      pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppppplVar35 = (long *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppplStack_f0 = (long ****)pppppuVar37;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppppuStack_e8 = (uint ****)ppppplVar35;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar42 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(ppppplVar35);
      _objc_release(pppppuVar37);
      pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar8 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppplStack_170 = (long ****)pppppuVar37;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2448;
      ppuVar38 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      pppplStack_168 = (long ****)pppppuVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppppuVar8);
    }
    else if (lVar5 == 4) {
      pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppppplVar35 = (long *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppplStack_f0 = (long ****)pppppuVar37;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppppuStack_e8 = (uint ****)ppppplVar35;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_e0 = puVar7;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar42 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppppuStack_d8 = (uint ****)unaff_x28;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x28);
      _objc_release(puVar7);
      _objc_release(ppppplVar35);
      _objc_release(pppppuVar37);
      pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar8 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppplStack_170 = (long ****)pppppuVar37;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppplStack_168 = (long ****)pppppuVar8;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppppuStack_158 = (uint ****)&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2448;
      ppuVar38 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_160 = ppuVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(pppppuVar8);
    }
    else {
      ppppuStack_360 =
           (uint ****)(ulong)(uint)(*(int *)((long)plVar34 + 0x34) * *(int *)(plVar34 + 6));
      if (lVar5 != 5) goto LAB_109ce3648;
      pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppppplVar35 = (long *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppplStack_f0 = (long ****)pppppuVar37;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppppuStack_e8 = (uint ****)ppppplVar35;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppppplVar25 = (long *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_e0 = puVar7;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppppuStack_d8 = (uint ****)ppppplVar25;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar42 = PTR__OBJC_CLASS___NSArray_1126ae530;
      apuStack_d0[0] = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(ppppplVar25);
      _objc_release(puVar7);
      _objc_release(ppppplVar35);
      _objc_release(pppppuVar37);
      pppppuVar37 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar8 = (uint *****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppplStack_170 = (long ****)pppppuVar37;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppplStack_168 = (long ****)pppppuVar8;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_160 = ppuVar9;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2448;
      ppuVar38 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppppuStack_158 = (uint ****)unaff_x28;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x28);
      _objc_release(ppuVar9);
      _objc_release(pppppuVar8);
    }
    _objc_release(pppppuVar37);
    iVar20 = *(int *)(plVar34 + 8);
    if (((iVar20 != 1) && (iVar20 != 8)) && (iVar20 != 2)) {
      iVar26 = 2;
      func_0x000107c31924(2,0x10,0,0);
      if ((iVar20 != 0) || (iVar26 == 0)) {
        iVar26 = 2;
        func_0x000107c31924(2,0x1a,0,0);
        if ((iVar20 != 6) || (iVar26 == 0)) {
          __ZNSt3__19to_stringEi(&pppplStack_170,iVar20);
          func_0x00010928a5e0(&pppplStack_f0,&UNK_10f5a983a,&pppplStack_170);
          FUN_109cd8934(&pppplStack_f0);
          goto LAB_109ce36e8;
        }
      }
    }
    puVar7 = PTR__OBJC_CLASS___MLMultiArray_1126ddfa8;
    _objc_alloc(PTR__OBJC_CLASS___MLMultiArray_1126ddfa8);
    piStack_280 = (int *)0x0;
    func_0x00010c008aa0();
    piVar17 = piStack_280;
    _objc_retain(piStack_280);
    if (piVar17 != (int *)0x0) {
      func_0x00010c09e4e0(piVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520(piVar17);
      func_0x00010952d0c4(&UNK_10e03e9bc,&UNK_10f5a96c1,piVar17);
      goto LAB_109ce36e8;
    }
    ppplVar29 = param_2[0x27][1];
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(ppplVar29);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(ppuVar38);
    _objc_release(puVar42);
    plVar34 = (long *)*plVar34;
    unaff_x26 = (long *****)0x0;
  } while( true );
}



/* Entry: 109ce3bc4; end: 109ce3beb;  */

void FUN_109ce3bc4(long param_1)

{
  if (**(long **)(param_1 + 0x138) != 0) {
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109ce3bec; end: 109ce3cab;  */

undefined8 * FUN_109ce3bec(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1 == 0x10020) {
    puVar3 = (undefined8 *)0x1;
  }
  else if (param_1 == 0x20020) {
    puVar3 = (undefined8 *)0x8;
  }
  else {
    puVar2 = (undefined8 *)0x2;
    puVar3 = puVar2;
    if ((param_1 != 0x10040) &&
       ((func_0x000107c31924(2,0x10,0,0), param_1 != 0x10010 ||
        (puVar3 = (undefined8 *)0x0, (int)puVar2 == 0)))) {
      iVar1 = 2;
      uVar5 = 0x1a;
      func_0x000107c31924(2,0x1a,0,0);
      if ((param_1 != 0x20008) || (iVar1 == 0)) {
        puVar3 = (undefined8 *)&UNK_10f5a9812;
        FUN_109cd880c();
        puVar4 = (undefined8 *)0x68;
        __Znwm();
        *puVar4 = 0;
        puVar4[1] = 0;
        func_0x000107c31940(puVar4 + 2,uVar5);
        *(undefined4 *)(puVar4 + 0xc) = 0;
        puVar2 = puVar3;
        func_0x000107c31944(puVar3,puVar4 + 2);
        puVar4[1] = puVar2;
        FUN_109ce3d60(puVar3,puVar4);
        if (((ulong)puVar3 & 1) != 0) {
          return puVar3;
        }
        func_0x000109cde37c(puVar4 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar4);
        return puVar4;
      }
      puVar3 = (undefined8 *)0x6;
    }
  }
  return puVar3;
}


