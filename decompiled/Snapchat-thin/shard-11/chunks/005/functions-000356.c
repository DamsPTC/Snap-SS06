/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108687164; end: 10868718f;  */

void FUN_108687164(void)

{
  func_0x0001006a0a24();
  FUN_108687190();
  return;
}



/* Entry: 108687190; end: 1086871a3;  */

void FUN_108687190(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1086871bc();
    func_0x000108687bd4();
    return;
  }
  return;
}



/* Entry: 1086871a4; end: 1086871bb;  */

void FUN_1086871a4(void)

{
  FUN_1086871bc();
  func_0x000108687bd4();
  return;
}



/* Entry: 1086871bc; end: 108687423;  */

undefined8 * FUN_1086871bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108687424; end: 10868745b;  */

void FUN_108687424(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108687ae8();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10868745c; end: 108687503;  */

void FUN_10868745c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108687d50();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      FUN_108684178(unaff_x20 + 0x10);
    }
    func_0x000108687b8c();
  }
  return;
}



/* Entry: 108687504; end: 10868759f;  */

long FUN_108687504(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x000107c3219c();
  FUN_1086875a0();
  FUN_10868767c(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x18,unaff_x19 + 2);
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar3;
  *puStack_48 = uVar2;
  puStack_48 = puStack_48 + 3;
  FUN_1086875f0();
  lVar1 = unaff_x19[1];
  FUN_108687708(auStack_58);
  return lVar1;
}



/* Entry: 1086875a0; end: 1086875ef;  */

ulong FUN_1086875a0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - *param_1) / 0x18;
    uVar2 = uVar3 * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0x555555555555554 < uVar3) {
      uVar2 = 0xaaaaaaaaaaaaaaa;
    }
    return uVar2;
  }
  FUN_108687670();
  func_0x00010086d048();
  uVar3 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 1086875f0; end: 10868766f;  */

void FUN_1086875f0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010086d048();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108687670; end: 10868767b;  */

long * FUN_108687670(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000108687ac0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086876c8();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10868767c; end: 1086876e7;  */

long * FUN_10868767c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086876c8();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1086876e8; end: 108687707;  */

long * FUN_1086876e8(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  long *plVar1;
  long *unaff_x30;
  
  func_0x0001006998a4();
  if (!(bool)in_CY) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_108687734();
  if (*unaff_x30 != 0) {
    __ZdlPv();
  }
  return unaff_x30;
}



/* Entry: 108687708; end: 108687733;  */

long * FUN_108687708(long *param_1)

{
  FUN_108687734();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108687734; end: 108687757;  */

void FUN_108687734(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108687758; end: 108687787;  */

long FUN_108687758(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108687ae8();
  func_0x000108687c44();
  FUN_108687424(lVar1 + 0x30,param_2 + 0x30);
  return param_1;
}



/* Entry: 108687788; end: 10868779f;  */

void FUN_108687788(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086877a0; end: 10868789b;  */

void FUN_1086877a0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108687d50();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      FUN_1086840c4(unaff_x20 + 0x18);
    }
    func_0x000108687b8c();
  }
  return;
}



/* Entry: 10868789c; end: 1086878a7;  */

void FUN_10868789c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000108687ac0();
  func_0x000107c28288(param_1 + 3);
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x000107c28288(lVar2);
  }
  return;
}



/* Entry: 1086878a8; end: 108687973;  */

void FUN_1086878a8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c28288(param_1 + 3);
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x000107c28288(lVar2);
  }
  return;
}



/* Entry: 108687974; end: 10868798f;  */

void FUN_108687974(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x30;
  
  func_0x000108687ae8();
  func_0x000108687c44(param_1,param_2,unaff_x30);
  return;
}



/* Entry: 108687990; end: 10868799b;  */

long FUN_108687990(void)

{
  long unaff_x19;
  
  func_0x000108687ac0();
  func_0x000108687cc0();
  func_0x000104be1594(unaff_x19 + 0x18);
  func_0x000100292090();
  func_0x0001006994ec();
  return unaff_x19;
}



/* Entry: 10868799c; end: 1086879f7;  */

long FUN_10868799c(void)

{
  long unaff_x19;
  
  func_0x000108687cc0();
  func_0x000104be1594(unaff_x19 + 0x18);
  func_0x000100292090();
  func_0x0001006994ec();
  return unaff_x19;
}



/* Entry: 1086879f8; end: 108687a5f;  */

void FUN_1086879f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      lStack_30 = *(long *)(param_1 + 0x10);
      if (lStack_30 != 0) {
        FUN_108680148(lStack_30 + 0x68);
        func_0x000108687c80();
      }
    }
  }
  func_0x000107c28c90(&lStack_30);
  return;
}



/* Entry: 108687a60; end: 108687d5b;  */

void FUN_108687a60(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010055062c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108687d5c; end: 108687d8b;  */

undefined8 * FUN_108687d5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 108687d8c; end: 108687de7;  */

long FUN_108687d8c(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108687dd4);
  (*pcVar1)();
}



/* Entry: 108687de8; end: 10868814b;  */

void FUN_108687de8(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar5;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar6;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  long *plVar8;
  long unaff_x25;
  long lVar9;
  
  puVar3 = (undefined8 *)0x68;
  __Znwm();
  *puVar3 = FUN_108688bc0;
  puVar3[1] = FUN_108688e38;
  plVar8 = puVar3 + 4;
  *plVar8 = *param_4;
  puVar3[10] = param_2;
  puVar3[0xb] = param_3;
  *param_4 = 0;
  func_0x000107c322c8();
  func_0x000107c287c4(param_1,puVar3 + 2);
  func_0x000107c28838(puVar3 + 5,param_2 + 0x78,*(long *)(param_2 + 0x58) * 1000000);
  plVar1 = puVar3 + 6;
  plVar6 = puVar3 + 7;
  plVar4 = puVar3 + 5;
  func_0x000107c2886c(plVar6,plVar4,plVar8);
  *plVar1 = *plVar6;
  do {
    func_0x000107c32244();
  } while (extraout_w10 != 0);
  func_0x000107c32294(*plVar1);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0xc) = 0;
    func_0x00010868961c();
    lVar9 = *plVar4;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *plVar4;
    }
    plVar5 = (long *)(unaff_x25 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x000107c32258();
        plVar5 = extraout_x8_00;
        uVar2 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x00010868962c();
        plVar5 = extraout_x8;
        uVar2 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) goto LAB_10868805c;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar4 = plVar1;
  func_0x000107c28870();
  unaff_x25 = *plVar4;
  func_0x0001086896c4();
  func_0x000108689680();
  in_ZR = unaff_x25 == 1;
  if (!(bool)in_ZR) {
    *plVar1 = puVar3[5];
    do {
      func_0x000107c32244();
    } while (extraout_w10_02 != 0);
    func_0x000107c32294(*plVar1);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0xc) = 1;
      func_0x00010868961c();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(unaff_x25 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x000107c32258();
          plVar5 = extraout_x8_02;
          uVar2 = extraout_w10_04;
          uVar7 = extraout_w11_02;
        }
        else {
          func_0x00010868962c();
          plVar5 = extraout_x8_01;
          uVar2 = extraout_w10_03;
          uVar7 = extraout_w11_01;
        }
        if ((uVar7 & 1) != 0) goto LAB_10868805c;
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x000107c28834(plVar1);
    func_0x0001086896c4();
    puVar3[9] = *plVar8;
    if (*plVar8 != 0) {
      do {
        func_0x000107c32244();
      } while (extraout_w10_05 != 0);
    }
    (**(code **)(*(long *)puVar3[0xb] + 0x10))(puVar3 + 8,(long *)puVar3[0xb],puVar3 + 9);
    plVar4 = (long *)(puVar3[10] + 0x78);
    func_0x000107c2883c(plVar6,plVar4,puVar3 + 8);
    *plVar1 = *plVar6;
    do {
      func_0x000107c32244();
    } while (extraout_w10_06 != 0);
    func_0x000107c32294(*plVar1);
    if ((extraout_w8_01 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0xc) = 2;
      func_0x00010868961c();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar6 = (long *)(unaff_x25 + 0x10);
      do {
        if (*plVar6 == 0) {
          func_0x000107c32258();
          plVar6 = extraout_x8_04;
          uVar2 = extraout_w10_08;
          uVar7 = extraout_w11_04;
        }
        else {
          func_0x00010868962c();
          plVar6 = extraout_x8_03;
          uVar2 = extraout_w10_07;
          uVar7 = extraout_w11_03;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001086895ac();
          if ((bool)in_ZR) {
            func_0x00010868957c();
            func_0x00010868956c();
            func_0x000108689520();
            *(long **)(unaff_x25 + 0x90) = plVar4;
          }
          func_0x00010868959c();
          *(long *)(extraout_x8_06 + 0x20) = lVar9;
          goto code_r0x000100633f8c;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x000107c28834(plVar1);
    func_0x0001086896c4();
    func_0x000108689680();
    func_0x000108689668();
    func_0x0001086896a0();
  }
  func_0x000108689670();
  func_0x0001086895bc();
  func_0x0001086895f4();
  func_0x0001086896b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
LAB_10868805c:
  func_0x0001086895ac();
  if ((bool)in_ZR) {
    func_0x00010868957c();
    func_0x00010868956c();
    func_0x000108689520();
    *(long **)(unaff_x25 + 0x90) = plVar4;
  }
  func_0x00010868959c();
  *(long *)(extraout_x8_05 + 0x20) = lVar9;
code_r0x000100633f8c:
  func_0x00010868958c(*(undefined8 *)(unaff_x25 + 0x90));
  *(undefined8 *)(unaff_x25 + 0x10) = 0;
  return;
}



/* Entry: 10868814c; end: 10868815b;  */

void FUN_10868814c(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  iVar9 = (int)*(undefined8 *)(param_1 + 0x70) + 0x10;
  func_0x0001006716a8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x70) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar11 = *(long *)(param_1 + 0x70);
    if (*(char *)(lVar11 + 0xb8) == '\x01') {
      func_0x0001006716e8(lVar11 + 0x10);
      uVar10 = 0x10;
      func_0x000107c60e30(0x10);
      FUN_1086772d8();
      func_0x000107c60e54(uVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1006abc10);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar11 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar12 = *(ulong *)(lVar11 + 0xa0);
    uVar7 = 0;
    if (uVar12 != 0) {
      uVar7 = uVar2 / uVar12;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar2 - uVar7 * uVar12;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    *(undefined1 *)(*(long *)(lVar11 + 0xc0) + *(long *)(lVar11 + 0xd0) * lVar4) = 0;
    *pbVar1 = 0;
    func_0x0001006716e8(*(long *)(param_1 + 0x70) + 0x58);
  }
  return;
}



/* Entry: 10868815c; end: 1086882b7;  */

void FUN_10868815c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  FUN_1086882b8(param_2 + 0x70);
  (**(code **)(**(long **)(param_2 + 0x40) + 0x18))(auStack_48);
  (**(code **)(**(long **)(param_2 + 0x48) + 0x18))(auStack_50);
  (**(code **)(**(long **)(param_2 + 0x50) + 0x18))(auStack_58);
  FUN_108659ed0(auStack_60,param_2 + 0x78);
  FUN_10865b428(&uStack_38);
  FUN_10865b464(&uStack_40,4);
  uVar1 = uStack_40;
  uStack_40 = 0;
  FUN_10865b56c(lStack_28 + 0x18,uVar1);
  func_0x00010865b5d0(&uStack_40);
  *(undefined8 *)(lStack_28 + 8) = 4;
  func_0x000107c2887c(lStack_28,auStack_30);
  FUN_10865b4a4(lStack_28,0,auStack_48);
  FUN_108688b20(lStack_28,1,auStack_50,auStack_58,auStack_60);
  uVar1 = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  *param_1 = uVar1;
  func_0x000107c27f9c(&uStack_40);
  FUN_10865b628(&uStack_38);
  func_0x000107c27f9c(auStack_60);
  func_0x000107c322c4();
  func_0x000107c27f9c(auStack_50);
  func_0x000107c27f9c(auStack_48);
  return;
}



/* Entry: 1086882b8; end: 1086882c3;  */

/* WARNING: Possible PIC construction at 0x00010bcd3640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcd3644) */

void FUN_1086882b8(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  lVar6 = *param_1;
  if ((*(byte *)(lVar6 + 0xb8) & 1) != 0) {
    return;
  }
  *(byte *)(lVar6 + 0xb8) = 1;
  pbVar1 = (byte *)(lVar6 + 0x10);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  if (*(long *)(lVar6 + 0x50) != 0) {
    uVar7 = *(ulong *)(lVar6 + 0x48);
    puVar8 = (undefined8 *)((*(undefined8 **)(lVar6 + 0x30))[uVar7 / 0xaa] + (uVar7 % 0xaa) * 0x18);
    UNRECOVERED_JUMPTABLE = (code *)*puVar8;
    puVar3 = (undefined8 *)puVar8[1];
    plVar9 = (long *)puVar8[2];
    *(ulong *)(lVar6 + 0x48) = uVar7 + 1;
    *(long *)(lVar6 + 0x50) = *(long *)(lVar6 + 0x50) + -1;
    if (0x153 < uVar7 + 1) {
      func_0x000107c60e14(**(undefined8 **)(lVar6 + 0x30));
      *(long *)(lVar6 + 0x30) = *(long *)(lVar6 + 0x30) + 8;
      *(long *)(lVar6 + 0x48) = *(long *)(lVar6 + 0x48) + -0xaa;
    }
    *pbVar1 = 0;
    if (plVar9 == (long *)0x0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100671800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar3);
        return;
      }
      (*(code *)*puVar3)(puVar3);
    }
    else {
      (**(code **)(*plVar9 + 0x10))(plVar9,UNRECOVERED_JUMPTABLE,puVar3);
    }
    return;
  }
  *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
  *pbVar1 = 0;
  return;
}



/* Entry: 1086882c4; end: 1086882d7;  */

void FUN_1086882c4(void)

{
  FUN_10868838c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086882d8; end: 10868832b;  */

undefined8 * FUN_1086882d8(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110a62600;
  *param_1 = &PTR_FUN_110a62640;
  FUN_10865a95c(param_1 + 0xe);
  func_0x000107c28a38(param_1 + 0xd);
  func_0x000107c28a3c(param_1 + 0xc);
  FUN_108688418(param_1 + 9);
  FUN_108688418(param_1 + 8);
  FUN_108688418(param_1 + 7);
  func_0x000107c288a4(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  FUN_108687d5c(param_1);
  return param_1 + -1;
}



/* Entry: 10868832c; end: 10868833f;  */

void FUN_10868832c(void)

{
  FUN_108687d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108688340; end: 108688343;  */

void FUN_108688340(void)

{
  return;
}



/* Entry: 108688344; end: 10868836b;  */

undefined8 * FUN_108688344(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000107c27f98(param_1 + 1);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 10868836c; end: 10868838b;  */

void FUN_10868836c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_108688344();
  }
  return;
}



/* Entry: 10868838c; end: 108688417;  */

undefined8 * FUN_10868838c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a62600;
  param_1[1] = &PTR_FUN_110a62640;
  FUN_10865a95c(param_1 + 0xf);
  func_0x000107c28a38(param_1 + 0xe);
  func_0x000107c28a3c(param_1 + 0xd);
  FUN_108688418(param_1 + 10);
  FUN_108688418(param_1 + 9);
  FUN_108688418(param_1 + 8);
  func_0x000107c288a4(param_1 + 6);
  func_0x000107c28800(param_1 + 4);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 108688418; end: 10868844b;  */

long * FUN_108688418(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10868844c; end: 10868844f;  */

void FUN_10868844c(void)

{
  return;
}



/* Entry: 108688450; end: 108688477;  */

undefined8 * FUN_108688450(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000107c288ac(param_1 + 2);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 108688478; end: 108688527;  */

void FUN_108688478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *puVar1 = FUN_1086891e4;
  puVar1[1] = FUN_1086892f8;
  uVar2 = *param_1;
  puVar1[5] = param_1[1];
  puVar1[4] = uVar2;
  *param_1 = 0;
  puVar1[6] = param_1[2];
  param_1[2] = 0;
  FUN_108688734(puVar1 + 2);
  func_0x00010868977c();
  puVar1[7] = param_2;
  *(undefined1 *)(puVar1 + 9) = 0;
  func_0x000107c322e8(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108688528; end: 10868856b;  */

void FUN_108688528(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x000107c32244();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x000107c322c4();
  return;
}



/* Entry: 10868856c; end: 1086885eb;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */
/* WARNING: Removing unreachable block (ram,0x0001086885a4) */

void FUN_10868856c(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar6 = (long *)(param_1 + 8);
  lVar7 = *plVar6;
  do {
    iVar4 = (int)lVar7 + 0x10;
    func_0x00010868960c();
  } while (iVar4 == 0);
  *(undefined8 *)(lVar7 + 0x98) = *param_2;
  *(undefined1 *)(lVar7 + 0xa0) = 1;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  func_0x000107c31508(lVar7,plVar6);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 1086885ec; end: 108688733;  */

/* WARNING: Removing unreachable block (ram,0x0001086886b8) */

void FUN_1086885ec(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  func_0x000107c322d4();
  *param_1 = FUN_10868913c;
  param_1[1] = FUN_1086891c0;
  FUN_108688734(param_1 + 2);
  FUN_108688528();
  FUN_1086887cc(param_1 + 5);
  func_0x000107c32270();
  do {
    func_0x000107c32244();
  } while (extraout_w10 != 0);
  func_0x000107c32264();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    lVar5 = param_1[4];
    func_0x000107c32254();
    if (*unaff_x20 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c322e4();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000107c32258();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010868962c();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000107c32274();
        if ((bool)in_ZR) {
          func_0x00010868957c();
          func_0x000108689510();
          func_0x0001086894f4();
          *(long **)(lVar5 + 0x90) = unaff_x20;
        }
        func_0x000107c32228();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108689774();
  uVar6 = param_1[3];
  do {
    iVar2 = (int)uVar6 + 0x10;
    func_0x00010868960c();
  } while (iVar2 == 0);
  func_0x000108689638();
  func_0x000108689760();
  func_0x0001086895c4();
  func_0x0001086895bc();
  func_0x0001086895f4();
  func_0x000108689678();
  return;
}



/* Entry: 108688734; end: 1086887b3;  */

undefined8 * FUN_108688734(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar2 = puVar1;
  func_0x000107c31510();
  *puVar2 = &PTR_FUN_110a62750;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x14) = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  func_0x000107c27f98(&uStack_28);
  func_0x000107c27f9c(&uStack_40);
  *param_1 = puVar1;
  param_1[1] = puVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c27fec(&uStack_40);
  return param_1;
}



/* Entry: 1086887b4; end: 1086887b7;  */

undefined8 * FUN_1086887b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1086887b8; end: 1086887cb;  */

void FUN_1086887b8(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086887cc; end: 108688b1f;  */

void FUN_1086887cc(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined **ppuVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long lVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *plVar5;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  uint extraout_w10_09;
  uint extraout_w10_10;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  
  lVar7 = param_1[1];
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  *puVar2 = FUN_108688ea0;
  puVar2[1] = FUN_1086890f0;
  puVar2[9] = param_1;
  puVar2[10] = lVar7;
  FUN_108688734(puVar2 + 2);
  func_0x00010868977c();
  lVar4 = *param_1;
  plVar8 = puVar2 + 6;
  *plVar8 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000107c32244();
    } while (extraout_w10 != 0);
  }
  FUN_108687de8(puVar2 + 5,lVar7);
  func_0x000107c32270();
  do {
    func_0x000107c32244();
  } while (extraout_w10_00 != 0);
  func_0x000107c32264();
  ppuVar3 = &PTR___tlv_bootstrap_11340e278;
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0xb) = 0;
    plVar9 = (long *)puVar2[4];
    (*(code *)PTR___tlv_bootstrap_11340e278)();
    puVar10 = *ppuVar3;
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c3a5c0();
      puVar10 = *ppuVar3;
    }
    plVar5 = plVar9 + 2;
    do {
      if (*plVar5 == 0) {
        func_0x000107c32258();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_02;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x00010868962c();
        plVar5 = extraout_x8;
        uVar1 = extraout_w10_01;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001086895ac();
        if ((bool)in_ZR) {
          func_0x00010868957c();
          func_0x00010868956c();
          func_0x000108689520();
          plVar9[0x12] = (long)ppuVar3;
        }
        func_0x00010868959c();
        *(undefined **)(extraout_x8_07 + 0x20) = puVar10;
        func_0x00010868958c(plVar9[0x12]);
        plVar8 = plVar9;
        goto LAB_108688a98;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108689688();
  plVar9 = (long *)puVar2[9];
  func_0x0001086895c4();
  func_0x0001086895bc();
  func_0x0001086896a0();
  lVar4 = *plVar9;
  puVar2[7] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000107c32244();
    } while (extraout_w10_03 != 0);
  }
  plVar9 = (long *)puVar2[10];
  func_0x0001086897a0();
  func_0x000107c32270();
  do {
    func_0x000107c32244();
  } while (extraout_w10_04 != 0);
  func_0x000107c32264();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0xb) = 1;
    func_0x0001006bc1f0();
    lVar4 = *plVar9;
    if (lVar4 == 0) {
      func_0x000107c3a5c0();
      lVar4 = *plVar9;
    }
    func_0x000108689754();
    plVar9 = extraout_x8_01;
    do {
      if (*plVar9 == 0) {
        func_0x000107c32258();
        plVar9 = extraout_x8_03;
        uVar1 = extraout_w10_06;
        uVar6 = extraout_w11_02;
      }
      else {
        func_0x00010868962c();
        plVar9 = extraout_x8_02;
        uVar1 = extraout_w10_05;
        uVar6 = extraout_w11_01;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001086895ac();
        if ((bool)in_ZR) {
          func_0x00010868957c();
          func_0x000108689510();
          func_0x00010868953c();
          func_0x000108689744();
        }
        func_0x00010868959c();
        *(long *)(extraout_x8_08 + 0x20) = lVar4;
        goto LAB_108688a8c;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108689688();
  plVar9 = (long *)puVar2[9];
  plVar8 = (long *)puVar2[10];
  func_0x0001086895c4();
  func_0x0001086895bc();
  func_0x000108689660();
  lVar4 = *plVar9;
  puVar2[8] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000107c32244();
    } while (extraout_w10_07 != 0);
  }
  plVar9 = (long *)puVar2[10];
  func_0x000108689794();
  func_0x000107c32270();
  do {
    func_0x000107c32244();
  } while (extraout_w10_08 != 0);
  func_0x000107c32264();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0xb) = 2;
    func_0x0001006bc1f0();
    if (*plVar9 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108689754();
    plVar5 = extraout_x8_04;
    do {
      if (*plVar5 == 0) {
        func_0x000107c32258();
        plVar5 = extraout_x8_06;
        uVar1 = extraout_w10_10;
        uVar6 = extraout_w11_04;
      }
      else {
        func_0x00010868962c();
        plVar5 = extraout_x8_05;
        uVar1 = extraout_w10_09;
        uVar6 = extraout_w11_03;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001086897f8();
        if ((bool)in_ZR) {
          func_0x00010868957c();
          func_0x000108689510();
          func_0x0001086894f4();
          plVar8[0x12] = (long)plVar9;
        }
        func_0x0001086897d0();
LAB_108688a8c:
        func_0x00010868958c(plVar8[0x12]);
LAB_108688a98:
        plVar8[2] = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108689688();
  lVar4 = puVar2[10];
  func_0x0001086895c4();
  func_0x0001086895bc();
  func_0x000108689668();
  (**(code **)(**(long **)(lVar4 + 0x20) + 0x20))();
  func_0x000108689734();
  func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 108688b20; end: 108688b67;  */

void FUN_108688b20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10865b4a4();
  FUN_10865b4a4(param_1,param_2 + 1,param_4);
  FUN_10865b4a4(param_1,param_2 + 2,param_5);
  return;
}



/* Entry: 108688b68; end: 108688ba7;  */

void FUN_108688b68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10865b4a4();
  FUN_10865b4a4(param_1,param_2 + 1,param_4);
  return;
}



/* Entry: 108688ba8; end: 108688bbf;  */

void FUN_108688ba8(void)

{
  FUN_10865b4a4();
  return;
}



/* Entry: 108688bc0; end: 108688e37;  */

void FUN_108688bc0(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar7;
  long unaff_x24;
  
  plVar1 = (long *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x60) != '\x02') {
    uVar3 = *(char *)(param_1 + 0x60) == '\x01';
    if (!(bool)uVar3) {
      plVar4 = plVar1;
      func_0x000107c28870();
      unaff_x24 = *plVar4;
      func_0x000108689680();
      func_0x0001086896a0();
      if (unaff_x24 == 1) goto LAB_108688ccc;
      *plVar1 = *(long *)(param_1 + 0x28);
      uVar3 = 0;
      do {
        func_0x000107c32244();
      } while (extraout_w10_03 != 0);
      func_0x000107c32294(*plVar1);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        func_0x0001086896cc(1);
        lVar7 = *plVar4;
        if (lVar7 == 0) {
          func_0x000107c3a5c0();
          lVar7 = *plVar4;
        }
        plVar5 = (long *)(unaff_x24 + 0x10);
        do {
          if (*plVar5 == 0) {
            func_0x000107c32258();
            plVar5 = extraout_x8_02;
            uVar2 = extraout_w10_05;
            uVar6 = extraout_w11_02;
          }
          else {
            func_0x00010868962c();
            plVar5 = extraout_x8_01;
            uVar2 = extraout_w10_04;
            uVar6 = extraout_w11_01;
          }
          if ((uVar6 & 1) != 0) {
            func_0x0001086895ac();
            if ((bool)uVar3) {
              func_0x00010868957c();
              func_0x00010868956c();
              func_0x000108689520();
              *(long **)(unaff_x24 + 0x90) = plVar4;
            }
            func_0x00010868959c();
            *(long *)(extraout_x8_04 + 0x20) = lVar7;
            goto code_r0x000100633f8c;
          }
        } while ((uVar2 >> 1 & 1) == 0);
      }
    }
    func_0x000107c28834(plVar1);
    func_0x000108689680();
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x20) != 0) {
      do {
        func_0x000107c32244();
      } while (extraout_w10 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))
              (param_1 + 0x40,*(long **)(param_1 + 0x58),(long *)(param_1 + 0x48));
    plVar4 = (long *)(*(long *)(param_1 + 0x50) + 0x78);
    func_0x000107c2883c((long *)(param_1 + 0x38),plVar4,param_1 + 0x40);
    *plVar1 = *(long *)(param_1 + 0x38);
    do {
      func_0x000107c32244();
    } while (extraout_w10_00 != 0);
    func_0x000107c32294(*plVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001086896cc(2);
      lVar7 = *plVar4;
      if (lVar7 == 0) {
        func_0x000107c3a5c0();
        lVar7 = *plVar4;
      }
      plVar5 = (long *)(unaff_x24 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x000107c32258();
          plVar5 = extraout_x8_00;
          uVar2 = extraout_w10_02;
          uVar6 = extraout_w11_00;
        }
        else {
          func_0x00010868962c();
          plVar5 = extraout_x8;
          uVar2 = extraout_w10_01;
          uVar6 = extraout_w11;
        }
        if ((uVar6 & 1) != 0) {
          func_0x0001086895ac();
          if ((bool)uVar3) {
            func_0x00010868957c();
            func_0x00010868956c();
            func_0x000108689520();
            *(long **)(unaff_x24 + 0x90) = plVar4;
          }
          func_0x00010868959c();
          *(long *)(extraout_x8_03 + 0x20) = lVar7;
code_r0x000100633f8c:
          func_0x00010868958c(*(undefined8 *)(unaff_x24 + 0x90));
          *(undefined8 *)(unaff_x24 + 0x10) = 0;
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(plVar1);
  func_0x000108689680();
  func_0x0001086896a0();
  func_0x000108689668();
  func_0x0001086896b4();
LAB_108688ccc:
  func_0x000108689670();
  func_0x0001086895bc();
  func_0x0001086895f4();
  func_0x0001086895c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108688e38; end: 108688e9f;  */

void FUN_108688e38(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x30;
  lVar2 = lVar3;
  lVar1 = param_1 + 0x38;
  if (*(char *)(param_1 + 0x60) != '\0') {
    if (*(char *)(param_1 + 0x60) == '\x01') goto LAB_108688e84;
    lVar2 = param_1 + 0x40;
    func_0x000107c27f9c(lVar3);
    func_0x0001086896b4();
    lVar1 = param_1 + 0x48;
  }
  lVar3 = lVar1;
  func_0x000107c27f9c(lVar2);
LAB_108688e84:
  func_0x000107c27f9c(lVar3);
  func_0x0001086895bc();
  func_0x0001086895f4();
  func_0x0001086895c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108688ea0; end: 1086890ef;  */

void FUN_108688ea0(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  long lVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar5;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x58) != '\x02') {
    uVar2 = *(char *)(param_1 + 0x58) == '\x01';
    if (!(bool)uVar2) {
      func_0x000108689688();
      plVar3 = *(long **)(param_1 + 0x48);
      lVar7 = *(long *)(param_1 + 0x50);
      func_0x0001086895c4();
      func_0x0001086895bc();
      func_0x000108689714();
      lVar4 = *plVar3;
      *(long *)(param_1 + 0x38) = lVar4;
      if (lVar4 != 0) {
        do {
          func_0x000107c32244();
        } while (extraout_w10 != 0);
      }
      plVar3 = *(long **)(param_1 + 0x50);
      func_0x0001086897a0();
      func_0x000107c32270();
      do {
        func_0x000107c32244();
      } while (extraout_w10_00 != 0);
      func_0x000107c32264();
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x58) = 1;
        func_0x0001006bc1f0();
        lVar4 = *plVar3;
        if (lVar4 == 0) {
          func_0x000107c3a5c0();
          lVar4 = *plVar3;
        }
        func_0x000108689754();
        plVar3 = extraout_x8;
        do {
          if (*plVar3 == 0) {
            func_0x000107c32258();
            plVar3 = extraout_x8_01;
            uVar1 = extraout_w10_02;
            uVar6 = extraout_w11_00;
          }
          else {
            func_0x00010868962c();
            plVar3 = extraout_x8_00;
            uVar1 = extraout_w10_01;
            uVar6 = extraout_w11;
          }
          if ((uVar6 & 1) != 0) {
            func_0x0001086895ac();
            if ((bool)uVar2) {
              func_0x00010868957c();
              func_0x000108689510();
              func_0x00010868953c();
              func_0x000108689744();
            }
            func_0x00010868959c();
            *(long *)(extraout_x8_05 + 0x20) = lVar4;
            goto LAB_108689074;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
    }
    func_0x000108689688();
    plVar3 = *(long **)(param_1 + 0x48);
    lVar7 = *(long *)(param_1 + 0x50);
    func_0x0001086895c4();
    func_0x0001086895bc();
    func_0x000108689660();
    lVar4 = *plVar3;
    *(long *)(param_1 + 0x40) = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x000107c32244();
      } while (extraout_w10_03 != 0);
    }
    plVar3 = *(long **)(param_1 + 0x50);
    func_0x000108689794();
    func_0x000107c32270();
    do {
      func_0x000107c32244();
    } while (extraout_w10_04 != 0);
    func_0x000107c32264();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58) = 2;
      func_0x0001006bc1f0();
      if (*plVar3 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108689754();
      plVar5 = extraout_x8_02;
      do {
        if (*plVar5 == 0) {
          func_0x000107c32258();
          plVar5 = extraout_x8_04;
          uVar1 = extraout_w10_06;
          uVar6 = extraout_w11_02;
        }
        else {
          func_0x00010868962c();
          plVar5 = extraout_x8_03;
          uVar1 = extraout_w10_05;
          uVar6 = extraout_w11_01;
        }
        if ((uVar6 & 1) != 0) {
          func_0x0001086897f8();
          if ((bool)uVar2) {
            func_0x00010868957c();
            func_0x000108689510();
            func_0x0001086894f4();
            *(long **)(lVar7 + 0x90) = plVar3;
          }
          func_0x0001086897d0();
LAB_108689074:
          func_0x00010868958c(*(undefined8 *)(lVar7 + 0x90));
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108689688();
  lVar7 = *(long *)(param_1 + 0x50);
  func_0x0001086895c4();
  func_0x0001086895bc();
  func_0x000108689668();
  (**(code **)(**(long **)(lVar7 + 0x20) + 0x20))();
  func_0x000108689734();
  func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086890f0; end: 10868913b;  */

void FUN_1086890f0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x0001086895bc();
  func_0x000107c27f9c(param_1 + *(long *)(&UNK_10df41a30 + ((ulong)(bVar1 ^ 2) & 3) * 8));
  func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10868913c; end: 1086891bf;  */

/* WARNING: Removing unreachable block (ram,0x000108689180) */

void FUN_10868913c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_108687d8c(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  do {
    iVar1 = (int)uVar2 + 0x10;
    func_0x00010868960c();
  } while (iVar1 == 0);
  func_0x000108689638();
  func_0x000108689760();
  func_0x0001086895c4();
  func_0x0001086895bc();
  func_0x0001086895f4();
  func_0x000108689678();
  return;
}



/* Entry: 1086891c0; end: 1086891e3;  */

void FUN_1086891c0(void)

{
  func_0x0001086896a8();
  func_0x0001086895bc();
  func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086891e4; end: 1086892f7;  */

void FUN_1086891e4(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1086885ec(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    do {
      func_0x000107c32244();
    } while (extraout_w10 != 0);
    func_0x000107c32294(*(undefined8 *)(param_1 + 0x38));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      lVar5 = *(long *)(param_1 + 0x38);
      func_0x000107c32254();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c322e4();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x000107c32258();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010868962c();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000107c32274();
          if ((bool)in_ZR) {
            func_0x00010868957c();
            func_0x000108689510();
            func_0x0001086894f4();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000107c32228();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar5 = param_1 + 0x38;
  FUN_108687d8c(lVar5);
  FUN_10868856c(param_1 + 0x10,lVar5);
  func_0x000108689660();
  func_0x000108689668();
  func_0x0001086895f4();
  func_0x00010868971c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086892f8; end: 108689373;  */

void FUN_1086892f8(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000108689660();
    func_0x000108689668();
  }
  func_0x0001086895f4();
  func_0x00010868971c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108689374; end: 10868941f;  */

void FUN_108689374(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x0001086895c4();
  func_0x0001086895bc();
  func_0x000108689670();
  func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108689420; end: 108689443;  */

void FUN_108689420(void)

{
  func_0x0001086896a8();
  func_0x0001086895bc();
  func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108689444; end: 108689493;  */

void FUN_108689444(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x0001086895c4();
  func_0x0001086895bc();
  func_0x000108689670();
  func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108689494; end: 1086894f3;  */

void FUN_108689494(void)

{
  func_0x0001086896a8();
  func_0x0001086895bc();
  func_0x0001086895f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086894f4; end: 10868980b;  */

void FUN_1086894f4(undefined1 *param_1)

{
  long unaff_x22;
  undefined1 unaff_w23;
  
  *param_1 = unaff_w23;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 **)(unaff_x22 + 8) = param_1;
  return;
}



/* Entry: 10868980c; end: 1086898df;  */

void FUN_10868980c(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 auStack_60 [2];
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  lStack_68 = *param_3;
  if (lStack_68 != 0) {
    plVar1 = (long *)(lStack_68 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  uStack_78 = 0;
  lStack_70 = param_2;
  func_0x000107c288a8(auStack_60,param_2 + 0x78);
  lStack_48 = lStack_68;
  lStack_50 = lStack_70;
  uStack_40 = auStack_60[0];
  lStack_68 = 0;
  auStack_60[0] = 0;
  FUN_1086899a0(param_1,&lStack_50,uVar4);
  func_0x000108689974(&lStack_50);
  func_0x000108689974(&lStack_70);
  func_0x000107c27f9c(&uStack_78);
  return;
}



/* Entry: 1086898e0; end: 1086898eb;  */

void FUN_1086898e0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  iVar1 = (int)param_2 + 0xb8;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x78);
  }
  lVar2 = *(long *)(param_2 + 0xc0);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1086898ec; end: 1086898ff;  */

void FUN_1086898ec(void)

{
  FUN_108689900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108689900; end: 10868999f;  */

undefined8 * FUN_108689900(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a62878;
  func_0x000107c27a04(param_1 + 0x1b);
  FUN_10865a95c(param_1 + 0xf);
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c28a70(param_1 + 0xb);
  func_0x000107c28cc8(param_1 + 9);
  func_0x000107c28ab8(param_1 + 7);
  func_0x000107c28cc4(param_1 + 5);
  func_0x000107c28ab4(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 1086899a0; end: 108689a5b;  */

void FUN_1086899a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *puVar1 = FUN_108689fc0;
  puVar1[1] = FUN_10868a0f0;
  uVar2 = *param_2;
  puVar1[5] = param_2[1];
  puVar1[4] = uVar2;
  puVar1[6] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x000107c27f94(puVar1 + 2);
  func_0x000107c287c4(param_1,puVar1 + 2);
  puVar1[7] = param_3;
  *(undefined1 *)(puVar1 + 9) = 0;
  (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,0,puVar1);
  return;
}



/* Entry: 108689a5c; end: 108689bbf;  */

void FUN_108689a5c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  *puVar4 = FUN_108689f3c;
  puVar4[1] = FUN_108689f94;
  func_0x000107c27f94(puVar4 + 2);
  func_0x000107c287c4(param_1,puVar4 + 2);
  FUN_108689bc0(puVar4 + 5);
  puVar4[4] = puVar4[5];
  plVar1 = (long *)(puVar4[5] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar4[4] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 6) = 0;
    lVar5 = puVar4[4];
    func_0x00010868a1c0();
    if (*param_2 == 0) {
      func_0x000107c3a5c0();
    }
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      lVar5 = *plVar1;
      if (lVar5 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        bVar3 = cVar2 == '\0';
        if (bVar3) {
          func_0x00010868a220();
          if (bVar3) {
            func_0x00010868a1d0();
            func_0x00010868a1a0();
          }
          func_0x00010868a160();
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar5 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar4 + 4);
  func_0x00010868a1e8();
  func_0x00010868a18c();
  func_0x00010868a218();
  func_0x00010868a158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar4);
  return;
}



/* Entry: 108689bc0; end: 108689f3b;  */

void FUN_108689bc0(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 *apuStack_a0 [8];
  long *plStack_60;
  long *plStack_58;
  
  lVar10 = *param_2;
  func_0x000107c27f94(auStack_e8);
  puVar1 = auStack_e8;
  func_0x000107c287c4(param_1);
  uStack_d0 = 0;
  func_0x000107c28258();
  uStack_c0 = 1;
  plVar7 = (long *)(lVar10 + 0xd8);
  lVar5 = *plVar7;
  lVar6 = *(long *)(lVar10 + 0xe0);
  puStack_c8 = puVar1;
  if (lVar5 == lVar6) {
    FUN_10886e008(apuStack_a0,*(undefined8 *)(lVar10 + 8));
    func_0x000107c28904(plVar7,apuStack_a0);
    func_0x000107c27a04(apuStack_a0);
    lVar5 = *(long *)(lVar10 + 0xd8);
    lVar6 = *(long *)(lVar10 + 0xe0);
  }
  if (lVar5 != lVar6) {
    while ((*(long *)(lVar10 + 0xd8) != *(long *)(lVar10 + 0xe0) &&
           (((uint)*(undefined8 *)(param_2[1] + 0x10) >> 1 & 1) == 0))) {
      uVar8 = *(undefined8 *)(lVar10 + 0xd8);
      uVar9 = *(undefined8 *)(*(long *)(lVar10 + 8) + 0x18);
      func_0x000107c278b8(auStack_b8,&DAT_10f685720);
      func_0x000107c31420(apuStack_a0,uVar9,auStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
      uVar2 = *(ulong *)(lVar10 + 8);
      FUN_10886df1c(uVar2,uVar8);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)(lVar10 + 0x58);
        (**(code **)(*plVar3 + 0x10))(plVar3,uVar8);
        if (((ulong)plVar3 & 1) == 0) {
          plVar3 = *(long **)(lVar10 + 0x58);
          (**(code **)(*plVar3 + 0x18))(plVar3,uVar8);
          if (((ulong)plVar3 & 1) == 0) {
            uVar9 = *(undefined8 *)(lVar10 + 0x28);
            FUN_108705e60(uVar9,uVar8);
            FUN_108866aec(*(undefined8 *)(lVar10 + 8),uVar8);
            FUN_108866468(*(undefined8 *)(lVar10 + 8),uVar8);
            FUN_108868114(*(undefined8 *)(lVar10 + 8),uVar8);
            func_0x000107c31428(apuStack_a0);
            (**(code **)(**(long **)(lVar10 + 0x18) + 0xd8))(*(long **)(lVar10 + 0x18),uVar8,uVar9);
            (**(code **)(**(long **)(lVar10 + 0x38) + 0x38))(*(long **)(lVar10 + 0x38),uVar8);
            plVar3 = *(long **)(lVar10 + 0x48);
            (**(code **)(*plVar3 + 0x10))(&plStack_58,plVar3);
            (**(code **)(*plStack_58 + 0x30))(plStack_58,uVar8);
            plStack_60 = plStack_58;
            plStack_58 = (long *)0x0;
            (**(code **)(*plVar3 + 0x18))(plVar3,&plStack_60);
            plVar3 = plStack_60;
            plStack_60 = (long *)0x0;
            if (plVar3 != (long *)0x0) {
              func_0x00010868a14c();
            }
            plVar3 = plStack_58;
            plStack_58 = (long *)0x0;
            if (plVar3 != (long *)0x0) {
              func_0x00010868a14c();
            }
          }
        }
      }
      func_0x000107c31424(apuStack_a0);
      FUN_10867cba4(plVar7,*plVar7);
    }
    plVar7 = *(long **)(lVar10 + 0x68);
    puVar4 = &uStack_d0;
    func_0x000107c2825c();
    apuStack_a0[0] = puVar4;
    (**(code **)(*plVar7 + 0x10))(plVar7,0x281,apuStack_a0);
  }
  func_0x000107c287c8(auStack_e8);
  func_0x000107c27fb8(auStack_e8);
  return;
}



/* Entry: 108689f3c; end: 108689f93;  */

void FUN_108689f3c(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x00010868a1e8();
  func_0x00010868a18c();
  func_0x00010868a218();
  func_0x00010868a158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108689f94; end: 108689fbf;  */

void FUN_108689f94(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x00010868a18c();
  func_0x00010868a158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108689fc0; end: 10868a0ef;  */

void FUN_108689fc0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    plVar4 = (long *)(param_1 + 0x20);
    FUN_108689a5c(param_1 + 0x40);
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x40);
    plVar1 = (long *)(*(long *)(param_1 + 0x40) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      lVar5 = *(long *)(param_1 + 0x38);
      func_0x00010868a1c0();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      plVar4 = (long *)(lVar5 + 0x10);
      do {
        lVar5 = *plVar4;
        if (lVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar3 = cVar2 == '\0';
          if (bVar3) {
            func_0x00010868a220();
            if (bVar3) {
              func_0x00010868a1d0();
              func_0x00010868a1a0();
            }
            func_0x00010868a160();
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar5 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x38);
  func_0x00010868a210();
  func_0x00010868a1f0();
  func_0x00010868a218();
  func_0x00010868a158();
  func_0x000108689974(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10868a0f0; end: 10868a12b;  */

void FUN_10868a0f0(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010868a210();
    func_0x00010868a1f0();
  }
  func_0x00010868a158();
  func_0x000108689974(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10868a12c; end: 10868a233;  */

void FUN_10868a12c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10868a234; end: 10868a62b;  */

undefined8 *
FUN_10868a234(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,long *param_10,undefined8 *param_11,undefined8 *param_12)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a628c0;
  lVar5 = param_2[1];
  uVar7 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10 != 0);
  }
  lVar5 = param_3[1];
  uVar7 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10_00 != 0);
  }
  lVar5 = param_4[1];
  uVar7 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10_01 != 0);
  }
  lVar5 = param_5[1];
  uVar7 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10_02 != 0);
  }
  lVar5 = param_6[1];
  uVar7 = *param_6;
  param_1[0xc] = param_6[1];
  param_1[0xb] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010868e784();
      param_9 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  lVar5 = param_7[1];
  uVar7 = *param_7;
  param_1[0xe] = param_7[1];
  param_1[0xd] = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = param_9[1];
  uVar7 = *param_9;
  param_1[0x10] = param_9[1];
  param_1[0xf] = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = param_11[1];
  uVar7 = *param_11;
  param_1[0x12] = param_11[1];
  param_1[0x11] = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = param_12[1];
  uVar7 = *param_12;
  param_1[0x14] = param_12[1];
  param_1[0x13] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10_03 != 0);
  }
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  puVar3 = param_8;
  func_0x000107c28cd0();
  param_1[0x1f] = (long)puVar3 * 1000;
  plVar6 = (long *)*param_8;
  uVar4 = 0;
  func_0x00010868e924();
  func_0x00010868e764(*(undefined8 *)(*plVar6 + 0x18));
  if ((uVar4 & 1) == 0) {
    puVar3 = (undefined8 *)0x493e0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  param_1[0x20] = puVar3;
  plVar6 = (long *)*param_8;
  func_0x00010868e924();
  func_0x00010868e764(*(undefined8 *)(*plVar6 + 0x18));
  func_0x00010868e824();
  param_1[0x21] = plVar6;
  plVar6 = (long *)*param_8;
  func_0x00010868e924();
  func_0x00010868e764(*(undefined8 *)(*plVar6 + 0x18));
  func_0x00010868e824();
  param_1[0x22] = plVar6;
  puVar3 = param_8;
  FUN_1086934b8();
  param_1[0x23] = puVar3;
  puVar3 = param_8;
  func_0x000107c28cd4();
  *(char *)(param_1 + 0x24) = (char)puVar3;
  plVar6 = param_10;
  func_0x000107c28cd8();
  *(char *)((long)param_1 + 0x121) = (char)plVar6;
  func_0x000107c28cdc();
  *(char *)((long)param_1 + 0x122) = (char)param_8;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((long)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  plVar6 = param_10;
  FUN_10868a62c();
  if ((int)plVar6 != 0) {
    plVar6 = param_10;
    FUN_10868a640();
    *(int *)((long)param_1 + 0x124) = (int)plVar6;
    *(undefined1 *)(param_1 + 0x25) = 1;
    plVar6 = param_10;
    func_0x00010868a668();
    *(int *)((long)param_1 + 300) = (int)plVar6;
    *(undefined1 *)(param_1 + 0x26) = 1;
    lVar5 = 0;
    if (*param_10 != 0) {
      func_0x00010868e904(param_10,0xaa);
      lVar5 = (long)(int)param_10 * 1000;
    }
    param_1[0x1f] = lVar5;
  }
  return param_1;
}



/* Entry: 10868a62c; end: 10868a63f;  */

undefined1 * FUN_10868a62c(long *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    ppcVar2 = &pcStack_40;
    uStack_24 = 0xa8;
    func_0x0001004b538c(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      func_0x000107c60c94(&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        func_0x000107c60e80();
        *pcStack_40 = (char)ppcVar2;
      }
      func_0x00010054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (func_0x00010054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        func_0x00010054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10868a640; end: 10868a68f;  */

long * FUN_10868a640(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010868e904(param_1,0xa9);
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 10868a690; end: 10868a77f;  */

undefined8 * FUN_10868a690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a628c0;
  func_0x00010868a74c(param_1 + 0x27);
  func_0x00010868e72c();
  func_0x00010868e718();
  FUN_10868c870(param_1 + 0x2f);
  FUN_10868c870(param_1 + 0x2b);
  FUN_10868c870(param_1 + 0x27);
  FUN_10868c890(param_1 + 0x1c);
  func_0x0001006a2498(param_1 + 0x17);
  FUN_10868cd80(param_1 + 0x15);
  func_0x000107c28d38(param_1 + 0x13);
  func_0x000107c28d34(param_1 + 0x11);
  func_0x000107c28700(param_1 + 0xf);
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c27c20(param_1 + 0xb);
  func_0x000107c288e8(param_1 + 9);
  func_0x000107c2814c(param_1 + 7);
  func_0x000107c28800(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x00010868c9a0(param_1 + 1);
  return param_1;
}



/* Entry: 10868a780; end: 10868a783;  */

undefined8 * FUN_10868a780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a628c0;
  func_0x00010868a74c(param_1 + 0x27);
  func_0x00010868e72c();
  func_0x00010868e718();
  FUN_10868c870(param_1 + 0x2f);
  FUN_10868c870(param_1 + 0x2b);
  FUN_10868c870(param_1 + 0x27);
  FUN_10868c890(param_1 + 0x1c);
  func_0x0001006a2498(param_1 + 0x17);
  FUN_10868cd80(param_1 + 0x15);
  func_0x000107c28d38(param_1 + 0x13);
  func_0x000107c28d34(param_1 + 0x11);
  func_0x000107c28700(param_1 + 0xf);
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c27c20(param_1 + 0xb);
  func_0x000107c288e8(param_1 + 9);
  func_0x000107c2814c(param_1 + 7);
  func_0x000107c28800(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x00010868c9a0(param_1 + 1);
  return param_1;
}



/* Entry: 10868a784; end: 10868a797;  */

void FUN_10868a784(void)

{
  FUN_10868a690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10868a798; end: 10868a7df;  */

void FUN_10868a798(undefined8 param_1)

{
  undefined1 auStack_d8 [112];
  undefined1 auStack_68 [72];
  
  func_0x00010868e968(auStack_d8);
  func_0x000107c28d20(auStack_68);
  FUN_10868a7e0(param_1);
  FUN_10868a8f4(param_1);
  return;
}



/* Entry: 10868a7e0; end: 10868a8f3;  */

void FUN_10868a7e0(long param_1)

{
  long *plVar1;
  long alStack_788 [77];
  byte bStack_520;
  long alStack_518 [77];
  byte bStack_2b0;
  undefined1 auStack_2a8 [632];
  
  func_0x000107c28d70(param_1 + 0xb8);
  func_0x000107c2a054(auStack_2a8,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c28ce0(alStack_518,auStack_2a8);
  _bzero(alStack_788,0x270);
  while ((((bStack_2b0 & 1) != 0 || ((bStack_520 & 1) != 0)) && (alStack_518[0] != alStack_788[0])))
  {
    plVar1 = alStack_518;
    func_0x000107c28ce4();
    if ((((int)plVar1[0x13] == 0) && ((*(byte *)(plVar1 + 0x1f) & 1) == 0)) &&
       ((char)plVar1[0x17] == '\x01')) {
      FUN_10868afcc(param_1 + 0xb8,plVar1 + 0x14);
    }
    func_0x000107c28d78(alStack_518);
  }
  func_0x00010868e710(alStack_788);
  func_0x00010868e710(alStack_518);
  func_0x000107c28d4c(auStack_2a8);
  return;
}



/* Entry: 10868a8f4; end: 10868aa47;  */

void FUN_10868a8f4(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  ulong uVar6;
  ulong unaff_x28;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [616];
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  if (*(long *)(param_1 + 0x108) < 1) {
    FUN_10886c7c4(auStack_2d0,*(undefined8 *)(param_1 + 0x18));
    func_0x00010868e92c(&uStack_58);
    func_0x00010868e770();
    if ((*(long *)(param_1 + 0x110) < 1) ||
       (*(uint *)(param_1 + 0x134) < (uint)*(long *)(param_1 + 0x110))) {
      if (*(long *)(param_1 + 0x118) == 0) {
        func_0x00010868e700();
        (*extraout_x8)();
        cVar2 = uStack_50 <= uStack_58;
        if (uStack_58 == uStack_50) {
          cVar2 = '\0';
        }
        else {
          func_0x00010868e8d0();
        }
        lVar4 = param_1;
        FUN_10868bfcc();
        if (lVar4 < 1) {
          cVar2 = '\x01';
        }
        if (cVar2 == '\x01') {
          func_0x00010868e748();
          func_0x00010868e7dc();
        }
        else {
          func_0x00010868e6c0();
          FUN_10868c130(param_1,lVar4);
        }
      }
      else {
        func_0x00010868e9bc();
        FUN_10868b654();
      }
    }
    else {
      func_0x00010868e748();
    }
    func_0x00010868e81c();
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  FUN_10886c7c4(auStack_2c0);
  func_0x00010868e92c(&uStack_48);
  func_0x00010868e770();
  if ((*(long *)(param_1 + 0x110) < 1) ||
     (*(uint *)(param_1 + 0x134) < (uint)*(long *)(param_1 + 0x110))) {
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      FUN_10868b508(param_1,&uStack_48,0);
    }
    else {
      func_0x00010868e700();
      (*extraout_x8_00)();
      bVar3 = unaff_x28 <= uStack_48;
      if ((uStack_48 == unaff_x28) || (func_0x00010868e8d0(), !bVar3)) {
        func_0x00010868e6c0();
        for (uVar6 = uStack_48; uVar6 != unaff_x28; uVar6 = uVar6 + 0x260) {
          if ((*(byte *)(uVar6 + 0x88) & 1) == 0) {
            uVar1 = 0;
            if (*(ulong *)(uVar6 + 0x128) <= uVar5) {
              uVar1 = uVar5 - *(ulong *)(uVar6 + 0x128);
            }
            if (uVar1 < *(ulong *)(param_1 + 0xf8)) {
              func_0x00010868e718();
              FUN_10868c2cc(param_1,uStack_48,unaff_x28,uVar5,0);
              if ((uStack_48 & 1) != 0) {
                func_0x00010868e86c();
                FUN_10868c3c0();
              }
              goto LAB_10868bf38;
            }
          }
        }
        func_0x00010868e72c();
        FUN_10868c570(param_1);
      }
      else {
        func_0x00010868e748();
        func_0x00010868e72c();
        FUN_10868c570(param_1);
      }
    }
  }
  else {
    func_0x00010868e748();
  }
LAB_10868bf38:
  func_0x00010868e864();
  return;
}



/* Entry: 10868aa48; end: 10868aa7b;  */

void FUN_10868aa48(long param_1)

{
  FUN_10886cb70(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10868aa7c; end: 10868ab63;  */

void FUN_10868aa7c(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_4f8 [632];
  ulong uStack_280;
  ulong uStack_278;
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [64];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined8 uStack_1c8;
  undefined8 uStack_f8;
  undefined8 uStack_38;
  
  func_0x00010868e758();
  func_0x00010868e620();
  (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  func_0x00010868f78c();
  func_0x00010868e7ec();
  func_0x00010868e8c4();
  if (extraout_x8 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10 != 0);
  }
  func_0x00010868e8ac(FUN_10868ce2c);
  func_0x00010868e918();
  func_0x00010868e610();
  func_0x00010868e814();
  func_0x00010868e69c();
  while( true ) {
    func_0x00010868e5a0(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c32320();
    func_0x00010868e610();
    func_0x00010868e814();
    func_0x00010868e69c();
    in_ZR = unaff_w20 == 1;
    if (!(bool)in_ZR) break;
    func_0x00010868e734();
    ___cxa_end_catch();
  }
  func_0x00010868e640();
  func_0x00010868e758();
  func_0x00010868e620();
  plVar2 = *(long **)(unaff_x21 + 0x28);
  (**(code **)(*plVar2 + 0x10))();
  FUN_1086902a0();
  func_0x00010868e7ec();
  func_0x00010868e8c4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010868e8ac(FUN_10868ceac);
  func_0x00010868e918();
  func_0x00010868e610();
  func_0x00010868e814();
  func_0x00010868e69c();
  while( true ) {
    func_0x00010868e5a0(uStack_f8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c32320();
    func_0x00010868e610();
    func_0x00010868e814();
    func_0x00010868e69c();
    in_ZR = unaff_w20 == 1;
    if (!(bool)in_ZR) break;
    func_0x00010868e734();
    ___cxa_end_catch();
  }
  func_0x00010868e640();
  uStack_1c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uVar4 = *(undefined8 *)(plVar2[3] + 0x18);
  func_0x000107c278b8(auStack_268,&UNK_10f4b0504);
  func_0x000107c31420(auStack_250,uVar4,auStack_268);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
  func_0x000107c2a054(auStack_4f8,plVar2[3]);
  FUN_10868aee0(&uStack_280,auStack_4f8);
  func_0x000107c28d4c(auStack_4f8);
  for (uVar5 = uStack_280; uVar1 = uVar5 == uStack_278, !(bool)uVar1; uVar5 = uVar5 + 0x260) {
    if (*(char *)(uVar5 + 0x88) == '\x01') {
      if (*(int *)(uVar5 + 0x98) == 1) {
        FUN_10886be9c(plVar2[3],uVar5 + 0x38);
        if (*(char *)(uVar5 + 0x18) == '\x01') {
          func_0x000107c28840(&uStack_210,uVar5);
        }
      }
      else if (((*(int *)(uVar5 + 0x98) == 0) && (*(char *)(uVar5 + 0x18) == '\x01')) &&
              (uVar3 = uVar5, func_0x00010868f768(), (uVar3 & 1) == 0)) {
        FUN_108866b68(plVar2[3],uVar5);
        FUN_108868114(plVar2[3],uVar5);
        func_0x000107c28840(&uStack_1f8,uVar5);
        if (((*(byte *)(uVar5 + 0xf8) & 1) == 0) && (*(char *)(uVar5 + 0xb8) == '\x01')) {
          func_0x000107c27994(auStack_1e0,uVar5 + 0xa0);
          func_0x00010868c9c4(auStack_4f8,auStack_1e0,1);
          func_0x000107c27914(auStack_1e0);
          if (*(char *)((long)plVar2 + 0x122) == '\x01') {
            FUN_10886c5cc(plVar2[3],auStack_4f8);
          }
          else {
            FUN_10886c6cc(plVar2[3],auStack_4f8);
          }
          func_0x000107c28840(&uStack_210,uVar5 + 0xa0);
          func_0x000107c27a04(auStack_4f8);
        }
      }
    }
  }
  func_0x000107c31428(auStack_250);
  func_0x00010868c8fc(&uStack_280);
  func_0x000107c31424(auStack_250);
  while( true ) {
    func_0x000107c279ac(extraout_x8_01,&uStack_1f8);
    func_0x000107c279ac(extraout_x8_01 + 0x18,&uStack_210);
    func_0x000107c27a04(&uStack_210);
    func_0x000107c27a04(&uStack_1f8);
    func_0x00010868e5a0(uStack_1c8);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x00010868e758();
    func_0x000107c27914(auStack_1e0);
    func_0x00010868c8fc(&uStack_280);
    func_0x000107c31424(auStack_250);
    while (uVar1 = (int)uVar5 == 1, !(bool)uVar1) {
      func_0x000107c27a04(&uStack_210);
      func_0x000107c27a04(&uStack_1f8);
      func_0x00010868e6f8();
      func_0x00010868e758();
    }
    func_0x00010868e8f4();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10868ab64; end: 10868ac47;  */

void FUN_10868ab64(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int unaff_w20;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_438 [632];
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [64];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  undefined8 uStack_38;
  
  func_0x00010868e758();
  func_0x00010868e620();
  plVar2 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar2 + 0x10))();
  FUN_1086902a0();
  func_0x00010868e7ec();
  func_0x00010868e8c4();
  if (extraout_x8 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10 != 0);
  }
  func_0x00010868e8ac(FUN_10868ceac);
  func_0x00010868e918();
  func_0x00010868e610();
  func_0x00010868e814();
  func_0x00010868e69c();
  while( true ) {
    func_0x00010868e5a0(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c32320();
    func_0x00010868e610();
    func_0x00010868e814();
    func_0x00010868e69c();
    in_ZR = unaff_w20 == 1;
    if (!(bool)in_ZR) break;
    func_0x00010868e734();
    ___cxa_end_catch();
  }
  func_0x00010868e640();
  uStack_108 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uVar4 = *(undefined8 *)(plVar2[3] + 0x18);
  func_0x000107c278b8(auStack_1a8,&UNK_10f4b0504);
  func_0x000107c31420(auStack_190,uVar4,auStack_1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
  func_0x000107c2a054(auStack_438,plVar2[3]);
  FUN_10868aee0(&uStack_1c0,auStack_438);
  func_0x000107c28d4c(auStack_438);
  for (uVar5 = uStack_1c0; uVar1 = uVar5 == uStack_1b8, !(bool)uVar1; uVar5 = uVar5 + 0x260) {
    if (*(char *)(uVar5 + 0x88) == '\x01') {
      if (*(int *)(uVar5 + 0x98) == 1) {
        FUN_10886be9c(plVar2[3],uVar5 + 0x38);
        if (*(char *)(uVar5 + 0x18) == '\x01') {
          func_0x000107c28840(&uStack_150,uVar5);
        }
      }
      else if (((*(int *)(uVar5 + 0x98) == 0) && (*(char *)(uVar5 + 0x18) == '\x01')) &&
              (uVar3 = uVar5, FUN_10868f768(), (uVar3 & 1) == 0)) {
        FUN_108866b68(plVar2[3],uVar5);
        FUN_108868114(plVar2[3],uVar5);
        func_0x000107c28840(&uStack_138,uVar5);
        if (((*(byte *)(uVar5 + 0xf8) & 1) == 0) && (*(char *)(uVar5 + 0xb8) == '\x01')) {
          func_0x000107c27994(auStack_120,uVar5 + 0xa0);
          func_0x00010868c9c4(auStack_438,auStack_120,1);
          func_0x000107c27914(auStack_120);
          if (*(char *)((long)plVar2 + 0x122) == '\x01') {
            FUN_10886c5cc(plVar2[3],auStack_438);
          }
          else {
            FUN_10886c6cc(plVar2[3],auStack_438);
          }
          func_0x000107c28840(&uStack_150,uVar5 + 0xa0);
          func_0x000107c27a04(auStack_438);
        }
      }
    }
  }
  func_0x000107c31428(auStack_190);
  func_0x00010868c8fc(&uStack_1c0);
  func_0x000107c31424(auStack_190);
  while( true ) {
    func_0x000107c279ac(extraout_x8_00,&uStack_138);
    func_0x000107c279ac(extraout_x8_00 + 0x18,&uStack_150);
    func_0x000107c27a04(&uStack_150);
    func_0x000107c27a04(&uStack_138);
    func_0x00010868e5a0(uStack_108);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x00010868e758();
    func_0x000107c27914(auStack_120);
    func_0x00010868c8fc(&uStack_1c0);
    func_0x000107c31424(auStack_190);
    while (uVar1 = (int)uVar5 == 1, !(bool)uVar1) {
      func_0x000107c27a04(&uStack_150);
      func_0x000107c27a04(&uStack_138);
      func_0x00010868e6f8();
      func_0x00010868e758();
    }
    func_0x00010868e8f4();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10868ac48; end: 10868aedf;  */

void FUN_10868ac48(long param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_378 [632];
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18);
  func_0x000107c278b8(auStack_e8,&UNK_10f4b0504);
  func_0x000107c31420(auStack_d0,uVar3,auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x000107c2a054(auStack_378,*(undefined8 *)(param_2 + 0x18));
  FUN_10868aee0(&uStack_100,auStack_378);
  func_0x000107c28d4c(auStack_378);
  for (uVar4 = uStack_100; uVar1 = uVar4 == uStack_f8, !(bool)uVar1; uVar4 = uVar4 + 0x260) {
    if (*(char *)(uVar4 + 0x88) == '\x01') {
      if (*(int *)(uVar4 + 0x98) == 1) {
        FUN_10886be9c(*(undefined8 *)(param_2 + 0x18),uVar4 + 0x38);
        if (*(char *)(uVar4 + 0x18) == '\x01') {
          func_0x000107c28840(&uStack_90,uVar4);
        }
      }
      else if (((*(int *)(uVar4 + 0x98) == 0) && (*(char *)(uVar4 + 0x18) == '\x01')) &&
              (uVar2 = uVar4, FUN_10868f768(), (uVar2 & 1) == 0)) {
        FUN_108866b68(*(undefined8 *)(param_2 + 0x18),uVar4);
        FUN_108868114(*(undefined8 *)(param_2 + 0x18),uVar4);
        func_0x000107c28840(&uStack_78,uVar4);
        if (((*(byte *)(uVar4 + 0xf8) & 1) == 0) && (*(char *)(uVar4 + 0xb8) == '\x01')) {
          func_0x000107c27994(auStack_60,uVar4 + 0xa0);
          func_0x00010868c9c4(auStack_378,auStack_60,1);
          func_0x000107c27914(auStack_60);
          if (*(char *)(param_2 + 0x122) == '\x01') {
            FUN_10886c5cc(*(undefined8 *)(param_2 + 0x18),auStack_378);
          }
          else {
            FUN_10886c6cc(*(undefined8 *)(param_2 + 0x18),auStack_378);
          }
          func_0x000107c28840(&uStack_90,uVar4 + 0xa0);
          func_0x000107c27a04(auStack_378);
        }
      }
    }
  }
  func_0x000107c31428(auStack_d0);
  func_0x00010868c8fc(&uStack_100);
  func_0x000107c31424(auStack_d0);
  while( true ) {
    func_0x000107c279ac(param_1,&uStack_78);
    func_0x000107c279ac(param_1 + 0x18,&uStack_90);
    func_0x000107c27a04(&uStack_90);
    func_0x000107c27a04(&uStack_78);
    func_0x00010868e5a0(uStack_48);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x00010868e758();
    func_0x000107c27914(auStack_60);
    func_0x00010868c8fc(&uStack_100);
    func_0x000107c31424(auStack_d0);
    while (uVar1 = (int)uVar4 == 1, !(bool)uVar1) {
      func_0x000107c27a04(&uStack_90);
      func_0x000107c27a04(&uStack_78);
      func_0x00010868e6f8();
      func_0x00010868e758();
    }
    func_0x00010868e8f4();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10868aee0; end: 10868af8b;  */

void FUN_10868aee0(undefined8 param_1)

{
  undefined1 auStack_9f0 [624];
  undefined1 auStack_780 [624];
  undefined1 auStack_510 [624];
  undefined1 auStack_2a0 [624];
  
  func_0x000107c28ce0(auStack_510);
  FUN_10868d0f0(auStack_2a0,auStack_510);
  func_0x000107c32374();
  FUN_10868d0f0(auStack_780,auStack_9f0);
  FUN_10868d18c(param_1,auStack_2a0,auStack_780);
  func_0x00010868e8fc();
  func_0x00010868e710(auStack_9f0);
  func_0x000107c32354();
  func_0x00010868e710(auStack_510);
  return;
}



/* Entry: 10868af8c; end: 10868afcb;  */

void FUN_10868af8c(undefined1 *param_1,long param_2)

{
  param_2 = param_2 + 0xb8;
  FUN_10868d74c();
  if (param_2 != 0) {
    func_0x000107c27994(param_1,param_2 + 0x28);
    param_1[0x18] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10868afcc; end: 10868b01b;  */

undefined1  [16] FUN_10868afcc(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  FUN_10868d928(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    func_0x000107c27cfc(param_1 + 0x28,param_3);
  }
  auVar1._8_8_ = param_2 & 0xff;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10868b01c; end: 10868b04b;  */

undefined1  [16] FUN_10868b01c(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (((*(int *)(param_2 + 0x98) != 1) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) &&
     ((*(byte *)(param_2 + 0xb8) & 1) != 0)) {
    param_1 = param_1 + 0xb8;
    uVar1 = param_2 + 0xa0;
    FUN_10868d928(param_1,uVar1,uVar1,param_2);
    if ((uVar1 & 1) == 0) {
      func_0x000107c27cfc(param_1 + 0x28,param_2);
    }
    auVar2._8_8_ = uVar1 & 0xff;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10868b04c; end: 10868b0c7;  */

undefined8 * FUN_10868b04c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  
  puVar1 = param_1;
  if (((*(int *)(param_2 + 0x98) != 1) && (*(char *)(param_2 + 0xb8) == '\x01')) &&
     ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
    puVar2 = param_1 + 0x17;
    FUN_10868d74c(puVar2,param_2 + 0xa0);
    puVar1 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
      func_0x000107c28078(puVar1,param_2);
      if ((int)puVar1 != 0) {
        puVar2 = (undefined8 *)*puVar2;
        FUN_10868dea4(auStack_38,param_1 + 0x17);
        FUN_10868ddf0(auStack_38);
        return puVar2;
      }
    }
  }
  return puVar1;
}



/* Entry: 10868b0c8; end: 10868b247;  */

void FUN_10868b0c8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [632];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(param_1 + 0x108);
  if (0 < lVar3) {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (*(long *)(param_1 + 0x118) == 1) {
    bVar4 = 1;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x120);
    if (*(long *)(param_1 + 0x118) != 2) {
      bVar4 = 0;
    }
    bVar1 = lVar3 == 0;
    if ((lVar3 < 1) && ((bVar4 & 1) == 0)) {
      if (*(long *)(param_1 + 0x98) == 0) {
        return;
      }
      func_0x00010868e9c8();
      if (!bVar1) {
        return;
      }
      bVar4 = 0;
    }
  }
  FUN_10886c7c4(auStack_2d0,*(undefined8 *)(param_1 + 0x18));
  FUN_10868aee0(auStack_58,auStack_2d0);
  func_0x000107c28d4c(auStack_2d0);
  func_0x00010868e9bc();
  FUN_10868b248();
  if ((*(long *)(param_1 + 0xa8) != 0) && (lVar2 = *(long *)(param_1 + 0x98), lVar2 != 0)) {
    func_0x00010868e934(auStack_2e8);
    func_0x000107c29e04(auStack_2d0,auStack_2e8);
    FUN_108697e10(lVar2,auStack_2d0,2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
    func_0x000107c3233c();
  }
  if (lVar3 < 1) {
    if ((bVar4 & 1) != 0) {
      func_0x00010868e9bc();
      FUN_10868b654();
    }
  }
  else {
    func_0x00010868e9bc();
    FUN_10868b508();
  }
  func_0x00010868e81c();
  return;
}



/* Entry: 10868b248; end: 10868b507;  */

void FUN_10868b248(ulong param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  undefined1 in_ZR;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined1 auStack_3e8 [32];
  undefined1 auStack_3c8 [24];
  char cStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [16];
  ulong uStack_380;
  undefined1 uStack_378;
  undefined1 uStack_370;
  undefined1 auStack_338 [28];
  uint auStack_31c [5];
  byte bStack_308;
  uint auStack_2f0 [2];
  long lStack_2e8;
  undefined1 uStack_2e0;
  ulong uStack_2d8;
  byte bStack_2d0;
  ulong uStack_2c8;
  byte bStack_2c0;
  undefined1 auStack_2b8 [56];
  undefined1 auStack_280 [96];
  int iStack_220;
  undefined1 auStack_1f8 [24];
  char cStack_1e0;
  ulong uStack_190;
  uint auStack_16c [5];
  byte bStack_158;
  byte bStack_58;
  
  if ((*(long *)(param_1 + 0x98) != 0) && (func_0x00010868e9c8(), (bool)in_ZR)) {
    uVar5 = param_1;
    func_0x00010868e6cc();
    lVar9 = 0;
    bVar10 = false;
    auStack_2b8[0] = 0;
    bStack_58 = 0;
    lVar3 = param_2[1];
    for (lVar8 = *param_2; lVar8 != lVar3; lVar8 = lVar8 + 0x260) {
      if ((*(byte *)(lVar8 + 0x88) & 1) == 0) {
        uVar6 = *(ulong *)(lVar8 + 0x128);
        uVar1 = 0;
        if (uVar6 <= uVar5) {
          uVar1 = uVar5 - uVar6;
        }
        if (*(ulong *)(param_1 + 0xf8) <= uVar1) goto LAB_10868b320;
        lVar9 = lVar9 + 1;
        if ((bStack_58 != 1) ||
           (((iStack_220 == 1 && (*(int *)(lVar8 + 0x98) == 0)) ||
            (iStack_220 == *(int *)(lVar8 + 0x98) && uStack_190 < uVar6)))) {
          func_0x00010868c744(auStack_2b8,lVar8);
        }
      }
      else if (*(char *)(lVar8 + 0x21c) == '\x01' && *(int *)(lVar8 + 0x218) == 2) {
LAB_10868b320:
        bVar10 = true;
      }
    }
    if (((param_3 & 1) != 0) || ((bStack_58 & 1) != 0)) {
      uVar7 = 2;
      if (bVar10) {
        uVar7 = 3;
      }
      auStack_2f0[0] = (uint)(iStack_220 == 1);
      if (bStack_58 == 0) {
        auStack_2f0[0] = uVar7;
      }
      uStack_2e0 = 1;
      uStack_2d8 = uStack_2d8 & 0xffffffffffffff00;
      bStack_2d0 = 0;
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      bStack_2c0 = 0;
      lStack_2e8 = lVar9;
      func_0x00010868e978(&uStack_3a8);
      uStack_2d8 = uStack_380 & ((long)uStack_380 >> 0x3f ^ 0xffffffffffffffffU);
      bStack_2d0 = (byte)(uStack_380 >> 0x3f) ^ 1;
      bVar4 = bStack_58 & bStack_158;
      if ((bVar4 & 1) == 0) {
        bStack_158 = bStack_308;
      }
      if ((bStack_158 & 1) != 0) {
        puVar2 = auStack_16c;
        if ((bVar4 & 1) == 0) {
          puVar2 = auStack_31c;
        }
        uVar7 = *puVar2;
        uStack_2c8 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
        bStack_2c0 = (byte)~(byte)(uVar7 >> 0x18) >> 7;
      }
      func_0x000107c28d20(auStack_338);
      FUN_108697da0(*(undefined8 *)(param_1 + 0x98),auStack_2f0);
      if (bStack_58 == 1) {
        uStack_378 = 0;
        uStack_3a0 = 0;
        uStack_398 = 0;
        uStack_3a8 = 0;
        auStack_390[0] = 0;
        uStack_370 = iStack_220 == 1;
        if (cStack_1e0 == '\x01') {
          FUN_108843a84(auStack_3c8,auStack_1f8);
          if (cStack_3b0 == '\x01') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_3a8,auStack_3c8);
            FUN_108843a84(auStack_3e8,auStack_280);
            func_0x000107c27c54(auStack_390,auStack_3e8);
            func_0x000107c279a4(auStack_3e8);
          }
          func_0x000107c279a4(auStack_3c8);
        }
        func_0x000108697f48(*(undefined8 *)(param_1 + 0x98),&uStack_3a8);
        FUN_10868cd4c(&uStack_3a8);
      }
    }
    func_0x000107c28d30(auStack_2b8);
  }
  return;
}



/* Entry: 10868b508; end: 10868b653;  */

undefined1  [16] FUN_10868b508(long *param_1,ulong *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  long *plVar14;
  code *extraout_x8;
  long *plVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long *plVar16;
  long lVar17;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  ulong uVar18;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined8 uVar19;
  long unaff_x21;
  long *plVar20;
  undefined8 unaff_x22;
  ulong uVar21;
  uint uVar22;
  ulong *unaff_x23;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long alStack_340 [2];
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  long lStack_320;
  long lStack_318;
  undefined1 uStack_310;
  long lStack_308;
  long lStack_300;
  undefined1 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2d8;
  byte abStack_2b8 [264];
  long lStack_1b0;
  char cStack_1a8;
  undefined1 auStack_158 [20];
  float fStack_144;
  byte bStack_128;
  long *plStack_120;
  byte bStack_118;
  byte bStack_110;
  undefined1 auStack_108 [16];
  long lStack_f8;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [96];
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c32320();
  if (param_1[0x23] != 0) {
    func_0x00010868e7b0();
    plVar15 = param_1;
    func_0x00010868e6cc();
    plVar14 = (long *)*param_2;
    plVar8 = plVar14;
LAB_10868b68c:
    if (plVar8 != (long *)param_2[1]) {
      if ((*(byte *)(plVar8 + 0x11) & 1) != 0) goto LAB_10868b6b4;
      uVar21 = 0;
      if ((long *)plVar8[0x25] <= plVar15) {
        uVar21 = (long)plVar15 - plVar8[0x25];
      }
      uVar18 = param_1[0x1f];
      cVar4 = SBORROW8(uVar21,uVar18);
      cVar5 = (long)(uVar21 - uVar18) < 0;
      if (uVar18 <= uVar21) goto LAB_10868b6b4;
      func_0x00010868e6c0();
      func_0x00010868e9d4();
      if (cVar5 == cVar4) {
        func_0x00010868e718();
        func_0x00010868e67c();
        if (((ulong)plVar14 & 1) == 0) goto LAB_10868b830;
        func_0x00010868e86c();
        unaff_x29 = &stack0xfffffffffffffff0;
        func_0x00010868e5c4();
        func_0x00010868e89c();
        uVar7 = 0;
        if ((char)unaff_x19[0x2e] == '\x01') {
          uVar7 = (ulong *)unaff_x19[0x2d] == unaff_x20;
          if (unaff_x19[0x2d] <= (long)unaff_x20) goto LAB_10868c464;
          func_0x00010868e72c();
        }
        unaff_x21 = unaff_x19[0xb];
        plVar14 = (long *)unaff_x19[1];
        func_0x00010868e7ec();
        func_0x00010868e8c4();
        if (extraout_x8_02 != 0) {
          do {
            func_0x00010868e600();
          } while (extraout_w10_03 != 0);
        }
        func_0x00010868e79c(FUN_10868e010);
        func_0x00010868e654();
        func_0x00010868e5b4();
        func_0x00010868e794();
        func_0x00010868e69c();
        func_0x00010868e88c();
        if (extraout_x8_03 != 0) {
          do {
            func_0x00010868e600();
          } while (extraout_w10_04 != 0);
        }
        plVar15 = unaff_x19 + 0x2b;
        func_0x00010868e980();
        func_0x00010868e970();
        func_0x00010868e93c();
LAB_10868c464:
        func_0x00010868e5a0(unaff_x23);
        if ((bool)uVar7) goto LAB_10868e6e8;
        ___stack_chk_fail();
        unaff_x19 = plVar15;
        func_0x00010868e5b4();
        func_0x00010868e794();
        func_0x00010868e69c();
        unaff_x30 = FUN_10868c498;
        func_0x00010868e640();
        register0x00000008 = (BADSPACEBASE *)auStack_d0;
        plVar8 = plVar15;
        goto code_r0x00010868c498;
      }
      func_0x00010868e67c();
      if (((ulong)plVar14 & 1) == 0) goto LAB_10868b830;
      func_0x00010868e86c();
      func_0x00010868e5c4();
      func_0x00010868e89c();
      uVar7 = 0;
      if ((char)unaff_x19[0x2a] == '\x01') {
        uVar7 = (ulong *)unaff_x19[0x29] == unaff_x20;
        if (unaff_x19[0x29] <= (long)unaff_x20) goto LAB_10868c1e0;
        func_0x00010089b2d0(unaff_x19 + 0x27);
        FUN_10868caf4(unaff_x19 + 0x27);
      }
      unaff_x21 = unaff_x19[0xb];
      plVar14 = (long *)unaff_x19[1];
      func_0x00010868e7ec();
      func_0x00010868e8c4();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010868e600();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010868e79c(FUN_10868e060);
      func_0x00010868e654();
      func_0x00010868e5b4();
      func_0x00010868e794();
      func_0x00010868e69c();
      func_0x00010868e88c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010868e600();
        } while (extraout_w10_02 != 0);
      }
      plVar15 = unaff_x19 + 0x27;
      func_0x00010868e980();
      func_0x00010868e970();
      func_0x00010868e93c();
LAB_10868c1e0:
      func_0x00010868e5a0(unaff_x23);
      if (!(bool)uVar7) {
        ___stack_chk_fail();
        func_0x00010868e5b4();
        func_0x00010868e794();
        func_0x00010868e69c();
        func_0x00010868e640();
        pcStack_d8 = FUN_10868c214;
        lStack_f8 = unaff_x21;
        plStack_e8 = plVar15;
        puStack_e0 = &stack0xfffffffffffffff0;
        func_0x00010868e968(abStack_2b8 + 0xf0);
        uVar21 = 0;
        if (cStack_1a8 == '\x01') {
          uVar19 = 0;
          uVar18 = 0;
          if ((bStack_128 & 1) != 0) {
            plVar8 = (long *)((long)(fStack_144 * 1000.0) + lStack_1b0);
            uVar21 = (long)plVar8 - (long)plVar14;
            if (plVar8 < plVar14 || uVar21 == 0) {
              uVar21 = 0;
              uVar18 = 0;
            }
            else {
              uVar18 = uVar21 & 0xffffffffffffff00;
              uVar21 = uVar21 & 0xff;
            }
            uVar19 = 1;
          }
        }
        else {
          uVar19 = 0;
          uVar18 = 0;
        }
        func_0x000107c28d20(auStack_158);
        auVar24._0_8_ = uVar18 | uVar21;
        auVar24._8_8_ = uVar19;
        return auVar24;
      }
      goto LAB_10868e6e8;
    }
    func_0x00010868e978(auStack_108);
    func_0x00010868e7c8();
    uVar22 = (uint)bStack_110;
    cVar4 = SBORROW4(uVar22,1);
    cVar5 = (int)(uVar22 - 1) < 0;
    uVar7 = uVar22 == 1;
    if ((bool)uVar7) {
      if ((bStack_128 & 1) == 0) {
LAB_10868b720:
        plVar8 = (long *)*param_2;
        func_0x00010868e6c0();
        bVar1 = bStack_110 & bStack_118;
        func_0x00010868e67c();
        plVar9 = plVar15;
        plVar14 = plVar8;
        func_0x00010868e9d4();
        if (cVar5 == cVar4) {
          if (bVar1 == 0) {
            func_0x00010868e718();
          }
          else {
            plVar9 = param_1;
            FUN_10868c498(param_1,plStack_120);
            plVar14 = plStack_120;
          }
          if (((ulong)plVar8 & 1) != 0) {
            func_0x00010868e7b0();
            FUN_10868c3c0();
            plVar15 = plVar9;
            goto LAB_10868b82c;
          }
          lVar17 = 0x158;
LAB_10868b824:
          plVar15 = (long *)((long)param_1 + lVar17);
          func_0x00010868a74c(plVar15);
        }
        else {
          if (((ulong)plVar8 & 1) == 0) {
            if (bVar1 == 0) {
              lVar17 = 0x138;
              goto LAB_10868b824;
            }
          }
          else {
            if (bStack_110 == 0) {
              plStack_120 = (long *)0x0;
            }
            plVar8 = plVar15;
            if ((long)plStack_120 <= (long)plVar15) {
              plVar8 = plStack_120;
            }
            plStack_120 = plVar8;
            if (bVar1 == 0) {
              plStack_120 = plVar15;
            }
          }
          plVar14 = plStack_120;
          FUN_10868c130(param_1,plVar14);
          plVar15 = param_1;
        }
        goto LAB_10868b82c;
      }
    }
    else if (param_3 != 0) goto LAB_10868b720;
    plVar14 = (long *)*param_2;
    func_0x00010868e748();
    func_0x00010868e9d4();
    if (cVar5 == cVar4) {
      func_0x00010868e9e0();
      if ((bool)uVar7) {
        plVar8 = (long *)param_1[5];
        (**(code **)(*plVar8 + 0x20))();
        if (param_1[0x33] <= (long)plVar8) goto LAB_10868b710;
      }
      else {
LAB_10868b710:
        func_0x00010868e718();
      }
      lVar17 = 0x158;
    }
    else {
      lVar17 = 0x138;
    }
    plVar15 = (long *)((long)param_1 + lVar17);
    func_0x00010868a74c(plVar15);
    func_0x00010868e7dc();
LAB_10868b82c:
    func_0x00010868e6b4();
LAB_10868b830:
    auVar23._8_8_ = plVar14;
    auVar23._0_8_ = plVar15;
    return auVar23;
  }
  func_0x00010868e700();
  (*extraout_x8)();
  uVar21 = *unaff_x20;
  uVar18 = unaff_x20[1];
  if (uVar21 == uVar18) {
    plVar14 = unaff_x19;
    plVar15 = param_1;
    FUN_10868c214();
    uVar21 = *unaff_x20;
    uVar18 = unaff_x20[1];
    plVar8 = plVar14;
  }
  else {
    plVar14 = (long *)0x0;
    plVar15 = (long *)0x0;
    plVar8 = param_1;
  }
  if (((param_3 != 0) && (uVar21 == uVar18)) && (((ulong)plVar15 & 1) == 0)) {
    auVar28._8_8_ = uVar21;
    auVar28._0_8_ = plVar8;
    return auVar28;
  }
  plVar8 = unaff_x19;
  if (uVar21 == uVar18) {
    uVar7 = true;
    if (((ulong)plVar15 & 1) != 0) goto LAB_10868b5d8;
LAB_10868b610:
    func_0x00010868e9e0();
    if ((bool)uVar7) {
      lVar17 = unaff_x19[5];
      func_0x00010868e690();
      uVar7 = lVar17 == unaff_x19[0x33];
      if (unaff_x19[0x33] <= lVar17) goto LAB_10868b62c;
    }
    else {
LAB_10868b62c:
      func_0x00010868e718();
    }
    func_0x00010868e72c();
    plVar14 = (long *)*unaff_x20;
    func_0x00010868e748();
    uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar15 = unaff_x19 + 0x15;
    if (*plVar15 != 0) {
      plVar9 = unaff_x19;
      if (unaff_x19[0x13] == 0) goto LAB_10868bcac;
      func_0x00010868e9c8();
      if (!(bool)uVar7) goto LAB_10868bcac;
      FUN_10886c7c4(&lStack_2f0,unaff_x19[3]);
      func_0x00010868e944();
      func_0x00010868e844();
      func_0x00010868e83c();
      func_0x00010868e85c();
      plVar15 = (long *)unaff_x19[0x13];
      func_0x00010868e934(unaff_x19[0x15],&lStack_308);
      func_0x00010868e950();
      plVar14 = &lStack_2f0;
      plVar9 = plVar15;
      FUN_108697e10(plVar15,plVar14,2);
      func_0x00010868e854();
      func_0x00010868e834();
      goto LAB_10868bcac;
    }
    uVar7 = unaff_x19[0x21] == 1;
    if ((unaff_x19[0x21] < 1) || (uVar7 = (char)unaff_x19[0x34] == '\x01', !(bool)uVar7)) {
LAB_10868bad4:
      unaff_x23 = (ulong *)(unaff_x19 + 0x13);
      if (*unaff_x23 == 0) goto LAB_10868bb04;
      func_0x00010868e9c8();
      if (!(bool)uVar7) goto LAB_10868bb04;
      FUN_10886c7c4(&lStack_2f0,unaff_x19[3]);
      func_0x00010868e944();
      func_0x00010868e844();
      func_0x00010868e83c();
      func_0x00010868e85c();
      goto LAB_10868bb04;
    }
    plVar9 = (long *)unaff_x19[5];
    func_0x00010868e690();
    uVar21 = unaff_x19[0x33] - (long)plVar9;
    if (uVar21 == 0 || unaff_x19[0x33] < (long)plVar9) {
      uVar7 = (char)unaff_x19[0x34] == '\x01';
      if ((bool)uVar7) {
        *(undefined1 *)(unaff_x19 + 0x34) = 0;
      }
      goto LAB_10868bad4;
    }
    plVar14 = (long *)(uVar21 / 1000000);
    bVar6 = (long)plVar14 * 1000000 - uVar21 == 0;
    if ((long)plVar14 * 1000000 < (long)uVar21) {
      plVar14 = (long *)((long)plVar14 + 1);
    }
    func_0x00010868e5a0(uStack_58);
    if (!bVar6) {
      do {
        iVar13 = (int)plVar14;
        ___stack_chk_fail();
        func_0x00010868e83c();
        func_0x00010868e85c();
        uVar7 = iVar13 == 2;
        if ((bool)uVar7) {
          func_0x00010868e7e4();
          ___cxa_end_catch();
        }
        else {
          uVar7 = iVar13 == 1;
          if (!(bool)uVar7) {
            do {
              __Unwind_Resume(plVar9);
            } while( true );
          }
          func_0x00010868e7e4();
          ___cxa_end_catch();
        }
LAB_10868bb04:
        lVar17 = unaff_x19[0x35];
        func_0x00010868cdcc(&lStack_2f0,unaff_x19[1],unaff_x19[2]);
        lStack_318 = lStack_2e8;
        lStack_320 = lStack_2f0;
        if (lStack_2e8 != 0) {
          do {
            func_0x00010868e600();
          } while (extraout_w10 != 0);
        }
        uStack_310 = (char)lVar17;
        func_0x00010868ce08(&lStack_2f0);
        lVar17 = unaff_x19[3];
        FUN_108866e6c(lVar17,0);
        lVar10 = unaff_x19[3];
        FUN_108866ef8(lVar10,0);
        lVar11 = unaff_x19[3];
        FUN_108867778(lVar11,0);
        uStack_32c = (undefined4)lVar17;
        uStack_328 = (undefined4)lVar10;
        uStack_324 = (undefined4)lVar11;
        FUN_10868e0cc(auStack_70,1);
        puVar3 = puStack_60;
        lVar10 = lStack_318;
        lVar17 = lStack_320;
        puStack_60[2] = 0;
        *puStack_60 = &PTR_FUN_110a62a10;
        puStack_60[1] = 0;
        lStack_308 = lStack_320;
        lStack_300 = lStack_318;
        if (lStack_318 != 0) {
          do {
            func_0x00010868e600();
          } while (extraout_w10_00 != 0);
        }
        uVar2 = uStack_310;
        uStack_2f8 = uStack_310;
        puStack_2d8 = (undefined8 *)0x0;
        puVar12 = (undefined8 *)0x20;
        __Znwm();
        *puVar12 = &PTR_FUN_110a62a60;
        puVar12[1] = lVar17;
        puVar12[2] = lVar10;
        lStack_308 = 0;
        lStack_300 = 0;
        *(undefined1 *)(puVar12 + 3) = uVar2;
        puStack_2d8 = puVar12;
        FUN_1086936a4(puVar3 + 3,unaff_x19 + 0xf,unaff_x19 + 9,unaff_x19 + 0xb,unaff_x19 + 7,
                      unaff_x19 + 5,unaff_x19 + 0xd,0xb,&lStack_2f0,&uStack_32c,unaff_x19 + 0x11,
                      unaff_x23);
        FUN_10868e450(&lStack_2f0);
        func_0x00010868c9a0(&lStack_308);
        puVar3 = puStack_60;
        puStack_60 = (undefined8 *)0x0;
        func_0x00010868e0b0(alStack_340,puVar3 + 3);
        func_0x00010868e57c(auStack_70);
        plVar14 = alStack_340;
        func_0x00010868c708(plVar15);
        func_0x00010868cd80(alStack_340);
        unaff_x19 = (long *)*unaff_x23;
        if (unaff_x19 != (long *)0x0) {
          func_0x00010868e934(*plVar15,&lStack_308);
          func_0x00010868e950();
          plVar14 = &lStack_2f0;
          FUN_108697e10(unaff_x19,plVar14,1);
          func_0x00010868e854();
          func_0x00010868e834();
        }
        FUN_1086938d4(*plVar15);
        plVar9 = &lStack_320;
        func_0x00010868c9a0();
LAB_10868bcac:
        func_0x00010868e5a0(uStack_58);
      } while (!(bool)uVar7);
      auVar26._8_8_ = plVar14;
      auVar26._0_8_ = plVar9;
      return auVar26;
    }
  }
  else {
    uVar18 = 0;
    if (*(long **)(uVar21 + 0x128) <= param_1) {
      uVar18 = (long)param_1 - (long)*(long **)(uVar21 + 0x128);
    }
    uVar21 = unaff_x19[0x1f];
    plVar14 = unaff_x19;
    FUN_10868bfcc();
    uVar7 = uVar18 == uVar21;
    if (uVar21 <= uVar18) goto LAB_10868b610;
LAB_10868b5d8:
    uVar7 = plVar14 == (long *)0x0;
    if ((long)plVar14 < 1) goto LAB_10868b610;
    FUN_10868c0e0();
    func_0x00010868e72c();
  }
code_r0x00010868c498:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = plVar8;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010868e5c4();
  func_0x00010868e89c();
  uVar7 = (char)plVar8[0x32] == '\x01';
  if ((bool)uVar7) {
    uVar7 = (ulong *)plVar8[0x31] == unaff_x20;
    plVar15 = unaff_x19;
    if ((long)unaff_x20 < plVar8[0x31]) {
      func_0x00010868e718();
      goto LAB_10868c4d0;
    }
  }
  else {
LAB_10868c4d0:
    unaff_x21 = plVar8[0xb];
    plVar14 = (long *)plVar8[1];
    func_0x00010868e7ec();
    func_0x00010868e8c4();
    if (extraout_x8_04 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10_05 != 0);
    }
    func_0x00010868e79c(FUN_10868dfc0);
    func_0x00010868e654();
    func_0x00010868e5b4();
    func_0x00010868e794();
    func_0x00010868e69c();
    func_0x00010868e88c();
    if (extraout_x8_05 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10_06 != 0);
    }
    *(ulong **)((long)register0x00000008 + -0x90) = unaff_x20;
    plVar15 = plVar8 + 0x2f;
    func_0x00010868e980();
    func_0x00010868e970();
    func_0x00010868e93c();
  }
  func_0x00010868e5a0(*(undefined8 *)((long)register0x00000008 + -0x38));
  if ((bool)uVar7) {
LAB_10868e6e8:
    auVar27._8_8_ = plVar14;
    auVar27._0_8_ = plVar15;
    return auVar27;
  }
  ___stack_chk_fail();
  plVar8 = plVar15;
  func_0x00010868e5b4();
  func_0x00010868e794();
  func_0x00010868e69c();
  func_0x00010868e640();
  *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x22;
  *(long *)((long)register0x00000008 + -0xf8) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0xf0) = unaff_x20;
  *(long **)((long)register0x00000008 + -0xe8) = plVar15;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0xd8) = FUN_10868c570;
  plVar15 = plVar8;
  func_0x00010868e968((undefined1 *)((long)register0x00000008 + -0x1c8));
  lVar17 = *(long *)((long)register0x00000008 + -0x198);
  if (*(char *)((long)register0x00000008 + -400) == '\0') {
    lVar17 = 0;
  }
  func_0x00010868e700();
  (*extraout_x8_06)();
  if (plVar8[0x23] == 0) {
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
    plVar14 = (long *)0x0;
    plVar20 = plVar8;
    FUN_10868bfcc(plVar8,0,0,plVar15);
    plVar9 = (long *)((long)register0x00000008 + -0x1e8);
    func_0x00010868c8fc(plVar9);
  }
  else {
    plVar9 = plVar15;
    func_0x00010868e7c8();
    plVar20 = (long *)0x0;
    if ((*(char *)((long)register0x00000008 + -0x1d0) == '\x01') &&
       ((*(byte *)((long)register0x00000008 + -0x1e8) & 1) == 0)) {
      if ((*(byte *)((long)register0x00000008 + -0x1d8) & 1) == 0) {
        func_0x00010868e718();
        goto LAB_10868c674;
      }
      plVar20 = *(long **)((long)register0x00000008 + -0x1e0);
    }
  }
  if ((long *)(lVar17 + -1) < plVar15) {
    plVar16 = (long *)(lVar17 + plVar8[0x21] * 1000);
    plVar14 = (long *)0x0;
    if (plVar15 <= plVar16) {
      plVar14 = (long *)((long)plVar16 - (long)plVar15);
    }
    if ((long)plVar14 <= (long)plVar20) {
      plVar14 = plVar20;
    }
    if ((long)plVar14 < 1) {
      func_0x00010868e7dc();
    }
    else {
      FUN_10868c498(plVar8);
      plVar9 = plVar8;
    }
  }
  else if ((long)plVar20 < 1) {
    func_0x00010868e7dc();
  }
  else {
    FUN_10868c498(plVar8,plVar20);
    plVar9 = plVar8;
    plVar14 = plVar20;
  }
LAB_10868c674:
  func_0x00010868e6b4();
  auVar25._8_8_ = plVar14;
  auVar25._0_8_ = plVar9;
  return auVar25;
LAB_10868b6b4:
  plVar8 = plVar8 + 0x4c;
  goto LAB_10868b68c;
}



/* Entry: 10868b654; end: 10868b863;  */

undefined1  [16] FUN_10868b654(ulong *param_1,long *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  ulong *puVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  ulong uVar13;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar14;
  ulong unaff_x21;
  ulong uVar15;
  uint uVar16;
  undefined8 unaff_x23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uStack_2b8;
  ulong *puStack_2b0;
  ulong uStack_2a8;
  char cStack_2a0;
  undefined1 auStack_298 [48];
  long lStack_268;
  char cStack_260;
  ulong auStack_1c8 [2];
  ulong *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 auStack_158 [20];
  float fStack_144;
  byte bStack_128;
  ulong *puStack_120;
  byte bStack_118;
  byte bStack_110;
  undefined8 auStack_108 [2];
  ulong uStack_f8;
  ulong *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  
  puVar5 = param_1;
  func_0x00010868e6cc();
  puVar10 = (ulong *)*param_2;
  for (puVar8 = puVar10; puVar8 != (ulong *)param_2[1]; puVar8 = puVar8 + 0x4c) {
    if ((puVar8[0x11] & 1) == 0) {
      uVar15 = 0;
      if ((ulong *)puVar8[0x25] <= puVar5) {
        uVar15 = (long)puVar5 - (long)puVar8[0x25];
      }
      uVar13 = param_1[0x1f];
      cVar2 = SBORROW8(uVar15,uVar13);
      cVar3 = (long)(uVar15 - uVar13) < 0;
      if (uVar15 < uVar13) {
        func_0x00010868e6c0();
        func_0x00010868e9d4();
        if (cVar3 == cVar2) {
          func_0x00010868e718();
          func_0x00010868e67c();
          if (((ulong)puVar10 & 1) == 0) goto LAB_10868b830;
          func_0x00010868e86c();
          func_0x00010868e5c4();
          func_0x00010868e89c();
          uVar4 = 0;
          if (*(char *)(unaff_x19 + 0x170) == '\x01') {
            uVar4 = *(ulong *)(unaff_x19 + 0x168) == unaff_x20;
            if ((long)*(ulong *)(unaff_x19 + 0x168) <= (long)unaff_x20) goto LAB_10868c464;
            func_0x00010868e72c();
          }
          unaff_x21 = *(ulong *)(unaff_x19 + 0x58);
          puVar10 = *(ulong **)(unaff_x19 + 8);
          func_0x00010868e7ec();
          func_0x00010868e8c4();
          if (extraout_x8_01 != 0) {
            do {
              func_0x00010868e600();
            } while (extraout_w10_01 != 0);
          }
          func_0x00010868e79c(FUN_10868e010);
          func_0x00010868e654();
          func_0x00010868e5b4();
          func_0x00010868e794();
          func_0x00010868e69c();
          func_0x00010868e88c();
          if (extraout_x8_02 != 0) {
            do {
              func_0x00010868e600();
            } while (extraout_w10_02 != 0);
          }
          puVar5 = (ulong *)(unaff_x19 + 0x158);
          func_0x00010868e980();
          func_0x00010868e970();
          func_0x00010868e93c();
LAB_10868c464:
          func_0x00010868e5a0(unaff_x23);
          puVar8 = puVar5;
          if ((bool)uVar4) goto LAB_10868e6e8;
          ___stack_chk_fail();
          puVar8 = puVar5;
          func_0x00010868e5b4();
          func_0x00010868e794();
          func_0x00010868e69c();
          func_0x00010868e640();
          pcStack_d8 = FUN_10868c498;
          uStack_f8 = unaff_x21;
          puStack_e8 = puVar5;
          puStack_e0 = &stack0xfffffffffffffff0;
          func_0x00010868e5c4();
          func_0x00010868e89c();
          uVar4 = (char)puVar5[0x32] == '\x01';
          if ((bool)uVar4) {
            uVar4 = puVar5[0x31] == unaff_x20;
            if ((long)unaff_x20 < (long)puVar5[0x31]) {
              func_0x00010868e718();
              goto LAB_10868c4d0;
            }
          }
          else {
LAB_10868c4d0:
            unaff_x21 = puVar5[0xb];
            puVar10 = (ulong *)puVar5[1];
            func_0x00010868e7ec();
            func_0x00010868e8c4();
            if (extraout_x8_03 != 0) {
              do {
                func_0x00010868e600();
              } while (extraout_w10_03 != 0);
            }
            func_0x00010868e79c(FUN_10868dfc0);
            func_0x00010868e654();
            func_0x00010868e5b4();
            func_0x00010868e794();
            func_0x00010868e69c();
            func_0x00010868e88c();
            if (extraout_x8_04 != 0) {
              do {
                func_0x00010868e600();
              } while (extraout_w10_04 != 0);
            }
            puVar8 = puVar5 + 0x2f;
            func_0x00010868e980();
            func_0x00010868e970();
            func_0x00010868e93c();
          }
          func_0x00010868e5a0(auStack_108[0]);
          if ((bool)uVar4) {
LAB_10868e6e8:
            auVar20._8_8_ = puVar10;
            auVar20._0_8_ = puVar8;
            return auVar20;
          }
          ___stack_chk_fail();
          puVar5 = puVar8;
          func_0x00010868e5b4();
          func_0x00010868e794();
          func_0x00010868e69c();
          func_0x00010868e640();
          pcStack_1a8 = FUN_10868c570;
          puVar7 = puVar5;
          auStack_1c8[0] = unaff_x21;
          puStack_1b8 = puVar8;
          ppuStack_1b0 = &puStack_e0;
          func_0x00010868e968(auStack_298);
          lVar11 = lStack_268;
          if (cStack_260 == '\0') {
            lVar11 = 0;
          }
          func_0x00010868e700();
          (*extraout_x8_05)();
          if (puVar5[0x23] == 0) {
            uStack_2b8 = 0;
            puStack_2b0 = (ulong *)0x0;
            uStack_2a8 = 0;
            puVar10 = (ulong *)0x0;
            puVar9 = puVar5;
            FUN_10868bfcc(puVar5,0,0,puVar7);
            puVar8 = &uStack_2b8;
            func_0x00010868c8fc(puVar8);
          }
          else {
            puVar8 = puVar7;
            func_0x00010868e7c8();
            puVar9 = (ulong *)0x0;
            if (((cStack_2a0 == '\x01') && ((uStack_2b8 & 1) == 0)) &&
               (puVar9 = puStack_2b0, (uStack_2a8 & 1) == 0)) {
              func_0x00010868e718();
              goto LAB_10868c674;
            }
          }
          if ((ulong *)(lVar11 + -1) < puVar7) {
            puVar12 = (ulong *)(lVar11 + puVar5[0x21] * 1000);
            puVar10 = (ulong *)0x0;
            if (puVar7 <= puVar12) {
              puVar10 = (ulong *)((long)puVar12 - (long)puVar7);
            }
            if ((long)puVar10 <= (long)puVar9) {
              puVar10 = puVar9;
            }
            if ((long)puVar10 < 1) {
              func_0x00010868e7dc();
            }
            else {
              FUN_10868c498(puVar5);
              puVar8 = puVar5;
            }
          }
          else if ((long)puVar9 < 1) {
            func_0x00010868e7dc();
          }
          else {
            FUN_10868c498(puVar5,puVar9);
            puVar8 = puVar5;
            puVar10 = puVar9;
          }
LAB_10868c674:
          func_0x00010868e6b4();
          auVar19._8_8_ = puVar10;
          auVar19._0_8_ = puVar8;
          return auVar19;
        }
        func_0x00010868e67c();
        if (((ulong)puVar10 & 1) == 0) goto LAB_10868b830;
        func_0x00010868e86c();
        func_0x00010868e5c4();
        func_0x00010868e89c();
        uVar4 = 0;
        if (*(char *)(unaff_x19 + 0x150) == '\x01') {
          uVar4 = *(ulong *)(unaff_x19 + 0x148) == unaff_x20;
          if ((long)*(ulong *)(unaff_x19 + 0x148) <= (long)unaff_x20) goto LAB_10868c1e0;
          func_0x00010089b2d0(unaff_x19 + 0x138);
          FUN_10868caf4(unaff_x19 + 0x138);
        }
        unaff_x21 = *(ulong *)(unaff_x19 + 0x58);
        puVar10 = *(ulong **)(unaff_x19 + 8);
        func_0x00010868e7ec();
        func_0x00010868e8c4();
        if (extraout_x8 != 0) {
          do {
            func_0x00010868e600();
          } while (extraout_w10 != 0);
        }
        func_0x00010868e79c(FUN_10868e060);
        func_0x00010868e654();
        func_0x00010868e5b4();
        func_0x00010868e794();
        func_0x00010868e69c();
        func_0x00010868e88c();
        if (extraout_x8_00 != 0) {
          do {
            func_0x00010868e600();
          } while (extraout_w10_00 != 0);
        }
        puVar5 = (ulong *)(unaff_x19 + 0x138);
        func_0x00010868e980();
        func_0x00010868e970();
        func_0x00010868e93c();
LAB_10868c1e0:
        func_0x00010868e5a0(unaff_x23);
        puVar8 = puVar5;
        if (!(bool)uVar4) {
          ___stack_chk_fail();
          func_0x00010868e5b4();
          func_0x00010868e794();
          func_0x00010868e69c();
          func_0x00010868e640();
          pcStack_d8 = FUN_10868c214;
          uStack_f8 = unaff_x21;
          puStack_e8 = puVar5;
          puStack_e0 = &stack0xfffffffffffffff0;
          func_0x00010868e968(auStack_1c8);
          uVar15 = 0;
          if ((char)pcStack_1a8 == '\x01') {
            uVar14 = 0;
            uVar13 = 0;
            if ((bStack_128 & 1) != 0) {
              puVar8 = (ulong *)((long)(fStack_144 * 1000.0) + (long)ppuStack_1b0);
              uVar15 = (long)puVar8 - (long)puVar10;
              if (puVar8 < puVar10 || uVar15 == 0) {
                uVar15 = 0;
                uVar13 = 0;
              }
              else {
                uVar13 = uVar15 & 0xffffffffffffff00;
                uVar15 = uVar15 & 0xff;
              }
              uVar14 = 1;
            }
          }
          else {
            uVar14 = 0;
            uVar13 = 0;
          }
          func_0x000107c28d20(auStack_158);
          auVar18._0_8_ = uVar13 | uVar15;
          auVar18._8_8_ = uVar14;
          return auVar18;
        }
        goto LAB_10868e6e8;
      }
    }
  }
  func_0x00010868e978(auStack_108);
  func_0x00010868e7c8();
  uVar16 = (uint)bStack_110;
  cVar2 = SBORROW4(uVar16,1);
  cVar3 = (int)(uVar16 - 1) < 0;
  uVar4 = uVar16 == 1;
  if ((bool)uVar4) {
    if ((bStack_128 & 1) == 0) {
LAB_10868b720:
      puVar8 = (ulong *)*param_2;
      func_0x00010868e6c0();
      bVar1 = bStack_110 & bStack_118;
      func_0x00010868e67c();
      puVar7 = puVar5;
      puVar10 = puVar8;
      func_0x00010868e9d4();
      if (cVar3 == cVar2) {
        if (bVar1 == 0) {
          func_0x00010868e718();
        }
        else {
          puVar7 = param_1;
          FUN_10868c498(param_1,puStack_120);
          puVar10 = puStack_120;
        }
        if (((ulong)puVar8 & 1) != 0) {
          func_0x00010868e7b0();
          FUN_10868c3c0();
          puVar5 = puVar7;
          goto LAB_10868b82c;
        }
        lVar11 = 0x158;
LAB_10868b824:
        puVar5 = (ulong *)((long)param_1 + lVar11);
        func_0x00010868a74c(puVar5);
      }
      else {
        if (((ulong)puVar8 & 1) == 0) {
          if (bVar1 == 0) {
            lVar11 = 0x138;
            goto LAB_10868b824;
          }
        }
        else {
          if (bStack_110 == 0) {
            puStack_120 = (ulong *)0x0;
          }
          puVar8 = puVar5;
          if ((long)puStack_120 <= (long)puVar5) {
            puVar8 = puStack_120;
          }
          puStack_120 = puVar8;
          if (bVar1 == 0) {
            puStack_120 = puVar5;
          }
        }
        puVar10 = puStack_120;
        FUN_10868c130(param_1,puVar10);
        puVar5 = param_1;
      }
      goto LAB_10868b82c;
    }
  }
  else if (param_3 != 0) goto LAB_10868b720;
  puVar10 = (ulong *)*param_2;
  func_0x00010868e748();
  func_0x00010868e9d4();
  if (cVar3 == cVar2) {
    func_0x00010868e9e0();
    if ((bool)uVar4) {
      plVar6 = (long *)param_1[5];
      (**(code **)(*plVar6 + 0x20))();
      if ((long)param_1[0x33] <= (long)plVar6) goto LAB_10868b710;
    }
    else {
LAB_10868b710:
      func_0x00010868e718();
    }
    lVar11 = 0x158;
  }
  else {
    lVar11 = 0x138;
  }
  puVar5 = (ulong *)((long)param_1 + lVar11);
  func_0x00010868a74c(puVar5);
  func_0x00010868e7dc();
LAB_10868b82c:
  func_0x00010868e6b4();
LAB_10868b830:
  auVar17._8_8_ = puVar10;
  auVar17._0_8_ = puVar5;
  return auVar17;
}



/* Entry: 10868b864; end: 10868b95f;  */

void FUN_10868b864(long param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *extraout_x8;
  long lVar5;
  code *extraout_x8_00;
  ulong uVar6;
  ulong unaff_x28;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [616];
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong in_stack_ffffffffffffffc0;
  
  lVar5 = *(long *)(param_1 + 0x108);
  if (0 < lVar5) {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  if ((param_2 == 3) && (*(char *)(param_1 + 0x121) == '\x01')) {
    bVar3 = lVar5 == 1;
    if (0 < lVar5) {
      func_0x00010868e9e0();
      if (bVar3) {
        *(undefined1 *)(param_1 + 0x1a0) = 0;
      }
      func_0x00010868e718();
      func_0x00010868e72c();
    }
    func_0x000107c2a054(auStack_2c0,*(undefined8 *)(param_1 + 0x18));
    func_0x00010868e92c(&uStack_48);
    func_0x00010868e770();
    for (uVar4 = uStack_48; uVar4 != in_stack_ffffffffffffffc0; uVar4 = uVar4 + 0x260) {
      func_0x00010868e7b0();
      FUN_10868b960();
    }
    func_0x00010868e864();
    func_0x00010868e7dc();
    return;
  }
  if (*(long *)(param_1 + 0x108) < 1) {
    FUN_10886c7c4(auStack_2d0,*(undefined8 *)(param_1 + 0x18));
    func_0x00010868e92c(&uStack_58);
    func_0x00010868e770();
    if ((*(long *)(param_1 + 0x110) < 1) ||
       (*(uint *)(param_1 + 0x134) < (uint)*(long *)(param_1 + 0x110))) {
      if (*(long *)(param_1 + 0x118) == 0) {
        func_0x00010868e700();
        (*extraout_x8)();
        cVar2 = uStack_50 <= uStack_58;
        if (uStack_58 == uStack_50) {
          cVar2 = '\0';
        }
        else {
          func_0x00010868e8d0();
        }
        lVar5 = param_1;
        FUN_10868bfcc();
        if (lVar5 < 1) {
          cVar2 = '\x01';
        }
        if (cVar2 == '\x01') {
          func_0x00010868e748();
          func_0x00010868e7dc();
        }
        else {
          func_0x00010868e6c0();
          FUN_10868c130(param_1,lVar5);
        }
      }
      else {
        func_0x00010868e9bc();
        FUN_10868b654();
      }
    }
    else {
      func_0x00010868e748();
    }
    func_0x00010868e81c();
    return;
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  FUN_10886c7c4(auStack_2c0);
  func_0x00010868e92c(&uStack_48);
  func_0x00010868e770();
  if ((*(long *)(param_1 + 0x110) < 1) ||
     (*(uint *)(param_1 + 0x134) < (uint)*(long *)(param_1 + 0x110))) {
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      FUN_10868b508(param_1,&uStack_48,0);
    }
    else {
      func_0x00010868e700();
      (*extraout_x8_00)();
      bVar3 = unaff_x28 <= uStack_48;
      if ((uStack_48 == unaff_x28) || (func_0x00010868e8d0(), !bVar3)) {
        func_0x00010868e6c0();
        for (uVar6 = uStack_48; uVar6 != unaff_x28; uVar6 = uVar6 + 0x260) {
          if ((*(byte *)(uVar6 + 0x88) & 1) == 0) {
            uVar1 = 0;
            if (*(ulong *)(uVar6 + 0x128) <= uVar4) {
              uVar1 = uVar4 - *(ulong *)(uVar6 + 0x128);
            }
            if (uVar1 < *(ulong *)(param_1 + 0xf8)) {
              func_0x00010868e718();
              FUN_10868c2cc(param_1,uStack_48,unaff_x28,uVar4,0);
              if ((uStack_48 & 1) != 0) {
                func_0x00010868e86c();
                FUN_10868c3c0();
              }
              goto LAB_10868bf38;
            }
          }
        }
        func_0x00010868e72c();
        FUN_10868c570(param_1);
      }
      else {
        func_0x00010868e748();
        func_0x00010868e72c();
        FUN_10868c570(param_1);
      }
    }
  }
  else {
    func_0x00010868e748();
  }
LAB_10868bf38:
  func_0x00010868e864();
  return;
}



/* Entry: 10868b960; end: 10868b9bb;  */

void FUN_10868b960(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  func_0x000107c32358();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010868e6cc();
  FUN_10886c454(uVar2,param_1,unaff_x19 + 0x38,2);
  puVar1 = *(undefined8 **)(unaff_x20 + 0xe8);
  for (puVar3 = *(undefined8 **)(unaff_x20 + 0xe0); puVar3 != puVar1; puVar3 = puVar3 + 2) {
    (**(code **)(*(long *)*puVar3 + 0x18))();
  }
  return;
}


