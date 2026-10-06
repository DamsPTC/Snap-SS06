/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0067a6b8; end: 0067a733;  */

long * FUN_0067a6b8(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00532f74(param_1 + 0x48);
  func_0x00532f74(param_1 + 0x50);
  func_0x00532f74(param_1 + 0x58);
  func_0x00680890();
  func_0x00532f74(param_1 + 0x68);
  func_0x00532f74(param_1 + 0x70);
  func_0x00532f74(param_1 + 0x78);
  func_0x00532f74(param_1 + 0x80);
  func_0x00532f74(param_1 + 0x88);
  func_0x00532f74(param_1 + 0x90);
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  func_0x006801b8(param_1 + 0x10);
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return unaff_x19;
}



/* Entry: 0067a734; end: 0067a737;  */

undefined8 FUN_0067a734(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067a6b8(param_1);
  return param_1;
}



/* Entry: 0067a738; end: 0067a74b;  */

void FUN_0067a738(void)

{
  FUN_0067a68c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067a74c; end: 0067a757;  */

void FUN_0067a74c(void)

{
  Hint_Prefetch(0xb278b0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b278b0,0,0,0);
  return;
}



/* Entry: 0067a758; end: 0067a79f;  */

void FUN_0067a758(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25d18);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x006804d8(), iVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x29) >> 2 & 1) != 0)) {
    func_0x0067d498();
  }
  return;
}



/* Entry: 0067a7a0; end: 0067ad4f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067a7a0(ulong *param_1,undefined8 param_2,uint param_3)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 0xff) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x48));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x48);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x50));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x50);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x58));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x58);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x60);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 4 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x68);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 5 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x70));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x70);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 6 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x78));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x78);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 7 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x80));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x80);
      func_0x006802a8();
    }
  }
  if ((unaff_w23 & 0xff00) != 0) {
    if ((unaff_w23 >> 8 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x88));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x88);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 9 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x90));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x90);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac(0,*(undefined8 *)(unaff_x20 + 0x98));
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 0xb & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa0) = *(undefined1 *)(unaff_x20 + 0xa0);
    }
    if ((unaff_w23 >> 0xc & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa1) = *(undefined1 *)(unaff_x20 + 0xa1);
    }
    if ((unaff_w23 >> 0xd & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa2) = *(undefined1 *)(unaff_x20 + 0xa2);
    }
    if ((unaff_w23 >> 0xe & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa3) = *(undefined1 *)(unaff_x20 + 0xa3);
    }
    if ((unaff_w23 >> 0xf & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa4) = *(undefined1 *)(unaff_x20 + 0xa4);
    }
  }
  if ((unaff_w23 & 0x1f0000) != 0) {
    if ((unaff_w23 >> 0x10 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa5) = *(undefined1 *)(unaff_x20 + 0xa5);
    }
    if ((unaff_w23 >> 0x11 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa6) = *(undefined1 *)(unaff_x20 + 0xa6);
    }
    if ((unaff_w23 >> 0x12 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa7) = *(undefined1 *)(unaff_x20 + 0xa7);
    }
    if ((unaff_w23 >> 0x13 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
    }
    if ((unaff_w23 >> 0x14 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xac) = *(undefined1 *)(unaff_x20 + 0xac);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25d18;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x006a5744();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067ad50; end: 0067aefb;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_0067ad50(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  func_0x00680154();
  func_0x0067fe18();
  while (unaff_x22 != 0) {
    func_0x0068045c();
    func_0x0068040c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x00680350();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x00680350();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x00680350();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00680430();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x00680430();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x70));
      func_0x00680430();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x78));
      func_0x00680430();
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x80));
      func_0x00680430();
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x88));
      func_0x00680430();
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(unaff_x19 + 0x90));
      func_0x00680430();
    }
    if ((uVar1 >> 10 & 1) != 0) {
      param_1 = *(long *)(unaff_x19 + 0x98);
      func_0x00678ce4();
      func_0x00680430();
    }
    func_0x006809a4(unaff_x20 + ((ulong)(uVar1 >> 10) & 2));
    func_0x006809a4();
    func_0x006809a4();
    unaff_x20 = extraout_x8;
    if ((uVar1 & 0x8000) != 0) {
      unaff_x20 = extraout_x9;
    }
  }
  if ((uVar1 & 0x1f0000) != 0) {
    if ((uVar1 & 0x10000) != 0) {
      unaff_x20 = unaff_x20 + 3;
    }
    func_0x006809a4(unaff_x20);
  }
  func_0x006801c4();
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



/* Entry: 0067aefc; end: 0067af2b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067aefc(ulong *param_1,ulong *param_2,uint param_3)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  FUN_006773f4();
  func_0x006803f4();
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 0xff) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x48));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x48);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x50));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x50);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x58));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x58);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x60);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 4 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x68);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 5 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x70));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x70);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 6 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x78));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x78);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 7 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x80));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x80);
      func_0x006802a8();
    }
  }
  if ((unaff_w23 & 0xff00) != 0) {
    if ((unaff_w23 >> 8 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x88));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x88);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 9 & 1) != 0) {
      func_0x006804e8(*(undefined8 *)(unaff_x20 + 0x90));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x21 + 0x90);
      func_0x006802a8();
    }
    if ((unaff_w23 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac(0,*(undefined8 *)(unaff_x20 + 0x98));
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 0xb & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa0) = *(undefined1 *)(unaff_x20 + 0xa0);
    }
    if ((unaff_w23 >> 0xc & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa1) = *(undefined1 *)(unaff_x20 + 0xa1);
    }
    if ((unaff_w23 >> 0xd & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa2) = *(undefined1 *)(unaff_x20 + 0xa2);
    }
    if ((unaff_w23 >> 0xe & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa3) = *(undefined1 *)(unaff_x20 + 0xa3);
    }
    if ((unaff_w23 >> 0xf & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa4) = *(undefined1 *)(unaff_x20 + 0xa4);
    }
  }
  if ((unaff_w23 & 0x1f0000) != 0) {
    if ((unaff_w23 >> 0x10 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa5) = *(undefined1 *)(unaff_x20 + 0xa5);
    }
    if ((unaff_w23 >> 0x11 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa6) = *(undefined1 *)(unaff_x20 + 0xa6);
    }
    if ((unaff_w23 >> 0x12 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa7) = *(undefined1 *)(unaff_x20 + 0xa7);
    }
    if ((unaff_w23 >> 0x13 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
    }
    if ((unaff_w23 >> 0x14 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xac) = *(undefined1 *)(unaff_x20 + 0xac);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25d18;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x006a5744();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067af2c; end: 0067af9b;  */

void FUN_0067af2c(undefined8 param_1)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e4a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x006802f8();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x50);
  *(undefined1 *)(unaff_x19 + 0x54) = *(undefined1 *)(unaff_x20 + 0x54);
  *(undefined4 *)(unaff_x19 + 0x50) = uVar1;
  return;
}



/* Entry: 0067af9c; end: 0067afc7;  */

undefined8 FUN_0067af9c(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067afc8(param_1);
  return param_1;
}



/* Entry: 0067afc8; end: 0067aff3;  */

long * FUN_0067afc8(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00680750();
  if (param_1 != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  func_0x006801b8(unaff_x19 + 2);
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return unaff_x19;
}



/* Entry: 0067aff4; end: 0067aff7;  */

undefined8 FUN_0067aff4(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067afc8(param_1);
  return param_1;
}



/* Entry: 0067aff8; end: 0067b00b;  */

void FUN_0067aff8(void)

{
  FUN_0067af9c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067b00c; end: 0067b017;  */

void FUN_0067b00c(void)

{
  Hint_Prefetch(0xb27d40,0,0,0);
  Hint_Prefetch(PTR_DAT_00b27d40,0,0,0);
  return;
}



/* Entry: 0067b018; end: 0067b05b;  */

void FUN_0067b018(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25cc0);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x006804d8(), iVar1 != 0)) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00680578();
  }
  return;
}



/* Entry: 0067b05c; end: 0067b23f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067b05c(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 0x3f) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006807c4();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x51) = *(undefined1 *)(unaff_x20 + 0x51);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x52) = *(undefined1 *)(unaff_x20 + 0x52);
    }
    if ((unaff_w23 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x53) = *(undefined1 *)(unaff_x20 + 0x53);
    }
    if ((unaff_w23 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x54) = *(undefined1 *)(unaff_x20 + 0x54);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25cc0;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x006a5744();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067b240; end: 0067b2b3;  */

long FUN_0067b240(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x00680154();
  func_0x0067fe18();
  while (unaff_x22 != 0) {
    func_0x0068045c();
    func_0x0068040c();
  }
  if ((*(uint *)(unaff_x19 + 0x28) & 0x3f) != 0) {
    if ((*(uint *)(unaff_x19 + 0x28) & 1) != 0) {
      func_0x00680580();
      func_0x00680350();
    }
    func_0x006807d0();
  }
  func_0x006801c4();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_006a480c();
    }
    else {
      param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_006a5cc8();
    param_1 = param_1 + CONCAT44(uVar2,uVar1);
    *param_3 = (int)param_1;
    return param_1;
  }
  *param_3 = uVar1;
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 0067b2b4; end: 0067b2e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067b2b4(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x0067821c();
  func_0x006803f4();
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 0x3f) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006807c4();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x51) = *(undefined1 *)(unaff_x20 + 0x51);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x52) = *(undefined1 *)(unaff_x20 + 0x52);
    }
    if ((unaff_w23 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x53) = *(undefined1 *)(unaff_x20 + 0x53);
    }
    if ((unaff_w23 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x54) = *(undefined1 *)(unaff_x20 + 0x54);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25cc0;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x006a5744();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067b2e4; end: 0067b333;  */

void FUN_0067b2e4(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e0e8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar1 = unaff_x20 + 0x18;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  return;
}



/* Entry: 0067b334; end: 0067b35b;  */

undefined8 FUN_0067b334(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680454();
  return param_1;
}



/* Entry: 0067b35c; end: 0067b35f;  */

undefined8 FUN_0067b35c(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680454();
  return param_1;
}



/* Entry: 0067b360; end: 0067b373;  */

void FUN_0067b360(void)

{
  FUN_0067b334();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067b374; end: 0067b37f;  */

void FUN_0067b374(void)

{
  Hint_Prefetch(0xb27ec8,0,0,0);
  Hint_Prefetch(PTR_DAT_00b27ec8,0,0,0);
  return;
}



/* Entry: 0067b380; end: 0067b3e3;  */

void FUN_0067b380(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x006803bc();
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x006800dc(*(undefined8 *)(unaff_x20 + 0x18));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x19 + 0x18);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
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



/* Entry: 0067b3e4; end: 0067b423;  */

void FUN_0067b3e4(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00680498();
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00699010();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar2 != puVar2[1]) {
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
  return;
}



/* Entry: 0067b424; end: 0067b487;  */

long * FUN_0067b424(long *param_1,long *param_2,long *param_3,long *param_4)

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
    func_0x006800b0(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680464();
    func_0x0067ffb8();
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



/* Entry: 0067b488; end: 0067b4db;  */

long FUN_0067b488(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x006803d8();
  if ((bool)in_ZR) {
    lVar1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      lVar1 = 0;
    }
    else {
      func_0x0068019c();
      lVar1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00680110((long)*(int *)(unaff_x19 + 0x20));
      lVar1 = lVar1 + extraout_x8 + 1;
    }
  }
  func_0x00680394();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)lVar1;
    return lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *param_3 = (int)(param_1 + lVar1);
  return param_1 + lVar1;
}



/* Entry: 0067b4dc; end: 0067b503;  */

undefined8 FUN_0067b4dc(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680454();
  return param_1;
}



/* Entry: 0067b504; end: 0067b507;  */

undefined8 FUN_0067b504(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680454();
  return param_1;
}



/* Entry: 0067b508; end: 0067b51b;  */

void FUN_0067b508(void)

{
  FUN_0067b4dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067b51c; end: 0067b527;  */

void FUN_0067b51c(void)

{
  Hint_Prefetch(0xb27fd8,0,0,0);
  Hint_Prefetch(PTR_DAT_00b27fd8,0,0,0);
  return;
}



/* Entry: 0067b528; end: 0067b5b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067b528(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x006803bc();
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x006800dc(*(undefined8 *)(unaff_x20 + 0x18));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      param_1 = (ulong *)(unaff_x19 + 0x18);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
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



/* Entry: 0067b5b4; end: 0067b5f7;  */

void FUN_0067b5b4(void)

{
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lVar2;
  
  func_0x0068043c();
  if ((unaff_x20 & 1) != 0) {
    func_0x00680498();
  }
  if ((unaff_x20 & 0xe) != 0) {
    *(undefined4 *)(unaff_x19 + 5) = 0;
    unaff_x19[4] = 0;
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



/* Entry: 0067b5f8; end: 0067b6a3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_0067b5f8(long *param_1,long *param_2,long *param_3,long *param_4)

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
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x0068063c();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680550();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  if ((uVar7 & 1) != 0) {
    func_0x00680174(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680634();
    func_0x0067ffb8();
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



/* Entry: 0067b6a4; end: 0067b74b;  */

long FUN_0067b6a4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long extraout_x8;
  uint unaff_w20;
  
  func_0x0068043c();
  if ((unaff_w20 & 0xf) == 0) {
    lVar1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      lVar1 = 0;
    }
    else {
      func_0x0068019c();
      lVar1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x006806f0(0xfffffff7);
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x006806f0();
    }
    if ((unaff_w20 >> 3 & 1) != 0) {
      func_0x00680564();
      lVar1 = lVar1 + extraout_x8 + 1;
    }
  }
  func_0x00680394();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_006a480c();
    }
    else {
      param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_006a5cc8();
    *param_3 = (int)(param_1 + lVar1);
    return param_1 + lVar1;
  }
  *param_3 = (int)lVar1;
  return lVar1;
}



/* Entry: 0067b74c; end: 0067b777;  */

void FUN_0067b74c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 0067b778; end: 0067b85f;  */

void FUN_0067b778(void)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e548);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x00680888(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  FUN_0067beb0((undefined8 *)(unaff_x19 + 0x40),unaff_x20 + 0x40);
  lVar2 = unaff_x19 + 0x58;
  func_0x0067e9f0();
  func_0x0067ffc4();
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00680484();
  }
  *(long *)(unaff_x19 + 0x70) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_0067fb38();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined4 *)(unaff_x19 + 0x90) = *(undefined4 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  return;
}



/* Entry: 0067b860; end: 0067b88b;  */

undefined8 FUN_0067b860(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067b88c(param_1);
  return param_1;
}



/* Entry: 0067b88c; end: 0067b8cb;  */

long * FUN_0067b88c(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_0067b4dc();
  }
  __ZdlPv();
  FUN_0067ea64(param_1 + 0x58);
  FUN_0067eb3c(param_1 + 0x40);
  FUN_0048ed64(param_1 + 0x30);
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



/* Entry: 0067b8cc; end: 0067b8cf;  */

undefined8 FUN_0067b8cc(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067b88c(param_1);
  return param_1;
}



/* Entry: 0067b8d0; end: 0067b8e3;  */

void FUN_0067b8d0(void)

{
  FUN_0067b860();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067b8e4; end: 0067b8ef;  */

void FUN_0067b8e4(void)

{
  Hint_Prefetch(0xb28138,0,0,0);
  Hint_Prefetch(PTR_DAT_00b28138,0,0,0);
  return;
}



/* Entry: 0067b8f0; end: 0067b93b;  */

void FUN_0067b8f0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25dc8);
  if ((int)lVar2 != 0) {
    iVar1 = (int)param_1 + 0x58;
    FUN_00678d50();
    if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      func_0x0067d498();
    }
  }
  return;
}



/* Entry: 0067b93c; end: 0067be93;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067b93c(void)

{
  uint uVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x0067ff18();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  func_0x00680448();
  FUN_0048ebf4();
  FUN_0067beb0(unaff_x21 + 0x40,unaff_x20 + 0x40);
  puVar2 = (ulong *)(unaff_x21 + 0x58);
  func_0x00678d10(puVar2,unaff_x20 + 0x58);
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        func_0x006803ac(0,*(undefined8 *)(unaff_x20 + 0x70));
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_0067fb38();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_0067b528();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x80) = *(undefined4 *)(unaff_x20 + 0x80);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x84) = *(undefined4 *)(unaff_x20 + 0x84);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x88) = *(undefined1 *)(unaff_x20 + 0x88);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x89) = *(undefined1 *)(unaff_x20 + 0x89);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8a) = *(undefined1 *)(unaff_x20 + 0x8a);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8b) = *(undefined1 *)(unaff_x20 + 0x8b);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8c) = *(undefined1 *)(unaff_x20 + 0x8c);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8d) = *(undefined1 *)(unaff_x20 + 0x8d);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x90) = *(undefined4 *)(unaff_x20 + 0x90);
    }
  }
  func_0x006801e4();
  ppuVar3 = &PTR_PTR_00b25dc8;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*puVar2 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar3[1] - (long)*ppuVar3) >> 4)) {
      func_0x006a5744();
      for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067be94; end: 0067beaf;  */

long FUN_0067be94(long param_1)

{
  long extraout_x8;
  
  FUN_0067b6a4();
  func_0x0067fdd4();
  return param_1 + extraout_x8;
}



/* Entry: 0067beb0; end: 0067bec7;  */

void FUN_0067beb0(long *param_1,long param_2)

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
    FUN_0067fb98(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0067bec8; end: 0067bef7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067bec8(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x006790d0();
  func_0x006803f4();
  func_0x0067ff18();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  func_0x00680448();
  FUN_0048ebf4();
  FUN_0067beb0(unaff_x21 + 0x40,unaff_x20 + 0x40);
  puVar2 = (ulong *)(unaff_x21 + 0x58);
  func_0x00678d10(puVar2,unaff_x20 + 0x58);
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        func_0x006803ac(0,*(undefined8 *)(unaff_x20 + 0x70));
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_0067fb38();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_0067b528();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x80) = *(undefined4 *)(unaff_x20 + 0x80);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x84) = *(undefined4 *)(unaff_x20 + 0x84);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x88) = *(undefined1 *)(unaff_x20 + 0x88);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x89) = *(undefined1 *)(unaff_x20 + 0x89);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8a) = *(undefined1 *)(unaff_x20 + 0x8a);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8b) = *(undefined1 *)(unaff_x20 + 0x8b);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8c) = *(undefined1 *)(unaff_x20 + 0x8c);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x8d) = *(undefined1 *)(unaff_x20 + 0x8d);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x90) = *(undefined4 *)(unaff_x20 + 0x90);
    }
  }
  func_0x006801e4();
  ppuVar3 = &PTR_PTR_00b25dc8;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*puVar2 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar3[1] - (long)*ppuVar3) >> 4)) {
      func_0x006a5744();
      for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067bef8; end: 0067bf8f;  */

void FUN_0067bef8(long param_1,undefined8 param_2,long param_3)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar1;
  
  func_0x006803bc();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x0068048c(&PTR_FUN_00a0e408);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  puVar1 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar1 = unaff_x20;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  func_0x0067e9f0(unaff_x19 + 0x30);
  FUN_00534b28();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    func_0x006808c4();
  }
  *(undefined8 **)(unaff_x19 + 0x48) = puVar1;
  return;
}



/* Entry: 0067bf90; end: 0067bfbb;  */

undefined8 FUN_0067bf90(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067bfbc(param_1);
  return param_1;
}



/* Entry: 0067bfbc; end: 0067bfe7;  */

long * FUN_0067bfbc(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00680750();
  if (param_1 != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  func_0x006801b8(unaff_x19 + 2);
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return unaff_x19;
}



/* Entry: 0067bfe8; end: 0067bfeb;  */

undefined8 FUN_0067bfe8(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067bfbc(param_1);
  return param_1;
}



/* Entry: 0067bfec; end: 0067bfff;  */

void FUN_0067bfec(void)

{
  FUN_0067bf90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067c000; end: 0067c00b;  */

void FUN_0067c000(void)

{
  Hint_Prefetch(0xb283c0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b283c0,0,0,0);
  return;
}



/* Entry: 0067c00c; end: 0067c04f;  */

void FUN_0067c00c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25c18);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x006804d8(), iVar1 != 0)) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00680578();
  }
  return;
}



/* Entry: 0067c050; end: 0067c137;  */

void FUN_0067c050(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  ulong unaff_x23;
  
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_x23 & 1) != 0) {
    func_0x006806c8();
    if (param_1 == (ulong *)0x0) {
      func_0x006803ac();
      *(ulong **)(unaff_x21 + 0x48) = param_1;
    }
    else {
      FUN_0067d4a8();
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25c18;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
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



/* Entry: 0067c138; end: 0067c17b;  */

long FUN_0067c138(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x00680154();
  func_0x0067fe18();
  while (unaff_x22 != 0) {
    func_0x0068045c();
    func_0x0068040c();
  }
  if ((*(byte *)(unaff_x19 + 0x28) & 1) != 0) {
    func_0x00680580();
    func_0x00680350();
  }
  func_0x006801c4();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_006a480c();
    }
    else {
      param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_006a5cc8();
    param_1 = param_1 + CONCAT44(uVar2,uVar1);
    *param_3 = (int)param_1;
    return param_1;
  }
  *param_3 = uVar1;
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 0067c17c; end: 0067c1ab;  */

void FUN_0067c17c(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  ulong unaff_x23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x00679520();
  func_0x006803f4();
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_x23 & 1) != 0) {
    func_0x006806c8();
    if (param_1 == (ulong *)0x0) {
      func_0x006803ac();
      *(ulong **)(unaff_x21 + 0x48) = param_1;
    }
    else {
      FUN_0067d4a8();
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25c18;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
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



/* Entry: 0067c1ac; end: 0067c21b;  */

void FUN_0067c1ac(undefined8 param_1)

{
  undefined2 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e688);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x006802f8();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  uVar1 = *(undefined2 *)(unaff_x20 + 0x50);
  *(undefined1 *)(unaff_x19 + 0x52) = *(undefined1 *)(unaff_x20 + 0x52);
  *(undefined2 *)(unaff_x19 + 0x50) = uVar1;
  return;
}



/* Entry: 0067c21c; end: 0067c247;  */

undefined8 FUN_0067c21c(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067c248(param_1);
  return param_1;
}



/* Entry: 0067c248; end: 0067c273;  */

long * FUN_0067c248(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00680750();
  if (param_1 != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  func_0x006801b8(unaff_x19 + 2);
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return unaff_x19;
}



/* Entry: 0067c274; end: 0067c277;  */

undefined8 FUN_0067c274(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067c248(param_1);
  return param_1;
}



/* Entry: 0067c278; end: 0067c28b;  */

void FUN_0067c278(void)

{
  FUN_0067c21c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067c28c; end: 0067c297;  */

void FUN_0067c28c(void)

{
  Hint_Prefetch(0xb284c8,0,0,0);
  Hint_Prefetch(PTR_DAT_00b284c8,0,0,0);
  return;
}



/* Entry: 0067c298; end: 0067c2db;  */

void FUN_0067c298(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25f68);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x006804d8(), iVar1 != 0)) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00680578();
  }
  return;
}



/* Entry: 0067c2dc; end: 0067c457;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067c2dc(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 0xf) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006807c4();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x51) = *(undefined1 *)(unaff_x20 + 0x51);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x52) = *(undefined1 *)(unaff_x20 + 0x52);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25f68;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x006a5744();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067c458; end: 0067c4b3;  */

long FUN_0067c458(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x00680154();
  func_0x0067fe18();
  while (unaff_x22 != 0) {
    func_0x0068045c();
    func_0x0068040c();
  }
  if ((*(uint *)(unaff_x19 + 0x28) & 0xf) != 0) {
    if ((*(uint *)(unaff_x19 + 0x28) & 1) != 0) {
      func_0x00680580();
      func_0x00680350();
    }
    func_0x006807d0();
  }
  func_0x006801c4();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_006a480c();
    }
    else {
      param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_006a5cc8();
    param_1 = param_1 + CONCAT44(uVar2,uVar1);
    *param_3 = (int)param_1;
    return param_1;
  }
  *param_3 = uVar1;
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 0067c4b4; end: 0067c4e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067c4b4(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x00679978();
  func_0x006803f4();
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 0xf) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006807c4();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x51) = *(undefined1 *)(unaff_x20 + 0x51);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x52) = *(undefined1 *)(unaff_x20 + 0x52);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25f68;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x006a5744();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067c4e4; end: 0067c567;  */

void FUN_0067c4e4(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e638);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  func_0x0067ffc4();
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x006802f8();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_0067fb38();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  *(undefined2 *)(unaff_x19 + 0x58) = *(undefined2 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 0067c568; end: 0067c593;  */

undefined8 FUN_0067c568(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067c594(param_1);
  return param_1;
}



/* Entry: 0067c594; end: 0067c5cf;  */

long * FUN_0067c594(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00680750();
  if (param_1 != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  if (unaff_x19[10] != 0) {
    FUN_0067b4dc();
  }
  __ZdlPv();
  func_0x006801b8(unaff_x19 + 2);
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return unaff_x19;
}



/* Entry: 0067c5d0; end: 0067c5d3;  */

undefined8 FUN_0067c5d0(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067c594(param_1);
  return param_1;
}



/* Entry: 0067c5d4; end: 0067c5e7;  */

void FUN_0067c5d4(void)

{
  FUN_0067c568();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067c5e8; end: 0067c5f3;  */

void FUN_0067c5e8(void)

{
  Hint_Prefetch(0xb28638,0,0,0);
  Hint_Prefetch(PTR_DAT_00b28638,0,0,0);
  return;
}



/* Entry: 0067c5f4; end: 0067c637;  */

void FUN_0067c5f4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25f08);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x006804d8(), iVar1 != 0)) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00680578();
  }
  return;
}



/* Entry: 0067c638; end: 0067c7cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067c638(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 0xf) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_0067fb38();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_0067b528();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x58) = *(undefined1 *)(unaff_x20 + 0x58);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x59) = *(undefined1 *)(unaff_x20 + 0x59);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25f08;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
      func_0x006a5744();
      for (lVar2 = 0; (long)unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067c7d0; end: 0067c843;  */

long FUN_0067c7d0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x22;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  func_0x00680154();
  func_0x0067fe18();
  while (unaff_x22 != 0) {
    func_0x0068045c();
    func_0x0068040c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00680580();
      func_0x00680350();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(long *)(unaff_x19 + 0x50);
      FUN_0067be94();
      func_0x00680350();
    }
  }
  func_0x006801c4();
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



/* Entry: 0067c844; end: 0067c873;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0067c844(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong *unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x00679d20();
  func_0x006803f4();
  func_0x0067ff18();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 0xf) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_0067fb38();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_0067b528();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x58) = *(undefined1 *)(unaff_x20 + 0x58);
    }
    if ((unaff_w23 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x59) = *(undefined1 *)(unaff_x20 + 0x59);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25f08;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
      func_0x006a5744();
      for (lVar2 = 0; (long)unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 0067c874; end: 0067c8db;  */

void FUN_0067c874(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e3b8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x006802f8();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  *(undefined1 *)(unaff_x19 + 0x50) = *(undefined1 *)(unaff_x20 + 0x50);
  return;
}



/* Entry: 0067c8dc; end: 0067c907;  */

undefined8 FUN_0067c8dc(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067c908(param_1);
  return param_1;
}



/* Entry: 0067c908; end: 0067c933;  */

long * FUN_0067c908(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00680750();
  if (param_1 != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  func_0x006801b8(unaff_x19 + 2);
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return unaff_x19;
}



/* Entry: 0067c934; end: 0067c937;  */

undefined8 FUN_0067c934(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067c908(param_1);
  return param_1;
}



/* Entry: 0067c938; end: 0067c94b;  */

void FUN_0067c938(void)

{
  FUN_0067c8dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067c94c; end: 0067c957;  */

void FUN_0067c94c(void)

{
  Hint_Prefetch(0xb287b0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b287b0,0,0,0);
  return;
}



/* Entry: 0067c958; end: 0067c99b;  */

void FUN_0067c958(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25bc0);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x006804d8(), iVar1 != 0)) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00680578();
  }
  return;
}



/* Entry: 0067c99c; end: 0067ca9f;  */

void FUN_0067c99c(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 3) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006807c4();
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25bc0;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
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



/* Entry: 0067caa0; end: 0067caf7;  */

long FUN_0067caa0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x00680154();
  func_0x0067fe18();
  while (unaff_x22 != 0) {
    func_0x0068045c();
    func_0x0068040c();
  }
  if (((*(uint *)(unaff_x19 + 0x28) & 3) != 0) && ((*(uint *)(unaff_x19 + 0x28) & 1) != 0)) {
    func_0x00680580();
    func_0x00680430();
  }
  func_0x006801c4();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_006a480c();
    }
    else {
      param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_006a5cc8();
    param_1 = param_1 + CONCAT44(uVar2,uVar1);
    *param_3 = (int)param_1;
    return param_1;
  }
  *param_3 = uVar1;
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 0067caf8; end: 0067cb27;  */

void FUN_0067caf8(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x00679ffc();
  func_0x006803f4();
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 3) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006807c4();
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25bc0;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680064();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
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



/* Entry: 0067cb28; end: 0067cb8f;  */

void FUN_0067cb28(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e458);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x006802f8();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  return;
}



/* Entry: 0067cb90; end: 0067cbbb;  */

undefined8 FUN_0067cb90(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067cbbc(param_1);
  return param_1;
}



/* Entry: 0067cbbc; end: 0067cbe7;  */

long * FUN_0067cbbc(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00680750();
  if (param_1 != 0) {
    FUN_0067d448();
  }
  __ZdlPv();
  func_0x006801b8(unaff_x19 + 2);
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return unaff_x19;
}



/* Entry: 0067cbe8; end: 0067cbeb;  */

undefined8 FUN_0067cbe8(undefined8 param_1)

{
  func_0x006802c0();
  FUN_0067cbbc(param_1);
  return param_1;
}



/* Entry: 0067cbec; end: 0067cbff;  */

void FUN_0067cbec(void)

{
  FUN_0067cb90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0067cc00; end: 0067cc0b;  */

void FUN_0067cc00(void)

{
  Hint_Prefetch(0xb288d0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b288d0,0,0,0);
  return;
}



/* Entry: 0067cc0c; end: 0067cc4f;  */

void FUN_0067cc0c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00680418(param_1,&PTR_PTR_00b25c68);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (func_0x006804d8(), iVar1 != 0)) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00680578();
  }
  return;
}



/* Entry: 0067cc50; end: 0067cd97;  */

void FUN_0067cc50(ulong *param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 7) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006807c4();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x54) = *(undefined4 *)(unaff_x20 + 0x54);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25c68;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x006a5744();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067cd98; end: 0067ce03;  */

long FUN_0067cd98(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x22;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  func_0x00680154();
  func_0x0067fe18();
  while (unaff_x22 != 0) {
    func_0x0068045c();
    func_0x0068040c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00680580();
      func_0x00680430();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00680110((long)*(int *)(unaff_x19 + 0x54));
    }
  }
  func_0x006801c4();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
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
  *param_3 = uVar2;
  return CONCAT44(uVar3,uVar2);
}



/* Entry: 0067ce04; end: 0067ce33;  */

void FUN_0067ce04(ulong *param_1,ulong *param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  uint unaff_w23;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0068031c();
  func_0x0067a358();
  func_0x006803f4();
  func_0x0067ff18();
  if ((unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  FUN_0068020c();
  if ((unaff_w23 & 7) != 0) {
    if ((unaff_w23 & 1) != 0) {
      func_0x006806c8();
      if (param_1 == (ulong *)0x0) {
        func_0x006803ac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0067d4a8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x006807c4();
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x54) = *(undefined4 *)(unaff_x20 + 0x54);
    }
  }
  func_0x006801e4();
  ppuVar1 = &PTR_PTR_00b25c68;
  func_0x00680138();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*param_1 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)((long)ppuVar1[1] - (long)*ppuVar1) >> 4)) {
    func_0x006a5744();
    for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 0067ce34; end: 0067ce5b;  */

undefined8 FUN_0067ce34(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680454();
  return param_1;
}



/* Entry: 0067ce5c; end: 0067ce5f;  */

undefined8 FUN_0067ce5c(undefined8 param_1)

{
  func_0x006802c0();
  func_0x00680454();
  return param_1;
}



/* Entry: 0067ce60; end: 0067ce73;  */

void FUN_0067ce60(void)

{
  FUN_0067ce34();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


