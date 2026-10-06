/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a6b9a0; end: 102a6b9b7;  */

void FUN_102a6b9a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 102a6b9b8; end: 102a6b9e7;  */

void FUN_102a6b9b8(void)

{
  FUN_102a6b9e8(1);
  return;
}



/* Entry: 102a6b9e8; end: 102a6bbd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6b9e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar4 - extraout_x8_00;
  lVar3 = unaff_x20 + 0xf0;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
    if (*(long *)(lVar3 + 0x28) == 0) {
      func_0x000107c615e8(lVar3);
    }
    else {
      FUN_102a6bbd4(lVar3 + 0x10,auStack_a0);
      func_0x0001000a8868(auStack_a0,uStack_88);
      func_0x000102a5fbd8();
      func_0x000107c615e8(lVar3);
      func_0x0001000834e4(auStack_a0);
    }
  }
  lVar2 = param_1;
  FUN_102a6785c();
  lVar3 = _DAT_112ee6108;
  if (lVar2 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c61428(lVar6 + _DAT_112ee6108,auStack_a0,0,0);
    lVar6 = lVar6 + lVar3;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x000107c577c0();
      func_0x000107c615e8(lVar6);
    }
    func_0x000107c61170(lVar2);
  }
  lVar3 = 0;
  FUN_102a9ded4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,1,1,lVar3);
  func_0x000107c5eea0(puVar4);
  FUN_102a6622c(param_1,lVar5,puVar4);
  (**(code **)(lVar7 + 8))(puVar4,lVar1);
  FUN_102a6b960(lVar5,0x112ee6128,&UNK_10db114e0);
  FUN_102a66968();
  return;
}



/* Entry: 102a6bbd4; end: 102a6bc17;  */

long FUN_102a6bbd4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102a6bc18; end: 102a6bc27;  */

void FUN_102a6bc18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61434(param_2);
  FUN_102a5c00c(param_1,param_2);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102a5dde0(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102a6bc28; end: 102a6bc77;  */

undefined8 FUN_102a6bc28(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ee62d8;
  func_0x0001000285a8(0x112ee62d8,&UNK_10db116f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a6bc78; end: 102a6bc83;  */

/* WARNING: Possible PIC construction at 0x000102a67698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a676e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a677c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6780c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a677c4) */
/* WARNING: Removing unreachable block (ram,0x000102a676e8) */
/* WARNING: Removing unreachable block (ram,0x000102a6769c) */
/* WARNING: Removing unreachable block (ram,0x000102a67810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6bc78(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x48);
  if ((lVar6 == 0) || (*(long *)(lVar6 + _DAT_112fbe958) != 6)) {
    func_0x000107c44dd0();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a67858);
      (*pcVar1)();
    }
    func_0x000107c3df24();
    func_0x000107c615e8(lVar3);
    lVar3 = lVar5;
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      return;
    }
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 3;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    func_0x000107c61174(lVar3);
    func_0x000107c5e308(lVar5);
    func_0x000107c61180();
    func_0x000107c5e308(lVar3);
    func_0x000107c61180();
    func_0x000107c40280(lVar5);
    func_0x000107c61180();
  }
  else {
    lVar6 = lVar3;
    func_0x000107c42bc0(lVar3,lVar3,lVar5,1);
    func_0x0001007f8afc();
    lVar2 = lVar6;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    func_0x000107c3ec1c(lVar5);
    func_0x000107c61180();
    func_0x000107c3f2e4();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a6785c);
      (*pcVar1)();
    }
    uVar7 = 0xc034000000000000;
    if ((int)lVar6 == 0) {
      uVar7 = 0;
    }
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c40284(uVar7,lVar5);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 102a6bc84; end: 102a6bcc3;  */

void FUN_102a6bc84(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102a6bcc4; end: 102a6bd07;  */

void FUN_102a6bcc4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a6bd08; end: 102a6bd7f;  */

void FUN_102a6bd08(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000102a6f048(unaff_x20 + 0x10,0x112ee62d8,&UNK_10db116f0);
  func_0x000100d17ec0(unaff_x20 + 0x38);
  func_0x000100d17ec0(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x80);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(uVar1);
  func_0x000102a633ec(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a6bd80; end: 102a6bd9f;  */

void FUN_102a6bd80(void)

{
  func_0x000107c61168(&PTR_PTR_112ee6320);
  return;
}



/* Entry: 102a6bda0; end: 102a6be5f;  */

void FUN_102a6bda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001000a8868();
    func_0x000102a5e754(param_1,param_2,param_3);
  }
  if ((*(byte *)(unaff_x20 + 0x58) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x58) = 1;
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      plVar3 = (long *)(unaff_x20 + 0x10);
      func_0x0001000a8868();
      lVar4 = *plVar3;
      uVar1 = *(undefined8 *)(lVar4 + 0xa0);
      lVar2 = *(long *)(lVar4 + 0xa8);
      func_0x0001000a8868(lVar4 + 0x88,uVar1);
      (**(code **)(lVar2 + 0x50))(uVar1,lVar2);
    }
  }
  return;
}



/* Entry: 102a6be60; end: 102a6c06f;  */

/* WARNING: Possible PIC construction at 0x000102a6bf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6bf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6bfe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6c064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a6bfe8) */
/* WARNING: Removing unreachable block (ram,0x000102a633ec) */
/* WARNING: Removing unreachable block (ram,0x000102a633fc) */
/* WARNING: Removing unreachable block (ram,0x000102a633f8) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000102a6bf60) */
/* WARNING: Removing unreachable block (ram,0x000102a6bf74) */
/* WARNING: Removing unreachable block (ram,0x000102a6c02c) */
/* WARNING: Removing unreachable block (ram,0x000102a6c04c) */
/* WARNING: Removing unreachable block (ram,0x000102a6c038) */
/* WARNING: Removing unreachable block (ram,0x000102a6c058) */
/* WARNING: Removing unreachable block (ram,0x000102a6c060) */
/* WARNING: Removing unreachable block (ram,0x000102a6c040) */
/* WARNING: Removing unreachable block (ram,0x000102a6bf8c) */
/* WARNING: Removing unreachable block (ram,0x000102a6bf94) */
/* WARNING: Removing unreachable block (ram,0x000102a6bf50) */
/* WARNING: Removing unreachable block (ram,0x000102a6c068) */

void FUN_102a6be60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = param_1;
  FUN_102a6de58();
  lVar7 = unaff_x20 + 0x48;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c615e8();
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    if (lVar7 != 0) {
      uVar1 = *(ulong *)(param_1 + 0x30);
      lVar3 = *(long *)(param_1 + 0x38);
      plVar9 = (long *)(*(long *)(param_1 + 0x28) + 0x48);
      do {
        uVar2 = plVar9[-5];
        lVar4 = plVar9[-4];
        uVar6 = uVar1;
        if ((uVar2 == uVar1 && lVar4 == lVar3) ||
           (uVar5 = uVar2, func_0x000107c605b8(uVar2,lVar4,uVar1,lVar3,0), uVar6 = uVar2,
           (uVar5 & 1) != 0)) {
          lVar7 = plVar9[-2];
          lVar3 = plVar9[-1];
          lVar8 = *plVar9;
          func_0x000107c61434(lVar4);
          func_0x000107c61434(lVar7);
          func_0x000107c61434(lVar3);
          func_0x000107c61434(lVar8);
          func_0x000102a6e2ac(param_1,uVar6,lVar4,lVar3);
          break;
        }
        plVar9 = plVar9 + 6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar8);
  return;
}



/* Entry: 102a6c070; end: 102a6c0eb;  */

uint FUN_102a6c070(long param_1)

{
  uint uVar1;
  long *plVar2;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  if (param_1 == 3) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      plVar2 = (long *)(unaff_x20 + 0x10);
      func_0x0001000a8868();
      if (*(long *)(*plVar2 + 0xf0) != 0) {
        return 0x2000201 >> (((ulong)*(byte *)(*(long *)(*plVar2 + 0xf0) + 0x10) & 7) << 3);
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_1 == 2);
  }
  return uVar1;
}



/* Entry: 102a6c0ec; end: 102a6cabb;  */

/* WARNING: Possible PIC construction at 0x000102a6c238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6c2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6c300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6c310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a6c304) */
/* WARNING: Removing unreachable block (ram,0x000102a6c2f0) */
/* WARNING: Removing unreachable block (ram,0x000102a6c23c) */
/* WARNING: Removing unreachable block (ram,0x000102a6c314) */

void FUN_102a6c0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puVar9;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar5 = (undefined1)((ulong)param_4 >> 8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  *(undefined8 *)(unaff_x20 + 0x78) = param_3;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x80);
  *(char *)(unaff_x20 + 0x80) = (char)param_4;
  *(undefined1 *)(unaff_x20 + 0x81) = uVar5;
  bVar4 = (byte)((ulong)param_4 >> 0x10) & 1;
  *(byte *)(unaff_x20 + 0x82) = bVar4;
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  FUN_102a633d8(param_3,param_4);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000102a633ec(uVar10,uVar3);
  puVar7 = &UNK_11058e738;
  func_0x000107c613fc(&UNK_11058e738,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar8 = &UNK_11058e760;
  func_0x000107c613fc(&UNK_11058e760,0x34,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined8 *)(puVar8 + 0x18) = param_1;
  *(undefined8 *)(puVar8 + 0x20) = param_2;
  *(undefined8 *)(puVar8 + 0x28) = param_3;
  puVar8[0x30] = (char)param_4;
  puVar8[0x31] = uVar5;
  puVar8[0x32] = bVar4;
  puVar8[0x33] = param_5;
  puVar9 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar6 = (int)puVar9;
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_2);
  FUN_102a633d8(param_3,param_4);
  func_0x000107c6157c(puVar7);
  func_0x000107c4a02c();
  if (iVar6 == 0) {
    func_0x0001000c10c0("guaranteeMainQueue(_:)");
    func_0x000107c61180();
    puVar7 = &UNK_11058e788;
    func_0x000107c613fc(&UNK_11058e788,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x102a6efa8;
    *(undefined **)(puVar7 + 0x18) = puVar8;
    uStack_70 = 0x102a6efd0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11058e7a0;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c6157c(puVar8);
  }
  else {
    FUN_102a6cd38(puVar7,param_1,param_2,param_3,(uint)param_4 & 0x1ffff,param_5 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar7);
  return;
}



/* Entry: 102a6cabc; end: 102a6cb3b;  */

/* WARNING: Possible PIC construction at 0x000102a6cafc: Changing call to branch */

void FUN_102a6cabc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x38;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + 0x38;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    FUN_102a6a09c(param_1);
  }
  else if (*(long *)(lVar1 + 0xc0) != 0) {
    func_0x000107c5d60c(*(long *)(lVar1 + 0xc0),param_2,2,*(undefined1 *)(lVar1 + 0xe8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102a6cb3c; end: 102a6cd37;  */

/* WARNING: Possible PIC construction at 0x000102a6cb8c: Changing call to branch */

void FUN_102a6cb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x38;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + 0x38;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    FUN_102a69e18(param_1,param_2,param_3,param_4);
  }
  else if (*(long *)(lVar1 + 0xc0) != 0) {
    func_0x000107c5d60c(*(long *)(lVar1 + 0xc0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102a6cd38; end: 102a6cde7;  */

void FUN_102a6cd38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6)

{
  long lVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x48;
    func_0x000107c61618();
    func_0x000107c61574(param_1);
    if (lVar1 != 0) {
      FUN_102a6f570(param_2,param_3,param_4,param_5 & 0x1ffff,param_6 & 1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102a6cde8; end: 102a6d19f;  */

void FUN_102a6cde8(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_90 [8];
  
  lVar6 = 0;
  FUN_102aabc7c();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112ee5e90,&UNK_10db11288);
  lVar12 = *unaff_x20;
  lVar6 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) == 0) {
    func_0x000107c61574(lVar12);
LAB_102a6cfd0:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar12 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar12) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
  if (uVar8 == 0) goto LAB_102a6cf1c;
  do {
    uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
      lVar13 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar11 = *(long *)(lVar7 + 0x48) * uVar10;
      func_0x000102a6f088(*(long *)(lVar12 + 0x38) + lVar11,
                          auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),FUN_102aabc7c);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000102a6f0cc(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar6 + 0x38) + lVar11,FUN_102aabc7c);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_102a6cf1c:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102a6cff8);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar12);
          goto LAB_102a6cfd0;
        }
        uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar8 == 0);
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 102a6d1a0; end: 102a6d307;  */

void FUN_102a6d1a0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001000285a8(0x112ea4be8,&UNK_10db112b0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102a6d27c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 0x10);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 0x10);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        func_0x000107c61434();
        if (uVar8 != 0) break;
LAB_102a6d27c:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102a6d308);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102a6d2e0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_102a6d2e0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102a6d308; end: 102a6db9b;  */

void FUN_102a6d308(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long extraout_x8;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  undefined1 auStack_a8 [72];
  
  lVar5 = 0;
  FUN_102aabc7c();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = *unaff_x20;
  lVar5 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar5 = param_1;
  }
  uVar6 = 0x112ee5e90;
  func_0x0001000285a8(0x112ee5e90,&UNK_10db11288);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar5,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102a6d604:
    func_0x000107c61574(lVar17);
LAB_102a6d60c:
    *unaff_x20 = lVar7;
    return;
  }
  puVar20 = (ulong *)(lVar17 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar19 = uVar19 & *puVar20;
  lVar5 = lVar7 + 0x40;
  lVar8 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar21 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102a6d634);
          (*pcVar4)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar21) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar17);
            goto LAB_102a6d60c;
          }
          uVar19 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
          if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
            *puVar20 = -1L << (uVar19 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar20,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar17 + 0x10) = 0;
          goto LAB_102a6d604;
        }
        uVar19 = puVar20[lVar21];
        lVar8 = lVar8 + 1;
      } while (uVar19 == 0);
      uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar21 = lVar8;
    }
    uVar12 = LZCOUNT(uVar12) | lVar21 << 6;
    puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar12 * 0x10);
    uVar6 = *puVar1;
    uVar2 = puVar1[1];
    lVar18 = *(long *)(lVar10 + 0x48);
    lVar8 = *(long *)(lVar17 + 0x38) + lVar18 * uVar12;
    if ((param_2 & 1) == 0) {
      func_0x000102a6f088(lVar8,puVar11,FUN_102aabc7c);
      func_0x000107c61434(uVar2);
    }
    else {
      func_0x000102a6f0cc(lVar8,puVar11,FUN_102aabc7c);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar6,uVar2);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar12 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar5 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar3 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar12) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102a6d638);
          (*pcVar4)();
        }
        uVar13 = 0;
        if (uVar15 != uVar12) {
          uVar13 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar12 | bVar3);
        uVar15 = *(ulong *)(lVar5 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar5 + uVar13) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar5 + uVar13);
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar12 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000102a6f0cc(puVar11,*(long *)(lVar7 + 0x38) + lVar18 * uVar12,FUN_102aabc7c);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar8 = lVar21;
  } while( true );
}



/* Entry: 102a6db9c; end: 102a6dbd3;  */

void FUN_102a6db9c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102a6dbd4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102a6dbd4; end: 102a6dd4f;  */

undefined * FUN_102a6dbd4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a6dd50);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112ee63b8;
    func_0x0001000285a8(0x112ee63b8,&UNK_10db123b0);
    lVar5 = 0;
    FUN_102aabc7c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a6dd48);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a6dd4c);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_102aabc7c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 102a6dd50; end: 102a6de57;  */

undefined * FUN_102a6dd50(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6de58);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112ee63b0;
    func_0x0001000285a8(0x112ee63b0,&UNK_10db11830);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11058ffd8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102a6de58; end: 102a6df23;  */

undefined * FUN_102a6de58(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_1 + 0x28);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 != 0) {
    func_0x000102a6dbb8(0,lVar6,0);
    puVar8 = (undefined8 *)(lVar7 + 0x38);
    do {
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar4 = *(ulong *)(puVar5 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        func_0x000102a6dbb8(1 < uVar4,uVar2 + 1,1);
      }
      puVar8 = puVar8 + 6;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return puVar5;
}



/* Entry: 102a6df24; end: 102a6ee2b;  */

undefined1  [16] FUN_102a6df24(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  func_0x000107c5012c();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_102a6f110(0);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar12 = uVar3;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar12 != 0) {
    if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a6e2ac);
      (*pcVar1)();
    }
    uVar13 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar13;
        func_0x000102a6ad1c(uVar13,uVar3);
      }
      uVar5 = uVar4;
      func_0x000107c4dfe0();
      if ((long)uVar5 < 4) {
        if ((long)uVar5 < 2) {
          if (((uVar5 == 0) || (uVar5 != 1)) || (lVar14 = *(long *)(param_2 + 0x18), lVar14 == 0))
          goto LAB_102a6dfb8;
          uVar2 = *(undefined8 *)(param_2 + 0x10);
        }
        else {
          if (((uVar5 == 2) || (uVar5 != 3)) || (lVar14 = *(long *)(param_2 + 0x40), lVar14 == 0))
          goto LAB_102a6dfb8;
          uVar2 = *(undefined8 *)(param_2 + 0x38);
        }
LAB_102a6e0bc:
        func_0x000107c61434(lVar14);
        puVar6 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar5 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          func_0x0001000d182c(puVar8,uVar5 + 1,1,puVar7);
        }
        *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
        *(undefined8 *)(puVar8 + uVar5 * 0x10 + 0x20) = uVar2;
        *(long *)(puVar8 + uVar5 * 0x10 + 0x28) = lVar14;
LAB_102a6e13c:
        func_0x000107c61170(uVar4);
      }
      else {
        if ((long)uVar5 < 6) {
          if ((uVar5 != 4) && (uVar5 == 5)) {
            lVar14 = *(long *)(param_2 + 0x40);
            if (lVar14 != 0) {
              uVar2 = *(undefined8 *)(param_2 + 0x38);
              func_0x000107c61434(lVar14);
              puVar6 = puVar8;
              func_0x000107c61558();
              puVar7 = puVar8;
              if (((ulong)puVar6 & 1) == 0) {
                puVar7 = (undefined *)0x0;
                func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
              }
              uVar5 = *(ulong *)(puVar7 + 0x10);
              puVar8 = puVar7;
              if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
                puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
                func_0x0001000d182c(puVar8,uVar5 + 1,1,puVar7);
              }
              *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
              *(undefined8 *)(puVar8 + uVar5 * 0x10 + 0x20) = uVar2;
              *(long *)(puVar8 + uVar5 * 0x10 + 0x28) = lVar14;
            }
LAB_102a6e0f0:
            lVar14 = *(long *)(param_2 + 0x30);
            if (*(long *)(lVar14 + 0x10) != 0) {
              uVar2 = *(undefined8 *)(lVar14 + 0x20);
              uVar9 = *(undefined8 *)(lVar14 + 0x28);
              func_0x000107c61438(uVar9,2);
              puVar6 = puVar8;
              func_0x000107c61558();
              puVar7 = puVar8;
              if (((ulong)puVar6 & 1) == 0) {
                puVar7 = (undefined *)0x0;
                func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
              }
              uVar5 = *(ulong *)(puVar7 + 0x10);
              puVar8 = puVar7;
              if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
                puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
                func_0x0001000d182c(puVar8,uVar5 + 1,1,puVar7);
              }
              *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
              *(undefined8 *)(puVar8 + uVar5 * 0x10 + 0x20) = uVar2;
              *(undefined8 *)(puVar8 + uVar5 * 0x10 + 0x28) = uVar9;
              func_0x000107c6142c(uVar9);
              goto LAB_102a6e13c;
            }
          }
        }
        else {
          if (uVar5 == 6) goto LAB_102a6e0f0;
          if ((uVar5 == 7) && (lVar14 = *(long *)(param_2 + 0x50), lVar14 != 0)) {
            uVar2 = *(undefined8 *)(param_2 + 0x48);
            goto LAB_102a6e0bc;
          }
        }
LAB_102a6dfb8:
        func_0x000107c61170(uVar4);
      }
      uVar13 = uVar13 + 1;
    } while (uVar12 != uVar13);
  }
  func_0x000107c6142c(uVar3);
  uVar2 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar9 = uVar2;
  func_0x00010011d734();
  uVar10 = 0xbb83e3;
  uVar11 = 0xa300000000000000;
  func_0x000107c5fa80(0xbb83e3,0xa300000000000000,uVar2,uVar9);
  func_0x000107c6142c(puVar8);
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = uVar10;
  return auVar15;
}



/* Entry: 102a6ee2c; end: 102a6eecf;  */

/* WARNING: Removing unreachable block (ram,0x000102a6eeb4) */

void FUN_102a6ee2c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    plVar2 = (long *)(unaff_x20 + 0x10);
    func_0x0001000a8868();
    lVar3 = *(long *)(*plVar2 + 0xf0);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(*plVar2 + 0x80);
      func_0x000107c6157c(lVar3);
      func_0x000107c4bdc8(uVar4);
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      lVar1 = *(long *)(lVar3 + 0x30);
      func_0x000107c614f0(uVar4);
      (**(code **)(lVar1 + 0x48))(0,uVar4,lVar1);
      func_0x000107c61574(lVar3);
    }
  }
  return;
}



/* Entry: 102a6eed0; end: 102a6ef8b;  */

void FUN_102a6eed0(ulong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  code *pcVar18;
  long alStack_b0 [5];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar13 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar14 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar13 + 7 & 0xfffffffffffffff8;
  lVar15 = uVar14 + 8;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar9 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar10 = uVar9 + lVar15 + 8 & (uVar9 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar10 + 7 & 0xfffffffffffffff8;
  lVar7 = *(long *)(unaff_x20 + uVar14);
  lVar15 = *(long *)(unaff_x20 + lVar15);
  alStack_b0[3] = *(undefined8 *)(unaff_x20 + uVar9);
  puVar1 = (undefined8 *)(unaff_x20 + uVar9 + 8);
  alStack_b0[4] = *puVar1;
  lStack_88 = puVar1[1];
  lStack_80 = unaff_x20 + uVar13;
  alStack_b0[2] = unaff_x20 + uVar10;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)alStack_b0 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112ee6128;
  alStack_b0[1] = lVar8;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_01;
  lVar5 = 0;
  FUN_102a9ded4();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  plVar16 = (long *)(lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(lVar15 + 0x10,auStack_78,0,0);
    lVar15 = lVar15 + 0x10;
    func_0x000107c61648();
    if (lVar15 != 0) {
      lVar5 = 0;
      func_0x000107c5ede0();
      lVar4 = *(long *)(lVar5 + -8);
      (**(code **)(lVar4 + 0x10))(lVar17,lStack_80,lVar5);
      (**(code **)(lVar4 + 0x38))(lVar17,0,1,lVar5);
      func_0x000102a691f0(alStack_b0[2],alStack_b0[3],lVar17,alStack_b0[4],lStack_88,lVar7);
      func_0x000107c61574(lVar15);
      FUN_102a6b960(lVar17,0x112d36580,&UNK_10d9016d0);
    }
  }
  else {
    alStack_b0[0] = lVar12;
    alStack_b0[2] = lVar4;
    lStack_88 = lVar15;
    func_0x000107c4f31c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102a69e18);
      (*pcVar18)();
    }
    lVar15 = 0x112ee62b0;
    puVar6 = &UNK_10db116d0;
    func_0x0001000285a8();
    iVar2 = *(int *)(lVar15 + 0x30);
    iVar3 = *(int *)(lVar15 + 0x40);
    puVar1 = (undefined8 *)((long)plVar16 + (long)*(int *)(lVar15 + 0x50));
    alStack_b0[4] = (long)*(int *)(lVar15 + 0x60);
    alStack_b0[3] = (long)*(int *)(lVar15 + 0x70);
    lVar15 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
    *plVar16 = lVar15;
    plVar16[1] = (long)puVar6;
    lVar15 = 0;
    func_0x000107c5ede0();
    lVar4 = *(long *)(lVar15 + -8);
    (**(code **)(lVar4 + 0x10))((long)plVar16 + (long)iVar2,lStack_80,lVar15);
    pcVar18 = *(code **)(lVar4 + 0x38);
    (*pcVar18)((long)plVar16 + (long)iVar2,0,1,lVar15);
    (*pcVar18)((long)plVar16 + (long)iVar3,1,1,lVar15);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar15 = alStack_b0[3];
    *(undefined1 *)((long)plVar16 + alStack_b0[4]) = 0;
    *(undefined1 *)((long)plVar16 + lVar15) = 0;
    func_0x000107c6159c(plVar16,lVar5,2);
    lVar15 = lStack_88;
    func_0x000107c61428(lStack_88 + 0x10,auStack_78,0,0);
    lVar15 = lVar15 + 0x10;
    func_0x000107c61648();
    if (lVar15 != 0) {
      FUN_102a6b78c(plVar16,lVar8,FUN_102a9ded4);
      (**(code **)(lVar11 + 0x38))(lVar8,0,1,lVar5);
      lVar5 = alStack_b0[1];
      func_0x000107c5eea0(alStack_b0[1]);
      FUN_102a6622c(3,lVar8,lVar5);
      func_0x000107c61574(lVar15);
      (**(code **)(alStack_b0[0] + 8))(lVar5,alStack_b0[2]);
      FUN_102a6b960(lVar8,0x112ee6128,&UNK_10db114e0);
    }
    func_0x000102a6b7d0(plVar16,FUN_102a9ded4);
  }
  return;
}



/* Entry: 102a6ef8c; end: 102a6efff;  */

void FUN_102a6ef8c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a6f000; end: 102a6f10f;  */

undefined8 FUN_102a6f000(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102a6f110; end: 102a6f153;  */

void FUN_102a6f110(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee62d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c8058;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ee62d0 = puVar1;
  return;
}



/* Entry: 102a6f154; end: 102a6f15b;  */

void FUN_102a6f154(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a6f15c; end: 102a6f2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102a6f15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63c0);
  *puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1[1] = puVar2;
  puVar1[2] = 0;
  *(undefined4 *)((long)puVar1 + 0x17) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _DAT_112ee63e0;
  func_0x000107c61614(unaff_x20 + _DAT_112ee63e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ee63e8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee63c8) = param_5;
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174(param_5);
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,puVar2);
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return puVar4;
}



/* Entry: 102a6f2b8; end: 102a6f2eb; -[_TtC32ShoppingLensProductPickerManager29ProductSelectionComponentView initWithCoder:] */

undefined8 FUN_102a6f2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102a6fef0();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 102a6f2ec; end: 102a6f45f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102a6f2ec(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uStack_70;
  long alStack_68 [3];
  
  lVar3 = 0;
  FUN_102a84318();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (ulong *)((long)&uStack_70 + lVar3);
  lVar7 = *(long *)(unaff_x20 + _DAT_112ee63d0);
  if (lVar7 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112ee63c0 + 8);
    func_0x000107c61428(lVar7 + 0x10,alStack_68,0,0);
    if (*(long *)(lVar7 + 0x28) != 0) {
      plVar4 = (long *)(lVar7 + 0x10);
      func_0x0001000a8868();
      lVar7 = *(long *)(*plVar4 + 0x188);
      if (lVar7 != 0) {
        uVar9 = *(ulong *)(*plVar4 + 0x180);
        uVar12 = *(ulong *)(lVar6 + 0x10);
        func_0x000107c61434(lVar6);
        func_0x000107c61434(lVar7);
        if (uVar12 != 0) {
          uVar8 = 0;
          do {
            if (*(ulong *)(lVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6f460);
              (*pcVar2)();
            }
            func_0x000102a6fe70(lVar6 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)) +
                                *(long *)(lVar11 + 0x48) * uVar8,puVar10);
            uVar5 = *puVar10;
            lVar1 = *(long *)((long)alStack_68 + lVar3);
            if (uVar5 == uVar9 && lVar7 == lVar1) {
              func_0x000102a6feb4(puVar10);
              goto LAB_102a6f42c;
            }
            func_0x000107c605b8(uVar5,lVar1,uVar9,lVar7,0);
            func_0x000102a6feb4(puVar10);
            if ((uVar5 & 1) != 0) goto LAB_102a6f42c;
            uVar8 = uVar8 + 1;
          } while (uVar12 != uVar8);
        }
        uVar8 = 0;
LAB_102a6f42c:
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar7);
        return uVar8;
      }
    }
  }
  return 0;
}



/* Entry: 102a6f460; end: 102a6f4bf; -[_TtC32ShoppingLensProductPickerManager29ProductSelectionComponentView initWithFrame:] */

void FUN_102a6f460(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensProductPickerManager.ProductSelectionComponentView",0x3e,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a6f48c);
  (*pcVar1)();
}



/* Entry: 102a6f4c0; end: 102a6f54f; -[_TtC32ShoppingLensProductPickerManager29ProductSelectionComponentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a6f4c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee63c0);
  uVar2 = *puVar1;
  uVar4 = puVar1[2];
  uVar3 = *(undefined1 *)(puVar1 + 3);
  func_0x000107c6142c(puVar1[1]);
  func_0x000107c6142c(uVar2);
  func_0x000102a633ec(uVar4,uVar3);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ee63c8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ee63d0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ee63d8));
  param_1 = param_1 + _DAT_112ee63e0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102a6f550; end: 102a6f56f;  */

void FUN_102a6f550(void)

{
  func_0x000107c61168(&PTR_PTR_112883238);
  return;
}



/* Entry: 102a6f570; end: 102a6f697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6f570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63c0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar10 = puVar1[2];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  uVar5 = *(undefined1 *)(puVar1 + 3);
  *(char *)(puVar1 + 3) = (char)param_4;
  *(char *)((long)puVar1 + 0x19) = (char)((ulong)param_4 >> 8);
  *(byte *)((long)puVar1 + 0x1a) = (byte)((ulong)param_4 >> 0x10) & 1;
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  FUN_102a633d8(param_3,param_4);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
  func_0x000102a633ec(uVar10,uVar5);
  plVar2 = (long *)(unaff_x20 + _DAT_112ee63d8);
  lVar9 = *plVar2;
  if ((lVar9 == 0) || ((param_5 & 1) != 0)) {
    FUN_102a6fd08(param_3,param_4);
    lVar9 = *plVar2;
    if (lVar9 == 0) {
      return;
    }
  }
  lVar7 = plVar2[1];
  lVar6 = lVar9;
  func_0x000107c614f0(lVar9);
  pcVar8 = *(code **)(lVar7 + 8);
  func_0x000107c615f0(lVar9);
  (*pcVar8)(lVar6,lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar9);
  return;
}



/* Entry: 102a6f698; end: 102a6f71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6f698(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_112ee63c0));
  return;
}



/* Entry: 102a6f71c; end: 102a6f863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6f71c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  long unaff_x20;
  long lVar4;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112ee63f0);
  if ((param_3 & 0xff) == 0) {
    uVar2 = param_3 & 0xff;
    uVar3 = 1;
  }
  else {
    uVar2 = param_1;
    if (((uint)param_3 & 0xff) != 1) {
      uVar2 = param_2;
    }
    uVar3 = 0;
  }
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 1) = uVar3;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ee63d0);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    FUN_102a6bda0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
    return;
  }
  return;
}



/* Entry: 102a6f864; end: 102a6f867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6f864(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112ee63f0);
  if ((param_3 & 0xff) == 0) {
    uVar2 = param_3 & 0xff;
    uVar3 = 1;
  }
  else {
    uVar2 = param_1;
    if (((uint)param_3 & 0xff) != 1) {
      uVar2 = param_2;
    }
    uVar3 = 0;
  }
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 1) = uVar3;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ee63d0);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    FUN_102a6bda0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
    return;
  }
  return;
}



/* Entry: 102a6f868; end: 102a6f89f;  */

void FUN_102a6f868(undefined8 param_1)

{
  func_0x000102a6f7b8(param_1,0x102a5f4e4);
  return;
}



/* Entry: 102a6f8a0; end: 102a6f8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6f8a0(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  long lVar2;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63f0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ee63d0);
  if (lVar2 != 0) {
    func_0x000107c615f0(lVar2);
    FUN_102a6ee2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 102a6f8f8; end: 102a6fd07;  */

/* WARNING: Possible PIC construction at 0x000102a6fa48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6fa90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6fae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6fbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6fc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6fc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6fcd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a6fc54) */
/* WARNING: Removing unreachable block (ram,0x000102a6fc80) */
/* WARNING: Removing unreachable block (ram,0x000102a6fcfc) */
/* WARNING: Removing unreachable block (ram,0x000102a6fc98) */
/* WARNING: Removing unreachable block (ram,0x000102a6fca8) */
/* WARNING: Removing unreachable block (ram,0x000102a6fcd0) */
/* WARNING: Removing unreachable block (ram,0x000102a6fcd4) */
/* WARNING: Removing unreachable block (ram,0x000102a6fc14) */
/* WARNING: Removing unreachable block (ram,0x000102a6fbc0) */
/* WARNING: Removing unreachable block (ram,0x000102a6fae8) */
/* WARNING: Removing unreachable block (ram,0x000102a6fa94) */
/* WARNING: Removing unreachable block (ram,0x000102a6fa4c) */
/* WARNING: Removing unreachable block (ram,0x000102a6fcd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6f8f8(ulong *param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  puVar3 = param_1;
  FUN_102a6f2ec();
  *(ulong **)(unaff_x20 + _DAT_112ee63e8) = puVar3;
  puVar2 = PTR__swift_isaMask_11034f488;
  pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x80);
  func_0x000107c615f0();
  (*pcVar6)();
  pcVar6 = *(code **)((*(ulong *)puVar2 & *param_1) + 0x68);
  func_0x000107c615f0();
  (*pcVar6)();
  plVar1 = (long *)(unaff_x20 + _DAT_112ee63d8);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar7 = plVar1[1];
    lVar4 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar6 = *(code **)(lVar7 + 0x10);
    func_0x000107c615f0(lVar5);
    (*pcVar6)(lVar4,lVar7);
    func_0x000107c615e8(lVar5);
    lVar5 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar5);
  func_0x000107c3d89c();
  func_0x000107c402b8();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    func_0x000100847984();
    lVar5 = 0;
    func_0x000107c5fc54(0,unaff_x20);
    unaff_x20 = lVar5;
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c4fec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 102a6fd08; end: 102a6fe2b;  */

/* WARNING: Possible PIC construction at 0x000102a6fd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6fe10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a6fd5c) */
/* WARNING: Removing unreachable block (ram,0x000102a6fda4) */
/* WARNING: Removing unreachable block (ram,0x000102a6fd60) */
/* WARNING: Removing unreachable block (ram,0x000102a6fdb8) */
/* WARNING: Removing unreachable block (ram,0x000102a6fd6c) */
/* WARNING: Removing unreachable block (ram,0x000102a6fde8) */
/* WARNING: Removing unreachable block (ram,0x000102a6fe14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6fd08(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ee63c8);
  func_0x000107c5dbd4(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102a6fe2c; end: 102a6feef;  */

long FUN_102a6fe2c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102a6fef0; end: 102a6ffc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6fef0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63c0);
  *puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1[1] = puVar2;
  puVar1[2] = 0;
  *(undefined4 *)((long)puVar1 + 0x17) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ee63e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ee63e8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee63f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0x6c706d6920746f4e,0xef6465746e656d65,
                      "ShoppingLensProductPickerManager/ProductSelectionComponentView.swift",0x44,2,
                      0x2b,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102a6ffc8);
  (*pcVar3)();
}



/* Entry: 102a6ffc8; end: 102a7004b;  */

undefined8 FUN_102a6ffc8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102a7004c; end: 102a700b7;  */

undefined8 * FUN_102a7004c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[2];
  uVar2 = *(undefined1 *)(param_2 + 3);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  FUN_102a633d8(uVar3,uVar2);
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar2;
  *(undefined2 *)((long)param_1 + 0x19) = *(undefined2 *)((long)param_2 + 0x19);
  return param_1;
}



/* Entry: 102a700b8; end: 102a7014b;  */

undefined8 * FUN_102a700b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  uVar4 = param_2[2];
  uVar1 = *(undefined1 *)(param_2 + 3);
  FUN_102a633d8(uVar4,uVar1);
  uVar3 = param_1[2];
  param_1[2] = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  func_0x000102a633ec(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  return param_1;
}



/* Entry: 102a7014c; end: 102a7015f;  */

void FUN_102a7014c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 0xb);
  *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_2 + 0x13);
  *(undefined8 *)((long)param_1 + 0xb) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 102a70160; end: 102a701c7;  */

undefined8 * FUN_102a70160(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c6142c(*param_1);
  uVar3 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x000107c6142c(uVar3);
  uVar1 = *(undefined1 *)(param_2 + 3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  uVar2 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  func_0x000102a633ec(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  return param_1;
}



/* Entry: 102a701c8; end: 102a703cf;  */

int FUN_102a701c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x1b) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a703d0; end: 102a7040f;  */

void FUN_102a703d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee6420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11964;
  func_0x000107c61520(&UNK_10db11964,&UNK_11058e958);
  puRam0000000112ee6420 = puVar1;
  return;
}



/* Entry: 102a70410; end: 102a70423;  */

bool FUN_102a70410(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a70424; end: 102a70513;  */

void FUN_102a70424(void)

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



/* Entry: 102a70514; end: 102a7058b;  */

void FUN_102a70514(double param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c4101c();
  if (((ulong)*(byte *)(unaff_x20 + 0x21) != 4) && (*(char *)(unaff_x20 + 0x20) != '\x01')) {
    func_0x000107c4bdd4(param_1 - *(double *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                        param_3,(ulong)*(byte *)(unaff_x20 + 0x21) + 1,param_2);
  }
  *(double *)(unaff_x20 + 0x18) = param_1;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 102a7058c; end: 102a705cf;  */

void FUN_102a7058c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a705d0; end: 102a706b3;  */

/* WARNING: Possible PIC construction at 0x000102a70688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7068c) */

void FUN_102a705d0(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x68);
  if (((lVar2 != 0) &&
      (((param_2 == *(ulong *)(unaff_x20 + 0x60) && lVar2 == param_3 ||
        (uVar1 = param_2, func_0x000107c605b8(param_2,param_3,*(ulong *)(unaff_x20 + 0x60),lVar2,0),
        (uVar1 & 1) != 0)) && (lVar2 = *(long *)(unaff_x20 + 0x58), lVar2 != 0)))) &&
     ((param_4 == *(ulong *)(unaff_x20 + 0x50) && lVar2 == param_5 ||
      (func_0x000107c605b8(param_4,param_5,*(ulong *)(unaff_x20 + 0x50),lVar2,0), (param_4 & 1) != 0
      )))) {
    return;
  }
  FUN_102a70794();
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  *(ulong *)(unaff_x20 + 0x60) = param_2;
  *(long *)(unaff_x20 + 0x68) = param_3;
  func_0x000107c61434(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102a706b4; end: 102a7071f;  */

void FUN_102a706b4(void)

{
  long unaff_x20;
  
  FUN_102a708cc(unaff_x20 + 0x18);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61640(unaff_x20 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a70720; end: 102a7078f;  */

void FUN_102a70720(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x10) == 4) ||
     ((uint)*(byte *)(unaff_x20 + 0x10) != ((uint)param_2 & 0xff))) {
    FUN_102a70794();
  }
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  *(char *)(unaff_x20 + 0x10) = (char)param_2;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102a60abc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102a70790; end: 102a70793;  */

void FUN_102a70790(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x10) == 4) ||
     ((uint)*(byte *)(unaff_x20 + 0x10) != ((uint)param_2 & 0xff))) {
    FUN_102a70794();
  }
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  *(char *)(unaff_x20 + 0x10) = (char)param_2;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102a60abc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102a70794; end: 102a708b3;  */

/* WARNING: Possible PIC construction at 0x000102a70858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a7088c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7085c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102a70890) */

void FUN_102a70794(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  double dStack_70;
  char cStack_68;
  
  lVar5 = *(long *)(unaff_x20 + 0x68);
  if ((((lVar5 != 0) && (lVar6 = *(long *)(unaff_x20 + 0x58), lVar6 != 0)) &&
      (cVar3 = *(char *)(unaff_x20 + 0x10), cVar3 != '\x04')) &&
     (*(char *)(unaff_x20 + 0x40) != '\x01')) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    dVar8 = *(double *)(unaff_x20 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c61434(lVar5);
    func_0x000107c61434(lVar6);
    func_0x000107c3ceac(uVar1);
    dStack_70 = param_1 - dVar8;
    plVar4 = (long *)(unaff_x20 + 0x70);
    uStack_90 = uVar7;
    lStack_88 = lVar5;
    uStack_80 = uVar2;
    lStack_78 = lVar6;
    cStack_68 = cVar3;
    func_0x000107c61648();
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xd8))(&uStack_90);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar6);
    return;
  }
  return;
}



/* Entry: 102a708b4; end: 102a708cb;  */

void FUN_102a708b4(void)

{
  return;
}



/* Entry: 102a708cc; end: 102a708ef;  */

undefined8 FUN_102a708cc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102a708f0; end: 102a70903;  */

/* WARNING: Possible PIC construction at 0x000102a70858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a7088c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7085c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102a70890) */

void FUN_102a708f0(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  double dStack_70;
  char cStack_68;
  
  lVar5 = *(long *)(unaff_x20 + 0x68);
  if ((((lVar5 != 0) && (lVar6 = *(long *)(unaff_x20 + 0x58), lVar6 != 0)) &&
      (cVar3 = *(char *)(unaff_x20 + 0x10), cVar3 != '\x04')) &&
     (*(char *)(unaff_x20 + 0x40) != '\x01')) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    dVar8 = *(double *)(unaff_x20 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c61434(lVar5);
    func_0x000107c61434(lVar6);
    func_0x000107c3ceac(uVar1);
    dStack_70 = param_1 - dVar8;
    plVar4 = (long *)(unaff_x20 + 0x70);
    uStack_90 = uVar7;
    lStack_88 = lVar5;
    uStack_80 = uVar2;
    lStack_78 = lVar6;
    cStack_68 = cVar3;
    func_0x000107c61648();
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xd8))(&uStack_90);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar6);
    return;
  }
  return;
}



/* Entry: 102a70904; end: 102a70923;  */

void FUN_102a70904(code *param_1)

{
  (*param_1)();
  return;
}



/* Entry: 102a70924; end: 102a70bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102a70924(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar1 = _DAT_112ee6670;
  ppuVar4 = &puStack_60;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ee6670);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d64f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = &UNK_11058eae8;
    func_0x000107c613fc(&UNK_11058eae8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_102a7117c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_102a70bf8;
    puStack_48 = &UNK_11058eb00;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c56ce0(puVar3);
    func_0x000107c60bd0(ppuVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ee6660);
    func_0x000107c5cb24(uVar5);
    func_0x000107c61180();
    func_0x000107c571e0(puVar3);
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102a70bf8; end: 102a70c4b;  */

void FUN_102a70bf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102a70c4c; end: 102a70d67;  */

void FUN_102a70c4c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  func_0x000102a70c8c(param_1,param_2);
  return;
}



/* Entry: 102a70d68; end: 102a70e07;  */

void FUN_102a70d68(void)

{
  func_0x000107c61168(&PTR_PTR_112883328);
  return;
}



/* Entry: 102a70e08; end: 102a70f2f;  */

/* WARNING: Possible PIC construction at 0x000102a70e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a70ed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a70e64) */
/* WARNING: Removing unreachable block (ram,0x000102a70ed4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a70e08(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c509b4();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ee6660);
    func_0x0001002ed07c();
    func_0x000107c61174(uVar1);
    param_1 = 1;
    func_0x000107c6010c(1);
    func_0x000107c4d664(uVar1);
    func_0x000107c61170(uVar1);
  }
  else {
    FUN_102a70924();
    func_0x000107c610f8(PTR_PTR_1126d64a8);
    func_0x000107c49520();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a70f30; end: 102a70fd7; -[_TtC35ShoppingLensComposerProductPickerUI27ComposerDPACtaContainerView initWithFrame:] */

void FUN_102a70f30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensComposerProductPickerUI.ComposerDPACtaContainerView",0x3f,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a70f5c);
  (*pcVar1)();
}



/* Entry: 102a70fd8; end: 102a7102f; -[_TtC35ShoppingLensComposerProductPickerUI27ComposerDPACtaContainerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a70ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a71014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a70ff8) */
/* WARNING: Removing unreachable block (ram,0x000102a71018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a70fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee6658));
  return;
}



/* Entry: 102a71030; end: 102a7111f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a71030(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112ee7040;
  func_0x000107c61428(lVar1,auStack_48,0,0);
  lVar2 = lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar1 + 8);
    lVar1 = lVar2;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c615e8(lVar2);
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x000107c6142c(lVar1);
    if (lVar2 != 0) {
      lVar1 = unaff_x20 + _DAT_112ee7038;
      func_0x000107c61428(lVar1,auStack_60,0,0);
      lVar2 = lVar1;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar1 + 8);
        lVar1 = lVar2;
        func_0x000107c614f0();
        (**(code **)(lVar3 + 8))(0,0,1,lVar1,lVar3);
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 102a71120; end: 102a7112b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a71120(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112ee7040;
  func_0x000107c61428(lVar1,auStack_48,0,0);
  lVar2 = lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar1 + 8);
    lVar1 = lVar2;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c615e8(lVar2);
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x000107c6142c(lVar1);
    if (lVar2 != 0) {
      lVar1 = unaff_x20 + _DAT_112ee7038;
      func_0x000107c61428(lVar1,auStack_60,0,0);
      lVar2 = lVar1;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar1 + 8);
        lVar1 = lVar2;
        func_0x000107c614f0();
        (**(code **)(lVar3 + 8))(0,0,1,lVar1,lVar3);
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 102a7112c; end: 102a7117b;  */

void FUN_102a7112c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ee66a0 != 0) {
    return;
  }
  puVar1 = &UNK_11058eac8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ee66a0 = param_1;
  return;
}



/* Entry: 102a7117c; end: 102a711c3;  */

void FUN_102a7117c(ulong param_1)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if ((param_1 & 1) != 0) {
    pcVar1 = "context";
    func_0x0001000c10c0("context");
    func_0x000107c61180();
    puVar2 = &UNK_11058eae8;
    func_0x000107c613fc(&UNK_11058eae8,0x18,7);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618(lVar3);
    func_0x000107c61614(puVar2 + 0x10,lVar3);
    func_0x000107c61170(lVar3);
    uStack_58 = 0x102a711a0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11058eb28;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 102a711c4; end: 102a7126f;  */

void FUN_102a711c4(void)

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



/* Entry: 102a71270; end: 102a7129f;  */

undefined1 FUN_102a71270(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0x10);
}



/* Entry: 102a712a0; end: 102a712db;  */

void FUN_102a712a0(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102a712dc; end: 102a7130b;  */

undefined1  [16] FUN_102a712dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_102a7130c;
  return auVar1;
}



/* Entry: 102a7130c; end: 102a7131f;  */

void FUN_102a7130c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102a71320; end: 102a7161b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102a71320(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar10 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  ppuVar13 = &puStack_a0;
  puVar3 = PTR_PTR_1126abe40;
  func_0x000107c610f8(PTR_PTR_1126abe40);
  func_0x000107c453e4();
  uVar4 = (ulong)*(uint *)(unaff_x20 + _DAT_112ee66d0);
  func_0x000107c60660(uVar4);
  func_0x000107c5421c(puVar3);
  func_0x000107c61170(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ee66a8);
  func_0x000107c5cb24(uVar5);
  func_0x000107c61180();
  func_0x000107c5a588(puVar3);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ee66b0);
  func_0x000107c5cb24(uVar5);
  func_0x000107c61180();
  func_0x000107c5219c(puVar3);
  func_0x000107c61170(uVar5);
  puVar9 = &UNK_11058eb68;
  puVar6 = puVar9;
  func_0x000107c613fc(&UNK_11058eb68,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = puVar9;
  func_0x000107c613fc(&UNK_11058eb68,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar8 = puVar9;
  func_0x000107c613fc(&UNK_11058eb68,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  func_0x000107c613fc(&UNK_11058eb68,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102a732f8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102a71c3c;
  puStack_88 = &UNK_11058ec58;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c56ce8(puVar3);
  func_0x000107c60bd0(ppuVar10);
  uStack_80 = 0x102a73328;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102a71c3c;
  puStack_88 = &UNK_11058ec80;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c56da4(puVar3);
  func_0x000107c60bd0(ppuVar11);
  uStack_80 = 0x102a73358;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102a71c3c;
  puStack_88 = &UNK_11058eca8;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar2);
  func_0x000107c56f38(puVar3);
  func_0x000107c60bd0(ppuVar12);
  uStack_80 = 0x102a73388;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102a71c3c;
  puStack_88 = &UNK_11058ecd0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar1);
  func_0x000107c56c68(puVar3);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  return puVar3;
}



/* Entry: 102a7161c; end: 102a71713;  */

void FUN_102a7161c(double param_1,long param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  puVar2 = (ulong *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (ulong *)0x0) {
    puVar3 = puVar2;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x60))();
    func_0x000107c61170(puVar2);
    if (puVar3 != (ulong *)0x0) {
      puVar2 = puVar3;
      func_0x000107c614f0(puVar3);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a7170c);
        (*pcVar1)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71710);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71714);
        (*pcVar1)();
      }
      (**(code **)(puVar4 + 0x10))((long)param_1,puVar2,puVar4);
      func_0x000107c615e8(puVar3);
    }
  }
  return;
}



/* Entry: 102a71714; end: 102a7194b;  */

void FUN_102a71714(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_c0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  puVar8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_102a733f0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar4 = &UNK_11058eb68;
  func_0x000107c613fc(&UNK_11058eb68,0x18,7);
  func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618(param_4);
  func_0x000107c61614(puVar4 + 0x10,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined **)(param_5 + 0x10) = puVar4;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  ppuVar5 = &puStack_b8;
  uStack_a0 = param_7;
  uStack_98 = param_6;
  lStack_90 = param_5;
  func_0x000107c60bc4(ppuVar5);
  lVar2 = lStack_90;
  func_0x000107c61574(lStack_90);
  func_0x000107c5f808(lVar10);
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar8,&puStack_b8,uVar6,uVar7,lVar1,lVar2);
  func_0x000107c5ffe8(0,lVar10,puVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  (**(code **)(lStack_c0 + 8))(puVar8,lVar1);
  (**(code **)(lVar9 + 8))(lVar10,lStack_c8);
  return;
}



/* Entry: 102a7194c; end: 102a71c3b;  */

void FUN_102a7194c(double param_1,long param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  puVar2 = (ulong *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (ulong *)0x0) {
    puVar3 = puVar2;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x60))();
    func_0x000107c61170(puVar2);
    if (puVar3 != (ulong *)0x0) {
      puVar2 = puVar3;
      func_0x000107c614f0(puVar3);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71a44);
        (*pcVar1)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71a48);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71a4c);
        (*pcVar1)();
      }
      (**(code **)(puVar4 + 8))((long)param_1,0,1,puVar2,puVar4);
      func_0x000107c615e8(puVar3);
    }
  }
  return;
}



/* Entry: 102a71c3c; end: 102a71cc3;  */

/* WARNING: Possible PIC construction at 0x000102a71ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a71ca8) */

void FUN_102a71c3c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_1,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102a71cc4; end: 102a71d03;  */

void FUN_102a71cc4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_102a71d04(param_1,param_2);
  return;
}



/* Entry: 102a71d04; end: 102a71e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a71d04(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112ee66a8;
  puVar3 = &stack0xffffffffffffffb0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ee66b0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ee66b8;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ee66c0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ee66c8) = 0;
  *(undefined4 *)(unaff_x20 + _DAT_112ee66d0) = param_2;
  FUN_102a71e10();
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_102a71ecc(param_1);
  FUN_102a721f4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 102a71e10; end: 102a71e2f;  */

void FUN_102a71e10(void)

{
  func_0x000107c61168(&PTR_PTR_112883498);
  return;
}



/* Entry: 102a71e30; end: 102a71ecb;  */

void FUN_102a71e30(void)

{
  code *pcVar1;
  
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  func_0x000107c610f8(PTR_PTR_1126ae810);
  func_0x000107c453e4();
  func_0x000107c60450("Fatal error",0xb,2,0x6c706d6920746f4e,0xef6465746e656d65,
                      "ShoppingLensComposerProductPickerUI/ComposerProductPickerView.swift",0x43,2,
                      0x5a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71ecc);
  (*pcVar1)();
}



/* Entry: 102a71ecc; end: 102a721f3;  */

/* WARNING: Possible PIC construction at 0x000102a71f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a71f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a71f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a7203c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a72090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a720e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a72138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a72184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a72194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a72188) */
/* WARNING: Removing unreachable block (ram,0x000102a7213c) */
/* WARNING: Removing unreachable block (ram,0x000102a720e8) */
/* WARNING: Removing unreachable block (ram,0x000102a72094) */
/* WARNING: Removing unreachable block (ram,0x000102a72040) */
/* WARNING: Removing unreachable block (ram,0x000102a71f80) */
/* WARNING: Removing unreachable block (ram,0x000102a71f5c) */
/* WARNING: Removing unreachable block (ram,0x000102a71f10) */
/* WARNING: Removing unreachable block (ram,0x000102a721b8) */
/* WARNING: Removing unreachable block (ram,0x000102a71f14) */
/* WARNING: Removing unreachable block (ram,0x000102a721d4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102a71f28) */
/* WARNING: Removing unreachable block (ram,0x000102a72198) */

void FUN_102a71ecc(undefined8 param_1)

{
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a721f4; end: 102a7232f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a721f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee66b8);
  FUN_102a732d8();
  func_0x000107c613fc();
  puVar5 = (undefined1 *)(param_1 + 0x10);
  *puVar5 = 0;
  func_0x000107c61428(puVar5,auStack_48,1,0);
  *puVar5 = 0;
  func_0x000107c61174(uVar4);
  func_0x000107c4d664();
  func_0x000107c61170(uVar4);
  func_0x000107c61574(param_1);
  lVar1 = *(long *)(unaff_x20 + _DAT_112ee66c8);
  if (lVar1 != 0) {
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar2 = &UNK_11058eb68;
      func_0x000107c613fc(&UNK_11058eb68,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      uStack_58 = 0x102a733e8;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000b0c7c;
      puStack_60 = &UNK_11058ee38;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c5e080(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102a72330; end: 102a7244b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a72330(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ee66b8);
    func_0x000107c61174(uVar2);
    func_0x000107c61170();
    FUN_102a732d8();
    func_0x000107c613fc();
    puVar3 = (undefined1 *)(lVar1 + 0x10);
    *puVar3 = 0;
    func_0x000107c61428(puVar3,auStack_70,1,0);
    *puVar3 = 1;
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ee66b8);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c3fedc(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102a7244c; end: 102a72503; -[_TtC35ShoppingLensComposerProductPickerUI25ComposerProductPickerView initWithFrame:] */

void FUN_102a7244c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensComposerProductPickerUI.ComposerProductPickerView",0x3d,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a72478);
  (*pcVar1)();
}



/* Entry: 102a72504; end: 102a7256b; -[_TtC35ShoppingLensComposerProductPickerUI25ComposerProductPickerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a72520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a72540: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a72524) */
/* WARNING: Removing unreachable block (ram,0x000102a72544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a72504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee66a8));
  return;
}



/* Entry: 102a7256c; end: 102a7281f;  */

undefined8 FUN_102a7256c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  FUN_102a84318();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x2c));
  lVar14 = puVar1[1];
  if (lVar14 == 0) {
    lStack_70 = *(long *)(param_1 + 0x18);
    if (lStack_70 == 0) {
      uStack_78 = 0;
      lStack_70 = -0x2000000000000000;
    }
    else {
      uStack_78 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c61434();
    }
  }
  else {
    uStack_78 = *puVar1;
    lStack_70 = lVar14;
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  lVar11 = puVar1[1];
  if (lVar11 == 0) {
    lVar10 = *(long *)(param_1 + 0x38);
    if (lVar10 == 0) {
      uStack_80 = 0;
      lVar10 = -0x2000000000000000;
    }
    else {
      uStack_80 = *(undefined8 *)(param_1 + 0x30);
      func_0x000107c61434(lVar10);
    }
  }
  else {
    uStack_80 = *puVar1;
    lVar10 = lVar11;
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  lVar13 = puVar1[1];
  if (lVar13 == 0) {
    lVar12 = *(long *)(param_1 + 0x48);
    if (lVar12 == 0) {
      uStack_88 = 0;
      lVar12 = -0x2000000000000000;
    }
    else {
      uStack_88 = *(undefined8 *)(param_1 + 0x40);
      func_0x000107c61434(lVar12);
    }
  }
  else {
    uStack_88 = *puVar1;
    lVar12 = lVar13;
  }
  func_0x000100029394(param_1 + *(int *)(lVar2 + 0x24),puVar8);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  uVar7 = 1;
  puVar3 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,lVar2);
  func_0x000107c61434(lVar13);
  func_0x000107c61434(lVar14);
  func_0x000107c61434(lVar11);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar8);
    lVar11 = 0;
    uVar7 = 0xe000000000000000;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar9 + 8))(puVar8,lVar2);
  }
  func_0x000107c614e8(unaff_x20);
  func_0x000107c610f8();
  uVar4 = 0;
  func_0x000107c2bb54(0);
  func_0x000107c61180();
  func_0x000107c5fadc(lVar11,uVar7);
  func_0x000107c6142c(uVar7);
  lVar2 = lStack_70;
  uVar7 = uStack_78;
  func_0x000107c5fadc(uStack_78,lStack_70);
  func_0x000107c6142c(lVar2);
  uVar5 = uStack_80;
  func_0x000107c5fadc(uStack_80,lVar10);
  func_0x000107c6142c(lVar10);
  uVar6 = uStack_88;
  func_0x000107c5fadc(uStack_88,lVar12);
  func_0x000107c6142c(lVar12);
  func_0x000107c48120(unaff_x20);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000102a6feb4(param_1);
  return unaff_x20;
}



/* Entry: 102a72820; end: 102a72a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a72820(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar8 = unaff_x20 + _DAT_112ee7040;
  func_0x000107c61428(lVar8,auStack_58,0,0);
  lVar1 = lVar8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar7 = *(long *)(lVar8 + 8);
    lVar8 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar7 + 0x10))();
    lVar8 = *(long *)(lVar8 + 0x10);
    func_0x000107c6142c();
    if (lVar8 == 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ee66a8);
      puVar3 = PTR_PTR_1126abe20;
      func_0x000107c610f8(PTR_PTR_1126abe20);
      func_0x000107c61174(uVar6);
      uVar4 = 0;
      func_0x000107c2bb54(0);
      func_0x000107c61180();
      uVar5 = 0;
      FUN_102a733f0(0,0x112ee66d8,&PTR_PTR_1126abe28);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
      func_0x000107c472f8(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar9);
      func_0x000107c4d664(uVar6);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar6);
    }
    else {
      puVar9 = *(undefined **)(unaff_x20 + _DAT_112ee66b8);
      puVar3 = &UNK_11058eb68;
      func_0x000107c613fc(&UNK_11058eb68,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      pcStack_68 = FUN_102a7310c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11058eb80;
      ppuVar2 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar2);
      puVar3 = puStack_60;
      func_0x000107c61174(puVar9);
      func_0x000107c61574(puVar3);
      puVar3 = puVar9;
      func_0x000107c5c318(puVar9);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(puVar9);
      func_0x000107c3e924(puVar3);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(puVar3);
  }
  return;
}


