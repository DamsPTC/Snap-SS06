/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10891de14; end: 10891de3f;  */

undefined8 FUN_10891de14(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891de40(param_1);
  return param_1;
}



/* Entry: 10891de40; end: 10891de6f;  */

void FUN_10891de40(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34a54();
  if (param_1 != 0) {
    func_0x000107c2a514();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a514();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891de70; end: 10891de83;  */

void FUN_10891de70(void)

{
  FUN_10891de14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891de84; end: 10891de8f;  */

undefined ** FUN_10891de84(void)

{
  return &PTR_DAT_110a967a8;
}



/* Entry: 10891de90; end: 10891ded3;  */

void FUN_10891de90(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000108924a84();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000108924dfc();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010890c800(unaff_x19[4]);
    }
  }
  func_0x000108924b44();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10891ded4; end: 10891dfaf;  */

long * FUN_10891ded4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010892473c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x000108924ed0();
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10891dfb0; end: 10891dfb3;  */

void FUN_10891dfb0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891dfb4; end: 10891dfe3;  */

void FUN_10891dfb4(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  uVar1 = param_2 == param_1;
  if ((bool)uVar1) {
    return;
  }
  func_0x000107c34a38();
  FUN_10891de90();
  func_0x000108924aec();
  func_0x000108924794();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)uVar1) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891dfe4; end: 10891dfe7;  */

undefined1  [16] FUN_10891dfe4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar7;
}



/* Entry: 10891dfe8; end: 10891e087;  */

void FUN_10891dfe8(undefined8 param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w22;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a95f50);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924e18();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924ca4();
    func_0x000107c2a558();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924e0c();
    FUN_108924448();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  if ((unaff_w22 >> 2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x20;
    FUN_108904f3c();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  if ((unaff_w22 >> 3 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a558();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10891e088; end: 10891e0b3;  */

undefined8 FUN_10891e088(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891e0b4(param_1);
  return param_1;
}



/* Entry: 10891e0b4; end: 10891e103;  */

void FUN_10891e0b4(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34a54();
  if (param_1 != 0) {
    func_0x000107c2a514();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_10891e3a4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_10890b684();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x000107c2a514();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891e104; end: 10891e117;  */

void FUN_10891e104(void)

{
  FUN_10891e088();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891e118; end: 10891e123;  */

undefined ** FUN_10891e118(void)

{
  return &PTR_DAT_110a967e0;
}



/* Entry: 10891e124; end: 10891e1c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10891e124(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924dfc();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010891e198(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10890b6d4(param_1[5]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010890c800(param_1[6]);
    }
  }
  func_0x000108924b44();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 10891e1c8; end: 10891e313;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10891e1c8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010892473c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x28);
    func_0x000108924a54();
    param_4 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = (long *)0x4;
    func_0x000108924a7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10891e314; end: 10891e32f;  */

long FUN_10891e314(long param_1)

{
  long extraout_x8;
  
  FUN_10891e460();
  func_0x000108924724();
  return param_1 + extraout_x8;
}



/* Entry: 10891e330; end: 10891e333;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10891e330(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924f18();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10891e334();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_108904f3c();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10890b7f0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000108924d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089248e8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e334; end: 10891e393;  */

void FUN_10891e334(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108924a28();
  func_0x000107c29a04();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e394; end: 10891e3a3;  */

undefined1  [16] FUN_10891e394(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c34a28();
  puVar1 = param_1 + 0x20;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10891e3a4; end: 10891e3cf;  */

long FUN_10891e3a4(long param_1)

{
  func_0x000107c34a34();
  func_0x000107c29a08(param_1 + 0x10);
  return param_1;
}



/* Entry: 10891e3d0; end: 10891e3d3;  */

long FUN_10891e3d0(long param_1)

{
  func_0x000107c34a34();
  func_0x000107c29a08(param_1 + 0x10);
  return param_1;
}



/* Entry: 10891e3d4; end: 10891e3e7;  */

void FUN_10891e3d4(void)

{
  FUN_10891e3a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891e3e8; end: 10891e3f3;  */

undefined ** FUN_10891e3e8(void)

{
  return &PTR_DAT_110a96820;
}



/* Entry: 10891e3f4; end: 10891e45f;  */

long * FUN_10891e3f4(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  func_0x000108924e5c();
  while (unaff_w22 != unaff_w21) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x0001089248b4();
    func_0x000108924bac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10891e460; end: 10891e4bf;  */

long FUN_10891e460(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000108924d8c();
  func_0x00010892489c();
  while (unaff_x22 != 0) {
    FUN_10890cd28(*unaff_x21);
    func_0x000108924be4();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10891e4c0; end: 10891e4c3;  */

void FUN_10891e4c0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108924a28();
  func_0x000107c29a04();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e4c4; end: 10891e4e7;  */

undefined8 FUN_10891e4c4(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891e4e8; end: 10891e4fb;  */

void FUN_10891e4e8(void)

{
  FUN_10891e4c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891e4fc; end: 10891e56b;  */

undefined ** FUN_10891e4fc(void)

{
  return &PTR_DAT_110a96868;
}



/* Entry: 10891e56c; end: 10891e59b;  */

void FUN_10891e56c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891e508();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e59c; end: 10891e5bf;  */

undefined8 FUN_10891e59c(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891e5c0; end: 10891e5d3;  */

void FUN_10891e5c0(void)

{
  FUN_10891e59c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891e5d4; end: 10891e643;  */

undefined ** FUN_10891e5d4(void)

{
  return &PTR_DAT_110a968a8;
}



/* Entry: 10891e644; end: 10891e673;  */

void FUN_10891e644(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891e5e0();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e674; end: 10891e697;  */

undefined8 FUN_10891e674(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891e698; end: 10891e6ab;  */

void FUN_10891e698(void)

{
  FUN_10891e674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891e6ac; end: 10891e71b;  */

undefined ** FUN_10891e6ac(void)

{
  return &PTR_DAT_110a968e8;
}



/* Entry: 10891e71c; end: 10891e74b;  */

void FUN_10891e71c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891e6b8();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e74c; end: 10891e76f;  */

undefined8 FUN_10891e74c(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891e770; end: 10891e783;  */

void FUN_10891e770(void)

{
  FUN_10891e74c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891e784; end: 10891e7f3;  */

undefined ** FUN_10891e784(void)

{
  return &PTR_DAT_110a96928;
}



/* Entry: 10891e7f4; end: 10891e823;  */

void FUN_10891e7f4(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891e790();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e824; end: 10891e877;  */

void FUN_10891e824(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a961d0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924ca4();
    func_0x0001088f38e0();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 10891e878; end: 10891e8a3;  */

undefined8 FUN_10891e878(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891e8a4(param_1);
  return param_1;
}



/* Entry: 10891e8a4; end: 10891e8d3;  */

void FUN_10891e8a4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a5a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891e8d4; end: 10891e8df;  */

undefined ** FUN_10891e8d4(void)

{
  return &PTR_DAT_110a96970;
}



/* Entry: 10891e8e0; end: 10891e9bf;  */

void FUN_10891e8e0(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c2a5a8(unaff_x19[3]);
  }
  func_0x000108924b44();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10891e9c0; end: 10891e9c3;  */

void FUN_10891e9c0(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088f38e0();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_10891988c();
    }
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e9c4; end: 10891e9f3;  */

void FUN_10891e9c4(ulong *param_1,ulong *param_2)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_10891e8e0();
  func_0x000108924aec();
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088f38e0();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_10891988c();
    }
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891e9f4; end: 10891e9f7;  */

void FUN_10891e9f4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  return;
}



/* Entry: 10891e9f8; end: 10891ea5f;  */

void FUN_10891e9f8(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  uint unaff_w22;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a96090);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924e18();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924ca4();
    FUN_108924448();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924e0c();
    FUN_108904f3c();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  return;
}



/* Entry: 10891ea60; end: 10891ea8b;  */

undefined8 FUN_10891ea60(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891ea8c(param_1);
  return param_1;
}



/* Entry: 10891ea8c; end: 10891eabb;  */

void FUN_10891ea8c(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34a54();
  if (param_1 != 0) {
    FUN_10891e3a4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_10890b684();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891eabc; end: 10891eacf;  */

void FUN_10891eabc(void)

{
  FUN_10891ea60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ead0; end: 10891eadb;  */

undefined ** FUN_10891ead0(void)

{
  return &PTR_DAT_110a969b0;
}



/* Entry: 10891eadc; end: 10891eb23;  */

void FUN_10891eadc(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000108924a84();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010891e198(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_10890b6d4(unaff_x19[4]);
    }
  }
  func_0x000108924b44();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10891eb24; end: 10891ec0f;  */

long * FUN_10891eb24(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    func_0x0001089248b4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10891ec10; end: 10891ec13;  */

void FUN_10891ec10(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924f18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891e334();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        FUN_108904f3c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10890b7f0();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891ec14; end: 10891ec43;  */

void FUN_10891ec14(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  uVar1 = param_2 == param_1;
  if ((bool)uVar1) {
    return;
  }
  func_0x000107c34a38();
  FUN_10891eadc();
  func_0x000108924aec();
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)uVar1) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924f18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891e334();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        FUN_108904f3c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10890b7f0();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891ec44; end: 10891ec47;  */

undefined1  [16] FUN_10891ec44(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar7;
}



/* Entry: 10891ec48; end: 10891ec6b;  */

undefined8 FUN_10891ec48(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891ec6c; end: 10891ec7f;  */

void FUN_10891ec6c(void)

{
  FUN_10891ec48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ec80; end: 10891ecef;  */

undefined ** FUN_10891ec80(void)

{
  return &PTR_DAT_110a96a00;
}



/* Entry: 10891ecf0; end: 10891ed1f;  */

void FUN_10891ecf0(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891ec8c();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891ed20; end: 10891ed53;  */

long FUN_10891ed20(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10891a090();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10891ed54; end: 10891ed67;  */

void FUN_10891ed54(void)

{
  FUN_10891ed20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ed68; end: 10891ed73;  */

undefined ** FUN_10891ed68(void)

{
  return &PTR_DAT_110a96a38;
}



/* Entry: 10891ed74; end: 10891ee53;  */

void FUN_10891ed74(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010891a0d8(unaff_x19[3]);
  }
  func_0x000108924b44();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10891ee54; end: 10891ee57;  */

void FUN_10891ee54(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108923398();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_10891a070();
    }
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891ee58; end: 10891ee7b;  */

undefined8 FUN_10891ee58(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891ee7c; end: 10891ee8f;  */

void FUN_10891ee7c(void)

{
  FUN_10891ee58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ee90; end: 10891eeff;  */

undefined ** FUN_10891ee90(void)

{
  return &PTR_DAT_110a96a80;
}



/* Entry: 10891ef00; end: 10891ef2f;  */

void FUN_10891ef00(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891ee9c();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891ef30; end: 10891ef53;  */

undefined8 FUN_10891ef30(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891ef54; end: 10891ef67;  */

void FUN_10891ef54(void)

{
  FUN_10891ef30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ef68; end: 10891efd7;  */

undefined ** FUN_10891ef68(void)

{
  return &PTR_DAT_110a96ad8;
}



/* Entry: 10891efd8; end: 10891f007;  */

void FUN_10891efd8(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891ef74();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891f008; end: 10891f02b;  */

undefined8 FUN_10891f008(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f02c; end: 10891f03f;  */

void FUN_10891f02c(void)

{
  FUN_10891f008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f040; end: 10891f0af;  */

undefined ** FUN_10891f040(void)

{
  return &PTR_DAT_110a96b38;
}



/* Entry: 10891f0b0; end: 10891f0df;  */

void FUN_10891f0b0(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891f04c();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891f0e0; end: 10891f103;  */

undefined8 FUN_10891f0e0(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f104; end: 10891f117;  */

void FUN_10891f104(void)

{
  FUN_10891f0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f118; end: 10891f18b;  */

undefined ** FUN_10891f118(void)

{
  return &PTR_DAT_110a96b88;
}



/* Entry: 10891f18c; end: 10891f1af;  */

undefined8 FUN_10891f18c(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f1b0; end: 10891f1c3;  */

void FUN_10891f1b0(void)

{
  FUN_10891f18c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f1c4; end: 10891f233;  */

undefined ** FUN_10891f1c4(void)

{
  return &PTR_DAT_110a96be0;
}



/* Entry: 10891f234; end: 10891f263;  */

void FUN_10891f234(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891f1d0();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891f264; end: 10891f287;  */

undefined8 FUN_10891f264(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f288; end: 10891f29b;  */

void FUN_10891f288(void)

{
  FUN_10891f264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f29c; end: 10891f30b;  */

undefined ** FUN_10891f29c(void)

{
  return &PTR_DAT_110a96c30;
}



/* Entry: 10891f30c; end: 10891f33b;  */

void FUN_10891f30c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891f2a8();
  func_0x000108924aec();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10891f33c; end: 10891f367;  */

undefined8 FUN_10891f33c(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891f368(param_1);
  return param_1;
}



/* Entry: 10891f368; end: 10891f3af;  */

void FUN_10891f368(void)

{
  long unaff_x19;
  
  func_0x000108924d80();
  func_0x000107c30258();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a514();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_1089141e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_108927694();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f3b0; end: 10891f3c3;  */

void FUN_10891f3b0(void)

{
  FUN_10891f33c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f3c4; end: 10891f3cf;  */

undefined ** FUN_10891f3c4(void)

{
  return &PTR_DAT_110a96c88;
}



/* Entry: 10891f3d0; end: 10891f43b;  */

void FUN_10891f3d0(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108924d80();
  func_0x000107c3025c();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010890c800(unaff_x19[4]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10891422c(unaff_x19[5]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_108927704(unaff_x19[6]);
    }
  }
  func_0x000108924b44();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 10891f43c; end: 10891f5a3;  */

long * FUN_10891f43c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000108924874();
  uVar2 = param_1[3] & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000108924f0c();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x000108924ed0();
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x28);
    func_0x000108924a54();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x4;
    func_0x000108924a7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108924af8();
  if ((long)uVar2 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    uVar2 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)uVar2 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  while( true ) {
    iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar4 = (int)uVar2;
    uVar1 = iVar4 - iVar5;
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0 || iVar4 < iVar5) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar4);
}



/* Entry: 10891f5a4; end: 10891f5a7;  */

void FUN_10891f5a4(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong extraout_x8;
  
  puVar5 = (ulong *)param_1[1];
  puVar3 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  puVar2 = param_1;
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
    }
    puVar2 = param_1 + 3;
    func_0x000107c30248(puVar2,uVar4,puVar5);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924c70();
      if (puVar2 == (ulong *)0x0) {
        func_0x000108924d18();
        param_1[4] = (ulong)puVar2;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (ulong *)param_1[5];
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_108915788();
        param_1[5] = (ulong)puVar2;
      }
      else {
        FUN_1089136f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000108924d5c();
      if (puVar2 == (ulong *)0x0) {
        FUN_108915a40();
        param_1[6] = (ulong)puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_108927928();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}


