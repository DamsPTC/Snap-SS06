/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105344368; end: 105344387;  */

void FUN_105344368(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105344378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 105344388; end: 10534438f;  */

void FUN_105344388(void)

{
  return;
}



/* Entry: 105344390; end: 1053443bf;  */

void FUN_105344390(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_11087c978;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1053443c0; end: 1053443ef;  */

void FUN_1053443c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11087c978;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1053443f0; end: 105344427;  */

long FUN_1053443f0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11087c9e8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105344428; end: 105344433;  */

undefined ** FUN_105344428(void)

{
  return &PTR_DAT_11087c9e8;
}



/* Entry: 105344434; end: 105344477;  */

long * FUN_105344434(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 105344478; end: 10534447f;  */

void FUN_105344478(void)

{
  return;
}



/* Entry: 105344480; end: 1053444b3;  */

void FUN_105344480(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_11087ca08;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1053444b4; end: 1053444f3;  */

void FUN_1053444b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11087ca08;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1053444f4; end: 10534452b;  */

long FUN_1053444f4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11087ca68);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10534452c; end: 105344597;  */

undefined ** FUN_10534452c(void)

{
  return &PTR_DAT_11087ca68;
}



/* Entry: 105344598; end: 1053445cb;  */

void FUN_105344598(undefined8 param_1)

{
  FUN_1053445cc(param_1);
  return;
}



/* Entry: 1053445cc; end: 105344647;  */

void FUN_1053445cc(undefined8 **param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0x260;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_11087cca8;
  func_0x00010045684c(puVar2,param_2,0x1c);
  if (puVar1[0x15] != 0) {
    *param_1 = puVar2;
    param_1[1] = puVar1;
    param_1 = &puStack_40;
  }
  puStack_40 = puVar2;
  puStack_38 = puVar1;
  *param_1 = (undefined8 *)0x0;
  param_1[1] = (undefined8 *)0x0;
  func_0x00010533b6a0(&puStack_40);
  return;
}



/* Entry: 105344648; end: 1053446d7;  */

undefined1 * FUN_105344648(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x19;
  undefined1 *puVar3;
  undefined1 auStack_2a8 [24];
  undefined1 *puStack_290;
  undefined1 auStack_270 [576];
  
  puVar2 = auStack_270;
  func_0x0001000dad5c();
  func_0x0001000da688(auStack_270);
  func_0x0001000da870();
  puVar3 = puVar2;
  func_0x0001000dae18();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000105344f7c();
    func_0x000105344f8c();
  }
  func_0x000105344fa4();
  while( true ) {
    func_0x0001000dedf4();
    if ((bool)in_ZR) {
      return puVar3;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    func_0x000105344fb0();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    ___cxa_end_catch();
  }
  func_0x000105344f40();
  puStack_290 = puVar3;
  func_0x0001000da688(auStack_2a8);
  iVar1 = (int)auStack_2a8;
  func_0x0001000da870();
  func_0x0001000dad48();
  if (iVar1 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001000da688(auStack_2a8,param_2);
    puVar3 = auStack_2a8;
    FUN_105344754(puVar3);
    func_0x0001000dad48();
  }
  return puVar3;
}



/* Entry: 1053446d8; end: 105344753;  */

undefined1 * FUN_1053446d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [24];
  
  func_0x0001000da688(auStack_38);
  iVar1 = (int)auStack_38;
  func_0x0001000da870();
  func_0x0001000dad48();
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001000da688(auStack_38,param_2);
    puVar2 = auStack_38;
    FUN_105344754(puVar2);
    func_0x0001000dad48();
  }
  return puVar2;
}



/* Entry: 105344754; end: 10534475b;  */

void FUN_105344754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE_110346720)
            (param_1,0);
  return;
}



/* Entry: 10534475c; end: 1053447e3;  */

undefined1 * FUN_10534475c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  int aiStack_2a0 [2];
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined1 auStack_270 [576];
  
  puVar1 = auStack_270;
  func_0x0001000dad5c();
  uVar3 = 0x20;
  func_0x000100625ac4(auStack_270);
  func_0x000100628854();
  func_0x000105344f8c();
  func_0x000105344fa4();
  while( true ) {
    func_0x0001000dedf4();
    if ((bool)in_ZR) {
      return puVar1;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    func_0x000105344fb0();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    ___cxa_end_catch();
  }
  puVar2 = puVar1;
  func_0x000105344f40();
  aiStack_2a0[0] = 0;
  puStack_290 = puVar1;
  __ZNSt3__115system_categoryEv();
  puStack_298 = puVar2;
  func_0x0001000da688(auStack_2b8,param_2);
  func_0x0001000da688(auStack_2d0,uVar3);
  FUN_10534487c(auStack_2b8,auStack_2d0,aiStack_2a0);
  func_0x0001000dae18();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b8);
  return (undefined1 *)(ulong)(aiStack_2a0[0] == 0);
}



/* Entry: 1053447e4; end: 10534487b;  */

bool FUN_1053447e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  int aiStack_30 [2];
  undefined8 uStack_28;
  
  aiStack_30[0] = 0;
  __ZNSt3__115system_categoryEv();
  uStack_28 = param_1;
  func_0x0001000da688(auStack_48,param_2);
  func_0x0001000da688(auStack_60,param_3);
  FUN_10534487c(auStack_48,auStack_60,aiStack_30);
  func_0x0001000dae18();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return aiStack_30[0] == 0;
}



/* Entry: 10534487c; end: 105344893;  */

void FUN_10534487c(void)

{
  __ZNSt3__14__fs10filesystem8__renameERKNS1_4pathES4_PNS_10error_codeE();
  return;
}



/* Entry: 105344894; end: 1053449c7;  */

void FUN_105344894(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  _open(plVar1,2);
  if ((int)plVar1 != -1) {
    lVar2 = (long)plVar1;
    _fsync();
    if ((int)lVar2 == 0) {
      _close(plVar1);
      (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
      if ((int)param_1 != 0) {
        lVar2 = param_3;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm
                  (param_3,0x2f,0xffffffffffffffff);
        if (lVar2 == -1) {
          func_0x00010002b838(appuStack_48,&DAT_10f62a9de);
        }
        else {
          func_0x0001000e1048(appuStack_48,param_3,0,lVar2);
        }
        pppuVar3 = (undefined8 ***)appuStack_48[0];
        if (-1 < cStack_31) {
          pppuVar3 = appuStack_48;
        }
        _open(pppuVar3,0);
        if ((int)pppuVar3 != -1) {
          _fsync(pppuVar3);
          _close(pppuVar3);
        }
        func_0x0001000dad48();
      }
    }
    else {
      _close(plVar1);
    }
  }
  return;
}



/* Entry: 1053449c8; end: 105344a57;  */

void FUN_1053449c8(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  
  if (*(long *)(*param_4 + 0x18) != 0) {
    FUN_105344a58();
  }
  lVar1 = *param_3;
  if (*(long *)(lVar1 + 0x18) != 0) {
    func_0x00010533a9e0();
    lVar1 = *param_3;
  }
  (**(code **)(*param_2 + 0x40))(param_2,lVar1,*param_4);
  if (((ulong)param_2 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x0001000dae20(param_1,*param_4);
  }
  return;
}



/* Entry: 105344a58; end: 105344a93;  */

void FUN_105344a58(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1 + 0x10;
  func_0x000100456a38();
  if (lVar1 != 0) {
    return;
  }
  func_0x000100456928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18ios_base5clearEj_1103468e0)
            (param_1 + extraout_x8,*(uint *)(param_1 + extraout_x8 + 0x20) | 4);
  return;
}



/* Entry: 105344a94; end: 105344b0f;  */

void FUN_105344a94(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  if ((*param_2 != 0) && (*(long *)(*param_2 + 0x18) != 0)) {
    func_0x00010533a9e0();
    lVar1 = (long)*(char *)(*param_2 + 0x17);
    if (lVar1 < 0) {
      lVar1 = *(long *)(*param_2 + 8);
    }
    if (lVar1 != 0) {
      func_0x0001000da688(auStack_38);
      FUN_105344754(auStack_38);
      func_0x0001000dad48();
    }
  }
  return;
}



/* Entry: 105344b10; end: 105344b27;  */

void FUN_105344b10(void)

{
  return;
}



/* Entry: 105344b28; end: 105344b3b;  */

void FUN_105344b28(void)

{
  func_0x000100628b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105344b3c; end: 105344b4f;  */

void FUN_105344b3c(long *param_1)

{
  func_0x000100628b10((long)param_1 + *(long *)(*param_1 + -0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105344b50; end: 105344b63;  */

void FUN_105344b50(void)

{
  func_0x0001004569d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105344b64; end: 105344c2f;  */

void FUN_105344b64(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000daea0();
  func_0x000105344f48();
  func_0x0001000db0f8();
  *(undefined8 *)(unaff_x19 + 0x80) = unaff_x20;
  bVar1 = *(byte *)(unaff_x19 + 0x192);
  func_0x0001000db104();
  *(char *)(unaff_x19 + 0x192) = (char)unaff_x20;
  if ((uint)bVar1 != (uint)unaff_x20) {
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    if ((uint)unaff_x20 == 0) {
      if (((*(byte *)(unaff_x19 + 400) & 1) == 0) &&
         (*(long *)(unaff_x19 + 0x40) != unaff_x19 + 0x58)) {
        uVar2 = *(undefined8 *)(unaff_x19 + 0x60);
        *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x19 + 0x40);
        *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
        *(undefined1 *)(unaff_x19 + 0x191) = 0;
        __Znam();
        *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
        *(undefined1 *)(unaff_x19 + 400) = 1;
      }
      else {
        uVar2 = *(undefined8 *)(unaff_x19 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
        __Znam();
        *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
        *(undefined1 *)(unaff_x19 + 0x191) = 1;
      }
    }
    else {
      if ((*(byte *)(unaff_x19 + 400) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
        __ZdaPv();
      }
      *(undefined1 *)(unaff_x19 + 400) = *(undefined1 *)(unaff_x19 + 0x191);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x68);
      *(undefined1 *)(unaff_x19 + 0x191) = 0;
      *(undefined8 *)(unaff_x19 + 0x68) = 0;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
    }
  }
  return;
}



/* Entry: 105344c30; end: 105344cef;  */

void FUN_105344c30(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x8;
  
  lVar3 = *(long *)(param_2 + 0x80);
  if (lVar3 == 0) {
    FUN_105344dc4();
    if ((*(long *)(lVar3 + 0x78) != 0) && (lVar5 = lVar3, func_0x000105344f48(), (int)lVar5 == 0)) {
      uVar4 = *(undefined8 *)(lVar3 + 0x78);
      _fseeko(uVar4,*(undefined8 *)(param_3 + 0x80),0);
      if ((int)uVar4 == 0) {
        _memmove(lVar3 + 0x88,param_3,0x80);
        uVar4 = 0x88;
        param_1 = extraout_x8;
        goto _memcpy;
      }
    }
    func_0x000105344f5c();
    return;
  }
  func_0x000105344f48();
  iVar1 = (int)lVar3;
  if (((*(long *)(param_2 + 0x78) != 0) &&
      (((param_3 == 0 || (0 < iVar1)) && (iVar2 = iVar1, func_0x000105344f94(), iVar2 == 0)))) &&
     ((uint)param_4 < 3)) {
    uVar4 = *(undefined8 *)(param_2 + 0x78);
    param_3 = param_3 * iVar1;
    if (iVar1 < 1) {
      param_3 = 0;
    }
    _fseeko(uVar4,param_3,param_4);
    if ((int)uVar4 == 0) {
      FUN_105344dec(param_1,*(undefined8 *)(param_2 + 0x78));
      param_3 = param_2 + 0x88;
      uVar4 = 0x80;
_memcpy:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_3,uVar4);
      return;
    }
  }
  func_0x000105344f5c();
  return;
}



/* Entry: 105344cf0; end: 105344d67;  */

void FUN_105344cf0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_2 + 0x78) != 0) && (lVar1 = param_2, func_0x000105344f48(), (int)lVar1 == 0))
  {
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    _fseeko(uVar2,*(undefined8 *)(param_3 + 0x80),0);
    if ((int)uVar2 == 0) {
      _memmove(param_2 + 0x88,param_3,0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_3,0x88);
      return;
    }
  }
  func_0x000105344f5c();
  return;
}



/* Entry: 105344d68; end: 105344dc3;  */

undefined8 FUN_105344d68(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (uVar1 = *(ulong *)(param_1 + 0x18), *(ulong *)(param_1 + 0x10) < uVar1)) {
    if ((uint)param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x188) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar1 - 1) == ((uint)param_2 & 0xff))) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      *(char *)(uVar1 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}



/* Entry: 105344dc4; end: 105344deb;  */

void FUN_105344dc4(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  uVar1 = 8;
  ___cxa_allocate_exception();
  __ZNSt8bad_castC1Ev();
  ___cxa_throw();
  _ftello();
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0x10] = uVar1;
  return;
}



/* Entry: 105344dec; end: 105344e1f;  */

void FUN_105344dec(undefined8 *param_1,undefined8 param_2)

{
  _ftello();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = param_2;
  return;
}



/* Entry: 105344e20; end: 105344e5b;  */

ulong FUN_105344e20(long param_1,ulong param_2,char param_3,ulong param_4)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    if (param_4 < param_2) {
      param_2 = param_4 + 1;
    }
    while (param_2 != 0) {
      pcVar1 = (char *)(param_1 + -1 + param_2);
      param_2 = param_2 - 1;
      if (*pcVar1 == param_3) {
        return param_2;
      }
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 105344e5c; end: 105344e6f;  */

void FUN_105344e5c(void)

{
  func_0x000105344ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105344e70; end: 105344e77;  */

void FUN_105344e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105344fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105344e78; end: 105344e8b;  */

void FUN_105344e78(void)

{
  func_0x0001004569a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105344e8c; end: 105344ecf;  */

long FUN_105344e8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + -0x10;
  lVar1 = param_1;
  func_0x000100456960(param_1,&PTR_PTR_11087cd60);
  func_0x000107c60dd8(lVar1 + 0x1b0);
  return param_1;
}



/* Entry: 105344ed0; end: 105344ee3;  */

void FUN_105344ed0(void)

{
  func_0x000105344f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105344ee4; end: 105344eeb;  */

void FUN_105344ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105344fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105344eec; end: 105344eff;  */

void FUN_105344eec(void)

{
  func_0x000100557e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105344f00; end: 105344fcf;  */

long FUN_105344f00(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar2 = lVar1;
  func_0x000100557ddc(lVar1,&PTR_PTR_11087cf80);
  func_0x000107c60dd8(lVar2 + 0x1a8);
  return lVar1;
}



/* Entry: 105344fd0; end: 1053456a7;  */

void FUN_105344fd0(undefined8 *param_1,undefined8 *param_2,int param_3,ulong param_4,long *param_5,
                  long *param_6,int param_7,int param_8,int param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 **ppuVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  int iStack_1b4;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int iStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int iStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [40];
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int aiStack_d0 [12];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
  func_0x000105345a40(&lStack_80);
  uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
  func_0x000105345a40(&lStack_a0);
  lVar17 = 0;
  iVar15 = 0;
  iVar19 = 0;
  aiStack_d0[2] = 0;
  aiStack_d0[3] = 0;
  aiStack_d0[0] = 0;
  aiStack_d0[1] = 0;
  aiStack_d0[6] = 0;
  aiStack_d0[7] = 0;
  aiStack_d0[4] = 0;
  aiStack_d0[5] = 0;
  aiStack_d0[8] = 0x3f800000;
  uStack_e0 = 0;
  uStack_d8 = 0;
  iVar8 = 0x5e;
  if (param_7 < 3) {
    iVar8 = 0x5a;
  }
  iStack_1b4 = 0;
  if ((param_4 & 0x100000000) != 0) {
    iStack_1b4 = (param_8 + (param_3 - (int)param_4) * 8) - param_9;
  }
  puVar21 = param_2 + 1;
  puVar20 = (undefined8 *)*param_2;
  puStack_e8 = &uStack_e0;
  while (puVar20 != puVar21) {
    lVar7 = puVar20[8];
    lVar12 = puVar20[9];
    if (lVar7 == lVar12) {
      bVar3 = false;
    }
    else {
      bVar3 = puVar20[0xb] != puVar20[0xc];
    }
    puVar4 = puVar20 + 5;
    FUN_1053456a8();
    if (((ulong)puVar4 & 1) == 0) {
      if (bVar3) {
        uVar18 = (int)lVar12 - (int)lVar7;
        iVar22 = *(int *)(puVar20 + 0xc) - *(int *)(puVar20 + 0xb);
      }
      else {
        iVar22 = 0;
        for (plVar16 = (long *)puVar20[5]; plVar16 != (long *)puVar20[6]; plVar16 = plVar16 + 2) {
          iVar22 = (*(int *)(*plVar16 + 0x10) + iVar22) - *(int *)(*plVar16 + 8);
        }
        uVar18 = (uint)((ulong)((long)puVar20[6] - (long)puVar20[5]) >> 1) & 0xfffffff8 | 4;
      }
    }
    else {
      uVar18 = 0;
      iVar22 = 0;
    }
    *(uint *)(lStack_80 + lVar17 * 4) = uVar18;
    *(int *)(lStack_a0 + lVar17 * 4) = iVar22;
    if (bVar3) {
      if (*param_5 != 0) {
        if (iStack_1b4 == 0) {
          iStack_1b4 = 0;
        }
        else {
          ppuVar6 = &puStack_e8;
          FUN_10533beb4(ppuVar6,puVar20 + 4);
          *(int *)ppuVar6 = iStack_1b4;
        }
      }
    }
    else if (((param_4 >> 0x20 & 1) != 0) && (*param_5 != 0)) {
      iVar9 = *(int *)(puVar20 + 4);
      plVar16 = (long *)(*param_6 + 8);
      plVar10 = plVar16;
      plVar13 = plVar16;
      while (plVar14 = (long *)*plVar13, plVar14 != (long *)0x0) {
        lVar7 = 8;
        if (iVar9 <= *(int *)((long)plVar14 + 0x1c)) {
          lVar7 = 0;
        }
        plVar13 = (long *)((long)plVar14 + lVar7);
        if (iVar9 <= *(int *)((long)plVar14 + 0x1c)) {
          plVar10 = plVar14;
        }
      }
      if ((plVar16 == plVar10) || (iVar9 < *(int *)((long)plVar10 + 0x1c))) {
        iVar9 = 0;
      }
      else {
        iVar9 = (int)plVar10[6] + *(int *)((long)plVar10 + 0x24);
      }
      iStack_1b4 = (uVar18 + iStack_1b4 + iVar22) - iVar9;
    }
    iVar19 = uVar18 + iVar19;
    iVar15 = iVar22 + iVar15;
    lVar17 = lVar17 + 1;
    func_0x00010002c7d4();
  }
  func_0x000100291d50(&uStack_100,(long)(iVar19 + iVar15));
  lVar17 = 0;
  iVar19 = 0;
  puVar20 = (undefined8 *)*param_2;
  while (puVar20 != puVar21) {
    lVar7 = puVar20[8];
    lVar12 = puVar20[9];
    if (lVar7 == lVar12) {
      bVar3 = true;
    }
    else {
      bVar3 = puVar20[0xb] == puVar20[0xc];
    }
    puVar4 = puVar20 + 5;
    FUN_1053456a8();
    if ((bVar3) || (((ulong)puVar4 & 1) != 0)) {
      if (((ulong)puVar4 & 1) == 0) {
        iVar15 = 0;
        *(int *)(lVar17 + uStack_100) = (int)((ulong)(puVar20[6] - puVar20[5]) >> 4);
        plVar13 = (long *)puVar20[6];
        lVar17 = lVar17 + 4;
        for (plVar16 = (long *)puVar20[5]; plVar16 != plVar13; plVar16 = plVar16 + 2) {
          *(undefined4 *)(lVar17 + uStack_100) = *(undefined4 *)*plVar16;
          iVar15 = iVar15 + (*(int *)(*plVar16 + 0x10) - *(int *)(*plVar16 + 8));
          *(int *)(lVar17 + uStack_100 + 4) = iVar15;
          iVar19 = iVar19 + 1;
          lVar17 = lVar17 + 8;
        }
        plVar13 = (long *)puVar20[6];
        for (plVar16 = (long *)puVar20[5]; plVar16 != plVar13; plVar16 = plVar16 + 2) {
          iVar15 = *(int *)(puVar20 + 4);
          if ((iVar15 != 5) && (iVar15 != 0x9c)) {
            uVar1 = *(undefined8 *)(*plVar16 + 8);
            uVar2 = *(undefined8 *)(*plVar16 + 0x10);
            piVar5 = aiStack_d0;
            func_0x0001000e1b8c();
            *piVar5 = param_3 * 8 + param_8 + iVar8 + 8 + (int)lVar17;
            piVar5[1] = (int)uVar2 - (int)uVar1;
            piVar5[2] = iVar15;
          }
          lVar7 = *(long *)(*plVar16 + 8);
          lVar12 = *(long *)(*plVar16 + 0x10) - lVar7;
          lVar11 = lVar7;
          if (lVar12 != 0) {
            _memmove(lVar17 + uStack_100,lVar7,lVar12);
            lVar7 = *(long *)(*plVar16 + 8);
            lVar11 = *(long *)(*plVar16 + 0x10);
          }
          lVar17 = (lVar17 - lVar7) + lVar11;
        }
      }
    }
    else {
      lVar11 = lVar7;
      if (lVar7 != lVar12) {
        _memmove(lVar17 + uStack_100,lVar7,lVar12 - lVar7);
        lVar7 = puVar20[9];
        lVar11 = puVar20[8];
      }
      lVar17 = (lVar7 - lVar11) + lVar17;
      lVar7 = puVar20[0xb];
      lVar12 = lVar7;
      if (puVar20[0xc] - lVar7 != 0) {
        _memmove(lVar17 + uStack_100,lVar7,puVar20[0xc] - lVar7);
        lVar7 = puVar20[0xb];
        lVar12 = puVar20[0xc];
      }
      lVar17 = (lVar17 - lVar7) + lVar12;
    }
    func_0x00010002c7d4();
  }
  if (*param_5 != 0) {
    plVar16 = (long *)(*param_5 + 0x10);
LAB_1053453f4:
    plVar16 = (long *)*plVar16;
    if (plVar16 != (long *)0x0) {
      puVar20 = &uStack_e0;
      while (puVar20 = (undefined8 *)*puVar20, puVar20 != (undefined8 *)0x0) {
        if (*(int *)((long)puVar20 + 0x1c) <= *(int *)((long)plVar16 + 0x1c)) {
          if (*(int *)((long)plVar16 + 0x1c) <= *(int *)((long)puVar20 + 0x1c)) {
            ppuVar6 = &puStack_e8;
            FUN_10533beb4();
            *(int *)((long)plVar16 + 0x14) = *(int *)((long)plVar16 + 0x14) + *(int *)ppuVar6;
            break;
          }
          puVar20 = puVar20 + 1;
        }
      }
      goto LAB_1053453f4;
    }
    FUN_10533b768(aiStack_d0,*(undefined8 *)(*param_5 + 0x10),0);
  }
  lStack_110 = 0;
  lStack_108 = 0;
  param_2 = (undefined8 *)*param_2;
  plStack_118 = &lStack_110;
  while (param_2 != puVar21) {
    func_0x00010533d6f8(&plStack_118,param_2 + 4);
    func_0x00010002c7d4();
  }
  uStack_1b0 = uStack_100;
  uStack_1a0 = uStack_f0;
  uStack_1a8 = uStack_f8;
  iStack_198 = (int)uStack_f8 - (int)uStack_100;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  uStack_188 = uStack_78;
  lStack_190 = lStack_80;
  uStack_180 = uStack_70;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_170 = uStack_98;
  lStack_178 = lStack_a0;
  uStack_168 = uStack_90;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  plStack_158 = plStack_118;
  lStack_150 = lStack_110;
  lStack_148 = lStack_108;
  plVar16 = &lStack_150;
  if (lStack_108 != 0) {
    *(long **)(lStack_110 + 0x10) = &lStack_150;
    lStack_110 = 0;
    lStack_108 = 0;
    plVar16 = plStack_158;
    plStack_118 = &lStack_110;
  }
  plStack_158 = plVar16;
  iStack_160 = iVar19;
  func_0x0001000e2dac(auStack_140,aiStack_d0);
  puVar20 = (undefined8 *)0xb0;
  __Znwm();
  puVar20[1] = 0;
  puVar20[2] = 0;
  *puVar20 = &PTR_FUN_11087d018;
  puVar20[4] = uStack_1a8;
  puVar20[3] = uStack_1b0;
  puVar20[5] = uStack_1a0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  *(int *)(puVar20 + 6) = iStack_198;
  puVar20[8] = uStack_188;
  puVar20[7] = lStack_190;
  puVar20[9] = uStack_180;
  lStack_190 = 0;
  uStack_188 = 0;
  puVar20[0xb] = uStack_170;
  puVar20[10] = lStack_178;
  puVar20[0xc] = uStack_168;
  uStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  *(int *)(puVar20 + 0xd) = iStack_160;
  puVar20[0xe] = plStack_158;
  plVar16 = puVar20 + 0xf;
  *plVar16 = lStack_150;
  puVar20[0x10] = lStack_148;
  if (lStack_148 == 0) {
    puVar20[0xe] = plVar16;
  }
  else {
    *(long **)(lStack_150 + 0x10) = plVar16;
    lStack_150 = 0;
    lStack_148 = 0;
    plStack_158 = &lStack_150;
  }
  func_0x0001000e2dac(puVar20 + 0x11,auStack_140);
  *param_1 = puVar20 + 3;
  param_1[1] = puVar20;
  FUN_105345978(&uStack_1b0);
  FUN_105340e64(&plStack_118);
  func_0x000100100fec(&uStack_100);
  func_0x00010533c148(&puStack_e8);
  func_0x0001000e2e8c(aiStack_d0);
  func_0x0001002920a0(&lStack_a0);
  func_0x0001002920a0(&lStack_80);
  return;
}



/* Entry: 1053456a8; end: 1053456df;  */

bool FUN_1053456a8(long *param_1)

{
  if (*param_1 != param_1[1]) {
    return false;
  }
  if (param_1[3] != param_1[4]) {
    return param_1[6] == param_1[7];
  }
  return true;
}



/* Entry: 1053456e0; end: 1053458cb;  */

void FUN_1053456e0(undefined8 *param_1,uint param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_w8;
  ulong uVar10;
  ulong extraout_x8;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  func_0x00010002b8a8(&uStack_68,(long)(int)(param_2 * 8 + 8),&uStack_80);
  lVar13 = 0;
  uVar11 = 0;
  iVar7 = 0x5e;
  if (param_4 < 3) {
    iVar7 = 0x5a;
  }
  iVar7 = iVar7 + param_5 + ((int)uStack_60 - (int)uStack_68);
  lVar4 = *(long *)(param_3 + 0x58);
  lVar5 = param_3 + 0x60;
  iVar12 = iVar7;
  do {
    if (lVar4 == lVar5) {
      if ((*(long *)(param_3 + 0x68) != 0) &&
         (func_0x00010002c810(), param_2 = param_2 - *(int *)(lVar5 + 0x1c),
         (param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) != 0)) {
        do {
          func_0x000105345a20();
        } while (extraout_w8 != 1);
      }
      uVar3 = uStack_58;
      uVar2 = uStack_60;
      uVar11 = uStack_68;
      uStack_80 = uStack_68;
      uStack_78 = uStack_60;
      uStack_70 = uStack_58;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      puVar6 = (undefined8 *)0x30;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_11087d068;
      puVar6[3] = uVar11;
      puVar6[4] = uVar2;
      puVar6[5] = uVar3;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      *param_1 = puVar6 + 3;
      param_1[1] = puVar6;
      func_0x000100100fec(&uStack_80);
      func_0x000100100fec(&uStack_68);
      return;
    }
    uVar8 = *(uint *)(lVar4 + 0x1c);
    uVar10 = (ulong)uVar8;
    if ((int)uVar11 < (int)uVar8) {
      for (; (int)uVar10 != (int)uVar11; uVar11 = (ulong)((int)uVar11 + 1)) {
        func_0x000105345a20();
        uVar10 = extraout_x8;
      }
      uVar8 = *(uint *)(lVar4 + 0x1c);
    }
    iVar1 = *(int *)(*(long *)(param_3 + 0x20) + lVar13 * 4);
    if (uVar8 == param_2) {
      if ((iVar1 != 0) && (iVar9 = *(int *)(*(long *)(param_3 + 0x38) + lVar13 * 4), iVar9 != 0))
      goto LAB_1053457dc;
      *(int *)(uStack_68 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3)) = iVar7;
      *(int *)(uStack_68 + (long)(int)uVar11 * 8 + 4) = iVar12;
    }
    else {
      iVar9 = *(int *)(*(long *)(param_3 + 0x38) + lVar13 * 4);
LAB_1053457dc:
      iVar7 = iVar1 + iVar12;
      *(int *)(uStack_68 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3)) = iVar7;
      iVar12 = iVar9 + iVar7;
      *(int *)(uStack_68 + (long)(int)uVar11 * 8 + 4) = iVar12;
      uVar11 = (ulong)(*(int *)(lVar4 + 0x1c) + 1);
    }
    lVar13 = lVar13 + 1;
    func_0x00010002c7d4();
  } while( true );
}



/* Entry: 1053458cc; end: 10534594f;  */

undefined8 * FUN_1053458cc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  puStack_40 = param_1;
  if (param_2 != 0) {
    func_0x000100291c58(param_1);
    FUN_105345950(param_1,param_2,param_3);
  }
  uStack_38 = 1;
  func_0x000100291cb4(&puStack_40);
  return param_1;
}



/* Entry: 105345950; end: 105345977;  */

void FUN_105345950(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 105345978; end: 1053459b7;  */

long FUN_105345978(long param_1)

{
  long lStack_28;
  
  func_0x0001000e2e8c(param_1 + 0x70);
  FUN_105340e64(param_1 + 0x58);
  func_0x0001002920a0(param_1 + 0x38);
  func_0x0001002920a0(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1053459b8; end: 1053459bb;  */

void FUN_1053459b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087d018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053459bc; end: 1053459cf;  */

void FUN_1053459bc(void)

{
  func_0x0001053459dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053459d0; end: 1053459ef;  */

long FUN_1053459d0(long param_1)

{
  long lStack_28;
  
  func_0x0001000e2e8c(param_1 + 0x88);
  FUN_105340e64(param_1 + 0x70);
  func_0x0001002920a0(param_1 + 0x50);
  func_0x0001002920a0(param_1 + 0x38);
  lStack_28 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 1053459f0; end: 105345a03;  */

void FUN_1053459f0(void)

{
  func_0x000105345a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105345a04; end: 105345a4b;  */

long FUN_105345a04(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 105345a4c; end: 105345b23;  */

bool FUN_105345a4c(long param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lVar3 = (long)*(char *)(param_1 + 0x2f);
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if ((param_2 & 1) == 0) goto LAB_105345a84;
LAB_105345a88:
    lVar3 = (long)*(char *)(param_1 + 0x17);
    if (lVar3 < 0) {
      lVar3 = *(long *)(param_1 + 8);
    }
    if (((param_3 & 1) != 0) || (lVar3 != 0)) {
      lVar3 = (long)*(char *)(param_1 + 0x5f);
      if (lVar3 < 0) {
        lVar2 = *(long *)(param_1 + 0x48);
        lVar3 = *(long *)(param_1 + 0x50);
      }
      else {
        lVar2 = param_1 + 0x48;
      }
      func_0x00010069648c(&lStack_68,lVar2,lVar2 + lVar3);
      bVar1 = lStack_60 == lStack_68 || lStack_60 - lStack_68 == 2;
      func_0x000100100fec(&lStack_68);
      goto LAB_105345ae4;
    }
  }
  else {
    if ((param_2 & 1) != 0) goto LAB_105345a88;
LAB_105345a84:
    if (lVar3 != 0) goto LAB_105345a88;
  }
  bVar1 = false;
LAB_105345ae4:
  func_0x000100100fec(&uStack_50);
  func_0x000100100fec(&uStack_38);
  return bVar1;
}



/* Entry: 105345b24; end: 105345bcf;  */

void FUN_105345b24(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_48 [20];
  undefined4 uStack_34;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  lVar1 = *(long *)(param_2 + 0x38);
  for (lVar3 = *(long *)(param_2 + 0x30); lVar3 != lVar1; lVar3 = lVar3 + 0x88) {
    uStack_34 = *(undefined4 *)(lVar3 + 0x6c);
    puVar2 = param_1;
    FUN_105345bd0(param_1,&uStack_34);
    FUN_10533de68(auStack_48,lVar3);
    FUN_10533f8d4(puVar2,auStack_48);
    func_0x000105340f5c(auStack_48);
  }
  return;
}



/* Entry: 105345bd0; end: 105345c03;  */

long FUN_105345bd0(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_105345c04(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 105345c04; end: 105345caf;  */

undefined1  [16]
FUN_105345c04(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x000105340eec(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x40;
    __Znwm();
    uStack_50 = 1;
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)*param_4;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    plStack_58 = param_1 + 1;
    func_0x000105340f80(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    func_0x000105340fa8(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 105345cb0; end: 105345cdf; -[SCExposureLogBlizzard .cxx_destruct] */

void FUN_105345cb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105345ce0; end: 105345d2b; -[SCPropertyHandlerRegistryImpl convertPropertyIdToName:] */

void FUN_105345ce0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000100336220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26c080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105345d2c; end: 105345d43; -[SCPropertyHandlerRegistryImpl getPropertyHandlerMetadataArray] */

void FUN_105345d2c(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105345d44; end: 105345d97; -[SCPropertyHandlerRegistryImpl deregisterPropertyHandler:] */

void FUN_105345d44(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(uVar2,param_2,puVar1,(long)param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105345d98; end: 105345dc7; -[SCPropertyHandlerRegistryImpl .cxx_destruct] */

void FUN_105345d98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105345dc8; end: 105345e8b; -[SCCircumstanceEngineReadinessMetricEmitterImpl handleApplicationDidEnterForeground] */

void FUN_105345dc8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105345e8c; end: 105345edb;  */

void FUN_105345e8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(double *)(lVar1 + 0x10) < 1e-06 || (*(double *)(lVar1 + 0x18) < 1e-06))))
  {
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105345edc; end: 105345f97; -[SCCircumstanceEngineReadinessMetricEmitterImpl startSyncingCofUnauthenticated] */

void FUN_105345edc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105345f98; end: 105345fe3;  */

void FUN_105345f98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(double *)(lVar1 + 0x20) < 1e-06)) {
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x68) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105345fe4; end: 10534609f; -[SCCircumstanceEngineReadinessMetricEmitterImpl startSyncingCofAuthenticated] */

void FUN_105345fe4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1053460a0; end: 1053460eb;  */

void FUN_1053460a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(double *)(lVar1 + 0x20) < 1e-06)) {
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x68) = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053460ec; end: 1053461b7; -[SCCircumstanceEngineReadinessMetricEmitterImpl finishSyncingCofWithSuccess:] */

void FUN_1053460ec(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1053461b8; end: 10534620f;  */

void FUN_1053461b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (1e-06 <= *(double *)(lVar1 + 0x20))) && (*(double *)(lVar1 + 0x28) < 1e-06))
  {
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 *)(lVar1 + 0x58) = *(undefined1 *)(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105346210; end: 1053462db; -[SCCircumstanceEngineReadinessMetricEmitterImpl appliedCofResponseWithType:] */

void FUN_105346210(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_4;
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1053462dc; end: 105346343;  */

void FUN_1053462dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (1e-06 <= *(double *)(lVar1 + 0x20))) && (*(double *)(lVar1 + 0x30) < 1e-06))
  {
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be577c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105346344; end: 1053466d7; -[SCCircumstanceEngineReadinessMetricEmitterImpl _logReadinessMetricIfPossible] */

void FUN_105346344(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  puVar3 = PTR_PTR_1126b7890;
  if (*(long *)(param_1 + 0x68) == 1) {
    dVar12 = *(double *)(param_1 + 0x10);
    if ((((dVar12 < 1e-06) && (*(double *)(param_1 + 0x18) < 1e-06)) ||
        (dVar15 = *(double *)(param_1 + 0x20), dVar15 < 1e-06)) ||
       ((dVar13 = *(double *)(param_1 + 0x28), dVar13 < 1e-06 ||
        (dVar18 = *(double *)(param_1 + 0x30), dVar18 < 1e-06)))) {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      _objc_retain(&PTR____CFConstantStringClassReference_110dd2c78);
      _objc_retain(&PTR____CFConstantStringClassReference_110dd25f8);
      _objc_retain(uVar2);
      func_0x00010c27f300(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(&PTR____CFConstantStringClassReference_110dd2c78);
      _objc_release(&PTR____CFConstantStringClassReference_110dd25f8);
      _objc_release(puVar3);
      uVar4 = uVar2;
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar4;
      func_0x00010bf39920(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    else {
      puVar8 = *(undefined **)(param_1 + 0x80);
      dVar14 = *(double *)(param_1 + 0x18);
      dVar17 = *(double *)(param_1 + 0x38);
      dVar11 = *(double *)(param_1 + 0x40);
      dVar16 = *(double *)(param_1 + 0x48);
      dVar10 = *(double *)(param_1 + 0x50);
      bVar1 = *(byte *)(param_1 + 0x58);
      lVar9 = *(long *)(param_1 + 0x60);
      _objc_retain(puVar8);
      if (1e-06 <= dVar12) {
        dVar14 = dVar12;
      }
      dVar15 = dVar15 - dVar14;
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      FUN_105346c04(dVar15,puVar8,&PTR____CFConstantStringClassReference_110dbfff8,
                    &PTR____CFConstantStringClassReference_110dd2c98);
      ppuVar6 = &PTR____CFConstantStringClassReference_110dab0d8;
      if ((bVar1 & 1) == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dad2d8;
      }
      FUN_105346c04(dVar15,puVar8,ppuVar6,&PTR____CFConstantStringClassReference_110dd2c98);
      dVar13 = dVar13 - dVar14;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      FUN_105346c04(dVar13,puVar8,&PTR____CFConstantStringClassReference_110dbfff8,
                    &PTR____CFConstantStringClassReference_110dd2cb8);
      FUN_105346c04(dVar13,puVar8,ppuVar6,&PTR____CFConstantStringClassReference_110dd2cb8);
      dVar18 = dVar18 - dVar14;
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      FUN_105346c04(dVar18,puVar8,&PTR____CFConstantStringClassReference_110dbfff8,
                    &PTR____CFConstantStringClassReference_110dd2cd8);
      FUN_105346c04(dVar18,puVar8,ppuVar6,&PTR____CFConstantStringClassReference_110dd2cd8);
      if ((bVar1 & 1) == 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110dad2d8;
        ppuVar6 = &PTR____CFConstantStringClassReference_110dbfff8;
      }
      else {
        uVar7 = lVar9 - 1;
        if (uVar7 < 3) {
          ppuVar6 = (undefined **)(&PTR_PTR_11087d0a8)[uVar7];
        }
        else {
          ppuVar6 = &PTR____CFConstantStringClassReference_110dd17f8;
        }
        ppuVar5 = &PTR____CFConstantStringClassReference_110dab0d8;
      }
      FUN_1053466d8(puVar8,ppuVar5,ppuVar6);
      if (1e-06 <= dVar17) {
        dVar17 = dVar17 - dVar14;
        if (dVar17 <= 0.0) {
          dVar17 = 0.0;
        }
        FUN_105346c04(dVar17,puVar8,&PTR____CFConstantStringClassReference_110dd2cf8,
                      &PTR____CFConstantStringClassReference_110dd2d18);
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2d38;
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2d58;
      }
      FUN_1053466d8(puVar8,&PTR____CFConstantStringClassReference_110dd2cf8,ppuVar6);
      if (1e-06 <= dVar16) {
        dVar16 = dVar16 - dVar14;
        if (dVar16 <= 0.0) {
          dVar16 = 0.0;
        }
        FUN_105346c04(dVar16,puVar8,&PTR____CFConstantStringClassReference_110dd2cf8,
                      &PTR____CFConstantStringClassReference_110dd2d78);
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2d98;
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2db8;
      }
      FUN_1053466d8(puVar8,&PTR____CFConstantStringClassReference_110dd2cf8,ppuVar6);
      if (1e-06 <= dVar11) {
        dVar11 = dVar11 - dVar14;
        if (dVar11 <= 0.0) {
          dVar11 = 0.0;
        }
        FUN_105346c04(dVar11,puVar8,&PTR____CFConstantStringClassReference_110dd2cf8,
                      &PTR____CFConstantStringClassReference_110dd2dd8);
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2df8;
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2e18;
      }
      FUN_1053466d8(puVar8,&PTR____CFConstantStringClassReference_110dd2cf8,ppuVar6);
      if (1e-06 <= dVar10) {
        dVar10 = dVar10 - dVar14;
        if (dVar10 <= 0.0) {
          dVar10 = 0.0;
        }
        FUN_105346c04(dVar10,puVar8,&PTR____CFConstantStringClassReference_110dd2cf8,
                      &PTR____CFConstantStringClassReference_110dd2e38);
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2e58;
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd2e78;
      }
      FUN_1053466d8(puVar8,&PTR____CFConstantStringClassReference_110dd2cf8,ppuVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  return;
}



/* Entry: 1053466d8; end: 1053467bb;  */

void FUN_1053466d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7890;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c27f300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010bf39920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053467bc; end: 105346877; -[SCCircumstanceEngineReadinessMetricEmitterImpl splashPageWillLoad] */

void FUN_1053467bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105346878; end: 1053468bb;  */

void FUN_105346878(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(double *)(lVar1 + 0x38) < 1e-06)) {
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053468bc; end: 105346977; -[SCCircumstanceEngineReadinessMetricEmitterImpl oneTapLoginPageWillLoad] */

void FUN_1053468bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105346978; end: 1053469bb;  */

void FUN_105346978(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(double *)(lVar1 + 0x48) < 1e-06)) {
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053469bc; end: 105346a77; -[SCCircumstanceEngineReadinessMetricEmitterImpl passwordLoginPageWillLoad] */

void FUN_1053469bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105346a78; end: 105346abb;  */

void FUN_105346a78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(double *)(lVar1 + 0x40) < 1e-06)) {
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105346abc; end: 105346b77; -[SCCircumstanceEngineReadinessMetricEmitterImpl signUpPageWillLoad] */

void FUN_105346abc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105346b78; end: 105346bbb;  */

void FUN_105346b78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(double *)(lVar1 + 0x50) < 1e-06)) {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105346bbc; end: 105346c03; -[SCCircumstanceEngineReadinessMetricEmitterImpl .cxx_destruct] */

void FUN_105346bbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105346c04; end: 105346cf7;  */

void FUN_105346c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7890;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c27f300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010bf39920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105346cf8; end: 105346d23; +[SCGrapheneCircumstanceEngineReadinessMetric unauthSync] */

void FUN_105346cf8(void)

{
  _objc_alloc(PTR_PTR_1126b7890);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105346d24; end: 105346dc3; -[SCGrapheneCircumstanceEngineReadinessMetric description] */

void FUN_105346d24(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2ef8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd2ef8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7968;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105346dc4; end: 105346f07; -[SCGrapheneRegistry circumstanceEngineReadinessGraphene] */

void FUN_105346dc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105346e4c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb548 != -1) {
    func_0x00010002a2fc(0x1136bb548,&puStack_48);
  }
  uVar1 = uRam00000001136bb540;
  _objc_retain(uRam00000001136bb540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105346f08; end: 105346f0f; -[SCDeviceMotionServicesImpl deviceOrientation] */

void FUN_105346f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_deviceOrientation_1125b9ce0);
  return;
}



/* Entry: 105346f10; end: 105346f17; -[SCDeviceMotionServicesImpl imageOrientation] */

void FUN_105346f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_imageOrientation_1125d7aa8);
  return;
}



/* Entry: 105346f18; end: 105346f1f; -[SCDeviceMotionServicesImpl acceleration] */

void FUN_105346f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_acceleration_112598bf0);
  return;
}



/* Entry: 105346f20; end: 105346f27; -[SCDeviceMotionServicesImpl accelerometerUpdateInterval] */

void FUN_105346f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_accelerometerUpdateInterval_112598c00);
  return;
}



/* Entry: 105346f28; end: 105346f2f; -[SCDeviceMotionServicesImpl currentDeviceMotion] */

void FUN_105346f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc4c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getDeviceMotion_1125cecc0);
  return;
}



/* Entry: 105346f30; end: 105346f37; -[SCDeviceMotionServicesImpl currentGyroData] */

void FUN_105346f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_getGyroData_1125cf230);
  return;
}



/* Entry: 105346f38; end: 105346f3f; -[SCDeviceMotionServicesImpl currentAccelerometerData] */

void FUN_105346f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getAccelerometerData_1125ce138);
  return;
}



/* Entry: 105346f40; end: 105346f47; -[SCDeviceMotionServicesImpl stopDeviceAccelerometerUpdatesWithToken:] */

void FUN_105346f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stopMonitoring__1126732b8);
  return;
}



/* Entry: 105346f48; end: 105346f4f; -[SCDeviceMotionServicesImpl configureDeviceAccelerometerUpdatesInterval:] */

void FUN_105346f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAccelerometerUpdateInterval__112635d20);
  return;
}



/* Entry: 105346f50; end: 105346f57; -[SCDeviceMotionServicesImpl isDeviceOrientationPossible:] */

void FUN_105346f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0708d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isDeviceOrientationPossible__1125f9c40);
  return;
}



/* Entry: 105346f58; end: 105346f5f; -[SCDeviceMotionServicesImpl startDeviceMotionUpdatesWithFrequency:] */

void FUN_105346f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startDeviceMotionUpdatesWithFreq_112671488);
  return;
}



/* Entry: 105346f60; end: 105346f67; -[SCDeviceMotionServicesImpl stopDeviceMotionUpdatesWithToken:] */

void FUN_105346f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stopDeviceMotionUpdates__1126731b8);
  return;
}


