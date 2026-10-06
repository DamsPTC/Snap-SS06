/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098ca518; end: 1098ca51b;  */

void FUN_1098ca518(void)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098cd000();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  puVar3 = unaff_x21 + 2;
  FUN_1098ca610();
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_1098ca5f4;
  iVar2 = *(int *)((long)unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_1098ca170();
    }
    *(int *)((long)unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      puVar3 = (ulong *)unaff_x21[5];
      func_0x0001098c9808();
      goto LAB_1098ca5f4;
    }
    FUN_1098cc6ec();
    puVar3 = unaff_x22;
  }
  else {
    if (iVar1 != 2) goto LAB_1098ca5f4;
    if (iVar2 == 2) {
      puVar3 = (ulong *)unaff_x21[5];
      func_0x0001098c9500();
      goto LAB_1098ca5f4;
    }
    FUN_1098cc694();
    puVar3 = unaff_x22;
  }
  unaff_x21[5] = (ulong)puVar3;
LAB_1098ca5f4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd1cc();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 1098ca51c; end: 1098ca60f;  */

void FUN_1098ca51c(void)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098cd000();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  puVar3 = unaff_x21 + 2;
  FUN_1098ca610();
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_1098ca5f4;
  iVar2 = *(int *)((long)unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_1098ca170();
    }
    *(int *)((long)unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      puVar3 = (ulong *)unaff_x21[5];
      func_0x0001098c9808();
      goto LAB_1098ca5f4;
    }
    FUN_1098cc6ec();
    puVar3 = unaff_x22;
  }
  else {
    if (iVar1 != 2) goto LAB_1098ca5f4;
    if (iVar2 == 2) {
      puVar3 = (ulong *)unaff_x21[5];
      func_0x0001098c9500();
      goto LAB_1098ca5f4;
    }
    FUN_1098cc694();
    puVar3 = unaff_x22;
  }
  unaff_x21[5] = (ulong)puVar3;
LAB_1098ca5f4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd1cc();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 1098ca610; end: 1098ca61f;  */

void FUN_1098ca610(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1098ca620; end: 1098ca657;  */

void FUN_1098ca620(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_1098ca35c();
  func_0x0001098cd000(param_1,param_2);
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  puVar3 = unaff_x21 + 2;
  FUN_1098ca610();
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_1098ca5f4;
  iVar2 = *(int *)((long)unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_1098ca170();
    }
    *(int *)((long)unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      puVar3 = (ulong *)unaff_x21[5];
      func_0x0001098c9808();
      goto LAB_1098ca5f4;
    }
    FUN_1098cc6ec();
    puVar3 = unaff_x22;
  }
  else {
    if (iVar1 != 2) goto LAB_1098ca5f4;
    if (iVar2 == 2) {
      puVar3 = (ulong *)unaff_x21[5];
      func_0x0001098c9500();
      goto LAB_1098ca5f4;
    }
    FUN_1098cc694();
    puVar3 = unaff_x22;
  }
  unaff_x21[5] = (ulong)puVar3;
LAB_1098ca5f4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098cd1cc();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 1098ca658; end: 1098ca697;  */

void FUN_1098ca658(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b186a8;
  param_1[1] = param_2;
  param_1[3] = 0x100000000;
  param_1[2] = 0;
  param_1[4] = 0x100000000;
  param_1[5] = &DAT_10e5b4a18;
  param_1[6] = param_2;
  param_1[7] = &DAT_11383d918;
  param_1[8] = 0;
  return;
}



/* Entry: 1098ca698; end: 1098ca6db;  */

long FUN_1098ca698(long param_1)

{
  func_0x0001098cd01c();
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1098c9b98();
  }
  __ZdlPv();
  FUN_1098cc14c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1098ca6dc; end: 1098ca6df;  */

long FUN_1098ca6dc(long param_1)

{
  func_0x0001098cd01c();
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1098c9b98();
  }
  __ZdlPv();
  FUN_1098cc14c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1098ca6e0; end: 1098ca6f3;  */

void FUN_1098ca6e0(void)

{
  FUN_1098ca698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ca6f4; end: 1098ca6ff;  */

undefined ** FUN_1098ca6f4(void)

{
  return &PTR_DAT_110b18b68;
}



/* Entry: 1098ca700; end: 1098ca74f;  */

void FUN_1098ca700(long param_1)

{
  ulong *puVar1;
  
  FUN_1098cc610(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001098c9be0(*(undefined8 *)(param_1 + 0x40));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098ca750; end: 1098ca8cb;  */

long * FUN_1098ca750(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x26;
  long alStack_68 [3];
  
  func_0x0001098cd328();
  func_0x0001098cd298(param_1[7]);
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1098ca7b0;
  }
  else if ((int)param_2 == 0) goto LAB_1098ca7b0;
  func_0x0001098cd120();
  param_1 = unaff_x19;
  func_0x0001098cd030();
  unaff_x20 = param_1;
LAB_1098ca7b0:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    if ((*(int *)(unaff_x21 + 0x18) == 1) || ((*(byte *)((long)unaff_x19 + 0x3a) & 1) == 0)) {
      func_0x0001098cd014();
      while (plVar2 = param_1, alStack_68[0] != 0) {
        func_0x0001098cd1f0();
        param_1 = plVar2;
        func_0x0001098ccdf0();
        func_0x0001098ccff8();
        unaff_x20 = plVar2;
      }
    }
    else {
      plVar2 = alStack_68;
      FUN_1098cc79c(plVar2);
      func_0x0001098cd338();
      while (plVar1 = plVar2, unaff_x26 != 0) {
        func_0x0001098cd1f0();
        plVar2 = plVar1;
        func_0x0001098ccdf0();
        func_0x0001098cd2c4();
        unaff_x20 = plVar1;
      }
      func_0x0001098cd0ac();
    }
  }
  plVar2 = unaff_x20;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x0001098cd090(3,*(long *)(unaff_x21 + 0x40),
                        *(undefined4 *)(*(long *)(unaff_x21 + 0x40) + 0x38),unaff_x20);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001098cd0a0();
    func_0x0001053930c4();
    plVar2 = unaff_x19;
  }
  return plVar2;
}



/* Entry: 1098ca8cc; end: 1098ca943;  */

void FUN_1098ca8cc(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5
                  )

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  uVar3 = param_5;
  func_0x000107c28094(param_5,param_4);
  func_0x000107c280a8(param_1 << 3 | 2,uVar3);
  FUN_1098cc884(param_2,param_3);
  func_0x000107c280a8();
  func_0x0001098ccee8();
  func_0x000107c28094(param_5,param_2);
  iVar1 = *param_3;
  pbVar4 = (byte *)0x10;
  func_0x000107c280a8(0x10,param_5);
  for (uVar2 = (ulong)iVar1; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar4 = (byte)uVar2 | 0x80;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = (byte)uVar2;
  return;
}



/* Entry: 1098ca944; end: 1098caa17;  */

ulong FUN_1098ca944(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  ulong uVar3;
  undefined8 uStack_38;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  lVar2 = param_1;
  func_0x0001098cd014();
  while (uStack_38 != 0) {
    func_0x0001098cd35c();
    func_0x0001098ccfac();
  }
  func_0x0001098cd274(*(undefined8 *)(param_1 + 0x38));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001098cd31c();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1098c9d0c(*(undefined8 *)(param_1 + 0x40));
    func_0x0001098cce48();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098cd308();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    uVar3 = lVar2 + uVar3;
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  return uVar3;
}



/* Entry: 1098caa18; end: 1098caa1b;  */

void FUN_1098caa18(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098cd000();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  func_0x0001098cc8f0();
  func_0x0001098cd24c(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098cd1e4();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x40);
    if (puVar1 == (ulong *)0x0) {
      FUN_1098cc744();
      *(ulong **)(unaff_x21 + 0x40) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      func_0x0001098c9b10();
    }
  }
  func_0x0001098cd144();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001098cd1cc();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 1098caa1c; end: 1098caab3;  */

void FUN_1098caa1c(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098cd000();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  func_0x0001098cc8f0();
  func_0x0001098cd24c(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098cd1e4();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x40);
    if (puVar1 == (ulong *)0x0) {
      FUN_1098cc744();
      *(ulong **)(unaff_x21 + 0x40) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      func_0x0001098c9b10();
    }
  }
  func_0x0001098cd144();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001098cd1cc();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 1098caab4; end: 1098caadf;  */

void FUN_1098caab4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b18748;
  param_1[1] = param_2;
  param_1[3] = 0x100000000;
  param_1[2] = 0x100000000;
  param_1[4] = &DAT_10e5b4a18;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 1098caae0; end: 1098cab27;  */

long FUN_1098caae0(long param_1)

{
  func_0x0001098cd01c();
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x0001098cd098(param_1 + 0x10,0x500680020);
  }
  return param_1;
}



/* Entry: 1098cab28; end: 1098cab2b;  */

long FUN_1098cab28(long param_1)

{
  func_0x0001098cd01c();
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x0001098cd098(param_1 + 0x10,0x500680020);
  }
  return param_1;
}



/* Entry: 1098cab2c; end: 1098cab3f;  */

void FUN_1098cab2c(void)

{
  FUN_1098caae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cab40; end: 1098cab5b;  */

undefined ** FUN_1098cab40(void)

{
  return &PTR_DAT_110b18bc8;
}



/* Entry: 1098cab5c; end: 1098caba7;  */

void FUN_1098cab5c(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x0001098cd098(param_1 + 0x10,0x10500680020);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098caba8; end: 1098cacef;  */

long FUN_1098caba8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  long lStack_68;
  
  lVar2 = param_3;
  func_0x0001098cd108();
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(int *)(param_1 + 0x10) == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098ccf34();
      while (lVar1 = param_1, lStack_68 != 0) {
        func_0x0001098cd2d0();
        param_1 = lVar1;
        func_0x0001098ccdf0();
        func_0x0001098cd060();
        unaff_x19 = lVar1;
      }
    }
    else {
      func_0x0001098ccf6c();
      func_0x0001098cd3d4();
      func_0x0001098ccf34();
      while (lStack_68 != 0) {
        func_0x0001098cd3c8();
        func_0x0001098cd060();
      }
      func_0x0001098cd3bc();
      FUN_1098cc840();
      func_0x0001098cd338();
      while (lVar1 = param_1, unaff_x26 != 0) {
        func_0x0001098cd2d0();
        param_1 = lVar1;
        func_0x0001098ccdf0();
        func_0x0001098cd2c4();
        unaff_x19 = lVar1;
      }
      func_0x0001098cd0ac();
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001098cd0a0();
    if (lVar2 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar2);
    unaff_x19 = param_3;
  }
  return unaff_x19;
}



/* Entry: 1098cacf0; end: 1098cad37;  */

void FUN_1098cacf0(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  long unaff_x20;
  
  func_0x0001098ccf08();
  uVar3 = 10;
  func_0x000107c280a8(10);
  func_0x0001098cd024();
  func_0x0001098cce6c(*(undefined4 *)(unaff_x20 + 0x14));
  func_0x0001098ccee8();
  func_0x0001098cd054();
  uVar4 = (ulong)*(uint *)(unaff_x20 + 0x14);
  uVar5 = uVar3;
  func_0x0001098cd0d4();
  uVar1 = in_x4;
  func_0x0001001a597c(in_x4,uVar5);
  uVar2 = (ulong)((int)uVar3 << 3 | 2);
  func_0x0001001a59d0(uVar2,uVar1);
  func_0x0001001a59d0(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,uVar4,in_x4);
  return;
}



/* Entry: 1098cad38; end: 1098cadab;  */

ulong FUN_1098cad38(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  ulong uVar2;
  undefined8 uStack_58;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x10);
  func_0x0001098cd014();
  while (uStack_58 != 0) {
    func_0x0001098cd290();
    func_0x0001098cd3a4();
    FUN_1098ca944();
    func_0x0001098cce00();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098cd308();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    uVar2 = lVar1 + uVar2;
  }
  *(int *)(param_1 + 0x30) = (int)uVar2;
  return uVar2;
}



/* Entry: 1098cadac; end: 1098cadaf;  */

void FUN_1098cadac(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098cd344();
  FUN_1098cca34(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1098cadb0; end: 1098cae1f;  */

void FUN_1098cadb0(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098cd344();
  FUN_1098cca34(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1098cae20; end: 1098caea3;  */

void FUN_1098cae20(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000000;
  *(undefined **)(param_1 + 0x28) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0x100000000;
  *(undefined8 *)(param_1 + 0x38) = 0x100000000;
  *(undefined **)(param_1 + 0x48) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0x100000000;
  *(undefined8 *)(param_1 + 0x58) = 0x100000000;
  *(undefined **)(param_1 + 0x68) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x80) = 0x100000000;
  *(undefined8 *)(param_1 + 0x78) = 0x100000000;
  *(undefined **)(param_1 + 0x88) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = 0x100000000;
  *(undefined8 *)(param_1 + 0x98) = 0x100000000;
  *(undefined **)(param_1 + 0xa8) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  *(undefined8 *)(param_1 + 0xc0) = 0x100000000;
  *(undefined8 *)(param_1 + 0xb8) = 0x100000000;
  *(undefined **)(param_1 + 200) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xe0) = 0x100000000;
  *(undefined8 *)(param_1 + 0xd8) = 0x100000000;
  *(undefined **)(param_1 + 0xe8) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = param_2;
  *(undefined **)(param_1 + 0x110) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x118) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  return;
}



/* Entry: 1098caea4; end: 1098cb0bf;  */

undefined8 * FUN_1098caea4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b18798;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001098cd390();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x0001098cd374(param_1 + 3);
  FUN_1098cc100(param_1 + 7,param_2,param_3 + 0x38);
  param_1[0xc] = 0x100000000;
  param_1[0xb] = 0x100000000;
  param_1[0xd] = &DAT_10e5b4a18;
  param_1[0xe] = param_2;
  FUN_1098ccbf0(param_1 + 0xb,param_3 + 0x58);
  func_0x0001098cd374(param_1 + 0xf);
  func_0x0001098cd374(param_1 + 0x13);
  param_1[0x18] = 0x100000000;
  param_1[0x17] = 0x100000000;
  param_1[0x19] = &DAT_10e5b4a18;
  param_1[0x1a] = param_2;
  func_0x0001098ccca0(param_1 + 0x17,param_3 + 0xb8);
  param_1[0x1c] = 0x100000000;
  param_1[0x1b] = 0x100000000;
  param_1[0x1d] = &DAT_10e5b4a18;
  param_1[0x1e] = param_2;
  FUN_1098ccd3c(param_1 + 0x1b,param_3 + 0xd8);
  FUN_1098cc250(param_1 + 0x1f,param_2,param_3 + 0xf8);
  lVar2 = param_3 + 0x110;
  func_0x000107c2809c(lVar2,param_2);
  param_1[0x22] = lVar2;
  lVar2 = param_3 + 0x118;
  func_0x000107c2809c(lVar2,param_2);
  param_1[0x23] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1098ccae8(param_2,*(undefined8 *)(param_3 + 0x120));
  }
  param_1[0x24] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1098ccb40(param_2,*(undefined8 *)(param_3 + 0x128));
  }
  param_1[0x25] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_1098ccb98(param_2,*(undefined8 *)(param_3 + 0x130));
  }
  param_1[0x26] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x140);
  uVar3 = *(undefined8 *)(param_3 + 0x138);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_3 + 0x148);
  param_1[0x28] = uVar4;
  param_1[0x27] = uVar3;
  return param_1;
}



/* Entry: 1098cb0c0; end: 1098cb0eb;  */

undefined8 FUN_1098cb0c0(undefined8 param_1)

{
  func_0x0001098cd01c();
  FUN_1098cb0ec(param_1);
  return param_1;
}



/* Entry: 1098cb0ec; end: 1098cb14b;  */

long FUN_1098cb0ec(long param_1)

{
  func_0x000107c30258(param_1 + 0x110);
  func_0x000107c30258(param_1 + 0x118);
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_1098c91e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_1098c92f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_1098c9400();
  }
  __ZdlPv();
  FUN_1098cc270(param_1 + 0xf8);
  FUN_1098cc220(param_1 + 0xd8);
  FUN_1098cc1f0(param_1 + 0xb8);
  func_0x000105991a90(param_1 + 0x98);
  func_0x000105991a90(param_1 + 0x78);
  FUN_1098cc1bc(param_1 + 0x58);
  FUN_1098cc14c(param_1 + 0x38);
  func_0x000105991a90(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1098cb14c; end: 1098cb14f;  */

undefined8 FUN_1098cb14c(undefined8 param_1)

{
  func_0x0001098cd01c();
  FUN_1098cb0ec(param_1);
  return param_1;
}



/* Entry: 1098cb150; end: 1098cb163;  */

void FUN_1098cb150(void)

{
  FUN_1098cb0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cb164; end: 1098cb1b3;  */

undefined ** FUN_1098cb164(void)

{
  return &PTR_DAT_110b18c28;
}



/* Entry: 1098cb1b4; end: 1098cb2b7;  */

void FUN_1098cb1b4(long param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000105991b74(param_1 + 0x18);
  FUN_1098cc610(param_1 + 0x38);
  if (*(int *)(param_1 + 0x5c) != 1) {
    param_2 = 0x10500480020;
    func_0x0001098cd098(param_1 + 0x58,0x10500480020);
  }
  func_0x000105991b74(param_1 + 0x78);
  func_0x000105991b74(param_1 + 0x98);
  if (*(int *)(param_1 + 0xbc) != 1) {
    func_0x0001098cd418();
    param_2 = param_2 & 0xffff0000ffffffff | 0x10500000000;
    func_0x0001098cd098(param_1 + 0xb8,param_2);
  }
  if (*(int *)(param_1 + 0xdc) != 1) {
    func_0x0001098cd418();
    func_0x0001098cd098(param_1 + 0xd8,param_2 & 0xffff0000ffffffff | 0x10500000000);
  }
  FUN_1098ccad4(param_1 + 0xf8);
  func_0x000107c3025c(param_1 + 0x110);
  func_0x000107c3025c(param_1 + 0x118);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098c9230(*(undefined8 *)(param_1 + 0x120));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001098c933c(*(undefined8 *)(param_1 + 0x128));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001098c9448(*(undefined8 *)(param_1 + 0x130));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1098cb2b8; end: 1098cbad3;  */

ulong * FUN_1098cb2b8(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long extraout_x8;
  int iVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long *unaff_x25;
  long *unaff_x26;
  long lVar10;
  ulong uStack_78;
  long *plStack_70;
  
  puVar9 = param_1;
  puVar5 = param_3;
  if ((int)param_1[3] != 0) {
    if (((int)param_1[3] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098cd2f0();
      while (uVar3 = uStack_78, unaff_x25 = (long *)0x0, uStack_78 != 0) {
        puVar9 = (ulong *)(uStack_78 + 8);
        param_2 = (ulong *)0x1;
        func_0x0001098cce90(1);
        lVar10 = (long)*(char *)(uVar3 + 0x1f);
        if (lVar10 < 0) {
          puVar9 = *(ulong **)(uVar3 + 8);
          lVar10 = *(long *)(uVar3 + 0x10);
        }
        func_0x0001098ccebc(puVar9,lVar10);
        func_0x0001098ccdf0();
        func_0x0001098cd060();
      }
    }
    else {
      func_0x0001098cd0fc();
      unaff_x26 = plStack_70;
      for (lVar10 = uStack_78 << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
        puVar9 = (ulong *)*unaff_x26;
        param_2 = (ulong *)0x1;
        func_0x0001098cce90(1);
        uVar3 = (ulong)*(char *)((long)puVar9 + 0x17);
        if ((long)uVar3 < 0) {
          uVar3 = puVar9[1];
          puVar9 = (ulong *)*puVar9;
        }
        func_0x0001098ccebc(puVar9,uVar3);
        func_0x0001098ccdf0();
        unaff_x26 = unaff_x26 + 1;
      }
      func_0x0001098cd388();
    }
  }
  puVar4 = param_1 + 7;
  if ((int)*puVar4 != 0) {
    if (((int)*puVar4 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098cd2f0();
      while (uVar3 = uStack_78, uStack_78 != 0) {
        puVar5 = (ulong *)(uStack_78 + 0x20);
        func_0x0001098cd204();
        func_0x0001098cd3f8();
        if ((long)puVar4 < 0) {
          puVar4 = *(ulong **)(uVar3 + 0x10);
        }
        func_0x0001098ccdf0();
        func_0x0001098cd060();
      }
    }
    else {
      puVar9 = &uStack_78;
      FUN_1098cc79c();
      unaff_x25 = plStack_70;
      uVar3 = uStack_78 & 0x1fffffffffffffff;
      while (uVar3 != 0) {
        lVar10 = *unaff_x25;
        puVar5 = (ulong *)(lVar10 + 0x18);
        func_0x0001098cd204();
        func_0x0001098cd3ec();
        if ((long)puVar4 < 0) {
          puVar4 = *(ulong **)(lVar10 + 8);
        }
        func_0x0001098ccdf0();
        func_0x0001098cd2c4();
      }
      func_0x0001098cd0ac();
      unaff_x26 = (long *)0x0;
    }
  }
  if ((int)param_1[0xb] != 0) {
    if (((int)param_1[0xb] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098ccf34();
      while (uVar3 = uStack_78, uStack_78 != 0) {
        puVar4 = (ulong *)(uStack_78 + 0x20);
        func_0x0001098ccfe8();
        FUN_1098cbad4();
        func_0x0001098cd3f8();
        if ((long)puVar4 < 0) {
          puVar4 = *(ulong **)(uVar3 + 0x10);
        }
        func_0x0001098ccdf0();
        func_0x0001098cd060();
      }
    }
    else {
      func_0x0001098ccf6c();
      func_0x0001098cd3d4();
      func_0x0001098ccf34();
      while (uStack_78 != 0) {
        func_0x0001098cd3c8();
        func_0x0001098cd060();
      }
      func_0x0001098cd3bc();
      FUN_1098cc840();
      func_0x0001098cd338();
      while (unaff_x26 != (long *)0x0) {
        lVar10 = *unaff_x25;
        puVar4 = (ulong *)(lVar10 + 0x18);
        func_0x0001098ccfe8();
        FUN_1098cbad4();
        func_0x0001098cd3ec();
        if ((long)puVar4 < 0) {
          puVar4 = *(ulong **)(lVar10 + 8);
        }
        func_0x0001098ccdf0();
        func_0x0001098cd2c4();
      }
      func_0x0001098cd0ac();
    }
  }
  puVar2 = puVar9;
  if ((int)param_1[0x27] != 0) {
    func_0x0001098ccf88();
    puVar2 = (ulong *)0x20;
    func_0x000107c280a8(0x20);
    func_0x0001098ccfc4();
    puVar4 = puVar9;
    param_2 = puVar2;
  }
  uVar1 = (uint)param_1[2];
  puVar8 = (undefined8 *)(ulong)uVar1;
  if ((uVar1 & 1) != 0) {
    puVar4 = (ulong *)param_1[0x24];
    puVar5 = (ulong *)(ulong)*(uint *)((long)puVar4 + 0x14);
    puVar2 = (ulong *)0x5;
    func_0x0001098cd074(5);
    param_2 = puVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar4 = (ulong *)param_1[0x25];
    puVar5 = (ulong *)(ulong)*(uint *)((long)puVar4 + 0x14);
    puVar2 = (ulong *)0x6;
    func_0x0001098cd074(6);
    param_2 = puVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    puVar4 = (ulong *)param_1[0x26];
    puVar5 = (ulong *)(ulong)*(uint *)((long)puVar4 + 0x14);
    puVar2 = (ulong *)0x7;
    func_0x0001098cd074(7);
    param_2 = puVar2;
  }
  func_0x0001098cd298(param_1[0x22]);
  if ((long)puVar4 < 0) {
    if (puVar8[1] != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_1098cb5b0;
    }
  }
  else if ((int)puVar4 != 0) {
LAB_1098cb5b0:
    func_0x0001098cd120(puVar8);
    puVar2 = param_3;
    func_0x0001098cd368(param_3,8);
    param_2 = puVar2;
  }
  puVar9 = puVar2;
  if (*(int *)((long)param_1 + 0x13c) != 0) {
    func_0x0001098ccf88();
    puVar9 = (ulong *)0x48;
    func_0x000107c280a8(0x48,puVar2);
    func_0x0001098ccfc4();
    param_2 = puVar9;
  }
  if ((int)param_1[0xf] != 0) {
    if (((int)param_1[0xf] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098cd2f0();
      while (uVar3 = uStack_78, unaff_x25 = (long *)0x0, uStack_78 != 0) {
        puVar9 = (ulong *)(uStack_78 + 8);
        param_2 = (ulong *)0xa;
        func_0x0001098cce90(10);
        lVar10 = (long)*(char *)(uVar3 + 0x1f);
        if (lVar10 < 0) {
          puVar9 = *(ulong **)(uVar3 + 8);
          lVar10 = *(long *)(uVar3 + 0x10);
        }
        func_0x0001098ccebc(puVar9,lVar10);
        func_0x0001098ccdf0();
        func_0x0001098cd060();
      }
    }
    else {
      func_0x0001098cd0fc();
      unaff_x26 = plStack_70;
      for (lVar10 = uStack_78 << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
        puVar9 = (ulong *)*unaff_x26;
        param_2 = (ulong *)0xa;
        func_0x0001098cce90(10);
        uVar3 = (ulong)*(char *)((long)puVar9 + 0x17);
        if ((long)uVar3 < 0) {
          uVar3 = puVar9[1];
          puVar9 = (ulong *)*puVar9;
        }
        func_0x0001098ccebc(puVar9,uVar3);
        func_0x0001098ccdf0();
        unaff_x26 = unaff_x26 + 1;
      }
      func_0x0001098cd388();
    }
  }
  puVar4 = param_1 + 0x13;
  if ((int)*puVar4 != 0) {
    if (((int)*puVar4 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098cd2f0();
      while (uVar3 = uStack_78, unaff_x25 = (long *)0x0, uStack_78 != 0) {
        puVar9 = (ulong *)(uStack_78 + 8);
        param_2 = (ulong *)0xb;
        func_0x0001098cce90(0xb);
        lVar10 = (long)*(char *)(uVar3 + 0x1f);
        if (lVar10 < 0) {
          puVar9 = *(ulong **)(uVar3 + 8);
          lVar10 = *(long *)(uVar3 + 0x10);
        }
        func_0x0001098ccebc(puVar9,lVar10);
        puVar4 = (ulong *)(long)*(char *)(uVar3 + 0x37);
        if ((long)puVar4 < 0) {
          puVar4 = *(ulong **)(uVar3 + 0x28);
        }
        func_0x0001098ccdf0();
        func_0x0001098cd060();
      }
    }
    else {
      func_0x0001098cd0fc();
      unaff_x26 = plStack_70;
      for (lVar10 = uStack_78 << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
        puVar2 = (ulong *)*unaff_x26;
        param_2 = (ulong *)0xb;
        func_0x0001098cce90(0xb);
        uVar3 = (ulong)*(char *)((long)puVar2 + 0x17);
        puVar9 = puVar2;
        if ((long)uVar3 < 0) {
          uVar3 = puVar2[1];
          puVar9 = (ulong *)*puVar2;
        }
        func_0x0001098ccebc(puVar9,uVar3);
        puVar4 = (ulong *)(long)*(char *)((long)puVar2 + 0x2f);
        if ((long)puVar4 < 0) {
          puVar4 = (ulong *)puVar2[4];
        }
        func_0x0001098ccdf0();
        unaff_x26 = unaff_x26 + 1;
      }
      func_0x0001098cd388();
    }
  }
  puVar2 = param_1 + 0x17;
  if ((int)*puVar2 != 0) {
    if (((int)*puVar2 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098ccf34();
      puVar2 = (ulong *)&UNK_10f586f75;
      while (uVar3 = uStack_78, uStack_78 != 0) {
        puVar4 = (ulong *)(uStack_78 + 0x20);
        func_0x0001098ccfe8();
        func_0x0001098cbb1c();
        func_0x0001098cd3f8();
        if ((long)puVar4 < 0) {
          puVar4 = *(ulong **)(uVar3 + 0x10);
        }
        func_0x0001098ccdf0();
        func_0x0001098cd060();
      }
    }
    else {
      func_0x0001098ccf6c();
      func_0x0001098cd3d4();
      func_0x0001098ccf34();
      while (uStack_78 != 0) {
        func_0x0001098cd3c8();
        func_0x0001098cd060();
      }
      func_0x0001098cd3bc();
      FUN_1098cc840();
      func_0x0001098cd338();
      puVar2 = (ulong *)&UNK_10f586f75;
      while (unaff_x26 != (long *)0x0) {
        lVar10 = *unaff_x25;
        puVar4 = (ulong *)(lVar10 + 0x18);
        func_0x0001098ccfe8();
        func_0x0001098cbb1c();
        func_0x0001098cd3ec();
        if ((long)puVar4 < 0) {
          puVar4 = *(ulong **)(lVar10 + 8);
        }
        func_0x0001098ccdf0();
        func_0x0001098cd2c4();
      }
      func_0x0001098cd0ac();
    }
  }
  func_0x0001098cd298(param_1[0x23]);
  if ((long)puVar4 < 0) {
    if (puVar2[1] == 0) goto LAB_1098cb894;
    puVar2 = (ulong *)*puVar2;
  }
  else if ((int)puVar4 == 0) goto LAB_1098cb894;
  func_0x0001098cd120(puVar2);
  puVar9 = param_3;
  func_0x0001098cd368(param_3,0xd);
  param_2 = puVar9;
LAB_1098cb894:
  puVar4 = puVar9;
  if ((int)param_1[0x28] != 0) {
    func_0x0001098ccf88();
    puVar4 = (ulong *)0x70;
    func_0x000107c280a8(0x70,puVar9);
    func_0x0001098ccfc4();
    param_2 = puVar4;
  }
  if ((int)param_1[0x1b] != 0) {
    if (((int)param_1[0x1b] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098ccf34();
      while (uStack_78 != 0) {
        func_0x0001098ccfe8();
        func_0x0001098cbb64();
        func_0x0001098cd3f8();
        func_0x0001098ccdf0();
        func_0x0001098cd060();
      }
    }
    else {
      func_0x0001098ccf6c();
      func_0x0001098cd3d4();
      func_0x0001098ccf34();
      while (uStack_78 != 0) {
        func_0x0001098cd3c8();
        func_0x0001098cd060();
      }
      func_0x0001098cd3bc();
      FUN_1098cc840();
      func_0x0001098cd338();
      while (unaff_x26 != (long *)0x0) {
        func_0x0001098ccfe8();
        func_0x0001098cbb64();
        func_0x0001098cd3ec();
        func_0x0001098ccdf0();
        func_0x0001098cd2c4();
      }
      func_0x0001098cd0ac();
    }
  }
  puVar9 = puVar4;
  if (*(char *)((long)param_1 + 0x144) == '\x01') {
    func_0x0001098ccf88();
    puVar9 = (ulong *)0x80;
    func_0x000107c280a8(0x80,puVar4);
    func_0x0001098cd138();
    param_2 = puVar9;
  }
  puVar4 = puVar9;
  if (*(char *)((long)param_1 + 0x145) == '\x01') {
    func_0x0001098ccf88();
    puVar4 = (ulong *)0x88;
    func_0x000107c280a8(0x88,puVar9);
    func_0x0001098cd138();
    param_2 = puVar4;
  }
  uVar3 = param_1[0x20];
  for (iVar7 = 0; (int)uVar3 != iVar7; iVar7 = iVar7 + 1) {
    uVar6 = param_1[0x1f];
    puVar9 = param_1 + 0x1f;
    if ((uVar6 & 1) != 0) {
      puVar9 = (ulong *)(uVar6 + (long)iVar7 * 8 + 7);
    }
    puVar5 = (ulong *)(ulong)*(uint *)(*puVar9 + 0x34);
    puVar4 = (ulong *)0x12;
    func_0x0001098cd074();
    param_2 = puVar4;
  }
  if ((int)param_1[0x29] != 0) {
    func_0x0001098ccf88();
    param_2 = (ulong *)0x98;
    func_0x000107c280a8(0x98,puVar4);
    func_0x0001098cd138();
  }
  if ((param_1[1] & 1) != 0) {
    func_0x0001098cd0a0();
    if ((long)puVar5 < 0) {
      lVar10 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar10 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar10);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 1098cbad4; end: 1098cbbab;  */

void FUN_1098cbad4(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  long unaff_x20;
  
  func_0x0001098ccf08();
  uVar3 = 0x1a;
  func_0x000107c280a8(0x1a);
  func_0x0001098cd024();
  func_0x0001098cce6c(*(undefined4 *)(unaff_x20 + 0x14));
  func_0x0001098ccee8();
  func_0x0001098cd054();
  uVar4 = (ulong)*(uint *)(unaff_x20 + 0x14);
  uVar5 = uVar3;
  func_0x0001098cd0d4();
  uVar1 = in_x4;
  func_0x0001001a597c(in_x4,uVar5);
  uVar2 = (ulong)((int)uVar3 << 3 | 2);
  func_0x0001001a59d0(uVar2,uVar1);
  func_0x0001001a59d0(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,uVar4,in_x4);
  return;
}



/* Entry: 1098cbbac; end: 1098cbe4f;  */

/* WARNING: Removing unreachable block (ram,0x0001098cbc8c) */
/* WARNING: Removing unreachable block (ram,0x0001098cbc48) */
/* WARNING: Removing unreachable block (ram,0x0001098cbbfc) */
/* WARNING: Removing unreachable block (ram,0x0001098cbc20) */
/* WARNING: Removing unreachable block (ram,0x0001098cbc68) */
/* WARNING: Removing unreachable block (ram,0x0001098cbcb8) */

void FUN_1098cbbac(ulong param_1)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long extraout_x9;
  long lVar8;
  long lStack_58;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar5 = param_1;
  func_0x0001098cd014();
  while (lStack_58 != 0) {
    func_0x0001098cd114();
    func_0x0001098ccfac();
  }
  func_0x0001098ccf50(*(undefined4 *)(param_1 + 0x38));
  func_0x0001098ccf50(*(undefined4 *)(param_1 + 0x58));
  func_0x0001098ccf50(*(undefined4 *)(param_1 + 0x78));
  func_0x0001098ccf50(*(undefined4 *)(param_1 + 0x98));
  func_0x0001098ccf50(*(undefined4 *)(param_1 + 0xb8));
  func_0x0001098ccf50(*(undefined4 *)(param_1 + 0xd8));
  uVar7 = *(ulong *)(param_1 + 0xf8);
  lVar6 = (ulong)uVar3 + (long)*(int *)(param_1 + 0x100) * 2;
  iVar4 = (int)lVar6;
  puVar2 = (ulong *)(param_1 + 0xf8);
  if ((uVar7 & 1) != 0) {
    puVar2 = (ulong *)(uVar7 + 7);
  }
  for (lVar8 = (long)*(int *)(param_1 + 0x100) << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
    uVar5 = *puVar2;
    FUN_1098cbe50();
    lVar6 = uVar5 + lVar6;
    iVar4 = (int)lVar6;
    puVar2 = puVar2 + 1;
  }
  func_0x0001098cd274(*(undefined8 *)(param_1 + 0x110));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x0001098cd31c();
  }
  func_0x0001098cd274(*(undefined8 *)(param_1 + 0x118));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x0001098cd31c();
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      FUN_1098c92a4(*(undefined8 *)(param_1 + 0x120));
      func_0x0001098cce48();
    }
    if ((uVar3 >> 1 & 1) != 0) {
      FUN_1098c93b0(*(undefined8 *)(param_1 + 0x128));
      func_0x0001098cce48();
    }
    if ((uVar3 >> 2 & 1) != 0) {
      FUN_1098c94b4(*(undefined8 *)(param_1 + 0x130));
      func_0x0001098cce48();
    }
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x138)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x13c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x140)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar4 + 3;
  if (*(char *)(param_1 + 0x144) == '\0') {
    iVar1 = iVar4;
  }
  iVar4 = iVar1 + 3;
  if (*(char *)(param_1 + 0x145) == '\0') {
    iVar4 = iVar1;
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    iVar4 = iVar4 + ((int)LZCOUNT(*(int *)(param_1 + 0x148)) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098cd308();
    lVar6 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    iVar4 = (int)lVar6 + iVar4;
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return;
}



/* Entry: 1098cbe50; end: 1098cbe6b;  */

long FUN_1098cbe50(long param_1)

{
  long extraout_x8;
  
  FUN_1098c84c4();
  func_0x0001098ccea4();
  return param_1 + extraout_x8;
}



/* Entry: 1098cbe6c; end: 1098cbe6f;  */

void FUN_1098cbe6c(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098cd000();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  func_0x0001059929d4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x0001098cc8f0(unaff_x21 + 0x38,unaff_x20 + 0x38);
  FUN_1098ccbf0(unaff_x21 + 0x58,unaff_x20 + 0x58);
  func_0x0001059929d4(unaff_x21 + 0x78,unaff_x20 + 0x78);
  func_0x0001059929d4(unaff_x21 + 0x98,unaff_x20 + 0x98);
  func_0x0001098ccca0(unaff_x21 + 0xb8,unaff_x20 + 0xb8);
  FUN_1098ccd3c(unaff_x21 + 0xd8,unaff_x20 + 0xd8);
  puVar2 = (ulong *)(unaff_x21 + 0xf8);
  lVar3 = unaff_x20 + 0xf8;
  FUN_1098cc038();
  func_0x0001098cd24c(*(undefined8 *)(unaff_x20 + 0x110));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098cd1e4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x110);
    func_0x000107c30248();
  }
  func_0x0001098cd24c(*(undefined8 *)(unaff_x20 + 0x118));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098cd1e4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x118);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x120);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1098ccae8();
        *(ulong **)(unaff_x21 + 0x120) = puVar2;
      }
      else {
        FUN_1098c91cc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x128);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1098ccb40();
        *(ulong **)(unaff_x21 + 0x128) = puVar2;
      }
      else {
        func_0x0001098c92d8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x130);
      if (puVar2 == (ulong *)0x0) {
        FUN_1098ccb98();
        *(ulong **)(unaff_x21 + 0x130) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        func_0x0001098c93e4();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x138) != 0) {
    *(int *)(unaff_x21 + 0x138) = *(int *)(unaff_x20 + 0x138);
  }
  if (*(int *)(unaff_x20 + 0x13c) != 0) {
    *(int *)(unaff_x21 + 0x13c) = *(int *)(unaff_x20 + 0x13c);
  }
  if (*(int *)(unaff_x20 + 0x140) != 0) {
    *(int *)(unaff_x21 + 0x140) = *(int *)(unaff_x20 + 0x140);
  }
  if (*(char *)(unaff_x20 + 0x144) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x144) = 1;
  }
  if (*(char *)(unaff_x20 + 0x145) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x145) = 1;
  }
  if (*(int *)(unaff_x20 + 0x148) != 0) {
    *(int *)(unaff_x21 + 0x148) = *(int *)(unaff_x20 + 0x148);
  }
  func_0x0001098cd144();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x0001098cd1cc();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098cbe70; end: 1098cc037;  */

void FUN_1098cbe70(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098cd000();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001098cd3e0();
  }
  func_0x0001059929d4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x0001098cc8f0(unaff_x21 + 0x38,unaff_x20 + 0x38);
  FUN_1098ccbf0(unaff_x21 + 0x58,unaff_x20 + 0x58);
  func_0x0001059929d4(unaff_x21 + 0x78,unaff_x20 + 0x78);
  func_0x0001059929d4(unaff_x21 + 0x98,unaff_x20 + 0x98);
  func_0x0001098ccca0(unaff_x21 + 0xb8,unaff_x20 + 0xb8);
  FUN_1098ccd3c(unaff_x21 + 0xd8,unaff_x20 + 0xd8);
  puVar2 = (ulong *)(unaff_x21 + 0xf8);
  lVar3 = unaff_x20 + 0xf8;
  FUN_1098cc038();
  func_0x0001098cd24c(*(undefined8 *)(unaff_x20 + 0x110));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098cd1e4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x110);
    func_0x000107c30248();
  }
  func_0x0001098cd24c(*(undefined8 *)(unaff_x20 + 0x118));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098cd1e4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x118);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x120);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1098ccae8();
        *(ulong **)(unaff_x21 + 0x120) = puVar2;
      }
      else {
        FUN_1098c91cc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x128);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_1098ccb40();
        *(ulong **)(unaff_x21 + 0x128) = puVar2;
      }
      else {
        func_0x0001098c92d8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x130);
      if (puVar2 == (ulong *)0x0) {
        FUN_1098ccb98();
        *(ulong **)(unaff_x21 + 0x130) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        func_0x0001098c93e4();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x138) != 0) {
    *(int *)(unaff_x21 + 0x138) = *(int *)(unaff_x20 + 0x138);
  }
  if (*(int *)(unaff_x20 + 0x13c) != 0) {
    *(int *)(unaff_x21 + 0x13c) = *(int *)(unaff_x20 + 0x13c);
  }
  if (*(int *)(unaff_x20 + 0x140) != 0) {
    *(int *)(unaff_x21 + 0x140) = *(int *)(unaff_x20 + 0x140);
  }
  if (*(char *)(unaff_x20 + 0x144) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x144) = 1;
  }
  if (*(char *)(unaff_x20 + 0x145) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x145) = 1;
  }
  if (*(int *)(unaff_x20 + 0x148) != 0) {
    *(int *)(unaff_x21 + 0x148) = *(int *)(unaff_x20 + 0x148);
  }
  func_0x0001098cd144();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x0001098cd1cc();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098cc038; end: 1098cc0af;  */

void FUN_1098cc038(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1098cc0b0; end: 1098cc0cf;  */

void FUN_1098cc0b0(void)

{
  func_0x0001098cd404();
  FUN_1098ca610();
  return;
}



/* Entry: 1098cc0d0; end: 1098cc0ff;  */

long * FUN_1098cc0d0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1098cc100; end: 1098cc14b;  */

undefined8 * FUN_1098cc100(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  func_0x0001098cc8f0(param_1,param_3);
  return param_1;
}



/* Entry: 1098cc14c; end: 1098cc17f;  */

void FUN_1098cc14c(void)

{
  undefined1 in_ZR;
  
  func_0x0001098cd1b4();
  if (!(bool)in_ZR) {
    func_0x0001098cd068();
  }
  return;
}



/* Entry: 1098cc180; end: 1098cc1a3;  */

undefined8 FUN_1098cc180(undefined8 param_1)

{
  FUN_1098cc1a4(param_1,0);
  return param_1;
}



/* Entry: 1098cc1a4; end: 1098cc1bb;  */

void FUN_1098cc1a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1098cc1bc; end: 1098cc1ef;  */

void FUN_1098cc1bc(void)

{
  undefined1 in_ZR;
  
  func_0x0001098cd1b4();
  if (!(bool)in_ZR) {
    func_0x0001098cd068();
  }
  return;
}



/* Entry: 1098cc1f0; end: 1098cc21f;  */

void FUN_1098cc1f0(void)

{
  undefined1 in_ZR;
  
  func_0x0001098cd1b4();
  if (!(bool)in_ZR) {
    func_0x0001098cd418();
    func_0x0001098cd068();
  }
  return;
}



/* Entry: 1098cc220; end: 1098cc24f;  */

void FUN_1098cc220(void)

{
  undefined1 in_ZR;
  
  func_0x0001098cd1b4();
  if (!(bool)in_ZR) {
    func_0x0001098cd418();
    func_0x0001098cd068();
  }
  return;
}



/* Entry: 1098cc250; end: 1098cc26f;  */

void FUN_1098cc250(void)

{
  func_0x0001098cd404();
  FUN_1098cc038();
  return;
}



/* Entry: 1098cc270; end: 1098cc29f;  */

long * FUN_1098cc270(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1098cc2a0; end: 1098cc60f;  */

long FUN_1098cc2a0(long param_1)

{
  FUN_1098cc270(param_1 + 0xe8);
  FUN_1098cc220(param_1 + 200);
  FUN_1098cc1f0(param_1 + 0xa8);
  func_0x000105991a90(param_1 + 0x88);
  func_0x000105991a90(param_1 + 0x68);
  FUN_1098cc1bc(param_1 + 0x48);
  FUN_1098cc14c(param_1 + 0x28);
  func_0x000105991a90(param_1 + 8);
  return param_1;
}



/* Entry: 1098cc610; end: 1098cc633;  */

/* WARNING: Removing unreachable block (ram,0x00010055ea88) */
/* WARNING: Removing unreachable block (ram,0x00010055eac8) */
/* WARNING: Removing unreachable block (ram,0x00010055ea90) */
/* WARNING: Removing unreachable block (ram,0x00010055eabc) */
/* WARNING: Removing unreachable block (ram,0x000104c61180) */
/* WARNING: Removing unreachable block (ram,0x000104c611a4) */
/* WARNING: Removing unreachable block (ram,0x000104c61188) */
/* WARNING: Removing unreachable block (ram,0x000104c611a8) */
/* WARNING: Removing unreachable block (ram,0x000104c611bc) */
/* WARNING: Removing unreachable block (ram,0x000104c611c4) */
/* WARNING: Removing unreachable block (ram,0x000104c611d0) */
/* WARNING: Removing unreachable block (ram,0x000104c61160) */
/* WARNING: Removing unreachable block (ram,0x000104c61170) */
/* WARNING: Removing unreachable block (ram,0x00010055ead0) */

void FUN_1098cc610(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(int *)((long)param_1 + 4) == 1) {
    return;
  }
  if (param_1[3] == 0) {
    lVar4 = param_1[2];
    uVar1 = *(uint *)((long)param_1 + 4);
    puVar2 = param_1;
    for (uVar5 = (ulong)*(uint *)((long)param_1 + 0xc); uVar5 < uVar1; uVar5 = uVar5 + 1) {
      puVar3 = *(undefined8 **)(lVar4 + uVar5 * 8);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x000107c39c30();
        puVar3 = puVar2;
      }
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = puVar3 + 1;
        puVar3 = (undefined8 *)*puVar3;
        func_0x000107c60ca0();
        func_0x00010063c2d0();
      }
    }
  }
  uVar1 = *(uint *)((long)param_1 + 4);
  puVar2 = (undefined8 *)param_1[2];
  uVar5 = (ulong)uVar1;
  while (0 < (long)uVar5) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar5 = uVar5 - 1;
  }
  *(undefined4 *)param_1 = 0;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 1098cc634; end: 1098cc693;  */

long FUN_1098cc634(long param_1)

{
  long lVar1;
  long unaff_x21;
  
  func_0x0001098cd108();
  if (param_1 == 0) {
    func_0x0001098cd314();
  }
  else {
    func_0x00010b4d80e0();
    param_1 = unaff_x21;
  }
  lVar1 = param_1;
  func_0x0001098cd158(&PTR_FUN_110b183d8);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  func_0x0001098c8d80();
  return param_1;
}



/* Entry: 1098cc694; end: 1098cc6eb;  */

long FUN_1098cc694(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 in_register_00005008;
  
  func_0x0001098cd108();
  if (param_2 == 0) {
    func_0x0001098cd1c4();
  }
  else {
    func_0x0001098cd0e4();
  }
  lVar1 = param_2;
  func_0x0001098cd158(&PTR_FUN_110b18518);
  *(undefined8 *)(lVar1 + 0x34) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x2c) = param_1;
  func_0x0001098c9500();
  return param_2;
}



/* Entry: 1098cc6ec; end: 1098cc743;  */

long FUN_1098cc6ec(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 in_register_00005008;
  
  func_0x0001098cd108();
  if (param_2 == 0) {
    func_0x0001098cd1c4();
  }
  else {
    func_0x0001098cd0e4();
  }
  lVar1 = param_2;
  func_0x0001098cd158(&PTR_FUN_110b18478);
  *(undefined8 *)(lVar1 + 0x34) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x2c) = param_1;
  func_0x0001098c9808();
  return param_2;
}



/* Entry: 1098cc744; end: 1098cc79b;  */

long FUN_1098cc744(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 in_register_00005008;
  
  func_0x0001098cd108();
  if (param_2 == 0) {
    func_0x0001098cd1c4();
  }
  else {
    func_0x0001098cd0e4();
  }
  lVar1 = param_2;
  func_0x0001098cd158(&PTR_FUN_110b184c8);
  *(undefined8 *)(lVar1 + 0x34) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x2c) = param_1;
  func_0x0001098c9b10();
  return param_2;
}



/* Entry: 1098cc79c; end: 1098cc83f;  */

ulong * FUN_1098cc79c(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long alStack_48 [3];
  
  uVar1 = *param_2;
  *param_1 = (ulong)uVar1;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    plVar2 = (long *)((ulong)uVar1 << 3);
    __Znam();
    param_1[1] = (ulong)plVar2;
    func_0x00010564c19c(alStack_48,param_2);
    while (alStack_48[0] != 0) {
      *plVar2 = alStack_48[0] + 8;
      func_0x0001098ccff8();
      plVar2 = plVar2 + 1;
    }
    FUN_1098cc840(param_1[1],param_1[1] + *param_1 * 8);
  }
  return param_1;
}



/* Entry: 1098cc840; end: 1098cc85f;  */

void FUN_1098cc840(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1098cc860(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1098cc860; end: 1098cc883;  */

/* WARNING: Possible PIC construction at 0x000105991dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105992044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105991ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105992048) */
/* WARNING: Removing unreachable block (ram,0x000105992050) */
/* WARNING: Removing unreachable block (ram,0x00010599206c) */
/* WARNING: Removing unreachable block (ram,0x000105992074) */
/* WARNING: Removing unreachable block (ram,0x00010599207c) */
/* WARNING: Removing unreachable block (ram,0x000105992080) */
/* WARNING: Removing unreachable block (ram,0x000105992b08) */
/* WARNING: Removing unreachable block (ram,0x000105991dd0) */
/* WARNING: Removing unreachable block (ram,0x000105991ff4) */
/* WARNING: Removing unreachable block (ram,0x000105992000) */
/* WARNING: Removing unreachable block (ram,0x000105992008) */
/* WARNING: Removing unreachable block (ram,0x000105992010) */
/* WARNING: Removing unreachable block (ram,0x000105992014) */
/* WARNING: Removing unreachable block (ram,0x00010064ef5c) */

long * FUN_1098cc860(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar17;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar18;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 *puVar19;
  undefined1 *unaff_x29;
  undefined *puVar20;
  undefined *unaff_x30;
  
  lVar15 = 0;
  if (param_2 != param_1) {
    lVar15 = LZCOUNT((long)param_2 - (long)param_1 >> 3) * -2 + 0x7e;
  }
  uVar13 = 1;
  puVar3 = (undefined1 *)register0x00000008;
code_r0x000105991c74:
  puVar5 = puVar3 + -0x70;
  puVar4 = puVar3 + -0x70;
  *(long **)(puVar3 + -0x60) = unaff_x28;
  *(long **)(puVar3 + -0x58) = unaff_x27;
  *(long **)(puVar3 + -0x50) = unaff_x26;
  *(long **)(puVar3 + -0x48) = unaff_x25;
  *(long *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(long **)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  unaff_x29 = puVar3 + -0x10;
  plVar17 = param_2;
  unaff_x20 = param_2;
code_r0x000105991ca4:
  unaff_x21 = unaff_x20 + -1;
  *(long **)(puVar3 + -0x68) = unaff_x20 + -2;
  unaff_x25 = unaff_x20 + -3;
code_r0x000105991cb8:
  unaff_x24 = -lVar15;
  unaff_x27 = param_1;
code_r0x000105991cc0:
  param_1 = unaff_x27;
  unaff_x24 = unaff_x24 + 1;
  uVar14 = (long)unaff_x20 - (long)param_1 >> 3;
  switch(uVar14) {
  case 0:
  case 1:
    goto code_r0x000105991e3c;
  case 2:
    lVar15 = unaff_x20[-1];
    func_0x000100125af4(lVar15,*param_1);
    if (((uint)lVar15 >> 7 & 1) != 0) {
      lVar15 = *param_1;
      *param_1 = unaff_x20[-1];
      unaff_x20[-1] = lVar15;
    }
    goto code_r0x000105991e3c;
  case 3:
    plVar17 = param_1 + 1;
    puVar19 = *(undefined1 **)(puVar3 + -0x10);
    puVar20 = *(undefined **)(puVar3 + -8);
    plVar8 = unaff_x21;
    func_0x000105992ee0(param_1,plVar17,unaff_x21,param_3);
    goto code_r0x000105991f20;
  case 4:
    plVar17 = param_1 + 1;
    plVar11 = param_1 + 2;
    puVar19 = *(undefined1 **)(puVar3 + -0x10);
    puVar20 = *(undefined **)(puVar3 + -8);
    plVar9 = unaff_x21;
    func_0x000105992ee0(param_1);
    break;
  case 5:
    plVar17 = param_1 + 1;
    plVar8 = param_1 + 2;
    plVar10 = param_1 + 3;
    uVar2 = *(undefined8 *)(puVar3 + -0x10);
    uVar12 = *(undefined8 *)(puVar3 + -8);
    func_0x000105992ee0(param_1);
    puVar5 = puVar3 + -0xb0;
    *(long *)(puVar3 + -0xb0) = unaff_x24;
    *(undefined8 *)(puVar3 + -0xa8) = uVar13;
    *(long **)(puVar3 + -0xa0) = param_1;
    *(long **)(puVar3 + -0x98) = unaff_x21;
    *(long **)(puVar3 + -0x90) = unaff_x20;
    *(long **)(puVar3 + -0x88) = param_3;
    *(undefined8 *)(puVar3 + -0x80) = uVar2;
    *(undefined8 *)(puVar3 + -0x78) = uVar12;
    puVar19 = puVar3 + -0x80;
    plVar11 = plVar8;
    plVar9 = plVar10;
    func_0x000105992dd4();
    puVar20 = &UNK_105992048;
    unaff_x21 = plVar8;
    param_1 = plVar10;
    break;
  default:
    if ((long)uVar14 < 0x18) {
      plVar8 = param_1;
      func_0x000105992e24();
      if ((int)uVar13 == 0) {
        uVar2 = *(undefined8 *)(puVar3 + -0x10);
        uVar12 = *(undefined8 *)(puVar3 + -8);
        func_0x000105992ee0();
        if (plVar8 != plVar17) {
          *(long *)(puVar3 + -0xb0) = unaff_x24;
          *(undefined8 *)(puVar3 + -0xa8) = uVar13;
          *(long **)(puVar3 + -0xa0) = param_1;
          *(long **)(puVar3 + -0x98) = unaff_x21;
          *(long **)(puVar3 + -0x90) = unaff_x20;
          *(long **)(puVar3 + -0x88) = param_3;
          *(undefined8 *)(puVar3 + -0x80) = uVar2;
          *(undefined8 *)(puVar3 + -0x78) = uVar12;
          plVar10 = plVar8;
          while( true ) {
            plVar10 = plVar10 + 1;
            plVar11 = plVar8 + 1;
            if (plVar11 == plVar17) break;
            lVar15 = plVar8[1];
            func_0x000100125af4(lVar15,*plVar8);
            plVar8 = plVar11;
            if (((uint)lVar15 >> 7 & 1) != 0) {
              lVar15 = *plVar11;
              plVar11 = plVar10;
              do {
                plVar9 = plVar11 + -1;
                *plVar11 = *plVar9;
                lVar16 = lVar15;
                func_0x000100125af4(lVar15,plVar11[-2]);
                plVar11 = plVar9;
              } while (((uint)lVar16 >> 7 & 1) != 0);
              *plVar9 = lVar15;
            }
          }
        }
        return plVar8;
      }
      uVar2 = *(undefined8 *)(puVar3 + -0x10);
      uVar12 = *(undefined8 *)(puVar3 + -8);
      func_0x000105992ee0();
      if (plVar8 == plVar17) {
        return plVar8;
      }
      *(long *)(puVar3 + -0xb0) = unaff_x24;
      *(undefined8 *)(puVar3 + -0xa8) = uVar13;
      *(long **)(puVar3 + -0xa0) = param_1;
      *(long **)(puVar3 + -0x98) = unaff_x21;
      *(long **)(puVar3 + -0x90) = unaff_x20;
      *(long **)(puVar3 + -0x88) = param_3;
      *(undefined8 *)(puVar3 + -0x80) = uVar2;
      *(undefined8 *)(puVar3 + -0x78) = uVar12;
      func_0x000105992dd4();
      lVar15 = 0;
      plVar17 = plVar8;
      goto code_r0x0001059920b0;
    }
    if (unaff_x24 == 1) {
      uVar2 = *(undefined8 *)(puVar3 + -0x10);
      uVar12 = *(undefined8 *)(puVar3 + -8);
      plVar8 = param_1;
      plVar17 = unaff_x20;
      plVar10 = unaff_x20;
      plVar11 = param_3;
      func_0x000105992ee0();
      if (plVar8 == plVar17) {
        return plVar10;
      }
      *(undefined8 *)(puVar3 + -0xb0) = 1;
      *(undefined8 *)(puVar3 + -0xa8) = uVar13;
      *(long **)(puVar3 + -0xa0) = param_1;
      *(long **)(puVar3 + -0x98) = unaff_x21;
      *(long **)(puVar3 + -0x90) = unaff_x20;
      *(long **)(puVar3 + -0x88) = param_3;
      *(undefined8 *)(puVar3 + -0x80) = uVar2;
      *(undefined8 *)(puVar3 + -0x78) = uVar12;
      if (plVar8 != plVar17) {
        plVar9 = plVar8;
        func_0x000105992584();
        lVar15 = (long)plVar17 - (long)plVar8;
        for (; plVar17 != plVar10; plVar17 = plVar17 + 1) {
          func_0x000105992fa8();
          if (((uint)plVar9 >> 7 & 1) != 0) {
            lVar16 = *plVar17;
            *plVar17 = *plVar8;
            *plVar8 = lVar16;
            plVar9 = plVar8;
            func_0x0001059925e4(plVar8,plVar11,lVar15 >> 3,plVar8);
          }
        }
        func_0x000105992e24(plVar8);
        func_0x0001059926f4();
        plVar10 = plVar17;
      }
      return plVar10;
    }
    plVar8 = param_1 + (uVar14 >> 1);
    if (uVar14 < 0x81) {
      plVar17 = param_1;
      func_0x000105992f3c(plVar8,param_1,unaff_x21);
      unaff_x27 = param_1;
    }
    else {
      func_0x000105992f3c(param_1,plVar8,unaff_x21);
      unaff_x27 = plVar8 + -1;
      func_0x000105992f3c(param_1 + 1,unaff_x27,*(undefined8 *)(puVar3 + -0x68));
      func_0x000105992f3c(param_1 + 2,plVar8 + 1,unaff_x25);
      plVar17 = plVar8;
      func_0x000105992f3c(unaff_x27,plVar8,plVar8 + 1);
      lVar15 = *param_1;
      *param_1 = *plVar8;
      *plVar8 = lVar15;
    }
    if ((int)uVar13 == 0) {
      uVar6 = (uint)param_1[-1];
      plVar17 = (long *)*param_1;
      func_0x000100125af4();
      if ((uVar6 >> 7 & 1) == 0) goto code_r0x000105991dd8;
    }
    param_2 = param_1;
    func_0x000105992e24();
    func_0x000105992290();
    if (((ulong)plVar17 & 1) == 0) goto code_r0x000105991db8;
    unaff_x28 = param_1;
    plVar17 = param_2;
    func_0x000105992364(param_1,param_2,param_3);
    unaff_x27 = param_2 + 1;
    plVar8 = unaff_x27;
    func_0x000105992e24();
    iVar7 = (int)plVar8;
    func_0x000105992364();
    if (iVar7 == 0) goto code_r0x000105991db0;
    lVar15 = -unaff_x24;
    unaff_x20 = param_2;
    if (((ulong)unaff_x28 & 1) != 0) goto code_r0x000105991e3c;
    goto code_r0x000105991ca4;
  }
  puVar4 = puVar5 + -0x30;
  *(long **)(puVar5 + -0x30) = param_1;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(long **)(puVar5 + -0x20) = unaff_x20;
  *(long **)(puVar5 + -0x18) = param_3;
  *(undefined1 **)(puVar5 + -0x10) = puVar19;
  *(undefined **)(puVar5 + -8) = puVar20;
  puVar19 = puVar5 + -0x10;
  plVar8 = plVar11;
  func_0x000105992dd4();
  puVar20 = &UNK_105991ff4;
  unaff_x21 = plVar11;
  param_1 = plVar9;
code_r0x000105991f20:
  *(long **)(puVar4 + -0x30) = param_1;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = unaff_x20;
  *(long **)(puVar4 + -0x18) = param_3;
  *(undefined1 **)(puVar4 + -0x10) = puVar19;
  *(undefined **)(puVar4 + -8) = puVar20;
  func_0x000105992dc8();
  uVar6 = (uint)*plVar17;
  func_0x000105992ed8();
  lVar15 = *plVar8;
  func_0x000100125af4(lVar15,*param_3);
  if ((uVar6 >> 7 & 1) == 0) {
    if (-1 < (char)lVar15) {
      return (long *)0x0;
    }
    func_0x000105993004();
    uVar6 = (uint)*param_3;
    func_0x000105992ed8();
    if ((uVar6 >> 7 & 1) != 0) {
      lVar15 = *unaff_x21;
      *unaff_x21 = *param_3;
      *param_3 = lVar15;
    }
  }
  else {
    lVar16 = *unaff_x21;
    if ((char)lVar15 < '\0') {
      *unaff_x21 = *plVar8;
      *plVar8 = lVar16;
    }
    else {
      *unaff_x21 = *param_3;
      *param_3 = lVar16;
      uVar6 = (uint)*plVar8;
      func_0x000100125af4();
      if ((uVar6 >> 7 & 1) != 0) {
        func_0x000105993004();
      }
    }
  }
  return (long *)0x1;
code_r0x0001059920b0:
  plVar10 = plVar17 + 1;
  if (plVar10 == param_3) {
    return plVar8;
  }
  plVar8 = (long *)plVar17[1];
  func_0x000100125af4(plVar8,*plVar17);
  if (((uint)plVar8 >> 7 & 1) != 0) {
    plVar17 = (long *)*plVar10;
    lVar16 = lVar15;
    do {
      lVar18 = lVar16;
      puVar1 = (undefined8 *)((long)unaff_x20 + lVar18);
      puVar1[1] = *puVar1;
      plVar11 = unaff_x20;
      if (lVar18 == 0) goto code_r0x000105992104;
      plVar8 = plVar17;
      func_0x000100125af4(plVar17,puVar1[-1]);
      lVar16 = lVar18 + -8;
    } while (((uint)plVar8 >> 7 & 1) != 0);
    plVar11 = (long *)((long)unaff_x20 + lVar18);
code_r0x000105992104:
    *plVar11 = (long)plVar17;
  }
  lVar15 = lVar15 + 8;
  plVar17 = plVar10;
  goto code_r0x0001059920b0;
code_r0x000105991dd8:
  func_0x000105992e24();
  func_0x0001059921c4();
  uVar13 = 0;
  lVar15 = -unaff_x24;
  goto code_r0x000105991cb8;
code_r0x000105991db0:
  if (((ulong)unaff_x28 & 1) == 0) {
code_r0x000105991db8:
    lVar15 = -unaff_x24;
    unaff_x30 = &UNK_105991dd0;
    puVar3 = puVar3 + -0x70;
    unaff_x19 = param_3;
    unaff_x22 = param_1;
    unaff_x23 = uVar13;
    unaff_x26 = param_2;
    goto code_r0x000105991c74;
  }
  goto code_r0x000105991cc0;
code_r0x000105991e3c:
  plVar17 = *(long **)(puVar3 + -8);
  func_0x000105992ee0(plVar17);
  return plVar17;
}



/* Entry: 1098cc884; end: 1098cc937;  */

int FUN_1098cc884(void)

{
  int extraout_w8;
  
  func_0x000107c282a0();
  func_0x0001098cd258();
  return extraout_w8 + 2;
}



/* Entry: 1098cc938; end: 1098cc95f;  */

long FUN_1098cc938(void)

{
  long alStack_30 [4];
  
  FUN_1098cc960(alStack_30);
  return alStack_30[0] + 0x20;
}



/* Entry: 1098cc960; end: 1098cca33;  */

void FUN_1098cc960(undefined8 *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  uVar2 = param_3;
  func_0x000107c28188(param_3);
  piVar1 = param_2;
  func_0x0001098cce38();
  if (piVar1 == (int *)0x0) {
    uVar3 = (ulong)(*param_2 + 1);
    piVar1 = param_2;
    func_0x000107c27d60();
    if ((int)piVar1 != 0) {
      func_0x000107c28188(param_3);
      func_0x0001098cce38(param_2);
      uVar2 = uVar3;
    }
    piVar1 = param_2;
    func_0x000107c27d64(param_2,0x28);
    func_0x000107c2821c(piVar1 + 2,*(undefined8 *)(param_2 + 6),param_3);
    piVar1[8] = 0;
    func_0x000107c27d68(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 1098cca34; end: 1098ccad3;  */

void FUN_1098cca34(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  long lVar1;
  undefined8 uStack_48;
  
  func_0x0001098ccfd0();
  while (uStack_48 != 0) {
    func_0x0001098cd288();
    func_0x0001098ccdd4();
    lVar1 = param_1;
    if (param_1 == 0) {
      func_0x0001098ccf20();
      if ((int)param_1 != 0) {
        func_0x0001098cd288();
        func_0x0001098ccdd4();
      }
      func_0x000107c27d64();
      func_0x0001098cd180();
      func_0x000107c2821c();
      param_1 = unaff_x21 + 0x20;
      FUN_1098ca658(param_1,*(undefined8 *)(unaff_x19 + 0x18));
      func_0x0001098ccf94();
      func_0x0001098cd128();
      lVar1 = unaff_x21;
    }
    if (uStack_48 != lVar1) {
      FUN_1098ca700(lVar1 + 0x20);
      param_1 = lVar1 + 0x20;
      FUN_1098caa1c(param_1,uStack_48 + 0x20);
    }
    func_0x0001098ccff8();
    unaff_x21 = lVar1;
  }
  return;
}



/* Entry: 1098ccad4; end: 1098ccae7;  */

void FUN_1098ccad4(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1098ccae8; end: 1098ccb3f;  */

undefined8 * FUN_1098ccae8(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0001098cd108();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098cd1dc();
  }
  else {
    func_0x0001098cd0f0();
  }
  *param_1 = &PTR_FUN_110b18608;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_1098c91cc();
  return param_1;
}



/* Entry: 1098ccb40; end: 1098ccb97;  */

undefined8 * FUN_1098ccb40(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0001098cd108();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098cd1dc();
  }
  else {
    func_0x0001098cd0f0();
  }
  *param_1 = &PTR_FUN_110b185b8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x0001098c92d8();
  return param_1;
}



/* Entry: 1098ccb98; end: 1098ccbef;  */

undefined8 * FUN_1098ccb98(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0001098cd108();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098cd1dc();
  }
  else {
    func_0x0001098cd0f0();
  }
  *param_1 = &PTR_FUN_110b18428;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x0001098c93e4();
  return param_1;
}



/* Entry: 1098ccbf0; end: 1098ccd3b;  */

void FUN_1098ccbf0(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  long lVar2;
  long lStack_58;
  
  func_0x0001098ccfd0();
  while (lStack_58 != 0) {
    func_0x0001098cd280();
    func_0x0001098ccdd4();
    lVar2 = param_1;
    if (param_1 == 0) {
      func_0x0001098ccf20();
      if ((int)param_1 != 0) {
        func_0x0001098cd280();
        func_0x0001098ccdd4();
      }
      param_1 = unaff_x19;
      func_0x000107c27d64();
      func_0x0001098cd180();
      func_0x000107c2821c();
      uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
      *(undefined ***)(unaff_x21 + 0x20) = &PTR_FUN_110b18658;
      *(undefined8 *)(unaff_x21 + 0x28) = uVar1;
      *(undefined8 *)(unaff_x21 + 0x38) = 0;
      *(undefined8 *)(unaff_x21 + 0x40) = 0;
      *(undefined8 *)(unaff_x21 + 0x30) = 0;
      func_0x0001098ccf94();
      func_0x0001098cd128();
      lVar2 = unaff_x21;
    }
    if (lStack_58 != lVar2) {
      FUN_1098c8fc8(lVar2 + 0x20);
      param_1 = lVar2 + 0x20;
      FUN_1098c9138(param_1,lStack_58 + 0x20);
    }
    func_0x0001098ccff8();
    unaff_x21 = lVar2;
  }
  return;
}



/* Entry: 1098ccd3c; end: 1098ccdd3;  */

void FUN_1098ccd3c(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  long lVar1;
  undefined8 uStack_48;
  
  func_0x0001098ccfd0();
  while (uStack_48 != 0) {
    func_0x0001098cd288();
    func_0x0001098ccdd4();
    lVar1 = param_1;
    if (param_1 == 0) {
      func_0x0001098ccf20();
      if ((int)param_1 != 0) {
        func_0x0001098cd288();
        func_0x0001098ccdd4();
      }
      func_0x0001098cd37c();
      func_0x0001098cd180();
      func_0x000107c2821c();
      param_1 = unaff_x21 + 0x20;
      FUN_1098caab4(param_1,*(undefined8 *)(unaff_x19 + 0x18));
      func_0x0001098ccf94();
      func_0x0001098cd128();
      lVar1 = unaff_x21;
    }
    if (uStack_48 != lVar1) {
      FUN_1098cab5c(lVar1 + 0x20);
      param_1 = lVar1 + 0x20;
      FUN_1098cadb0(param_1,uStack_48 + 0x20);
    }
    func_0x0001098ccff8();
    unaff_x21 = lVar1;
  }
  return;
}



/* Entry: 1098ccdd4; end: 1098cd44b;  */

undefined1  [16] FUN_1098ccdd4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  undefined1 auVar5 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar4 = unaff_x19;
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00010055e598();
  uVar3 = (ulong)puVar4 & 0xffffffff;
  puVar4 = *(ulong **)(unaff_x19[2] + ((ulong)puVar4 & 0xffffffff) * 8);
  if (puVar4 == (ulong *)0x0 || ((ulong)puVar4 & 1) != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000107c30324();
      uVar2 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto code_r0x00010055e6b8;
    }
    unaff_x19 = (ulong *)0x0;
  }
  else {
    do {
      puVar1 = puVar4 + 1;
      func_0x00010055e9d4(puVar1,&lStack_50);
      unaff_x19 = puVar4;
      if (((ulong)puVar1 & 1) != 0) break;
      puVar4 = (ulong *)*puVar4;
      unaff_x19 = puVar4;
    } while (puVar4 != (ulong *)0x0);
  }
  uVar2 = 0;
code_r0x00010055e6b8:
  auVar5._8_8_ = uVar2 | uVar3;
  auVar5._0_8_ = unaff_x19;
  return auVar5;
}



/* Entry: 1098cd44c; end: 1098cd467;  */

long FUN_1098cd44c(long param_1)

{
  long extraout_x8;
  
  FUN_1098cbbac();
  func_0x0001098ce0a4();
  return param_1 + extraout_x8;
}



/* Entry: 1098cd468; end: 1098cd497;  */

void FUN_1098cd468(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
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



/* Entry: 1098cd498; end: 1098cd4bb;  */

undefined8 FUN_1098cd498(undefined8 param_1)

{
  func_0x0001098ce120();
  return param_1;
}



/* Entry: 1098cd4bc; end: 1098cd4bf;  */

undefined8 FUN_1098cd4bc(undefined8 param_1)

{
  func_0x0001098ce120();
  return param_1;
}



/* Entry: 1098cd4c0; end: 1098cd4d3;  */

void FUN_1098cd4c0(void)

{
  FUN_1098cd498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cd4d4; end: 1098cd4f3;  */

undefined ** FUN_1098cd4d4(void)

{
  return &PTR_DAT_110b18ea0;
}



/* Entry: 1098cd4f4; end: 1098cd597;  */

long * FUN_1098cd4f4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar1 = param_1;
    func_0x0001098ce0d0();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x0001098ce08c();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x11) == '\x01') {
    func_0x0001098ce0d0();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x0001098ce08c();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 1098cd598; end: 1098cd5ef;  */

long FUN_1098cd598(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10)) & 3) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098cd5f0; end: 1098cd613;  */

undefined8 FUN_1098cd5f0(undefined8 param_1)

{
  func_0x0001098ce120();
  return param_1;
}



/* Entry: 1098cd614; end: 1098cd617;  */

undefined8 FUN_1098cd614(undefined8 param_1)

{
  func_0x0001098ce120();
  return param_1;
}



/* Entry: 1098cd618; end: 1098cd62b;  */

void FUN_1098cd618(void)

{
  FUN_1098cd5f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cd62c; end: 1098cd64b;  */

undefined ** FUN_1098cd62c(void)

{
  return &PTR_DAT_110b18ef8;
}



/* Entry: 1098cd64c; end: 1098cd6c3;  */

long * FUN_1098cd64c(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = param_1;
    func_0x0001098ce0d0();
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    puVar3 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,lVar2);
    param_2 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar2 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar2 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar2,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 1098cd6c4; end: 1098cd6fb;  */

long FUN_1098cd6c4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098cd6fc; end: 1098cd727;  */

undefined8 FUN_1098cd6fc(undefined8 param_1)

{
  func_0x0001098ce120();
  FUN_1098cd728(param_1);
  return param_1;
}



/* Entry: 1098cd728; end: 1098cd777;  */

void FUN_1098cd728(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1098cb0c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098cd498();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1098cd5f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cd778; end: 1098cd77b;  */

undefined8 FUN_1098cd778(undefined8 param_1)

{
  func_0x0001098ce120();
  FUN_1098cd728(param_1);
  return param_1;
}



/* Entry: 1098cd77c; end: 1098cd78f;  */

void FUN_1098cd77c(void)

{
  FUN_1098cd6fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cd790; end: 1098cd79b;  */

undefined ** FUN_1098cd790(void)

{
  return &PTR_DAT_110b18f58;
}



/* Entry: 1098cd79c; end: 1098cd823;  */

void FUN_1098cd79c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1098cb1b4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001098cd4e0(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001098cd638(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1098cd824; end: 1098cdb1b;  */

long * FUN_1098cd824(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  plVar9 = param_1;
  if ((int)param_1[7] != 0) {
    plVar3 = param_1;
    FUN_1098ce080();
    plVar9 = (long *)(ulong)*(uint *)(param_1 + 7);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar3);
    func_0x000107c280b8(plVar9,uVar2);
    param_2 = plVar9;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    plVar9 = param_3;
    func_0x00010598f43c(param_3,*(int *)((long)param_1 + 0x3c),param_2);
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if ((char)param_1[8] == '\x01') {
    FUN_1098ce080();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar9);
    func_0x0001098ce08c();
    param_2 = plVar3;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar3 = (long *)0x4;
    func_0x0001098ce0bc(4,param_1[4],*(undefined4 *)(param_1[4] + 0x14));
    param_2 = plVar3;
  }
  puVar11 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar11[1];
    if (lVar6 == 0) goto LAB_1098cd91c;
    puVar4 = (undefined8 *)*puVar11;
  }
  else {
    puVar4 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_1098cd91c;
  }
  func_0x000107c303d4(puVar4,lVar6,1,&UNK_10f587025);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,5,puVar11,param_2);
  param_2 = plVar3;
LAB_1098cd91c:
  plVar9 = plVar3;
  if (*(char *)((long)param_1 + 0x41) == '\x01') {
    FUN_1098ce080();
    plVar9 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x0001098ce08c();
    param_2 = plVar9;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar9 = (long *)0x7;
    func_0x0001098ce0bc(7,param_1[5],*(undefined4 *)(param_1[5] + 0x14));
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if (*(char *)((long)param_1 + 0x42) == '\x01') {
    FUN_1098ce080();
    plVar3 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar9);
    func_0x0001098ce08c();
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if (*(char *)((long)param_1 + 0x43) == '\x01') {
    FUN_1098ce080();
    plVar9 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar3);
    func_0x0001098ce08c();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if (*(char *)((long)param_1 + 0x44) == '\x01') {
    FUN_1098ce080();
    plVar3 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar9);
    func_0x0001098ce08c();
    param_2 = plVar3;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar3 = (long *)0xb;
    func_0x0001098ce0bc(0xb,param_1[6],*(undefined4 *)(param_1[6] + 0x14));
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if (*(char *)((long)param_1 + 0x45) == '\x01') {
    FUN_1098ce080();
    plVar9 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar3);
    func_0x0001098ce08c();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if (*(char *)((long)param_1 + 0x46) == '\x01') {
    FUN_1098ce080();
    plVar3 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar9);
    func_0x0001098ce08c();
    param_2 = plVar3;
  }
  if ((int)param_1[9] != 0) {
    plVar3 = param_3;
    func_0x0001089f5440(param_3,(int)param_1[9],param_2);
    param_2 = plVar3;
  }
  plVar9 = plVar3;
  if (*(char *)((long)param_1 + 0x47) == '\x01') {
    FUN_1098ce080();
    plVar9 = (long *)0x78;
    func_0x000107c280a8(0x78,plVar3);
    func_0x0001098ce08c();
    param_2 = plVar9;
  }
  plVar3 = plVar9;
  if (*(char *)((long)param_1 + 0x4c) == '\x01') {
    FUN_1098ce080();
    plVar3 = (long *)0x80;
    func_0x000107c280a8(0x80,plVar9);
    func_0x0001098ce08c();
    param_2 = plVar3;
  }
  if ((int)param_1[10] != 0) {
    FUN_1098ce080();
    lVar6 = param_1[10];
    puVar5 = (undefined4 *)0x8d;
    func_0x000107c280a8(0x8d,plVar3);
    param_2 = (long *)(puVar5 + 1);
    *puVar5 = (int)lVar6;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar8 = param_1[1] & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      while( true ) {
        iVar12 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar10 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar10 - iVar12);
        if (iVar10 - iVar12 == 0 || iVar10 < iVar12) break;
        func_0x00010b4d5738();
        lVar6 = (long)param_2 + (long)iVar12;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar10);
    }
    _memcpy(param_2,lVar6,uVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar7);
  }
  return param_2;
}



/* Entry: 1098cdb1c; end: 1098cdc93;  */

void FUN_1098cdb1c(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  int extraout_w8;
  int extraout_w8_00;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar4 + 0x17) < '\0') {
    if (*(long *)(uVar4 + 8) == 0) goto LAB_1098cdb58;
  }
  else if (*(char *)(uVar4 + 0x17) == '\0') {
LAB_1098cdb58:
    iVar6 = 0;
    goto LAB_1098cdb5c;
  }
  func_0x000107c282a0();
  iVar6 = (int)uVar4 + 1;
LAB_1098cdb5c:
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_1098cd44c();
      iVar6 = iVar6 + iVar3 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
      FUN_1098cd598();
      func_0x0001098ce0a4();
      iVar6 = iVar6 + iVar3 + extraout_w8_00 + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x30);
      FUN_1098cd6c4();
      func_0x0001098ce0a4();
      iVar6 = iVar6 + iVar3 + extraout_w8 + 1;
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar6 = iVar6 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  bVar2 = (char)((ulong)uVar7 >> 8) * '\x02';
  iVar6 = (CONCAT12(bVar2,(ushort)(byte)((char)uVar7 * '\x02')) & 0xffff) +
          (uint)(byte)((char)((ulong)uVar7 >> 0x20) * '\x02') +
          (uint)(byte)((char)((ulong)uVar7 >> 0x10) * '\x02') +
          (uint)(byte)((char)((ulong)uVar7 >> 0x30) * '\x02') +
          (uint)bVar2 + (uint)(byte)((char)((ulong)uVar7 >> 0x28) * '\x02') +
          (uint)(byte)((char)((ulong)uVar7 >> 0x18) * '\x02') +
          (uint)(byte)((char)((ulong)uVar7 >> 0x38) * '\x02') + iVar6;
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  iVar3 = iVar6 + 3;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar3 = iVar3 + 6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 1098cdc94; end: 1098cde8f;  */

void FUN_1098cdc94(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        func_0x0001098cdf68(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_1098cbe70();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        FUN_1098cdfac(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_1098cd468();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_1098ce018(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x0001098cd5d0();
      }
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  if (*(char *)(param_2 + 0x43) == '\x01') {
    *(undefined1 *)(param_1 + 0x43) = 1;
  }
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  if (*(char *)(param_2 + 0x45) == '\x01') {
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  if (*(char *)(param_2 + 0x47) == '\x01') {
    *(undefined1 *)(param_1 + 0x47) = 1;
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098cde90; end: 1098cdea7;  */

void FUN_1098cde90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x0001098ce0ec();
  }
  else {
    func_0x0001098ce0f4();
  }
  *puVar1 = &PTR_FUN_110b18dc0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 1098cdea8; end: 1098cdfab;  */

void FUN_1098cdea8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098ce0ec();
  }
  else {
    func_0x0001098ce0f4();
  }
  *puVar1 = &PTR_FUN_110b18dc0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 1098cdfac; end: 1098ce017;  */

undefined8 * FUN_1098cdfac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098ce0ec();
  }
  else {
    func_0x0001098ce0f4();
  }
  *puVar1 = &PTR_FUN_110b18e10;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  FUN_1098cd468();
  return puVar1;
}



/* Entry: 1098ce018; end: 1098ce07f;  */

undefined8 * FUN_1098ce018(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098ce0ec();
  }
  else {
    func_0x0001098ce0f4();
  }
  *puVar1 = &PTR_FUN_110b18dc0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x0001098cd5d0();
  return puVar1;
}



/* Entry: 1098ce080; end: 1098ce13f;  */

ulong * FUN_1098ce080(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}


