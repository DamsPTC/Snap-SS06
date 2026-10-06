/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f8ae20; end: 103f8ae7b;  */

void FUN_103f8ae20(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x0001000834e4(unaff_x20 + 0x68);
  func_0x000100870a64(unaff_x20 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8ae7c; end: 103f8ae9b;  */

void FUN_103f8ae7c(void)

{
  FUN_103f8a89c();
  return;
}



/* Entry: 103f8ae9c; end: 103f8afff;  */

void FUN_103f8ae9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = 2;
  if (*(char *)(unaff_x20 + 0xb0) == '\0') {
    uVar1 = 3;
  }
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,lVar4);
  (**(code **)(lVar5 + 8))(param_1,param_2,lVar4,lVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar5 = *(long *)(unaff_x20 + 0x80);
  func_0x0001000a8868(unaff_x20 + 0x60,uVar6);
  (**(code **)(lVar5 + 0x40))(uVar6);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar3 = *(long *)(unaff_x20 + 0x58);
    func_0x0001000a8868(unaff_x20 + 0x38,uVar2);
    (**(code **)(lVar3 + 0x28))(uVar6,lVar5,uVar2,lVar3);
    _swift_bridgeObjectRelease(lVar5);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar5 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar2);
  (**(code **)(lVar5 + 0x20))(lVar4,uVar2,lVar5);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
    lVar5 = *(long *)(unaff_x20 + 0xa8);
    func_0x0001000a8868(unaff_x20 + 0x88,uVar2);
    (**(code **)(lVar5 + 8))(uVar6,lVar4,uVar1,uVar2,lVar5);
    _swift_unknownObjectRelease(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
  return;
}



/* Entry: 103f8b000; end: 103f8b05b;  */

void FUN_103f8b000(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x0001000834e4(unaff_x20 + 0x60);
  func_0x0001000834e4(unaff_x20 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8b05c; end: 103f8b0e3;  */

void FUN_103f8b05c(void)

{
  long *unaff_x20;
  
  *(undefined1 *)(*unaff_x20 + 0xb0) = 1;
  func_0x00010bf4cdc0();
  FUN_103f8ae9c();
  return;
}



/* Entry: 103f8b0e4; end: 103f8b153;  */

void FUN_103f8b0e4(double param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    param_2 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x00010bf4cdc0();
    param_1 = *(double *)(unaff_x20 + 0x20) + (param_1 - *(double *)(unaff_x20 + 0x20)) * 0.75;
    func_0x00010bf20c00(param_3);
    func_0x000107c52e44(param_3);
  }
  func_0x00010bf4cdc0(param_3);
  *(double *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103f8b154; end: 103f8b163;  */

void FUN_103f8b154(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8b164; end: 103f8b183;  */

void FUN_103f8b164(void)

{
  _objc_opt_self(&PTR_PTR_1130377a0);
  return;
}



/* Entry: 103f8b184; end: 103f8b193;  */

void FUN_103f8b184(void)

{
  long *unaff_x20;
  
  *(undefined1 *)(*unaff_x20 + 0x18) = 1;
  return;
}



/* Entry: 103f8b194; end: 103f8b1b3;  */

void FUN_103f8b194(void)

{
  FUN_103f8b0e4();
  return;
}



/* Entry: 103f8b1b4; end: 103f8b2df;  */

void FUN_103f8b1b4(undefined8 param_1,double *param_2,double *param_3)

{
  long lVar1;
  long *unaff_x20;
  double dVar2;
  
  lVar1 = *unaff_x20;
  *param_2 = *param_2 * 0.75;
  dVar2 = *(double *)(lVar1 + 0x20);
  *param_3 = dVar2 + (*param_3 - dVar2) * 0.75;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  return;
}



/* Entry: 103f8b2e0; end: 103f8b43f;  */

void FUN_103f8b2e0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 != 0) {
    lVar4 = lVar3 + 0x20;
    _swift_bridgeObjectRetain(lVar3);
    do {
      func_0x000103f8b8d4(lVar4,auStack_78);
      FUN_103f8b918(auStack_78,auStack_a0);
      lVar2 = lStack_80;
      uVar1 = uStack_88;
      func_0x0001000a8868(auStack_a0,uStack_88);
      (**(code **)(lVar2 + 8))(param_1,uVar1,lVar2);
      func_0x0001000834e4(auStack_a0);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return;
}



/* Entry: 103f8b440; end: 103f8b507;  */

void FUN_103f8b440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 != 0) {
    lVar4 = lVar3 + 0x20;
    _swift_bridgeObjectRetain(lVar3);
    do {
      func_0x000103f8b8d4(lVar4,auStack_88);
      FUN_103f8b918(auStack_88,auStack_b0);
      lVar2 = lStack_90;
      uVar1 = uStack_98;
      func_0x0001000a8868(auStack_b0,uStack_98);
      (**(code **)(lVar2 + 0x18))(param_1,param_2,param_3,uVar1,lVar2);
      func_0x0001000834e4(auStack_b0);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return;
}



/* Entry: 103f8b508; end: 103f8b5b7;  */

void FUN_103f8b508(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 != 0) {
    lVar4 = lVar3 + 0x20;
    _swift_bridgeObjectRetain(lVar3);
    do {
      func_0x000103f8b8d4(lVar4,auStack_78);
      FUN_103f8b918(auStack_78,auStack_a0);
      lVar2 = lStack_80;
      uVar1 = uStack_88;
      func_0x0001000a8868(auStack_a0,uStack_88);
      (**(code **)(lVar2 + 0x20))(param_1 & 1,uVar1,lVar2);
      func_0x0001000834e4(auStack_a0);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return;
}



/* Entry: 103f8b5b8; end: 103f8b657;  */

void FUN_103f8b5b8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 != 0) {
    lVar4 = lVar3 + 0x20;
    _swift_bridgeObjectRetain(lVar3);
    do {
      func_0x000103f8b8d4(lVar4,auStack_68);
      FUN_103f8b918(auStack_68,auStack_90);
      lVar2 = lStack_70;
      uVar1 = uStack_78;
      func_0x0001000a8868(auStack_90,uStack_78);
      (**(code **)(lVar2 + 0x28))(uVar1,lVar2);
      func_0x0001000834e4(auStack_90);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return;
}



/* Entry: 103f8b658; end: 103f8b70f;  */

void FUN_103f8b658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 != 0) {
    lVar4 = lVar3 + 0x20;
    _swift_bridgeObjectRetain(lVar3);
    do {
      func_0x000103f8b8d4(lVar4,auStack_78);
      FUN_103f8b918(auStack_78,auStack_a0);
      lVar2 = lStack_80;
      uVar1 = uStack_88;
      func_0x0001000a8868(auStack_a0,uStack_88);
      (**(code **)(lVar2 + 0x30))(param_1,param_2,uVar1,lVar2);
      func_0x0001000834e4(auStack_a0);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return;
}



/* Entry: 103f8b710; end: 103f8b7af;  */

void FUN_103f8b710(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 != 0) {
    lVar4 = lVar3 + 0x20;
    _swift_bridgeObjectRetain(lVar3);
    do {
      func_0x000103f8b8d4(lVar4,auStack_68);
      FUN_103f8b918(auStack_68,auStack_90);
      lVar2 = lStack_70;
      uVar1 = uStack_78;
      func_0x0001000a8868(auStack_90,uStack_78);
      (**(code **)(lVar2 + 0x38))(uVar1,lVar2);
      func_0x0001000834e4(auStack_90);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return;
}



/* Entry: 103f8b7b0; end: 103f8b7f3;  */

void FUN_103f8b7b0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8b7f4; end: 103f8b917;  */

void FUN_103f8b7f4(void)

{
  FUN_103f8b2e0();
  return;
}



/* Entry: 103f8b918; end: 103f8b943;  */

undefined8 * FUN_103f8b918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 103f8b944; end: 103f8ba57;  */

void FUN_103f8b944(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f8ba58; end: 103f8bb7b;  */

void FUN_103f8ba58(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  if ((*(byte *)(unaff_x20 + 0x91) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x91) = 1;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110728b10;
  _swift_allocObject(&UNK_110728b10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  uVar2 = 0;
  func_0x000103f98564(0);
  _swift_unknownObjectRetain(uVar6);
  pcVar3 = FUN_103f8c3d8;
  func_0x000100775358(FUN_103f8c3d8,puVar1,uVar2);
  _swift_release(puVar1);
  puVar1 = &UNK_110728b38;
  _swift_allocObject(&UNK_110728b38,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  pcVar4 = FUN_103f8c3e0;
  puVar5 = puVar1;
  (**(code **)(*(long *)pcVar3 + 0x60))(FUN_103f8c3e0);
  _swift_release(pcVar3);
  _swift_release(puVar1);
  pcVar3 = pcVar4;
  _swift_getObjectType(pcVar4);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + 0x78),pcVar3,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar4);
  return;
}



/* Entry: 103f8bb7c; end: 103f8bbf3;  */

void FUN_103f8bb7c(char *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  func_0x0001000285a8(0x113037998,&UNK_10dcb2968);
  if (cVar1 == '\x01') {
    func_0x000107c42cc8(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000b637c();
    _objc_release(param_2);
  }
  else {
    func_0x000104886440();
  }
  return;
}



/* Entry: 103f8bbf4; end: 103f8bf27;  */

void FUN_103f8bbf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x90) == '\0') {
      uVar1 = *(undefined8 *)(param_3 + 0x30);
      lVar2 = *(long *)(param_3 + 0x38);
      func_0x0001000a8868(param_3 + 0x18,uVar1);
      (**(code **)(lVar2 + 0x18))(param_1,uVar1,lVar2);
      _swift_beginAccess(param_3 + 0x80,auStack_80,0,0);
      lVar2 = param_3 + 0x80;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar2 != 0) {
        lVar5 = *(long *)(param_3 + 0x88);
        lVar3 = lVar2;
        _swift_getObjectType();
        lVar4 = lVar3;
        func_0x000103f8bf74();
        ppuStack_88 = &PTR_DAT_110728ad0;
        pcVar6 = *(code **)(lVar5 + 8);
        alStack_a8[0] = param_3;
        lStack_90 = lVar4;
        _swift_retain(param_3);
        (*pcVar6)(param_1,param_2,alStack_a8,lVar3,lVar5);
        _swift_unknownObjectRelease(lVar2);
        func_0x0001000834e4(alStack_a8);
      }
    }
    _swift_release();
  }
  return;
}



/* Entry: 103f8bf28; end: 103f8bf93;  */

void FUN_103f8bf28(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  FUN_103f8c428(unaff_x20 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8bf94; end: 103f8c0fb;  */

int FUN_103f8bf94(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f8c010;
        goto LAB_103f8bff4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f8bff4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103f8c010:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f8c0fc; end: 103f8c13b;  */

void FUN_103f8c0fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113037990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb291c;
  _swift_getWitnessTable(&UNK_10dcb291c,&UNK_110728a80);
  puRam0000000113037990 = puVar1;
  return;
}



/* Entry: 103f8c13c; end: 103f8c17f;  */

void FUN_103f8c13c(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x80,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(lVar1 + 0x80);
  return;
}



/* Entry: 103f8c180; end: 103f8c2d3;  */

void FUN_103f8c180(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x80,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x88) = param_2;
  _swift_unknownObjectWeakAssign(lVar1 + 0x80,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 103f8c2d4; end: 103f8c397;  */

void FUN_103f8c2d4(void)

{
  FUN_103f8ba58();
  return;
}



/* Entry: 103f8c398; end: 103f8c3d7;  */

void FUN_103f8c398(undefined8 param_1,undefined8 param_2)

{
  func_0x000103f8b9f0(2);
  func_0x000103f8be34(param_1,param_2);
  return;
}



/* Entry: 103f8c3d8; end: 103f8c3df;  */

void FUN_103f8c3d8(char *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *param_1;
  func_0x0001000285a8(0x113037998,&UNK_10dcb2968);
  if (cVar1 == '\x01') {
    func_0x000107c42cc8(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000b637c();
    _objc_release(uVar2);
  }
  else {
    func_0x000104886440();
  }
  return;
}



/* Entry: 103f8c3e0; end: 103f8c417;  */

void FUN_103f8c3e0(void)

{
  FUN_103f98444(FUN_103f8c418);
  return;
}



/* Entry: 103f8c418; end: 103f8c427;  */

void FUN_103f8c418(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x90) == '\0') {
      uVar1 = *(undefined8 *)(lVar2 + 0x30);
      lVar3 = *(long *)(lVar2 + 0x38);
      func_0x0001000a8868(lVar2 + 0x18,uVar1);
      (**(code **)(lVar3 + 0x18))(param_1,uVar1,lVar3);
      _swift_beginAccess(lVar2 + 0x80,auStack_80,0,0);
      lVar3 = lVar2 + 0x80;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        lVar6 = *(long *)(lVar2 + 0x88);
        lVar4 = lVar3;
        _swift_getObjectType();
        lVar5 = lVar4;
        func_0x000103f8bf74();
        ppuStack_88 = &PTR_DAT_110728ad0;
        pcVar7 = *(code **)(lVar6 + 8);
        alStack_a8[0] = lVar2;
        lStack_90 = lVar5;
        _swift_retain(lVar2);
        (*pcVar7)(param_1,param_2,alStack_a8,lVar4,lVar6);
        _swift_unknownObjectRelease(lVar3);
        func_0x0001000834e4(alStack_a8);
      }
    }
    _swift_release();
  }
  return;
}



/* Entry: 103f8c428; end: 103f8c44b;  */

undefined8 FUN_103f8c428(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f8c44c; end: 103f8c453;  */

void FUN_103f8c44c(void)

{
  func_0x000103f8b9f0(0);
  return;
}



/* Entry: 103f8c454; end: 103f8c497;  */

void FUN_103f8c454(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8c498; end: 103f8c523;  */

void FUN_103f8c498(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  lVar2 = *(long *)(lVar4 + 0x30);
  func_0x0001000a8868(lVar4 + 0x10,uVar3);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  (**(code **)(lVar2 + 8))(uVar3,lVar2);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  lVar2 = *(long *)(lVar4 + 0x30);
  func_0x0001000a8868(lVar4 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar3,uVar1,lVar2);
  *param_3 = uVar5;
  param_3[1] = uVar6;
  return;
}



/* Entry: 103f8c524; end: 103f8c533;  */

void FUN_103f8c524(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8c534; end: 103f8c553;  */

void FUN_103f8c534(void)

{
  _objc_opt_self(&PTR_PTR_113037a80);
  return;
}



/* Entry: 103f8c554; end: 103f8c58f;  */

void FUN_103f8c554(double param_1,double param_2,undefined8 param_3,double *param_4,double *param_5)

{
  func_0x00010bf4cdc0();
  *param_5 = param_1 + *param_4 * 40.0;
  param_5[1] = param_2;
  return;
}



/* Entry: 103f8c590; end: 103f8c59f;  */

void FUN_103f8c590(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8c5a0; end: 103f8c5bf;  */

void FUN_103f8c5a0(void)

{
  _objc_opt_self(&PTR_PTR_113037b20);
  return;
}



/* Entry: 103f8c5c0; end: 103f8c677;  */

undefined1 FUN_103f8c5c0(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  return *(undefined1 *)(lVar1 + 0x10);
}



/* Entry: 103f8c678; end: 103f8c67b;  */

void FUN_103f8c678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103f8c67c; end: 103f8c6ab;  */

void FUN_103f8c67c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8c6ac; end: 103f8c6ef;  */

void FUN_103f8c6ac(void)

{
  long unaff_x20;
  
  FUN_103f8c428(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8c6f0; end: 103f8c733;  */

void FUN_103f8c6f0(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(lVar1 + 0x10);
  return;
}



/* Entry: 103f8c734; end: 103f8c887;  */

void FUN_103f8c734(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  _swift_unknownObjectWeakAssign(lVar1 + 0x10,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 103f8c888; end: 103f8c88f;  */

void FUN_103f8c888(void)

{
  return;
}



/* Entry: 103f8c890; end: 103f8ca47;  */

void FUN_103f8c890(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 == 0) {
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = param_2;
  }
  else {
    uVar1 = param_1;
    uVar7 = param_2;
    func_0x000107c4a788();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = uVar7;
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x000107c4a788();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = uVar5;
  _objc_release(uVar1);
  if (uVar7 == 0) {
    _swift_bridgeObjectRelease(uVar5);
LAB_103f8c998:
    uVar8 = param_2;
    func_0x000107c4a788(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar8);
    if ((((*(long *)(unaff_x20 + 0x10) == 0) || (param_1 == 0)) ||
        (func_0x000107c4a270(), (int)param_1 == 0)) || (func_0x000107c4a270(), (param_2 & 1) != 0))
    {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar6 = *(long *)(unaff_x20 + 0x38);
      func_0x0001000a8868(unaff_x20 + 0x18,uVar3);
      (**(code **)(lVar6 + 0x48))(uVar7,uVar4,param_3,uVar3,lVar6);
    }
    else {
      FUN_103f8cacc(uVar7,uVar4,param_3);
    }
  }
  else {
    if ((uVar8 == uVar2) && (uVar7 == uVar5)) {
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar5);
    }
    else {
      uVar4 = uVar7;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar8,uVar7,uVar2,uVar5,0);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar8 & 1) == 0) goto LAB_103f8c998;
    }
    lVar6 = *(long *)(unaff_x20 + 0x68);
    if (lVar6 == 0) {
      uVar3 = 0;
    }
    else {
      _swift_retain(lVar6);
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      __sScT6cancelyyF(lVar6,PTR___sytN_11034f1b0 + 8,uVar3,PTR___ss5ErrorWS_11034ee10);
      _swift_release(lVar6);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
    }
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    _swift_release(uVar3);
    uVar4 = *(ulong *)(unaff_x20 + 0x58);
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 103f8ca48; end: 103f8cacb;  */

void FUN_103f8ca48(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x68);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _swift_retain(lVar2);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    __sScT6cancelyyF(lVar2,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    _swift_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103f8cacc; end: 103f8cbcb;  */

void FUN_103f8cacc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  *(undefined8 *)(unaff_x20 + 0x60) = param_3;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar3);
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x00010bf5f780();
  puVar1 = &UNK_110728d90;
  _swift_allocObject(&UNK_110728d90,0x30,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain();
  func_0x000100859150(uVar3,2,0x38,4,0,0,&UNK_10dcb2b80,puVar1,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103f8cbcc; end: 103f8cbe3;  */

void FUN_103f8cbcc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103f8cbe4,0,0);
  return;
}



/* Entry: 103f8cbe4; end: 103f8cc97;  */

void FUN_103f8cbe4(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103f8cc38;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(uVar2);
  return;
}



/* Entry: 103f8cc98; end: 103f8ccff;  */

void FUN_103f8cc98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103f8cd00,uVar1,uVar2);
  return;
}



/* Entry: 103f8cd00; end: 103f8cdaf;  */

void FUN_103f8cd00(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(lVar5 + 0x60);
    uVar6 = *(undefined8 *)(lVar5 + 0x50);
    uVar1 = *(undefined8 *)(lVar5 + 0x30);
    lVar2 = *(long *)(lVar5 + 0x38);
    func_0x0001000a8868(lVar5 + 0x18,uVar1);
    pcVar7 = *(code **)(lVar2 + 0x48);
    _swift_bridgeObjectRetain(lVar3);
    (*pcVar7)(uVar6,lVar3,uVar4,uVar1,lVar2);
    _swift_bridgeObjectRelease(lVar3);
    FUN_103f8ca48();
  }
                    /* WARNING: Could not recover jumptable at 0x000103f8cdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103f8cdb0; end: 103f8ce0b;  */

void FUN_103f8cdb0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x18);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8ce0c; end: 103f8ce73;  */

void FUN_103f8ce0c(void)

{
  FUN_103f8c890();
  return;
}



/* Entry: 103f8ce74; end: 103f8ceeb;  */

void FUN_103f8ce74(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103f8ceec;
  plVar4[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103f8cbe4,0,0,uVar2,uVar3);
  return;
}



/* Entry: 103f8ceec; end: 103f8cf27;  */

void FUN_103f8ceec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103f8cf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103f8cf28; end: 103f8d08b;  */

void FUN_103f8cf28(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = param_2;
  }
  else {
    uVar5 = param_2;
    func_0x000107c4a788();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = uVar5;
    _objc_release(param_1);
  }
  uVar2 = param_2;
  func_0x000107c4a788();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar2);
  if (uVar5 == 0) {
    _swift_bridgeObjectRelease(uVar4);
  }
  else {
    if ((uVar6 == uVar3) && (uVar5 == uVar4)) {
      _swift_bridgeObjectRelease(uVar5);
      goto LAB_103f8d070;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar6,uVar5,uVar3,uVar4,0);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  uVar4 = uVar6;
  func_0x0001000a8868(unaff_x20 + 0x10,uVar6);
  func_0x000107c4a788(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_2);
  (**(code **)(lVar1 + 0x48))(uVar5,uVar4,param_3,uVar6,lVar1);
LAB_103f8d070:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 103f8d08c; end: 103f8d0cf;  */

void FUN_103f8d08c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8d0d0; end: 103f8d0ef;  */

void FUN_103f8d0d0(void)

{
  FUN_103f8cf28();
  return;
}



/* Entry: 103f8d0f0; end: 103f8d0f7;  */

void FUN_103f8d0f0(void)

{
  return;
}



/* Entry: 103f8d0f8; end: 103f8d327;  */

long FUN_103f8d0f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f8d328; end: 103f8d377;  */

undefined1  [16] FUN_103f8d328(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x58);
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_103f8d35c;
    }
    lVar1 = 0x50;
  }
  else {
    lVar1 = 0x38;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_bridgeObjectRetain(lVar2);
LAB_103f8d35c:
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 103f8d378; end: 103f8d8d7;  */

void FUN_103f8d378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar3 + 0x28))(param_1,param_2,uVar1,lVar3);
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar3 = *(long *)(unaff_x20 + 0x30);
    uVar4 = uVar1;
    func_0x0001000a8868(unaff_x20 + 0x10);
    lVar6 = param_1;
    func_0x000107c4a788(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar6);
    uVar5 = uVar4;
    (**(code **)(lVar3 + 0x30))(lVar2,uVar4,uVar1,lVar3);
    _swift_bridgeObjectRelease(uVar4);
    if (((uint)uVar5 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
    _swift_beginAccess(unaff_x20 + 0x90,auStack_78,0,0);
    lVar3 = unaff_x20 + 0x90;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x98);
      _swift_getObjectType();
      pcVar7 = *(code **)(lVar6 + 0x18);
      _swift_unknownObjectRetain(param_1);
      (*pcVar7)();
      _swift_unknownObjectRelease(lVar3);
      _swift_unknownObjectRelease(param_1);
    }
    func_0x000103f8d510(param_1,param_3);
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 103f8d8d8; end: 103f8d983;  */

void FUN_103f8d8d8(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x58);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(ulong *)(unaff_x20 + 0x50);
    if ((uVar1 == param_1 && param_2 == lVar2) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,lVar2,param_1,param_2,0), (uVar1 & 1) != 0)) {
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(ulong *)(unaff_x20 + 0x50) = param_1;
  *(long *)(unaff_x20 + 0x58) = param_2;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 103f8d984; end: 103f8da1b;  */

void FUN_103f8d984(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  uVar2 = 0;
  _swift_beginAccess(unaff_x20 + 0x88,puVar3,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x88);
  if (lVar1 != 0) {
    func_0x000107c4b3d4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      FUN_103f99348();
      goto LAB_103f8d9e4;
    }
  }
  lVar1 = 0;
  puVar3 = (undefined1 *)0x0;
  uVar2 = 0xff;
LAB_103f8d9e4:
  FUN_103f8da1c(lVar1,puVar3,uVar2,0);
  FUN_103f8f30c(lVar1,puVar3,uVar2);
  return;
}



/* Entry: 103f8da1c; end: 103f8dee3;  */

undefined1  [16] FUN_103f8da1c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if ((((uint)param_3 ^ 0xffffffff) & 0xff) == 0) {
    uVar11 = *(ulong *)(unaff_x20 + 0x78);
    if (uVar11 != 0) {
      uVar13 = *(ulong *)(unaff_x20 + 0x80);
      uVar10 = *(ulong *)(unaff_x20 + 0x70);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar2 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar14);
      pcVar15 = *(code **)(lVar2 + 0x30);
      _swift_bridgeObjectRetain(uVar11);
      uVar3 = uVar11;
      (*pcVar15)(uVar10,uVar11,uVar14,lVar2);
      _swift_bridgeObjectRelease();
      param_1 = uVar11;
      if (((uint)uVar3 & 0xff) != 1 && uVar10 == uVar13) {
        uVar14 = 0;
        goto LAB_103f8de00;
      }
    }
    uVar11 = *(ulong *)(unaff_x20 + 0x58);
    if (uVar11 != 0) {
      uVar13 = *(ulong *)(unaff_x20 + 0x50);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar2 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar14);
      pcVar15 = *(code **)(lVar2 + 0x28);
      _swift_bridgeObjectRetain(uVar11);
      (*pcVar15)(uVar13,uVar11,uVar14,lVar2);
      _swift_bridgeObjectRelease();
      param_1 = uVar11;
      if (uVar13 != 0) goto LAB_103f8db50;
    }
LAB_103f8db74:
    if (((param_4 & 1) != 0) || (func_0x000103f8df94(), param_1 == 0)) {
      uVar13 = 0;
      uVar14 = 1;
      goto LAB_103f8de00;
    }
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar2 = unaff_x20 + 0x10;
    func_0x0001000a8868(lVar2,uVar14);
    FUN_103f8dee4(param_1,param_2,param_3,uVar14,uVar1,lVar2);
    uVar13 = param_1;
    if (param_1 == 0) goto LAB_103f8db74;
LAB_103f8db50:
    param_1 = uVar13;
    _swift_beginAccess(unaff_x20 + 0x88,auStack_a8,0,0);
    if (*(long *)(unaff_x20 + 0x88) != 0) {
      func_0x000107c50564();
    }
  }
  _swift_unknownObjectRetain(param_1);
  uVar1 = 5;
  if ((((uint)param_3 ^ 0xffffffff) & 0xff) != 0) {
    uVar1 = 6;
  }
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  lVar12 = lVar2;
  func_0x0001000a8868(unaff_x20 + 0x10);
  uVar11 = param_1;
  func_0x000107c4a788();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar11);
  lVar6 = lVar12;
  (**(code **)(lVar8 + 0x30))(uVar13,lVar12,lVar2,lVar8);
  lVar2 = lVar6;
  _swift_bridgeObjectRelease(lVar12);
  uVar11 = param_1;
  func_0x000107c4a788();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar11);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease(lVar2);
LAB_103f8dd38:
    _swift_unknownObjectRelease(param_1);
LAB_103f8dd40:
    _swift_beginAccess(unaff_x20 + 0x90,auStack_78,0,0);
    lVar2 = unaff_x20 + 0x90;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) goto LAB_103f8ddf0;
    lVar8 = *(long *)(unaff_x20 + 0x98);
    uVar11 = param_1;
    func_0x000107c5ab3c();
    if ((int)uVar11 != 0) {
LAB_103f8dde8:
      _swift_unknownObjectRelease(lVar2);
      goto LAB_103f8ddf0;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar12 = *(long *)(unaff_x20 + 0x30);
    uVar4 = uVar7;
    func_0x0001000a8868(unaff_x20 + 0x10);
    uVar11 = param_1;
    func_0x000107c4a788();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar11);
    uVar14 = uVar4;
    (**(code **)(lVar12 + 0x30))(uVar13,uVar4,uVar7,lVar12);
    uVar7 = uVar14;
    _swift_bridgeObjectRelease(uVar4);
    if (((uint)uVar14 & 0xff) == 1) goto LAB_103f8dde8;
    uVar11 = param_1;
    func_0x000107c4a788();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar11);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
    *(ulong *)(unaff_x20 + 0x70) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x78) = uVar7;
    *(ulong *)(unaff_x20 + 0x80) = uVar13;
    _swift_bridgeObjectRelease(uVar4);
    lVar12 = lVar2;
    _swift_getObjectType(lVar2);
    puVar5 = &UNK_110728f90;
    _swift_allocObject(&UNK_110728f90,0x41,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(ulong *)(puVar5 + 0x18) = param_1;
    *(ulong *)(puVar5 + 0x20) = uVar13;
    *(undefined8 *)(puVar5 + 0x28) = uVar1;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0;
    puVar5[0x40] = 0;
    pcVar15 = *(code **)(lVar8 + 8);
    _swift_retain();
    _swift_unknownObjectRetain(param_1);
    (*pcVar15)(uVar13,0,0x103f8f320,puVar5,lVar12,lVar8);
    _swift_unknownObjectRelease(lVar2);
    _swift_release(puVar5);
  }
  else {
    if ((uVar3 == *(ulong *)(unaff_x20 + 0x50)) && (lVar2 == lVar8)) {
      _swift_bridgeObjectRelease(lVar2);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,lVar2,*(ulong *)(unaff_x20 + 0x50),lVar8,0);
      _swift_bridgeObjectRelease(lVar2);
      if ((uVar3 & 1) == 0) goto LAB_103f8dd38;
    }
    if (*(long *)(unaff_x20 + 0x58) == 0) {
      uVar9 = (uint)lVar6 & 0xff;
LAB_103f8dcc8:
      if (uVar9 != 1) goto LAB_103f8dd38;
    }
    else {
      uVar9 = (uint)*(byte *)(unaff_x20 + 0x68);
      if (((uint)lVar6 & 0xff) == 1) goto LAB_103f8dcc8;
      if ((*(byte *)(unaff_x20 + 0x68) == 1) || (uVar13 != *(ulong *)(unaff_x20 + 0x60)))
      goto LAB_103f8dd38;
    }
    uVar11 = param_1;
    func_0x000107c5ac00();
    if ((uVar11 & 1) != 0) goto LAB_103f8dd38;
    _swift_beginAccess(unaff_x20 + 0x90,auStack_90,0,0);
    lVar2 = unaff_x20 + 0x90;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) goto LAB_103f8dd38;
    lVar12 = *(long *)(unaff_x20 + 0x98);
    lVar8 = lVar2;
    _swift_getObjectType();
    uVar11 = param_1;
    (**(code **)(lVar12 + 0x10))(param_1,lVar8,lVar12);
    _swift_unknownObjectRelease(lVar2);
    _swift_unknownObjectRelease(param_1);
    if ((uVar11 & 1) == 0) goto LAB_103f8dd40;
LAB_103f8ddf0:
    uVar13 = 0;
    uVar14 = 1;
  }
  _swift_unknownObjectRelease(param_1);
LAB_103f8de00:
  auVar16._8_8_ = uVar14;
  auVar16._0_8_ = uVar13;
  return auVar16;
}



/* Entry: 103f8dee4; end: 103f8e0a7;  */

void FUN_103f8dee4(long param_1,ulong param_2,char param_3,long param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103f8df28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x28))(param_1,param_2,param_4,param_5);
    return;
  }
  lVar3 = param_4;
  lVar4 = param_5;
  (**(code **)(param_5 + 8))();
  if (((uint)lVar4 & 0xff) != 1) {
    lVar4 = lVar3 + (param_2 & 1);
    if (SCARRY8(lVar3,param_2 & 1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8df90);
      (*pcVar1)();
    }
    bVar2 = SCARRY8(param_1,lVar4);
    param_1 = param_1 + lVar4;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8df94);
      (*pcVar1)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000103f8df88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x20))(param_1,param_4,param_5);
  return;
}



/* Entry: 103f8e0a8; end: 103f8e8db;  */

void FUN_103f8e0a8(byte param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar12 = *(long *)(unaff_x20 + 0x28);
  lVar13 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,lVar12);
  (**(code **)(lVar13 + 0x10))(lVar12,lVar13);
  if (1 < lVar12) {
    FUN_103f8f324(unaff_x20 + 0x10,auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    lVar12 = *(long *)(unaff_x20 + 0x58);
    if (lVar12 == 0) {
      lVar13 = 0;
      lVar12 = -0x2000000000000000;
    }
    else {
      lVar13 = *(long *)(unaff_x20 + 0x50);
      _swift_bridgeObjectRetain(lVar12);
    }
    lVar7 = lVar12;
    (**(code **)(lStack_68 + 0x30))(lVar13,lVar12,uStack_70,lStack_68);
    _swift_bridgeObjectRelease(lVar12);
    func_0x0001000834e4(auStack_88);
    if (((uint)lVar7 & 0xff) != 1) {
      lVar12 = *(long *)(unaff_x20 + 0x28);
      lVar7 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,lVar12);
      (**(code **)(lVar7 + 8))();
      if (((uint)lVar7 & 0xff) == 1 || lVar12 <= lVar13) {
        uVar2 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8e3fc);
          (*pcVar1)();
        }
        lVar12 = *(long *)(unaff_x20 + 0x28);
        lVar7 = *(long *)(unaff_x20 + 0x30);
        func_0x0001000a8868(unaff_x20 + 0x10,lVar12);
        (**(code **)(lVar7 + 0x10))(lVar12,lVar7);
        if ((lVar12 <= (long)uVar2) && (uVar2 = lVar13 - 1, SBORROW8(lVar13,1))) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8e1f0);
          (*pcVar1)();
        }
      }
      else {
        uVar2 = lVar13 - 1;
        if (SBORROW8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8e400);
          (*pcVar1)();
        }
      }
      uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar12 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar6);
      (**(code **)(lVar12 + 0x20))(uVar2,uVar6,lVar12);
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c5ab3c();
        if ((uVar3 & 1) == 0) {
          _swift_beginAccess(unaff_x20 + 0x90,auStack_88,0,0);
          lVar12 = unaff_x20 + 0x90;
          _swift_unknownObjectWeakLoadStrong();
          if (lVar12 != 0) {
            lVar13 = *(long *)(unaff_x20 + 0x98);
            uVar3 = uVar2;
            func_0x000107c5ab3c();
            if ((uVar3 & 1) == 0) {
              uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
              lVar7 = *(long *)(unaff_x20 + 0x30);
              uVar10 = uVar6;
              func_0x0001000a8868();
              uVar3 = uVar2;
              func_0x000107c4a788();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              _objc_release(uVar3);
              uVar11 = uVar10;
              (**(code **)(lVar7 + 0x30))(uVar4,uVar10,uVar6,lVar7);
              uVar9 = (uint)uVar11;
              _swift_bridgeObjectRelease(uVar10);
              if ((uVar9 & 0xff) != 1) {
                uVar3 = uVar2;
                func_0x000107c4a788();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar3;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                _objc_release(uVar3);
                uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
                *(ulong *)(unaff_x20 + 0x70) = uVar5;
                *(undefined8 *)(unaff_x20 + 0x78) = uVar11;
                *(ulong *)(unaff_x20 + 0x80) = uVar4;
                _swift_bridgeObjectRelease(uVar6);
                lVar7 = lVar12;
                _swift_getObjectType();
                puVar8 = &UNK_110728fe0;
                _swift_allocObject(&UNK_110728fe0,0x41,7);
                *(long *)(puVar8 + 0x10) = unaff_x20;
                *(ulong *)(puVar8 + 0x18) = uVar2;
                *(ulong *)(puVar8 + 0x20) = uVar4;
                *(undefined8 *)(puVar8 + 0x28) = 4;
                *(code **)(puVar8 + 0x30) = param_2;
                *(undefined8 *)(puVar8 + 0x38) = param_3;
                puVar8[0x40] = param_1 & 1;
                pcVar1 = *(code **)(lVar13 + 8);
                _swift_retain();
                _swift_unknownObjectRetain(uVar2);
                func_0x000100b64c10(param_2,param_3);
                (*pcVar1)(uVar4,param_1 & 1,0x103f8f3e0,puVar8,lVar7,lVar13);
                _swift_unknownObjectRelease(lVar12);
                _swift_release(puVar8);
                goto LAB_103f8e3ec;
              }
            }
            if (param_2 != (code *)0x0) {
              (*param_2)();
            }
            _swift_unknownObjectRelease(lVar12);
          }
LAB_103f8e3ec:
          _swift_unknownObjectRelease(uVar2);
          return;
        }
        _swift_unknownObjectRelease(uVar2);
      }
    }
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 103f8e8dc; end: 103f8e9cf;  */

void FUN_103f8e8dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_68,0,0);
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    func_0x000107c50564();
  }
  _swift_beginAccess(unaff_x20 + 0x90,auStack_80,0,0);
  lVar2 = unaff_x20 + 0x90;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x98);
    lVar3 = lVar2;
    _swift_getObjectType();
    (**(code **)(lVar4 + 0x20))(param_1,param_2);
    _swift_unknownObjectRelease(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar2 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
    (**(code **)(lVar2 + 0x20))(lVar3,uVar1,lVar2);
    if (lVar3 != 0) {
      func_0x000103f8e698();
      _swift_unknownObjectRelease(lVar3);
    }
  }
  return;
}



/* Entry: 103f8e9d0; end: 103f8eb3f;  */

void FUN_103f8e9d0(ulong param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x58);
    if ((lVar3 != 0) &&
       ((uVar2 = *(ulong *)(unaff_x20 + 0x50), uVar2 == param_1 && param_2 == lVar3 ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar2,lVar3,param_1,param_2,0), (uVar2 & 1) != 0)))) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar3 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
      (**(code **)(lVar3 + 0x28))(param_1,param_2,uVar1,lVar3);
      if (param_1 != 0) {
        uVar2 = param_1;
        func_0x000107c4b44c();
        if ((uVar2 == 1) || (uVar2 = param_1, func_0x000107c4b44c(), uVar2 == 3)) {
          func_0x000103f8e698(param_1,5);
        }
        goto LAB_103f8eb14;
      }
    }
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x38);
    if ((uVar2 == param_1 && param_2 == lVar3) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar2,lVar3,param_1,param_2,0), (uVar2 & 1) != 0)) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar3 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
      (**(code **)(lVar3 + 0x28))(param_1,param_2,uVar1,lVar3);
      if (param_1 != 0) {
        uVar2 = param_1;
        func_0x000107c4b44c();
        if ((uVar2 == 1) || (uVar2 = param_1, func_0x000107c4b44c(), uVar2 == 3)) {
          func_0x000103f8d510(param_1,5);
        }
LAB_103f8eb14:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
        return;
      }
    }
  }
  return;
}



/* Entry: 103f8eb40; end: 103f8ebbb;  */

void FUN_103f8eb40(void)

{
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_28,0,0);
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    func_0x000107c50564();
  }
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  func_0x000103f8f2e0(&uStack_80);
  return;
}



/* Entry: 103f8ebbc; end: 103f8ec1f;  */

void FUN_103f8ebbc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  FUN_103f8f3b8(unaff_x20 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8ec20; end: 103f8ec3f;  */

void FUN_103f8ec20(void)

{
  _objc_opt_self(&PTR_PTR_113037e60);
  return;
}



/* Entry: 103f8ec40; end: 103f8ec9b;  */

long FUN_103f8ec40(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f8ec9c; end: 103f8edb3;  */

undefined8 * FUN_103f8ec9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 103f8edb4; end: 103f8ee27;  */

undefined8 * FUN_103f8edb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[9] = param_2[9];
  return param_1;
}



/* Entry: 103f8ee28; end: 103f8eefb;  */

int FUN_103f8ee28(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103f8eefc; end: 103f8ef3f;  */

void FUN_103f8eefc(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(lVar1 + 0x90);
  return;
}



/* Entry: 103f8ef40; end: 103f8f093;  */

void FUN_103f8ef40(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x90,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x98) = param_2;
  _swift_unknownObjectWeakAssign(lVar1 + 0x90,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 103f8f094; end: 103f8f157;  */

void FUN_103f8f094(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x88,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(lVar1 + 0x88));
  return;
}



/* Entry: 103f8f158; end: 103f8f15b;  */

void FUN_103f8f158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103f8f15c; end: 103f8f30b;  */

undefined1  [16] FUN_103f8f15c(void)

{
  long lVar1;
  long *unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*unaff_x20 + 0x50);
    _swift_bridgeObjectRetain(lVar1);
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 103f8f30c; end: 103f8f323;  */

void FUN_103f8f30c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == -1) {
    return;
  }
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 103f8f324; end: 103f8f367;  */

long FUN_103f8f324(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103f8f368; end: 103f8f3a3;  */

void FUN_103f8f368(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103f8f3a4; end: 103f8f3b7;  */

void FUN_103f8f3a4(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x20;
  code *pcVar18;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar11 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar2 = *(code **)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar6 = *(byte *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  lVar10 = *(long *)(lVar1 + 0x30);
  uVar15 = uVar7;
  func_0x0001000a8868(lVar1 + 0x10);
  uVar8 = uVar3;
  func_0x000107c4a788();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar8);
  uVar16 = uVar15;
  (**(code **)(lVar10 + 0x30))(uVar9,uVar15,uVar7,lVar10);
  _swift_bridgeObjectRelease(uVar15);
  if (((uint)uVar16 & 0xff) == 1 || uVar9 != uVar11) {
    _swift_beginAccess(lVar1 + 0x90,auStack_78,0,0);
    lVar10 = lVar1 + 0x90;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 != 0) {
      lVar17 = *(long *)(lVar1 + 0x98);
      uVar11 = uVar3;
      func_0x000107c5ab3c();
      if ((uVar11 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar1 + 0x28);
        lVar12 = *(long *)(lVar1 + 0x30);
        uVar15 = uVar7;
        func_0x0001000a8868(lVar1 + 0x10);
        uVar11 = uVar3;
        func_0x000107c4a788();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar11;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(uVar11);
        uVar16 = uVar15;
        (**(code **)(lVar12 + 0x30))(uVar8,uVar15,uVar7,lVar12);
        uVar14 = (uint)uVar16;
        _swift_bridgeObjectRelease(uVar15);
        if ((uVar14 & 0xff) != 1) {
          uVar11 = uVar3;
          func_0x000107c4a788();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar11;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release(uVar11);
          uVar7 = *(undefined8 *)(lVar1 + 0x78);
          *(ulong *)(lVar1 + 0x70) = uVar9;
          *(undefined8 *)(lVar1 + 0x78) = uVar16;
          *(ulong *)(lVar1 + 0x80) = uVar8;
          _swift_bridgeObjectRelease(uVar7);
          lVar12 = lVar10;
          _swift_getObjectType();
          puVar13 = &UNK_110728fb8;
          _swift_allocObject(&UNK_110728fb8,0x41,7);
          *(long *)(puVar13 + 0x10) = lVar1;
          *(ulong *)(puVar13 + 0x18) = uVar3;
          *(ulong *)(puVar13 + 0x20) = uVar8;
          *(undefined8 *)(puVar13 + 0x28) = uVar4;
          *(code **)(puVar13 + 0x30) = pcVar2;
          *(undefined8 *)(puVar13 + 0x38) = uVar5;
          bVar6 = bVar6 & 1;
          puVar13[0x40] = bVar6;
          pcVar18 = *(code **)(lVar17 + 8);
          _swift_retain(lVar1);
          _swift_unknownObjectRetain(uVar3);
          func_0x000100b64c10(pcVar2,uVar5);
          (*pcVar18)(uVar8,bVar6,FUN_103f8f3dc,puVar13,lVar12,lVar17);
          _swift_unknownObjectRelease(lVar10);
          _swift_release(puVar13);
          return;
        }
      }
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
      _swift_unknownObjectRelease(lVar10);
    }
  }
  else {
    func_0x000103f8e698(uVar3,uVar4);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 103f8f3b8; end: 103f8f3db;  */

undefined8 FUN_103f8f3b8(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f8f3dc; end: 103f8f3f7;  */

void FUN_103f8f3dc(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x20;
  code *pcVar18;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar11 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar2 = *(code **)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar6 = *(byte *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  lVar10 = *(long *)(lVar1 + 0x30);
  uVar15 = uVar7;
  func_0x0001000a8868(lVar1 + 0x10);
  uVar8 = uVar3;
  func_0x000107c4a788();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar8);
  uVar16 = uVar15;
  (**(code **)(lVar10 + 0x30))(uVar9,uVar15,uVar7,lVar10);
  _swift_bridgeObjectRelease(uVar15);
  if (((uint)uVar16 & 0xff) == 1 || uVar9 != uVar11) {
    _swift_beginAccess(lVar1 + 0x90,auStack_78,0,0);
    lVar10 = lVar1 + 0x90;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 != 0) {
      lVar17 = *(long *)(lVar1 + 0x98);
      uVar11 = uVar3;
      func_0x000107c5ab3c();
      if ((uVar11 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar1 + 0x28);
        lVar12 = *(long *)(lVar1 + 0x30);
        uVar15 = uVar7;
        func_0x0001000a8868(lVar1 + 0x10);
        uVar11 = uVar3;
        func_0x000107c4a788();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar11;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(uVar11);
        uVar16 = uVar15;
        (**(code **)(lVar12 + 0x30))(uVar8,uVar15,uVar7,lVar12);
        uVar14 = (uint)uVar16;
        _swift_bridgeObjectRelease(uVar15);
        if ((uVar14 & 0xff) != 1) {
          uVar11 = uVar3;
          func_0x000107c4a788();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar11;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release(uVar11);
          uVar7 = *(undefined8 *)(lVar1 + 0x78);
          *(ulong *)(lVar1 + 0x70) = uVar9;
          *(undefined8 *)(lVar1 + 0x78) = uVar16;
          *(ulong *)(lVar1 + 0x80) = uVar8;
          _swift_bridgeObjectRelease(uVar7);
          lVar12 = lVar10;
          _swift_getObjectType();
          puVar13 = &UNK_110728fb8;
          _swift_allocObject(&UNK_110728fb8,0x41,7);
          *(long *)(puVar13 + 0x10) = lVar1;
          *(ulong *)(puVar13 + 0x18) = uVar3;
          *(ulong *)(puVar13 + 0x20) = uVar8;
          *(undefined8 *)(puVar13 + 0x28) = uVar4;
          *(code **)(puVar13 + 0x30) = pcVar2;
          *(undefined8 *)(puVar13 + 0x38) = uVar5;
          bVar6 = bVar6 & 1;
          puVar13[0x40] = bVar6;
          pcVar18 = *(code **)(lVar17 + 8);
          _swift_retain(lVar1);
          _swift_unknownObjectRetain(uVar3);
          func_0x000100b64c10(pcVar2,uVar5);
          (*pcVar18)(uVar8,bVar6,FUN_103f8f3dc,puVar13,lVar12,lVar17);
          _swift_unknownObjectRelease(lVar10);
          _swift_release(puVar13);
          return;
        }
      }
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
      _swift_unknownObjectRelease(lVar10);
    }
  }
  else {
    func_0x000103f8e698(uVar3,uVar4);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 103f8f3f8; end: 103f8f417;  */

void FUN_103f8f3f8(void)

{
  _objc_opt_self(&PTR_PTR_113037f18);
  return;
}



/* Entry: 103f8f418; end: 103f8f423;  */

void FUN_103f8f418(void)

{
  return;
}



/* Entry: 103f8f424; end: 103f8f43f;  */

void FUN_103f8f424(void)

{
  _objc_allocWithZone(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103f8f440; end: 103f8f4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f8f440(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar5;
  long unaff_x20;
  long lVar4;
  
  lVar3 = unaff_x20 + _DAT_113037f70;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010bf20c00();
    iVar2 = (int)lVar4;
    _CGRectContainsPoint();
    if (iVar2 == 0) {
      _objc_release(lVar3);
    }
    else {
      lVar4 = unaff_x20 + _DAT_113037f78;
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      lVar1 = *(long *)(lVar4 + 0x20);
      func_0x0001000a8868(lVar4,uVar5);
      (**(code **)(lVar1 + 8))(param_1,param_2,lVar3,uVar5,lVar1);
      _objc_release(lVar3);
      if (((uint)uVar5 & 0xff) != 1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 103f8f4fc; end: 103f8f5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8f4fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong *unaff_x20;
  
  lVar2 = _DAT_113037f70;
  lVar1 = (long)unaff_x20 + _DAT_113037f70;
  _swift_unknownObjectWeakLoadStrong();
  if ((lVar1 != 0) && (_objc_release(), lVar1 == param_1)) {
    return;
  }
  lVar1 = (long)unaff_x20 + lVar2;
  _swift_unknownObjectWeakAssign(lVar1,param_1);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x88))();
  func_0x00010befbd40();
  func_0x000107c53fcc(lVar1);
  lVar2 = (long)unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    func_0x00010bef9040();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103f8f5c0; end: 103f8f6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f8f5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar6;
  long unaff_x20;
  long lVar5;
  
  lVar4 = _DAT_113037f70;
  lVar3 = unaff_x20 + _DAT_113037f70;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    func_0x000107c4b8b8(param_3);
    lVar4 = unaff_x20 + lVar4;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x00010bf20c00();
      iVar2 = (int)lVar5;
      _CGRectContainsPoint();
      if (iVar2 != 0) {
        lVar5 = unaff_x20 + _DAT_113037f78;
        uVar6 = *(undefined8 *)(lVar5 + 0x18);
        lVar1 = *(long *)(lVar5 + 0x20);
        func_0x0001000a8868(lVar5,uVar6);
        (**(code **)(lVar1 + 8))(param_1,param_2,lVar4,uVar6,lVar1);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (((uint)uVar6 & 0xff) == 1) {
          return 0;
        }
        return 1;
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  return 0;
}



/* Entry: 103f8f6b4; end: 103f8f70f; -[_TtC21LensCarouselPresenter26LensCarouselBaseTapHandler gestureRecognizerShouldBegin:] */

uint FUN_103f8f6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103f8f5c0(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}


