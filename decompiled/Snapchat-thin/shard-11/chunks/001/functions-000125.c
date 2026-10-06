/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108268290; end: 1082682eb;  */

void FUN_108268290(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  do {
    plVar2 = *(long **)(param_1 + 0xa0);
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar3 = *plVar2;
    lVar1 = *(long *)(lVar3 + 0x2c0);
    func_0x00010c252d60();
    if (lVar1 != 4) {
      lVar1 = *(long *)(lVar3 + 0x2c0);
      func_0x00010c252d60();
      if (lVar1 != 5) {
        return;
      }
    }
    func_0x00010840ec10(param_1 + 0xa0);
    FUN_10826b680(plVar2);
  } while( true );
}



/* Entry: 1082682ec; end: 108268313;  */

void FUN_1082682ec(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x00010826bbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108268314; end: 10826839b;  */

void FUN_108268314(undefined8 *param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x9;
  int extraout_w11;
  long *unaff_x19;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010826bb5c();
  if ((long *)param_1[0x15] != (long *)0x0) {
    lVar1 = *(long *)param_1[0x15];
    uStack_28 = 0;
    if (*unaff_x19 != 0) {
      do {
        func_0x00010826b964();
        lVar1 = extraout_x8;
        uStack_28 = extraout_x9;
      } while (extraout_w11 != 0);
    }
    FUN_10826b29c(lVar1 + 0x2e8,&uStack_28);
    param_1 = &uStack_28;
    func_0x000108267174(param_1);
  }
  func_0x00010826bad0();
  lStack_30 = *unaff_x19;
  *unaff_x19 = 0;
  FUN_10826b29c(param_1 + 0x5d,&lStack_30);
  func_0x00010826bb98();
  return;
}



/* Entry: 10826839c; end: 1082683a7;  */

long FUN_10826839c(long *param_1,byte *param_2)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w11;
  
  lVar1 = param_1[0x13];
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x2e0) & 1) == 0)) {
    if ((*param_2 ^ 1) == 0) {
      (**(code **)(*param_1 + 0x88))(param_1);
      FUN_108268290(param_1);
      lVar1 = param_1[0x13];
    }
    if (lVar1 != 0) {
      FUN_108267124(lVar1 + 0x2e8);
    }
    lVar1 = 1;
  }
  else {
    FUN_108266f5c(lVar1,(*param_2 ^ 1) == 0);
    if ((int)lVar1 != 0) {
      plVar2 = param_1 + 0x14;
      func_0x00010840eb84();
      lVar3 = 0;
      if (param_1[0x13] != 0) {
        do {
          func_0x00010826b964();
          lVar3 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *plVar2 = lVar3;
    }
    FUN_1082682ec(param_1 + 0x13,0);
    FUN_108268290(param_1);
  }
  return lVar1;
}



/* Entry: 1082683a8; end: 1082683c7;  */

void FUN_1082683a8(undefined8 *param_1)

{
  FUN_1082683c8();
  *param_1 = 0;
  return;
}



/* Entry: 1082683c8; end: 1082683eb;  */

void FUN_1082683c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_10829ff9c(param_1,&uStack_20);
  return;
}



/* Entry: 1082683ec; end: 108268417;  */

void FUN_1082683ec(void)

{
  undefined1 auStack_28 [8];
  
  FUN_108264078(auStack_28);
  func_0x00010826b9a4();
  FUN_10826481c();
  return;
}



/* Entry: 108268418; end: 10826843b;  */

void FUN_108268418(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd8);
  func_0x00010826bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10826843c; end: 1082684a3;  */

undefined8 * FUN_10826843c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0x100000000;
  if (0 < (int)param_2) {
    puVar1 = param_1;
    FUN_10826b79c(0x3ff0000000000000,param_1);
    FUN_10826b758(param_1,puVar1,param_2);
  }
  return param_1;
}



/* Entry: 1082684a4; end: 10826852b;  */

void FUN_1082684a4(long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6)

{
  if (param_5 == param_2 && param_5 == param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_3,param_5 * (int)param_6);
    return;
  }
  for (param_6 = param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU); param_6 != 0; param_6 = param_6 - 1
      ) {
    _memcpy(param_1,param_3,param_5);
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  }
  return;
}



/* Entry: 10826852c; end: 1082685ab;  */

long * FUN_10826852c(undefined8 param_1,long *param_2)

{
  char in_NG;
  char in_OV;
  long *plVar1;
  int extraout_w8;
  int iVar2;
  long *unaff_x19;
  
  func_0x00010826bb78();
  if (in_NG == in_OV) {
    plVar1 = unaff_x19;
    FUN_10826b79c(0x3ff8000000000000);
    plVar1 = plVar1 + (int)unaff_x19[1];
    *plVar1 = *param_2;
    FUN_10826b758();
    iVar2 = (int)unaff_x19[1];
  }
  else {
    plVar1 = (long *)(*unaff_x19 + (long)extraout_w8 * 8);
    *plVar1 = *param_2;
    iVar2 = extraout_w8;
  }
  *(int *)(unaff_x19 + 1) = iVar2 + 1;
  return plVar1;
}



/* Entry: 1082685ac; end: 10826862f;  */

void FUN_1082685ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [8];
  
  FUN_108263310(auStack_28,param_1,param_3,param_4,
                *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x370));
  func_0x00010826b9a4();
  FUN_108267bbc();
  return;
}



/* Entry: 108268630; end: 1082689af;  */

void FUN_108268630(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,int param_9,undefined8 param_10,
                  uint param_11)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint extraout_w8;
  uint extraout_w10;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [3];
  ulong uStack_90;
  undefined1 auStack_88 [8];
  int iStack_80;
  
  if (param_9 == 0) {
    func_0x00010826bc88();
    uVar8 = (ulong)*(uint *)(param_5 + 0x10);
    if ((extraout_w8 & extraout_w10) == 0) {
      uVar8 = 0;
    }
    lStack_e0 = 0;
    if (param_6 == 0) {
      func_0x00010826bc60();
      FUN_1082740f0();
      lVar3 = alStack_a8[0];
      alStack_a8[0] = 0;
      lStack_e0 = lVar3;
      FUN_10826b80c(0);
      FUN_10826b7e8(alStack_a8);
    }
    else {
      func_0x00010826bc60();
      FUN_1082749e4();
      lVar3 = alStack_a8[0];
      alStack_a8[0] = 0;
      lStack_e0 = lVar3;
      FUN_10826b80c(0);
      FUN_10826b828(alStack_a8);
    }
    if (lVar3 != 0) {
      if (param_11 != 0) {
        func_0x00010831f5f0();
        lVar6 = lVar3;
        FUN_108268418();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c0ce900();
        FUN_10826843c(auStack_88,lVar6);
        uVar7 = 0;
        uStack_90 = 0;
        func_0x00010826bc40();
        uVar9 = uVar8 - 1 | 3;
        uVar11 = (uint)lVar6;
        uVar2 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
        for (uVar10 = 0; uVar2 != uVar10; uVar10 = uVar10 + 1) {
          if ((param_11 >> (ulong)(uVar10 & 0x1f) & 1) != 0) {
            uVar1 = uVar7 & uVar9;
            if (uVar1 != 0) {
              uStack_90 = (uVar9 + 1 + uVar7) - uVar1;
            }
            FUN_10826852c(auStack_88,&uStack_90);
            uVar7 = uStack_90 +
                    (long)(int)uVar8 * (long)(int)((ulong)param_2 >> 0x20) * (long)(int)param_2;
            uStack_90 = uVar7;
          }
          func_0x00010826b954();
        }
        func_0x00010826ba80(*(undefined8 *)(param_3 + 0x80));
        FUN_1082b0908(alStack_a8,param_3 + 0x120);
        if (alStack_a8[0] != 0) {
          FUN_1082643a0();
          _objc_retainAutoreleasedReturnValue();
          FUN_1082681a4();
          FUN_1082669f4();
          _objc_unsafeClaimAutoreleasedReturnValue();
          if (param_3 != 0) {
            func_0x00010bfad4e0(param_3);
            func_0x00010826bc40();
            for (uVar8 = 0; uVar2 != uVar8; uVar8 = uVar8 + 1) {
              if ((param_11 >> (ulong)((uint)uVar8 & 0x1f) & 1) != 0) {
                if ((long)iStack_80 <= (long)uVar8) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10826893c);
                  (*pcVar4)();
                }
                lStack_c0 = (long)(int)param_2;
                lStack_b8 = (long)(int)((ulong)param_2 >> 0x20);
                uStack_b0 = 1;
                uStack_d8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                func_0x00010bf51f80(param_3);
              }
              func_0x00010826b954();
            }
            lVar6 = lVar3;
            FUN_108268418();
            iVar5 = (int)lVar6;
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ce900();
            func_0x00010826baa4();
            if (((int)uVar11 < iVar5) && (*(int *)(lVar3 + 0xc) == 2)) {
              *(undefined4 *)(lVar3 + 0xc) = 1;
            }
          }
          func_0x00010826bad8();
        }
        FUN_10826b4b0(auStack_88);
      }
      lStack_e0 = 0;
    }
    *param_1 = lVar3;
    FUN_10826b7e8(&lStack_e0);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1082689b0; end: 108268c4b;  */

void FUN_1082689b0(long *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x10;
  ulong uVar6;
  ulong uVar7;
  long alStack_a8 [2];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  int iStack_88;
  long alStack_80 [2];
  
  if ((param_7 != 0) || (bVar2 = (int)param_3 == 0x8000, 0x7fff < (int)param_3)) {
    *param_1 = 0;
    return;
  }
  uVar4 = param_6;
  func_0x00010826b974();
  uVar3 = extraout_x10;
  if (bVar2) {
    uVar3 = 0;
  }
  if ((int)uVar4 == 0) {
    uVar4 = 0;
    uVar7 = 1;
  }
  else {
    uVar7 = param_3;
    FUN_108368974(param_3,param_3 >> 0x20);
    uVar7 = (ulong)((int)uVar7 + 1);
    uVar4 = 2;
  }
  FUN_1082740f0(alStack_80,param_2,param_5,param_3,uVar3,uVar7,uVar4,&UNK_10f480398,0x1e);
  lVar5 = alStack_80[0];
  if (alStack_80[0] == 0) {
    *param_1 = 0;
    goto LAB_108268bf4;
  }
  FUN_108268418(alStack_80[0]);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010828398c(param_4);
  FUN_10826843c(auStack_90,uVar7);
  FUN_10834458c(param_4,param_3,auStack_90,param_6);
  uVar3 = param_4;
  FUN_108344658(param_4);
  FUN_1082b0908(alStack_a8,param_2 + 0x120,param_9,uVar3);
  if (alStack_a8[0] == 0) {
LAB_108268bd0:
    lVar5 = 0;
  }
  else {
    FUN_1082681a4();
    FUN_1082669f4();
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_2 == 0) goto LAB_108268bd0;
    func_0x00010826bbb4(uStack_98);
    for (uVar6 = 0; uVar7 != uVar6; uVar6 = uVar6 + 1) {
      func_0x00010832085c(param_4,param_3 & 0xffffffff);
      func_0x00010826bb10();
      FUN_1082643a0(alStack_a8[0]);
      _objc_retainAutoreleasedReturnValue();
      if ((long)iStack_88 <= (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108268c08);
        (*pcVar1)();
      }
      func_0x00010bf51f80(param_2);
      func_0x00010826ba54();
      func_0x00010826b954();
    }
    alStack_80[0] = 0;
  }
  *param_1 = lVar5;
  FUN_10826b4b0(auStack_90);
LAB_108268bf4:
  FUN_10826b7e8(alStack_80);
  return;
}



/* Entry: 108268c4c; end: 108268ce3;  */

void FUN_108268c4c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [8];
  
  lVar1 = param_3;
  FUN_108268ce4();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010826bbfc(), lVar2 != 1)) {
    *param_1 = 0;
  }
  else {
    FUN_1082741e4(auStack_48,param_2,*(undefined8 *)(param_3 + 4),lVar1,param_5,param_6);
    func_0x00010826ba90();
    FUN_10826b7e8();
  }
  func_0x00010826b9b8();
  return;
}



/* Entry: 108268ce4; end: 108268d33;  */

void FUN_108268ce4(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x000108263a9c(param_1,&uStack_28);
  uVar1 = uStack_28;
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010826bb40();
  }
  func_0x00010826ba0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108268d34; end: 108268dbb;  */

void FUN_108268d34(long param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_48 [8];
  
  func_0x00010826bc2c();
  FUN_108268ce4();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 == 0) || (func_0x00010826bbfc(), param_1 != 1)) {
    *unaff_x20 = 0;
  }
  else {
    FUN_1082741e4(auStack_48);
    func_0x00010826ba90();
    FUN_10826b7e8();
  }
  func_0x00010826b9b8();
  return;
}



/* Entry: 108268dbc; end: 108268e97;  */

void FUN_108268dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  func_0x00010826bc2c();
  FUN_108268ce4();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010826bbfc(), lVar1 == 1)) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x00010c0fca60(param_1);
    uVar2 = uVar3;
    func_0x0001082656c0(uVar3,param_1);
    if ((int)param_3 <= (int)uVar2) {
      FUN_108265744(uVar3,param_3,param_1);
      FUN_108274b4c(auStack_58);
      func_0x00010826ba90();
      FUN_10826b828();
      goto LAB_108268e2c;
    }
  }
  *unaff_x20 = 0;
LAB_108268e2c:
  func_0x00010826b9b8();
  return;
}



/* Entry: 108268e98; end: 108268fb3;  */

void FUN_108268e98(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long **pplVar2;
  long **pplVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  long *plVar4;
  long **pplVar5;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *aplStack_a8 [14];
  undefined8 uStack_38;
  
  plVar4 = param_2;
  plVar1 = param_3;
  func_0x00010826baac();
  plVar4 = (long *)plVar4[2];
  uStack_38 = extraout_x8;
  func_0x000108283624(aplStack_a8,plVar1);
  pplVar3 = aplStack_a8;
  (**(code **)(*plVar4 + 0x40))(plVar4,pplVar3,*(undefined4 *)((long)param_3 + 0xc));
  plVar1 = plVar4;
  func_0x00010826bc54();
  if ((bool)in_ZR) {
    func_0x00010826b8c8();
  }
  if (((ulong)plVar4 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    aplStack_a8[0] = (long *)0x0;
    pplVar3 = aplStack_a8;
    plVar1 = param_3;
    func_0x000108263b9c();
    plVar4 = aplStack_a8[0];
    if (((ulong)plVar1 & 1) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar1 = aplStack_a8[0];
      _objc_retain();
    }
    func_0x00010826ba0c();
    if (plVar4 == (long *)0x0) {
      *param_1 = 0;
    }
    else {
      pplVar3 = *(long ***)((long)param_3 + 4);
      plVar1 = param_2;
      FUN_108271350(aplStack_a8,param_2,pplVar3,*(undefined4 *)((long)param_3 + 0xc),plVar4);
      func_0x00010826b9a4();
      FUN_10826b85c();
    }
    func_0x00010826baa4();
  }
  func_0x00010826b990(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010826baa4();
    func_0x00010826b944();
    pcStack_b8 = FUN_108268fb4;
    plStack_e0 = plVar4;
    plStack_d8 = param_3;
    plStack_d0 = param_2;
    plStack_c8 = plVar1;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x00010826bb5c();
    FUN_108268418();
    _objc_unsafeClaimAutoreleasedReturnValue();
    pplVar5 = (long **)param_2[0x10];
    pplVar2 = pplVar3;
    func_0x00010c0fca60();
    func_0x0001082656c0(pplVar5,pplVar2);
    if ((0 < (int)pplVar5) || (func_0x00010c0fca60(), pplVar5 = pplVar3, pplVar3 == (long **)0x46))
    {
      func_0x00010826bad0();
      FUN_1082669f4();
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (pplVar5 != (long **)0x0) {
        func_0x00010bfbfbc0();
        func_0x00010826bad0();
        uStack_e8 = 0;
        if (plVar1[3] != 0) {
          do {
            func_0x00010826b964();
            uStack_e8 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        FUN_108269080();
        FUN_10826b890(&uStack_e8);
      }
    }
    return;
  }
  return;
}



/* Entry: 108268fb4; end: 10826907f;  */

void FUN_108268fb4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x00010826bb5c();
  FUN_108268418();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = *(long *)(unaff_x20 + 0x80);
  lVar1 = param_2;
  func_0x00010c0fca60();
  func_0x0001082656c0(lVar2,lVar1);
  if ((0 < (int)lVar2) || (func_0x00010c0fca60(), lVar2 = param_2, param_2 == 0x46)) {
    func_0x00010826bad0();
    FUN_1082669f4();
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010bfbfbc0();
      func_0x00010826bad0();
      uStack_38 = 0;
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        do {
          func_0x00010826b964();
          uStack_38 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      FUN_108269080();
      FUN_10826b890(&uStack_38);
    }
  }
  return;
}



/* Entry: 108269080; end: 1082690cf;  */

void FUN_108269080(long param_1,long *param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010826b964();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010826b344(param_1 + 0x2b0,&uStack_28);
  FUN_108267290(&uStack_28);
  return;
}



/* Entry: 1082690d0; end: 108269227;  */

void FUN_1082690d0(long param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
  FUN_1082655ec();
  if (iVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
    if (param_4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      func_0x0001082656c0(uVar2,param_2);
      puVar3 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
      if ((int)uVar2 < 1) {
        return;
      }
    }
    PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220 = puVar3;
    if (param_3 < 0x8000) {
      _objc_alloc_init(puVar3);
      func_0x00010c1dc0a0();
      func_0x00010c2256c0(puVar3);
      func_0x00010c1a7d00(puVar3);
      if (param_5 != 0) {
        func_0x00010c1c8580(puVar3);
      }
      func_0x00010c20c0c0(puVar3);
      func_0x00010c21d540(puVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c0d91c0(uVar2);
      _objc_retain();
      FUN_10810a3f0(param_6,uVar2);
      func_0x00010826bbdc();
      func_0x00010826b9b8();
    }
  }
  return;
}



/* Entry: 108269228; end: 108269283;  */

void FUN_108269228(uint param_1)

{
  func_0x00010826b974();
  FUN_1082690d0();
  if ((param_1 & 1) == 0) {
    func_0x00010826bc74();
  }
  else {
    func_0x00010826ba34();
  }
  func_0x00010826ba0c();
  return;
}



/* Entry: 108269284; end: 108269617;  */

undefined8
FUN_108269284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,long *param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long alStack_110 [5];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  long alStack_a8 [2];
  undefined8 uStack_98;
  ulong auStack_90 [2];
  
  auStack_90[0] = 0;
  func_0x000108263a9c(param_6,auStack_90);
  uVar3 = auStack_90[0];
  uVar6 = auStack_90[0];
  func_0x00010c0fca60();
  func_0x00010831f5f0();
  func_0x00010826ba80(*(undefined8 *)(param_5 + 0x80));
  FUN_1082b0908(alStack_a8,param_5 + 0x120);
  if (alStack_a8[0] == 0) {
LAB_1082693b4:
    uVar4 = 0;
    goto LAB_108269588;
  }
  if (uVar6 == 1) {
    uVar4 = 1;
  }
  else if (uVar6 == 0x73) {
    uVar4 = 0x11;
  }
  else if (uVar6 == 0x14) {
    uVar4 = 0x1f;
  }
  else if (uVar6 == 0x19) {
    uVar4 = 0x20;
  }
  else if (uVar6 == 0x1e) {
    uVar4 = 8;
  }
  else if (uVar6 == 0x28) {
    uVar4 = 2;
  }
  else if (uVar6 == 0x2a) {
    uVar4 = 4;
  }
  else if (uVar6 == 0x3c) {
    uVar4 = 0x16;
  }
  else if (uVar6 == 0x41) {
    uVar4 = 0x17;
  }
  else if (uVar6 == 0x46) {
    uVar4 = 5;
  }
  else if (uVar6 == 0x47) {
    uVar4 = 6;
  }
  else if (uVar6 == 0x50) {
    uVar4 = 9;
  }
  else if (uVar6 == 0x5a) {
    uVar4 = 10;
  }
  else if (uVar6 == 0x5e) {
    uVar4 = 0xb;
  }
  else if (uVar6 == 0x6e) {
    uVar4 = 0x18;
  }
  else {
    if (uVar6 != 10) goto LAB_1082693b4;
    uVar4 = 0x1e;
  }
  uStack_d0 = 0;
  alStack_110[4] = *(long *)(param_6 + 4);
  FUN_1082a0b14(auStack_c8,uVar4,3,&uStack_d0,alStack_110 + 4);
  FUN_10810a400(&uStack_d0);
  puVar1 = auStack_c8;
  FUN_108269618(puVar1);
  puVar2 = auStack_c8;
  FUN_10828d69c(param_1,param_2,param_3,param_4,puVar2,uStack_98,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
LAB_10826954c:
    uVar4 = 0;
  }
  else {
    lVar5 = param_5;
    FUN_1082681a4();
    FUN_1082669f4();
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (lVar5 == 0) goto LAB_10826954c;
    uVar4 = *(undefined8 *)(param_6 + 4);
    func_0x00010c0ce900();
    for (uVar6 = 0; ((uint)uVar3 & ((int)(uint)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar6;
        uVar6 = uVar6 + 1) {
      iVar7 = (int)((ulong)uVar4 >> 0x20);
      FUN_1082643a0((long)iVar7,alStack_a8[0]);
      _objc_retainAutoreleasedReturnValue();
      alStack_110[4] = (long)(int)uVar4;
      lStack_e8 = (long)iVar7;
      uStack_e0 = 1;
      alStack_110[1] = 0;
      alStack_110[2] = 0;
      alStack_110[3] = 0;
      func_0x00010826bc20(lVar5);
      func_0x00010826bb68();
      func_0x00010826b954();
    }
    func_0x00010c103840(lVar5);
    lVar5 = *param_7;
    if (lVar5 != 0) {
      *param_7 = 0;
      alStack_110[0] = lVar5;
      FUN_108268314(param_5,alStack_110);
      func_0x00010826bb54();
    }
    uVar4 = 1;
  }
  func_0x00010828afb8(auStack_c8);
LAB_108269588:
  FUN_10810a394(auStack_90);
  return uVar4;
}



/* Entry: 108269618; end: 10826963b;  */

long FUN_108269618(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10826b4a8();
  return lVar1 * *(int *)(param_1 + 0x18);
}



/* Entry: 10826963c; end: 10826969f;  */

void FUN_10826963c(uint param_1)

{
  func_0x00010826b974();
  FUN_1082690d0();
  if ((param_1 & 1) == 0) {
    func_0x00010826bc74();
  }
  else {
    func_0x00010826ba34();
  }
  func_0x00010826ba0c();
  return;
}



/* Entry: 1082696a0; end: 1082699af;  */

undefined8 * FUN_1082696a0(long param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uStack_18c;
  ulong uStack_180;
  long alStack_170 [5];
  long lStack_148;
  undefined8 uStack_140;
  long alStack_130 [2];
  long lStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [88];
  char cStack_b8;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x00010826baac();
  uStack_118 = 0;
  uStack_80 = extraout_x8;
  func_0x000108263a9c(param_2,&uStack_118);
  uVar2 = uStack_118;
  func_0x00010826bb40();
  uVar5 = uVar2;
  func_0x00010c0ce900();
  func_0x0001082835f0(auStack_110,param_2);
  puVar6 = auStack_110;
  func_0x00010828398c();
  if (cStack_b8 == '\x01') {
    func_0x00010826b8dc(auStack_110);
  }
  uVar12 = (uint)uVar5;
  uVar4 = uVar12 == 1;
  puStack_90 = auStack_110;
  uStack_88 = 0x2000000000;
  puVar7 = puVar6;
  FUN_10834458c(puVar6,*(undefined8 *)(param_2 + 4),&puStack_90,1 < (int)uVar12);
  puVar8 = puVar6;
  FUN_108344658();
  func_0x00010826ba80(*(undefined8 *)(param_1 + 0x80));
  puVar1 = extraout_x8_00;
  if (!(bool)uVar4) {
    puVar1 = (undefined1 *)0x1;
  }
  uVar4 = puVar8 == puVar1;
  if (puVar8 <= puVar1) {
    puVar8 = puVar1;
  }
  FUN_1082b0908(alStack_130,param_1 + 0x120,puVar7,puVar8);
  if (alStack_130[0] == 0) {
    uStack_18c = 0;
  }
  else {
    func_0x00010826bbb4();
    func_0x00010826bad0();
    FUN_1082669f4();
    param_5 = lStack_120;
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5 == 0;
    uStack_18c = (uint)!(bool)uVar4;
    if (param_5 != 0) {
      uStack_180 = *(ulong *)(param_2 + 4);
      for (uVar11 = 0; uVar4 = (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)) == uVar11,
          !(bool)uVar4; uVar11 = uVar11 + 1) {
        func_0x00010832085c(puVar6,uStack_180 & 0xffffffff);
        func_0x00010826bb10();
        FUN_1082643a0(alStack_130[0]);
        _objc_retainAutoreleasedReturnValue();
        if ((long)(int)uStack_88 <= (long)uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10826991c);
          (*pcVar3)();
        }
        alStack_170[4] = (long)(int)uStack_180;
        lStack_148 = (long)(int)(uStack_180 >> 0x20);
        uStack_140 = 1;
        alStack_170[1] = 0;
        alStack_170[2] = 0;
        alStack_170[3] = 0;
        func_0x00010826bc20(param_5);
        func_0x00010826bba0();
        func_0x00010826b954();
      }
      func_0x00010c103840(param_5);
      lVar10 = *param_3;
      if (lVar10 != 0) {
        *param_3 = 0;
        alStack_170[0] = lVar10;
        FUN_108268314(param_1,alStack_170);
        func_0x00010826bb54();
      }
    }
    _objc_release(param_5);
  }
  func_0x00010826bbd0();
  _objc_release(uVar2);
  FUN_10810a394(&uStack_118);
  func_0x00010826b990(uStack_80);
  if ((bool)uVar4) {
    return (undefined8 *)(ulong)uStack_18c;
  }
  ___stack_chk_fail();
  func_0x00010826bb54();
  _objc_release(param_5);
  func_0x00010826bbd0();
  _objc_release(uVar2);
  puVar9 = &uStack_118;
  FUN_10810a394(puVar9);
  func_0x00010826ba5c();
  return puVar9;
}



/* Entry: 1082699b0; end: 1082699b3;  */

void FUN_1082699b0(void)

{
  return;
}



/* Entry: 1082699b4; end: 1082699e7;  */

bool FUN_1082699b4(long param_1)

{
  int iStack_14;
  
  param_1 = param_1 + 0xd8;
  FUN_108271d4c();
  return param_1 != 0 && iStack_14 != 0;
}



/* Entry: 1082699e8; end: 1082699ef;  */

undefined1 ** FUN_1082699e8(long param_1,long param_2,undefined1 *param_3)

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
  
  lVar1 = *(long *)(param_1 + 0xe0);
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



/* Entry: 1082699f0; end: 108269b87;  */

void FUN_1082699f0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_50;
  long lStack_48;
  
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
  _objc_alloc_init();
  func_0x00010bf40cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010826ba54();
  FUN_108269b88(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139e0(puVar1);
  func_0x00010826ba54();
  FUN_108269b88(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ecb40(puVar1);
  func_0x00010826ba54();
  func_0x00010c1be600();
  func_0x00010826bc0c();
  func_0x00010826bbc8();
  FUN_108266a6c();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1b71a0(*puVar1);
    func_0x00010826bbc8();
    if (param_2 != 0) {
      do {
        func_0x00010826b8f4();
      } while (extraout_w10 != 0);
    }
    lStack_48 = param_2;
    FUN_108269080();
    FUN_10826b890(&lStack_48);
    func_0x00010826bbc8();
    if (param_3 != 0) {
      do {
        func_0x00010826b8f4();
      } while (extraout_w10_00 != 0);
    }
    lStack_50 = param_3;
    FUN_108269080();
    FUN_10826b890(&lStack_50);
  }
  func_0x00010826bc04();
  func_0x00010826b9b8();
  return;
}



/* Entry: 108269b88; end: 108269bab;  */

void FUN_108269b88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010826bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108269bac; end: 108269eb3;  */

void FUN_108269bac(long param_1,long param_2,long *param_3,long param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int extraout_w10;
  int extraout_w10_00;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  plVar3 = param_5;
  func_0x00010821a0c0();
  plVar2 = param_3;
  func_0x00010821a0c0();
  if (plVar3 == plVar2) {
    func_0x00010826bb20();
    if (plVar2 == (long *)0x0) {
      func_0x00010826b9c0();
      lVar12 = param_2;
      if (plVar2 != (long *)0x0) {
        func_0x00010826b9c0();
        lVar12 = plVar2[3];
      }
    }
    else {
      plVar3 = *(long **)(param_1 + 0x80);
      func_0x000108265f7c(plVar3,plVar2);
      if ((int)plVar3 == 0) {
        plVar1 = plVar2 + 4;
        plVar2 = plVar3;
        lVar12 = *plVar1;
      }
      else {
        plVar1 = plVar2 + 5;
        plVar2 = plVar3;
        lVar12 = *plVar1;
      }
    }
    func_0x00010826baf0();
    if (plVar2 == (long *)0x0) {
      plVar3 = plVar2;
      func_0x00010826bb00();
      lVar14 = param_4;
      if (plVar3 != (long *)0x0) {
        func_0x00010826bb00();
        lVar14 = plVar3[3];
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      func_0x000108265f7c(uVar4,plVar2);
      if ((int)uVar4 == 0) {
        lVar14 = plVar2[4];
      }
      else {
        lVar14 = plVar2[5];
      }
    }
    uVar4 = *(undefined8 *)(lVar12 + 0xd8);
    func_0x00010c0fca60(uVar4);
    uVar5 = *(undefined8 *)(lVar14 + 0xd8);
    func_0x00010c0fca60(uVar5);
    uVar6 = *(undefined8 *)(lVar12 + 0xd8);
    func_0x00010c149760(uVar6);
    uVar7 = *(undefined8 *)(lVar14 + 0xd8);
    func_0x00010c149760(uVar7);
    lVar13 = *param_3;
    lVar8 = *(long *)(param_1 + 0x80);
    lStack_b0 = lVar13;
    FUN_1082653c8(lVar8,uVar4,uVar6,uVar5,uVar7,plVar2 != (long *)0x0,
                  *(undefined8 *)(param_4 + 0xb0),param_5,&lStack_b0,lVar12 == lVar14);
    if ((int)lVar8 == 0) {
      uVar9 = *(ulong *)(lVar14 + 0xd8);
      func_0x00010c073660();
      if ((uVar9 & 1) == 0) {
        uVar9 = *(ulong *)(lVar12 + 0xd8);
        func_0x00010c073660();
        if ((uVar9 & 1) == 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x80);
          func_0x000108265340(uVar10,uVar4,uVar6,uVar5,uVar7,param_5,&lStack_b0,lVar12 == lVar14);
          if ((int)uVar10 != 0) {
            FUN_108269b88(lVar12);
            _objc_unsafeClaimAutoreleasedReturnValue();
            FUN_108269b88(lVar14);
            _objc_unsafeClaimAutoreleasedReturnValue();
            FUN_1082681a4();
            lVar12 = param_1;
            FUN_1082669f4();
            _objc_unsafeClaimAutoreleasedReturnValue();
            if (lVar12 != 0) {
              iVar15 = (int)*param_5;
              lStack_78 = (long)iVar15;
              iVar16 = (int)((ulong)*param_5 >> 0x20);
              lStack_70 = (long)iVar16;
              uStack_68 = 0;
              lStack_90 = (long)((int)param_5[1] - iVar15);
              lStack_88 = (long)((int)((ulong)param_5[1] >> 0x20) - iVar16);
              uStack_80 = 1;
              lStack_a8 = (long)(int)lVar13;
              lStack_a0 = lVar13 >> 0x20;
              uStack_98 = 0;
              func_0x00010bf51fe0();
              do {
                func_0x00010826b8f4();
              } while (extraout_w10 != 0);
              lStack_78 = param_2;
              FUN_108269080(param_1,&lStack_78);
              FUN_10826b890(&lStack_78);
              do {
                func_0x00010826b8f4();
              } while (extraout_w10_00 != 0);
              lStack_90 = param_4;
              FUN_108269080(param_1,&lStack_90);
              FUN_10826b890(&lStack_90);
            }
          }
        }
      }
    }
    else {
      func_0x00010826baf0();
      lVar12 = lVar8;
      func_0x00010826bb20();
      if (lVar12 == 0) {
        func_0x00010826b9c0();
        puVar11 = (undefined8 *)(lVar12 + 0x18);
      }
      else {
        puVar11 = (undefined8 *)(lVar12 + 0x20);
      }
      FUN_1082699f0(param_1,*puVar11,*(undefined8 *)(lVar8 + 0x20));
    }
  }
  return;
}



/* Entry: 108269eb4; end: 10826a1df;  */

undefined8
FUN_108269eb4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,long *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long alStack_b0 [2];
  long lStack_a0;
  long lStack_98;
  int iStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  (**(code **)(*param_2 + 0x58))();
  uVar5 = (uint)param_8;
  if (uVar5 == 0) {
    return 0;
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if ((int)param_4 - (int)param_3 < 0x8000) {
    uVar9 = 0;
    uStack_88 = param_3;
    uStack_80 = param_4;
    FUN_10821a6d8();
    if ((uVar9 & 1) == 0) {
      FUN_108268418();
      _objc_unsafeClaimAutoreleasedReturnValue();
      if ((uVar5 == 1) && (*param_7 == 0)) {
        return 1;
      }
      uVar9 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
      lVar8 = uVar9 + 1;
      plVar3 = param_7;
      do {
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
          func_0x000108268420();
          FUN_10826843c(&lStack_98,param_8);
          FUN_10828ca78(param_6,CONCAT44(uStack_80._4_4_ - uStack_88._4_4_,
                                         (int)uStack_80 - (int)uStack_88),&lStack_98,param_8);
          func_0x00010826ba80(*(undefined8 *)(param_1 + 0x80));
          FUN_1082b0908(alStack_b0,param_1 + 0x120);
          uVar1 = uStack_80;
          uVar7 = uStack_88;
          if (alStack_b0[0] != 0) {
            FUN_1082681a4();
            FUN_1082669f4();
            _objc_unsafeClaimAutoreleasedReturnValue();
            if (param_1 != 0) {
              uVar6 = 0;
              iVar10 = (int)uVar1 - (int)uVar7;
              iVar11 = (int)((ulong)uVar1 >> 0x20) - (int)((ulong)uVar7 >> 0x20);
              param_7 = param_7 + 1;
              goto LAB_10826a058;
            }
          }
          uVar7 = 0;
          goto LAB_10826a198;
        }
        lVar4 = *plVar3;
        plVar3 = plVar3 + 3;
      } while (lVar4 != 0);
    }
  }
  return 0;
LAB_10826a058:
  if (uVar9 == uVar6) {
    plVar3 = param_2;
    FUN_108268418();
    iVar10 = (int)plVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce900();
    func_0x00010826bbdc();
    if ((int)uVar5 < iVar10) {
      uVar7 = 1;
      if (*(int *)((long)param_2 + 0xc) == 2) {
        *(undefined4 *)((long)param_2 + 0xc) = 1;
      }
    }
    else {
      uVar7 = 1;
    }
LAB_10826a198:
    FUN_10826b4b0(&lStack_98);
    return uVar7;
  }
  if (param_7[-1] != 0) {
    if ((long)iStack_90 <= (long)uVar6) {
LAB_10826a1a4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10826a1a8);
      (*pcVar2)();
    }
    lVar8 = (long)(int)param_6 * (long)iVar10;
    FUN_1082684a4(lStack_a0 + *(long *)(lStack_98 + uVar6 * 8),lVar8,param_7[-1],*param_7,lVar8,
                  iVar11);
    FUN_1082643a0(alStack_b0[0]);
    _objc_retainAutoreleasedReturnValue();
    if ((long)iStack_90 <= (long)uVar6) goto LAB_10826a1a4;
    func_0x00010bf51f80(param_1);
    func_0x00010826bb68();
  }
  func_0x00010826b954();
  uVar6 = uVar6 + 1;
  param_7 = param_7 + 3;
  goto LAB_10826a058;
}



/* Entry: 10826a1e0; end: 10826a343;  */

undefined8
FUN_10826a1e0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  
  if ((int)param_5 != param_6) {
    return 0;
  }
  func_0x000108268420(param_5);
  iVar1 = ((int)param_4 - (int)param_3) * (int)param_5;
  iVar2 = (int)((ulong)param_4 >> 0x20) - (int)((ulong)param_3 >> 0x20);
  lVar7 = (long)iVar1 * (long)iVar2;
  FUN_1082af050(&lStack_68,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),lVar7,4,0,0);
  if (lStack_68 != 0) {
    lVar6 = (long)iVar1;
    lVar3 = lStack_68;
    FUN_1082643a0(lStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    FUN_10826a344(param_1,param_2,param_3,param_4,lVar3,0,lVar7,lVar6);
    func_0x00010826b9b8();
    if ((uVar4 & 1) != 0) {
      FUN_108267fe4(param_1,0);
      FUN_1082643a0(lStack_68);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      lVar7 = lStack_68;
      func_0x00010bf4df40();
      func_0x00010826b9b8();
      FUN_1082684a4(param_7,param_8,lVar7,lVar6,lVar6,iVar2);
      uVar5 = 1;
      goto LAB_10826a310;
    }
  }
  uVar5 = 0;
LAB_10826a310:
  FUN_10826b598(&lStack_68);
  return uVar5;
}



/* Entry: 10826a344; end: 10826a4b3;  */

undefined8 FUN_10826a344(long param_1,long *param_2,int param_3,int param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (0x7fff < param_4 - param_3) {
    return 0;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x68))();
  if (plVar1 == (long *)0x0) {
    (**(code **)(*param_2 + 0x58))();
    if (param_2 != (long *)0x0) {
      FUN_108268418();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10826a3fc;
    }
  }
  else {
    if ((int)plVar1[3] < 2) {
      FUN_10826a8a8();
      _objc_retainAutoreleasedReturnValue();
      param_2 = plVar1;
    }
    else {
      param_2 = (long *)plVar1[5];
      FUN_108269b88();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10826a3fc:
    if (param_2 != (long *)0x0) {
      FUN_1082681a4();
      FUN_1082669f4();
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (param_1 != 0) {
        func_0x00010bf51fc0();
        uVar2 = 1;
        goto LAB_10826a47c;
      }
    }
  }
  uVar2 = 0;
LAB_10826a47c:
  func_0x00010826baa4();
  return uVar2;
}



/* Entry: 10826a4b4; end: 10826a5bb;  */

bool FUN_10826a4b4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  FUN_1082643a0(*param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *param_4;
  FUN_1082643a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010826bad0();
  lVar2 = lVar1;
  FUN_1082669f4();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bf51fa0(lVar2);
    uVar3 = *param_2;
    *param_2 = 0;
    func_0x00010826bb88(uVar3);
    FUN_108264668(lVar1 + 0x220,auStack_68);
    FUN_1082647e4(auStack_68);
    lVar4 = *param_4;
    *param_4 = 0;
    func_0x00010826bb88(lVar4);
    FUN_108264668(lVar1 + 0x220,auStack_70);
    FUN_1082647e4(auStack_70);
  }
  return lVar2 != 0;
}



/* Entry: 10826a5bc; end: 10826a75f;  */

ulong * FUN_10826a5bc(undefined8 param_1,ulong *param_2,ulong param_3,ulong *param_4,ulong *param_5,
                     int param_6,ulong *param_7,ulong *param_8,ulong *param_9)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined8 extraout_x8_00;
  ulong *puVar11;
  ulong *puVar12;
  ulong *unaff_x20;
  ulong unaff_x21;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong auStack_1d8 [14];
  undefined8 uStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  ulong uStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  char cStack_80;
  undefined8 uStack_68;
  
  func_0x00010826baac();
  uVar1 = (int)param_5 == param_6;
  puVar6 = param_2;
  uVar7 = param_3;
  puVar8 = param_4;
  puVar3 = param_5;
  puVar11 = param_7;
  puVar9 = param_8;
  uStack_68 = extraout_x8;
  if ((bool)uVar1) {
    unaff_x20 = param_2;
    FUN_108268418();
    _objc_unsafeClaimAutoreleasedReturnValue();
    unaff_x21 = *param_7;
    FUN_1082643a0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = param_5;
    func_0x000108268420();
    uVar5 = 0;
    if (puVar2 != (ulong *)0x0) {
      uVar5 = (ulong)param_8 / (ulong)puVar2;
    }
    unaff_x22 = param_4;
    unaff_x23 = param_3;
    unaff_x24 = param_1;
    unaff_x25 = param_5;
    unaff_x26 = param_2;
    if (param_8 != (ulong *)(uVar5 * (long)puVar2)) goto LAB_10826a704;
    (**(code **)(*(long *)((long)param_2 + *(long *)(*param_2 - 0x18)) + 0x50))
              (&uStack_d8,(long)param_2 + *(long *)(*param_2 - 0x18));
    unaff_x26 = &uStack_d8;
    FUN_108283a40();
    puVar12 = unaff_x26;
    if (cStack_80 == '\x01') {
      func_0x00010826b8dc(&uStack_d8);
    }
    uVar1 = unaff_x26 == puVar2;
    unaff_x25 = puVar2;
    if (!(bool)uVar1) goto LAB_10826a704;
    func_0x00010826bb70();
    FUN_1082669f4();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = (ulong *)0x0;
    if (puVar12 != (ulong *)0x0) {
      lStack_e8 = (long)param_3 >> 0x20;
      lStack_f0 = (long)(int)param_3;
      lVar10 = (long)param_4 - (param_3 & 0xffffffff00000000);
      lStack_d0 = lVar10 >> 0x20;
      uStack_d8 = (ulong)((int)param_4 - (int)param_3);
      uStack_c8 = 1;
      param_6 = (int)param_9 * (int)((ulong)lVar10 >> 0x20);
      uStack_e0 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      plStack_100 = &lStack_f0;
      puVar11 = &uStack_d8;
      uVar7 = unaff_x21;
      puVar9 = unaff_x20;
      func_0x00010bf51f80();
      puVar2 = (ulong *)0x1;
      puVar8 = param_8;
      puVar3 = param_9;
    }
  }
  else {
LAB_10826a704:
    puVar2 = (ulong *)0x0;
  }
  func_0x00010826b990(uStack_68);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar12 = puVar2;
  if (cStack_80 == '\x01') {
    func_0x00010826b8dc(&uStack_d8);
  }
  func_0x00010826b944();
  pcStack_118 = FUN_10826a760;
  puStack_160 = unaff_x26;
  puStack_158 = unaff_x25;
  uStack_150 = unaff_x24;
  uStack_148 = unaff_x23;
  puStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  puStack_130 = unaff_x20;
  puStack_128 = puVar2;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010826baac();
  uVar1 = (int)puVar3 == param_6;
  puVar2 = puVar12;
  uStack_168 = extraout_x8_00;
  if ((bool)uVar1) {
    func_0x000108268420();
    uVar5 = 0;
    if (puVar3 != (ulong *)0x0) {
      uVar5 = (ulong)puVar9 / (ulong)puVar3;
    }
    puVar2 = puVar3;
    if (puVar9 == (ulong *)(uVar5 * (long)puVar3)) {
      (**(code **)(*puVar6 + 0x50))(auStack_1d8,puVar6);
      puVar4 = auStack_1d8;
      FUN_108283a40();
      puVar2 = puVar4;
      func_0x00010826bc54();
      if ((bool)uVar1) {
        func_0x00010826b8c8();
      }
      uVar1 = puVar4 == puVar3;
      if ((bool)uVar1) {
        uVar5 = *puVar11;
        lVar10 = (long)(int)puVar3 * (long)((int)puVar8 - (int)uVar7);
        FUN_1082643a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        FUN_10826a344(puVar12,puVar6,uVar7,puVar8,uVar5,puVar9,
                      lVar10 * ((long)((long)puVar8 - (uVar7 & 0xffffffff00000000)) >> 0x20),lVar10)
        ;
        puVar2 = puVar12;
        func_0x00010826ba54();
        goto LAB_10826a850;
      }
    }
  }
  puVar12 = (ulong *)0x0;
LAB_10826a850:
  func_0x00010826b990(uStack_168);
  if ((bool)uVar1) {
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x00010826ba54();
  func_0x00010826b944();
  puVar11 = *(ulong **)(puVar2[4] + 0xd8);
  func_0x00010826bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 10826a760; end: 10826a8a7;  */

undefined1 *
FUN_10826a760(undefined1 *param_1,long *param_2,ulong param_3,long param_4,undefined1 *param_5,
             int param_6,undefined8 *param_7,ulong param_8)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_c8 [112];
  undefined8 uStack_58;
  
  func_0x00010826baac();
  uVar2 = (int)param_5 == param_6;
  puVar5 = param_1;
  uStack_58 = extraout_x8;
  if ((bool)uVar2) {
    func_0x000108268420();
    uVar1 = 0;
    if (param_5 != (undefined1 *)0x0) {
      uVar1 = param_8 / (ulong)param_5;
    }
    puVar5 = param_5;
    if (param_8 == uVar1 * (long)param_5) {
      (**(code **)(*param_2 + 0x50))(auStack_c8,param_2);
      puVar3 = auStack_c8;
      FUN_108283a40();
      puVar5 = puVar3;
      func_0x00010826bc54();
      if ((bool)uVar2) {
        func_0x00010826b8c8();
      }
      uVar2 = puVar3 == param_5;
      if ((bool)uVar2) {
        uVar4 = *param_7;
        lVar6 = (long)(int)param_5 * (long)((int)param_4 - (int)param_3);
        FUN_1082643a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        FUN_10826a344(param_1,param_2,param_3,param_4,uVar4,param_8,
                      lVar6 * ((long)(param_4 - (param_3 & 0xffffffff00000000)) >> 0x20),lVar6);
        puVar5 = param_1;
        func_0x00010826ba54();
        goto LAB_10826a850;
      }
    }
  }
  param_1 = (undefined1 *)0x0;
LAB_10826a850:
  func_0x00010826b990(uStack_58);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010826ba54();
  func_0x00010826b944();
  puVar5 = *(undefined1 **)(*(long *)(puVar5 + 0x20) + 0xd8);
  func_0x00010826bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 10826a8a8; end: 10826a8af;  */

void FUN_10826a8a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
  func_0x00010826bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10826a8b0; end: 10826a92b;  */

void FUN_10826a8b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_108273c20(&lStack_38);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    lStack_38 = 0;
    uStack_40 = 0;
    *puVar2 = &PTR_FUN_110a33ae8;
    puVar2[1] = lVar1;
    puVar2[2] = 1;
    FUN_10826b610(&uStack_40);
  }
  func_0x00010826ba04();
  *param_1 = puVar2;
  return;
}



/* Entry: 10826a92c; end: 10826a9a3;  */

void FUN_10826a92c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  FUN_108273c94(&lStack_38,*(undefined8 *)(param_3 + 0x10));
  lVar2 = lStack_38;
  if (lStack_38 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    uStack_40 = 0;
    lStack_38 = 0;
    *puVar3 = &PTR_FUN_110a33ae8;
    puVar3[1] = lVar2;
    puVar3[2] = uVar1;
    FUN_10826b610(&uStack_40);
  }
  func_0x00010826ba04();
  *param_1 = puVar3;
  return;
}



/* Entry: 10826a9a4; end: 10826a9ef;  */

void FUN_10826a9a4(undefined8 param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x19;
  undefined8 uStack_28;
  
  func_0x00010826bc18();
  uStack_28 = 0;
  if (*(long *)(unaff_x19 + 8) != 0) {
    do {
      func_0x00010826b964();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10826702c(param_1,&uStack_28,*(undefined8 *)(unaff_x19 + 0x10));
  func_0x00010826ba04();
  return;
}



/* Entry: 10826a9f0; end: 10826aa3b;  */

void FUN_10826a9f0(undefined8 param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x19;
  undefined8 uStack_28;
  
  func_0x00010826bc18();
  uStack_28 = 0;
  if (*(long *)(unaff_x19 + 8) != 0) {
    do {
      func_0x00010826b964();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1082670bc(param_1,&uStack_28,*(undefined8 *)(unaff_x19 + 0x10));
  func_0x00010826ba04();
  return;
}



/* Entry: 10826aa3c; end: 10826aa8f;  */

void FUN_10826aa3c(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_50;
  long lStack_48;
  
  if (*(long *)(param_2 + 0x28) == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x80);
    func_0x000108265f7c(uVar2,param_2);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x28);
  }
  lVar4 = *(long *)(param_2 + 0x20);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
  _objc_alloc_init();
  func_0x00010bf40cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010826ba54();
  FUN_108269b88(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139e0(puVar1);
  func_0x00010826ba54();
  FUN_108269b88(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ecb40(puVar1);
  func_0x00010826ba54();
  func_0x00010c1be600();
  func_0x00010826bc0c();
  func_0x00010826bbc8();
  FUN_108266a6c();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1b71a0(*puVar1);
    func_0x00010826bbc8();
    if (lVar3 != 0) {
      do {
        func_0x00010826b8f4();
      } while (extraout_w10 != 0);
    }
    lStack_48 = lVar3;
    FUN_108269080();
    FUN_10826b890(&lStack_48);
    func_0x00010826bbc8();
    if (lVar4 != 0) {
      do {
        func_0x00010826b8f4();
      } while (extraout_w10_00 != 0);
    }
    lStack_50 = lVar4;
    FUN_108269080();
    FUN_10826b890(&lStack_50);
  }
  func_0x00010826bc04();
  func_0x00010826b9b8();
  return;
}



/* Entry: 10826aa90; end: 10826ad9f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_10826aa90(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  puVar5 = (undefined8 *)0x0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = *(ulong *)(param_3 + 0xd8);
    func_0x00010c073660();
    if ((uVar1 & 1) == 0) {
      func_0x00010c26ce20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fca60();
      func_0x00010826bc04();
      uVar2 = *(undefined8 *)(param_2 + 0xd8);
      func_0x00010c0fca60(uVar2);
      param_1 = param_1 + 0xd8;
      FUN_108271f9c(param_1,uVar2,*(undefined4 *)(param_2 + 0xcc),param_5);
      puVar5 = (undefined8 *)PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
      _objc_opt_new();
      puVar3 = puVar5;
      func_0x00010bf40cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010826bad8();
      FUN_108269b88(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2139e0(puVar3);
      func_0x00010826bad8();
      func_0x00010c1be600(puVar3);
      func_0x00010826bc0c();
      FUN_108269b88(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ecb40(puVar3);
      func_0x00010826bad8();
      func_0x00010c20a560();
      func_0x00010826bb70();
      FUN_108266e44();
      if (puVar5 != (undefined8 *)0x0) {
        lVar4 = param_1;
        FUN_10826adf8(param_1);
        _objc_retainAutoreleasedReturnValue();
        FUN_10826ada0(puVar5,lVar4);
        func_0x00010826bba0();
        func_0x00010826bb70();
        if (param_1 != 0) {
          do {
            func_0x00010826b8f4();
          } while (extraout_w10 != 0);
        }
        alStack_70[1] = 0;
        lStack_90 = param_1;
        FUN_1082673d4(&lStack_90);
        FUN_10826b5c0(alStack_70 + 1);
        lVar4 = param_3;
        FUN_108269b88(param_3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10826ae1c(puVar5,lVar4,0);
        func_0x00010826bb68();
        func_0x00010826bb70();
        do {
          func_0x00010826b8f4();
        } while (extraout_w10_00 != 0);
        lStack_90 = 0;
        alStack_70[0] = param_3;
        FUN_108269080();
        FUN_10826b890(alStack_70);
        FUN_10826b5e8(&lStack_90);
        uStack_80 = *(undefined8 *)(param_2 + 0xb0);
        uVar2 = NEON_scvtf(*param_4,4);
        fVar6 = (float)((ulong)uVar2 >> 0x20);
        uVar9 = NEON_scvtf(uStack_80,4);
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        uVar11 = NEON_fmov(0xbf800000,4);
        fVar7 = ((float)uVar2 + (float)uVar2) / (float)uVar9 + (float)uVar11;
        fVar12 = (float)((ulong)uVar11 >> 0x20);
        fVar8 = (fVar6 + fVar6) / fVar10 + fVar12;
        uStack_88 = CONCAT44(fVar8,fVar7);
        uVar2 = NEON_scvtf(param_4[1],4);
        fVar6 = (float)((ulong)uVar2 >> 0x20);
        lStack_90 = CONCAT44(((fVar6 + fVar6) / fVar10 + fVar12) - fVar8,
                             (((float)uVar2 + (float)uVar2) / (float)uVar9 + (float)uVar11) - fVar7)
        ;
        uStack_78 = 0;
        func_0x00010c220f40(*puVar5);
        func_0x00010bf89b00(*puVar5);
      }
      func_0x00010826bc04();
      func_0x00010826b9b8();
    }
    else {
      puVar5 = (undefined8 *)0x0;
    }
  }
  return puVar5;
}



/* Entry: 10826ada0; end: 10826adf7;  */

void FUN_10826ada0(long param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010826bb5c();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_1 != unaff_x19) {
    func_0x00010c1ea880(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(unaff_x20 + 1);
    return;
  }
  return;
}



/* Entry: 10826adf8; end: 10826ae1b;  */

void FUN_10826adf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010826bb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10826ae1c; end: 10826ae8b;  */

void FUN_10826ae1c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_3 + 0xd;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 != param_2) {
    func_0x00010c19f0c0(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + param_3 + 0xd,param_2);
    return;
  }
  return;
}



/* Entry: 10826ae8c; end: 10826aeab;  */

long FUN_10826ae8c(long param_1)

{
  return param_1 + 0x120;
}



/* Entry: 10826aeac; end: 10826af57;  */

void FUN_10826aeac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined1 auStack_68 [56];
  
  uVar1 = param_2;
  FUN_10826b4d8();
  if ((uVar1 & 1) == 0) {
    uStack_70 = 0;
  }
  else {
    uVar2 = 0x40;
    __Znwm();
    FUN_10826b504(auStack_68,param_2);
    FUN_10826b570(uVar2,auStack_68);
    uStack_70 = uVar2;
    FUN_1082671e4(auStack_68);
  }
  FUN_108268314(param_1,&uStack_70);
  func_0x00010826bb98();
  return;
}



/* Entry: 10826af58; end: 10826afa3;  */

void FUN_10826af58(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  do {
    plVar2 = *(long **)(param_1 + 0xa0);
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar3 = *plVar2;
    lVar1 = *(long *)(lVar3 + 0x2c0);
    func_0x00010c252d60();
    if (lVar1 != 4) {
      lVar1 = *(long *)(lVar3 + 0x2c0);
      func_0x00010c252d60();
      if (lVar1 != 5) {
        return;
      }
    }
    func_0x00010840ec10(param_1 + 0xa0);
    FUN_10826b680(plVar2);
  } while( true );
}



/* Entry: 10826afa4; end: 10826afcf;  */

void FUN_10826afa4(void)

{
  code *pcVar1;
  
  FUN_10841076c(&UNK_10f4803c6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10826afd0);
  (*pcVar1)();
}



/* Entry: 10826afd0; end: 10826afdf;  */

void FUN_10826afd0(void)

{
  return;
}



/* Entry: 10826afe0; end: 10826b01f;  */

long FUN_10826afe0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    FUN_10826b020(plVar1);
    __ZdlPv(*plVar1);
  }
  FUN_10826b598(param_1 + 8);
  return param_1;
}



/* Entry: 10826b020; end: 10826b027;  */

void FUN_10826b020(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010826bb5c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10826b598();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10826b028; end: 10826b08b;  */

void FUN_10826b028(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010826bb5c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10826b598();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10826b08c; end: 10826b093;  */

void FUN_10826b08c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010826bb5c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_10826b598();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10826b094; end: 10826b10b;  */

void FUN_10826b094(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010826bb5c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_10826b598();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10826b10c; end: 10826b13b;  */

long FUN_10826b10c(long param_1)

{
  FUN_10826b13c();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010826bae8();
  }
  return param_1;
}



/* Entry: 10826b13c; end: 10826b173;  */

void FUN_10826b13c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x20;
    do {
      FUN_10826b174();
      uVar2 = uVar2 + 0x20;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10826b174; end: 10826b19b;  */

void FUN_10826b174(long param_1)

{
  func_0x00010826babc();
  if (param_1 != 0) {
    FUN_108267400();
  }
  return;
}



/* Entry: 10826b19c; end: 10826b1bf;  */

undefined8 FUN_10826b19c(undefined8 param_1)

{
  FUN_10826b1c0(param_1,0);
  return param_1;
}



/* Entry: 10826b1c0; end: 10826b203;  */

void FUN_10826b1c0(long *param_1)

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



/* Entry: 10826b204; end: 10826b227;  */

undefined8 FUN_10826b204(undefined8 param_1)

{
  FUN_10826b228(param_1,0);
  return param_1;
}



/* Entry: 10826b228; end: 10826b26b;  */

void FUN_10826b228(long *param_1)

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



/* Entry: 10826b26c; end: 10826b29b;  */

void FUN_10826b26c(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010826babc();
  *unaff_x19 = 0;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}



/* Entry: 10826b29c; end: 10826b3cb;  */

long * FUN_10826b29c(long *param_1,long *param_2)

{
  char in_NG;
  char in_OV;
  char cVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int extraout_w8;
  int iVar6;
  int extraout_w8_00;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  long alStack_40 [2];
  
  plVar3 = alStack_40;
  plVar4 = param_2;
  func_0x00010826bb78();
  if (in_NG == in_OV) {
    cVar1 = SBORROW4(extraout_w8,0x7fffffff);
    cVar2 = extraout_w8 + -0x7fffffff < 0;
    if (extraout_w8 == 0x7fffffff) {
      func_0x00010bdb1a68();
      func_0x00010826bb78();
      if (cVar2 == cVar1) {
        plVar3 = unaff_x19;
        FUN_10826b3cc(0x3ff8000000000000);
        lVar7 = *plVar4;
        plVar3 = plVar3 + (int)unaff_x19[1];
        *plVar4 = 0;
        *plVar3 = lVar7;
        FUN_10826b3f0();
        iVar6 = (int)unaff_x19[1];
      }
      else {
        lVar7 = *plVar4;
        plVar3 = (long *)(*unaff_x19 + (long)extraout_w8_00 * 8);
        *plVar4 = 0;
        *plVar3 = lVar7;
        iVar6 = extraout_w8_00;
      }
      *(int *)(unaff_x19 + 1) = iVar6 + 1;
      return plVar3;
    }
    alStack_40[1] = 0x7fffffff;
    alStack_40[0] = 8;
    uVar5 = (ulong)(extraout_w8 + 1);
    FUN_10840fe24(0x3ff8000000000000,alStack_40,uVar5);
    lVar7 = unaff_x19[1];
    lVar8 = *param_2;
    *param_2 = 0;
    plVar3[(int)lVar7] = lVar8;
    param_1 = plVar3;
    if ((int)lVar7 != 0) {
      func_0x00010826bb30();
      param_1 = plVar3;
    }
    if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
      func_0x00010826bae8();
    }
    func_0x00010826b904(uVar5 >> 3);
    iVar6 = (int)unaff_x19[1];
  }
  else {
    lVar7 = *unaff_x19;
    lVar8 = *param_2;
    *param_2 = 0;
    *(long *)(lVar7 + (long)extraout_w8 * 8) = lVar8;
    iVar6 = extraout_w8;
  }
  *(int *)(unaff_x19 + 1) = iVar6 + 1;
  return param_1;
}



/* Entry: 10826b3cc; end: 10826b3ef;  */

void FUN_10826b3cc(undefined8 param_1,long param_2,int param_3,ulong param_4)

{
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010826bba8(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  FUN_10826b454();
  if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
    func_0x00010826bae8();
  }
  func_0x00010826b904(param_4 >> 3);
  return;
}



/* Entry: 10826b3f0; end: 10826b42b;  */

void FUN_10826b3f0(long param_1,undefined8 param_2,ulong param_3)

{
  FUN_10826b454();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010826bae8();
  }
  func_0x00010826b904(param_3 >> 3);
  return;
}



/* Entry: 10826b42c; end: 10826b453;  */

void FUN_10826b42c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010826bba8(param_1,8,param_2,param_2);
  return;
}



/* Entry: 10826b454; end: 10826b4a7;  */

void FUN_10826b454(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  func_0x00010826bb5c();
  lVar3 = 0;
  for (lVar4 = 0; lVar4 < (int)unaff_x20[1]; lVar4 = lVar4 + 1) {
    lVar1 = *unaff_x20;
    uVar2 = *(undefined8 *)(lVar1 + lVar3);
    *(undefined8 *)(lVar1 + lVar3) = 0;
    *(undefined8 *)(unaff_x19 + lVar3) = uVar2;
    FUN_108267290(lVar1 + lVar3);
    lVar3 = lVar3 + 8;
  }
  return;
}



/* Entry: 10826b4a8; end: 10826b4af;  */

undefined8 FUN_10826b4a8(long param_1)

{
  code *pcVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x24) {
    return *(undefined8 *)(&UNK_10df120a8 + (ulong)*(uint *)(param_1 + 0x10) * 8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10826843c);
  (*pcVar1)();
}



/* Entry: 10826b4b0; end: 10826b4d7;  */

long FUN_10826b4b0(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010826bae8();
  }
  return param_1;
}



/* Entry: 10826b4d8; end: 10826b503;  */

bool FUN_10826b4d8(long *param_1)

{
  char cVar1;
  
  cVar1 = *param_1 != 0;
  if (param_1[1] != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (param_1[2] != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1 == '\x01';
}



/* Entry: 10826b504; end: 10826b53b;  */

undefined8 * FUN_10826b504(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  FUN_10826b53c();
  return param_1;
}



/* Entry: 10826b53c; end: 10826b56f;  */

void FUN_10826b53c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[4] = param_2[4];
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10826b570; end: 10826b597;  */

undefined4 * FUN_10826b570(undefined4 *param_1)

{
  *param_1 = 1;
  FUN_10826b504(param_1 + 2);
  return param_1;
}



/* Entry: 10826b598; end: 10826b5bf;  */

void FUN_10826b598(void)

{
  long extraout_x8;
  
  func_0x00010826bb48();
  if (extraout_x8 != 0) {
    func_0x00010826bac8();
  }
  return;
}



/* Entry: 10826b5c0; end: 10826b5e7;  */

void FUN_10826b5c0(long param_1)

{
  func_0x00010826babc();
  if (param_1 != 0) {
    FUN_108267400();
  }
  return;
}



/* Entry: 10826b5e8; end: 10826b60f;  */

void FUN_10826b5e8(void)

{
  long extraout_x8;
  
  func_0x00010826bb48();
  if (extraout_x8 != 0) {
    func_0x00010826bac8();
  }
  return;
}



/* Entry: 10826b610; end: 10826b637;  */

void FUN_10826b610(long param_1)

{
  func_0x00010826babc();
  if (param_1 != 0) {
    FUN_108267400();
  }
  return;
}



/* Entry: 10826b638; end: 10826b65b;  */

void FUN_10826b638(void)

{
  func_0x00010826babc();
  FUN_10826b65c();
  return;
}



/* Entry: 10826b65c; end: 10826b67f;  */

void FUN_10826b65c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010826bbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10826b680; end: 10826b6a3;  */

void FUN_10826b680(void)

{
  func_0x00010826babc();
  FUN_10826b6a4();
  return;
}



/* Entry: 10826b6a4; end: 10826b6c7;  */

void FUN_10826b6a4(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010826bbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10826b6c8; end: 10826b70f;  */

void FUN_10826b6c8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010826babc();
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 10826b710; end: 10826b757;  */

void FUN_10826b710(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010826babc();
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 10826b758; end: 10826b79b;  */

void FUN_10826b758(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010826bb30();
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010826bae8();
  }
  func_0x00010826b904(param_3 >> 3);
  return;
}



/* Entry: 10826b79c; end: 10826b7e7;  */

void FUN_10826b79c(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_2 + 8) ^ 0x7fffffff) < param_3) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10826b7c0;
    func_0x00010bdb1a68();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010826bba8(param_1,8);
  return;
}



/* Entry: 10826b7e8; end: 10826b80b;  */

void FUN_10826b7e8(void)

{
  func_0x00010826babc();
  FUN_10826b80c();
  return;
}



/* Entry: 10826b80c; end: 10826b827;  */

void FUN_10826b80c(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 10826b828; end: 10826b85b;  */

void FUN_10826b828(void)

{
  long *extraout_x8;
  
  func_0x00010826bb48();
  if (extraout_x8 != (long *)0x0) {
    func_0x00010826bac8((long)extraout_x8 + *(long *)(*extraout_x8 + -0x18));
  }
  return;
}



/* Entry: 10826b85c; end: 10826b88f;  */

void FUN_10826b85c(void)

{
  long *extraout_x8;
  
  func_0x00010826bb48();
  if (extraout_x8 != (long *)0x0) {
    func_0x00010826bac8((long)extraout_x8 + *(long *)(*extraout_x8 + -0x18));
  }
  return;
}



/* Entry: 10826b890; end: 10826b8b7;  */

void FUN_10826b890(void)

{
  long extraout_x8;
  
  func_0x00010826bb48();
  if (extraout_x8 != 0) {
    func_0x00010826bac8();
  }
  return;
}



/* Entry: 10826b8b8; end: 10826bc9b;  */

void FUN_10826b8b8(void)

{
  return;
}



/* Entry: 10826bc9c; end: 10826bd33;  */

undefined8 *
FUN_10826bc9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = param_5;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_110a33288;
  param_1[7] = param_2;
  uVar1 = *param_4;
  *param_4 = 0;
  param_1[8] = uVar1;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  FUN_10826bd34(param_1,param_6,param_7);
  return param_1;
}



/* Entry: 10826bd34; end: 10826bf2f;  */

void FUN_10826bd34(ulong param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf40cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010826cf34();
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
  FUN_108269b88(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139e0(uVar4);
  func_0x00010826cf4c();
  func_0x00010c17c800((double)(float)param_2[2],(double)(float)param_2[3],(double)(float)param_2[4],
                      (double)(float)param_2[5],uVar4);
  func_0x00010c1be600(uVar4);
  func_0x00010c20c1c0(uVar4);
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c2536a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    FUN_108269b88(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2139e0(uVar2);
    func_0x00010826cf68();
  }
  func_0x00010c17c8c0(uVar2);
  func_0x00010c1be600(uVar2);
  func_0x00010c20c1c0(uVar2);
  uVar3 = param_1;
  FUN_10826c494();
  if ((uVar3 & 1) == 0) {
    if (*param_2 == 1 || *param_3 == 1) {
      iVar7 = *(int *)(lVar5 + 0xb0);
      iVar8 = *(int *)(lVar5 + 0xb4);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(float *)(param_1 + 0x70) = (float)iVar7;
      *(float *)(param_1 + 0x74) = (float)iVar8;
      func_0x00010826cf80(param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  func_0x00010826cf4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10826bf30; end: 10826bfb7;  */

undefined8 * FUN_10826bf30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a33358;
  FUN_1082647e4(param_1 + 5);
  FUN_1082647e4(param_1 + 4);
  FUN_1082647e4(param_1 + 3);
  return param_1;
}



/* Entry: 10826bfb8; end: 10826bfbb;  */

undefined8 * FUN_10826bfb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a33288;
  _objc_release(param_1[0xc]);
  FUN_10826b710(param_1 + 8);
  *param_1 = &PTR_DAT_110a33358;
  FUN_1082647e4(param_1 + 5);
  FUN_1082647e4(param_1 + 4);
  FUN_1082647e4(param_1 + 3);
  return param_1;
}


