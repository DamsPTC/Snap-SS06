/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00677e54; end: 00677e9f;  */

long * FUN_00677e54(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  uint unaff_w21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680954();
  if ((unaff_w21 & 1) != 0) {
    func_0x0068085c();
    param_3 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00680850();
    param_3 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_3;
  }
  func_0x00680968();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 00677ea0; end: 00677efb;  */

ulong FUN_00677ea0(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x0068080c();
      uVar3 = extraout_x8 + uVar3;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar3;
    return uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + uVar3);
  return param_1 + uVar3;
}



/* Entry: 00677efc; end: 00677f27;  */

undefined8 * FUN_00677efc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00a0e908;
  param_1[1] = param_2;
  FUN_00677f28();
  return param_1;
}



/* Entry: 00677f28; end: 00677f57;  */

void FUN_00677f28(long param_1,undefined8 param_2)

{
  FUN_006809f4();
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined **)(param_1 + 0xd8) = &DAT_00b69408;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



/* Entry: 00677f58; end: 00677fc7;  */

long FUN_00677f58(long param_1)

{
  func_0x006802c0();
  func_0x00532f74(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_0067af9c();
  }
  __ZdlPv();
  FUN_00437b14(param_1 + 0xc0);
  FUN_0067e958(param_1 + 0xa8);
  FUN_0067e980(param_1 + 0x90);
  func_0x00680830();
  FUN_0067e9a8(param_1 + 0x60);
  func_0x00680838();
  func_0x00680898();
  FUN_0067e864(param_1 + 0x18);
  return param_1;
}



/* Entry: 00677fc8; end: 00677fcb;  */

long FUN_00677fc8(long param_1)

{
  func_0x006802c0();
  func_0x00532f74(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_0067af9c();
  }
  __ZdlPv();
  FUN_00437b14(param_1 + 0xc0);
  FUN_0067e958(param_1 + 0xa8);
  FUN_0067e980(param_1 + 0x90);
  func_0x00680830();
  FUN_0067e9a8(param_1 + 0x60);
  func_0x00680838();
  func_0x00680898();
  FUN_0067e864(param_1 + 0x18);
  return param_1;
}



/* Entry: 00677fcc; end: 00677fdf;  */

void FUN_00677fcc(void)

{
  FUN_00677f58();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00677fe0; end: 00677feb;  */

void FUN_00677fe0(void)

{
  Hint_Prefetch(0xb26910,0,0,0);
  Hint_Prefetch(PTR_DAT_00b26910,0,0,0);
  return;
}



/* Entry: 00677fec; end: 006780a3;  */

void FUN_00677fec(long param_1)

{
  char in_NG;
  char in_OV;
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)param_1 + 0x18;
  func_0x00677ab4();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (int)param_1 + 0x30;
  func_0x00677a44();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = param_1 + 0x48;
  func_0x00677a7c();
  if ((int)uVar2 == 0) {
    return;
  }
  func_0x00680800();
  do {
    func_0x00680670();
    if (in_NG != in_OV) {
      uVar2 = param_1 + 0x78;
      func_0x00677ab4();
      if ((int)uVar2 == 0) {
        return;
      }
      func_0x00680800();
      do {
        func_0x00680670();
        if (in_NG != in_OV) {
          if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
            return;
          }
          FUN_0067b018();
          return;
        }
        func_0x0067ff78();
        FUN_00679424();
      } while ((uVar2 & 1) != 0);
      return;
    }
    func_0x0067ff78();
    FUN_00677b44();
  } while ((uVar2 & 1) != 0);
  return;
}



/* Entry: 006780a4; end: 0067817f;  */

void FUN_006780a4(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long *plVar2;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  func_0x00680908();
  func_0x00677a2c();
  func_0x00680448();
  func_0x006779e4();
  func_0x006808f0();
  func_0x006779fc();
  FUN_006785d8(unaff_x21 + 0x60,unaff_x20 + 0x60);
  func_0x00677a2c(unaff_x21 + 0x78,unaff_x20 + 0x78);
  func_0x006785f0(unaff_x21 + 0x90,unaff_x20 + 0x90);
  func_0x00678608(unaff_x21 + 0xa8,unaff_x20 + 0xa8);
  puVar1 = (ulong *)(unaff_x21 + 0xc0);
  plVar2 = (long *)(unaff_x20 + 0xc0);
  FUN_0048cf14();
  func_0x006808e4();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00680268(*(undefined8 *)(unaff_x20 + 0xd8));
      if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
        func_0x00680334();
      }
      puVar1 = (ulong *)(unaff_x21 + 0xd8);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0xe0);
      plVar2 = *(long **)(unaff_x20 + 0xe0);
      if (puVar1 == (ulong *)0x0) {
        puVar1 = unaff_x22;
        func_0x0067f598();
        *(ulong **)(unaff_x21 + 0xe0) = puVar1;
      }
      else {
        FUN_0067b05c();
      }
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680064();
    if ((*puVar1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 4)) {
      func_0x006a5744();
      for (lVar3 = 0; (long)unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 00678180; end: 00678267;  */

void FUN_00678180(ulong *param_1)

{
  char in_NG;
  char in_OV;
  undefined1 uVar1;
  ulong extraout_x8;
  long lVar2;
  uint unaff_w20;
  long lVar3;
  
  func_0x0067ef2c(param_1 + 3);
  FUN_006809d0();
  if (in_NG == in_OV) {
    FUN_00437de0(param_1 + 0xc);
  }
  func_0x0067ef2c(param_1 + 0xf);
  if (0 < (int)param_1[0x13]) {
    FUN_00437de0(param_1 + 0x12);
  }
  uVar1 = (int)param_1[0x16] == 1;
  if (0 < (int)param_1[0x16]) {
    FUN_00437de0(param_1 + 0x15);
  }
  FUN_0048cfec(param_1 + 0x18);
  func_0x006809b0();
  if (!(bool)uVar1) {
    if ((unaff_w20 & 1) != 0) {
      FUN_006773ec(param_1[0x1b]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0067821c(param_1[0x1c]);
    }
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*param_1 != param_1[1]) {
    lVar2 = (long)((param_1[1] - *param_1) * 0x10000000) >> 0x20;
    lVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_006a4904(*param_1 + lVar2);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 00678268; end: 0067846f;  */

/* WARNING: Removing unreachable block (ram,0x00678408) */

dword * FUN_00678268(dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  char cVar4;
  char cVar5;
  dword *pdVar6;
  undefined8 uVar7;
  dword *pdVar8;
  int extraout_w8;
  uint uVar9;
  dword *unaff_x19;
  long unaff_x20;
  undefined1 *puVar10;
  int unaff_w22;
  long lVar11;
  int unaff_w23;
  long lVar12;
  undefined8 *unaff_x24;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  func_0x00680024();
  uVar9 = param_1[4];
  if ((uVar9 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0xd8));
    param_4 = param_1;
  }
  func_0x0068076c();
  while (unaff_w23 != unaff_w22) {
    func_0x0067fe3c(*unaff_x24);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x00680280();
    func_0x0068067c();
  }
  iVar2 = *(int *)(unaff_x20 + 0x38);
  while (iVar2 != 0) {
    func_0x0067fe3c(*(undefined8 *)(unaff_x20 + 0x30));
    param_1 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x00680280();
    func_0x0068067c();
  }
  iVar2 = *(int *)(unaff_x20 + 0x50);
  while (iVar2 != 0) {
    func_0x0067fe3c(*(undefined8 *)(unaff_x20 + 0x48));
    param_1 = &MACH_HEADER.cputype;
    func_0x00680280();
    func_0x0068067c();
  }
  iVar2 = *(int *)(unaff_x20 + 0x68);
  while (iVar2 != 0) {
    func_0x0067fe3c(*(undefined8 *)(unaff_x20 + 0x60));
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x00680280();
    func_0x0068067c();
  }
  iVar2 = *(int *)(unaff_x20 + 0x80);
  while (iVar2 != 0) {
    func_0x0067fe3c(*(undefined8 *)(unaff_x20 + 0x78));
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 2);
    func_0x00680280();
    func_0x0068067c();
  }
  if ((uVar9 >> 1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0xe0);
    param_3 = (dword *)(ulong)param_2[0xb];
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 3);
    func_0x00680280();
    param_4 = param_1;
  }
  iVar2 = *(int *)(unaff_x20 + 0x98);
  while (iVar2 != 0) {
    func_0x0067fd70();
    param_1 = &MACH_HEADER.cpusubtype;
    func_0x00680280();
    func_0x0068046c();
  }
  iVar2 = *(int *)(unaff_x20 + 0xb0);
  while (cVar5 = '\0', iVar2 != 0) {
    func_0x0067fd70();
    param_1 = (dword *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x00680280();
    func_0x0068046c();
  }
  cVar4 = '\0';
  for (uVar13 = (ulong)(*(uint *)(unaff_x20 + 200) &
                       ((int)*(uint *)(unaff_x20 + 200) >> 0x1f ^ 0xffffffffU)); uVar13 != 0;
      uVar13 = uVar13 - 1) {
    func_0x00680288();
    func_0x0068035c();
    if (cVar4 == cVar5) {
      func_0x0068075c();
      if (extraout_w8 < 0) {
        param_3 = *(dword **)param_3;
      }
      func_0x00680160();
      param_4 = (dword *)0x0;
    }
    else {
      param_2 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
      param_1 = unaff_x19;
      func_0x0054f030();
      param_4 = param_1;
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar14 = 0;
  pdVar6 = param_1;
  do {
    if ((int)((ulong)(*(long *)(param_1 + 2) - *(long *)param_1) >> 4) <= lVar14) {
      return param_2;
    }
    piVar1 = (int *)(*(long *)param_1 + lVar14 * 0x10);
    func_0x006aad90();
    pdVar8 = pdVar6;
    param_2 = pdVar6;
    switch(piVar1[1]) {
    case 0:
      pdVar8 = *(dword **)(piVar1 + 2);
      uVar13 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar13);
      func_0x00487cf0(pdVar8,uVar13);
      param_2 = pdVar8;
      break;
    case 1:
      dVar3 = piVar1[2];
      pdVar8 = (dword *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *pdVar8 = dVar3;
      param_2 = pdVar8 + 1;
      break;
    case 2:
      lVar11 = *(long *)(piVar1 + 2);
      pdVar8 = (dword *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(long *)pdVar8 = lVar11;
      param_2 = pdVar8 + 2;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar11 = *(long *)(piVar1 + 2);
      lVar12 = (long)*(char *)(lVar11 + 0x17);
      if ((-1 < lVar12) || (lVar12 = *(long *)(lVar11 + 8), lVar12 < 0x80)) {
        lVar15 = *(long *)param_3;
        uVar9 = iVar2 << 3;
        pdVar8 = (dword *)(ulong)uVar9;
        func_0x00487c84();
        if (lVar12 <= lVar15 + ~((long)pdVar6 + (long)(int)pdVar8) + 0x10) {
          puVar10 = (undefined1 *)((long)pdVar6 + 2);
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            puVar10[-2] = (byte)uVar9 | 0x80;
            puVar10 = puVar10 + 1;
          }
          puVar10[-2] = (byte)uVar9;
          puVar10[-1] = (char)lVar12;
          func_0x006aaec0();
          _memcpy();
          param_2 = (dword *)(puVar10 + lVar12);
          break;
        }
      }
      pdVar8 = param_3;
      func_0x0054f030(param_3,iVar2,lVar11,pdVar6);
      param_2 = pdVar8;
      break;
    case 4:
      uVar13 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar13);
      uVar7 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar7,uVar13,param_3);
      func_0x006aad84();
      pdVar8 = (dword *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pdVar8,uVar7);
      param_2 = pdVar8;
    }
    lVar14 = lVar14 + 1;
    pdVar6 = pdVar8;
  } while( true );
}



/* Entry: 00678470; end: 006785d7;  */

/* WARNING: Removing unreachable block (ram,0x0067854c) */
/* WARNING: Removing unreachable block (ram,0x00678508) */
/* WARNING: Removing unreachable block (ram,0x006784c4) */
/* WARNING: Removing unreachable block (ram,0x006784e4) */
/* WARNING: Removing unreachable block (ram,0x00678528) */
/* WARNING: Removing unreachable block (ram,0x00678570) */

long FUN_00678470(ulong param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long extraout_x8;
  ulong uVar8;
  long unaff_x19;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  func_0x00680628();
  uVar8 = *(ulong *)(extraout_x8 + 0x18);
  iVar4 = *(int *)(extraout_x8 + 0x20);
  uVar5 = (uVar8 & 1) == 0;
  puVar2 = (ulong *)(extraout_x8 + 0x18);
  if (!(bool)uVar5) {
    puVar2 = (ulong *)(uVar8 + 7);
  }
  while (((long)iVar4 & 0x1fffffffffffffffU) != 0) {
    param_1 = *puVar2;
    func_0x006779c8();
    func_0x0068040c();
    puVar2 = puVar2 + 1;
  }
  func_0x0067fdfc();
  func_0x0067fdfc();
  func_0x0067fdfc();
  func_0x0067fdfc();
  func_0x0067fdfc();
  func_0x0067fdfc();
  uVar3 = *(uint *)(unaff_x19 + 200);
  while ((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00680008();
    func_0x00680518();
  }
  func_0x006808fc();
  if (!(bool)uVar5) {
    if ((unaff_x19 + 0xc0U & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0xd8));
      func_0x00680350();
    }
    if (((uint)(unaff_x19 + 0xc0U) >> 1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x19 + 0xe0);
      FUN_0067b240();
      func_0x0067fdb0();
    }
  }
  func_0x00680128();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = uVar6;
    return CONCAT44(uVar7,uVar6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  lVar1 = param_1 + CONCAT44(uVar7,uVar6);
  *param_3 = (int)lVar1;
  return lVar1;
}



/* Entry: 006785d8; end: 00678637;  */

void FUN_006785d8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067f5c8(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 00678638; end: 00678663;  */

undefined8 FUN_00678638(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680454();
  func_0x00680820();
  return param_1;
}



/* Entry: 00678664; end: 00678667;  */

undefined8 FUN_00678664(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680454();
  func_0x00680820();
  return param_1;
}



/* Entry: 00678668; end: 0067867b;  */

void FUN_00678668(void)

{
  FUN_00678638();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067867c; end: 00678687;  */

void FUN_0067867c(void)

{
  Hint_Prefetch(0xb26ba0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b26ba0,0,0,0);
  return;
}



/* Entry: 00678688; end: 0067873b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00678688(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x006803bc();
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x006800dc(*(undefined8 *)(unaff_x20 + 0x18));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x19 + 0x18);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x006804c4(*(undefined8 *)(unaff_x20 + 0x20));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x19 + 0x20);
      func_0x006802a8();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x2c) = *(undefined1 *)(unaff_x20 + 0x2c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x2d) = *(undefined1 *)(unaff_x20 + 0x2d);
    }
  }
  func_0x006800f0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680144();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067873c; end: 0067878b;  */

void FUN_0067873c(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x006803d8();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00680498();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x006808b0();
    }
  }
  if ((unaff_w20 & 0x1c) != 0) {
    *(undefined2 *)((long)unaff_x19 + 0x2c) = 0;
    *(undefined4 *)(unaff_x19 + 5) = 0;
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 0067878c; end: 006788c3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_0067878c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    func_0x0068059c();
    func_0x004971e4();
    param_4 = param_1;
  }
  if ((uVar7 & 1) != 0) {
    func_0x006800b0(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x00680174(*(undefined8 *)(unaff_x20 + 0x20));
    param_4 = param_1;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x006804e0();
    func_0x0067ff54();
    param_4 = param_1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680654();
    func_0x0067ff54();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 006788c4; end: 006788ef;  */

undefined8 * FUN_006788c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00a0e5e8;
  param_1[1] = param_2;
  FUN_006788f0();
  return param_1;
}



/* Entry: 006788f0; end: 00678917;  */

void FUN_006788f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 00678918; end: 006789b3;  */

void FUN_00678918(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e5e8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  FUN_0067e9d0(unaff_x22 + 0x20);
  lVar1 = unaff_x19 + 0x48;
  func_0x0067e9f0();
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00680484();
  }
  *(long *)(unaff_x19 + 0x60) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  return;
}



/* Entry: 006789b4; end: 006789df;  */

undefined8 FUN_006789b4(undefined8 param_1)

{
  func_0x006802c0();
  FUN_006789e0(param_1);
  return param_1;
}



/* Entry: 006789e0; end: 00678a0f;  */

long * FUN_006789e0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  FUN_0067ea64(param_1 + 0x48);
  FUN_0067ea10(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if ((long)*(short *)(param_1 + 0x1a) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)(param_1 + 0x1a) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)(param_1 + 0x1a) < 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return (long *)(param_1 + 0x10);
}



/* Entry: 00678a10; end: 00678a13;  */

undefined8 FUN_00678a10(undefined8 param_1)

{
  func_0x006802c0();
  FUN_006789e0(param_1);
  return param_1;
}



/* Entry: 00678a14; end: 00678a27;  */

void FUN_00678a14(void)

{
  FUN_006789b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00678a28; end: 00678a33;  */

void FUN_00678a28(void)

{
  Hint_Prefetch(0xb26d30,0,0,0);
  Hint_Prefetch(PTR_DAT_00b26d30,0,0,0);
  return;
}



/* Entry: 00678a34; end: 00678a7f;  */

void FUN_00678a34(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25e98);
  if ((int)lVar2 != 0) {
    iVar1 = (int)param_1 + 0x48;
    FUN_00678d50();
    if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      func_0x0067d498();
    }
  }
  return;
}



/* Entry: 00678a80; end: 00678b17;  */

void FUN_00678a80(ulong *param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong unaff_x22;
  
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  func_0x00680448();
  FUN_00678d00();
  func_0x006808f0();
  func_0x00678d10();
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac(0,*(undefined8 *)(unaff_x20 + 0x60));
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
    }
  }
  func_0x006801e4();
  ppuVar2 = &PTR_PTR_00b25e98;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar2[1] - (long)*ppuVar2) >> 4)) {
      func_0x006a5744();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 00678b18; end: 00678b57;  */

void FUN_00678b18(void)

{
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  long lVar2;
  
  func_0x00680104();
  if ((unaff_x19[5] & 0x3f) != 0) {
    unaff_x19[6] = 0;
    unaff_x19[7] = 0;
    unaff_x19[8] = 0;
  }
  func_0x00680558();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 00678b58; end: 00678cc7;  */

char * FUN_00678b58(char *param_1,undefined8 param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulong extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  
  iVar2 = *(int *)(param_1 + 0x38);
  pcVar3 = param_1;
  while (iVar2 != 0) {
    func_0x0067fd70();
    pcVar3 = (char *)((long)&MACH_HEADER.magic + 2);
    func_0x0067ffe8();
    func_0x006804b8();
  }
  uVar9 = *(uint *)(param_1 + 0x28);
  if ((uVar9 >> 1 & 1) != 0) {
    func_0x0067ff38();
    func_0x00680464();
    func_0x0067ffb8();
  }
  if ((uVar9 & 1) != 0) {
    param_3 = (char *)(ulong)*(uint *)(*(undefined **)(param_1 + 0x60) + 0x2c);
    pcVar3 = segment_command_00000020.segname + 10;
    func_0x0067ffe8();
  }
  iVar2 = *(int *)(param_1 + 0x50);
  while (iVar2 != 0) {
    func_0x0067fd44();
    func_0x006804b8();
  }
  ppuVar8 = &PTR_PTR_00b25e98;
  func_0x0067fe98();
  func_0x00680500();
  if ((extraout_x8 & 1) == 0) {
    return (char *)ppuVar8;
  }
  func_0x006801a8();
  lVar12 = 0;
  pcVar4 = pcVar3;
  do {
    if ((int)((ulong)((long)*(undefined **)(pcVar3 + 8) - (long)*(undefined **)pcVar3) >> 4) <=
        lVar12) {
      return (char *)ppuVar8;
    }
    piVar1 = (int *)(*(undefined **)pcVar3 + lVar12 * 0x10);
    func_0x006aad90();
    pcVar7 = pcVar4;
    ppuVar8 = (undefined **)pcVar4;
    switch(piVar1[1]) {
    case 0:
      pcVar7 = *(char **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(pcVar7,uVar5);
      ppuVar8 = (undefined **)pcVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      pcVar7 = (char *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)pcVar7 = iVar2;
      ppuVar8 = (undefined **)(pcVar7 + 4);
      break;
    case 2:
      puVar13 = *(undefined **)(piVar1 + 2);
      pcVar7 = (char *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(undefined **)pcVar7 = puVar13;
      ppuVar8 = (undefined **)(pcVar7 + 8);
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        puVar13 = *(undefined **)param_3;
        uVar9 = iVar2 << 3;
        pcVar7 = (char *)(ulong)uVar9;
        func_0x00487c84();
        if (lVar11 <= (long)(puVar13 + ~(ulong)(pcVar4 + (int)pcVar7) + 0x10)) {
          pcVar4 = pcVar4 + 2;
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            pcVar4[-2] = (byte)uVar9 | 0x80;
            pcVar4 = pcVar4 + 1;
          }
          pcVar4[-2] = (byte)uVar9;
          pcVar4[-1] = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          ppuVar8 = (undefined **)(pcVar4 + lVar11);
          break;
        }
      }
      pcVar7 = param_3;
      func_0x0054f030(param_3,iVar2,lVar10,pcVar4);
      ppuVar8 = (undefined **)pcVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar6,uVar5,param_3);
      func_0x006aad84();
      pcVar7 = (char *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pcVar7,uVar6);
      ppuVar8 = (undefined **)pcVar7;
    }
    lVar12 = lVar12 + 1;
    pcVar4 = pcVar7;
  } while( true );
}



/* Entry: 00678cc8; end: 00678cff;  */

long FUN_00678cc8(long param_1)

{
  long extraout_x8;
  
  func_0x0067d30c();
  func_0x0067fdd4();
  return param_1 + extraout_x8;
}



/* Entry: 00678d00; end: 00678d1f;  */

void FUN_00678d00(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067f76c(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 00678d20; end: 00678d4f;  */

void FUN_00678d20(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x00677c54();
  func_0x006803f4();
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  func_0x00680448();
  FUN_00678d00();
  func_0x006808f0();
  func_0x00678d10();
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac(0,*(undefined8 *)(unaff_x20 + 0x60));
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
    }
  }
  func_0x006801e4();
  ppuVar2 = &PTR_PTR_00b25e98;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar2[1] - (long)*ppuVar2) >> 4)) {
      func_0x006a5744();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 00678d50; end: 00678d9f;  */

bool FUN_00678d50(ulong param_1)

{
  int iVar1;
  char in_NG;
  char in_OV;
  
  iVar1 = *(int *)(param_1 + 8);
  do {
    func_0x00680670();
    if (in_NG != in_OV) break;
    func_0x00680920();
    FUN_0067d04c();
  } while ((param_1 & 1) != 0);
  return iVar1 + 1 < 1;
}



/* Entry: 00678da0; end: 00678dcb;  */

undefined8 * FUN_00678da0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00a0e778;
  param_1[1] = param_2;
  FUN_00678dcc();
  return param_1;
}



/* Entry: 00678dcc; end: 00678df7;  */

void FUN_00678dcc(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x20) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x28) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x30) = &DAT_00b69408;
  *(undefined8 *)(param_1 + 0x54) = 0x100000001;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_00b69408;
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 00678df8; end: 00678e47;  */

long FUN_00678df8(long param_1)

{
  func_0x006802c0();
  func_0x00680454();
  func_0x00680820();
  func_0x00532f74(param_1 + 0x28);
  func_0x00680738();
  func_0x00532f74(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0067b860();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00678e48; end: 00678e4b;  */

long FUN_00678e48(long param_1)

{
  func_0x006802c0();
  func_0x00680454();
  func_0x00680820();
  func_0x00532f74(param_1 + 0x28);
  func_0x00680738();
  func_0x00532f74(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0067b860();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00678e4c; end: 00678e5f;  */

void FUN_00678e4c(void)

{
  FUN_00678df8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00678e60; end: 00678e6b;  */

void FUN_00678e60(void)

{
  Hint_Prefetch(0xb26ea8,0,0,0);
  Hint_Prefetch(PTR_DAT_00b26ea8,0,0,0);
  return;
}



/* Entry: 00678e6c; end: 00678e93;  */

void FUN_00678e6c(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) {
    FUN_0067b8f0();
  }
  return;
}



/* Entry: 00678e94; end: 00679027;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00678e94(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x00680074();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00680914();
    puVar2 = unaff_x22;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00680268(*(undefined8 *)(unaff_x20 + 0x18));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x006804a0(*(undefined8 *)(unaff_x20 + 0x20));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x20);
      func_0x006802a8();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x006804a0(*(undefined8 *)(unaff_x20 + 0x28));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x28);
      func_0x006802a8();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x006804a0(*(undefined8 *)(unaff_x20 + 0x30));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x30);
      func_0x006802a8();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x006804a0(*(undefined8 *)(unaff_x20 + 0x38));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x38);
      func_0x006802a8();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      param_2 = *(long **)(unaff_x20 + 0x40);
      if (param_1 == (ulong *)0x0) {
        FUN_0067f898();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_0067b93c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x4c) = *(undefined4 *)(unaff_x20 + 0x4c);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x006807c4();
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x54) = *(undefined4 *)(unaff_x20 + 0x54);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x006a5744();
    for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 00679028; end: 0067915b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00679028(void)

{
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x0068043c();
  if ((unaff_w20 & 0x3f) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00680498();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x006808b0();
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      FUN_006773ec(unaff_x19[5]);
    }
    if ((unaff_w20 >> 3 & 1) != 0) {
      func_0x00680688();
    }
    if ((unaff_w20 >> 4 & 1) != 0) {
      FUN_006773ec(unaff_x19[7]);
    }
    if ((unaff_w20 >> 5 & 1) != 0) {
      func_0x006790d0(unaff_x19[8]);
    }
  }
  if ((unaff_w20 & 0xc0) != 0) {
    unaff_x19[9] = 0;
  }
  if ((unaff_w20 & 0x700) != 0) {
    *(undefined1 *)(unaff_x19 + 10) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x54) = 0x100000001;
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 == unaff_x19[1]) {
    return;
  }
  lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
  lVar2 = lVar1 + 1;
  lVar1 = lVar1 * 0x10;
  do {
    lVar1 = lVar1 + -0x10;
    FUN_006a4904(*unaff_x19 + lVar1);
    lVar2 = lVar2 + -1;
  } while (1 < lVar2);
  unaff_x19[1] = *unaff_x19;
  return;
}



/* Entry: 0067915c; end: 006793c7;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_0067915c(dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  dword *pdVar4;
  ulong uVar5;
  undefined8 uVar6;
  dword *pdVar7;
  uint uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x00680024();
  uVar8 = param_1[4];
  if ((uVar8 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    func_0x006800b0(*(undefined8 *)(unaff_x20 + 0x20));
    param_4 = param_1;
  }
  if ((uVar8 >> 6 & 1) != 0) {
    param_2 = (dword *)(ulong)*(uint *)(unaff_x20 + 0x48);
    func_0x0068059c();
    func_0x0048c654();
    param_4 = param_1;
  }
  if ((uVar8 >> 9 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680634();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  if ((uVar8 >> 10 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x006804e0();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    func_0x00680328(*(undefined8 *)(unaff_x20 + 0x28));
    param_2 = (dword *)((long)&MACH_HEADER.cputype + 2);
    FUN_00435e9c();
    param_4 = param_1;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    func_0x00680328(*(undefined8 *)(unaff_x20 + 0x30));
    param_2 = (dword *)((long)&MACH_HEADER.cputype + 3);
    FUN_00435e9c();
    param_4 = param_1;
  }
  if ((uVar8 >> 5 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x40);
    param_3 = (dword *)(ulong)param_2[0xb];
    param_1 = &MACH_HEADER.cpusubtype;
    func_0x00680280();
    param_4 = param_1;
  }
  if ((uVar8 >> 7 & 1) != 0) {
    param_2 = (dword *)(ulong)*(uint *)(unaff_x20 + 0x4c);
    func_0x0068059c();
    FUN_005185c4();
    param_4 = param_1;
  }
  if ((uVar8 >> 4 & 1) != 0) {
    func_0x00680328(*(undefined8 *)(unaff_x20 + 0x38));
    param_2 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
    FUN_00435e9c();
    param_4 = param_1;
  }
  if ((uVar8 >> 8 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680828();
    func_0x0067ff54();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar12 = 0;
  pdVar4 = param_1;
  do {
    if ((int)((ulong)(*(long *)(param_1 + 2) - *(long *)param_1) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(*(long *)param_1 + lVar12 * 0x10);
    func_0x006aad90();
    pdVar7 = pdVar4;
    param_2 = pdVar4;
    switch(piVar1[1]) {
    case 0:
      pdVar7 = *(dword **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(pdVar7,uVar5);
      param_2 = pdVar7;
      break;
    case 1:
      dVar3 = piVar1[2];
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *pdVar7 = dVar3;
      param_2 = pdVar7 + 1;
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(long *)pdVar7 = lVar10;
      param_2 = pdVar7 + 2;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *(long *)param_3;
        uVar8 = iVar2 << 3;
        pdVar7 = (dword *)(ulong)uVar8;
        func_0x00487c84();
        if (lVar11 <= lVar13 + ~((long)pdVar4 + (long)(int)pdVar7) + 0x10) {
          puVar9 = (undefined1 *)((long)pdVar4 + 2);
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            puVar9[-2] = (byte)uVar8 | 0x80;
            puVar9 = puVar9 + 1;
          }
          puVar9[-2] = (byte)uVar8;
          puVar9[-1] = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          param_2 = (dword *)(puVar9 + lVar11);
          break;
        }
      }
      pdVar7 = param_3;
      func_0x0054f030(param_3,iVar2,lVar10,pdVar4);
      param_2 = pdVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar6,uVar5,param_3);
      func_0x006aad84();
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pdVar7,uVar6);
      param_2 = pdVar7;
    }
    lVar12 = lVar12 + 1;
    pdVar4 = pdVar7;
  } while( true );
}



/* Entry: 006793c8; end: 006793ff;  */

long FUN_006793c8(long param_1)

{
  func_0x006802c0();
  func_0x00680454();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0067bf90();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00679400; end: 00679403;  */

long FUN_00679400(long param_1)

{
  func_0x006802c0();
  func_0x00680454();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0067bf90();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00679404; end: 00679417;  */

void FUN_00679404(void)

{
  FUN_006793c8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00679418; end: 00679423;  */

void FUN_00679418(void)

{
  Hint_Prefetch(0xb27130,0,0,0);
  Hint_Prefetch(PTR_DAT_00b27130,0,0,0);
  return;
}



/* Entry: 00679424; end: 0067944b;  */

void FUN_00679424(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
    FUN_0067c00c();
  }
  return;
}



/* Entry: 0067944c; end: 006794db;  */

void FUN_0067944c(ulong *param_1,long *param_2)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00680074();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00680914();
    puVar1 = unaff_x22;
  }
  func_0x006808e4();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00680268(*(undefined8 *)(unaff_x20 + 0x18));
      if (((ulong)puVar2 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      param_2 = *(long **)(unaff_x20 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0067f8d4();
        *(ulong **)(unaff_x21 + 0x20) = puVar1;
        param_1 = puVar1;
      }
      else {
        FUN_0067c050();
      }
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar3 = 0; (long)unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 006794dc; end: 0067955b;  */

void FUN_006794dc(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x006803d8();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00680498();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00679520(unaff_x19[4]);
    }
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 0067955c; end: 00679617;  */

long * FUN_0067955c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x00680280();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 00679618; end: 0067963b;  */

undefined8 FUN_00679618(undefined8 param_1)

{
  func_0x006802c0();
  return param_1;
}



/* Entry: 0067963c; end: 0067963f;  */

undefined8 FUN_0067963c(undefined8 param_1)

{
  func_0x006802c0();
  return param_1;
}



/* Entry: 00679640; end: 00679653;  */

void FUN_00679640(void)

{
  FUN_00679618();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00679654; end: 006796c3;  */

void FUN_00679654(void)

{
  Hint_Prefetch(0xb27238,0,0,0);
  Hint_Prefetch(PTR_DAT_00b27238,0,0,0);
  return;
}



/* Entry: 006796c4; end: 0067970f;  */

long * FUN_006796c4(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  uint unaff_w21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680954();
  if ((unaff_w21 & 1) != 0) {
    func_0x0068085c();
    param_3 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00680850();
    param_3 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_3;
  }
  func_0x00680968();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 00679710; end: 0067979b;  */

ulong FUN_00679710(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x0068080c();
      uVar3 = extraout_x8 + uVar3;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar3;
    return uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + uVar3);
  return param_1 + uVar3;
}



/* Entry: 0067979c; end: 006797e7;  */

long FUN_0067979c(long param_1)

{
  func_0x006802c0();
  func_0x00680890();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_0067c21c();
  }
  __ZdlPv();
  func_0x006806a0();
  FUN_0067ea8c(param_1 + 0x30);
  FUN_0067eab4(param_1 + 0x18);
  return param_1;
}



/* Entry: 006797e8; end: 006797eb;  */

long FUN_006797e8(long param_1)

{
  func_0x006802c0();
  func_0x00680890();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_0067c21c();
  }
  __ZdlPv();
  func_0x006806a0();
  FUN_0067ea8c(param_1 + 0x30);
  FUN_0067eab4(param_1 + 0x18);
  return param_1;
}



/* Entry: 006797ec; end: 006797ff;  */

void FUN_006797ec(void)

{
  FUN_0067979c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00679800; end: 0067980b;  */

void FUN_00679800(void)

{
  Hint_Prefetch(0xb27300,0,0,0);
  Hint_Prefetch(PTR_DAT_00b27300,0,0,0);
  return;
}



/* Entry: 0067980c; end: 0067986b;  */

void FUN_0067980c(ulong param_1)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00680800();
  do {
    func_0x00680670();
    if (in_NG != in_OV) {
      if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
        return;
      }
      FUN_0067c298();
      return;
    }
    func_0x0067ff78();
    FUN_00679c00();
  } while ((uVar1 & 1) != 0);
  return;
}



/* Entry: 0067986c; end: 0067990b;  */

void FUN_0067986c(ulong *param_1,long *param_2)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  func_0x00680908();
  FUN_00679b74();
  func_0x00680448();
  func_0x00679b8c();
  func_0x006808f0();
  FUN_0048cf14();
  func_0x006808e4();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00680268(*(undefined8 *)(unaff_x20 + 0x60));
      if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x60);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      param_2 = *(long **)(unaff_x20 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0067f910();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_0067c2dc();
      }
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar1 = 0; (long)unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067990c; end: 006799bf;  */

void FUN_0067990c(void)

{
  char in_NG;
  char in_OV;
  undefined1 uVar1;
  ulong extraout_x8;
  long lVar2;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar3;
  
  func_0x006805bc();
  if (in_NG == in_OV) {
    func_0x006806c0();
  }
  uVar1 = (int)unaff_x19[7] == 1;
  if (0 < (int)unaff_x19[7]) {
    FUN_00437de0(unaff_x19 + 6);
  }
  FUN_0048cfec(unaff_x19 + 9);
  func_0x006809b0();
  if (!(bool)uVar1) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00680874();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00679978(unaff_x19[0xd]);
    }
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar2 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar2);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 006799c0; end: 00679ac3;  */

/* WARNING: Removing unreachable block (ram,0x00679a5c) */

dword * FUN_006799c0(dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  char cVar4;
  char cVar5;
  dword *pdVar6;
  ulong uVar7;
  undefined8 uVar8;
  dword *pdVar9;
  int extraout_w8;
  uint uVar10;
  dword *unaff_x19;
  long unaff_x20;
  undefined1 *puVar11;
  uint uVar12;
  long unaff_x22;
  long lVar13;
  uint unaff_w23;
  long lVar14;
  undefined8 *unaff_x24;
  long lVar15;
  long lVar16;
  
  func_0x00680024();
  uVar10 = param_1[4];
  if ((uVar10 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0x60));
    param_4 = param_1;
  }
  func_0x0068076c();
  while (uVar12 = (uint)unaff_x22, unaff_w23 != uVar12) {
    func_0x0067fe3c(*unaff_x24);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x00680280();
    func_0x0068067c();
  }
  if ((uVar10 >> 1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x68);
    func_0x00680228();
    param_4 = param_1;
  }
  func_0x00680238();
  while( true ) {
    cVar4 = SBORROW4(uVar12,uVar10);
    cVar5 = (int)(uVar12 - uVar10) < 0;
    if (uVar12 == uVar10) break;
    func_0x0067fd70();
    param_1 = &MACH_HEADER.cputype;
    func_0x00680280();
    func_0x0068046c();
  }
  func_0x00680990();
  for (; unaff_x24 != (undefined8 *)0x0; unaff_x24 = (undefined8 *)((long)unaff_x24 + -1)) {
    func_0x00680288();
    func_0x0068035c();
    if (cVar5 == cVar4) {
      func_0x0068075c();
      if (extraout_w8 < 0) {
        param_3 = *(dword **)param_3;
      }
      func_0x00680160();
      param_4 = (dword *)(unaff_x22 + (ulong)uVar10);
    }
    else {
      param_2 = (dword *)((long)&MACH_HEADER.cputype + 1);
      param_1 = unaff_x19;
      func_0x0054f030();
      param_4 = param_1;
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar15 = 0;
  pdVar6 = param_1;
  do {
    if ((int)((ulong)(*(long *)(param_1 + 2) - *(long *)param_1) >> 4) <= lVar15) {
      return param_2;
    }
    piVar1 = (int *)(*(long *)param_1 + lVar15 * 0x10);
    func_0x006aad90();
    pdVar9 = pdVar6;
    param_2 = pdVar6;
    switch(piVar1[1]) {
    case 0:
      pdVar9 = *(dword **)(piVar1 + 2);
      uVar7 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar7);
      func_0x00487cf0(pdVar9,uVar7);
      param_2 = pdVar9;
      break;
    case 1:
      dVar3 = piVar1[2];
      pdVar9 = (dword *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *pdVar9 = dVar3;
      param_2 = pdVar9 + 1;
      break;
    case 2:
      lVar13 = *(long *)(piVar1 + 2);
      pdVar9 = (dword *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(long *)pdVar9 = lVar13;
      param_2 = pdVar9 + 2;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar13 = *(long *)(piVar1 + 2);
      lVar14 = (long)*(char *)(lVar13 + 0x17);
      if ((-1 < lVar14) || (lVar14 = *(long *)(lVar13 + 8), lVar14 < 0x80)) {
        lVar16 = *(long *)param_3;
        uVar10 = iVar2 << 3;
        pdVar9 = (dword *)(ulong)uVar10;
        func_0x00487c84();
        if (lVar14 <= lVar16 + ~((long)pdVar6 + (long)(int)pdVar9) + 0x10) {
          puVar11 = (undefined1 *)((long)pdVar6 + 2);
          for (uVar10 = uVar10 | 2; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
            puVar11[-2] = (byte)uVar10 | 0x80;
            puVar11 = puVar11 + 1;
          }
          puVar11[-2] = (byte)uVar10;
          puVar11[-1] = (char)lVar14;
          func_0x006aaec0();
          _memcpy();
          param_2 = (dword *)(puVar11 + lVar14);
          break;
        }
      }
      pdVar9 = param_3;
      func_0x0054f030(param_3,iVar2,lVar13,pdVar6);
      param_2 = pdVar9;
      break;
    case 4:
      uVar7 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar7);
      uVar8 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar8,uVar7,param_3);
      func_0x006aad84();
      pdVar9 = (dword *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pdVar9,uVar8);
      param_2 = pdVar9;
    }
    lVar15 = lVar15 + 1;
    pdVar6 = pdVar9;
  } while( true );
}



/* Entry: 00679ac4; end: 00679b73;  */

/* WARNING: Removing unreachable block (ram,0x00679b0c) */

long FUN_00679ac4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  func_0x00680628();
  func_0x0067feec();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    func_0x00679df0();
    func_0x0067fd90();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0067fdfc();
  uVar1 = *(uint *)(unaff_x19 + 0x50);
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00680008();
    func_0x00680518();
  }
  func_0x006808fc();
  if (!(bool)in_ZR) {
    if ((unaff_x19 + 0x48U & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00680350();
    }
    if (((uint)(unaff_x19 + 0x48U) >> 1 & 1) != 0) {
      param_1 = *(long *)(unaff_x19 + 0x68);
      FUN_0067c458();
      func_0x0067fdb0();
    }
  }
  func_0x00680128();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = uVar2;
    return CONCAT44(uVar3,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  param_1 = param_1 + CONCAT44(uVar3,uVar2);
  *param_3 = (int)param_1;
  return param_1;
}



/* Entry: 00679b74; end: 00679ba3;  */

void FUN_00679b74(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067f940(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 00679ba4; end: 00679bdb;  */

long FUN_00679ba4(long param_1)

{
  func_0x006802c0();
  func_0x00680454();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0067c568();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00679bdc; end: 00679bdf;  */

long FUN_00679bdc(long param_1)

{
  func_0x006802c0();
  func_0x00680454();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0067c568();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00679be0; end: 00679bf3;  */

void FUN_00679be0(void)

{
  FUN_00679ba4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00679bf4; end: 00679bff;  */

void FUN_00679bf4(void)

{
  Hint_Prefetch(0xb274a0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b274a0,0,0,0);
  return;
}



/* Entry: 00679c00; end: 00679c27;  */

void FUN_00679c00(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
    FUN_0067c5f4();
  }
  return;
}



/* Entry: 00679c28; end: 00679cd7;  */

void FUN_00679c28(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x00680074();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00680914();
    puVar2 = unaff_x22;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00680268(*(undefined8 *)(unaff_x20 + 0x18));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      param_2 = *(long **)(unaff_x20 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_0067fa10();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_0067c638();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x006a5744();
    for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 00679cd8; end: 00679d77;  */

void FUN_00679cd8(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x006803d8();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00680498();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00679d20(unaff_x19[4]);
    }
  }
  func_0x00680558();
  *(undefined4 *)(unaff_x19 + 1) = 0;
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 00679d78; end: 00679e57;  */

long * FUN_00679d78(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    func_0x0068059c();
    FUN_0048c628();
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    FUN_00680228();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 00679e58; end: 00679e97;  */

long FUN_00679e58(long param_1)

{
  func_0x006802c0();
  func_0x00680738();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0067c8dc();
  }
  __ZdlPv();
  FUN_0067eadc(param_1 + 0x18);
  return param_1;
}



/* Entry: 00679e98; end: 00679e9b;  */

long FUN_00679e98(long param_1)

{
  func_0x006802c0();
  func_0x00680738();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0067c8dc();
  }
  __ZdlPv();
  FUN_0067eadc(param_1 + 0x18);
  return param_1;
}



/* Entry: 00679e9c; end: 00679eaf;  */

void FUN_00679e9c(void)

{
  FUN_00679e58();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00679eb0; end: 00679ebb;  */

void FUN_00679eb0(void)

{
  Hint_Prefetch(0xb275d0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b275d0,0,0,0);
  return;
}



/* Entry: 00679ebc; end: 00679f1b;  */

void FUN_00679ebc(ulong param_1)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00680800();
  do {
    func_0x00680670();
    if (in_NG != in_OV) {
      if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
        return;
      }
      FUN_0067c958();
      return;
    }
    func_0x0067ff78();
    FUN_0067a1ac();
  } while ((uVar1 & 1) != 0);
  return;
}



/* Entry: 00679f1c; end: 00679fab;  */

void FUN_00679f1c(ulong *param_1,long *param_2)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  func_0x00680908();
  FUN_0067a12c();
  func_0x006808e4();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00680268(*(undefined8 *)(unaff_x20 + 0x30));
      if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x30);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      param_2 = *(long **)(unaff_x20 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0067fa44();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_0067c99c();
      }
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar1 = 0; (long)unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 00679fac; end: 0067a03f;  */

void FUN_00679fac(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x006805bc();
  if (in_NG == in_OV) {
    func_0x006806c0();
  }
  func_0x006809b0();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00680688();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00679ffc(unaff_x19[7]);
    }
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 0067a040; end: 0067a12b;  */

long * FUN_0067a040(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  int unaff_w22;
  long lVar8;
  int unaff_w23;
  long lVar9;
  undefined8 *unaff_x24;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0x30));
    param_4 = param_1;
  }
  func_0x0068076c();
  while (unaff_w23 != unaff_w22) {
    func_0x0067fe3c(*unaff_x24);
    param_1 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x00680280();
    func_0x0068067c();
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x38);
    func_0x00680228();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 0067a12c; end: 0067a143;  */

void FUN_0067a12c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067fa74(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0067a144; end: 0067a187;  */

long FUN_0067a144(long param_1)

{
  func_0x006802c0();
  func_0x00680454();
  func_0x00680820();
  func_0x00532f74(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0067cb90();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0067a188; end: 0067a18b;  */

long FUN_0067a188(long param_1)

{
  func_0x006802c0();
  func_0x00680454();
  func_0x00680820();
  func_0x00532f74(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0067cb90();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0067a18c; end: 0067a19f;  */

void FUN_0067a18c(void)

{
  FUN_0067a144();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067a1a0; end: 0067a1ab;  */

void FUN_0067a1a0(void)

{
  Hint_Prefetch(0xb27708,0,0,0);
  Hint_Prefetch(PTR_DAT_00b27708,0,0,0);
  return;
}



/* Entry: 0067a1ac; end: 0067a1d3;  */

void FUN_0067a1ac(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) != 0) {
    FUN_0067cc0c();
  }
  return;
}



/* Entry: 0067a1d4; end: 0067a2e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067a1d4(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x00680074();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00680914();
    puVar2 = unaff_x22;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00680268(*(undefined8 *)(unaff_x20 + 0x18));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x006804a0(*(undefined8 *)(unaff_x20 + 0x20));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x20);
      func_0x006802a8();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x006804a0(*(undefined8 *)(unaff_x20 + 0x28));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x28);
      func_0x006802a8();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      param_2 = *(long **)(unaff_x20 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_0067fb08();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_0067cc50();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x39) = *(undefined1 *)(unaff_x20 + 0x39);
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x006a5744();
    for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067a2e4; end: 0067a39f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067a2e4(void)

{
  long lVar1;
  long unaff_x19;
  ulong *puVar2;
  uint unaff_w20;
  long lVar3;
  
  func_0x0068043c();
  if ((unaff_w20 & 0xf) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00680498();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x006808b0();
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      FUN_006773ec(*(undefined8 *)(unaff_x19 + 0x28));
    }
    if ((unaff_w20 >> 3 & 1) != 0) {
      func_0x0067a358(*(undefined8 *)(unaff_x19 + 0x30));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined2 *)(unaff_x19 + 0x38) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00699010();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar2 == puVar2[1]) {
    return;
  }
  lVar1 = (long)((puVar2[1] - *puVar2) * 0x10000000) >> 0x20;
  lVar3 = lVar1 + 1;
  lVar1 = lVar1 * 0x10;
  do {
    lVar1 = lVar1 + -0x10;
    FUN_006a4904(*puVar2 + lVar1);
    lVar3 = lVar3 + -1;
  } while (1 < lVar3);
  puVar2[1] = *puVar2;
  return;
}



/* Entry: 0067a3a0; end: 0067a51b;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_0067a3a0(dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  dword *pdVar4;
  ulong uVar5;
  undefined8 uVar6;
  dword *pdVar7;
  uint uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x00680024();
  uVar8 = param_1[4];
  if ((uVar8 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    func_0x006800b0(*(undefined8 *)(unaff_x20 + 0x20));
    param_4 = param_1;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    func_0x00680174(*(undefined8 *)(unaff_x20 + 0x28));
    param_4 = param_1;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x30);
    param_3 = (dword *)(ulong)param_2[0xb];
    param_1 = &MACH_HEADER.cputype;
    func_0x00680280();
    param_4 = param_1;
  }
  if ((uVar8 >> 4 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x006804e0();
    func_0x0067ff54();
    param_4 = param_1;
  }
  if ((uVar8 >> 5 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680654();
    func_0x0067ff54();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar12 = 0;
  pdVar4 = param_1;
  do {
    if ((int)((ulong)(*(long *)(param_1 + 2) - *(long *)param_1) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(*(long *)param_1 + lVar12 * 0x10);
    func_0x006aad90();
    pdVar7 = pdVar4;
    param_2 = pdVar4;
    switch(piVar1[1]) {
    case 0:
      pdVar7 = *(dword **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(pdVar7,uVar5);
      param_2 = pdVar7;
      break;
    case 1:
      dVar3 = piVar1[2];
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *pdVar7 = dVar3;
      param_2 = pdVar7 + 1;
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(long *)pdVar7 = lVar10;
      param_2 = pdVar7 + 2;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *(long *)param_3;
        uVar8 = iVar2 << 3;
        pdVar7 = (dword *)(ulong)uVar8;
        func_0x00487c84();
        if (lVar11 <= lVar13 + ~((long)pdVar4 + (long)(int)pdVar7) + 0x10) {
          puVar9 = (undefined1 *)((long)pdVar4 + 2);
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            puVar9[-2] = (byte)uVar8 | 0x80;
            puVar9 = puVar9 + 1;
          }
          puVar9[-2] = (byte)uVar8;
          puVar9[-1] = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          param_2 = (dword *)(puVar9 + lVar11);
          break;
        }
      }
      pdVar7 = param_3;
      func_0x0054f030(param_3,iVar2,lVar10,pdVar4);
      param_2 = pdVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar6,uVar5,param_3);
      func_0x006aad84();
      pdVar7 = (dword *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pdVar7,uVar6);
      param_2 = pdVar7;
    }
    lVar12 = lVar12 + 1;
    pdVar4 = pdVar7;
  } while( true );
}



/* Entry: 0067a51c; end: 0067a547;  */

undefined8 * FUN_0067a51c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00a0e4f8;
  param_1[1] = param_2;
  FUN_0067a548();
  return param_1;
}



/* Entry: 0067a548; end: 0067a58b;  */

void FUN_0067a548(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined1 *)(param_1 + 0xac) = 1;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined **)(param_1 + 0x48) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x50) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x58) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x60) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x68) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x70) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x78) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x80) = &DAT_00b69408;
  *(undefined **)(param_1 + 0x88) = &DAT_00b69408;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined **)(param_1 + 0x90) = &DAT_00b69408;
  return;
}



/* Entry: 0067a58c; end: 0067a68b;  */

void FUN_0067a58c(void)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e4f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  lVar1 = unaff_x20 + 0x48;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x48) = lVar1;
  lVar1 = unaff_x20 + 0x50;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x50) = lVar1;
  lVar1 = unaff_x20 + 0x58;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x58) = lVar1;
  lVar1 = unaff_x20 + 0x60;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x60) = lVar1;
  lVar1 = unaff_x20 + 0x68;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x68) = lVar1;
  lVar1 = unaff_x20 + 0x70;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x70) = lVar1;
  lVar1 = unaff_x20 + 0x78;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x78) = lVar1;
  lVar1 = unaff_x20 + 0x80;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x80) = lVar1;
  lVar1 = unaff_x20 + 0x88;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x88) = lVar1;
  lVar1 = unaff_x20 + 0x90;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x90) = lVar1;
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x29) >> 2 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00680484();
  }
  *(long *)(unaff_x19 + 0x98) = lVar1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa5) = *(undefined8 *)(unaff_x20 + 0xa5);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  return;
}



/* Entry: 0067a68c; end: 0067a6b7;  */

undefined8 FUN_0067a68c(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067a6b8(param_1);
  return param_1;
}


