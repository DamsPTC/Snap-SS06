/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073bd10c; end: 1073bd18f;  */

void FUN_1073bd10c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001073bee44();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x70) * 0x70;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x70) {
    FUN_1073bd1f0(lVar2,lVar3);
    lVar2 = lVar2 + 0x70;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x70) {
    FUN_1073bd398(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001073bec50();
  return;
}



/* Entry: 1073bd190; end: 1073bd1ef;  */

void FUN_1073bd190(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong unaff_x20;
  undefined8 uVar1;
  
  func_0x0001073bee90();
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = param_4;
  if (param_2 != (undefined4 *)0x0) {
    if (0x249249249249249 < unaff_x20) {
      func_0x000104bd35f4();
      *param_1 = *param_2;
      uVar1 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = uVar1;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      uVar1 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 6) = uVar1;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      uVar1 = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = uVar1;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_2 + 10) = 0;
      *(undefined8 *)(param_2 + 0xc) = 0;
      *(undefined8 *)(param_2 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x12) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x12) = 0;
      *(undefined8 *)(param_2 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x16) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1a) = 0;
      uVar1 = *(undefined8 *)(param_2 + 0x16);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x16) = uVar1;
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
      *(undefined8 *)(param_2 + 0x16) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x1a) = 0;
      return;
    }
    __Znwm(unaff_x20 * 0x70);
  }
  func_0x0001073bf180(0x70);
  return;
}



/* Entry: 1073bd1f0; end: 1073bd26f;  */

void FUN_1073bd1f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  return;
}



/* Entry: 1073bd270; end: 1073bd2e3;  */

long * FUN_1073bd270(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x70;
    FUN_1073bd398();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073bd2e4; end: 1073bd397;  */

void FUN_1073bd2e4(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined1 auStack_68 [8];
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar7 = param_1 + 2;
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 < (undefined4 *)*plVar7) {
    puVar6 = puVar5 + 1;
    *puVar5 = param_2;
  }
  else {
    lVar4 = ((long)puVar5 - *param_1 >> 2) + 1;
    plVar3 = param_1;
    FUN_1073bc394();
    lVar1 = *param_1;
    lVar2 = param_1[1];
    plStack_48 = plVar7;
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      FUN_1073bc414();
    }
    puStack_60 = (undefined4 *)((long)plVar3 + (lVar2 - lVar1));
    lStack_50 = (long)plVar3 + lVar4 * 4;
    puStack_58 = puStack_60 + 1;
    *puStack_60 = param_2;
    func_0x00010014b278();
    FUN_1073bc3d4();
    puVar6 = (undefined4 *)param_1[1];
    func_0x0001073bc444(auStack_68);
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 1073bd398; end: 1073bd48b;  */

long FUN_1073bd398(long param_1)

{
  func_0x00010730b05c(param_1 + 0x58);
  func_0x000100100fec(param_1 + 0x40);
  func_0x0001073bc74c(param_1 + 0x28);
  func_0x0001073bd420(param_1 + 8);
  return param_1;
}



/* Entry: 1073bd48c; end: 1073bd4a3;  */

void FUN_1073bd48c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1073bd4c0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073bd4a4; end: 1073bd4bf;  */

void FUN_1073bd4a4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1073bd4c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073bd4c0; end: 1073bd533;  */

long * FUN_1073bd4c0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x0001073bd510(param_1 + 3);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x40;
      FUN_1073bc1f4();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1073bd534; end: 1073bd54b;  */

void FUN_1073bd534(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073bd54c; end: 1073bd55f;  */

void FUN_1073bd54c(void)

{
  FUN_1073bd700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073bd560; end: 1073bd56f;  */

long FUN_1073bd560(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1073bd6c8(*(undefined8 *)(param_1 + 0x168));
  lVar1 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x0001073bc940(param_1 + 0x110);
  func_0x0001073bc940(param_1 + 0xd8);
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 200);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x68;
      func_0x0001073bd3d4();
    }
    *(long *)(param_1 + 200) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0xc0));
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xb0);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x58;
      FUN_1073bce70();
    }
    *(long *)(param_1 + 0xb0) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
  }
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x98);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x48;
      FUN_1073bccac();
    }
    *(long *)(param_1 + 0x98) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    while (lVar2 != lVar1) {
      func_0x0001073bc728(lVar2 + -0x18);
      if (*(long *)(lVar2 + -0x20) != 0) {
        func_0x0001000df548();
      }
      lVar2 = lVar2 + -0x40;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2);
    }
    *(long *)(param_1 + 0x80) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0xe0;
      func_0x0001073bc6e4();
    }
    *(long *)(param_1 + 0x68) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  return param_1 + 0x18;
}



/* Entry: 1073bd570; end: 1073bd583;  */

void FUN_1073bd570(void)

{
  FUN_1073bd584();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073bd584; end: 1073bd6c7;  */

long FUN_1073bd584(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1073bd6c8(*(undefined8 *)(param_1 + 0x150));
  lVar1 = *(long *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x0001073bc940(param_1 + 0xf8);
  func_0x0001073bc940(param_1 + 0xc0);
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xb0);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x68;
      func_0x0001073bd3d4();
    }
    *(long *)(param_1 + 0xb0) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
  }
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x98);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x58;
      FUN_1073bce70();
    }
    *(long *)(param_1 + 0x98) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x48;
      FUN_1073bccac();
    }
    *(long *)(param_1 + 0x80) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    while (lVar2 != lVar1) {
      func_0x0001073bc728(lVar2 + -0x18);
      if (*(long *)(lVar2 + -0x20) != 0) {
        func_0x0001000df548();
      }
      lVar2 = lVar2 + -0x40;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2);
    }
    *(long *)(param_1 + 0x68) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x50);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0xe0;
      func_0x0001073bc6e4();
    }
    *(long *)(param_1 + 0x50) = lVar1;
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  return param_1;
}



/* Entry: 1073bd6c8; end: 1073bd6ff;  */

void FUN_1073bd6c8(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    func_0x0001073bd2b8(param_1 + 2);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 1073bd700; end: 1073bd70f;  */

void FUN_1073bd700(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ab7a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073bd710; end: 1073bd773;  */

long * FUN_1073bd710(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x0001073bee44();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x0001073bf084(), (int)param_1 == 0) {
      func_0x0001073bf1d0();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_1073bd764;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_1073bd764:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 1073bd774; end: 1073bd7c7;  */

void FUN_1073bd774(void)

{
  func_0x0001073bee9c();
  func_0x0001073bf1c8();
  func_0x0001073bf134();
  FUN_1073bd7c8();
  func_0x00010014b278();
  FUN_1073bdb10();
  func_0x0001073bf230();
  func_0x0001073bf2ac();
  return;
}



/* Entry: 1073bd7c8; end: 1073bd8c3;  */

void FUN_1073bd7c8(void)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_40 [16];
  
  func_0x0001073bed8c();
  func_0x0001073bf314();
  FUN_1073bd8c4();
  func_0x0001073bf110();
  func_0x0001073bd900();
  FUN_1073bd8c4(auStack_40,*(undefined8 *)(unaff_x21 + 0x10),&UNK_10f40ebf1,&UNK_10f40ebf1,
                unaff_x20 + 0xa0,2);
  FUN_1073bd8c4(auStack_40,*(undefined8 *)(unaff_x21 + 0x18),&UNK_10f40ebfc,&UNK_10f40ebfc,
                unaff_x20 + 0xd8,3);
  func_0x0001073bf154();
  func_0x0001073bd93c();
  func_0x0001073bf328();
  FUN_1073bd8c4();
  func_0x0001073bf144();
  FUN_1073bd8c4();
  func_0x0001073bf1b0();
  func_0x0001073bd978();
  FUN_1073bd8c4(auStack_40,*(undefined8 *)(unaff_x21 + 0x40),"width","width",unaff_x20 + 0x2b0,8);
  return;
}



/* Entry: 1073bd8c4; end: 1073bd9b3;  */

void FUN_1073bd8c4(void)

{
  undefined1 in_CY;
  
  func_0x0001073bf2b4();
  func_0x0001073beb98();
  func_0x0001073bed18();
  while (func_0x0001073bec38(), !(bool)in_CY) {
    func_0x0001073bed08();
    FUN_1073bd9b4();
    func_0x0001073beeec();
  }
  return;
}



/* Entry: 1073bd9b4; end: 1073bd9d3;  */

void FUN_1073bd9b4(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bd9d4; end: 1073bda13;  */

void FUN_1073bd9d4(long param_1)

{
  if (*(int *)(param_1 + 8) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bda14; end: 1073bda1f;  */

void FUN_1073bda14(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073bda20; end: 1073bda3f;  */

void FUN_1073bda20(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bda40; end: 1073bda63;  */

void FUN_1073bda40(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bda64; end: 1073bda6f;  */

void FUN_1073bda64(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073bda70; end: 1073bda8f;  */

void FUN_1073bda70(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bda90; end: 1073bdab3;  */

void FUN_1073bda90(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bdab4; end: 1073bdabf;  */

void FUN_1073bdab4(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073bdac0; end: 1073bdadf;  */

void FUN_1073bdac0(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bdae0; end: 1073bdb03;  */

void FUN_1073bdae0(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bdb04; end: 1073bdb0f;  */

void FUN_1073bdb04(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073bdb10; end: 1073bdb6b;  */

void FUN_1073bdb10(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x0001073bee44();
  func_0x0001073bdb44();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 1073bdb6c; end: 1073bdb97;  */

void FUN_1073bdb6c(undefined8 *param_1,long *param_2,long param_3)

{
  undefined1 in_CY;
  long extraout_x9;
  long extraout_x10;
  
  if ((*(long *)(*(long *)*param_1 + param_3 * 8) != 0) && (func_0x0001073bf164(), !(bool)in_CY)) {
                    /* WARNING: Could not recover jumptable at 0x0001073becb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,extraout_x10 + extraout_x9);
    return;
  }
  return;
}



/* Entry: 1073bdb98; end: 1073bdbb3;  */

long * FUN_1073bdb98(long *param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  if ((int)param_1[1] == 2) {
    return param_1;
  }
  func_0x00010563ab98();
  func_0x0001073bee44();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x0001073bf084(), (int)param_1 == 0) {
      func_0x0001073bf1d0();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_1073bdc08;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_1073bdc08:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 1073bdbb4; end: 1073bdc17;  */

long * FUN_1073bdbb4(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x0001073bee44();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x0001073bf084(), (int)param_1 == 0) {
      func_0x0001073bf1d0();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_1073bdc08;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_1073bdc08:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 1073bdc18; end: 1073bdc6b;  */

void FUN_1073bdc18(void)

{
  func_0x0001073bee9c();
  func_0x0001073bf1c8();
  func_0x0001073bf134();
  FUN_1073bdc6c();
  func_0x00010014b278();
  FUN_1073bdb10();
  func_0x0001073bf230();
  func_0x0001073bf2ac();
  return;
}



/* Entry: 1073bdc6c; end: 1073bdd13;  */

void FUN_1073bdc6c(void)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_40 [16];
  
  func_0x0001073bed8c();
  FUN_1073bdd14(auStack_40);
  func_0x0001073bf154();
  func_0x0001073bdd50();
  func_0x0001073bf144();
  func_0x0001073bdd8c();
  FUN_1073bdd14(auStack_40,*(undefined8 *)(unaff_x21 + 0x18),&UNK_10f40ec2d,&UNK_10f40ec2d,
                unaff_x20 + 200,3);
  func_0x0001073bf1b0();
  func_0x0001073bddc8();
  return;
}



/* Entry: 1073bdd14; end: 1073bde03;  */

void FUN_1073bdd14(void)

{
  undefined1 in_CY;
  
  func_0x0001073bf2b4();
  func_0x0001073beb98();
  func_0x0001073bed18();
  while (func_0x0001073bec38(), !(bool)in_CY) {
    func_0x0001073bed08();
    FUN_1073bde04();
    func_0x0001073beeec();
  }
  return;
}



/* Entry: 1073bde04; end: 1073bde23;  */

void FUN_1073bde04(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bde24; end: 1073bde47;  */

void FUN_1073bde24(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bde48; end: 1073bde53;  */

void FUN_1073bde48(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073bde54; end: 1073bde73;  */

void FUN_1073bde54(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bde74; end: 1073bde97;  */

void FUN_1073bde74(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bde98; end: 1073bdea3;  */

void FUN_1073bde98(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073bdea4; end: 1073bdec3;  */

void FUN_1073bdea4(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bdec4; end: 1073bdee7;  */

void FUN_1073bdec4(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bdee8; end: 1073bdef3;  */

void FUN_1073bdee8(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073bdef4; end: 1073bdf13;  */

void FUN_1073bdef4(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bdf14; end: 1073bdf37;  */

void FUN_1073bdf14(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073bdf38; end: 1073bdf6f;  */

void FUN_1073bdf38(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073bdf70; end: 1073bdf8b;  */

void FUN_1073bdf70(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001073bdfac(param_1,&uStack_11);
  return;
}



/* Entry: 1073bdf8c; end: 1073bdfcb;  */

void FUN_1073bdf8c(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    func_0x0001073bee44(param_1,param_2);
    func_0x00010726ccd4();
    func_0x00010726ccd4(param_1 + 0x60,unaff_x19 + 0x60);
  }
  else {
    func_0x0001073bee90(param_1);
    func_0x000107278acc();
    func_0x000107278acc(param_1 + 0x60,unaff_x20 + 0x60);
  }
  return;
}



/* Entry: 1073bdfcc; end: 1073bdfe7;  */

void FUN_1073bdfcc(long param_1)

{
  FUN_1073bdfe8();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 1073bdfe8; end: 1073be023;  */

void FUN_1073bdfe8(long param_1)

{
  long unaff_x20;
  
  func_0x0001073bee90();
  func_0x000107278acc();
  func_0x000107278acc(param_1 + 0x60,unaff_x20 + 0x60);
  return;
}



/* Entry: 1073be024; end: 1073be04f;  */

void FUN_1073be024(long param_1)

{
  long unaff_x19;
  
  func_0x0001073bee44();
  func_0x00010726ccd4();
  func_0x00010726ccd4(param_1 + 0x60,unaff_x19 + 0x60);
  return;
}



/* Entry: 1073be050; end: 1073be06f;  */

void FUN_1073be050(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x0001073bc804();
  }
  return;
}



/* Entry: 1073be070; end: 1073be14b;  */

ulong * FUN_1073be070(ulong *param_1,ulong param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uStack_24;
  
  *param_1 = param_2;
  func_0x00010724e178(param_1 + 1,param_2,(param_2 & 0xffffffff) * 4 * (param_2 >> 0x20));
  *(bool *)(param_1 + 2) = (param_3 & 0xff000000) == 0;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  lVar5 = (*param_1 & 0xffffffff) * 4 * (*param_1 >> 0x20);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      lRam0000000113823db0 = lRam0000000113823db0 + lVar5;
    }
  } while (cVar3 != '\0');
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = (long)(0x1f - (int)LZCOUNT((int)lVar5));
  }
  piVar1 = (int *)(lVar2 * 4 + 0x113823db8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_24 = param_3;
  FUN_1073be14c(param_1[1],
                param_1[1] + (ulong)(uint)((int)*param_1 * *(int *)((long)param_1 + 4)) * 4,
                &uStack_24);
  return param_1;
}



/* Entry: 1073be14c; end: 1073be16f;  */

void FUN_1073be14c(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  while (0 < lVar1) {
    *param_1 = *param_3;
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  }
  return;
}



/* Entry: 1073be170; end: 1073be237;  */

long FUN_1073be170(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1073be238; end: 1073be28b;  */

void FUN_1073be238(void)

{
  func_0x0001073bee9c();
  func_0x0001073bf1c8();
  func_0x0001073bf134();
  FUN_1073be28c();
  func_0x00010014b278();
  FUN_1073bdb10();
  func_0x0001073bf230();
  func_0x0001073bf2ac();
  return;
}



/* Entry: 1073be28c; end: 1073be373;  */

void FUN_1073be28c(void)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_40 [16];
  
  func_0x0001073bed8c();
  func_0x0001073bf314();
  FUN_1073be374();
  func_0x0001073bf110();
  func_0x0001073be3b0();
  FUN_1073be374(auStack_40,*(undefined8 *)(unaff_x21 + 0x10),"height","height",unaff_x20 + 0x88,2);
  func_0x0001073bf154();
  func_0x0001073be3ec();
  func_0x0001073bf144();
  FUN_1073be374();
  func_0x0001073bf328();
  FUN_1073be374();
  func_0x0001073be3b0(auStack_40,*(undefined8 *)(unaff_x21 + 0x30),&UNK_10f40ec48,&UNK_10f40ec48,
                      unaff_x20 + 0x198,6);
  func_0x0001073be3b0(auStack_40,*(undefined8 *)(unaff_x21 + 0x38),&UNK_10f40ec52,&UNK_10f40ec52,
                      unaff_x20 + 0x1f0,7);
  return;
}



/* Entry: 1073be374; end: 1073be427;  */

void FUN_1073be374(void)

{
  undefined1 in_CY;
  
  func_0x0001073bf2b4();
  func_0x0001073beb98();
  func_0x0001073bed18();
  while (func_0x0001073bec38(), !(bool)in_CY) {
    func_0x0001073bed08();
    FUN_1073be428();
    func_0x0001073beeec();
  }
  return;
}



/* Entry: 1073be428; end: 1073be447;  */

void FUN_1073be428(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073be448; end: 1073be46b;  */

void FUN_1073be448(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073be46c; end: 1073be477;  */

void FUN_1073be46c(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073be478; end: 1073be497;  */

void FUN_1073be478(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073be498; end: 1073be4bb;  */

void FUN_1073be498(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073be4bc; end: 1073be4c7;  */

void FUN_1073be4bc(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073be4c8; end: 1073be4e7;  */

void FUN_1073be4c8(void)

{
  func_0x0001073bec80();
  func_0x0001073beef8();
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073be4e8; end: 1073be50b;  */

void FUN_1073be4e8(void)

{
  func_0x0001073bec90();
  func_0x0001073becc8();
  return;
}



/* Entry: 1073be50c; end: 1073be627;  */

void FUN_1073be50c(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 1073be628; end: 1073be6c3;  */

long FUN_1073be628(long param_1)

{
  long unaff_x19;
  int unaff_w20;
  
  func_0x0001073bee90();
  func_0x0001073be674();
  if ((unaff_x19 + 8 == param_1) || (func_0x000104c2fc44(), unaff_w20 != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 1073be6c4; end: 1073be6e7;  */

undefined8 FUN_1073be6c4(undefined8 param_1)

{
  FUN_1073be6e8(param_1);
  return param_1;
}



/* Entry: 1073be6e8; end: 1073be72b;  */

void FUN_1073be6e8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x0001073becf8();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1073be72c; end: 1073beaeb;  */

void FUN_1073be72c(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong extraout_x8;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong extraout_x9;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  byte bVar17;
  
  func_0x0001073bee90();
  uVar8 = param_1 + 0x18;
  func_0x00010726364c(uVar8,param_2 + 0x10);
  unaff_x20[1] = uVar8;
  uVar11 = unaff_x19[1];
  if ((uVar11 != 0) && ((float)(unaff_x19[3] + 1) <= *(float *)(unaff_x19 + 4) * (float)uVar11))
  goto LAB_1073be93c;
  bVar1 = 2 < uVar11;
  bVar2 = uVar11 == 3;
  func_0x0001073bf368(uVar11 << 1);
  uVar10 = extraout_x8;
  if (!bVar1 || bVar2) {
    uVar10 = extraout_x9;
  }
  if (uVar10 - 1 == 0) {
    uVar10 = 2;
  }
  else if ((uVar10 & uVar10 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar11 = unaff_x19[1];
  }
  if (uVar11 < uVar10) {
LAB_1073be7dc:
    FUN_1073beb04(uVar10);
    FUN_1073beaec();
    unaff_x19[1] = uVar10;
    lVar5 = *unaff_x19;
    for (uVar11 = 0; uVar10 != uVar11; uVar11 = uVar11 + 1) {
      *(undefined8 *)(lVar5 + uVar11 * 8) = 0;
    }
    plVar13 = (long *)unaff_x19[2];
    if (plVar13 != (long *)0x0) {
      uVar11 = plVar13[1];
      uVar12 = uVar10 - 1;
      if ((uVar10 & uVar12) == 0) {
        uVar11 = uVar11 & uVar12;
      }
      else if (uVar10 <= uVar11) {
        uVar16 = 0;
        if (uVar10 != 0) {
          uVar16 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar16 * uVar10;
      }
      *(long **)(lVar5 + uVar11 * 8) = unaff_x19 + 2;
      while (plVar15 = plVar13, plVar13 = (long *)*plVar15, plVar13 != (long *)0x0) {
        uVar16 = plVar13[1];
        if ((uVar10 & uVar12) == 0) {
          uVar16 = uVar16 & uVar12;
        }
        else if (uVar10 <= uVar16) {
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = uVar16 / uVar10;
          }
          uVar16 = uVar16 - uVar9 * uVar10;
        }
        if (uVar16 != uVar11) {
          plVar7 = plVar13;
          if (*(long *)(lVar5 + uVar16 * 8) == 0) {
            *(long **)(lVar5 + uVar16 * 8) = plVar15;
            uVar11 = uVar16;
          }
          else {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)0x0;
              if (*plVar6 == 0) break;
              plVar4 = plVar13 + 2;
              func_0x000104c32db4(plVar4,*plVar6 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (((ulong)plVar4 & 1) != 0);
            *plVar15 = (long)plVar7;
            lVar5 = *unaff_x19;
            *plVar6 = **(long **)(lVar5 + uVar16 * 8);
            **(undefined8 **)(lVar5 + uVar16 * 8) = plVar13;
            plVar13 = plVar15;
          }
        }
      }
    }
  }
  else if (uVar10 < uVar11) {
    uVar12 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001073bf058();
    }
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if (uVar10 < uVar11) {
      if (uVar10 != 0) goto LAB_1073be7dc;
      FUN_1073beaec();
      unaff_x19[1] = 0;
    }
  }
  uVar11 = unaff_x19[1];
LAB_1073be93c:
  uVar10 = uVar11 - 1;
  if ((uVar11 & uVar10) == 0) {
    uVar12 = uVar10 & uVar8;
  }
  else {
    uVar12 = uVar8;
    if (uVar11 <= uVar8) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar8 / uVar11;
      }
      uVar12 = uVar8 - uVar12 * uVar11;
    }
  }
  plVar13 = *(long **)(*unaff_x19 + uVar12 * 8);
  if (plVar13 != (long *)0x0) {
    uVar14 = 0;
    bVar17 = 0;
    for (; lVar5 = *plVar13, lVar5 != 0; plVar13 = (long *)*plVar13) {
      uVar16 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & uVar10) == 0) {
        uVar9 = uVar16 & uVar10;
      }
      else {
        uVar9 = uVar16;
        if (uVar11 <= uVar16) {
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar16 / uVar11;
          }
          uVar9 = uVar16 - uVar9 * uVar11;
        }
      }
      if (uVar9 != uVar12) break;
      if (uVar16 == uVar8) {
        lVar5 = lVar5 + 0x10;
        func_0x000104c32db4(lVar5,unaff_x20 + 2);
        uVar3 = (uint)lVar5;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar14;
      if ((bool)(bVar17 & bVar2)) break;
      uVar14 = uVar14 | bVar2;
      bVar17 = bVar17 | bVar2;
    }
    uVar11 = unaff_x19[1];
  }
  bVar17 = POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) + POPCOUNT((char)(uVar11 >> 0x10))
           + POPCOUNT((char)(uVar11 >> 0x18)) + POPCOUNT((char)(uVar11 >> 0x20)) +
           POPCOUNT((char)(uVar11 >> 0x28)) + POPCOUNT((char)(uVar11 >> 0x30)) +
           POPCOUNT((char)(uVar11 >> 0x38));
  uVar8 = unaff_x20[1];
  if (bVar17 < 2) {
    uVar8 = uVar11 - 1 & uVar8;
  }
  else if (uVar11 <= uVar8) {
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = uVar8 / uVar11;
    }
    uVar8 = uVar8 - uVar10 * uVar11;
  }
  if (plVar13 == (long *)0x0) {
    plVar13 = unaff_x19 + 2;
    *unaff_x20 = *plVar13;
    *plVar13 = (long)unaff_x20;
    lVar5 = *unaff_x19;
    *(long **)(lVar5 + uVar8 * 8) = plVar13;
    if (*unaff_x20 != 0) {
      uVar8 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar8 = uVar8 & uVar11 - 1;
      }
      else if (uVar11 <= uVar8) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar8 / uVar11;
        }
        uVar8 = uVar8 - uVar10 * uVar11;
      }
      *(long **)(lVar5 + uVar8 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *plVar13;
    *plVar13 = (long)unaff_x20;
    if (*unaff_x20 != 0) {
      uVar10 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        uVar12 = 0;
        if (uVar11 != 0) {
          uVar12 = uVar10 / uVar11;
        }
        uVar10 = uVar10 - uVar12 * uVar11;
      }
      if (uVar10 != uVar8) {
        *(long **)(*unaff_x19 + uVar10 * 8) = unaff_x20;
      }
    }
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 1073beaec; end: 1073beb03;  */

void FUN_1073beaec(long *param_1,long param_2)

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



/* Entry: 1073beb04; end: 1073beb1f;  */

long * FUN_1073beb04(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    param_1 = (long *)((long)param_1 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1);
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001073bd2b8(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1073beb20; end: 1073beb63;  */

long * FUN_1073beb20(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001073bd2b8(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1073beb64; end: 1073beb67;  */

void FUN_1073beb64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab920;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073beb68; end: 1073beb7b;  */

void FUN_1073beb68(void)

{
  func_0x0001073beb88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073beb7c; end: 1073bf3c3;  */

long FUN_1073beb7c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000100100fec(param_1 + 0x30);
  }
  return param_1 + 0x20;
}



/* Entry: 1073bf3c4; end: 1073bf54f;  */

void FUN_1073bf3c4(float param_1,float param_2,undefined8 *param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  undefined1 auStack_68 [40];
  
  func_0x0001073c739c();
  *param_3 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_3 + 1);
  *(float *)(unaff_x19 + 0x20) = param_1;
  *(float *)(unaff_x19 + 0x24) = param_2;
  uVar2 = (ulong)(param_1 / (float)param_5);
  uVar3 = (ulong)(param_2 / (float)param_5);
  *(ulong *)(unaff_x19 + 0x28) = uVar2;
  *(ulong *)(unaff_x19 + 0x30) = uVar3;
  *(double *)(unaff_x19 + 0x38) = (double)((float)uVar2 / param_1);
  *(double *)(unaff_x19 + 0x40) = (double)((float)uVar3 / param_2);
  func_0x0001072ab680(unaff_x19 + 0x48,param_8);
  _bzero(unaff_x19 + 0x70,0x90);
  FUN_1073bf550(unaff_x19 + 0x88,*(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  FUN_1073bf550(unaff_x19 + 0xa0,*(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  FUN_1073bf550(unaff_x19 + 0xb8,*(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  if ((ulong)((*(long *)(unaff_x19 + 0x80) - *(long *)(unaff_x19 + 0x70)) / 0x140) < param_7) {
    if (0xcccccccccccccc < param_7) {
      FUN_1073c27c4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1073bf50c);
      (*pcVar1)();
    }
    FUN_1073c2854(auStack_68,param_7,
                  (*(long *)(unaff_x19 + 0x78) - *(long *)(unaff_x19 + 0x70)) / 0x140);
    FUN_1073c27d0(unaff_x19 + 0x70,auStack_68);
    func_0x0001073c6f50();
  }
  func_0x0001072a07f4();
  func_0x0001072a0860();
  return;
}



/* Entry: 1073bf550; end: 1073bf6f7;  */

long * FUN_1073bf550(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  
  lVar9 = *param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar2 = ((long)puVar10 - lVar9) / 0x18;
  uVar4 = param_2 - uVar2;
  if (param_2 < uVar2 || uVar4 == 0) {
    if (param_2 < uVar2) {
      func_0x0001073c6af4(param_1,lVar9 + param_2 * 0x18);
      plVar7 = (long *)param_1[1];
      while (plVar7 != unaff_x19) {
        plVar7 = plVar7 + -3;
        func_0x0001057f951c();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return plVar7;
    }
  }
  else {
    plVar7 = param_1 + 2;
    if ((ulong)((*plVar7 - (long)puVar10) / 0x18) < uVar4) {
      if (0xaaaaaaaaaaaaaaa < param_2) {
        FUN_1073c2784();
        func_0x0001073c739c();
        *plVar7 = extraout_x8;
        func_0x0001072a07f4();
        func_0x0001072a091c();
        func_0x0001073c2948(param_1 + 0x17);
        func_0x0001073c2948(param_1 + 0x14);
        func_0x0001073c2948(param_1 + 0x11);
        FUN_1073c29a0(param_1 + 0xe);
        func_0x0001072ab6cc(param_1 + 9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
        return param_1;
      }
      uVar3 = (*plVar7 - lVar9) / 0x18;
      uVar12 = uVar3 * 2;
      if (uVar12 < param_2 || uVar12 - param_2 == 0) {
        uVar12 = param_2;
      }
      if (0x555555555555554 < uVar3) {
        uVar12 = 0xaaaaaaaaaaaaaaa;
      }
      func_0x00010737fdc8(plVar7,uVar12);
      puVar11 = (undefined8 *)((long)plVar7 + ((long)puVar10 - lVar9));
      puVar10 = puVar11;
      for (lVar9 = param_2 * 0x18 + uVar2 * -0x18; lVar9 != 0; lVar9 = lVar9 + -0x18) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10 = puVar10 + 3;
      }
      puVar5 = (undefined8 *)*param_1;
      puVar1 = (undefined8 *)param_1[1];
      lVar9 = (long)puVar1 - (long)puVar5;
      puVar8 = puVar11 + (lVar9 / -0x18) * 3;
      for (puVar10 = puVar5; puVar10 != puVar1; puVar10 = puVar10 + 3) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        uVar13 = *puVar10;
        puVar8[1] = puVar10[1];
        *puVar8 = uVar13;
        puVar8[2] = puVar10[2];
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar8 = puVar8 + 3;
      }
      for (; puVar5 != puVar1; puVar5 = puVar5 + 3) {
        func_0x0001057f951c();
      }
      plVar6 = (long *)*param_1;
      *param_1 = (long)(puVar11 + (lVar9 / -0x18) * 3);
      param_1[1] = (long)(puVar11 + uVar4 * 3);
      param_1[2] = (long)(plVar7 + uVar12 * 3);
      param_1 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar6;
      }
    }
    else {
      puVar11 = puVar10 + uVar4 * 3;
      for (lVar9 = param_2 * 0x18 + uVar2 * -0x18; lVar9 != 0; lVar9 = lVar9 + -0x18) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10 = puVar10 + 3;
      }
      param_1[1] = (long)puVar11;
      param_1 = plVar7;
    }
  }
  return param_1;
}



/* Entry: 1073bf6f8; end: 1073bf757;  */

void FUN_1073bf6f8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x0001073c739c();
  *param_1 = extraout_x8;
  func_0x0001072a07f4();
  func_0x0001072a091c();
  func_0x0001073c2948(unaff_x19 + 0xb8);
  func_0x0001073c2948(unaff_x19 + 0xa0);
  func_0x0001073c2948(unaff_x19 + 0x88);
  FUN_1073c29a0(unaff_x19 + 0x70);
  func_0x0001072ab6cc(unaff_x19 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 8);
  return;
}



/* Entry: 1073bf758; end: 1073bf75b;  */

void FUN_1073bf758(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x0001073c739c();
  *param_1 = extraout_x8;
  func_0x0001072a07f4();
  func_0x0001072a091c();
  func_0x0001073c2948(unaff_x19 + 0xb8);
  func_0x0001073c2948(unaff_x19 + 0xa0);
  func_0x0001073c2948(unaff_x19 + 0x88);
  FUN_1073c29a0(unaff_x19 + 0x70);
  func_0x0001072ab6cc(unaff_x19 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 8);
  return;
}



/* Entry: 1073bf75c; end: 1073bf76f;  */

void FUN_1073bf75c(void)

{
  FUN_1073bf6f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073bf770; end: 1073bf777;  */

long FUN_1073bf770(long param_1)

{
  return param_1 + 8;
}



/* Entry: 1073bf778; end: 1073bf8ab;  */

void FUN_1073bf778(ulong param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_68;
  
  lStack_68 = (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) / 0x140;
  uVar3 = param_1;
  FUN_1073bf8ac(*param_3);
  uVar4 = param_1;
  func_0x0001073bf8c0(param_3[1]);
  uVar5 = param_1;
  FUN_1073bf8ac(param_3[2]);
  uVar6 = param_1;
  func_0x0001073bf8c0(param_3[3]);
  for (; uVar9 = uVar4, uVar3 <= uVar5; uVar3 = uVar3 + 1) {
    for (; uVar9 <= uVar6; uVar9 = uVar9 + 1) {
      lVar7 = uVar3 + *(long *)(param_1 + 0x28) * uVar9;
      FUN_1073bf8d4(*(long *)(param_1 + 0x88) + lVar7 * 0x18,8);
      func_0x00010737fce0(*(long *)(param_1 + 0x88) + lVar7 * 0x18,&lStack_68);
      plVar1 = (long *)(*(long *)(param_1 + 0x88) + lVar7 * 0x18);
      uVar8 = plVar1[1] - *plVar1 >> 3;
      uVar2 = *(ulong *)(param_1 + 0xd0);
      if (*(ulong *)(param_1 + 0xd0) <= uVar8) {
        uVar2 = uVar8;
      }
      *(ulong *)(param_1 + 0xd0) = uVar2;
    }
  }
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  func_0x0001073c6bf0();
  FUN_1073bf954();
  return;
}



/* Entry: 1073bf8ac; end: 1073bf8d3;  */

uint FUN_1073bf8ac(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_2 + 0x28) - 1;
  uVar2 = (uint)(*(double *)(param_2 + 0x38) * (double)param_1);
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = uVar1;
  }
  return uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1073bf8d4; end: 1073bf953;  */

long *** FUN_1073bf8d4(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long ***ppplVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar3 = (long ***)(param_1 + 2);
  lVar4 = *param_1;
  uVar1 = (long)*ppplVar3 - lVar4 >> 3;
  uVar2 = uVar1 <= param_2;
  if (uVar1 < param_2) {
    if (param_2 >> 0x3d != 0) {
      func_0x0001057f9214();
      func_0x0001073c6e48();
      func_0x0001057f93b4();
      func_0x0001073c6aec();
      func_0x0001073c6fe4();
      if ((bool)uVar2) {
        FUN_1073c2a60();
      }
      else {
        FUN_1073c2a2c();
        ppplVar3 = (long ***)(unaff_x20 + 0x140);
      }
      param_1[1] = (long)ppplVar3;
      return ppplVar3 + -0x28;
    }
    lVar5 = param_1[1];
    pplStack_28 = (long **)ppplVar3;
    func_0x000104becd60();
    lStack_40 = (long)ppplVar3 + (lVar5 - lVar4);
    pplStack_30 = (long **)(ppplVar3 + param_2);
    pplStack_48 = (long **)ppplVar3;
    lStack_38 = lStack_40;
    func_0x0001073c6d6c();
    func_0x0001057f9394();
    ppplVar3 = &pplStack_48;
    func_0x0001057f93b4(ppplVar3);
  }
  return ppplVar3;
}



/* Entry: 1073bf954; end: 1073bf987;  */

long FUN_1073bf954(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6fe4();
  if ((bool)in_CY) {
    FUN_1073c2a60();
  }
  else {
    FUN_1073c2a2c();
    param_1 = unaff_x20 + 0x140;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x140;
}



/* Entry: 1073bf988; end: 1073bfe8f;  */

undefined *** FUN_1073bf988(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined ***pppuVar14;
  undefined8 extraout_x8;
  undefined8 *puVar15;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uStack_170;
  undefined8 auStack_168 [2];
  undefined8 uStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  
  func_0x0001073c6be4();
  func_0x0001073c69bc();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001072a0ed8();
  ppuStack_98 = &PTR_DAT_1109abb18;
  pppuStack_a0 = appuStack_b8;
  appuStack_b8[0] = &PTR_DAT_1109abb98;
  fVar23 = param_3[2];
  uVar6 = fVar23 == 0.0;
  if (0.0 <= fVar23) {
    fVar2 = *param_3;
    uVar19 = SUB41(fVar2,0);
    uVar20 = (undefined1)((uint)fVar2 >> 8);
    uVar21 = (undefined1)((uint)fVar2 >> 0x10);
    uVar22 = (undefined1)((uint)fVar2 >> 0x18);
    fVar25 = *(float *)(unaff_x20 + 0x20);
    uVar6 = fVar2 == fVar25;
    if (fVar2 < fVar25) {
      fVar24 = param_3[3];
      uVar6 = fVar24 == 0.0;
      if (0.0 <= fVar24) {
        fVar26 = param_3[1];
        fVar27 = *(float *)(unaff_x20 + 0x24);
        uVar6 = fVar26 == fVar27;
        if (fVar26 < fVar27) {
          if ((fVar25 <= fVar23) && (fVar2 <= 0.0)) {
            bVar4 = false;
            bVar5 = true;
            if (fVar26 <= 0.0) {
              bVar4 = false;
              bVar5 = true;
              if (!NAN(fVar27) && !NAN(fVar24)) {
                bVar4 = fVar27 == fVar24;
                bVar5 = fVar24 <= fVar27;
              }
            }
            if (!bVar5 || bVar4) {
              uVar16 = 0;
              lVar17 = 0x120;
              do {
                uVar8 = (*(long *)(unaff_x20 + 0x78) - *(long *)(unaff_x20 + 0x70)) / 0x140;
                uVar6 = uVar16 == uVar8;
                if (uVar8 <= uVar16) break;
                lVar12 = *(long *)(unaff_x20 + 0x70) + lVar17;
                if (*(int *)(lVar12 + 0x18) == 1) {
                  FUN_1073c0118();
                  iVar7 = (int)lVar12;
                  uStack_e0 = CONCAT44(fVar23,CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19
                                                                                      ))));
                  uStack_d8 = CONCAT44(fVar25,fVar24);
                  uStack_108 = CONCAT44(uStack_108._4_4_,1);
                  func_0x0001073c6db4();
                }
                else if (*(int *)(lVar12 + 0x18) == 0) {
                  uStack_d8 = CONCAT44(uStack_d8._4_4_,1);
                  pppuVar14 = &ppuStack_98;
                  func_0x0001072a1bc0(pppuVar14,uVar16,lVar12,&uStack_e0);
                  iVar7 = (int)pppuVar14;
                }
                else {
                  func_0x0001072a0e60();
                  iVar7 = (int)lVar12;
                  uStack_e0 = CONCAT44(fVar23,CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19
                                                                                      ))));
                  uStack_d8 = CONCAT44(fVar25,fVar24);
                  uStack_108 = CONCAT44(uStack_108._4_4_,1);
                  func_0x0001073c6db4();
                }
                uVar16 = uVar16 + 1;
                lVar17 = lVar17 + 0x140;
                uVar6 = iVar7 == 1;
              } while (!(bool)uVar6);
              goto LAB_1073bfa08;
            }
          }
          uStack_170 = unaff_x20;
          FUN_1073bf8ac();
          uVar16 = unaff_x20;
          func_0x0001073bf8c0();
          uVar8 = unaff_x20;
          FUN_1073bf8ac();
          uVar9 = unaff_x20;
          func_0x0001073bf8c0();
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_c0 = 0x3f800000;
          func_0x0001072abda8(&uStack_e0,*(undefined8 *)(unaff_x20 + 0xd8));
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_f0 = 0x3f800000;
          func_0x0001072abda8(&uStack_110,*(undefined8 *)(unaff_x20 + 0xe8));
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_120 = 0x3f800000;
          func_0x0001072abda8(&uStack_140,*(undefined8 *)(unaff_x20 + 0xf8));
          for (; uVar6 = uStack_170 == uVar8, uVar18 = uVar16, uStack_170 <= uVar8;
              uStack_170 = uStack_170 + 1) {
            for (; uVar18 <= uVar9; uVar18 = uVar18 + 1) {
              bVar4 = false;
              lVar17 = uStack_170 + *(long *)(unaff_x20 + 0x28) * uVar18;
              puVar15 = (undefined8 *)(*(long *)(unaff_x20 + 0x88) + lVar17 * 0x18);
              puVar1 = (undefined8 *)puVar15[1];
              for (puVar15 = (undefined8 *)*puVar15; puVar15 != puVar1; puVar15 = puVar15 + 1) {
                auStack_168[0] = *puVar15;
                puVar11 = &uStack_e0;
                func_0x0001072ac278(puVar11,auStack_168);
                if (puVar11 == (undefined8 *)0x0) {
                  func_0x0001072a1b80(&uStack_e0,auStack_168);
                  lVar12 = *(long *)(unaff_x20 + 0x70);
                  FUN_1073c0134(lVar12,*(undefined8 *)(unaff_x20 + 0x78),auStack_168[0]);
                  lVar12 = lVar12 + 0x120;
                  func_0x0001072ac330(lVar12);
                  pfVar10 = param_3;
                  func_0x0001078756d8(param_3,lVar12);
                  if ((int)pfVar10 != 0) {
                    uStack_148 = 0;
                    pppuVar14 = &ppuStack_98;
                    lStack_150 = lVar17;
                    func_0x0001072a1bc0(pppuVar14,auStack_168[0],lVar12,&lStack_150);
                    uVar6 = true;
                    if ((int)pppuVar14 == 1) goto LAB_1073bfddc;
                    bVar4 = true;
                  }
                }
              }
              puVar15 = (undefined8 *)(*(long *)(unaff_x20 + 0xa0) + lVar17 * 0x18);
              puVar1 = (undefined8 *)puVar15[1];
              for (puVar15 = (undefined8 *)*puVar15; puVar15 != puVar1; puVar15 = puVar15 + 1) {
                uStack_158 = *puVar15;
                puVar11 = &uStack_110;
                func_0x0001072ac278(puVar11,&uStack_158);
                if (puVar11 == (undefined8 *)0x0) {
                  func_0x0001072a1b80(&uStack_110,&uStack_158);
                  lVar12 = *(long *)(unaff_x20 + 0x70);
                  FUN_1073c0134(lVar12,*(undefined8 *)(unaff_x20 + 0x78),uStack_158);
                  lVar12 = lVar12 + 0x120;
                  func_0x0001072ac360();
                  lVar13 = lVar12;
                  func_0x00010787574c();
                  uVar3 = uStack_158;
                  if ((int)lVar13 != 0) {
                    FUN_1073c0118(lVar12);
                    func_0x0001073c7220();
                    pppuVar14 = &ppuStack_98;
                    func_0x0001072a1bc0(pppuVar14,uVar3,&lStack_150,auStack_168);
                    uVar6 = true;
                    if ((int)pppuVar14 == 1) goto LAB_1073bfddc;
                    bVar4 = true;
                  }
                }
              }
              puVar15 = (undefined8 *)(*(long *)(unaff_x20 + 0xb8) + lVar17 * 0x18);
              puVar1 = (undefined8 *)puVar15[1];
              for (puVar15 = (undefined8 *)*puVar15; puVar15 != puVar1; puVar15 = puVar15 + 1) {
                uStack_158 = *puVar15;
                puVar11 = &uStack_140;
                func_0x0001072ac278(puVar11,&uStack_158);
                if (puVar11 == (undefined8 *)0x0) {
                  func_0x0001072a1b80(&uStack_140,&uStack_158);
                  lVar12 = *(long *)(unaff_x20 + 0x70);
                  FUN_1073c0134(lVar12,*(undefined8 *)(unaff_x20 + 0x78),uStack_158);
                  lVar12 = lVar12 + 0x120;
                  func_0x0001072ac37c();
                  lVar13 = lVar12;
                  func_0x000107875848();
                  uVar3 = uStack_158;
                  if ((int)lVar13 != 0) {
                    func_0x0001072a0e60(lVar12);
                    func_0x0001073c7220();
                    pppuVar14 = &ppuStack_98;
                    func_0x0001072a1bc0(pppuVar14,uVar3,&lStack_150,auStack_168);
                    uVar6 = true;
                    if ((int)pppuVar14 == 1) goto LAB_1073bfddc;
                    bVar4 = true;
                  }
                }
              }
              if (!bVar4) {
                func_0x0001072a1bf4(appuStack_b8,uStack_170,uVar18,lVar17);
              }
            }
          }
LAB_1073bfddc:
          func_0x0001072a8888(&uStack_140);
          func_0x0001072a8888(&uStack_110);
          func_0x0001072a8888(&uStack_e0);
        }
      }
    }
  }
LAB_1073bfa08:
  func_0x0001072abac4(appuStack_b8);
  pppuVar14 = &ppuStack_98;
  func_0x0001072aba90(pppuVar14);
  func_0x0001073c69a8(extraout_x8);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x0001072a8888(&uStack_140);
    func_0x0001072a8888(&uStack_110);
    func_0x0001072a8888(&uStack_e0);
    func_0x0001072abac4(appuStack_b8);
    func_0x0001072aba90(&ppuStack_98);
    func_0x0001072a7b80();
    func_0x0001073c6b48();
    return (undefined ***)
           CONCAT44((int)*(float *)(unaff_x19 + 0x24),(int)*(float *)(unaff_x19 + 0x20));
  }
  return pppuVar14;
}



/* Entry: 1073bfe90; end: 1073bfeb3;  */

undefined8 FUN_1073bfe90(long param_1)

{
  return CONCAT44((int)*(float *)(param_1 + 0x24),(int)*(float *)(param_1 + 0x20));
}



/* Entry: 1073bfeb4; end: 1073bffab;  */

void FUN_1073bfeb4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_50 = 0x3f800000;
  for (uVar2 = 0; uVar2 < *(ulong *)(param_2 + 0x28); uVar2 = uVar2 + 1) {
    for (uVar3 = 0; uVar3 < *(ulong *)(param_2 + 0x30); uVar3 = uVar3 + 1) {
      func_0x0001073c6ad0();
      func_0x0001073c6ad0();
      func_0x0001073c6ad0();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (plVar1 = (long *)lStack_60; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    func_0x0001072a19bc(param_1,plVar1 + 3);
  }
  func_0x0001072ac0a4(&uStack_70);
  return;
}



/* Entry: 1073bffac; end: 1073c005b;  */

void FUN_1073bffac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [40];
  
  if (*param_5 != param_5[1]) {
    lVar1 = *param_1;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0x3f800000;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    uStack_70 = param_4;
    func_0x0001072a813c(auStack_68,&uStack_a8);
    func_0x0001072a7ed8(lVar1,&uStack_70);
    func_0x0001072a8888(auStack_58);
    func_0x0001072a8888(&uStack_98);
    func_0x0001072a7ef0(lVar1 + 0x28,*param_5,param_5[1]);
  }
  return;
}



/* Entry: 1073c005c; end: 1073c0117;  */

ulong FUN_1073c005c(float *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  lVar3 = param_3;
  func_0x0001073c69bc();
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  uStack_38 = extraout_x8;
  func_0x0001072ac134(param_1,(*(long *)(lVar3 + 0x78) - *(long *)(lVar3 + 0x70)) / 0x140);
  lVar1 = *(long *)(param_3 + 0x78);
  for (lVar3 = *(long *)(param_3 + 0x70); bVar2 = lVar3 == lVar1, !bVar2; lVar3 = lVar3 + 0x140) {
    func_0x0001072ac190(auStack_78,param_3 + 0x48,lVar3);
    func_0x0001073c6d6c();
    func_0x0001072aad1c();
    func_0x000104c3323c(auStack_78);
  }
  func_0x0001073c69a8(uStack_38);
  if (!bVar2) {
    ___stack_chk_fail();
    func_0x000107269124();
    func_0x0001073c6b48();
    return (ulong)(uint)(*param_1 - param_1[2]);
  }
  return CONCAT44(uVar5,uVar4);
}



/* Entry: 1073c0118; end: 1073c0133;  */

float FUN_1073c0118(float *param_1)

{
  return *param_1 - param_1[2];
}



/* Entry: 1073c0134; end: 1073c015f;  */

undefined1 *
FUN_1073c0134(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,ulong param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  undefined8 uVar12;
  undefined8 extraout_x8_00;
  undefined1 *puVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_278 [56];
  undefined1 auStack_240 [56];
  undefined1 auStack_208 [288];
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar10 = (undefined8 *)(((long)param_2 - (long)param_1) / 0x140);
  uVar5 = param_3 == puVar10;
  if (param_3 < puVar10) {
    return param_1 + (long)param_3 * 0x140;
  }
  func_0x0001073c2b30();
  pcStack_18 = FUN_1073c0160;
  puVar10 = param_2;
  puVar7 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0001073c69bc();
  uStack_58 = extraout_x8;
  func_0x0001072bb3b4();
  uStack_b0 = (ulong)*(byte *)(param_4 + 4);
  uStack_a0 = (ulong)*(uint *)(param_4 + 8);
  uStack_90 = (ulong)*(uint *)(param_4 + 0xc);
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  puStack_c0 = puVar7;
  puStack_b8 = puVar10;
  func_0x0001003a91d4(&UNK_10f40ec5f);
  func_0x0001003a9204(auStack_d8);
  pppuStack_60 = appuStack_78;
  appuStack_78[0] = &PTR_FUN_1109aba08;
  uVar11 = param_5 >> 4 & 0xfffffff;
  FUN_1073bf3c4((float)(param_5 & 0xffffffff),(float)(param_5 & 0xffffffff),param_1,auStack_d8,
                uVar11,&puStack_c0,0x80,appuStack_78);
  func_0x0001072ab6cc(appuStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined **)(param_1 + 0x108) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  uVar12 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x128) = uVar12;
  puVar10 = param_3;
  func_0x000104c2fe00(param_1 + 0x130);
  *(int *)(param_1 + 0x168) = (int)param_5;
  func_0x0001073c69a8(uStack_58);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001072ab6cc(appuStack_78);
    puVar8 = auStack_d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001073c6aec();
    func_0x0001073c73b0(FUN_1073c0294);
    ppuStack_80 = &puStack_20;
    func_0x0001073c7268();
    puVar9 = puVar8;
    func_0x0001073c69bc();
    iVar2 = *(int *)(puVar9 + 0x100);
    uStack_e8 = extraout_x8_00;
    *(int *)(puVar9 + 0x100) = iVar2 + 1;
    puVar1 = (undefined1 *)puVar10[1];
    for (puVar13 = (undefined1 *)*puVar10; bVar6 = puVar13 == puVar1, !bVar6;
        puVar13 = puVar13 + 0x18) {
      puVar9 = puVar13;
      FUN_1073c0418();
      uVar3 = *(uint *)(puVar8 + 0x168);
      fVar14 = (float)uVar3 / (float)(uVar11 & 0xffffffff);
      auVar21._8_8_ = puVar9;
      auVar21._0_8_ = puVar9;
      auVar19._8_4_ = 0xffffffe0;
      auVar19._0_8_ = 0xfffffffffffffff0;
      auVar19._12_4_ = 0xffffffff;
      auVar19 = NEON_ushl(auVar21,auVar19,8);
      auVar20._0_4_ = (int)(short)puVar9;
      auVar20._4_4_ = (int)puVar9 >> 0x10;
      auVar20._8_4_ = auVar19._0_4_ >> 0x10;
      auVar20._12_4_ = auVar19._8_4_ >> 0x10;
      auVar19 = NEON_scvtf(auVar20,4);
      iVar15 = (int)(auVar19._0_4_ * fVar14);
      iVar16 = (int)(auVar19._4_4_ * fVar14);
      iVar17 = (int)(auVar19._8_4_ * fVar14);
      iVar18 = (int)(auVar19._12_4_ * fVar14);
      if (((iVar15 < (int)uVar3 && iVar16 < (int)uVar3) && (-1 < iVar17)) && (-1 < iVar18)) {
        func_0x000104c2fe00(auStack_240,param_2);
        func_0x000104c2fe00(auStack_278,param_3);
        FUN_1073c2b44(auStack_208,param_4,auStack_240,auStack_278,param_5,param_8,iVar2);
        auVar4._4_4_ = iVar16;
        auVar4._0_4_ = iVar15;
        auVar4._8_4_ = iVar17;
        auVar4._12_4_ = iVar18;
        auVar19 = NEON_scvtf(auVar4,4);
        auVar21 = NEON_ucvtf(auVar4,4);
        uStack_290 = auVar19._0_8_;
        uStack_288 = auVar21._8_8_;
        FUN_1073bf778(uStack_290,auVar21._0_8_,puVar8,auStack_208,&uStack_290);
        func_0x0001072a6b0c(auStack_208);
        func_0x000104c2f714(auStack_278);
        puVar9 = auStack_240;
        func_0x000104c2f714(puVar9);
      }
    }
    func_0x0001073c69a8(uStack_e8);
    if (!bVar6) {
      ___stack_chk_fail();
      func_0x0001072a6b0c(auStack_208);
      func_0x000104c2f714(auStack_278);
      func_0x000104c2f714(auStack_240);
      func_0x0001073c6aec();
      FUN_1073c6068();
      return (undefined1 *)0x800080007fff7fff;
    }
    return puVar9;
  }
  return param_1;
}



/* Entry: 1073c0160; end: 1073c0293;  */

undefined1 *
FUN_1073c0160(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,ulong param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 in_ZR;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  undefined8 uVar11;
  undefined8 extraout_x8_00;
  undefined1 *puVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_268 [56];
  undefined1 auStack_230 [56];
  undefined1 auStack_1f8 [288];
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  puVar9 = param_2;
  puVar6 = param_3;
  func_0x0001073c69bc();
  uStack_48 = extraout_x8;
  func_0x0001072bb3b4();
  uStack_a0 = (ulong)*(byte *)(param_4 + 4);
  uStack_90 = (ulong)*(uint *)(param_4 + 8);
  uStack_80 = (ulong)*(uint *)(param_4 + 0xc);
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_b0 = puVar6;
  puStack_a8 = puVar9;
  func_0x0001003a91d4(&UNK_10f40ec5f);
  func_0x0001003a9204(auStack_c8);
  pppuStack_50 = appuStack_68;
  appuStack_68[0] = &PTR_FUN_1109aba08;
  uVar10 = param_5 >> 4 & 0xfffffff;
  FUN_1073bf3c4((float)(param_5 & 0xffffffff),(float)(param_5 & 0xffffffff),param_1,auStack_c8,
                uVar10,&puStack_b0,0x80,appuStack_68);
  func_0x0001072ab6cc(appuStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined **)(param_1 + 0x108) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  uVar11 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x128) = uVar11;
  puVar9 = param_3;
  func_0x000104c2fe00(param_1 + 0x130);
  *(int *)(param_1 + 0x168) = (int)param_5;
  func_0x0001073c69a8(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001072ab6cc(appuStack_68);
  puVar7 = auStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001073c6aec();
  func_0x0001073c73b0(FUN_1073c0294);
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001073c7268();
  puVar8 = puVar7;
  func_0x0001073c69bc();
  iVar2 = *(int *)(puVar8 + 0x100);
  uStack_d8 = extraout_x8_00;
  *(int *)(puVar8 + 0x100) = iVar2 + 1;
  puVar1 = (undefined1 *)puVar9[1];
  for (puVar12 = (undefined1 *)*puVar9; bVar5 = puVar12 == puVar1, !bVar5; puVar12 = puVar12 + 0x18)
  {
    puVar8 = puVar12;
    FUN_1073c0418();
    uVar3 = *(uint *)(puVar7 + 0x168);
    fVar13 = (float)uVar3 / (float)(uVar10 & 0xffffffff);
    auVar20._8_8_ = puVar8;
    auVar20._0_8_ = puVar8;
    auVar18._8_4_ = 0xffffffe0;
    auVar18._0_8_ = 0xfffffffffffffff0;
    auVar18._12_4_ = 0xffffffff;
    auVar18 = NEON_ushl(auVar20,auVar18,8);
    auVar19._0_4_ = (int)(short)puVar8;
    auVar19._4_4_ = (int)puVar8 >> 0x10;
    auVar19._8_4_ = auVar18._0_4_ >> 0x10;
    auVar19._12_4_ = auVar18._8_4_ >> 0x10;
    auVar18 = NEON_scvtf(auVar19,4);
    iVar14 = (int)(auVar18._0_4_ * fVar13);
    iVar15 = (int)(auVar18._4_4_ * fVar13);
    iVar16 = (int)(auVar18._8_4_ * fVar13);
    iVar17 = (int)(auVar18._12_4_ * fVar13);
    if (((iVar14 < (int)uVar3 && iVar15 < (int)uVar3) && (-1 < iVar16)) && (-1 < iVar17)) {
      func_0x000104c2fe00(auStack_230,param_2);
      func_0x000104c2fe00(auStack_268,param_3);
      FUN_1073c2b44(auStack_1f8,param_4,auStack_230,auStack_268,param_5,param_8,iVar2);
      auVar4._4_4_ = iVar15;
      auVar4._0_4_ = iVar14;
      auVar4._8_4_ = iVar16;
      auVar4._12_4_ = iVar17;
      auVar18 = NEON_scvtf(auVar4,4);
      auVar20 = NEON_ucvtf(auVar4,4);
      uStack_280 = auVar18._0_8_;
      uStack_278 = auVar20._8_8_;
      FUN_1073bf778(uStack_280,auVar20._0_8_,puVar7,auStack_1f8,&uStack_280);
      func_0x0001072a6b0c(auStack_1f8);
      func_0x000104c2f714(auStack_268);
      puVar8 = auStack_230;
      func_0x000104c2f714(puVar8);
    }
  }
  func_0x0001073c69a8(uStack_d8);
  if (bVar5) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x0001072a6b0c(auStack_1f8);
  func_0x000104c2f714(auStack_268);
  func_0x000104c2f714(auStack_230);
  func_0x0001073c6aec();
  FUN_1073c6068();
  return (undefined1 *)0x800080007fff7fff;
}


