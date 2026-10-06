/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108922130; end: 10892214f;  */

undefined ** FUN_108922130(void)

{
  return &PTR_DAT_110a97578;
}



/* Entry: 108922150; end: 108922203;  */

byte * FUN_108922150(byte *param_1,undefined8 param_2,ulong param_3,byte *param_4)

{
  ulong *puVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x000108924874();
  uVar2 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar2) {
    func_0x00010892483c();
    func_0x000108924e4c();
    while (0x7f < uVar2) {
      func_0x000108924cb0();
    }
    param_4[-1] = (byte)uVar2;
    puVar6 = *(ulong **)(unaff_x20 + 0x18);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010892483c();
      uVar5 = *puVar6;
      pbVar3 = param_1;
      while( true ) {
        param_4 = pbVar3 + 1;
        if (uVar5 < 0x80) break;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar3 = param_4;
      }
      puVar6 = puVar6 + 1;
      *pbVar3 = (byte)uVar5;
    } while (puVar6 < puVar1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar7;
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 108922204; end: 108922263;  */

void FUN_108922204(long param_1)

{
  int iVar1;
  int extraout_w8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x000108924c2c();
  func_0x00010b4d3edc();
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  func_0x000108924e88((long)(int)param_1);
  func_0x000108924b14();
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = extraout_w8 + 1;
  }
  iVar1 = iVar1 + (int)param_1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x24) = iVar1;
  return;
}



/* Entry: 108922264; end: 108922267;  */

void FUN_108922264(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108924a28();
  FUN_1088f1584();
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



/* Entry: 108922268; end: 1089222e7;  */

void FUN_108922268(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108924a28();
  FUN_1088f1584();
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



/* Entry: 1089222e8; end: 1089222eb;  */

undefined8 FUN_1089222e8(undefined8 param_1)

{
  func_0x00010068e1bc();
  func_0x0001006910a8(param_1);
  return param_1;
}



/* Entry: 1089222ec; end: 1089222ff;  */

void FUN_1089222ec(void)

{
  func_0x000107c2a5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108922300; end: 10892230b;  */

undefined ** FUN_108922300(void)

{
  return &PTR_DAT_110a975d8;
}



/* Entry: 10892230c; end: 1089229a7;  */

long * FUN_10892230c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x000108924874();
  if (param_1[0x24] != 0) {
    func_0x00010892483c();
    param_2 = param_1;
    func_0x000108924b84();
    func_0x000108924904();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x128) != 0) {
    func_0x00010892483c();
    param_2 = param_1;
    func_0x000108924b9c();
    func_0x000108924904();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x140) == '\x01') {
    func_0x00010892483c();
    param_2 = param_1;
    func_0x000108924d20();
    func_0x000108924938();
    param_4 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x4;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  iVar6 = *(int *)(unaff_x20 + 0x38);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x5;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  iVar6 = *(int *)(unaff_x20 + 0x50);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x6;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  iVar6 = *(int *)(unaff_x20 + 0x68);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x7;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  iVar6 = *(int *)(unaff_x20 + 0x80);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x8;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  iVar6 = *(int *)(unaff_x20 + 0x98);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x9;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  iVar6 = *(int *)(unaff_x20 + 0xb0);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0xa;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x130) != 0) {
    func_0x00010892483c();
    plVar2 = (long *)0x58;
    func_0x000107c280a8();
    func_0x000108924904();
    param_2 = param_1;
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x150) == 0xd) {
    func_0x00010892483c();
    plVar3 = (long *)0x68;
    func_0x000107c280a8();
    func_0x000108924a3c();
    param_4 = plVar3;
  }
  else {
    plVar3 = plVar2;
    plVar2 = param_2;
    if (*(int *)(unaff_x20 + 0x150) == 0xc) {
      plVar2 = *(long **)(unaff_x20 + 0x148);
      param_3 = (ulong)*(uint *)(plVar2 + 4);
      plVar3 = (long *)0xc;
      func_0x000108924a7c();
      param_4 = plVar3;
    }
  }
  iVar6 = *(int *)(unaff_x20 + 200);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)((long)plVar2 + 0x14);
    plVar3 = (long *)0xe;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 0x138) != 0) {
    func_0x00010892483c();
    plVar4 = (long *)0x78;
    func_0x000107c280a8();
    func_0x000108924904();
    plVar2 = plVar3;
    param_4 = plVar4;
  }
  iVar6 = *(int *)(unaff_x20 + 0xe0);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)((long)plVar2 + 0x14);
    plVar4 = (long *)0x10;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0x144) != 0) {
    func_0x00010892483c();
    plVar3 = (long *)0x88;
    func_0x000107c280a8();
    func_0x000108924a3c();
    plVar2 = plVar4;
    param_4 = plVar3;
  }
  iVar6 = *(int *)(unaff_x20 + 0xf8);
  while (iVar6 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)((long)plVar2 + 0x14);
    plVar3 = (long *)0x12;
    func_0x000108924a7c();
    func_0x000108924bac();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x108) + 0x14);
    plVar3 = (long *)0x13;
    func_0x000108924a7c();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x141) == '\x01') {
    func_0x00010892483c();
    param_4 = (long *)0xa0;
    func_0x000107c280a8(0xa0,plVar3);
    func_0x000108924938();
    plVar3 = param_4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x110) + 0x24);
    plVar3 = (long *)0x15;
    func_0x000108924a7c();
    param_4 = plVar3;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x118) + 0x14);
    plVar3 = (long *)0x16;
    func_0x000108924a7c();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x142) == '\x01') {
    func_0x00010892483c();
    param_4 = (long *)0xb8;
    func_0x000107c280a8(0xb8,plVar3);
    func_0x000108924938();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
      _memcpy(param_4,lVar5,param_3 & 0xffffffff);
      return (long *)((long)param_4 + (long)(int)param_3);
    }
    while( true ) {
      iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      uVar1 = iVar6 - iVar7;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  return param_4;
}



/* Entry: 1089229a8; end: 1089229ab;  */

void FUN_1089229a8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924e94();
  func_0x000107c296d4();
  func_0x000107c296d4(unaff_x21 + 6,unaff_x20 + 0x30);
  func_0x000107c296d4(unaff_x21 + 9,unaff_x20 + 0x48);
  func_0x000107c296d4(unaff_x21 + 0xc,unaff_x20 + 0x60);
  func_0x000107c296d4(unaff_x21 + 0xf,unaff_x20 + 0x78);
  func_0x000107c296d4(unaff_x21 + 0x12,unaff_x20 + 0x90);
  func_0x000107c296d4(unaff_x21 + 0x15,unaff_x20 + 0xa8);
  func_0x000107c2a5e4(unaff_x21 + 0x18,unaff_x20 + 0xc0);
  func_0x000107c2a394(unaff_x21 + 0x1b,unaff_x20 + 0xd8);
  puVar4 = unaff_x21 + 0x1e;
  func_0x000107c2a5e8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x21];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x0001089245b0();
        unaff_x21[0x21] = (ulong)puVar4;
      }
      else {
        FUN_10892207c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x22];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x000108924620();
        unaff_x21[0x22] = (ulong)puVar4;
      }
      else {
        func_0x000108922268();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x23];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_108915a40();
        unaff_x21[0x23] = (ulong)puVar4;
      }
      else {
        FUN_108927928();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x120) != 0) {
    unaff_x21[0x24] = *(ulong *)(unaff_x20 + 0x120);
  }
  if (*(ulong *)(unaff_x20 + 0x128) != 0) {
    unaff_x21[0x25] = *(ulong *)(unaff_x20 + 0x128);
  }
  if (*(ulong *)(unaff_x20 + 0x130) != 0) {
    unaff_x21[0x26] = *(ulong *)(unaff_x20 + 0x130);
  }
  if (*(ulong *)(unaff_x20 + 0x138) != 0) {
    unaff_x21[0x27] = *(ulong *)(unaff_x20 + 0x138);
  }
  if (*(char *)(unaff_x20 + 0x140) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  if (*(char *)(unaff_x20 + 0x141) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x141) = 1;
  }
  if (*(char *)(unaff_x20 + 0x142) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x142) = 1;
  }
  if (*(int *)(unaff_x20 + 0x144) != 0) {
    *(int *)((long)unaff_x21 + 0x144) = *(int *)(unaff_x20 + 0x144);
  }
  func_0x0001089249b8();
  iVar2 = *(int *)(unaff_x20 + 0x150);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0x2a];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        puVar4 = unaff_x21;
        func_0x000108922298();
      }
      *(int *)(unaff_x21 + 0x2a) = iVar2;
    }
    if (iVar2 == 0xd) {
      *(undefined4 *)(unaff_x21 + 0x29) = *(undefined4 *)(unaff_x20 + 0x148);
    }
    else if (iVar2 == 0xc) {
      if (iVar3 == 0xc) {
        puVar4 = (ulong *)unaff_x21[0x29];
        FUN_108921bec();
      }
      else {
        func_0x000108924678();
        unaff_x21[0x29] = (ulong)unaff_x22;
        puVar4 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089248e8();
    if ((*puVar4 & 1) == 0) {
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



/* Entry: 1089229ac; end: 1089229db;  */

void FUN_1089229ac(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_1089193d8();
  func_0x000108924aec();
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924e94();
  func_0x000107c296d4();
  func_0x000107c296d4(unaff_x21 + 6,unaff_x20 + 0x30);
  func_0x000107c296d4(unaff_x21 + 9,unaff_x20 + 0x48);
  func_0x000107c296d4(unaff_x21 + 0xc,unaff_x20 + 0x60);
  func_0x000107c296d4(unaff_x21 + 0xf,unaff_x20 + 0x78);
  func_0x000107c296d4(unaff_x21 + 0x12,unaff_x20 + 0x90);
  func_0x000107c296d4(unaff_x21 + 0x15,unaff_x20 + 0xa8);
  func_0x000107c2a5e4(unaff_x21 + 0x18,unaff_x20 + 0xc0);
  func_0x000107c2a394(unaff_x21 + 0x1b,unaff_x20 + 0xd8);
  puVar4 = unaff_x21 + 0x1e;
  func_0x000107c2a5e8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x21];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x0001089245b0();
        unaff_x21[0x21] = (ulong)puVar4;
      }
      else {
        FUN_10892207c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x22];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x000108924620();
        unaff_x21[0x22] = (ulong)puVar4;
      }
      else {
        func_0x000108922268();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x23];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_108915a40();
        unaff_x21[0x23] = (ulong)puVar4;
      }
      else {
        FUN_108927928();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x120) != 0) {
    unaff_x21[0x24] = *(ulong *)(unaff_x20 + 0x120);
  }
  if (*(ulong *)(unaff_x20 + 0x128) != 0) {
    unaff_x21[0x25] = *(ulong *)(unaff_x20 + 0x128);
  }
  if (*(ulong *)(unaff_x20 + 0x130) != 0) {
    unaff_x21[0x26] = *(ulong *)(unaff_x20 + 0x130);
  }
  if (*(ulong *)(unaff_x20 + 0x138) != 0) {
    unaff_x21[0x27] = *(ulong *)(unaff_x20 + 0x138);
  }
  if (*(char *)(unaff_x20 + 0x140) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  if (*(char *)(unaff_x20 + 0x141) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x141) = 1;
  }
  if (*(char *)(unaff_x20 + 0x142) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x142) = 1;
  }
  if (*(int *)(unaff_x20 + 0x144) != 0) {
    *(int *)((long)unaff_x21 + 0x144) = *(int *)(unaff_x20 + 0x144);
  }
  func_0x0001089249b8();
  iVar2 = *(int *)(unaff_x20 + 0x150);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0x2a];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        puVar4 = unaff_x21;
        func_0x000108922298();
      }
      *(int *)(unaff_x21 + 0x2a) = iVar2;
    }
    if (iVar2 == 0xd) {
      *(undefined4 *)(unaff_x21 + 0x29) = *(undefined4 *)(unaff_x20 + 0x148);
    }
    else if (iVar2 == 0xc) {
      if (iVar3 == 0xc) {
        puVar4 = (ulong *)unaff_x21[0x29];
        FUN_108921bec();
      }
      else {
        func_0x000108924678();
        unaff_x21[0x29] = (ulong)unaff_x22;
        puVar4 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089248e8();
    if ((*puVar4 & 1) == 0) {
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



/* Entry: 1089229dc; end: 1089229ff;  */

undefined1  [16] FUN_1089229dc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x40;
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



/* Entry: 108922a00; end: 108922a2b;  */

undefined8 FUN_108922a00(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108922a2c(param_1);
  return param_1;
}



/* Entry: 108922a2c; end: 108922a5b;  */

long * FUN_108922a2c(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 108922a5c; end: 108922a5f;  */

undefined8 FUN_108922a5c(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108922a2c(param_1);
  return param_1;
}



/* Entry: 108922a60; end: 108922a73;  */

void FUN_108922a60(void)

{
  FUN_108922a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108922a74; end: 108922a7f;  */

undefined ** FUN_108922a74(void)

{
  return &PTR_DAT_110a97620;
}



/* Entry: 108922a80; end: 108922abf;  */

void FUN_108922a80(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108924d80();
  func_0x000107c282c0();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_1088bf358(unaff_x19[6]);
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



/* Entry: 108922ac0; end: 108922b57;  */

long * FUN_108922ac0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  ulong *extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  func_0x000108924780();
  if ((extraout_x8 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    func_0x0001089248b4();
    param_4 = param_1;
  }
  for (uVar4 = (ulong)(*(uint *)(unaff_x20 + 0x20) &
                      ((int)*(uint *)(unaff_x20 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
      uVar4 = uVar4 - 1) {
    func_0x000108924ea0();
    param_3 = *extraout_x8_00;
    param_4 = unaff_x19;
    FUN_108922b58();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108924af8();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8_01 + 8);
    param_3 = *(ulong *)(extraout_x8_01 + 0x10);
  }
  else {
    lVar2 = extraout_x8_01 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    uVar1 = iVar3 - iVar5;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar3 < iVar5) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 108922b58; end: 108922c47;  */

long FUN_108922b58(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar4;
  uint extraout_w10_00;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  lVar5 = (long)*(char *)((long)param_3 + 0x17);
  if ((-1 < lVar5) || (lVar5 = param_3[1], lVar5 < 0x80)) {
    lVar8 = *param_1;
    uVar4 = (int)param_2 << 3;
    uVar2 = uVar4;
    func_0x000107c280a4();
    if (lVar5 <= lVar8 + ~((long)param_4 + (long)(int)uVar2) + 0x10) {
      lVar8 = (long)param_4 + 2;
      for (uVar4 = uVar4 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
        *(byte *)(lVar8 + -2) = (byte)uVar4 | 0x80;
        lVar8 = lVar8 + 1;
      }
      *(byte *)(lVar8 + -2) = (byte)uVar4;
      *(char *)(lVar8 + -1) = (char)lVar5;
      plVar1 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar1 = param_3;
      }
      _memcpy(lVar8,plVar1,lVar5);
      return lVar8 + lVar5;
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar4 = extraout_w10;
  while (0x7f < uVar4) {
    func_0x00010b4d576c();
    uVar4 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar3 = extraout_x8;
  while (0x7f < (uint)uVar3) {
    func_0x00010b4d5758();
    uVar3 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar7 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_4 + (long)iVar7;
      param_4 = param_1;
      func_0x000107c303e4(param_1,lVar5);
    }
    func_0x00010b4d5738();
    return (long)param_4 + (long)iVar6;
  }
  _memcpy(param_4);
  return (long)param_4 + (long)(int)param_3;
}



/* Entry: 108922c48; end: 108922d33;  */

void FUN_108922c48(long param_1)

{
  undefined8 *extraout_x8;
  ulong uVar1;
  ulong uVar2;
  
  for (uVar2 = (ulong)(*(uint *)(param_1 + 0x20) &
                      ((int)*(uint *)(param_1 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    func_0x000108924ea0();
    func_0x000107c28098(*extraout_x8);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(param_1 + 0x30));
    func_0x000108924b38();
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar1 = uVar2 & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar1 + 0x1f);
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(uVar1 + 0x10);
    }
  }
  func_0x000108924bf0(uVar2);
  return;
}



/* Entry: 108922d34; end: 108922f43;  */

void FUN_108922d34(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x0001086da44c();
  }
  else {
    func_0x0001086d9d98();
  }
  func_0x000107c32688(&UNK_110a94dc0);
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 108922f44; end: 108922f6f;  */

undefined8 * FUN_108922f44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10891a780(param_1,param_3);
  return param_1;
}



/* Entry: 108922f70; end: 108922f9f;  */

long * FUN_108922f70(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 108922fa0; end: 1089232b7;  */

void FUN_108922fa0(long param_1)

{
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x000108924ac0(param_1);
  }
  func_0x000108924f20(&PTR_DAT_110a94f60);
  return;
}



/* Entry: 1089232b8; end: 1089232cb;  */

void FUN_1089232b8(ulong *param_1)

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



/* Entry: 1089232cc; end: 108923397;  */

void FUN_1089232cc(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924b74();
  }
  else {
    func_0x000108924a1c();
  }
  func_0x000108924edc();
  func_0x000108924e7c(&PTR_FUN_110a95500);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  lVar2 = unaff_x19 + 0x10;
  func_0x000107c2809c();
  *(long *)(unaff_x21 + 0x10) = lVar2;
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  uVar1 = *(undefined1 *)(unaff_x19 + 0x1c);
  *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x21 + 0x1c) = uVar1;
  return;
}



/* Entry: 108923398; end: 1089233ef;  */

undefined8 * FUN_108923398(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108924d50();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108924ab8();
  }
  else {
    func_0x000108924a48();
  }
  *param_1 = &PTR_FUN_110a94dd0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_10891a070();
  return param_1;
}



/* Entry: 1089233f0; end: 108923687;  */

void FUN_1089233f0(long param_1)

{
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x21;
  
  func_0x000108924b20();
  if (param_1 == 0) {
    func_0x000108924bc4();
  }
  else {
    func_0x000108924a60();
  }
  func_0x000108924c20();
  func_0x000108924bfc(&PTR_FUN_110a95960);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924c88();
  func_0x000107c2a448(unaff_x21 + 0x18);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_108923398();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x19;
  return;
}



/* Entry: 108923688; end: 1089236b7;  */

undefined8 * FUN_108923688(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c34a38();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108924ba4();
  }
  else {
    func_0x000108924ee8();
  }
  func_0x000107c34a48();
  *param_1 = &PTR_FUN_110a95410;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_10891c0a0();
  return param_1;
}



/* Entry: 1089236b8; end: 10892370b;  */

long FUN_1089236b8(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95370);
  func_0x00010891c0c0();
  return param_1;
}



/* Entry: 10892370c; end: 10892373b;  */

long FUN_10892370c(long param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924bc4();
  }
  else {
    func_0x000108924b68();
  }
  func_0x000107c34a48();
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
  *(long *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924e0c();
    FUN_108924448();
  }
  *(long *)(unaff_x19 + 0x20) = param_1;
  if ((unaff_w22 >> 2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x20;
    FUN_108904f3c(unaff_x20,*(undefined8 *)(unaff_x21 + 0x28));
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  if ((unaff_w22 >> 3 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a558(unaff_x20,*(undefined8 *)(unaff_x21 + 0x30));
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 10892373c; end: 10892378f;  */

long FUN_10892373c(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a94ec0);
  FUN_10891c1ac();
  return param_1;
}



/* Entry: 108923790; end: 1089237bf;  */

long FUN_108923790(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ba4();
  }
  else {
    func_0x000108924ee8();
  }
  func_0x000107c34a48();
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
  *(long *)(unaff_x19 + 0x18) = param_1;
  return unaff_x19;
}



/* Entry: 1089237c0; end: 10892380f;  */

long FUN_1089237c0(long param_1)

{
  func_0x000108924d50();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x000108924a48();
  }
  func_0x000108924cdc(&PTR_DAT_110a94f60);
  FUN_10891c218();
  return param_1;
}



/* Entry: 108923810; end: 108923863;  */

long FUN_108923810(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95190);
  func_0x00010891c228();
  return param_1;
}



/* Entry: 108923864; end: 1089238b7;  */

long FUN_108923864(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95050);
  func_0x00010891c238();
  return param_1;
}



/* Entry: 1089238b8; end: 10892390b;  */

long FUN_1089238b8(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a950f0);
  func_0x00010891c248();
  return param_1;
}



/* Entry: 10892390c; end: 10892393b;  */

undefined8 * FUN_10892390c(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c34a38();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000107c34a48();
  *param_1 = &PTR_DAT_110a95230;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010891c258();
  return param_1;
}



/* Entry: 10892393c; end: 10892399b;  */

void FUN_10892393c(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000108924b20();
  if (param_1 == 0) {
    func_0x000108924ba4();
  }
  else {
    func_0x0001089249ec();
  }
  func_0x000108924c20();
  func_0x000108924bfc(&PTR_DAT_110a95eb0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924c88();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108924e30();
    func_0x000107c2a558();
  }
  func_0x000108924e24();
  return;
}



/* Entry: 10892399c; end: 1089239cb;  */

long FUN_10892399c(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924b74();
  }
  else {
    func_0x000108924a1c();
  }
  func_0x000107c34a48();
  func_0x000107c34a2c();
  func_0x000107c34a44(&PTR_DAT_110a95b40);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c34a60();
    func_0x00010892449c();
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  return unaff_x19;
}



/* Entry: 1089239cc; end: 108923a1f;  */

long FUN_1089239cc(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95320);
  FUN_10891c338();
  return param_1;
}



/* Entry: 108923a20; end: 108923b0f;  */

long FUN_108923a20(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000107c34a58();
  }
  else {
    func_0x000108924ef4();
  }
  func_0x000107c34a48();
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a95cd0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000107c2a398(unaff_x19 + 0x10,unaff_x20,unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return unaff_x19;
}



/* Entry: 108923b10; end: 108923b5f;  */

long FUN_108923b10(long param_1)

{
  func_0x000108924d50();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x000108924a48();
  }
  func_0x000108924cdc(&PTR_DAT_110a952d0);
  FUN_10891c508();
  return param_1;
}



/* Entry: 108923b60; end: 108923bb3;  */

long FUN_108923b60(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a94fb0);
  func_0x00010891c518();
  return param_1;
}



/* Entry: 108923bb4; end: 108923c07;  */

long FUN_108923bb4(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95730);
  func_0x00010891c528();
  return param_1;
}



/* Entry: 108923c08; end: 108923c57;  */

long FUN_108923c08(long param_1)

{
  func_0x000108924d50();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x000108924a48();
  }
  func_0x000108924cdc(&PTR_DAT_110a95690);
  func_0x00010891c538();
  return param_1;
}



/* Entry: 108923c58; end: 108923cab;  */

long FUN_108923c58(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_FUN_110a95460);
  FUN_10891d40c();
  return param_1;
}



/* Entry: 108923cac; end: 108923cff;  */

long FUN_108923cac(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a953c0);
  func_0x00010891d41c();
  return param_1;
}



/* Entry: 108923d00; end: 108923d53;  */

long FUN_108923d00(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a94f10);
  FUN_10891d4ac();
  return param_1;
}



/* Entry: 108923d54; end: 108923da7;  */

long FUN_108923d54(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95640);
  func_0x00010891d4bc();
  return param_1;
}



/* Entry: 108923da8; end: 108923df7;  */

long FUN_108923da8(long param_1)

{
  func_0x000108924d50();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x000108924a48();
  }
  func_0x000108924cdc(&PTR_DAT_110a951e0);
  func_0x00010891d4cc();
  return param_1;
}



/* Entry: 108923df8; end: 108923e4b;  */

long FUN_108923df8(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a950a0);
  func_0x00010891d4dc();
  return param_1;
}



/* Entry: 108923e4c; end: 108923e9f;  */

long FUN_108923e4c(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95140);
  func_0x00010891d4ec();
  return param_1;
}



/* Entry: 108923ea0; end: 108923ef7;  */

undefined8 * FUN_108923ea0(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108924d50();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108924ab8();
  }
  else {
    func_0x000108924a48();
  }
  *param_1 = &PTR_DAT_110a95280;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00010891d4fc();
  return param_1;
}



/* Entry: 108923ef8; end: 108924103;  */

void FUN_108923ef8(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000108924b20();
  if (param_1 == 0) {
    func_0x000108924ba4();
  }
  else {
    func_0x0001089249ec();
  }
  func_0x000108924c20();
  func_0x000108924bfc(&PTR_DAT_110a95f00);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924c88();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108924e30();
    func_0x000107c2a558();
  }
  func_0x000108924e24();
  return;
}



/* Entry: 108924104; end: 10892415f;  */

undefined8 * FUN_108924104(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108924d50();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108924ab8();
  }
  else {
    func_0x000108924a48();
  }
  *param_1 = &PTR_DAT_110a94e70;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_10891d6fc();
  return param_1;
}



/* Entry: 108924160; end: 10892418f;  */

long FUN_108924160(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924b74();
  }
  else {
    func_0x000108924a1c();
  }
  func_0x000107c34a48();
  func_0x000107c34a2c();
  func_0x000107c34a44(&PTR_DAT_110a95c80);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c34a60();
    FUN_108904da8();
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  return unaff_x19;
}



/* Entry: 108924190; end: 1089241e3;  */

long FUN_108924190(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a955f0);
  FUN_10891d784();
  return param_1;
}



/* Entry: 1089241e4; end: 108924297;  */

void FUN_1089241e4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924b20();
  if (param_1 == 0) {
    func_0x000108924bc4();
  }
  else {
    func_0x000108924a60();
  }
  func_0x000108924c20();
  func_0x000108924bfc(&PTR_DAT_110a95ff0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924c88();
  lVar2 = unaff_x20 + 0x18;
  func_0x000107c2809c();
  *(long *)(unaff_x21 + 0x18) = lVar2;
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x19;
    func_0x000107c2a558();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x19;
    FUN_108915788();
  }
  *(undefined8 *)(unaff_x21 + 0x28) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_108915a40();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x19;
  return;
}



/* Entry: 108924298; end: 1089242eb;  */

long FUN_108924298(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a955a0);
  FUN_10891d894();
  return param_1;
}



/* Entry: 1089242ec; end: 10892433f;  */

long FUN_1089242ec(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95000);
  func_0x00010891d8a4();
  return param_1;
}



/* Entry: 108924340; end: 108924393;  */

long FUN_108924340(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a95780);
  func_0x00010891d8b4();
  return param_1;
}



/* Entry: 108924394; end: 1089243f3;  */

void FUN_108924394(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000108924b20();
  if (param_1 == 0) {
    func_0x000108924ba4();
  }
  else {
    func_0x0001089249ec();
  }
  func_0x000108924c20();
  func_0x000108924bfc(&PTR_DAT_110a95820);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924c88();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108924e30();
    FUN_108923398();
  }
  func_0x000108924e24();
  return;
}



/* Entry: 1089243f4; end: 108924447;  */

long FUN_1089243f4(long param_1)

{
  func_0x000107c34a38();
  if (param_1 == 0) {
    func_0x000108924ab8();
  }
  else {
    func_0x0001089248f8();
  }
  func_0x000108924b5c(&PTR_DAT_110a956e0);
  FUN_10891d920();
  return param_1;
}



/* Entry: 108924448; end: 108924707;  */

void FUN_108924448(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x000108924b20();
  if (param_1 == 0) {
    func_0x000107c34a58();
  }
  else {
    func_0x000108924cc4();
  }
  func_0x000108924c20();
  func_0x000108924bfc(&PTR_FUN_110a95dc0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924e6c();
  func_0x000107c29a00();
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 108924708; end: 108924fa7;  */

void FUN_108924708(void)

{
  return;
}



/* Entry: 108924fa8; end: 108924fd3;  */

undefined8 FUN_108924fa8(undefined8 param_1)

{
  func_0x0001089267a0();
  FUN_108924fd4(param_1);
  return param_1;
}



/* Entry: 108924fd4; end: 108924fef;  */

void FUN_108924fd4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108924ff0; end: 108924ff3;  */

undefined8 FUN_108924ff0(undefined8 param_1)

{
  func_0x0001089267a0();
  FUN_108924fd4(param_1);
  return param_1;
}



/* Entry: 108924ff4; end: 108925007;  */

void FUN_108924ff4(void)

{
  FUN_108924fa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108925008; end: 108925013;  */

undefined ** FUN_108925008(void)

{
  return &PTR_DAT_110a97f80;
}



/* Entry: 108925014; end: 1089250f7;  */

void FUN_108925014(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108926920();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108926874();
  }
  func_0x0001089268ec();
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



/* Entry: 1089250f8; end: 10892519f;  */

void FUN_1089250f8(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108926788();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bf398();
      puVar1 = puVar2;
    }
  }
  func_0x00010892690c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108926770();
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



/* Entry: 1089251a0; end: 1089251cb;  */

long FUN_1089251a0(long param_1)

{
  func_0x0001089267a0();
  FUN_108926488(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089251cc; end: 1089251cf;  */

long FUN_1089251cc(long param_1)

{
  func_0x0001089267a0();
  FUN_108926488(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089251d0; end: 1089251e3;  */

void FUN_1089251d0(void)

{
  FUN_1089251a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089251e4; end: 1089251ef;  */

undefined ** FUN_1089251e4(void)

{
  return &PTR_DAT_110a97fd8;
}



/* Entry: 1089251f0; end: 10892521f;  */

void FUN_1089251f0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010892692c();
  func_0x0001089266fc();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 108925220; end: 1089252ab;  */

long * FUN_108925220(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x000108926730();
  lVar4 = param_1[3];
  puVar1 = (ulong *)(param_1 + 2);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x14);
    func_0x00010892671c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089267fc();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar3 = iVar6 - iVar7;
        param_3 = (ulong)uVar3;
        if (uVar3 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1089252ac; end: 108925307;  */

long FUN_1089252ac(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001089267d0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_108925308();
    unaff_x20 = lVar1 + unaff_x20;
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



/* Entry: 108925308; end: 108925333;  */

long FUN_108925308(long param_1)

{
  FUN_108925750();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 108925334; end: 108925377;  */

void FUN_108925334(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010892692c();
  FUN_108925378();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 108925378; end: 108925387;  */

void FUN_108925378(long *param_1,long param_2)

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



/* Entry: 108925388; end: 1089253eb;  */

long FUN_108925388(long param_1)

{
  func_0x0001089267a0();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088b77e8();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 1089253ec; end: 1089253ef;  */

long FUN_1089253ec(long param_1)

{
  func_0x0001089267a0();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088b77e8();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 1089253f0; end: 108925403;  */

void FUN_1089253f0(void)

{
  FUN_108925388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108925404; end: 10892540f;  */

undefined ** FUN_108925404(void)

{
  return &PTR_DAT_110a98030;
}



/* Entry: 108925410; end: 10892548b;  */

void FUN_108925410(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c282c0(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088b7880(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10892548c; end: 10892574f;  */

long * FUN_10892548c(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long extraout_x8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  
  uVar3 = *(uint *)(param_1 + 2);
  plVar4 = param_1;
  plVar7 = param_3;
  if ((uVar3 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[9] + 0x18);
    plVar4 = (long *)0x1;
    func_0x000108926780();
    param_2 = plVar4;
  }
  puVar11 = (undefined8 *)(param_1[6] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] != 0) {
      puVar11 = (undefined8 *)*puVar11;
      goto LAB_1089254fc;
    }
  }
  else if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_1089254fc:
    func_0x000108926884(puVar11);
    plVar4 = param_3;
    func_0x0001089267b0(param_3,2);
    param_2 = plVar4;
  }
  puVar11 = (undefined8 *)(param_1[7] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] != 0) {
      puVar11 = (undefined8 *)*puVar11;
      goto LAB_108925540;
    }
  }
  else if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_108925540:
    func_0x000108926884(puVar11);
    plVar4 = param_3;
    func_0x0001089267b0(param_3,3);
    param_2 = plVar4;
  }
  puVar11 = (undefined8 *)(param_1[8] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] == 0) goto LAB_1089255a0;
    puVar11 = (undefined8 *)*puVar11;
  }
  else if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_1089255a0;
  func_0x000108926884(puVar11);
  plVar4 = param_3;
  func_0x0001089267b0(param_3,5);
  param_2 = plVar4;
LAB_1089255a0:
  plVar9 = plVar4;
  if (param_1[0xb] != 0) {
    func_0x0001089268d4();
    plVar9 = (long *)param_1[0xb];
    uVar5 = 0x30;
    func_0x000107c280a8(0x30,plVar4);
    func_0x000107c280ac(plVar9,uVar5);
    param_2 = plVar9;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[10] + 0x20);
    plVar9 = (long *)0x7;
    func_0x000108926780();
    param_2 = plVar9;
  }
  if ((char)param_1[0xc] == '\x01') {
    func_0x0001089268d4();
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0xc);
    uVar5 = 0x40;
    func_0x000107c280a8(0x40,plVar9);
    func_0x000107c280a8(param_2,uVar5);
  }
  lVar14 = 8;
  for (uVar13 = (ulong)(*(uint *)(param_1 + 4) & ((int)*(uint *)(param_1 + 4) >> 0x1f ^ 0xffffffffU)
                       ); uVar13 != 0; uVar13 = uVar13 - 1) {
    uVar8 = param_1[3];
    puVar2 = (ulong *)(param_1 + 3);
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)(uVar8 + lVar14 + -1);
    }
    plVar7 = (long *)*puVar2;
    lVar6 = (long)*(char *)((long)plVar7 + 0x17);
    plVar4 = plVar7;
    if (lVar6 < 0) {
      lVar6 = plVar7[1];
      plVar4 = (long *)*plVar7;
    }
    func_0x000107c303d4(plVar4,lVar6,1,&UNK_10f4ec538);
    plVar4 = (long *)(long)*(char *)((long)plVar7 + 0x17);
    if ((((long)plVar4 < 0) && (plVar4 = (long *)plVar7[1], 0x7f < (long)plVar4)) ||
       ((*param_3 - (long)param_2) + 0xe < (long)plVar4)) {
      plVar4 = param_3;
      func_0x00010b4d5120(param_3,9,plVar7,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x4a;
      *(char *)((long)param_2 + 1) = (char)plVar4;
      plVar9 = plVar7;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        plVar9 = (long *)*plVar7;
      }
      plVar7 = plVar4;
      _memcpy((undefined1 *)((long)param_2 + 2),plVar9);
      plVar4 = (long *)((undefined1 *)((long)param_2 + 2) + (long)plVar4);
    }
    lVar14 = lVar14 + 8;
    param_2 = plVar4;
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0001089267fc();
  if ((long)plVar7 < 0) {
    lVar14 = *(long *)(extraout_x8 + 8);
    plVar7 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar14 = extraout_x8 + 8;
  }
  if ((long)(int)plVar7 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar14,(ulong)plVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar7);
  }
  while( true ) {
    iVar12 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar10 = (int)plVar7;
    plVar7 = (long *)(ulong)(uint)(iVar10 - iVar12);
    if (iVar10 - iVar12 == 0 || iVar10 < iVar12) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar12);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar10);
}



/* Entry: 108925750; end: 1089259d7;  */

void FUN_108925750(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar6 = (ulong)uVar5;
  lVar8 = 8;
  for (uVar7 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar8 + -1);
    }
    uVar4 = *puVar1;
    func_0x000107c282a0();
    uVar6 = uVar4 + uVar6;
    uVar5 = (uint)uVar6;
    lVar8 = lVar8 + 8;
  }
  uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar6 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    func_0x000107c282a0();
    func_0x000108926808();
  }
  uVar6 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar6 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    func_0x000107c282a0();
    func_0x000108926808();
  }
  uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar6 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    func_0x000107c282a0();
    func_0x000108926808();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x48));
      func_0x000108926808();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_1088ea5b8(*(undefined8 *)(param_1 + 0x50));
      func_0x000108926808();
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar5 = ((int)LZCOUNT(*(long *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + uVar5;
  }
  iVar3 = uVar5 + (uint)*(byte *)(param_1 + 0x60) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar8 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar8 < 0) {
      lVar8 = *(long *)(uVar6 + 0x10);
    }
    iVar3 = (int)lVar8 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 1089259d8; end: 108925a03;  */

undefined8 FUN_1089259d8(undefined8 param_1)

{
  func_0x0001089267a0();
  FUN_108925a04(param_1);
  return param_1;
}



/* Entry: 108925a04; end: 108925a3b;  */

void FUN_108925a04(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108925a3c; end: 108925a3f;  */

undefined8 FUN_108925a3c(undefined8 param_1)

{
  func_0x0001089267a0();
  FUN_108925a04(param_1);
  return param_1;
}



/* Entry: 108925a40; end: 108925a53;  */

void FUN_108925a40(void)

{
  FUN_1089259d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108925a54; end: 108925a5f;  */

undefined ** FUN_108925a54(void)

{
  return &PTR_DAT_110a98070;
}



/* Entry: 108925a60; end: 108925aab;  */

void FUN_108925a60(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108926874();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(param_1[4]);
    }
  }
  func_0x0001089268ec();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 108925aac; end: 108925ba3;  */

long * FUN_108925aac(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108926730();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x00010892671c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)0x2;
    func_0x000108926780();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089267fc();
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



/* Entry: 108925ba4; end: 108925c37;  */

void FUN_108925ba4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108926788();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x0001089267f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0001089267f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x0001089267bc();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000108926770();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108925c38; end: 108925c63;  */

undefined8 FUN_108925c38(undefined8 param_1)

{
  func_0x0001089267a0();
  FUN_108925c64(param_1);
  return param_1;
}


