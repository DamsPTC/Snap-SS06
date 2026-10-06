/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4afcb8; end: 10b4afd2f;  */

void FUN_10b4afcb8(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_10b4b0c90();
  return;
}



/* Entry: 10b4afd30; end: 10b4afd37;  */

void FUN_10b4afd30(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x21;
  undefined *apuStack_48 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar1 = param_2 + 0x10;
    func_0x00010549026c();
    func_0x00010b4b0e68();
    func_0x00010b4b0db0();
    func_0x000107c278b8();
    func_0x00010b4b0f34();
    func_0x00010b4b0d90();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar6 = apuStack_48[0];
    func_0x00010b4b0eb0();
    if (((ulong)puVar6 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4b0ea8();
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x30);
    func_0x0001072833b8();
    uVar3 = *puVar2;
    func_0x00010b4b0f2c();
    func_0x00010b4b0e68();
    func_0x00010b4b0db0();
    uVar7 = 0;
    func_0x000107c278b8();
    func_0x00010b4b0d64();
    *(undefined8 *)(unaff_x21 + 8) = uVar3;
    func_0x00010b4b0e9c();
    if ((uVar7 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4b0ea8();
    func_0x00010b4b0f24();
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x40);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    func_0x00010b4aa6d4();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x50);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4a9718();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    lVar1 = param_2 + 0x60;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa71c(param_1,"ad_serve_item_id",lVar1);
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    lVar1 = param_2 + 0x80;
    func_0x00010549026c(lVar1);
    func_0x00010b4a7eb8(param_1,&DAT_10f773136,lVar1);
  }
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    lVar1 = param_2 + 0xa0;
    func_0x00010549026c();
    func_0x00010b4b0e68();
    func_0x00010b4b0db0();
    func_0x000107c278b8();
    func_0x00010b4b0f34();
    func_0x00010b4b0d90();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar6 = apuStack_48[0];
    func_0x00010b4b0eb0();
    if (((ulong)puVar6 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4b0ea8();
  }
  if (*(char *)(param_2 + 200) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xc0);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    func_0x00010b4a7ea0();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xd0);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4a89c8();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xe0);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4afa90();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xf0);
    func_0x0001072833b8();
    uVar3 = *puVar2;
    func_0x00010b4b0f2c();
    func_0x00010b4b0e68();
    func_0x00010b4b0db0();
    puVar6 = &DAT_10f7731a9;
    func_0x000107c278b8();
    func_0x00010b4b0d64();
    *(undefined8 *)(unaff_x21 + 8) = uVar3;
    func_0x00010b4b0e9c();
    if (((ulong)puVar6 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4b0ea8();
    func_0x00010b4b0f24();
  }
  if (*(char *)(param_2 + 0x108) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x100);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4ae2ac();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x118) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x110);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4afa90();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x128) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x120);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4afa90();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x138) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x130);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    func_0x00010b4a89f8();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x148) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x140);
    func_0x0001072833b8();
    uVar3 = *puVar2;
    func_0x00010b4b0f2c();
    func_0x00010b4b0e68();
    func_0x00010b4b0db0();
    puVar6 = &DAT_10f773247;
    func_0x000107c278b8();
    func_0x00010b4b0d64();
    *(undefined8 *)(unaff_x21 + 8) = uVar3;
    func_0x00010b4b0e9c();
    if (((ulong)puVar6 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4b0ea8();
    func_0x00010b4b0f24();
  }
  if (*(char *)(param_2 + 0x158) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x150);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4afaf8();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x168) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x160);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    func_0x00010b4a89f8();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x178) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x170);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4afaf8();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x188) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x180);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    func_0x00010b4aa7dc();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x194) == '\x01') {
    piVar4 = (int *)(param_2 + 400);
    func_0x00010b4afb78();
    apuStack_48[0] = (&PTR_DAT_110cef790)[*piVar4];
    func_0x00010b4b0e80();
    func_0x00010b4afb60();
  }
  if (*(char *)(param_2 + 0x19c) == '\x01') {
    func_0x00010b4afb90();
    func_0x00010b4b0e68();
    func_0x00010b4b0db0();
    func_0x000107c278b8();
    lVar1 = unaff_x21 + 0x28;
    func_0x00010b4b0f0c();
    func_0x00010b4b0d90();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar6 = apuStack_48[0];
    func_0x00010b4b0eb0();
    if (((ulong)puVar6 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4b0ea8();
  }
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x1a0);
    func_0x0001072833b8();
    func_0x00010b4b0e70(*puVar2);
    func_0x00010b4b0e80();
    FUN_10b4afaf8();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 0x1b4) == '\x01') {
    piVar4 = (int *)(param_2 + 0x1b0);
    func_0x00010b4afbc0();
    apuStack_48[0] = (&PTR_s_SYNC_ATTEMPT_110cef7c0)[*piVar4];
    func_0x00010b4b0e80();
    func_0x00010b4afba8();
  }
  if (*(char *)(param_2 + 0x1bc) == '\x01') {
    piVar4 = (int *)(param_2 + 0x1b8);
    FUN_10b4afc3c();
    FUN_10b4afbd8(param_1,&DAT_10f773343,(&PTR_DAT_110cef7d0)[*piVar4]);
  }
  if (*(char *)(param_2 + 0x1c4) == '\x01') {
    piVar4 = (int *)(param_2 + 0x1c0);
    FUN_10b4afcb8();
    FUN_10b4afc54(param_1,&DAT_10f773360,(&PTR_s_UNSET_110cef818)[*piVar4]);
  }
  if (*(char *)(param_2 + 0x1cc) == '\x01') {
    piVar4 = (int *)(param_2 + 0x1c8);
    func_0x00010b4afcd0();
    FUN_10b4afbd8(param_1,&DAT_10f773381,(&PTR_DAT_110cef878)[*piVar4]);
  }
  if (*(char *)(param_2 + 0x1d4) == '\x01') {
    piVar4 = (int *)(param_2 + 0x1d0);
    func_0x00010b4afce8();
    FUN_10b4afc54(param_1,&DAT_10f77339e,(&PTR_DAT_110cef8c8)[*piVar4]);
  }
  if (*(char *)(param_2 + 0x1dc) == '\x01') {
    piVar4 = (int *)(param_2 + 0x1d8);
    func_0x00010b4afd18();
    apuStack_48[0] = (&PTR_DAT_110cef8f8)[*piVar4];
    func_0x00010b4b0e80();
    func_0x00010b4afd00();
  }
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x1e0);
    func_0x0001072833b8();
    uVar3 = *puVar2;
    func_0x00010b4b0f2c();
    func_0x00010b4b0e68();
    func_0x00010b4b0db0();
    puVar6 = &DAT_10f7733db;
    func_0x000107c278b8();
    func_0x00010b4b0d64();
    *(undefined8 *)(unaff_x21 + 8) = uVar3;
    func_0x00010b4b0e9c();
    if (((ulong)puVar6 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4b0ea8();
    func_0x00010b4b0f24();
  }
  if (*(char *)(param_2 + 0x1f1) == '\x01') {
    puVar5 = (undefined1 *)(param_2 + 0x1f0);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(apuStack_48,*puVar5);
    func_0x00010b4b0e80();
    func_0x00010b4aa6d4();
    func_0x00010b4b0e60();
  }
  if (*(char *)(param_2 + 499) == '\x01') {
    puVar5 = (undefined1 *)(param_2 + 0x1f2);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(apuStack_48,*puVar5);
    func_0x00010b4b0e80();
    func_0x00010b4abe5c();
    func_0x00010b4b0e60();
  }
  return;
}



/* Entry: 10b4afd38; end: 10b4b0a87;  */

undefined8 * FUN_10b4afd38(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) goto LAB_10b4afde8;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4afdc0;
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4afdc4;
    }
    if ((*(byte *)(param_2 + 0x40) & 1) != 0) goto LAB_10b4afe0c;
    bVar1 = false;
LAB_10b4afe40:
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_10b4afe98;
    if (bVar1) {
      bVar1 = true;
LAB_10b4afe78:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x20;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,4,uVar4);
      goto LAB_10b4afe98;
    }
LAB_10b4afe64:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4afe78;
    }
    if ((*(byte *)(param_2 + 0x60) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4afebc;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4afef0:
    if ((*(byte *)(param_2 + 0x80) & 1) == 0) goto LAB_10b4aff44;
    if (bVar1) {
      bVar1 = true;
LAB_10b4aff28:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 8;
      func_0x00010b4b0f14();
      func_0x00010b4b0f74();
      func_0x00010b4a7a18();
      goto LAB_10b4aff44;
    }
LAB_10b4aff14:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4aff28;
    }
    if ((*(byte *)(param_2 + 0xa0) & 1) != 0) goto LAB_10b4aff68;
    bVar1 = false;
LAB_10b4aff98:
    if ((*(byte *)(param_2 + 0xc0) & 1) == 0) goto LAB_10b4affec;
    if (bVar1) {
      bVar1 = true;
LAB_10b4affd0:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
      func_0x00010b4b0f14();
      func_0x00010b4b0f74();
      func_0x00010b4a7a18();
      goto LAB_10b4affec;
    }
LAB_10b4affbc:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4affd0;
    }
    if ((*(byte *)(param_2 + 0xd0) & 1) != 0) goto LAB_10b4b0010;
    bVar1 = false;
LAB_10b4b0044:
    if ((*(byte *)(param_2 + 0xe0) & 1) == 0) goto LAB_10b4b009c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b007c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x80;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,10,uVar4);
      goto LAB_10b4b009c;
    }
LAB_10b4b0068:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b007c;
    }
    if ((*(byte *)(param_2 + 0xf0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b00c0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b00f4:
    if ((*(byte *)(param_2 + 0x100) & 1) == 0) goto LAB_10b4b014c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b012c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x20;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0xc,uVar4);
      goto LAB_10b4b014c;
    }
LAB_10b4b0118:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b012c;
    }
    if ((*(byte *)(param_2 + 0x110) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0170;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b01a4:
    if ((*(byte *)(param_2 + 0x120) & 1) == 0) goto LAB_10b4b01fc;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b01dc:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 8;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0xe,uVar4);
      goto LAB_10b4b01fc;
    }
LAB_10b4b01c8:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b01dc;
    }
    if ((*(byte *)(param_2 + 0x130) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0220;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b0254:
    if ((*(byte *)(param_2 + 0x140) & 1) == 0) goto LAB_10b4b02ac;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b028c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 2;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x10,uVar4);
      goto LAB_10b4b02ac;
    }
LAB_10b4b0278:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b028c;
    }
    if ((*(byte *)(param_2 + 0x150) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b02d0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b0304:
    if ((*(byte *)(param_2 + 0x160) & 1) == 0) goto LAB_10b4b035c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b033c:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x80;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x12,uVar4);
      goto LAB_10b4b035c;
    }
LAB_10b4b0328:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b033c;
    }
    if ((*(byte *)(param_2 + 0x170) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0380;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b03b4:
    if ((*(byte *)(param_2 + 0x180) & 1) == 0) goto LAB_10b4b040c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b03ec:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x20;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x14,uVar4);
      goto LAB_10b4b040c;
    }
LAB_10b4b03d8:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b03ec;
    }
    if ((*(byte *)(param_2 + 400) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0430;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b0464:
    if ((*(byte *)(param_2 + 0x19c) & 1) == 0) goto LAB_10b4b04c0;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b049c:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 8;
      func_0x00010b4afb78((undefined4 *)(param_2 + 0x198));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x16,*(undefined4 *)(param_2 + 0x198));
      goto LAB_10b4b04c0;
    }
LAB_10b4b0488:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b049c;
    }
    if ((*(byte *)(param_2 + 0x1a4) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b04e4;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b051c:
    if ((*(byte *)(param_2 + 0x1b0) & 1) == 0) goto LAB_10b4b0574;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0554:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 2;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x18,uVar4);
      goto LAB_10b4b0574;
    }
LAB_10b4b0540:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0554;
    }
    if ((*(byte *)(param_2 + 0x1bc) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0598;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b05d0:
    if ((*(byte *)(param_2 + 0x1c4) & 1) == 0) goto LAB_10b4b062c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0608:
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 0x80;
      FUN_10b4afc3c((undefined4 *)(param_2 + 0x1c0));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x1a,*(undefined4 *)(param_2 + 0x1c0));
      goto LAB_10b4b062c;
    }
LAB_10b4b05f4:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0608;
    }
    if ((*(byte *)(param_2 + 0x1cc) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0650;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b0688:
    if ((*(byte *)(param_2 + 0x1d4) & 1) == 0) goto LAB_10b4b06e4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b06c0:
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 0x20;
      func_0x00010b4afcd0((undefined4 *)(param_2 + 0x1d0));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x1c,*(undefined4 *)(param_2 + 0x1d0));
      goto LAB_10b4b06e4;
    }
LAB_10b4b06ac:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b06c0;
    }
    if ((*(byte *)(param_2 + 0x1dc) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0708;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b0740:
    if ((*(byte *)(param_2 + 0x1e4) & 1) == 0) goto LAB_10b4b079c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0778:
      puVar3 = (undefined4 *)(param_2 + 0x1e0);
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 8;
      func_0x00010b4afd18();
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x1e,*puVar3);
      goto LAB_10b4b079c;
    }
LAB_10b4b0764:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0778;
    }
    if ((*(byte *)(param_2 + 0x1f0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b07c0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b07f4:
    if ((*(byte *)(param_2 + 0x1f9) & 1) == 0) goto LAB_10b4b0850;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b082c:
      puVar5 = (undefined1 *)(param_2 + 0x1f8);
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 2;
      func_0x000107c29334();
      puVar2 = auStack_d0;
      func_0x00010b4a790c(puVar2,0x20,*puVar5);
      goto LAB_10b4b0850;
    }
LAB_10b4b0818:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b082c;
    }
    if ((*(byte *)(param_2 + 0x1fb) & 1) == 0) goto LAB_10b4b0894;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b0860:
    func_0x00010b4b0da4();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4b0894;
  }
  else {
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4afdc0:
      bVar1 = true;
LAB_10b4afdc4:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x80;
      func_0x00010b4b0f14();
      func_0x00010b4b0f74();
      func_0x00010b4a7a18();
    }
LAB_10b4afde8:
    if ((*(byte *)(param_2 + 0x40) & 1) == 0) goto LAB_10b4afe40;
    if (bVar1) {
      bVar1 = true;
LAB_10b4afe20:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x40;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,3,uVar4);
      goto LAB_10b4afe40;
    }
LAB_10b4afe0c:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4afe20;
    }
    if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4afe64;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4afe98:
    if ((*(byte *)(param_2 + 0x60) & 1) == 0) goto LAB_10b4afef0;
    if (bVar1) {
      bVar1 = true;
LAB_10b4afed0:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x10;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,5,uVar4);
      goto LAB_10b4afef0;
    }
LAB_10b4afebc:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4afed0;
    }
    puVar2 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 0x80) & 1) != 0) goto LAB_10b4aff14;
    bVar1 = false;
LAB_10b4aff44:
    if ((*(byte *)(param_2 + 0xa0) & 1) == 0) goto LAB_10b4aff98;
    if (bVar1) {
      bVar1 = true;
LAB_10b4aff7c:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 4;
      func_0x00010b4b0f14();
      func_0x00010b4b0f74();
      func_0x00010b4a7a18();
      goto LAB_10b4aff98;
    }
LAB_10b4aff68:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4aff7c;
    }
    if ((*(byte *)(param_2 + 0xc0) & 1) != 0) goto LAB_10b4affbc;
    bVar1 = false;
LAB_10b4affec:
    if ((*(byte *)(param_2 + 0xd0) & 1) == 0) goto LAB_10b4b0044;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0024:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 1;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,9,uVar4);
      goto LAB_10b4b0044;
    }
LAB_10b4b0010:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0024;
    }
    if ((*(byte *)(param_2 + 0xe0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0068;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b009c:
    if ((*(byte *)(param_2 + 0xf0) & 1) == 0) goto LAB_10b4b00f4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b00d4:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x40;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0xb,uVar4);
      goto LAB_10b4b00f4;
    }
LAB_10b4b00c0:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b00d4;
    }
    if ((*(byte *)(param_2 + 0x100) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0118;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b014c:
    if ((*(byte *)(param_2 + 0x110) & 1) == 0) goto LAB_10b4b01a4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0184:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x10;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0xd,uVar4);
      goto LAB_10b4b01a4;
    }
LAB_10b4b0170:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0184;
    }
    if ((*(byte *)(param_2 + 0x120) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b01c8;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b01fc:
    if ((*(byte *)(param_2 + 0x130) & 1) == 0) goto LAB_10b4b0254;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0234:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 4;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0xf,uVar4);
      goto LAB_10b4b0254;
    }
LAB_10b4b0220:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0234;
    }
    if ((*(byte *)(param_2 + 0x140) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0278;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b02ac:
    if ((*(byte *)(param_2 + 0x150) & 1) == 0) goto LAB_10b4b0304;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b02e4:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 1;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x11,uVar4);
      goto LAB_10b4b0304;
    }
LAB_10b4b02d0:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b02e4;
    }
    if ((*(byte *)(param_2 + 0x160) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0328;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b035c:
    if ((*(byte *)(param_2 + 0x170) & 1) == 0) goto LAB_10b4b03b4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0394:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x40;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x13,uVar4);
      goto LAB_10b4b03b4;
    }
LAB_10b4b0380:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0394;
    }
    if ((*(byte *)(param_2 + 0x180) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b03d8;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b040c:
    if ((*(byte *)(param_2 + 400) & 1) == 0) goto LAB_10b4b0464;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0444:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x10;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x15,uVar4);
      goto LAB_10b4b0464;
    }
LAB_10b4b0430:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0444;
    }
    if ((*(byte *)(param_2 + 0x19c) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0488;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b04c0:
    if ((*(byte *)(param_2 + 0x1a4) & 1) == 0) goto LAB_10b4b051c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b04f8:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 4;
      func_0x00010b4afb90((undefined4 *)(param_2 + 0x1a0));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x17,*(undefined4 *)(param_2 + 0x1a0));
      goto LAB_10b4b051c;
    }
LAB_10b4b04e4:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b04f8;
    }
    if ((*(byte *)(param_2 + 0x1b0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0540;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b0574:
    if ((*(byte *)(param_2 + 0x1bc) & 1) == 0) goto LAB_10b4b05d0;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b05ac:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 1;
      func_0x00010b4afbc0((undefined4 *)(param_2 + 0x1b8));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x19,*(undefined4 *)(param_2 + 0x1b8));
      goto LAB_10b4b05d0;
    }
LAB_10b4b0598:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b05ac;
    }
    if ((*(byte *)(param_2 + 0x1c4) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b05f4;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b062c:
    if ((*(byte *)(param_2 + 0x1cc) & 1) == 0) goto LAB_10b4b0688;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b0664:
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 0x40;
      FUN_10b4afcb8((undefined4 *)(param_2 + 0x1c8));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x1b,*(undefined4 *)(param_2 + 0x1c8));
      goto LAB_10b4b0688;
    }
LAB_10b4b0650:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b0664;
    }
    if ((*(byte *)(param_2 + 0x1d4) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b06ac;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b06e4:
    if ((*(byte *)(param_2 + 0x1dc) & 1) == 0) goto LAB_10b4b0740;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b071c:
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 0x10;
      func_0x00010b4afce8((undefined4 *)(param_2 + 0x1d8));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x1d,*(undefined4 *)(param_2 + 0x1d8));
      goto LAB_10b4b0740;
    }
LAB_10b4b0708:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b071c;
    }
    if ((*(byte *)(param_2 + 0x1e4) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0764;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b079c:
    if ((*(byte *)(param_2 + 0x1f0) & 1) == 0) goto LAB_10b4b07f4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b07d4:
      *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 4;
      func_0x00010b4b0e44();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x1f,uVar4);
      goto LAB_10b4b07f4;
    }
LAB_10b4b07c0:
    func_0x00010b4b0da4();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b07d4;
    }
    if ((*(byte *)(param_2 + 0x1f9) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b0818;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b0850:
    if ((*(byte *)(param_2 + 0x1fb) & 1) == 0) goto LAB_10b4b0894;
    if (!bVar1) goto LAB_10b4b0860;
  }
  puVar5 = (undefined1 *)(param_2 + 0x1fa);
  *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 1;
  func_0x000107c29334();
  func_0x00010b4a790c(auStack_d0,0x21,*puVar5);
LAB_10b4b0894:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x10,4);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = auStack_d0;
    FUN_10b4a8238();
    func_0x00010b4b0eb8();
    *puVar2 = &PTR_FUN_110cef708;
    puVar2[1] = &PTR_FUN_110cef770;
    func_0x000107c279a4(puVar2 + 0x15);
    func_0x000107c279a4(puVar2 + 0x11);
    func_0x000107c279a4(puVar2 + 0xd);
    func_0x000107c279a4(puVar2 + 3);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4b0a88; end: 10b4b0a8b;  */

undefined8 * FUN_10b4b0a88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cef708;
  param_1[1] = &PTR_FUN_110cef770;
  func_0x000107c279a4(param_1 + 0x15);
  func_0x000107c279a4(param_1 + 0x11);
  func_0x000107c279a4(param_1 + 0xd);
  func_0x000107c279a4(param_1 + 3);
  return param_1;
}



/* Entry: 10b4b0a8c; end: 10b4b0a9f;  */

void FUN_10b4b0a8c(void)

{
  FUN_10b4b0aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b0aa0; end: 10b4b0ae7;  */

undefined8 * FUN_10b4b0aa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cef708;
  param_1[1] = &PTR_FUN_110cef770;
  func_0x000107c279a4(param_1 + 0x15);
  func_0x000107c279a4(param_1 + 0x11);
  func_0x000107c279a4(param_1 + 0xd);
  func_0x000107c279a4(param_1 + 3);
  return param_1;
}



/* Entry: 10b4b0ae8; end: 10b4b0aff;  */

void FUN_10b4b0ae8(void)

{
  FUN_10b4b0b00();
  return;
}



/* Entry: 10b4b0b00; end: 10b4b0b4f;  */

undefined1  [16] FUN_10b4b0b00(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_10b4b0b50(auStack_38);
  uVar1 = auStack_38[0];
  func_0x00010b4b0eb0();
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x00010b4b0e78();
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b4b0b50; end: 10b4b0b8f;  */

void FUN_10b4b0b50(undefined8 param_1)

{
  long unaff_x21;
  
  func_0x00010b4b0e08();
  func_0x00010b4b0ed4();
  FUN_10b4b0b90();
  func_0x00010b4b0e30();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4b0b90; end: 10b4b0bbb;  */

void FUN_10b4b0b90(void)

{
  func_0x00010b4b0ec8();
  func_0x00010b4b0f4c();
  return;
}



/* Entry: 10b4b0bbc; end: 10b4b0bd3;  */

void FUN_10b4b0bbc(void)

{
  FUN_10b4b0bd4();
  return;
}



/* Entry: 10b4b0bd4; end: 10b4b0c23;  */

undefined1  [16] FUN_10b4b0bd4(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_10b4b0c24(auStack_38);
  uVar1 = auStack_38[0];
  func_0x00010b4b0eb0();
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x00010b4b0e78();
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b4b0c24; end: 10b4b0c63;  */

void FUN_10b4b0c24(undefined8 param_1)

{
  long unaff_x21;
  
  func_0x00010b4b0e08();
  func_0x00010b4b0ed4();
  FUN_10b4b0c64();
  func_0x00010b4b0e30();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4b0c64; end: 10b4b0c8f;  */

void FUN_10b4b0c64(void)

{
  func_0x00010b4b0ec8();
  func_0x00010b4b0f4c();
  return;
}



/* Entry: 10b4b0c90; end: 10b4b0ca7;  */

void FUN_10b4b0c90(void)

{
  FUN_10b4b0ca8();
  return;
}



/* Entry: 10b4b0ca8; end: 10b4b0cf7;  */

undefined1  [16] FUN_10b4b0ca8(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_10b4b0cf8(auStack_38);
  uVar1 = auStack_38[0];
  func_0x00010b4b0eb0();
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x00010b4b0e78();
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b4b0cf8; end: 10b4b0d37;  */

void FUN_10b4b0cf8(undefined8 param_1)

{
  long unaff_x21;
  
  func_0x00010b4b0e08();
  func_0x00010b4b0ed4();
  FUN_10b4b0d38();
  func_0x00010b4b0e30();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4b0d38; end: 10b4b0d63;  */

void FUN_10b4b0d38(void)

{
  func_0x00010b4b0ec8();
  func_0x00010b4b0f4c();
  return;
}



/* Entry: 10b4b0d64; end: 10b4b0fbf;  */

void FUN_10b4b0d64(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 uStack0000000000000028;
  undefined1 uStack_11;
  
  *(undefined8 *)(unaff_x21 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x21 + 0x28) = in_stack_00000000;
  *(undefined8 *)(unaff_x21 + 0x38) = in_stack_00000010;
  uStack0000000000000028 = 1;
  uVar1 = *(ulong *)(unaff_x21 + 0x18);
  plVar2 = (long *)*(long *)(unaff_x21 + 0x10);
  if (-1 < (char)*(byte *)(unaff_x21 + 0x27)) {
    uVar1 = (ulong)*(byte *)(unaff_x21 + 0x27);
    plVar2 = (long *)(unaff_x21 + 0x10);
  }
  func_0x0001000df1ac(&uStack_11,plVar2,uVar1);
  return;
}



/* Entry: 10b4b0fc0; end: 10b4b141f;  */

void FUN_10b4b0fc0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b4b1420(param_2 + 0x14);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0x14));
    func_0x00010b4b1cb8();
    FUN_10b4afb60();
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    lVar1 = param_2 + 0x20;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa71c(param_1,"ad_serve_item_id",lVar1);
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    lVar1 = param_2 + 0x40;
    func_0x00010549026c(lVar1);
    func_0x00010b4a7eb8(param_1,&DAT_10f773136,lVar1);
  }
  if (*(char *)(param_2 + 100) == '\x01') {
    func_0x00010b4b1438(param_2 + 0x60);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0x60));
    func_0x00010b4b1cb8();
    func_0x00010b4afba8();
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x68);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    func_0x00010b4a7ee8();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0x80) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x78);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    FUN_10b4ae2ac();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x88);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    func_0x00010b4a7ea0();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    lVar1 = param_2 + 0x98;
    func_0x00010549026c(lVar1);
    FUN_10b4abe44(param_1,&DAT_10f773602,lVar1);
  }
  if (*(char *)(param_2 + 0xbc) == '\x01') {
    func_0x00010b4b1450(param_2 + 0xb8);
    puVar5 = (&PTR_DAT_110cefa50)[*(int *)(param_2 + 0xb8)];
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    puStack_40 = param_1 + 2;
    uStack_38 = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puStack_48 = puVar3;
    func_0x000107c278b8(puVar3 + 2,&DAT_10f773612);
    func_0x000107c278b8(puVar3 + 5,puVar5);
    uStack_38 = CONCAT71(uStack_38._1_7_,1);
    puVar2 = param_1 + 3;
    func_0x000107c278c4(puVar2,puVar3 + 2);
    puVar3[1] = puVar2;
    puVar2 = puStack_48;
    func_0x000105971280(param_1);
    if (((ulong)puVar2 & 1) != 0) {
      puStack_48 = (undefined8 *)0x0;
    }
    func_0x000107c278dc(&puStack_48);
  }
  if (*(char *)(param_2 + 200) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xc0);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    func_0x00010b4a89f8();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0xd4) == '\x01') {
    func_0x00010b4b1468(param_2 + 0xd0);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0xd0));
    func_0x00010b4b1cb8();
    func_0x00010b4abea4();
  }
  if (*(char *)(param_2 + 0xdc) == '\x01') {
    func_0x00010b4b1480(param_2 + 0xd8);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0xd8));
    func_0x00010b4b1cb8();
    func_0x00010b4aa794();
  }
  if (*(char *)(param_2 + 0xe4) == '\x01') {
    func_0x00010b4b1498(param_2 + 0xe0);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0xe0));
    func_0x00010b4b1cb8();
    FUN_10b4afb60();
  }
  if (*(char *)(param_2 + 0xec) == '\x01') {
    func_0x00010b4b14b0(param_2 + 0xe8);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0xe8));
    func_0x00010b4b1cb8();
    func_0x00010b4aa6ec();
  }
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xf0);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    FUN_10b4a9718();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0x108) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x100);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    func_0x00010b4aa7dc();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0x114) == '\x01') {
    piVar4 = (int *)(param_2 + 0x110);
    func_0x00010b4afd18();
    func_0x00010b4b1cdc((long)*piVar4);
    func_0x00010b4b1cb8();
    func_0x00010b4afd00();
  }
  return;
}



/* Entry: 10b4b1420; end: 10b4b14c7;  */

/* WARNING: Possible PIC construction at 0x00010b4b1080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4b116c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4b1228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4b125c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4b1290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4b12c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4b1294) */
/* WARNING: Removing unreachable block (ram,0x00010b4b1260) */
/* WARNING: Removing unreachable block (ram,0x00010b4b122c) */
/* WARNING: Removing unreachable block (ram,0x00010b4b1170) */
/* WARNING: Removing unreachable block (ram,0x00010b4b11dc) */
/* WARNING: Removing unreachable block (ram,0x00010b4b11e0) */
/* WARNING: Removing unreachable block (ram,0x00010b4b1084) */
/* WARNING: Removing unreachable block (ram,0x00010b4b12c8) */

void FUN_10b4b1420(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar10;
  undefined8 uVar11;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  puVar10 = &stack0xfffffffffffffff0;
  uVar11 = 0x10b4b1438;
  func_0x000104bdc2c8();
SUB_10b4b1438:
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  puVar2 = puVar1 + -0x10;
  *(undefined1 **)(puVar1 + -0x10) = puVar10;
  *(undefined8 *)(puVar1 + -8) = uVar11;
  uVar11 = 0x10b4b1450;
  func_0x000104bdc2c8();
  puVar10 = puVar1 + -0x10;
SUB_10b4b1450:
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  puVar3 = puVar2 + -0x10;
  *(undefined1 **)(puVar2 + -0x10) = puVar10;
  *(undefined8 *)(puVar2 + -8) = uVar11;
  uVar11 = 0x10b4b1468;
  func_0x000104bdc2c8();
  puVar10 = puVar2 + -0x10;
SUB_10b4b1468:
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  puVar4 = puVar3 + -0x10;
  *(undefined1 **)(puVar3 + -0x10) = puVar10;
  *(undefined8 *)(puVar3 + -8) = uVar11;
  uVar11 = 0x10b4b1480;
  func_0x000104bdc2c8();
  puVar10 = puVar3 + -0x10;
SUB_10b4b1480:
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  puVar5 = puVar4 + -0x10;
  *(undefined1 **)(puVar4 + -0x10) = puVar10;
  *(undefined8 *)(puVar4 + -8) = uVar11;
  uVar11 = 0x10b4b1498;
  func_0x000104bdc2c8();
  puVar10 = puVar4 + -0x10;
  do {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return;
    }
    *(undefined1 **)(puVar5 + -0x10) = puVar10;
    *(undefined8 *)(puVar5 + -8) = uVar11;
    uVar11 = 0x10b4b14b0;
    func_0x000104bdc2c8();
    puVar6 = puVar5 + -0x10;
    lVar8 = unaff_x20;
    puVar10 = puVar5 + -0x10;
    while( true ) {
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        return;
      }
      *(undefined1 **)(puVar6 + -0x10) = puVar10;
      *(undefined8 *)(puVar6 + -8) = uVar11;
      func_0x000104bdc2c8();
      unaff_x20 = param_1 + -8;
      puVar5 = puVar6 + -0x60;
      puVar4 = puVar6 + -0x60;
      puVar3 = puVar6 + -0x60;
      puVar2 = puVar6 + -0x60;
      puVar1 = puVar6 + -0x60;
      *(undefined8 *)(puVar6 + -0x40) = unaff_x22;
      *(undefined8 *)(puVar6 + -0x38) = unaff_x21;
      *(long *)(puVar6 + -0x30) = lVar8;
      *(undefined8 **)(puVar6 + -0x28) = unaff_x19;
      *(undefined1 **)(puVar6 + -0x20) = puVar6 + -0x10;
      *(code **)(puVar6 + -0x18) = FUN_10b4b14c8;
      puVar10 = puVar6 + -0x20;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      *(undefined4 *)(extraout_x8 + 4) = 0x3f800000;
      if (*(char *)(param_1 + 0x10) == '\x01') {
        FUN_10b4b1420(param_1 + 0xc);
        func_0x00010b4b1cdc((long)*(int *)(param_1 + 0xc));
        func_0x00010b4b1cb8();
        FUN_10b4afb60();
      }
      if (*(char *)(param_1 + 0x30) == '\x01') {
        lVar8 = param_1 + 0x18;
        func_0x00010549026c(lVar8);
        func_0x00010b4aa71c(extraout_x8,"ad_serve_item_id",lVar8);
      }
      if (*(char *)(param_1 + 0x50) == '\x01') {
        lVar8 = param_1 + 0x38;
        func_0x00010549026c(lVar8);
        func_0x00010b4a7eb8(extraout_x8,&DAT_10f773136,lVar8);
      }
      unaff_x19 = extraout_x8;
      if (*(char *)(param_1 + 0x5c) == '\x01') {
        param_1 = param_1 + 0x58;
        uVar11 = 0x10b4b1084;
        goto SUB_10b4b1438;
      }
      if (*(char *)(param_1 + 0x68) == '\x01') {
        puVar7 = (undefined8 *)(param_1 + 0x60);
        func_0x0001072833b8();
        func_0x00010b4b1ccc(*puVar7);
        func_0x00010b4b1cb8();
        func_0x00010b4a7ee8();
        func_0x00010b4b1cc4();
      }
      if (*(char *)(param_1 + 0x78) == '\x01') {
        puVar7 = (undefined8 *)(param_1 + 0x70);
        func_0x0001072833b8();
        func_0x00010b4b1ccc(*puVar7);
        func_0x00010b4b1cb8();
        FUN_10b4ae2ac();
        func_0x00010b4b1cc4();
      }
      if (*(char *)(param_1 + 0x88) == '\x01') {
        puVar7 = (undefined8 *)(param_1 + 0x80);
        func_0x0001072833b8();
        func_0x00010b4b1ccc(*puVar7);
        func_0x00010b4b1cb8();
        func_0x00010b4a7ea0();
        func_0x00010b4b1cc4();
      }
      if (*(char *)(param_1 + 0xa8) == '\x01') {
        lVar8 = param_1 + 0x90;
        func_0x00010549026c(lVar8);
        FUN_10b4abe44(extraout_x8,&DAT_10f773602,lVar8);
      }
      if (*(char *)(param_1 + 0xb4) == '\x01') {
        param_1 = param_1 + 0xb0;
        uVar11 = 0x10b4b1170;
        goto SUB_10b4b1450;
      }
      if (*(char *)(param_1 + 0xc0) == '\x01') {
        puVar7 = (undefined8 *)(param_1 + 0xb8);
        func_0x0001072833b8();
        func_0x00010b4b1ccc(*puVar7);
        func_0x00010b4b1cb8();
        func_0x00010b4a89f8();
        func_0x00010b4b1cc4();
      }
      if (*(char *)(param_1 + 0xcc) == '\x01') {
        param_1 = param_1 + 200;
        uVar11 = 0x10b4b122c;
        goto SUB_10b4b1468;
      }
      if (*(char *)(param_1 + 0xd4) == '\x01') {
        param_1 = param_1 + 0xd0;
        uVar11 = 0x10b4b1260;
        goto SUB_10b4b1480;
      }
      if (*(char *)(param_1 + 0xdc) == '\x01') break;
      if (*(char *)(param_1 + 0xe4) != '\x01') {
        if (*(char *)(param_1 + 0xf0) == '\x01') {
          puVar7 = (undefined8 *)(param_1 + 0xe8);
          func_0x0001072833b8();
          func_0x00010b4b1ccc(*puVar7);
          func_0x00010b4b1cb8();
          FUN_10b4a9718();
          func_0x00010b4b1cc4();
        }
        if (*(char *)(param_1 + 0x100) == '\x01') {
          puVar7 = (undefined8 *)(param_1 + 0xf8);
          func_0x0001072833b8();
          func_0x00010b4b1ccc(*puVar7);
          func_0x00010b4b1cb8();
          func_0x00010b4aa7dc();
          func_0x00010b4b1cc4();
        }
        if (*(char *)(param_1 + 0x10c) == '\x01') {
          piVar9 = (int *)(param_1 + 0x108);
          func_0x00010b4afd18();
          func_0x00010b4b1cdc((long)*piVar9);
          func_0x00010b4b1cb8();
          func_0x00010b4afd00();
        }
        return;
      }
      param_1 = param_1 + 0xe0;
      uVar11 = 0x10b4b12c8;
      puVar6 = puVar6 + -0x60;
      lVar8 = unaff_x20;
    }
    param_1 = param_1 + 0xd8;
    uVar11 = 0x10b4b1294;
  } while( true );
}



/* Entry: 10b4b14c8; end: 10b4b14cf;  */

void FUN_10b4b14c8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_10b4b1420(param_2 + 0xc);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0xc));
    func_0x00010b4b1cb8();
    FUN_10b4afb60();
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar1 = param_2 + 0x18;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa71c(param_1,"ad_serve_item_id",lVar1);
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar1 = param_2 + 0x38;
    func_0x00010549026c(lVar1);
    func_0x00010b4a7eb8(param_1,&DAT_10f773136,lVar1);
  }
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    func_0x00010b4b1438(param_2 + 0x58);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0x58));
    func_0x00010b4b1cb8();
    func_0x00010b4afba8();
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x60);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    func_0x00010b4a7ee8();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x70);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    FUN_10b4ae2ac();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0x88) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x80);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    func_0x00010b4a7ea0();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    lVar1 = param_2 + 0x90;
    func_0x00010549026c(lVar1);
    FUN_10b4abe44(param_1,&DAT_10f773602,lVar1);
  }
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    func_0x00010b4b1450(param_2 + 0xb0);
    puVar5 = (&PTR_DAT_110cefa50)[*(int *)(param_2 + 0xb0)];
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    puStack_40 = param_1 + 2;
    uStack_38 = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puStack_48 = puVar3;
    func_0x000107c278b8(puVar3 + 2,&DAT_10f773612);
    func_0x000107c278b8(puVar3 + 5,puVar5);
    uStack_38 = CONCAT71(uStack_38._1_7_,1);
    puVar2 = param_1 + 3;
    func_0x000107c278c4(puVar2,puVar3 + 2);
    puVar3[1] = puVar2;
    puVar2 = puStack_48;
    func_0x000105971280(param_1);
    if (((ulong)puVar2 & 1) != 0) {
      puStack_48 = (undefined8 *)0x0;
    }
    func_0x000107c278dc(&puStack_48);
  }
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xb8);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    func_0x00010b4a89f8();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0xcc) == '\x01') {
    func_0x00010b4b1468(param_2 + 200);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 200));
    func_0x00010b4b1cb8();
    func_0x00010b4abea4();
  }
  if (*(char *)(param_2 + 0xd4) == '\x01') {
    func_0x00010b4b1480(param_2 + 0xd0);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0xd0));
    func_0x00010b4b1cb8();
    func_0x00010b4aa794();
  }
  if (*(char *)(param_2 + 0xdc) == '\x01') {
    func_0x00010b4b1498(param_2 + 0xd8);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0xd8));
    func_0x00010b4b1cb8();
    FUN_10b4afb60();
  }
  if (*(char *)(param_2 + 0xe4) == '\x01') {
    func_0x00010b4b14b0(param_2 + 0xe0);
    func_0x00010b4b1cdc((long)*(int *)(param_2 + 0xe0));
    func_0x00010b4b1cb8();
    func_0x00010b4aa6ec();
  }
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xe8);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    FUN_10b4a9718();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0x100) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xf8);
    func_0x0001072833b8();
    func_0x00010b4b1ccc(*puVar2);
    func_0x00010b4b1cb8();
    func_0x00010b4aa7dc();
    func_0x00010b4b1cc4();
  }
  if (*(char *)(param_2 + 0x10c) == '\x01') {
    piVar4 = (int *)(param_2 + 0x108);
    func_0x00010b4afd18();
    func_0x00010b4b1cdc((long)*piVar4);
    func_0x00010b4b1cb8();
    func_0x00010b4afd00();
  }
  return;
}



/* Entry: 10b4b14d0; end: 10b4b1c4f;  */

undefined8 * FUN_10b4b14d0(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) goto LAB_10b4b1588;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4b1558;
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b155c;
    }
    if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b15ac;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b15e0:
    if ((*(byte *)(param_2 + 0x58) & 1) == 0) goto LAB_10b4b1638;
    if (bVar1) {
      bVar1 = true;
      puVar3 = puVar2;
LAB_10b4b1618:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x20;
      func_0x00010b4b1ce8();
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,4,puVar3);
      goto LAB_10b4b1638;
    }
LAB_10b4b1604:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      puVar3 = puVar2;
      goto LAB_10b4b1618;
    }
    if ((*(byte *)(param_2 + 100) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b165c;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1694:
    if ((*(byte *)(param_2 + 0x70) & 1) == 0) goto LAB_10b4b16ec;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b16cc:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 8;
      func_0x00010b4b1cd4();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,6,uVar4);
      goto LAB_10b4b16ec;
    }
LAB_10b4b16b8:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b16cc;
    }
    if ((*(byte *)(param_2 + 0x80) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1710;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1744:
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) goto LAB_10b4b179c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b177c:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
      func_0x00010b4b1cd4();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,8,uVar4);
      goto LAB_10b4b179c;
    }
LAB_10b4b1768:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b177c;
    }
    if ((*(byte *)(param_2 + 0xb0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b17c0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b17f4:
    if ((*(byte *)(param_2 + 0xbc) & 1) == 0) goto LAB_10b4b1850;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b182c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x80;
      func_0x00010b4b1450((undefined4 *)(param_2 + 0xb8));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,10,*(undefined4 *)(param_2 + 0xb8));
      goto LAB_10b4b1850;
    }
LAB_10b4b1818:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b182c;
    }
    if ((*(byte *)(param_2 + 200) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1874;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b18a8:
    if ((*(byte *)(param_2 + 0xd4) & 1) == 0) goto LAB_10b4b1904;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b18e0:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x20;
      func_0x00010b4b1468((undefined4 *)(param_2 + 0xd0));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0xc,*(undefined4 *)(param_2 + 0xd0));
      goto LAB_10b4b1904;
    }
LAB_10b4b18cc:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b18e0;
    }
    if ((*(byte *)(param_2 + 0xdc) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1928;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1960:
    if ((*(byte *)(param_2 + 0xe4) & 1) == 0) goto LAB_10b4b19bc;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b1998:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 8;
      func_0x00010b4b1498((undefined4 *)(param_2 + 0xe0));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0xe,*(undefined4 *)(param_2 + 0xe0));
      goto LAB_10b4b19bc;
    }
LAB_10b4b1984:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b1998;
    }
    if ((*(byte *)(param_2 + 0xec) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b19e0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1a18:
    if ((*(byte *)(param_2 + 0xf8) & 1) == 0) goto LAB_10b4b1a70;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b1a50:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 2;
      func_0x00010b4b1cd4();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x10,uVar4);
      goto LAB_10b4b1a70;
    }
LAB_10b4b1a3c:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b1a50;
    }
    if ((*(byte *)(param_2 + 0x108) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1a94;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1ac8:
    if ((*(byte *)(param_2 + 0x114) & 1) == 0) goto LAB_10b4b1b0c;
    if (!bVar1) goto LAB_10b4b1ad8;
  }
  else {
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4b1558:
      bVar1 = true;
LAB_10b4b155c:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x80;
      FUN_10b4b1420((undefined4 *)(param_2 + 0x14));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,2,*(undefined4 *)(param_2 + 0x14));
    }
LAB_10b4b1588:
    if ((*(byte *)(param_2 + 0x38) & 1) == 0) goto LAB_10b4b15e0;
    if (bVar1) {
      bVar1 = true;
      puVar3 = puVar2;
LAB_10b4b15c0:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x40;
      func_0x00010b4b1ce8();
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,3,puVar3);
      goto LAB_10b4b15e0;
    }
LAB_10b4b15ac:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      puVar3 = puVar2;
      goto LAB_10b4b15c0;
    }
    if ((*(byte *)(param_2 + 0x58) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1604;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1638:
    if ((*(byte *)(param_2 + 100) & 1) == 0) goto LAB_10b4b1694;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b1670:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x10;
      func_0x00010b4b1438((undefined4 *)(param_2 + 0x60));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,5,*(undefined4 *)(param_2 + 0x60));
      goto LAB_10b4b1694;
    }
LAB_10b4b165c:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b1670;
    }
    if ((*(byte *)(param_2 + 0x70) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b16b8;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b16ec:
    if ((*(byte *)(param_2 + 0x80) & 1) == 0) goto LAB_10b4b1744;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b1724:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 4;
      func_0x00010b4b1cd4();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,7,uVar4);
      goto LAB_10b4b1744;
    }
LAB_10b4b1710:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b1724;
    }
    if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1768;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b179c:
    if ((*(byte *)(param_2 + 0xb0) & 1) == 0) goto LAB_10b4b17f4;
    if (bVar1) {
      bVar1 = true;
      puVar3 = puVar2;
LAB_10b4b17d4:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 1;
      func_0x00010b4b1ce8();
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,9,puVar3);
      goto LAB_10b4b17f4;
    }
LAB_10b4b17c0:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      puVar3 = puVar2;
      goto LAB_10b4b17d4;
    }
    if ((*(byte *)(param_2 + 0xbc) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1818;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1850:
    if ((*(byte *)(param_2 + 200) & 1) == 0) goto LAB_10b4b18a8;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b1888:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x40;
      func_0x00010b4b1cd4();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0xb,uVar4);
      goto LAB_10b4b18a8;
    }
LAB_10b4b1874:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b1888;
    }
    if ((*(byte *)(param_2 + 0xd4) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b18cc;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1904:
    if ((*(byte *)(param_2 + 0xdc) & 1) == 0) goto LAB_10b4b1960;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b193c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x10;
      func_0x00010b4b1480((undefined4 *)(param_2 + 0xd8));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0xd,*(undefined4 *)(param_2 + 0xd8));
      goto LAB_10b4b1960;
    }
LAB_10b4b1928:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b193c;
    }
    if ((*(byte *)(param_2 + 0xe4) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1984;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b19bc:
    if ((*(byte *)(param_2 + 0xec) & 1) == 0) goto LAB_10b4b1a18;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b19f4:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 4;
      func_0x00010b4b14b0((undefined4 *)(param_2 + 0xe8));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0xf,*(undefined4 *)(param_2 + 0xe8));
      goto LAB_10b4b1a18;
    }
LAB_10b4b19e0:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b19f4;
    }
    if ((*(byte *)(param_2 + 0xf8) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1a3c;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1a70:
    if ((*(byte *)(param_2 + 0x108) & 1) == 0) goto LAB_10b4b1ac8;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b1aa8:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 1;
      func_0x00010b4b1cd4();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0x11,uVar4);
      goto LAB_10b4b1ac8;
    }
LAB_10b4b1a94:
    FUN_10b4b1cac();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b1aa8;
    }
    if ((*(byte *)(param_2 + 0x114) & 1) == 0) goto LAB_10b4b1b0c;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1ad8:
    FUN_10b4b1cac();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4b1b0c;
  }
  puVar5 = (undefined4 *)(param_2 + 0x110);
  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x80;
  func_0x00010b4afd18();
  FUN_10b4a7ab0(auStack_d0,0x12,*puVar5);
LAB_10b4b1b0c:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x10,3);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10b4a8238(auStack_d0);
    __Unwind_Resume();
    *puVar2 = &PTR_FUN_110cef920;
    puVar2[1] = &PTR_FUN_110cef988;
    func_0x000107c279a4(puVar2 + 0x13);
    func_0x000107c279a4(puVar2 + 8);
    func_0x000107c279a4(puVar2 + 4);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4b1c50; end: 10b4b1c53;  */

undefined8 * FUN_10b4b1c50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cef920;
  param_1[1] = &PTR_FUN_110cef988;
  func_0x000107c279a4(param_1 + 0x13);
  func_0x000107c279a4(param_1 + 8);
  func_0x000107c279a4(param_1 + 4);
  return param_1;
}



/* Entry: 10b4b1c54; end: 10b4b1c67;  */

void FUN_10b4b1c54(void)

{
  FUN_10b4b1c68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b1c68; end: 10b4b1cab;  */

undefined8 * FUN_10b4b1c68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cef920;
  param_1[1] = &PTR_FUN_110cef988;
  func_0x000107c279a4(param_1 + 0x13);
  func_0x000107c279a4(param_1 + 8);
  func_0x000107c279a4(param_1 + 4);
  return param_1;
}



/* Entry: 10b4b1cac; end: 10b4b1d2b;  */

long * FUN_10b4b1cac(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x21;
  int in_stack_0000000c;
  
  uVar2 = unaff_x21[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)in_stack_0000000c;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*unaff_x21 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == in_stack_0000000c) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10b4b1d2c; end: 10b4b1de7;  */

void FUN_10b4b1d2c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar1 = param_2 + 0x18;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa77c(param_1,&DAT_10f773883,lVar1);
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar1 = param_2 + 0x38;
    func_0x00010549026c(lVar1);
    FUN_10b4a95bc(param_1,&DAT_10f773890,lVar1);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    param_2 = param_2 + 0x58;
    func_0x00010549026c(param_2);
    FUN_10b4addd8(param_1,&DAT_10f77389f,param_2);
  }
  return;
}



/* Entry: 10b4b1de8; end: 10b4b1def;  */

void FUN_10b4b1de8(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar1 = param_2 + 0x10;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa77c(param_1,&DAT_10f773883,lVar1);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar1 = param_2 + 0x30;
    func_0x00010549026c(lVar1);
    FUN_10b4a95bc(param_1,&DAT_10f773890,lVar1);
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    param_2 = param_2 + 0x50;
    func_0x00010549026c(param_2);
    FUN_10b4addd8(param_1,&DAT_10f77389f,param_2);
  }
  return;
}



/* Entry: 10b4b1df0; end: 10b4b1fd7;  */

undefined8 * FUN_10b4b1df0(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) goto LAB_10b4b1ea4;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4b1e78;
    FUN_10b4b1ff0();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b1e7c;
    }
    if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b1ec8;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1efc:
    if ((*(byte *)(param_2 + 0x70) & 1) == 0) goto LAB_10b4b1f3c;
    if (!bVar1) goto LAB_10b4b1f0c;
  }
  else {
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4b1e78:
      bVar1 = true;
LAB_10b4b1e7c:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x40;
      func_0x00010b4b1ffc();
      puVar3 = auStack_d0;
      func_0x00010b4a7a18(puVar3,3,puVar2);
      puVar2 = puVar3;
    }
LAB_10b4b1ea4:
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_10b4b1efc;
    if (bVar1) {
      bVar1 = true;
      puVar3 = puVar2;
LAB_10b4b1edc:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x20;
      func_0x00010b4b1ffc();
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,4,puVar3);
      goto LAB_10b4b1efc;
    }
LAB_10b4b1ec8:
    FUN_10b4b1ff0();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      puVar3 = puVar2;
      goto LAB_10b4b1edc;
    }
    if ((*(byte *)(param_2 + 0x70) & 1) == 0) goto LAB_10b4b1f3c;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b1f0c:
    FUN_10b4b1ff0();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4b1f3c;
  }
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x10;
  func_0x00010b4b1ffc();
  func_0x00010b4a7a18(auStack_d0,5,puVar2);
LAB_10b4b1f3c:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x10,1);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10b4a8238(auStack_d0);
    __Unwind_Resume();
    *puVar2 = &PTR_FUN_110cefb80;
    puVar2[1] = &PTR_FUN_110cefbe8;
    func_0x0001001148fc(puVar2 + 0xb);
    func_0x0001001148fc(puVar2 + 7);
    func_0x0001001148fc(puVar2 + 3);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4b1fd8; end: 10b4b1fdb;  */

undefined8 * FUN_10b4b1fd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cefb80;
  param_1[1] = &PTR_FUN_110cefbe8;
  func_0x0001001148fc(param_1 + 0xb);
  func_0x0001001148fc(param_1 + 7);
  func_0x0001001148fc(param_1 + 3);
  return param_1;
}



/* Entry: 10b4b1fdc; end: 10b4b1fef;  */

void FUN_10b4b1fdc(void)

{
  func_0x0001067df57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b1ff0; end: 10b4b202f;  */

long * FUN_10b4b1ff0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x21;
  int in_stack_0000000c;
  
  uVar2 = unaff_x21[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)in_stack_0000000c;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*unaff_x21 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == in_stack_0000000c) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10b4b2030; end: 10b4b21e7;  */

void FUN_10b4b2030(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  undefined *apuStack_38 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_10b4b21e8(param_2 + 0x7c);
    apuStack_38[0] = (&PTR_DAT_110cefca0)[*(int *)(param_2 + 0x7c)];
    func_0x00010b4b2754();
    func_0x00010b4ad1f4();
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x88);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(apuStack_38,*puVar1);
    func_0x00010b4b2754();
    func_0x00010b4a7ee8();
    func_0x00010b4b2734();
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x98);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(apuStack_38,*puVar1);
    func_0x00010b4b2754();
    func_0x00010b4abe5c();
    func_0x00010b4b2734();
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar2 = param_2 + 0x18;
    func_0x00010549026c(lVar2);
    func_0x00010b4aa77c(param_1,&DAT_10f773883,lVar2);
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar2 = param_2 + 0x38;
    func_0x00010549026c(lVar2);
    FUN_10b4a95bc(param_1,&DAT_10f773890,lVar2);
  }
  if (*(char *)(param_2 + 0xac) == '\x01') {
    piVar3 = (int *)(param_2 + 0xa8);
    func_0x00010b4b2218();
    apuStack_38[0] = (&PTR_DAT_110cefcb0)[*piVar3];
    func_0x00010b4b2754();
    func_0x00010b4b2200();
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    param_2 = param_2 + 0x58;
    func_0x00010549026c(param_2);
    FUN_10b4addd8(param_1,&DAT_10f77389f,param_2);
  }
  return;
}



/* Entry: 10b4b21e8; end: 10b4b222f;  */

void FUN_10b4b21e8(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010b4b25d8();
  return;
}



/* Entry: 10b4b2230; end: 10b4b2237;  */

void FUN_10b4b2230(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  undefined *apuStack_38 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_10b4b21e8(param_2 + 0x74);
    apuStack_38[0] = (&PTR_DAT_110cefca0)[*(int *)(param_2 + 0x74)];
    func_0x00010b4b2754();
    func_0x00010b4ad1f4();
  }
  if (*(char *)(param_2 + 0x88) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x80);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(apuStack_38,*puVar1);
    func_0x00010b4b2754();
    func_0x00010b4a7ee8();
    func_0x00010b4b2734();
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x90);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(apuStack_38,*puVar1);
    func_0x00010b4b2754();
    func_0x00010b4abe5c();
    func_0x00010b4b2734();
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar2 = param_2 + 0x10;
    func_0x00010549026c(lVar2);
    func_0x00010b4aa77c(param_1,&DAT_10f773883,lVar2);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar2 = param_2 + 0x30;
    func_0x00010549026c(lVar2);
    FUN_10b4a95bc(param_1,&DAT_10f773890,lVar2);
  }
  if (*(char *)(param_2 + 0xa4) == '\x01') {
    piVar3 = (int *)(param_2 + 0xa0);
    func_0x00010b4b2218();
    apuStack_38[0] = (&PTR_DAT_110cefcb0)[*piVar3];
    func_0x00010b4b2754();
    func_0x00010b4b2200();
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    param_2 = param_2 + 0x50;
    func_0x00010549026c(param_2);
    FUN_10b4addd8(param_1,&DAT_10f77389f,param_2);
  }
  return;
}



/* Entry: 10b4b2238; end: 10b4b25bf;  */

undefined8 * FUN_10b4b2238(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x80) & 1) == 0) goto LAB_10b4b22f0;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4b22c0;
    FUN_10b4b2728();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b22c4;
    }
    if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b2314;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b234c:
    if ((*(byte *)(param_2 + 0xa0) & 1) == 0) goto LAB_10b4b23a8;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b2384:
      puVar3 = (undefined8 *)(param_2 + 0x98);
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 0x20;
      func_0x0001072833b8();
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,4,*puVar3);
      goto LAB_10b4b23a8;
    }
LAB_10b4b2370:
    FUN_10b4b2728();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b2384;
    }
    if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b23cc;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b2400:
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_10b4b2458;
    if (bVar1) {
      bVar1 = true;
      puVar3 = puVar2;
LAB_10b4b2438:
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 4;
      func_0x00010b4b273c();
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,7,puVar3);
      goto LAB_10b4b2458;
    }
LAB_10b4b2424:
    FUN_10b4b2728();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      puVar3 = puVar2;
      goto LAB_10b4b2438;
    }
    if ((*(byte *)(param_2 + 0xac) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b247c;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b24b4:
    if ((*(byte *)(param_2 + 0x70) & 1) == 0) goto LAB_10b4b24f4;
    if (!bVar1) goto LAB_10b4b24c4;
  }
  else {
    if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4b22c0:
      bVar1 = true;
LAB_10b4b22c4:
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 0x80;
      FUN_10b4b21e8((undefined4 *)(param_2 + 0x7c));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,2,*(undefined4 *)(param_2 + 0x7c));
    }
LAB_10b4b22f0:
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) goto LAB_10b4b234c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b2328:
      puVar3 = (undefined8 *)(param_2 + 0x88);
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 0x40;
      func_0x0001072833b8();
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,3,*puVar3);
      goto LAB_10b4b234c;
    }
LAB_10b4b2314:
    FUN_10b4b2728();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b2328;
    }
    if ((*(byte *)(param_2 + 0xa0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b2370;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b23a8:
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) goto LAB_10b4b2400;
    if (bVar1) {
      bVar1 = true;
      puVar3 = puVar2;
LAB_10b4b23e0:
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 8;
      func_0x00010b4b273c();
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,6,puVar3);
      goto LAB_10b4b2400;
    }
LAB_10b4b23cc:
    FUN_10b4b2728();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      puVar3 = puVar2;
      goto LAB_10b4b23e0;
    }
    if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b2424;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b2458:
    if ((*(byte *)(param_2 + 0xac) & 1) == 0) goto LAB_10b4b24b4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b2490:
      puVar4 = (undefined4 *)(param_2 + 0xa8);
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 2;
      func_0x00010b4b2218();
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,8,*puVar4);
      goto LAB_10b4b24b4;
    }
LAB_10b4b247c:
    FUN_10b4b2728();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b2490;
    }
    if ((*(byte *)(param_2 + 0x70) & 1) == 0) goto LAB_10b4b24f4;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b24c4:
    FUN_10b4b2728();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4b24f4;
  }
  *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 1;
  func_0x00010b4b273c();
  func_0x00010b4a7a18(auStack_d0,9,puVar2);
LAB_10b4b24f4:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x78,1);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10b4a8238(auStack_d0);
    __Unwind_Resume();
    *puVar2 = &PTR_FUN_110cefb80;
    puVar2[1] = &PTR_FUN_110cefbe8;
    func_0x0001001148fc(puVar2 + 0xb);
    func_0x0001001148fc(puVar2 + 7);
    func_0x0001001148fc(puVar2 + 3);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4b25c0; end: 10b4b25c3;  */

undefined8 * FUN_10b4b25c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cefb80;
  param_1[1] = &PTR_FUN_110cefbe8;
  func_0x0001001148fc(param_1 + 0xb);
  func_0x0001001148fc(param_1 + 7);
  func_0x0001001148fc(param_1 + 3);
  return param_1;
}



/* Entry: 10b4b25c4; end: 10b4b25ef;  */

void FUN_10b4b25c4(void)

{
  func_0x0001067df57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b25f0; end: 10b4b265b;  */

undefined1  [16] FUN_10b4b25f0(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_10b4b265c(auStack_38);
  uVar1 = auStack_38[0];
  func_0x000105971280(param_1);
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x000107c278dc(auStack_38);
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b4b265c; end: 10b4b26e3;  */

void FUN_10b4b265c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10b4b26e4(puVar1 + 2,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  param_2 = param_2 + 0x18;
  func_0x000107c278c4(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 10b4b26e4; end: 10b4b2727;  */

long FUN_10b4b26e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c278b8();
  func_0x000107c278b8(lVar1 + 0x18,*param_3);
  return param_1;
}



/* Entry: 10b4b2728; end: 10b4b278b;  */

long * FUN_10b4b2728(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x21;
  int in_stack_0000000c;
  
  uVar2 = unaff_x21[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)in_stack_0000000c;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*unaff_x21 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == in_stack_0000000c) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10b4b278c; end: 10b4b28df;  */

void FUN_10b4b278c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined *apuStack_38 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar1 = param_2 + 0x18;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa77c(param_1,&DAT_10f773883,lVar1);
  }
  if (*(char *)(param_2 + 0x80) == '\x01') {
    piVar2 = (int *)(param_2 + 0x7c);
    func_0x00010b4b2218();
    apuStack_38[0] = (&PTR_DAT_110cefd80)[*piVar2];
    func_0x00010b4b2200(param_1,"channel",apuStack_38);
  }
  if (*(char *)(param_2 + 0x85) == '\x01') {
    puVar3 = (undefined1 *)(param_2 + 0x84);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(apuStack_38,*puVar3);
    func_0x00010b4aa6bc(param_1,&DAT_10f398ba5,apuStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_38);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    lVar1 = param_2 + 0x58;
    func_0x00010549026c(lVar1);
    FUN_10b4addd8(param_1,&DAT_10f77389f,lVar1);
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    param_2 = param_2 + 0x38;
    func_0x00010549026c(param_2);
    FUN_10b4a95bc(param_1,&DAT_10f773890,param_2);
  }
  return;
}



/* Entry: 10b4b28e0; end: 10b4b28e7;  */

void FUN_10b4b28e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined *apuStack_38 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar1 = param_2 + 0x10;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa77c(param_1,&DAT_10f773883,lVar1);
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    piVar2 = (int *)(param_2 + 0x74);
    func_0x00010b4b2218();
    apuStack_38[0] = (&PTR_DAT_110cefd80)[*piVar2];
    func_0x00010b4b2200(param_1,"channel",apuStack_38);
  }
  if (*(char *)(param_2 + 0x7d) == '\x01') {
    puVar3 = (undefined1 *)(param_2 + 0x7c);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(apuStack_38,*puVar3);
    func_0x00010b4aa6bc(param_1,&DAT_10f398ba5,apuStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_38);
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    lVar1 = param_2 + 0x50;
    func_0x00010549026c(lVar1);
    FUN_10b4addd8(param_1,&DAT_10f77389f,lVar1);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    param_2 = param_2 + 0x30;
    func_0x00010549026c(param_2);
    FUN_10b4a95bc(param_1,&DAT_10f773890,param_2);
  }
  return;
}



/* Entry: 10b4b28e8; end: 10b4b2b9f;  */

undefined8 * FUN_10b4b28e8(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) goto LAB_10b4b299c;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4b2970;
    FUN_10b4b2bb8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b2974;
    }
    if ((*(byte *)(param_2 + 0x80) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b29c0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b29f8:
    if ((*(byte *)(param_2 + 0x85) & 1) == 0) goto LAB_10b4b2a54;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b2a30:
      puVar5 = (undefined1 *)(param_2 + 0x84);
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 0x20;
      func_0x000107c29334();
      puVar2 = auStack_d0;
      func_0x00010b4a790c(puVar2,4,*puVar5);
      goto LAB_10b4b2a54;
    }
LAB_10b4b2a1c:
    FUN_10b4b2bb8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b2a30;
    }
    if ((*(byte *)(param_2 + 0x70) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b2a78;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b2aac:
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_10b4b2aec;
    if (!bVar1) goto LAB_10b4b2abc;
  }
  else {
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4b2970:
      bVar1 = true;
LAB_10b4b2974:
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 0x80;
      func_0x00010b4b2bcc();
      puVar3 = auStack_d0;
      func_0x00010b4a7a18(puVar3,2,puVar2);
      puVar2 = puVar3;
    }
LAB_10b4b299c:
    if ((*(byte *)(param_2 + 0x80) & 1) == 0) goto LAB_10b4b29f8;
    if (bVar1) {
      bVar1 = true;
LAB_10b4b29d4:
      puVar4 = (undefined4 *)(param_2 + 0x7c);
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 0x40;
      func_0x00010b4b2218();
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,3,*puVar4);
      goto LAB_10b4b29f8;
    }
LAB_10b4b29c0:
    FUN_10b4b2bb8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4b29d4;
    }
    if ((*(byte *)(param_2 + 0x85) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4b2a1c;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b2a54:
    if ((*(byte *)(param_2 + 0x70) & 1) == 0) goto LAB_10b4b2aac;
    if (bVar1) {
      bVar1 = true;
      puVar3 = puVar2;
LAB_10b4b2a8c:
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 0x10;
      func_0x00010b4b2bcc();
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,5,puVar3);
      goto LAB_10b4b2aac;
    }
LAB_10b4b2a78:
    FUN_10b4b2bb8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      puVar3 = puVar2;
      goto LAB_10b4b2a8c;
    }
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_10b4b2aec;
    puVar2 = (undefined8 *)0x0;
LAB_10b4b2abc:
    FUN_10b4b2bb8();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4b2aec;
  }
  *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 8;
  func_0x00010b4b2bcc();
  func_0x00010b4a7a18(auStack_d0,6,puVar2);
LAB_10b4b2aec:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x78,1);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10b4a8238(auStack_d0);
    __Unwind_Resume();
    *puVar2 = &PTR_FUN_110cefb80;
    puVar2[1] = &PTR_FUN_110cefbe8;
    func_0x0001001148fc(puVar2 + 0xb);
    func_0x0001001148fc(puVar2 + 7);
    func_0x0001001148fc(puVar2 + 3);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4b2ba0; end: 10b4b2ba3;  */

undefined8 * FUN_10b4b2ba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cefb80;
  param_1[1] = &PTR_FUN_110cefbe8;
  func_0x0001001148fc(param_1 + 0xb);
  func_0x0001001148fc(param_1 + 7);
  func_0x0001001148fc(param_1 + 3);
  return param_1;
}



/* Entry: 10b4b2ba4; end: 10b4b2bb7;  */

void FUN_10b4b2ba4(void)

{
  func_0x0001067df57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b2bb8; end: 10b4b2bd3;  */

long * FUN_10b4b2bb8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x21;
  int in_stack_0000000c;
  
  uVar2 = unaff_x21[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)in_stack_0000000c;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*unaff_x21 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == in_stack_0000000c) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10b4b2bd4; end: 10b4b2c23;  */

void FUN_10b4b2bd4(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  func_0x000107c2b12c(param_1 + 3,&uStack_50);
  param_1[8] = 0;
  func_0x000107c2ab24(&uStack_50);
  return;
}



/* Entry: 10b4b2c24; end: 10b4b2c37;  */

void FUN_10b4b2c24(undefined8 param_1,long param_2)

{
  func_0x00010028af74(param_1,param_2 + 0x128);
  func_0x00010028afb0();
  return;
}



/* Entry: 10b4b2c38; end: 10b4b2cc7;  */

void FUN_10b4b2c38(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c27acc(param_1,param_2[1] - *param_2 >> 4);
  puVar1 = (undefined8 *)param_2[1];
  for (puVar2 = (undefined8 *)*param_2; puVar2 != puVar1; puVar2 = puVar2 + 2) {
    (**(code **)(*(long *)*puVar2 + 0x40))();
    func_0x000107c397e0();
    func_0x000107c27adc();
  }
  return;
}



/* Entry: 10b4b2cc8; end: 10b4b2cfb;  */

long FUN_10b4b2cc8(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10b2d348c();
  }
  else {
    func_0x000107c2c50c();
  }
  return param_1;
}



/* Entry: 10b4b2cfc; end: 10b4b2d6b;  */

undefined1  [16] FUN_10b4b2cfc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 == 0) {
    uVar2 = 0;
    param_1 = 0;
  }
  else {
    __ZNSt3__15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_1,0,10);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = uVar1 != 0;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 10b4b2d6c; end: 10b4b2dab;  */

void FUN_10b4b2d6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c316c4();
  *(long *)(param_1 + 0x20) = lVar1;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 10b4b2dac; end: 10b4b2dbf;  */

void FUN_10b4b2dac(void)

{
  func_0x000107c30164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b2dc0; end: 10b4b2e0f;  */

void FUN_10b4b2dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c397ac();
  *param_1 = *param_2;
  func_0x000107c27b9c(param_1 + 1,param_2 + 1);
  FUN_10b4b2e34(unaff_x20 + 0x20,unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x45);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x45) = uVar1;
  func_0x00010b4b2e5c(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 10b4b2e10; end: 10b4b2e33;  */

void FUN_10b4b2e10(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000107c2c528();
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10b4b2e34; end: 10b4b2e9f;  */

void FUN_10b4b2e34(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c397ac();
  FUN_10b2e11e4();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b4b2ea0; end: 10b4b2eab;  */

long FUN_10b4b2ea0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  func_0x00010b4b31dc();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b4b2ee8();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_10b4b2f1c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 10b4b2eac; end: 10b4b2ee7;  */

long FUN_10b4b2eac(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b4b2ee8();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_10b4b2f1c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 10b4b2ee8; end: 10b4b2f1b;  */

void FUN_10b4b2ee8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010b2d8dcc(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 10b4b2f1c; end: 10b4b2f83;  */

undefined8 FUN_10b4b2f1c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107c397bc();
  FUN_10b4b2f84();
  func_0x000107c397c4();
  FUN_10b4b2ff4();
  func_0x00010b2d8dcc(lStack_48);
  lStack_48 = lStack_48 + 0x30;
  func_0x000107c397e0();
  FUN_10b4b2fa4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10b4b316c(auStack_58);
  return uVar1;
}



/* Entry: 10b4b2f84; end: 10b4b2fa3;  */

long * FUN_10b4b2f84(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x555555555555555;
    }
    return plVar2;
  }
  FUN_10b4b2fe8();
  func_0x000107c397ac();
  plVar2 = param_1 + 2;
  FUN_10b4b3074(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30);
  func_0x000107c39798();
  return plVar2;
}



/* Entry: 10b4b2fa4; end: 10b4b2fe7;  */

void FUN_10b4b2fa4(long *param_1,long param_2)

{
  func_0x000107c397ac();
  FUN_10b4b3074(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30);
  func_0x000107c39798();
  return;
}



/* Entry: 10b4b2fe8; end: 10b4b2ff3;  */

void FUN_10b4b2fe8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010b4b31dc();
  func_0x000107c397cc();
  if (param_2 != 0) {
    func_0x00010b4b3024(param_4);
  }
  func_0x000107c397c0();
  return;
}



/* Entry: 10b4b2ff4; end: 10b4b3047;  */

void FUN_10b4b2ff4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c397cc();
  if (param_2 != 0) {
    func_0x00010b4b3024(param_4);
  }
  func_0x000107c397c0();
  return;
}



/* Entry: 10b4b3048; end: 10b4b3073;  */

void FUN_10b4b3048(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined4 **ppuStack_58;
  undefined4 **ppuStack_50;
  undefined1 uStack_48;
  undefined4 *puStack_40;
  undefined4 *puStack_38;
  
  if (param_2 < (undefined4 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 0xc) {
    *puStack_38 = *puVar1;
    uVar3 = *(undefined8 *)(puVar1 + 4);
    uVar2 = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puStack_38 + 6) = *(undefined8 *)(puVar1 + 6);
    *(undefined8 *)(puStack_38 + 4) = uVar3;
    *(undefined8 *)(puStack_38 + 2) = uVar2;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    uVar2 = *(undefined8 *)(puVar1 + 8);
    puStack_38[10] = puVar1[10];
    *(undefined8 *)(puStack_38 + 8) = uVar2;
    puStack_38 = puStack_38 + 0xc;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0xc) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 2);
  }
  FUN_10b4b3120(&uStack_60);
  return;
}



/* Entry: 10b4b3074; end: 10b4b311f;  */

void FUN_10b4b3074(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_40;
  undefined1 uStack_38;
  undefined4 *puStack_30;
  undefined4 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 0xc) {
    *puStack_28 = *puVar1;
    uVar3 = *(undefined8 *)(puVar1 + 4);
    uVar2 = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puStack_28 + 6) = *(undefined8 *)(puVar1 + 6);
    *(undefined8 *)(puStack_28 + 4) = uVar3;
    *(undefined8 *)(puStack_28 + 2) = uVar2;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    uVar2 = *(undefined8 *)(puVar1 + 8);
    puStack_28[10] = puVar1[10];
    *(undefined8 *)(puStack_28 + 8) = uVar2;
    puStack_28 = puStack_28 + 0xc;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0xc) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 2);
  }
  FUN_10b4b3120(&uStack_50);
  return;
}



/* Entry: 10b4b3120; end: 10b4b316b;  */

long FUN_10b4b3120(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
      func_0x00010b4b31f0();
    }
  }
  return param_1;
}



/* Entry: 10b4b316c; end: 10b4b3197;  */

long * FUN_10b4b316c(long *param_1)

{
  FUN_10b4b3198();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4b3198; end: 10b4b319f;  */

void FUN_10b4b3198(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c397ac(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    func_0x00010b4b31f0();
  }
  return;
}



/* Entry: 10b4b31a0; end: 10b4b31d3;  */

void FUN_10b4b31a0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c397ac();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    func_0x00010b4b31f0();
  }
  return;
}



/* Entry: 10b4b31d4; end: 10b4b321f;  */

void FUN_10b4b31d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b4b3220; end: 10b4b325b;  */

void FUN_10b4b3220(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b49af60(param_2 + 0x60);
  func_0x000107c397f0();
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  func_0x000107c397e8();
  return;
}



/* Entry: 10b4b325c; end: 10b4b326f;  */

void FUN_10b4b325c(void)

{
  func_0x000107c30168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b3270; end: 10b4b3273;  */

void FUN_10b4b3270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ceff18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4b3274; end: 10b4b3287;  */

void FUN_10b4b3274(void)

{
  FUN_10b4b3288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b3288; end: 10b4b329f;  */

void FUN_10b4b3288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ceff18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4b32a0; end: 10b4b330f;  */

long FUN_10b4b32a0(long param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 3) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) goto LAB_10b4b32e4;
  }
  else {
    if (iVar1 == 2) {
      iVar1 = *(int *)(param_1 + 4);
LAB_10b4b32e4:
      dVar2 = 1.0;
      _ldexp(0x3ff0000000000000,iVar1);
      return (long)(dVar2 * (double)*(long *)(param_1 + 0x10));
    }
    if (iVar1 == 1) {
      return *(long *)(param_1 + 0x10);
    }
  }
  return 0;
}



/* Entry: 10b4b3310; end: 10b4b33a7;  */

void FUN_10b4b3310(double param_1,long param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 == 0) {
    *(double *)(param_2 + 8) = param_1;
  }
  else {
    dVar4 = *(double *)(param_2 + 0x18);
    dVar3 = 1.0 - dVar4;
    if ((ulong)uVar1 <= *(ulong *)(param_2 + 0x20)) {
      dVar3 = (dVar3 * (double)uVar1) / ((double)uVar1 + 1.0);
      dVar4 = 1.0 - dVar3;
    }
    dVar2 = *(double *)(param_2 + 8);
    _log();
    _log();
    dVar3 = param_1 * dVar4 + dVar2 * dVar3;
    _exp();
    *(double *)(param_2 + 8) = dVar3;
  }
  *(uint *)(param_2 + 0x10) = uVar1 + 1;
  return;
}



/* Entry: 10b4b33a8; end: 10b4b33af;  */

void FUN_10b4b33a8(void)

{
  return;
}



/* Entry: 10b4b33b0; end: 10b4b3423;  */

void FUN_10b4b33b0(undefined8 param_1)

{
  undefined1 auStack_140 [280];
  char cStack_28;
  
  FUN_10b164b20(auStack_140);
  if (cStack_28 == '\x01') {
    FUN_10b4dbd58(param_1,auStack_140);
  }
  else {
    func_0x000107c278b8(param_1,&UNK_10f7739b7);
  }
  FUN_10b164d1c(auStack_140);
  return;
}



/* Entry: 10b4b3424; end: 10b4b355f;  */

void FUN_10b4b3424(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = param_2;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm
            (param_2,0x3f,0xffffffffffffffff);
  puVar1 = &UNK_10f7739ba;
  if (lVar3 != -1) {
    puVar1 = &UNK_10f7739b8;
  }
  func_0x000107c27d14(auStack_60,param_2,puVar1);
  func_0x000107c27fac(auStack_48,auStack_60,&UNK_10f7739bc);
  __ZNSt3__19to_stringEi(auStack_78,param_3);
  func_0x00010533a9c0(param_1,auStack_48,auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  FUN_10b4b3560();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  if (*(char *)(param_4 + 0x18) == '\x01') {
    uVar2 = *(ulong *)(param_4 + 8);
    if (-1 < (char)*(byte *)(param_4 + 0x17)) {
      uVar2 = (ulong)*(byte *)(param_4 + 0x17);
    }
    if (uVar2 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f7739cc,param_4);
      func_0x000107c27fc4(param_1,auStack_48);
      FUN_10b4b3560();
    }
  }
  return;
}



/* Entry: 10b4b3560; end: 10b4b3567;  */

void FUN_10b4b3560(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000038);
  return;
}



/* Entry: 10b4b3568; end: 10b4b3657;  */

double FUN_10b4b3568(double param_1,double param_2,double *param_3,double param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  
  if (((ulong)param_3[2] & 1) == 0) {
    param_3[1] = param_1;
    *(undefined1 *)(param_3 + 2) = 1;
    param_3[3] = param_2;
    param_3[4] = param_4;
  }
  else {
    dVar2 = (double)((long)param_4 - (long)param_3[4]) / 1000000000.0;
    dVar3 = -0.0;
    if (0.0 <= dVar2) {
      dVar3 = -dVar2;
    }
    dVar3 = dVar3 / *param_3;
    pdVar1 = param_3;
    _exp();
    dVar3 = param_2 + param_3[3] * dVar3;
    param_2 = param_2 / dVar3;
    if (dVar3 <= 0.0) {
      param_2 = 0.0;
    }
    FUN_10b4b3658();
    dVar2 = *pdVar1;
    FUN_10b4b3658();
    param_3[1] = dVar2 + (param_1 - *pdVar1) * param_2;
    *(undefined1 *)(param_3 + 2) = 1;
    param_3[3] = dVar3;
    dVar3 = param_3[4];
    if ((long)param_3[4] <= (long)param_4) {
      dVar3 = param_4;
    }
    param_3[4] = dVar3;
    FUN_10b4b3658();
    param_1 = *pdVar1;
  }
  return param_1;
}



/* Entry: 10b4b3658; end: 10b4b3663;  */

/* WARNING: Possible PIC construction at 0x00010728312c: Changing call to branch */

ulong * FUN_10b4b3658(undefined8 param_1,undefined8 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  int iVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x19;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined *puVar21;
  ulong *puStack_90;
  ulong *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  puVar11 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    return puVar11;
  }
  func_0x000104bdc2c8();
  uVar5 = *param_2;
  lVar6 = param_2[1];
  puVar1 = puVar11 + 0x87;
  puStack_18 = &DAT_10727c008;
  puVar19 = (undefined8 *)puVar11[0x88];
  if ((undefined8 *)puVar11[0x89] <= puVar19) {
    puVar16 = (ulong *)*puVar1;
    lVar17 = (long)puVar19 - (long)puVar16;
    lVar20 = lVar17 >> 4;
    uVar3 = lVar20 + 1;
    puVar13 = puVar1;
    if (uVar3 >> 0x3c == 0) {
      uVar14 = (long)puVar11[0x89] - (long)puVar16;
      uVar15 = (long)uVar14 >> 3;
      if (uVar15 <= uVar3) {
        uVar15 = uVar3;
      }
      if (0x7fffffffffffffef < uVar14) {
        uVar15 = 0xfffffffffffffff;
      }
      if (uVar15 >> 0x3c == 0) {
        lVar12 = uVar15 << 4;
        puStack_20 = &stack0xfffffffffffffff0;
        __Znwm();
        puVar4 = (undefined8 *)(lVar12 + lVar17);
        *puVar4 = uVar5;
        puVar4[1] = lVar6;
        if (lVar6 != 0) {
          plVar2 = (long *)(lVar6 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          puVar16 = (ulong *)*puVar1;
          lVar17 = puVar11[0x88] - (long)puVar16;
          lVar20 = lVar17 >> 4;
        }
        puVar19 = puVar4 + 2;
        puVar18 = puVar4 + lVar20 * -2;
        puVar13 = puVar18;
        _memcpy(puVar18,puVar16,lVar17);
        *puVar1 = (ulong)puVar18;
        puVar11[0x88] = (ulong)puVar19;
        puVar11[0x89] = lVar12 + uVar15 * 0x10;
        if (puVar16 != (ulong *)0x0) {
          func_0x000107285884();
        }
        goto code_r0x000107283120;
      }
      puVar21 = &UNK_107283134;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x000104bd35f4();
    }
    else {
      puVar21 = &UNK_107283130;
      puStack_20 = &stack0xfffffffffffffff0;
    }
    ppuStack_70 = &puStack_20;
    puStack_68 = puVar21;
    func_0x0001072858a4();
    puStack_78 = &UNK_107283140;
    puStack_90 = puVar16;
    puStack_88 = puVar1;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x0001072856b0();
    func_0x000104c2fcd4();
    func_0x000104c2fcf0();
    puVar18 = (ulong *)puVar11[0x88];
    puVar9 = (ulong *)*puVar1;
    if (-1 < (char)*(byte *)((long)puVar11 + 0x44f)) {
      puVar18 = (ulong *)(ulong)*(byte *)((long)puVar11 + 0x44f);
      puVar9 = puVar1;
    }
    iVar10 = (int)&puStack_90;
    if (puVar16 == puVar18) {
      puStack_90 = puVar13;
      puStack_88 = puVar16;
      func_0x000100067218(&puStack_90,puVar9,puVar18);
      puVar11 = (ulong *)(ulong)(iVar10 == 0);
    }
    else {
      puVar11 = (ulong *)0x0;
    }
    return puVar11;
  }
  *puVar19 = uVar5;
  puVar19[1] = lVar6;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  puVar19 = puVar19 + 2;
  puVar13 = puVar1;
code_r0x000107283120:
  puVar11[0x88] = (ulong)puVar19;
  return puVar13;
}



/* Entry: 10b4b3664; end: 10b4b3677;  */

void FUN_10b4b3664(void)

{
  FUN_10b4b3678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b3678; end: 10b4b36b3;  */

undefined8 * FUN_10b4b3678(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ceff98;
  func_0x000107c29bb4(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 10b4b36b4; end: 10b4b36c7;  */

void FUN_10b4b36b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f7739d7;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110ceffe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4b36c8; end: 10b4b36cb;  */

void FUN_10b4b36c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ceffe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4b36cc; end: 10b4b36df;  */

void FUN_10b4b36cc(void)

{
  FUN_10b4b36e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b36e0; end: 10b4b36f3;  */

void FUN_10b4b36e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ceffe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4b36f4; end: 10b4b3707;  */

void FUN_10b4b36f4(void)

{
  FUN_10b4b3708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b3708; end: 10b4b3733;  */

void FUN_10b4b3708(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cf0030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4b3734; end: 10b4b375b;  */

void FUN_10b4b3734(void)

{
  func_0x000107c39808();
  func_0x000107c39814(0x30);
  func_0x000107c30190();
  return;
}



/* Entry: 10b4b375c; end: 10b4b3783;  */

void FUN_10b4b375c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b4b3784; end: 10b4b3843;  */

void FUN_10b4b3784(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int extraout_w10;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long *aplStack_30 [2];
  
  FUN_10b21bbb0(aplStack_30);
  FUN_10b4b3844(&lStack_40,param_3);
  lStack_50 = 0;
  if (lStack_40 != 0) {
    lStack_50 = lStack_40 + 8;
  }
  lStack_48 = lStack_38;
  plVar1 = aplStack_30[0];
  if (lStack_38 != 0) {
    do {
      func_0x00010b4b3ca8();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x10))();
  func_0x00010b21c33c(&lStack_50);
  param_1[1] = lStack_38;
  *param_1 = lStack_40;
  lStack_40 = 0;
  lStack_38 = 0;
  func_0x00010b21c298(&lStack_40);
  func_0x00010b21c274(aplStack_30);
  return;
}



/* Entry: 10b4b3844; end: 10b4b3867;  */

void FUN_10b4b3844(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b4b3b2c(&uStack_11,param_1);
  return;
}



/* Entry: 10b4b3868; end: 10b4b39d3;  */

undefined8 * FUN_10b4b3868(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar5;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined8 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110cf0120;
  puVar1 = param_1;
  func_0x000107c31444();
  func_0x000107c27c1c(auStack_50,1);
  puVar3 = puStack_40;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1107ea880;
  puStack_40[1] = 0;
  func_0x000107c278b8(&puStack_68,&UNK_10f7739de);
  func_0x000107c31460(puVar3 + 3,&puStack_68,0,puVar1,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_68);
  puVar3 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  puStack_60 = puVar3;
  puStack_68 = puVar3 + 3;
  func_0x000107c27c24(auStack_50);
  param_1[1] = &PTR_DAT_110d9a078;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[7] = puVar3 + 3;
  param_1[8] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      func_0x00010b4b3ca8();
    } while (extraout_w10 != 0);
  }
  ppuVar2 = &puStack_68;
  func_0x000107c27c20();
  *param_1 = &PTR_FUN_110cf0080;
  param_1[1] = &PTR_DAT_110cf00b8;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b4b3ca8();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b4b3cc0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_68);
    __ZNSt3__119__shared_weak_countD2Ev(puVar3);
    puVar3 = auStack_50;
    func_0x000107c27c24();
    func_0x00010b4b3cb8();
    pcStack_78 = FUN_10b4b39d4;
    puStack_90 = param_2;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    *puVar3 = &PTR_FUN_110cf0080;
    puVar1 = puVar3 + 1;
    *puVar1 = &PTR_DAT_110cf00b8;
    func_0x00010bcccbd4(auStack_a0,puVar1);
    FUN_10b106068(auStack_a0);
    func_0x00010b1059a4(auStack_a0);
    func_0x000107c29bb4(puVar3 + 9);
    func_0x00010bcccb8c(puVar1);
    return puVar3;
  }
  return param_1;
}


