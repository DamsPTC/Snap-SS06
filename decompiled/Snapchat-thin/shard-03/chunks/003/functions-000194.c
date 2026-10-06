/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026d7c30; end: 1026d7f3f;  */

void FUN_1026d7c30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar6 = 0xed0000636973754d;
  uVar7 = 0x6c616e7265747865;
  uVar1 = 0xef72656e6e61426b;
  uVar4 = 0x6361426572616873;
  if (bVar3 != 3) {
    uVar1 = 0xef676e696472616f;
    uVar4 = 0x626e4f636973756d;
  }
  uVar2 = 0x800000010f0b6500;
  uVar5 = 0xd000000000000013;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  if (bVar3 == 0) {
    uVar7 = 0xd000000000000014;
    uVar6 = 0x800000010f0b6520;
  }
  if (bVar3 < 2) {
    uVar2 = uVar6;
    uVar5 = uVar7;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1026d7f40; end: 1026d8003;  */

void FUN_1026d7f40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar6 = 0xed0000636973754d;
  uVar7 = 0x6c616e7265747865;
  uVar1 = 0xef72656e6e61426b;
  uVar4 = 0x6361426572616873;
  if (bVar3 != 3) {
    uVar1 = 0xef676e696472616f;
    uVar4 = 0x626e4f636973756d;
  }
  uVar2 = 0x800000010f0b6500;
  uVar5 = 0xd000000000000013;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  if (bVar3 == 0) {
    uVar7 = 0xd000000000000014;
    uVar6 = 0x800000010f0b6520;
  }
  if (bVar3 < 2) {
    uVar2 = uVar6;
    uVar5 = uVar7;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1026d8004; end: 1026d820f;  */

void FUN_1026d8004(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112eb6e78;
  func_0x0001000285a8(0x112eb6e78,&UNK_10dacd6a8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1026d8210; end: 1026d8213;  */

void FUN_1026d8210(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd6c0;
  func_0x000107c61520(&UNK_10dacd6c0,&UNK_110539c90);
  puRam0000000112eb6e90 = puVar1;
  return;
}



/* Entry: 1026d8214; end: 1026d827f;  */

void FUN_1026d8214(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd6c0;
  func_0x000107c61520(&UNK_10dacd6c0,&UNK_110539c90);
  puRam0000000112eb6e90 = puVar1;
  return;
}



/* Entry: 1026d8280; end: 1026d8283;  */

void FUN_1026d8280(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd7a0;
  func_0x000107c61520(&UNK_10dacd7a0,&UNK_110539d20);
  puRam0000000112eb6ea8 = puVar1;
  return;
}



/* Entry: 1026d8284; end: 1026d82ef;  */

void FUN_1026d8284(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd7a0;
  func_0x000107c61520(&UNK_10dacd7a0,&UNK_110539d20);
  puRam0000000112eb6ea8 = puVar1;
  return;
}



/* Entry: 1026d82f0; end: 1026d82f3;  */

void FUN_1026d82f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd880;
  func_0x000107c61520(&UNK_10dacd880,&UNK_110539db0);
  puRam0000000112eb6ec0 = puVar1;
  return;
}



/* Entry: 1026d82f4; end: 1026d835f;  */

void FUN_1026d82f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd880;
  func_0x000107c61520(&UNK_10dacd880,&UNK_110539db0);
  puRam0000000112eb6ec0 = puVar1;
  return;
}



/* Entry: 1026d8360; end: 1026d8363;  */

void FUN_1026d8360(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd8f0;
  func_0x000107c61520(&UNK_10dacd8f0,&UNK_110539db0);
  puRam0000000112eb6ed8 = puVar1;
  return;
}



/* Entry: 1026d8364; end: 1026d83a3;  */

void FUN_1026d8364(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd8f0;
  func_0x000107c61520(&UNK_10dacd8f0,&UNK_110539db0);
  puRam0000000112eb6ed8 = puVar1;
  return;
}



/* Entry: 1026d83a4; end: 1026d83a7;  */

void FUN_1026d83a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd8a8;
  func_0x000107c61520(&UNK_10dacd8a8,&UNK_110539db0);
  puRam0000000112eb6ee0 = puVar1;
  return;
}



/* Entry: 1026d83a8; end: 1026d83e7;  */

void FUN_1026d83a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd8a8;
  func_0x000107c61520(&UNK_10dacd8a8,&UNK_110539db0);
  puRam0000000112eb6ee0 = puVar1;
  return;
}



/* Entry: 1026d83e8; end: 1026d83eb;  */

void FUN_1026d83e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd944;
  func_0x000107c61520(&UNK_10dacd944,&UNK_110539e40);
  puRam0000000112eb6f10 = puVar1;
  return;
}



/* Entry: 1026d83ec; end: 1026d8457;  */

void FUN_1026d83ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd944;
  func_0x000107c61520(&UNK_10dacd944,&UNK_110539e40);
  puRam0000000112eb6f10 = puVar1;
  return;
}



/* Entry: 1026d8458; end: 1026d849b;  */

void FUN_1026d8458(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1026d849c; end: 1026d849f;  */

void FUN_1026d849c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd9b8;
  func_0x000107c61520(&UNK_10dacd9b8,&UNK_110539e40);
  puRam0000000112eb6f28 = puVar1;
  return;
}



/* Entry: 1026d84a0; end: 1026d84df;  */

void FUN_1026d84a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd9b8;
  func_0x000107c61520(&UNK_10dacd9b8,&UNK_110539e40);
  puRam0000000112eb6f28 = puVar1;
  return;
}



/* Entry: 1026d84e0; end: 1026d84e3;  */

void FUN_1026d84e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd96c;
  func_0x000107c61520(&UNK_10dacd96c,&UNK_110539e40);
  puRam0000000112eb6f30 = puVar1;
  return;
}



/* Entry: 1026d84e4; end: 1026d8523;  */

void FUN_1026d84e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd96c;
  func_0x000107c61520(&UNK_10dacd96c,&UNK_110539e40);
  puRam0000000112eb6f30 = puVar1;
  return;
}



/* Entry: 1026d8524; end: 1026d885b;  */

void FUN_1026d8524(void)

{
  return;
}



/* Entry: 1026d885c; end: 1026d8aa3;  */

long FUN_1026d885c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026d8aa4; end: 1026d8b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d8aa4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112eb7148);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_2;
      FUN_1026d8b6c();
      func_0x000107c61170(param_2);
    }
    lStack_68 = lVar2;
    func_0x000100087c34(&lStack_68);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1026d8b6c; end: 1026d8d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1026d8b6c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  FUN_1026d8dc4();
  if ((param_1 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126aada8;
    func_0x000107c610f8(PTR_PTR_1126aada8);
    func_0x000107c48ee0();
    func_0x000100083b20(&puStack_80);
    func_0x000107c437cc(puStack_80);
    func_0x000107c61170(puStack_80);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c5a080(puVar6);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_11053a0e0;
    puVar3 = puVar2;
    func_0x000107c613fc(&UNK_11053a0e0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_1026d9ce8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11053a120;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c56f08(puVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c613fc(&UNK_11053a0e0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_60 = (code *)0x1026d9d08;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11053a148;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c56d08(puVar6);
    func_0x000107c60bd0(ppuVar5);
  }
  return puVar6;
}



/* Entry: 1026d8d2c; end: 1026d8dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1026d8d2c(ulong param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  FUN_1026d8dc4();
  if ((param_1 & 1) == 0) {
    uVar1 = 2;
  }
  else {
    func_0x000100083b20(&lStack_38);
    lVar3 = lStack_38;
    lVar2 = lStack_38;
    func_0x000107c4c2b0();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
      func_0x000100083b20(&lStack_38);
      lVar3 = lStack_38;
      func_0x000107c4c2ac(lStack_38);
      func_0x000107c61170(lStack_38);
      uVar1 = lVar3 == 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 1026d8dc4; end: 1026d8f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026d8dc4(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long unaff_x20;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb7180);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c407bc();
    if ((int)lVar2 == 4) {
      uVar3 = *(ulong *)(unaff_x20 + _DAT_112eb7178);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar3 != 0) {
        uVar4 = uVar3;
        func_0x000107c4ec80();
        func_0x000107c61180();
        func_0x000107c615e8(uVar3);
        if (uVar4 != 0) {
          uVar3 = uVar4;
          func_0x000107c443c8();
          if ((uVar3 & 1) == 0) {
            func_0x000100083b20(&lStack_48);
            lVar2 = lStack_48;
            lVar5 = lStack_48;
            func_0x000107c4c2b0();
            func_0x000107c61170(lVar2);
            iVar7 = (int)*(undefined8 *)(unaff_x20 + _DAT_112eb7170);
            uVar6 = 0xd000000000000033;
            func_0x000107c5fadc(0xd000000000000033,0x800000010f0b6570);
            func_0x000107c4980c();
            func_0x000107c61170(uVar6);
            if (lVar5 < iVar7) {
              func_0x000100083b20(&lStack_48);
              lVar2 = lStack_48;
              func_0x000107c4c2ac();
              func_0x000107c61170(lStack_48);
              func_0x000107c615e8(lVar1);
              func_0x000107c61170(uVar4);
              if (lVar2 != 0) {
                return 0;
              }
              return 1;
            }
          }
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(uVar4);
          return 0;
        }
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return 0;
}



/* Entry: 1026d8f50; end: 1026d905f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d8f50(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  puVar3 = PTR_PTR_1126c5f40;
  func_0x000107c610f8(PTR_PTR_1126c5f40);
  func_0x000107c453e4();
  lVar1 = _DAT_112eb7160;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7160,auStack_48,0,0);
  if (*(long *)(unaff_x20 + lVar1) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1026d905c);
    (*pcVar2)();
  }
  func_0x000107c52bd0(puVar3);
  func_0x000107c52bd4(puVar3);
  func_0x000107c59558(puVar3);
  func_0x000100083b20(&lStack_50);
  lVar1 = lStack_50;
  func_0x000107c4bfb0(lStack_50);
  func_0x000107c615e8(lVar1);
  func_0x000100083b20(&lStack_50);
  lVar1 = lStack_50;
  lVar4 = lStack_50;
  func_0x000107c4c2b0();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_50);
  if (!SCARRY8(lVar4,1)) {
    func_0x000107c561f8(lStack_50);
    func_0x000107c61170(lStack_50);
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026d9060);
  (*pcVar2)();
}



/* Entry: 1026d9060; end: 1026d926b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d9060(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb7180);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_11053a0e0;
    func_0x000107c613fc(&UNK_11053a0e0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_68 = FUN_1026d9d28;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100288f10;
    puStack_70 = &UNK_11053a170;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_60);
    func_0x000107c503a8(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_112eb7190);
  lVar2 = lVar6;
  func_0x000107c4c370();
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c42ae4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d9268);
      (*pcVar1)();
    }
    func_0x000107c61428(unaff_x20 + _DAT_112eb7160,auStack_58,0,0);
    func_0x000107c4c404(lVar2);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c4c370();
  func_0x000107c61180();
  lVar2 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar2 != 0) {
    lVar5 = lVar2;
    func_0x000107c42ae4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d926c);
      (*pcVar1)();
    }
    func_0x000107c61428(unaff_x20 + _DAT_112eb7160,&puStack_88,0,0);
    func_0x000107c4c2b4(lVar5);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 1026d926c; end: 1026d92c3;  */

void FUN_1026d926c(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1026d92c4; end: 1026d950b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d92c4(double param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000100083b20(auStack_68);
  func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar4 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d94fc);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d9504);
      (*pcVar1)();
    }
    func_0x000107c561f4(auStack_68[0]);
    func_0x000107c61170(auStack_68[0]);
    auStack_68[0] = 0;
    func_0x000100087c34(auStack_68);
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb7190);
    lVar2 = lVar3;
    func_0x000107c4c370();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x000107c42ae4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d9508);
        (*pcVar1)();
      }
      func_0x000107c61428(unaff_x20 + _DAT_112eb7160,auStack_80,0,0);
      func_0x000107c4c404(lVar2);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c4c370();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c42ae4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d950c);
        (*pcVar1)();
      }
      func_0x000107c61428(unaff_x20 + _DAT_112eb7160,auStack_68,0,0);
      func_0x000107c4c2b4(lVar4);
      func_0x000107c615e8(lVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d9500);
  (*pcVar1)();
}



/* Entry: 1026d950c; end: 1026d958f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d950c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112eb71a0);
    if (lVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c615f0(lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c41864(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1026d9590; end: 1026d95ef; -[_TtC24MapUpsellServiceProvider41BackgroundLocationRecoveryUpsellGenerator init] */

void FUN_1026d9590(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapUpsellServiceProvider.BackgroundLocationRecoveryUpsellGenerator",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d95bc);
  (*pcVar1)();
}



/* Entry: 1026d95f0; end: 1026d96a7; -[_TtC24MapUpsellServiceProvider41BackgroundLocationRecoveryUpsellGenerator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026d963c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026d9640) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d95f0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb7148));
  FUN_1026d9d30(param_1 + _DAT_112eb7158);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb7168));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb7170));
  return;
}



/* Entry: 1026d96a8; end: 1026d96c7;  */

void FUN_1026d96a8(void)

{
  func_0x000107c61168(&PTR_PTR_112859490);
  return;
}



/* Entry: 1026d96c8; end: 1026d972b;  */

void FUN_1026d96c8(void)

{
  FUN_1026d9b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026d972c; end: 1026d973f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1026d972c(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112eb7150);
}



/* Entry: 1026d9740; end: 1026d9787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d9740(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb7158;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112eb7158,auStack_38,0,0);
  func_0x000107c61618(lVar2 + lVar1);
  return;
}



/* Entry: 1026d9788; end: 1026d98db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d9788(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7158;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112eb7158,auStack_48,1,0);
  func_0x000107c61604(lVar2 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1026d98dc; end: 1026d991f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026d98dc(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb7160;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112eb7160,auStack_38,0,0);
  return *(undefined8 *)(lVar2 + lVar1);
}



/* Entry: 1026d9920; end: 1026d996f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d9920(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7160;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112eb7160,auStack_48,1,0);
  *(undefined8 *)(lVar2 + lVar1) = param_1;
  return;
}



/* Entry: 1026d9970; end: 1026d99b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026d9970(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_112eb7160;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112eb7160,param_1,0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = FUN_1026d99b4;
  return auVar3;
}



/* Entry: 1026d99b4; end: 1026d99b7;  */

void FUN_1026d99b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026d99b8; end: 1026d9a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d99b8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  puVar2 = PTR_PTR_1126b1c10;
  func_0x000107c610f8();
  func_0x000107c495dc(uVar3);
  lVar1 = _DAT_112eb71a0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb71a0);
  *(undefined **)(unaff_x20 + _DAT_112eb71a0) = puVar2;
  func_0x000107c615e8(uVar3);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + lVar1),PTR_s_attachUI__1125a0c08,param_1);
    return;
  }
  return;
}



/* Entry: 1026d9a3c; end: 1026d9a8b; -[_TtC24MapUpsellServiceProvider41BackgroundLocationRecoveryUpsellGenerator permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Possible PIC construction at 0x0001026d9a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026d9a78) */

void FUN_1026d9a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1026d99b8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1026d9a8c; end: 1026d9ac3; -[_TtC24MapUpsellServiceProvider41BackgroundLocationRecoveryUpsellGenerator permissionsManagerModalPresentationContainer] */

void FUN_1026d9a8c(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  func_0x000107c610f8(PTR_PTR_1126b1c10);
  func_0x000107c495dc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026d9ac4; end: 1026d9b6f;  */

void FUN_1026d9ac4(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1026d9b70; end: 1026d9b7f;  */

void FUN_1026d9b70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1026d9b80; end: 1026d9cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026d9b80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112eb7180);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c4e640();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    puVar1 = &UNK_11053a0e0;
    func_0x000107c613fc(&UNK_11053a0e0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_40 = FUN_1026d9cc4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_10103b94c;
    puStack_48 = &UNK_11053a0f8;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    puVar1 = puVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c3e924(puVar1);
    func_0x000107c61170();
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb7148);
  FUN_1026d8b6c();
  puStack_60 = puVar1;
  func_0x000100087c34(&puStack_60);
  func_0x000107c61170(puVar1);
  return uVar4;
}



/* Entry: 1026d9cc4; end: 1026d9ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d9cc4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112eb7148);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar1;
      FUN_1026d8b6c();
      func_0x000107c61170(lVar1);
    }
    lStack_68 = lVar3;
    func_0x000100087c34(&lStack_68);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1026d9ce8; end: 1026d9d27;  */

void FUN_1026d9ce8(void)

{
  FUN_1026d926c();
  return;
}



/* Entry: 1026d9d28; end: 1026d9d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d9d28(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112eb71a0);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c615f0(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c41864(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1026d9d30; end: 1026d9d53;  */

undefined8 FUN_1026d9d30(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026d9d54; end: 1026d9da3;  */

void FUN_1026d9d54(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112eb71d0 != 0) {
    return;
  }
  puVar1 = &UNK_11053a1a8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112eb71d0 = param_1;
  return;
}



/* Entry: 1026d9da4; end: 1026d9da7;  */

void FUN_1026d9da4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb71d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1026d9d54(0xff);
  puVar2 = &UNK_10dacdbc4;
  func_0x000107c61520(&UNK_10dacdbc4,uVar1);
  puRam0000000112eb71d8 = puVar2;
  return;
}



/* Entry: 1026d9da8; end: 1026d9deb;  */

void FUN_1026d9da8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb71d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1026d9d54(0xff);
  puVar2 = &UNK_10dacdbc4;
  func_0x000107c61520(&UNK_10dacdbc4,uVar1);
  puRam0000000112eb71d8 = puVar2;
  return;
}



/* Entry: 1026d9dec; end: 1026d9e0b;  */

void FUN_1026d9dec(long param_1,long param_2)

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



/* Entry: 1026d9e0c; end: 1026d9ed3;  */

undefined1 FUN_1026d9e0c(void)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  ulong uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar3 = uStack_38;
  uVar2 = uStack_38;
  func_0x000107c437cc();
  func_0x000107c61170(uVar3);
  if ((uVar2 & 1) == 0) {
    func_0x000100083b20(&uStack_38);
    uVar3 = uStack_38;
    func_0x000107c4c32c(uStack_38);
    func_0x000107c61170(uStack_38);
    lVar5 = *(long *)(unaff_x20 + 0x28);
    uVar4 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f0b6600);
    func_0x000107c4c0d0(lVar5);
    func_0x000107c61170(uVar4);
    uVar1 = (long)uVar3 <= lVar5;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1026d9ed4; end: 1026da04f;  */

bool FUN_1026d9ed4(double param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026da040);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026da044);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026da048);
    (*pcVar1)();
  }
  lVar4 = (long)param_1;
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  lVar3 = lStack_58;
  func_0x000107c4c32c();
  func_0x000107c61170(lVar2);
  if (lVar3 + 999U < 1999) {
    func_0x000100083b20(&lStack_58);
    if (SUB168(SEXT816(lVar4) * SEXT816(1000),8) != lVar4 * 1000 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026da050);
      (*pcVar1)();
    }
    func_0x000107c56228(lStack_58);
    func_0x000107c61170(lStack_58);
  }
  lVar2 = lVar4 - lVar3 / 1000;
  if (!SBORROW8(lVar4,lVar3 / 1000)) {
    return (999 < lVar3 && lVar2 != 0x278d00) && (lVar3 < 1000 || 0x278cff < lVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026da04c);
  (*pcVar1)();
}



/* Entry: 1026da050; end: 1026da193;  */

undefined * FUN_1026da050(int param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  func_0x000100083b20(&puStack_60);
  puVar2 = puStack_60;
  func_0x000107c437cc();
  func_0x000107c61170();
  if (((ulong)puVar2 & 1) == 0) {
    FUN_1026d9ed4();
    ppuVar1 = &PTR_PTR_113184ae8;
    if (((uint)puStack_60 & 1) == 0 && param_1 == 0) {
      ppuVar1 = &PTR_PTR_113184ae0;
    }
    puVar4 = *ppuVar1;
    func_0x000107c61174(puVar4);
    puVar3 = PTR_PTR_1126aada8;
    func_0x000107c610f8(PTR_PTR_1126aada8);
    func_0x000107c48ee0();
    puVar2 = &UNK_11053a280;
    func_0x000107c613fc(&UNK_11053a280,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    uStack_40 = 0x1026da950;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11053a298;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c56f08(puVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar4);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}



/* Entry: 1026da194; end: 1026da1e7;  */

void FUN_1026da194(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1026da1e8();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1026da1e8; end: 1026da3b7;  */

void FUN_1026da1e8(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x48,auStack_48,0,0);
  FUN_1026da974(unaff_x20 + 0x48,auStack_70);
  func_0x0001026da9c4(auStack_70);
  if (lStack_58 == 0) {
    puVar2 = PTR_PTR_1126aadb0;
    func_0x000107c610f8(PTR_PTR_1126aadb0);
    func_0x000107c453e4();
    lVar3 = *(long *)(unaff_x20 + 0x40);
    func_0x000107c4c370();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c52060();
      func_0x000107c615e8(lVar4);
      if (lVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026da3b8);
        (*pcVar1)();
      }
      func_0x000107c56288(puVar2);
    }
    uVar5 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f0b6630);
    func_0x000107c52140(puVar2);
    func_0x000107c61170(uVar5);
    func_0x000100083b20(auStack_70);
    func_0x000107c4bfb0(auStack_70[0]);
    func_0x000107c615e8(auStack_70[0]);
    auStack_70[0] = 0;
    func_0x00010008a7c8(&uStack_78,auStack_70);
    func_0x000100083b20(auStack_70);
    func_0x000107c61574(uStack_78);
    func_0x000107c61428(unaff_x20 + 0x48,auStack_90,0x21,0);
    func_0x0001026daa0c(auStack_70,unaff_x20 + 0x48);
    func_0x000107c614a8(auStack_90);
    func_0x000107c6157c();
    uVar5 = 0x10;
    func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dacdcb8);
    func_0x000107c61170(puVar2);
    func_0x000107c61574();
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 1026da3b8; end: 1026da3cf;  */

void FUN_1026da3b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026da3d0,0,0);
  return;
}



/* Entry: 1026da3d0; end: 1026da4fb;  */

void FUN_1026da3d0(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61428(lVar5 + 0x48,unaff_x22 + 0x60,0,0);
  if (*(long *)(lVar5 + 0x60) != 0) {
    FUN_1026daaec(lVar5 + 0x48,unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
    piVar4 = *(int **)(lVar5 + 8);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1026da4fc;
                    /* WARNING: Could not recover jumptable at 0x0001026da470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(uVar2,lVar5);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  lVar5 = *(long *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  func_0x000107c61428(lVar5 + 0x48,unaff_x22 + 0x78,0x21,0);
  func_0x0001026daa0c((undefined8 *)(unaff_x22 + 0x10),lVar5 + 0x48);
  func_0x000107c614a8(unaff_x22 + 0x78);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x90,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c4c434();
    func_0x000107c615e8(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026da4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026da4fc; end: 1026da543;  */

void FUN_1026da4fc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026da544,0,0);
  return;
}



/* Entry: 1026da544; end: 1026da5e3;  */

void FUN_1026da544(void)

{
  long lVar1;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  func_0x000107c61428(lVar1 + 0x48,unaff_x22 + 0x78,0x21,0);
  func_0x0001026daa0c((undefined8 *)(unaff_x22 + 0x10),lVar1 + 0x48);
  func_0x000107c614a8(unaff_x22 + 0x78);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x90,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4c434();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026da5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026da5e4; end: 1026da657;  */

void FUN_1026da5e4(void)

{
  long unaff_x20;
  
  FUN_1026d9d30(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001026da9c4(unaff_x20 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026da658; end: 1026da6cb;  */

undefined8 * FUN_1026da658(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112eb72b8,&UNK_10dacdca0);
  FUN_1026da050();
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  func_0x000100854cb0(puVar1);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1026da6cc; end: 1026da6ef;  */

uint FUN_1026da6cc(uint param_1)

{
  FUN_1026d9e0c();
  return param_1 & 0xff;
}



/* Entry: 1026da6f0; end: 1026da6f3;  */

void FUN_1026da6f0(void)

{
  return;
}



/* Entry: 1026da6f4; end: 1026da7a7;  */

uint FUN_1026da6f4(uint param_1)

{
  FUN_1026d9ed4();
  return param_1 & 1;
}



/* Entry: 1026da7a8; end: 1026da893;  */

undefined1  [16] FUN_1026da7a8(long *param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xce30);
  }
  *param_1 = lVar1;
  lVar2 = *unaff_x20;
  *(long *)(lVar1 + 0x20) = lVar2;
  func_0x000107c61428(lVar2 + 0x10,lVar1,0x21,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(lVar1 + 0x18) = lVar2;
  auVar3._8_8_ = (long *)(lVar1 + 0x18);
  auVar3._0_8_ = 0x1026da828;
  return auVar3;
}



/* Entry: 1026da894; end: 1026da94b;  */

undefined8 FUN_1026da894(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x18,auStack_38,0,0);
  return *(undefined8 *)(lVar1 + 0x18);
}



/* Entry: 1026da94c; end: 1026da973;  */

void FUN_1026da94c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026da974; end: 1026daa5b;  */

undefined8 FUN_1026da974(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112eb72c0;
  func_0x0001000285a8(0x112eb72c0,&UNK_10dacdca8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1026daa5c; end: 1026daaaf;  */

void FUN_1026daa5c(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1026daab0;
  plVar1[0x15] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026da3d0,0,0);
  return;
}



/* Entry: 1026daab0; end: 1026daaeb;  */

void FUN_1026daab0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026daae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026daaec; end: 1026dabc3;  */

long FUN_1026daaec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1026dabc4; end: 1026dabcb;  */

void FUN_1026dabc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1026dc5d0(0);
  func_0x000107c610f8();
  func_0x0001026dc514(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1026dabcc; end: 1026dafb7;  */

void FUN_1026dabcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb72d0,&UNK_10dacdcc8);
  puVar1 = &UNK_11053a2d8;
  func_0x000107c613fc(&UNK_11053a2d8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026dafb8,puVar1);
  return;
}



/* Entry: 1026dafb8; end: 1026db003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026dafb8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long *aplStack_d0 [3];
  long lStack_b8;
  undefined **ppuStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(alStack_a8,uVar11,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),uVar1,*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  lVar10 = alStack_a8[0];
  func_0x000100083b20(aplStack_d0);
  plVar4 = aplStack_d0[0];
  func_0x000100083b20(&uStack_68);
  uVar5 = uStack_68;
  lVar2 = 0;
  func_0x0001026da638();
  lVar3 = lVar2;
  func_0x000107c613fc();
  func_0x000107c61614(lVar3 + 0x10,0);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x20) = uVar11;
  *(long *)(lVar3 + 0x28) = lVar10;
  *(long **)(lVar3 + 0x30) = plVar4;
  *(undefined8 *)(lVar3 + 0x38) = uVar1;
  *(undefined8 *)(lVar3 + 0x40) = uVar5;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar1);
  func_0x000100083b20(alStack_a8);
  func_0x000100083b20(aplStack_d0);
  plVar4 = aplStack_d0[0];
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(aplStack_d0[0]);
  func_0x000100083b20(&uStack_68);
  uVar5 = uStack_68;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  lVar6 = 0;
  FUN_1026d96a8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar10 = _DAT_112eb7148;
  func_0x0001000285a8(0x112eb72d8,&UNK_10dacdd18);
  func_0x000107c613fc();
  uVar8 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar7 + lVar10) = uVar8;
  *(undefined1 *)(lVar7 + _DAT_112eb7150) = 0;
  func_0x000107c61614(lVar7 + _DAT_112eb7158,0);
  *(undefined8 *)(lVar7 + _DAT_112eb7160) = 0;
  lVar10 = _DAT_112eb7198;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar7 + lVar10) = puVar9;
  *(undefined8 *)(lVar7 + _DAT_112eb71a0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112eb7168) = uVar11;
  *(long *)(lVar7 + _DAT_112eb7170) = alStack_a8[0];
  *(long **)(lVar7 + _DAT_112eb7178) = plVar4;
  *(undefined8 *)(lVar7 + _DAT_112eb7180) = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112eb7188) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112eb7190) = uStack_70;
  puVar9 = PTR_s_init_1125d9248;
  lStack_80 = lVar7;
  lStack_78 = lVar6;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar1);
  plVar4 = &lStack_80;
  func_0x000107c61154(plVar4,puVar9);
  ppuStack_88 = &PTR_DAT_11053a218;
  ppuStack_b0 = &PTR_DAT_11053a078;
  lVar10 = 0;
  aplStack_d0[0] = plVar4;
  lStack_b8 = lVar6;
  alStack_a8[0] = lVar3;
  lStack_90 = lVar2;
  func_0x0001026dbaa4();
  func_0x000107c613fc();
  func_0x000107c61614(lVar10 + 0x10,0);
  *(undefined8 *)(lVar10 + 0x18) = 0;
  uVar11 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar10 + 0x20) = uVar11;
  func_0x0001026dafec(alStack_a8,lVar10 + 0x28);
  func_0x0001026dafec(aplStack_d0,lVar10 + 0x50);
  *param_1 = lVar10;
  return;
}



/* Entry: 1026db004; end: 1026db01b; -[_TtC24MapUpsellServiceProvider20MeTrayUpsellProvider trayDismissalDelegate] */

void FUN_1026db004(long param_1)

{
  func_0x000107c61618(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026db01c; end: 1026db05f; -[_TtC24MapUpsellServiceProvider20MeTrayUpsellProvider setTrayDismissalDelegate:] */

void FUN_1026db01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  FUN_1026dc0e8(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1026db060; end: 1026db067; -[_TtC24MapUpsellServiceProvider20MeTrayUpsellProvider mapStatusSessionId] */

undefined8 FUN_1026db060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1026db068; end: 1026db097; -[_TtC24MapUpsellServiceProvider20MeTrayUpsellProvider setMapStatusSessionId:] */

void FUN_1026db068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_1026db098(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1026db098; end: 1026db15f;  */

void FUN_1026db098(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  func_0x000107c61428(unaff_x20 + 0x28,auStack_48,0x21,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  func_0x0001000c6518(unaff_x20 + 0x28,uVar1);
  (**(code **)(lVar2 + 0x48))(param_1,uVar1,lVar2);
  func_0x000107c614a8(auStack_48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(unaff_x20 + 0x50,auStack_48,0x21,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar2 = *(long *)(unaff_x20 + 0x70);
  func_0x0001000c6518(unaff_x20 + 0x50,uVar1);
  (**(code **)(lVar2 + 0x48))(uVar3,uVar1,lVar2);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 1026db160; end: 1026db193; -[_TtC24MapUpsellServiceProvider20MeTrayUpsellProvider shouldShowBadge] */

uint FUN_1026db160(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_1026db194();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 1026db194; end: 1026db58b;  */

uint FUN_1026db194(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x28,auStack_68,0,0);
  uVar1 = *(ulong *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  func_0x0001000a8868(unaff_x20 + 0x28,uVar1);
  lVar7 = *(long *)(uVar1 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar6);
  uVar3 = uVar1;
  (**(code **)(lVar2 + 0x20))(uVar1,lVar2);
  (**(code **)(lVar7 + 8))(puVar6,uVar1);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    lVar7 = *(long *)(unaff_x20 + 0x48);
    func_0x0001000a8868(unaff_x20 + 0x28,lVar2);
    lVar9 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
    lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar9 + 0x10))(lVar8);
    lVar4 = lVar2;
    (**(code **)(lVar7 + 0x10))(lVar2,lVar7);
    uVar5 = (uint)lVar4;
    (**(code **)(lVar9 + 8))(lVar8,lVar2);
    if ((uVar5 & 0xff) != 2) goto LAB_1026db358;
  }
  func_0x000107c61428(unaff_x20 + 0x50,auStack_80,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x68);
  lVar7 = *(long *)(unaff_x20 + 0x70);
  func_0x0001000a8868(unaff_x20 + 0x50,lVar2);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x10))(lVar8);
  lVar4 = lVar2;
  (**(code **)(lVar7 + 0x10))(lVar2,lVar7);
  uVar5 = (uint)lVar4;
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
LAB_1026db358:
  return uVar5 & 1;
}



/* Entry: 1026db58c; end: 1026dba2b;  */

void FUN_1026db58c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [152];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    puVar7 = PTR_PTR_1126aadb8;
    func_0x000107c610f8();
    uVar9 = 0;
    FUN_1026dbb38(0);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar9);
    func_0x000107c49130();
    func_0x000107c61170(puVar6);
    puStack_d0 = puVar7;
    func_0x000100087c34(&puStack_d0);
    func_0x000107c61170(puVar7);
    return;
  }
  func_0x000107c61428(param_3 + 0x28,auStack_a0,0,0);
  uVar11 = *(ulong *)(param_3 + 0x40);
  lVar8 = *(long *)(param_3 + 0x48);
  func_0x0001000a8868(param_3 + 0x28,uVar11);
  lVar12 = *(long *)(uVar11 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar4 = (long)&uStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar12 + 0x10))(lVar4);
  uVar3 = uVar11;
  (**(code **)(lVar8 + 0x20))(uVar11,lVar8);
  (**(code **)(lVar12 + 8))(lVar4,uVar11);
  lVar8 = 0x112eb73b0;
  func_0x0001000285a8(0x112eb73b0,&UNK_10dacdd90);
  func_0x000107c613fc();
  uStack_178 = 4;
  uStack_180 = 2;
  *(undefined8 *)(lVar8 + 0x18) = 4;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  uVar9 = param_1;
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar9 = param_2;
    uVar1 = param_1;
  }
  *(undefined8 *)(lVar8 + 0x20) = uVar1;
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar11 = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar3 = uVar11;
    if (uVar11 < 3) {
      uVar3 = 2;
    }
    do {
      if (uVar11 == 2) {
        func_0x000107c6142c(lVar8);
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar6 = puVar7;
          }
          func_0x000107c60480();
        }
        if (puVar6 != (undefined *)0x0) {
          if (((ulong)puVar7 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1026dba2c);
              (*pcVar2)();
            }
            lVar8 = *(long *)(puVar7 + 0x20);
            func_0x000107c61174(lVar8);
          }
          else {
            lVar8 = 0;
            FUN_1026dbc94(0,puVar7);
          }
          lVar4 = 0x112eb73b8;
          func_0x0001000285a8(0x112eb73b8,&UNK_10dacdd98);
          func_0x000107c61534();
          *(undefined8 *)(lVar4 + 0x18) = uStack_178;
          *(undefined8 *)(lVar4 + 0x10) = uStack_180;
          *(undefined4 *)(lVar4 + 0x20) = 0;
          FUN_1026dbac4(param_3 + 0x28,lVar4 + 0x28);
          *(undefined4 *)(lVar4 + 0x50) = 1;
          func_0x000107c61428(param_3 + 0x50,auStack_168,0,0);
          FUN_1026dbac4(param_3 + 0x50,lVar4 + 0x58);
          lVar12 = lVar4;
          FUN_1026dc1c8();
          func_0x000107c61588(lVar4);
          uVar9 = 0x112eb73c0;
          func_0x0001000285a8(0x112eb73c0,&UNK_10dacdda0);
          uVar11 = 0;
          func_0x000107c61408((undefined4 *)(lVar4 + 0x20),2,uVar9);
          lVar4 = lVar8;
          func_0x000107c5d0f0(lVar8);
          if ((*(long *)(lVar12 + 0x10) == 0) || (FUN_1026dbbd8(), (uVar11 & 1) == 0)) {
            lStack_b0 = 0;
            uStack_c8 = 0;
            puStack_d0 = (undefined *)0x0;
            lStack_b8 = 0;
            uStack_c0 = 0;
          }
          else {
            FUN_1026dbac4(*(long *)(lVar12 + 0x38) + lVar4 * 0x28,&puStack_d0);
          }
          func_0x000107c6142c(lVar12);
          lVar12 = lStack_b0;
          lVar4 = lStack_b8;
          if (lStack_b8 == 0) {
            func_0x000107c61170(lVar8);
            FUN_1026dc2c4(&puStack_d0);
          }
          else {
            func_0x0001000a8868(&puStack_d0,lStack_b8);
            (**(code **)(lVar12 + 0x18))(lVar4,lVar12);
            func_0x000107c61170(lVar8);
            func_0x0001000834e4(&puStack_d0);
          }
        }
        puVar6 = PTR_PTR_1126aadb8;
        func_0x000107c610f8();
        uVar9 = 0;
        FUN_1026dbb38(0);
        puVar5 = puVar7;
        func_0x000107c5fc48(puVar7,uVar9);
        func_0x000107c6142c(puVar7);
        func_0x000107c49130();
        func_0x000107c61170(puVar5);
        puStack_d0 = puVar6;
        func_0x000100087c34(&puStack_d0);
        func_0x000107c61170(puVar6);
        func_0x000107c61574(param_3);
        return;
      }
      if (uVar3 == uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026dba00);
        (*pcVar2)();
      }
      lVar4 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      uVar11 = uVar11 + 1;
    } while (lVar4 == 0);
    func_0x000107c61174();
    puVar6 = puVar7;
    func_0x000107c61550();
    if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
       (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar5 = puVar7;
        }
        func_0x000107c60480(puVar5);
      }
      puVar6 = (undefined *)0x0;
      FUN_1026dbe48(0,puVar5 + 1,1,puVar7);
    }
    uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
    uVar3 = *(ulong *)(uVar10 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar3) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_1026dbe48(puVar7,uVar3 + 1,1,puVar6);
      uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar10 + 0x10) = uVar3 + 1;
    *(long *)(uVar10 + uVar3 * 8 + 0x20) = lVar4;
  } while( true );
}



/* Entry: 1026dba2c; end: 1026dba67; -[_TtC24MapUpsellServiceProvider20MeTrayUpsellProvider upsellObservableWithMeTrayState:] */

void FUN_1026dba2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  func_0x0001026db378(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1026dba68; end: 1026dbac3;  */

void FUN_1026dba68(void)

{
  long unaff_x20;
  
  FUN_1026d9d30(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x0001000834e4(unaff_x20 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026dbac4; end: 1026dbb07;  */

long FUN_1026dbac4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1026dbb08; end: 1026dbb0f;  */

void FUN_1026dbb08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x8;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [152];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    puVar8 = PTR_PTR_1126aadb8;
    func_0x000107c610f8();
    uVar10 = 0;
    FUN_1026dbb38(0);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar10);
    func_0x000107c49130();
    func_0x000107c61170(puVar7);
    puStack_d0 = puVar8;
    func_0x000100087c34(&puStack_d0);
    func_0x000107c61170(puVar8);
    return;
  }
  func_0x000107c61428(lVar3 + 0x28,auStack_a0,0,0);
  uVar12 = *(ulong *)(lVar3 + 0x40);
  lVar9 = *(long *)(lVar3 + 0x48);
  func_0x0001000a8868(lVar3 + 0x28,uVar12);
  lVar13 = *(long *)(uVar12 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar5 = (long)&uStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar13 + 0x10))(lVar5);
  uVar4 = uVar12;
  (**(code **)(lVar9 + 0x20))(uVar12,lVar9);
  (**(code **)(lVar13 + 8))(lVar5,uVar12);
  lVar9 = 0x112eb73b0;
  func_0x0001000285a8(0x112eb73b0,&UNK_10dacdd90);
  func_0x000107c613fc();
  uStack_178 = 4;
  uStack_180 = 2;
  *(undefined8 *)(lVar9 + 0x18) = 4;
  *(undefined8 *)(lVar9 + 0x10) = 2;
  uVar10 = param_1;
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar10 = param_2;
    uVar1 = param_1;
  }
  *(undefined8 *)(lVar9 + 0x20) = uVar1;
  *(undefined8 *)(lVar9 + 0x28) = uVar10;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar12 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar4 = uVar12;
    if (uVar12 < 3) {
      uVar4 = 2;
    }
    do {
      if (uVar12 == 2) {
        func_0x000107c6142c(lVar9);
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            puVar7 = puVar8;
          }
          func_0x000107c60480();
        }
        if (puVar7 != (undefined *)0x0) {
          if (((ulong)puVar8 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1026dba2c);
              (*pcVar2)();
            }
            lVar9 = *(long *)(puVar8 + 0x20);
            func_0x000107c61174(lVar9);
          }
          else {
            lVar9 = 0;
            FUN_1026dbc94(0,puVar8);
          }
          lVar5 = 0x112eb73b8;
          func_0x0001000285a8(0x112eb73b8,&UNK_10dacdd98);
          func_0x000107c61534();
          *(undefined8 *)(lVar5 + 0x18) = uStack_178;
          *(undefined8 *)(lVar5 + 0x10) = uStack_180;
          *(undefined4 *)(lVar5 + 0x20) = 0;
          FUN_1026dbac4(lVar3 + 0x28,lVar5 + 0x28);
          *(undefined4 *)(lVar5 + 0x50) = 1;
          func_0x000107c61428(lVar3 + 0x50,auStack_168,0,0);
          FUN_1026dbac4(lVar3 + 0x50,lVar5 + 0x58);
          lVar13 = lVar5;
          FUN_1026dc1c8();
          func_0x000107c61588(lVar5);
          uVar10 = 0x112eb73c0;
          func_0x0001000285a8(0x112eb73c0,&UNK_10dacdda0);
          uVar12 = 0;
          func_0x000107c61408((undefined4 *)(lVar5 + 0x20),2,uVar10);
          lVar5 = lVar9;
          func_0x000107c5d0f0(lVar9);
          if ((*(long *)(lVar13 + 0x10) == 0) || (FUN_1026dbbd8(), (uVar12 & 1) == 0)) {
            lStack_b0 = 0;
            uStack_c8 = 0;
            puStack_d0 = (undefined *)0x0;
            lStack_b8 = 0;
            uStack_c0 = 0;
          }
          else {
            FUN_1026dbac4(*(long *)(lVar13 + 0x38) + lVar5 * 0x28,&puStack_d0);
          }
          func_0x000107c6142c(lVar13);
          lVar13 = lStack_b0;
          lVar5 = lStack_b8;
          if (lStack_b8 == 0) {
            func_0x000107c61170(lVar9);
            FUN_1026dc2c4(&puStack_d0);
          }
          else {
            func_0x0001000a8868(&puStack_d0,lStack_b8);
            (**(code **)(lVar13 + 0x18))(lVar5,lVar13);
            func_0x000107c61170(lVar9);
            func_0x0001000834e4(&puStack_d0);
          }
        }
        puVar7 = PTR_PTR_1126aadb8;
        func_0x000107c610f8();
        uVar10 = 0;
        FUN_1026dbb38(0);
        puVar6 = puVar8;
        func_0x000107c5fc48(puVar8,uVar10);
        func_0x000107c6142c(puVar8);
        func_0x000107c49130();
        func_0x000107c61170(puVar6);
        puStack_d0 = puVar7;
        func_0x000100087c34(&puStack_d0);
        func_0x000107c61170(puVar7);
        func_0x000107c61574(lVar3);
        return;
      }
      if (uVar4 == uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026dba00);
        (*pcVar2)();
      }
      lVar5 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      uVar12 = uVar12 + 1;
    } while (lVar5 == 0);
    func_0x000107c61174();
    puVar7 = puVar8;
    func_0x000107c61550();
    if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
       (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar6 = puVar8;
        }
        func_0x000107c60480(puVar6);
      }
      puVar7 = (undefined *)0x0;
      FUN_1026dbe48(0,puVar6 + 1,1,puVar8);
    }
    uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
    uVar4 = *(ulong *)(uVar11 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar4) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_1026dbe48(puVar8,uVar4 + 1,1,puVar7);
      uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar4 + 1;
    *(long *)(uVar11 + uVar4 * 8 + 0x20) = lVar5;
  } while( true );
}



/* Entry: 1026dbb10; end: 1026dbb37;  */

void FUN_1026dbb10(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 1026dbb38; end: 1026dbbd7;  */

void FUN_1026dbb38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb73a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aada8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb73a8 = puVar1;
  return;
}



/* Entry: 1026dbbd8; end: 1026dbc2f;  */

void FUN_1026dbbd8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c6069c();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(int *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 4) == (int)param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1026dbc30; end: 1026dbc93;  */

void FUN_1026dbc30(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(int *)(*(long *)(unaff_x20 + 0x30) + param_2 * 4) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1026dbc94; end: 1026dbe47;  */

ulong FUN_1026dbc94(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026dbd78);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026dbd7c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126aada8;
    func_0x000107c61168(PTR_PTR_1126aada8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126aada8;
    func_0x000107c61168(PTR_PTR_1126aada8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1026dbb38(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026dbe48);
  (*pcVar2)();
}



/* Entry: 1026dbe48; end: 1026dbf6f;  */

ulong FUN_1026dbe48(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026dbf70);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1026dbf70(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026dbf6c);
      (*pcVar1)();
    }
    FUN_1026dbff0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1026dbf70; end: 1026dbfef;  */

undefined * FUN_1026dbf70(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x0001026dbb7c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1026dbff0; end: 1026dc0e7;  */

long FUN_1026dbff0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026dc0e4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026dc0e8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1026dbb38(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1026dbb38(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1026dc0e0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}


