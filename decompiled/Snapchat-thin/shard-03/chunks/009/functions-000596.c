/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e7b098; end: 102e7b3b7;  */

ulong FUN_102e7b098(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    uVar10 = param_1;
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    uVar10 = uVar7;
  }
  if (uVar7 != 0) {
    uVar14 = param_1 & 0xc000000000000001;
    uVar15 = param_1 & 0xffffffffffffff8;
    lVar12 = 4;
    do {
      uVar10 = lVar12 - 4;
      if (uVar14 == 0) {
        if (*(ulong *)(uVar15 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7b34c);
          (*pcVar1)();
        }
        uVar11 = *(ulong *)(param_1 + lVar12 * 8);
        func_0x000107c615f0(uVar11);
      }
      else {
        uVar11 = uVar10;
        param_2 = param_1;
        func_0x000100fb0ba0();
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7b348);
        (*pcVar1)();
      }
      uVar13 = lVar12 - 3;
      uVar10 = uVar11;
      func_0x000107c5b1b0();
      func_0x000107c61180();
      if (uVar10 == 0) {
        uVar9 = 0;
        param_2 = 0xf000000000000000;
      }
      else {
        uVar9 = uVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar10);
        if (param_2 >> 0x3c < 0xf) {
          func_0x000107c615e8(uVar11);
          func_0x0001000b44c0(uVar9,param_2);
          uVar10 = 0;
          func_0x0001000b44c0(0,0xf000000000000000);
          iVar4 = 1;
          uVar6 = 0xd;
          goto LAB_102e7b374;
        }
      }
      func_0x000107c615e8(uVar11);
      func_0x0001000b44c0(uVar9);
      lVar12 = lVar12 + 1;
    } while (uVar13 != uVar7);
    if (uVar14 == 0) {
      if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7b3b4);
        (*pcVar1)();
      }
      uVar10 = *(ulong *)(param_1 + 0x20);
      func_0x000107c615f0(uVar10);
    }
    else {
      uVar10 = 0;
      param_2 = param_1;
      func_0x000100fb0ba0();
    }
    uVar11 = uVar10;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar10);
    if (uVar11 != 0) {
      uVar13 = uVar11;
      func_0x000107c5faec();
      uVar9 = param_2;
      func_0x000107c61170(uVar11);
      lVar12 = 4;
      do {
        uVar11 = lVar12 - 4;
        if (uVar14 == 0) {
          if (*(ulong *)(uVar15 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7b354);
            (*pcVar1)();
          }
          uVar10 = *(ulong *)(param_1 + lVar12 * 8);
          func_0x000107c615f0(uVar10);
          uVar3 = uVar9;
        }
        else {
          uVar10 = uVar11;
          uVar3 = param_1;
          func_0x000100fb0ba0();
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7b350);
          (*pcVar1)();
        }
        uVar8 = lVar12 - 3;
        uVar11 = uVar10;
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (uVar11 == 0) {
          func_0x000107c6142c(param_2);
          func_0x000107c615e8(uVar10);
LAB_102e7b338:
          iVar4 = 1;
          uVar6 = 4;
          goto LAB_102e7b374;
        }
        uVar2 = uVar11;
        func_0x000107c5faec();
        uVar9 = uVar3;
        func_0x000107c61170(uVar11);
        if ((uVar13 == uVar2) && (param_2 == uVar3)) {
          func_0x000107c6142c(uVar3);
          func_0x000107c615e8(uVar10);
        }
        else {
          uVar11 = uVar13;
          uVar9 = param_2;
          func_0x000107c605b8(uVar13,param_2,uVar2,uVar3,0);
          func_0x000107c6142c(uVar3);
          func_0x000107c615e8(uVar10);
          if ((uVar11 & 1) == 0) {
            func_0x000107c6142c(param_2);
            uVar10 = param_2;
            goto LAB_102e7b338;
          }
        }
        lVar12 = lVar12 + 1;
      } while (uVar8 != uVar7);
      func_0x000107c6142c(param_2);
      uVar6 = 0;
      iVar4 = 0;
      uVar10 = param_2;
      goto LAB_102e7b374;
    }
  }
  iVar4 = 1;
  uVar6 = 3;
LAB_102e7b374:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    func_0x000107c60e78();
    FUN_102e79dbc();
    return uVar10;
  }
  return (ulong)(uVar6 | iVar4 << 8);
}



/* Entry: 102e7b3b8; end: 102e7b41b;  */

void FUN_102e7b3b8(void)

{
  FUN_102e79dbc();
  return;
}



/* Entry: 102e7b41c; end: 102e7b42f;  */

bool FUN_102e7b41c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e7b430; end: 102e7b4db;  */

void FUN_102e7b430(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e7b4dc; end: 102e7b4df;  */

void FUN_102e7b4dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e0f0;
  func_0x000107c61520(&UNK_10db5e0f0,&UNK_1105df178);
  puRam0000000112f23910 = puVar1;
  return;
}



/* Entry: 102e7b4e0; end: 102e7b51f;  */

void FUN_102e7b4e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e0f0;
  func_0x000107c61520(&UNK_10db5e0f0,&UNK_1105df178);
  puRam0000000112f23910 = puVar1;
  return;
}



/* Entry: 102e7b520; end: 102e7b6a7;  */

void FUN_102e7b520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e7b6a8; end: 102e7b873;  */

void FUN_102e7b6a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x800000010f1120e0;
  uVar2 = 0xd000000000000012;
  if (cVar3 != '\x01') {
    uVar4 = 0xe300000000000000;
    uVar2 = 0x646e65;
  }
  uVar1 = 0x7472617473;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e7b874; end: 102e7b8cb;  */

void FUN_102e7b874(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x800000010f1120e0;
  uVar2 = 0xd000000000000012;
  if (cVar3 != '\x01') {
    uVar4 = 0xe300000000000000;
    uVar2 = 0x646e65;
  }
  uVar1 = 0x7472617473;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102e7b8cc; end: 102e7b92f;  */

ulong FUN_102e7b8cc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102e7b930; end: 102e7b933;  */

void FUN_102e7b930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e1d0;
  func_0x000107c61520(&UNK_10db5e1d0,&UNK_1105df268);
  puRam0000000112f23918 = puVar1;
  return;
}



/* Entry: 102e7b934; end: 102e7b973;  */

void FUN_102e7b934(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e1d0;
  func_0x000107c61520(&UNK_10db5e1d0,&UNK_1105df268);
  puRam0000000112f23918 = puVar1;
  return;
}



/* Entry: 102e7b974; end: 102e7baeb;  */

int FUN_102e7b974(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e7b9f0;
        goto LAB_102e7b9d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e7b9d4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102e7b9f0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e7baec; end: 102e7bcf3;  */

void FUN_102e7baec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0xec0000006465646f;
  uVar2 = 0x63736e6172746572;
  if (cVar3 != '\x01') {
    uVar4 = 0xe90000000000006e;
    uVar2 = 0x6f69746375646572;
  }
  uVar1 = 0x6c616e696769726f;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e7bcf4; end: 102e7bd5f;  */

void FUN_102e7bcf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0xec0000006465646f;
  uVar2 = 0x63736e6172746572;
  if (cVar3 != '\x01') {
    uVar4 = 0xe90000000000006e;
    uVar2 = 0x6f69746375646572;
  }
  uVar1 = 0x6c616e696769726f;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102e7bd60; end: 102e7bdc3;  */

ulong FUN_102e7bd60(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102e7bdc4; end: 102e7bdc7;  */

void FUN_102e7bdc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e290;
  func_0x000107c61520(&UNK_10db5e290,&UNK_1105df350);
  puRam0000000112f23990 = puVar1;
  return;
}



/* Entry: 102e7bdc8; end: 102e7be07;  */

void FUN_102e7bdc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e290;
  func_0x000107c61520(&UNK_10db5e290,&UNK_1105df350);
  puRam0000000112f23990 = puVar1;
  return;
}



/* Entry: 102e7be08; end: 102e7bf7f;  */

int FUN_102e7be08(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e7be84;
        goto LAB_102e7be68;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e7be68:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102e7be84:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e7bf80; end: 102e7c16f;  */

void FUN_102e7bf80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x676e6974696177;
  if (cVar4 != '\x01') {
    uVar3 = 0x6e69747563657865;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe900000000000067;
  }
  uVar2 = 0x73736563637573;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e7c170; end: 102e7c1d3;  */

void FUN_102e7c170(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x676e6974696177;
  if (cVar4 != '\x01') {
    uVar3 = 0x6e69747563657865;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe900000000000067;
  }
  uVar2 = 0x73736563637573;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102e7c1d4; end: 102e7c237;  */

ulong FUN_102e7c1d4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102e7c238; end: 102e7c23b;  */

void FUN_102e7c238(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e350;
  func_0x000107c61520(&UNK_10db5e350,&UNK_1105df438);
  puRam0000000112f23a08 = puVar1;
  return;
}



/* Entry: 102e7c23c; end: 102e7c27b;  */

void FUN_102e7c23c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e350;
  func_0x000107c61520(&UNK_10db5e350,&UNK_1105df438);
  puRam0000000112f23a08 = puVar1;
  return;
}



/* Entry: 102e7c27c; end: 102e7c3eb;  */

int FUN_102e7c27c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e7c2f8;
        goto LAB_102e7c2dc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e7c2dc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102e7c2f8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e7c3ec; end: 102e7c42b;  */

void FUN_102e7c3ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e408;
  func_0x000107c61520(&UNK_10db5e408,&UNK_1105df520);
  puRam0000000112f23a80 = puVar1;
  return;
}



/* Entry: 102e7c42c; end: 102e7c46f;  */

void FUN_102e7c42c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x626b,0xe200000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e7c470; end: 102e7c47b;  */

void FUN_102e7c470(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,0x626b,0xe200000000000000);
  return;
}



/* Entry: 102e7c47c; end: 102e7c4bb;  */

void FUN_102e7c47c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x626b,0xe200000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e7c4bc; end: 102e7c527;  */

void FUN_102e7c4bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 102e7c528; end: 102e7c623;  */

void FUN_102e7c528(undefined8 *param_1)

{
  *param_1 = 0x626b;
  param_1[1] = 0xe200000000000000;
  return;
}



/* Entry: 102e7c624; end: 102e7c67f;  */

void FUN_102e7c624(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e7c680; end: 102e7c92b;  */

void FUN_102e7c680(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x11);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0x6564656563637553;
  uStack_68 = 0xee0020726f662064;
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  uVar2 = uStack_68;
  uVar4 = uStack_70;
  FUN_102e7c92c(uStack_70,uStack_68,1);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0xd000000000000014;
  uStack_68 = 0x800000010f112120;
  func_0x000107c5fb78(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  uStack_71 = 0;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_1105df438,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_68;
  uVar4 = uStack_70;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = 0x646e65;
  func_0x000107c5fadc(0x646e65,0xe300000000000000);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000106c32e6c(uVar5,uVar3,uVar4,0,1);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = 0x6c616e696769726f;
  func_0x000107c5fadc(0x6c616e696769726f,0xe800000000000000);
  func_0x000106c333c8(uVar5,uVar4,param_4);
  func_0x000107c61170(uVar4);
  uVar4 = 0x63736e6172746572;
  func_0x000107c5fadc(0x63736e6172746572,0xec0000006465646f);
  func_0x000106c333c8(uVar5,uVar4,param_5);
  func_0x000107c61170(uVar4);
  uVar4 = 0x6f69746375646572;
  func_0x000107c5fadc(0x6f69746375646572,0xe90000000000006e);
  func_0x000106c333c8(uVar5,uVar4,param_6);
  func_0x000107c61170(uVar4);
  uVar4 = 0x626b;
  func_0x000107c5fadc(0x626b,0xe200000000000000);
  lVar1 = param_6 + 0x3ff;
  if (-1 < param_6) {
    lVar1 = param_6;
  }
  func_0x000106c3353c(uVar5,uVar4,lVar1 >> 10);
  func_0x000107c61170(uVar4);
  FUN_102e7ca14(param_1,param_2,param_3,param_6,param_7,param_8);
  return;
}



/* Entry: 102e7c92c; end: 102e7ca13;  */

void FUN_102e7c92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_48 + 0x18) + 0x60))();
  func_0x000107c615e8(uStack_50);
  if ((uVar3 & 1) != 0) {
    uStack_50 = 0x1000000000000019;
    lStack_48 = 0x800000010f112140;
    func_0x000107c5fb78(param_1,param_2);
    lVar2 = lStack_48;
    uVar3 = uStack_50;
    func_0x0001000d224c(&uStack_50);
    uVar1 = uStack_50;
    uVar4 = uStack_50;
    func_0x000107c614f0(uStack_50);
    func_0x000103740d5c(uVar3,lVar2,param_3,uVar4);
    func_0x000107c6142c(lVar2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102e7ca14; end: 102e7cb23;  */

void FUN_102e7ca14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    puVar1 = PTR_PTR_1126ac728;
    func_0x000107c610f8(PTR_PTR_1126ac728);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c52934(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c5933c(puVar1);
    func_0x000107c59aa8(puVar1);
    func_0x000107c549ac(puVar1);
    if (param_6 != 0) {
      func_0x000107c5fadc(param_5,param_6);
      func_0x000107c57124(puVar1);
      func_0x000107c61170(param_5);
    }
    func_0x000107c4bfb0(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102e7cb24; end: 102e7d023;  */

void FUN_102e7cb24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = param_1;
  lVar7 = param_2;
  func_0x000107c5ed2c();
  uVar5 = uVar4;
  FUN_102e7d064();
  if (lVar7 == 0) {
    uStack_70 = 0;
    lStack_68 = -0x2000000000000000;
    uVar5 = 0x112d393f0;
    uStack_80 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_80,&uStack_70,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c61170(uVar4);
    lVar7 = lStack_68;
    uVar5 = uStack_70;
  }
  else {
    func_0x000107c61170(uVar4);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = 0x646e65;
  func_0x000107c5fadc(0x646e65,0xe300000000000000);
  uVar4 = uVar5;
  func_0x000107c5fadc(uVar5,lVar7);
  func_0x000106c32e6c(uVar8,uVar6,uVar4,1,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000102e7ce10(2,uVar5,lVar7,param_2,param_3,param_4,1);
  uStack_70 = 0;
  lStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x20);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f112160);
  uStack_80 = CONCAT71(uStack_80._1_7_,2);
  func_0x000107c603d0(&uStack_80,&uStack_70,&UNK_1105df268,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x203a6f666e49202e,0xe800000000000000);
  func_0x000107c5fb78(uVar5,lVar7);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  if (((uint)param_4 & 0xff) == 1) {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_78);
    pcVar1 = " SnapDoc with Snap ID ";
    uStack_80 = 0xd000000000000016;
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(uStack_78);
    pcVar1 = " NonSnapDoc with media ID ";
    uStack_80 = 0xd00000000000001a;
  }
  uStack_78 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  uVar2 = uStack_78;
  func_0x000107c5fb78(uStack_80,uStack_78);
  func_0x000107c6142c(uVar2);
  lVar3 = lStack_68;
  uVar4 = uStack_70;
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(uStack_78);
  uStack_80 = 0xd000000000000014;
  uStack_78 = 0x800000010f112120;
  func_0x000107c5fb78(uVar4,lVar3);
  func_0x000107c6142c(lVar7);
  uVar2 = uStack_78;
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102e7d024; end: 102e7d063;  */

void FUN_102e7d024(void)

{
  FUN_102e7cb24();
  return;
}



/* Entry: 102e7d064; end: 102e7d4e7;  */

undefined1  [16] FUN_102e7d064(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  
  ppuVar1 = param_1;
  func_0x000107c42210();
  func_0x000107c61180();
  ppuVar2 = ppuVar1;
  func_0x000107c5faec();
  lVar4 = param_2;
  func_0x000107c61170(ppuVar1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e09198;
  func_0x000107c5faec();
  if ((ppuVar2 != ppuVar1) || (param_2 != lVar4)) {
    lVar5 = param_2;
    func_0x000107c605b8(ppuVar2,param_2,ppuVar1,lVar4,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar4);
    if (((ulong)ppuVar2 & 1) != 0) goto LAB_102e7d100;
    ppuVar1 = param_1;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar2 = ppuVar1;
    func_0x000107c5faec();
    lVar4 = lVar5;
    func_0x000107c61170(ppuVar1);
    ppuVar1 = &PTR____CFConstantStringClassReference_110ec5158;
    func_0x000107c5faec();
    if ((ppuVar2 == ppuVar1) && (lVar5 == lVar4)) {
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar4);
    }
    else {
      func_0x000107c605b8(ppuVar2,lVar5,ppuVar1,lVar4,0);
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar4);
      if (((ulong)ppuVar2 & 1) == 0) {
        uVar3 = 0;
        uVar6 = 0;
        goto LAB_102e7d4d8;
      }
    }
    func_0x000107c3fcb0();
    if (2 < (long)param_1) {
      if (param_1 != (undefined **)0x3) {
        if (param_1 == (undefined **)0x4) {
          uVar6 = 0x800000010f1121c0;
          uVar3 = 0xd000000000000016;
          goto LAB_102e7d4d8;
        }
        if (param_1 == (undefined **)0x5) {
          uVar6 = 0xee00666c65735f6c;
          uVar3 = 0x696e5f6568636163;
          goto LAB_102e7d4d8;
        }
LAB_102e7d4b8:
        uVar6 = 0xed00006e776f6e6b;
        uVar3 = 0x6e755f6568636163;
        goto LAB_102e7d4d8;
      }
      pcVar7 = "cache_retrieval_failure";
LAB_102e7d4a0:
      uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
      uVar3 = 0xd000000000000017;
      goto LAB_102e7d4d8;
    }
    if (param_1 == (undefined **)0x1) {
      pcVar7 = "cache_invalid_parameter";
      goto LAB_102e7d4a0;
    }
    if (param_1 != (undefined **)0x2) goto LAB_102e7d4b8;
    pcVar7 = "cache_save_failure";
LAB_102e7d3ac:
    uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    uVar3 = 0xd000000000000012;
    goto LAB_102e7d4d8;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar4);
LAB_102e7d100:
  func_0x000107c3fcb0();
  switch(param_1) {
  case (undefined **)0x1:
    pcVar7 = "transcoder_invalid_parameter";
    goto code_r0x000102e7d338;
  case (undefined **)0x2:
    pcVar7 = "transcoder_snap_id_not_found";
code_r0x000102e7d338:
    uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    uVar3 = 0xd00000000000001c;
    break;
  case (undefined **)0x3:
    pcVar7 = "transcoder_file_writing_failure";
    goto code_r0x000102e7d38c;
  case (undefined **)0x4:
    pcVar7 = "transcoder_file_removal_failure";
    goto code_r0x000102e7d38c;
  case (undefined **)0x5:
    uVar6 = 0x800000010f1124f0;
    uVar3 = 0xd000000000000021;
    break;
  case (undefined **)0x6:
    pcVar7 = "transcoder_url_generation_error";
code_r0x000102e7d38c:
    uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    uVar3 = 0xd00000000000001f;
    break;
  case (undefined **)0x7:
    uVar6 = 0x800000010f1124b0;
    uVar3 = 0xd000000000000019;
    break;
  case (undefined **)0x8:
    uVar6 = 0x800000010f112480;
    uVar3 = 0xd000000000000025;
    break;
  case (undefined **)0x9:
    pcVar7 = "transcoder_fail_to_get_original_bitrate";
    goto code_r0x000102e7d434;
  case (undefined **)0xa:
    uVar6 = 0x800000010f112420;
    uVar3 = 0xd00000000000002b;
    break;
  case (undefined **)0xb:
    pcVar7 = "transcoder_video_processor_unknown_error";
    goto code_r0x000102e7d414;
  case (undefined **)0xc:
    uVar6 = 0x800000010f1123c0;
    uVar3 = 0xd000000000000024;
    break;
  case (undefined **)0xd:
    uVar6 = 0x800000010f112390;
    uVar3 = 0xd000000000000023;
    break;
  case (undefined **)0xe:
    pcVar7 = "transcoder_encryption_error";
    goto code_r0x000102e7d3d4;
  case (undefined **)0xf:
    uVar6 = 0x800000010f112350;
    uVar3 = 0xd000000000000018;
    break;
  case (undefined **)0x10:
    pcVar7 = "transcoder_concurrency_throttling_error";
code_r0x000102e7d434:
    uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    uVar3 = 0xd000000000000027;
    break;
  case (undefined **)0x11:
    pcVar7 = "transcoder_low_memory_error";
    goto code_r0x000102e7d3d4;
  case (undefined **)0x12:
    uVar6 = 0x800000010f1122e0;
    uVar3 = 0xd00000000000001d;
    break;
  case (undefined **)0x13:
    pcVar7 = "transcoder_bitrate_ineligible_resolution";
code_r0x000102e7d414:
    uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    uVar3 = 0xd000000000000028;
    break;
  case (undefined **)0x14:
    uVar6 = 0x800000010f112280;
    uVar3 = 0xd00000000000002a;
    break;
  case (undefined **)0x15:
    pcVar7 = "transcoder_decryption_error";
code_r0x000102e7d3d4:
    uVar3 = 0xd00000000000001b;
    uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    break;
  default:
    pcVar7 = "transcoder_unknown";
    goto LAB_102e7d3ac;
  }
LAB_102e7d4d8:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



/* Entry: 102e7d4e8; end: 102e7d51f;  */

void FUN_102e7d4e8(long param_1)

{
  code *pcVar1;
  
  if (!SCARRY8(*(long *)(param_1 + 0x18),1)) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7d500);
  (*pcVar1)();
}



/* Entry: 102e7d520; end: 102e7d563;  */

void FUN_102e7d520(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e7d564; end: 102e7d6bf;  */

void FUN_102e7d564(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 auStack_90 [5];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c614f0(uStack_60);
  pcVar3 = FUN_102e7f1b4;
  (**(code **)(lStack_58 + 0x28))(FUN_102e7f1b4,0,uVar2,lStack_58);
  func_0x000107c615e8(uStack_60);
  func_0x0001000d224c(&uStack_68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000102162a2c(unaff_x20 + 0x60,auStack_90);
  puVar4 = &UNK_1105dfa28;
  func_0x000107c613fc(&UNK_1105dfa28,0x50,7);
  func_0x000102162a70(auStack_90,puVar4 + 0x10);
  *(undefined8 *)(puVar4 + 0x38) = uVar5;
  *(undefined8 *)(puVar4 + 0x40) = uVar2;
  *(undefined8 *)(puVar4 + 0x48) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  uVar2 = uStack_68;
  func_0x00010488a220(uStack_68,1,FUN_102e7f8e0,puVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(auStack_90);
  func_0x000104888fc0(auStack_90[0],1,FUN_102e7f37c,0);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(auStack_90[0]);
  return;
}



/* Entry: 102e7d6c0; end: 102e7d77b;  */

void FUN_102e7d6c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x0001000834e4(unaff_x20 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 102e7d77c; end: 102e7d997;  */

undefined8
FUN_102e7d77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar1 = param_1;
  (**(code **)(lStack_68 + 8))(param_1,param_2,param_3,param_4,uStack_70,lStack_68);
  func_0x0001000d224c(&uStack_90);
  puVar2 = &UNK_1105df5c8;
  func_0x000107c613fc(&UNK_1105df5c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105df5f0;
  func_0x000107c613fc(&UNK_1105df5f0,0x31,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  puVar3[0x30] = (char)param_4;
  puVar2 = &UNK_1105df618;
  func_0x000107c613fc(&UNK_1105df618,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e7da30;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61434(param_1);
  func_0x000101dcbee8(param_2,param_3,param_4);
  uVar4 = uStack_90;
  func_0x0001048898b8(uStack_90,1,FUN_102e7dd44,puVar2,&UNK_1105dff78);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_90);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  puVar2 = &UNK_1105df5c8;
  func_0x000107c613fc(&UNK_1105df5c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105df640;
  func_0x000107c613fc(&UNK_1105df640,0x29,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar3[0x28] = (char)param_4;
  func_0x000101dcbee8(param_2,param_3,param_4);
  uVar1 = auStack_88[0];
  func_0x00010488a340(auStack_88[0],1,FUN_102e7ddec,puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(auStack_88[0]);
  func_0x000107c61574(puVar3);
  return uVar1;
}



/* Entry: 102e7d998; end: 102e7da2f;  */

undefined8
FUN_102e7d998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_102e7da40(param_2,param_3,param_4,param_5);
    func_0x000107c61574(param_1);
  }
  return param_2;
}



/* Entry: 102e7da30; end: 102e7da3f;  */

undefined8 FUN_102e7da30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_102e7da40(uVar5,uVar1,uVar2,uVar3);
    func_0x000107c61574(lVar4);
  }
  return uVar5;
}



/* Entry: 102e7da40; end: 102e7dd43;  */

undefined8
FUN_102e7da40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112d627d8,&UNK_10d9285c0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = &UNK_1105df668;
  func_0x000107c613fc(&UNK_1105df668,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  uVar3 = uVar7;
  func_0x000104889654(uVar7,1,FUN_102e7dfe4,puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar1 = uStack_68;
  puVar2 = &UNK_1105df5c8;
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_1105df5c8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_1105df690;
  func_0x000107c613fc(&UNK_1105df690,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  func_0x000107c61580(uVar8,3);
  uVar7 = 0x112f23d30;
  func_0x0001000285a8(0x112f23d30,&UNK_10db5e630);
  uVar6 = uVar1;
  func_0x0001048898b8(uVar1,1,FUN_102e7e100,puVar5,uVar7);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c613fc(&UNK_1105df5c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar5 = &UNK_1105df6b8;
  func_0x000107c613fc(&UNK_1105df6b8,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  *(undefined8 *)(puVar5 + 0x20) = param_3;
  puVar5[0x28] = (char)param_4;
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  puVar2 = &UNK_1105df6e0;
  func_0x000107c613fc(&UNK_1105df6e0,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e7e43c;
  *(undefined **)(puVar2 + 0x18) = puVar5;
  func_0x000101dcbee8(param_2,param_3,param_4);
  uVar7 = 0x112f23d38;
  func_0x0001000285a8(0x112f23d38,&UNK_10db5e638);
  uVar3 = uVar1;
  func_0x0001048898b8(uVar1,1,FUN_102e7e450,puVar2,uVar7);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar2 = &UNK_1105df708;
  func_0x000107c613fc(&UNK_1105df708,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  puVar5 = &UNK_1105df730;
  func_0x000107c613fc(&UNK_1105df730,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102e7e57c;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  func_0x000107c6157c(uVar7);
  uVar7 = uStack_68;
  func_0x0001048898b8(uStack_68,1,FUN_102e7e68c,puVar5,&UNK_1105dff78);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar5);
  return uVar7;
}



/* Entry: 102e7dd44; end: 102e7dd5b;  */

void FUN_102e7dd44(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e811e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e7dd5c; end: 102e7ddeb;  */

void FUN_102e7dd5c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102e7de0c(param_3,param_4,param_5);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102e7ddec; end: 102e7de0b;  */

void FUN_102e7ddec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e7dd5c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102e7de0c; end: 102e7ded7;  */

void FUN_102e7de0c(undefined1 *param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lStack_38;
  
  if (param_3 == '\x01') {
    FUN_102e7ded8();
    func_0x000107c613f8(&UNK_1105dfaf0,param_1,0,0);
    *param_1 = 5;
    func_0x000107c61654();
  }
  else {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      lVar1 = lStack_38;
      func_0x000107c4feec(lStack_38);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_38);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 102e7ded8; end: 102e7df17;  */

void FUN_102e7ded8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e680;
  func_0x000107c61520(&UNK_10db5e680,&UNK_1105dfaf0);
  puRam0000000112f23d28 = puVar1;
  return;
}



/* Entry: 102e7df18; end: 102e7dfe3;  */

void FUN_102e7df18(undefined8 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar3 = *(undefined1 **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined1 *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_2) {
      puVar3 = param_2;
    }
    func_0x000107c60480();
  }
  if (puVar3 == (undefined1 *)0x0) {
    FUN_102e7ded8();
    func_0x000107c613f8(&UNK_1105dfaf0,param_2,0,0);
    *param_2 = 3;
    func_0x000107c61654();
  }
  else {
    if (((ulong)param_2 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7dfe4);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar2 = 0;
      func_0x000100fb0ba0(0,param_2);
    }
    *param_1 = uVar2;
  }
  return;
}



/* Entry: 102e7dfe4; end: 102e7dffb;  */

void FUN_102e7dfe4(void)

{
  long unaff_x20;
  
  FUN_102e7df18(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e7dffc; end: 102e7e0ff;  */

undefined8 FUN_102e7dffc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  uVar3 = 0;
  if (param_2 != 0) {
    uVar1 = uVar4;
    FUN_102e7e118(uVar4);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&uStack_60);
    puVar2 = &UNK_1105df870;
    func_0x000107c613fc(&UNK_1105df870,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    func_0x000107c615f0(uVar4);
    uVar4 = 0x112f23d30;
    func_0x0001000285a8(0x112f23d30,&UNK_10db5e630);
    uVar3 = uStack_60;
    func_0x000100775264(uStack_60,1,FUN_102e7f6e4,puVar2,uVar4);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uStack_60);
    func_0x000107c61574(puVar2);
  }
  return uVar3;
}



/* Entry: 102e7e100; end: 102e7e117;  */

void FUN_102e7e100(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e7dffc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e7e118; end: 102e7e43b;  */

undefined8 FUN_102e7e118(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&uStack_58);
  uVar5 = uStack_58;
  puVar2 = &UNK_1105df898;
  func_0x000107c613fc(&UNK_1105df898,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar3 = uVar5;
  func_0x000104889654(uVar5,1,FUN_102e7f724,puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar2 = &UNK_1105df8c0;
  func_0x000107c613fc(&UNK_1105df8c0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  uVar5 = 0x112f23d48;
  func_0x0001000285a8(0x112f23d48,&UNK_10db5e650);
  uVar6 = uVar1;
  func_0x0001048898b8(uVar1,1,0x102e7f770,puVar2,uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_58);
  puVar2 = &UNK_1105df5c8;
  func_0x000107c613fc(&UNK_1105df5c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar4 = &UNK_1105df8e8;
  func_0x000107c613fc(&UNK_1105df8e8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102e7f78c;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  uVar5 = uStack_58;
  func_0x0001048898b8(uStack_58,1,0x102e7f94c,puVar4,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar4);
  return uVar5;
}



/* Entry: 102e7e43c; end: 102e7e44f;  */

undefined8 FUN_102e7e43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_1;
    FUN_102e7f380(param_1,param_2,param_3);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(&uStack_70);
    puVar3 = &UNK_1105df780;
    func_0x000107c613fc(&UNK_1105df780,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    func_0x00010006c00c(param_1,param_2);
    func_0x000107c615f0(param_3);
    uVar4 = 0x112f23d38;
    func_0x0001000285a8(0x112f23d38,&UNK_10db5e638);
    uVar5 = uStack_70;
    func_0x000100775264(uStack_70,1,FUN_102e7f5cc,puVar3,uVar4);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(uStack_70);
    func_0x000107c61574(puVar3);
  }
  return uVar5;
}



/* Entry: 102e7e450; end: 102e7e463;  */

void FUN_102e7e450(void)

{
  FUN_102e7f794();
  return;
}



/* Entry: 102e7e464; end: 102e7e57b;  */

undefined8
FUN_102e7e464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  (**(code **)(lStack_68 + 8))(param_3,param_1,param_2,uStack_70,lStack_68);
  func_0x0001000d224c(&uStack_90);
  puVar1 = &UNK_1105df758;
  func_0x000107c613fc(&UNK_1105df758,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  uVar2 = uStack_90;
  func_0x000100775264(uStack_90,1,FUN_102e7e6c4,puVar1,&UNK_1105dff78);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_90);
  func_0x000107c61574(puVar1);
  func_0x0001000834e4(auStack_88);
  return uVar2;
}



/* Entry: 102e7e57c; end: 102e7e583;  */

undefined8
FUN_102e7e57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  (**(code **)(lStack_68 + 8))(param_3,param_1,param_2,uStack_70,lStack_68);
  func_0x0001000d224c(&uStack_90);
  puVar1 = &UNK_1105df758;
  func_0x000107c613fc(&UNK_1105df758,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  uVar2 = uStack_90;
  func_0x000100775264(uStack_90,1,FUN_102e7e6c4,puVar1,&UNK_1105dff78);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_90);
  func_0x000107c61574(puVar1);
  func_0x0001000834e4(auStack_88);
  return uVar2;
}



/* Entry: 102e7e584; end: 102e7e68b;  */

void FUN_102e7e584(undefined8 *param_1,long *param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar1 = lVar6;
  puVar3 = param_3;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar5 = 7;
    puVar3 = (undefined1 *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    puVar4 = puVar3;
    func_0x000107c61170(lVar1);
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar1 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      *param_1 = param_3;
      param_1[1] = param_4;
      param_1[2] = param_5;
      param_1[3] = lVar2;
      param_1[4] = puVar3;
      param_1[5] = lVar1;
      param_1[6] = puVar4;
      *(undefined1 *)(param_1 + 7) = 0;
      return;
    }
    func_0x000107c6142c();
    uVar5 = 8;
  }
  FUN_102e7ded8();
  func_0x000107c613f8(&UNK_1105dfaf0,puVar3,0,0);
  *puVar3 = uVar5;
  func_0x000107c61654();
  return;
}



/* Entry: 102e7e68c; end: 102e7e6c3;  */

void FUN_102e7e68c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return;
}



/* Entry: 102e7e6c4; end: 102e7e6df;  */

void FUN_102e7e6c4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e7e584(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102e7e6e0; end: 102e7e74f;  */

void FUN_102e7e6e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0x20))();
  func_0x000107c615e8(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e7e750; end: 102e7e87f;  */

undefined8 FUN_102e7e750(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  uVar4 = *param_1;
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x20))(param_3,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_48);
  puVar1 = &UNK_1105df820;
  func_0x000107c613fc(&UNK_1105df820,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  puVar2 = &UNK_1105df848;
  func_0x000107c613fc(&UNK_1105df848,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e7f69c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar4 = 0x112e5cd78;
  func_0x0001000285a8(0x112e5cd78,&UNK_10da63200);
  uVar3 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_102e7f6a8,puVar2,uVar4);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_78);
  return uVar3;
}



/* Entry: 102e7e880; end: 102e7e8eb;  */

long FUN_102e7e880(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = (uint)(param_4 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      uVar5 = param_4 >> 0x30 & 0xff;
    }
    else {
      iVar4 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar4,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e7e8ec);
        (*pcVar2)();
      }
      uVar5 = (ulong)(iVar4 - (int)param_3);
    }
  }
  else if (uVar3 == 2) {
    uVar5 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
    if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e7e8b4);
      (*pcVar2)();
    }
  }
  else {
    uVar5 = 0;
  }
  if (!SBORROW8(param_2,uVar5)) {
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e7e8e8);
  (*pcVar2)();
}



/* Entry: 102e7e8ec; end: 102e7e953;  */

void FUN_102e7e8ec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2[2];
  if (lVar1 < (long)param_2[3]) {
    FUN_102e7ded8();
    func_0x000107c613f8(&UNK_1105dfaf0,param_2,0,0);
    *(undefined1 *)param_2 = 4;
    func_0x000107c61654();
    return;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = lVar1;
  return;
}



/* Entry: 102e7e954; end: 102e7e9e7;  */

void FUN_102e7e954(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (param_2 == (undefined1 *)0x0) {
    FUN_102e7ded8();
    func_0x000107c613f8(&UNK_1105dfaf0,param_2,0,0);
    *param_2 = 2;
    func_0x000107c61654();
  }
  else {
    puVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    *param_1 = puVar1;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 102e7e9e8; end: 102e7eb1f;  */

undefined8 FUN_102e7e9e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x28))(param_3,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_80);
  puVar1 = &UNK_1105df9d8;
  func_0x000107c613fc(&UNK_1105df9d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  puVar2 = &UNK_1105dfa00;
  func_0x000107c613fc(&UNK_1105dfa00,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e7f860;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(uVar4);
  uVar3 = 0x112f23d48;
  func_0x0001000285a8(0x112f23d48,&UNK_10db5e650);
  uVar4 = uStack_80;
  func_0x000100775264(uStack_80,1,FUN_102e7f8a0,puVar2,uVar3);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_80);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_78);
  return uVar4;
}



/* Entry: 102e7eb20; end: 102e7eba7;  */

undefined8 FUN_102e7eb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    FUN_102e7eba8(param_1,param_2,param_3);
    func_0x000107c61574(param_4);
  }
  return param_1;
}



/* Entry: 102e7eba8; end: 102e7ecf7;  */

undefined8 FUN_102e7eba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar1 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_80);
  puVar2 = &UNK_1105df5c8;
  func_0x000107c613fc(&UNK_1105df5c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105df910;
  func_0x000107c613fc(&UNK_1105df910,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  puVar2 = &UNK_1105df938;
  func_0x000107c613fc(&UNK_1105df938,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e7f7c8;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_3);
  uVar4 = uStack_80;
  func_0x0001048898b8(uStack_80,1,FUN_102e7f7d4,puVar2,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_80);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_78);
  return uVar4;
}



/* Entry: 102e7ecf8; end: 102e7efeb;  */

undefined8 FUN_102e7ecf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0001000285a8(0x112dc6628,&UNK_10d986590);
    func_0x0001000d224c(&uStack_80);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    puVar1 = &UNK_1105df960;
    func_0x000107c613fc(&UNK_1105df960,0x40,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar2;
    *(undefined8 *)(puVar1 + 0x18) = uVar4;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    *(undefined8 *)(puVar1 + 0x28) = param_3;
    *(undefined8 *)(puVar1 + 0x30) = param_4;
    *(undefined8 *)(puVar1 + 0x38) = uVar3;
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_4);
    uVar2 = uStack_80;
    func_0x0001048897a0(uStack_80,1,0,FUN_102e7f7fc,puVar1);
    func_0x000107c61170(uStack_80);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(param_1);
  }
  return uVar2;
}



/* Entry: 102e7efec; end: 102e7f1b3;  */

/* WARNING: Possible PIC construction at 0x000102e7f194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e7f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e7f13c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e7f128) */
/* WARNING: Removing unreachable block (ram,0x000102e7f198) */
/* WARNING: Removing unreachable block (ram,0x000102e7f140) */

void FUN_102e7efec(undefined1 *param_1,undefined *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  
  pcVar1 = FUN_102e7f848;
  func_0x000100087bd4(FUN_102e7f848,param_3,PTR___sytN_11034f1b0 + 8);
  if (param_2 == (undefined *)0x0) {
    if (param_1 == (undefined1 *)0x0) {
      FUN_102e7ded8();
      param_2 = &UNK_1105dfaf0;
      func_0x000107c613f8(&UNK_1105dfaf0,pcVar1,0,0);
      *pcVar1 = (code)0x1;
      func_0x00010488ade0();
    }
    else {
      puVar2 = param_1;
      func_0x000107c61174();
      puVar3 = puVar2;
      func_0x000107c600dc();
      puVar4 = puVar3;
      func_0x000107c600e0();
      if (puVar3 == puVar4) {
        FUN_102e7ded8();
        param_2 = &UNK_1105dfaf0;
        func_0x000107c613f8(&UNK_1105dfaf0,puVar4,0,0);
        uVar5 = 6;
      }
      else {
        puVar4 = puVar2;
        func_0x000107c4036c();
        if ((int)puVar4 != 0) {
          func_0x000107c61174(puVar2);
          func_0x000107c5ee30(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar2);
          return;
        }
        FUN_102e7ded8();
        param_2 = &UNK_1105dfaf0;
        func_0x000107c613f8(&UNK_1105dfaf0,puVar4,0,0);
        uVar5 = 9;
      }
      *puVar4 = uVar5;
      func_0x00010488ade0();
    }
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
  return;
}



/* Entry: 102e7f1b4; end: 102e7f1f7;  */

uint FUN_102e7f1b4(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x90))();
  return param_1 & 1;
}



/* Entry: 102e7f1f8; end: 102e7f2f3;  */

void FUN_102e7f1f8(char *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  
  if (*param_1 == '\x01') {
    plVar2 = *(long **)(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,plVar2);
    (**(code **)(lVar1 + 0x10))(plVar2,lVar1);
    puVar3 = &UNK_1105dfa50;
    func_0x000107c613fc(&UNK_1105dfa50,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    pcVar6 = *(code **)(*plVar2 + 0x60);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    pcVar4 = FUN_102e7f92c;
    puVar5 = puVar3;
    (*pcVar6)(FUN_102e7f92c);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    pcVar6 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar5 + 0x10))(param_5,pcVar6,puVar5);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 102e7f2f4; end: 102e7f37b;  */

void FUN_102e7f2f4(char *param_1,undefined8 param_2)

{
  long lStack_38;
  
  if (*param_1 != '\0') {
    return;
  }
  func_0x000100087bd4(&lStack_38,FUN_102e7f934,param_2,PTR___sSiN_11034deb0);
  if (0 < lStack_38) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x000107c3f4bc(lStack_38);
      func_0x000107c615e8(lStack_38);
    }
  }
  return;
}



/* Entry: 102e7f37c; end: 102e7f37f;  */

void FUN_102e7f37c(void)

{
  return;
}



/* Entry: 102e7f380; end: 102e7f5cb;  */

undefined8 FUN_102e7f380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e2e9c8,&UNK_10da17650);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar6);
  uVar1 = uVar5;
  func_0x000104889654(uVar5,1,FUN_102e7f61c,uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar6);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar2 = &UNK_1105df7a8;
  func_0x000107c613fc(&UNK_1105df7a8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(param_3);
  uVar5 = 0x112e5cd78;
  func_0x0001000285a8(0x112e5cd78,&UNK_10da63200);
  uVar4 = uVar6;
  func_0x0001048898b8(uVar6,1,0x102e7f634,puVar2,uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar2 = &UNK_1105df7d0;
  func_0x000107c613fc(&UNK_1105df7d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = &UNK_1105df7f8;
  func_0x000107c613fc(&UNK_1105df7f8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_102e7f650;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x00010006c00c(param_1,param_2);
  uVar5 = 0x112f23d40;
  func_0x0001000285a8(0x112f23d40,&UNK_10db5e640);
  uVar1 = uVar6;
  func_0x000100775264(uVar6,1,FUN_102e7f658,puVar3,uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_102e7e8ec,0,&UNK_11068ccb8);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_68);
  return uVar5;
}



/* Entry: 102e7f5cc; end: 102e7f61b;  */

void FUN_102e7f5cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = param_2[2];
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  uVar4 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar4;
  param_1[5] = uVar2;
  func_0x00010006c00c(uVar1);
  func_0x000107c615f0(uVar3);
  return;
}



/* Entry: 102e7f61c; end: 102e7f64f;  */

void FUN_102e7f61c(void)

{
  FUN_102e7e6e0();
  return;
}



/* Entry: 102e7f650; end: 102e7f657;  */

long FUN_102e7f650(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = (uint)(*(ulong *)(unaff_x20 + 0x18) >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 == 0) {
      uVar6 = *(ulong *)(unaff_x20 + 0x18) >> 0x30 & 0xff;
    }
    else {
      iVar5 = (int)((ulong)lVar1 >> 0x20);
      if (SBORROW4(iVar5,(int)lVar1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e7e8ec);
        (*pcVar3)();
      }
      uVar6 = (ulong)(iVar5 - (int)lVar1);
    }
  }
  else if (uVar4 == 2) {
    uVar6 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
    if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e7e8b4);
      (*pcVar3)();
    }
  }
  else {
    uVar6 = 0;
  }
  if (!SBORROW8(param_2,uVar6)) {
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102e7e8e8);
  (*pcVar3)();
}



/* Entry: 102e7f658; end: 102e7f69b;  */

void FUN_102e7f658(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Entry: 102e7f69c; end: 102e7f6a7;  */

undefined1  [16] FUN_102e7f69c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(unaff_x20 + 0x10);
  auVar1._8_8_ = param_1;
  return auVar1;
}



/* Entry: 102e7f6a8; end: 102e7f6e3;  */

void FUN_102e7f6a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 102e7f6e4; end: 102e7f723;  */

void FUN_102e7f6e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  func_0x00010006c00c(uVar1);
  func_0x000107c615f0(uVar3);
  return;
}



/* Entry: 102e7f724; end: 102e7f78b;  */

void FUN_102e7f724(void)

{
  long unaff_x20;
  
  FUN_102e7e954(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e7f78c; end: 102e7f793;  */

undefined8 FUN_102e7f78c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_102e7eba8(param_1,param_2,param_3);
    func_0x000107c61574(lVar1);
  }
  return param_1;
}



/* Entry: 102e7f794; end: 102e7f7c7;  */

void FUN_102e7f794(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 102e7f7c8; end: 102e7f7d3;  */

undefined8 FUN_102e7f7c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x0001000285a8(0x112dc6628,&UNK_10d986590);
    func_0x0001000d224c(&uStack_80);
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar8 = *(undefined8 *)(lVar3 + 0x58);
    puVar4 = &UNK_1105df960;
    func_0x000107c613fc(&UNK_1105df960,0x40,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar5;
    *(undefined8 *)(puVar4 + 0x18) = uVar8;
    *(undefined8 *)(puVar4 + 0x20) = uVar1;
    *(undefined8 *)(puVar4 + 0x28) = uVar6;
    *(undefined8 *)(puVar4 + 0x30) = uVar2;
    *(undefined8 *)(puVar4 + 0x38) = uVar7;
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(uVar8);
    func_0x000107c61174(uVar1);
    func_0x000107c61434(uVar2);
    uVar6 = uStack_80;
    func_0x0001048897a0(uStack_80,1,0,FUN_102e7f7fc,puVar4);
    func_0x000107c61170(uStack_80);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(lVar3);
  }
  return uVar6;
}



/* Entry: 102e7f7d4; end: 102e7f7fb;  */

void FUN_102e7f7d4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e7f7fc; end: 102e7f80b;  */

void FUN_102e7f7fc(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar3 = param_1;
  func_0x0001000d224c(&puStack_98,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  puVar8 = puStack_98;
  if (puStack_98 == (undefined *)0x0) {
    FUN_102e7ded8();
    puVar8 = &UNK_1105dfaf0;
    func_0x000107c613f8(&UNK_1105dfaf0,puVar3,0,0);
    *puVar3 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar8);
  }
  else {
    func_0x000100087bd4(FUN_102e7f80c,uVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c5cef8(puStack_98);
    puVar5 = puStack_98;
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar6 = &UNK_1105df988;
    func_0x000107c613fc(&UNK_1105df988,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar2;
    *(undefined1 **)(puVar6 + 0x18) = param_1;
    pcStack_78 = FUN_102e7f824;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1010ffbc4;
    puStack_80 = &UNK_1105df9a0;
    ppuVar7 = &puStack_98;
    puStack_70 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_70;
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar6);
    func_0x0001000d224c(&puStack_98);
    puVar6 = puStack_98;
    func_0x000107c5dc68(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(puVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102e7f80c; end: 102e7f823;  */

void FUN_102e7f80c(void)

{
  FUN_102e7d4e8();
  return;
}



/* Entry: 102e7f824; end: 102e7f847;  */

/* WARNING: Possible PIC construction at 0x000102e7f194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e7f124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e7f13c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e7f128) */
/* WARNING: Removing unreachable block (ram,0x000102e7f198) */
/* WARNING: Removing unreachable block (ram,0x000102e7f140) */

void FUN_102e7f824(undefined1 *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long unaff_x20;
  
  pcVar1 = FUN_102e7f848;
  func_0x000100087bd4(FUN_102e7f848,*(undefined8 *)(unaff_x20 + 0x10),PTR___sytN_11034f1b0 + 8,
                      *(undefined8 *)(unaff_x20 + 0x18));
  if (param_2 == (undefined *)0x0) {
    if (param_1 == (undefined1 *)0x0) {
      FUN_102e7ded8();
      param_2 = &UNK_1105dfaf0;
      func_0x000107c613f8(&UNK_1105dfaf0,pcVar1,0,0);
      *pcVar1 = (code)0x1;
      func_0x00010488ade0();
    }
    else {
      puVar2 = param_1;
      func_0x000107c61174();
      puVar3 = puVar2;
      func_0x000107c600dc();
      puVar4 = puVar3;
      func_0x000107c600e0();
      if (puVar3 == puVar4) {
        FUN_102e7ded8();
        param_2 = &UNK_1105dfaf0;
        func_0x000107c613f8(&UNK_1105dfaf0,puVar4,0,0);
        uVar5 = 6;
      }
      else {
        puVar4 = puVar2;
        func_0x000107c4036c();
        if ((int)puVar4 != 0) {
          func_0x000107c61174(puVar2);
          func_0x000107c5ee30(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar2);
          return;
        }
        FUN_102e7ded8();
        param_2 = &UNK_1105dfaf0;
        func_0x000107c613f8(&UNK_1105dfaf0,puVar4,0,0);
        uVar5 = 9;
      }
      *puVar4 = uVar5;
      func_0x00010488ade0();
    }
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
  return;
}



/* Entry: 102e7f848; end: 102e7f85f;  */

void FUN_102e7f848(void)

{
  func_0x000102e7d500();
  return;
}



/* Entry: 102e7f860; end: 102e7f89f;  */

undefined8 FUN_102e7f860(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 102e7f8a0; end: 102e7f8df;  */

void FUN_102e7f8a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 102e7f8e0; end: 102e7f92b;  */

void FUN_102e7f8e0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e7f1f8(param_1,unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102e7f92c; end: 102e7f933;  */

void FUN_102e7f92c(char *param_1)

{
  long unaff_x20;
  long lStack_38;
  
  if (*param_1 != '\0') {
    return;
  }
  func_0x000100087bd4(&lStack_38,FUN_102e7f934,*(undefined8 *)(unaff_x20 + 0x10),
                      PTR___sSiN_11034deb0);
  if (0 < lStack_38) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x000107c3f4bc(lStack_38);
      func_0x000107c615e8(lStack_38);
    }
  }
  return;
}



/* Entry: 102e7f934; end: 102e7f95f;  */

void FUN_102e7f934(void)

{
  func_0x000102e7d514();
  return;
}



/* Entry: 102e7f960; end: 102e7f973;  */

bool FUN_102e7f960(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}


