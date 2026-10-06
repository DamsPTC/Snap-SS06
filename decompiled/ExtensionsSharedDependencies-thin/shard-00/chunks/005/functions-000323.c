/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0064b708; end: 0064b723;  */

void FUN_0064b708(long param_1)

{
  func_0x0071e2e8();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 0064b724; end: 0064b733;  */

void FUN_0064b724(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0064b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 8))();
  return;
}



/* Entry: 0064b734; end: 0064b7ef;  */

void FUN_0064b734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___tlv_bootstrap_00b2c588;
  ppuVar3 = &PTR___tlv_bootstrap_00b2c588;
  ppuVar2 = ppuVar3;
  (*(code *)PTR___tlv_bootstrap_00b2c588)();
  if (((ulong)*ppuVar2 & 1) == 0) {
    FUN_00524eb4(&uStack_50);
    __ZNSt3__113random_deviceclEv(&uStack_50);
    func_0x0064b9f4();
    func_0x0064b7f8();
    __ZNSt3__113random_deviceD1Ev(&uStack_50);
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar3 = 1;
    ppuVar2 = ppuVar3;
  }
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0064b9f4();
  FUN_0064b7f0(&uStack_50,ppuVar2);
  return;
}



/* Entry: 0064b7f0; end: 0064b833;  */

void FUN_0064b7f0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1[1] - *param_1 != 0) {
    puVar1 = (undefined8 *)((param_1[1] - *param_1) + 1);
    if (puVar1 == (undefined8 *)0x0) {
      uStack_58 = 0x40;
      uStack_60 = 0x40;
      uStack_48 = 1;
      uStack_50 = 1;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0xffffffffffffffff;
      uStack_28 = 0xffffffffffffffff;
      uStack_68 = param_2;
      FUN_0064b930(&uStack_68);
    }
    else {
      lVar2 = 0x3f;
      if (((long)puVar1 << (LZCOUNT(puVar1) & 0x3fU) & 0x7fffffffffffffffU) != 0) {
        lVar2 = 0x40;
      }
      FUN_0064b8d4(&uStack_68,param_2,lVar2 - LZCOUNT(puVar1));
      do {
        puVar3 = &uStack_68;
        FUN_0064b930();
      } while (puVar1 <= puVar3);
    }
  }
  return;
}



/* Entry: 0064b834; end: 0064b8d3;  */

void FUN_0064b834(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3[1] - *param_3 != 0) {
    puVar1 = (undefined8 *)((param_3[1] - *param_3) + 1);
    if (puVar1 == (undefined8 *)0x0) {
      uStack_58 = 0x40;
      uStack_60 = 0x40;
      uStack_48 = 1;
      uStack_50 = 1;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0xffffffffffffffff;
      uStack_28 = 0xffffffffffffffff;
      uStack_68 = param_2;
      FUN_0064b930(&uStack_68);
    }
    else {
      lVar2 = 0x3f;
      if (((long)puVar1 << (LZCOUNT(puVar1) & 0x3fU) & 0x7fffffffffffffffU) != 0) {
        lVar2 = 0x40;
      }
      FUN_0064b8d4(&uStack_68,param_2,lVar2 - LZCOUNT(puVar1));
      do {
        puVar3 = &uStack_68;
        FUN_0064b930();
      } while (puVar1 <= puVar3);
    }
  }
  return;
}



/* Entry: 0064b8d4; end: 0064b92f;  */

void FUN_0064b8d4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar3 = param_3 >> 6;
  if ((param_3 & 0x3f) != 0) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = param_3 / uVar3;
  }
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar3 + (uVar2 * uVar3 - param_3);
  param_1[5] = 0;
  uVar1 = 0;
  if (uVar3 <= param_3) {
    uVar1 = 0xffffffffffffffff >> (-uVar2 & 0x3f);
  }
  param_1[6] = 0;
  param_1[7] = uVar1;
  uVar3 = 0xffffffffffffffff >> (~uVar2 & 0x3f);
  if (0x3e < uVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  param_1[8] = uVar3;
  return;
}



/* Entry: 0064b930; end: 0064b95b;  */

ulong FUN_0064b930(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  FUN_0064b95c(uVar1);
  return param_1[7] & uVar1;
}



/* Entry: 0064b95c; end: 0064b9ff;  */

ulong FUN_0064b95c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x9c0);
  uVar2 = (lVar1 + 1U) % 0x138;
  uVar3 = *(ulong *)(param_1 + uVar2 * 8);
  uVar4 = 0xb5026f5aa96619e9;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  uVar4 = uVar4 ^ *(ulong *)(param_1 + ((lVar1 + 0x9cU) % 0x138) * 8) ^
          (uVar3 & 0x7ffffffe | *(ulong *)(param_1 + lVar1 * 8) & 0xffffffff80000000) >> 1;
  *(ulong *)(param_1 + lVar1 * 8) = uVar4;
  uVar4 = uVar4 >> 0x1d & 0x5555555555555555 ^ uVar4;
  *(ulong *)(param_1 + 0x9c0) = uVar2;
  uVar4 = (uVar4 & 0x38eb3ffff6d3) << 0x11 ^ uVar4;
  uVar4 = (uVar4 & 0x7ffbf77) << 0x25 ^ uVar4;
  return uVar4 ^ uVar4 >> 0x2b;
}



/* Entry: 0064ba00; end: 0064babf;  */

long FUN_0064ba00(void)

{
  int iVar1;
  long lVar2;
  int extraout_w8;
  undefined1 auStack_38 [24];
  
  if ((bRam0000000000b6c6b8 & 1) == 0) {
    lVar2 = 0xb6c6b8;
    ___cxa_guard_acquire();
    if ((int)lVar2 != 0) {
      func_0x0064c230();
      FUN_0064bb48();
      __ZNSt3__16thread20hardware_concurrencyEv();
      func_0x0064c254();
      iVar1 = *(int *)(lVar2 + 0x24);
      if ((*(byte *)(lVar2 + 0x2c) & 0 < iVar1) == 0) {
        iVar1 = extraout_w8;
      }
      FUN_0064bac0(auStack_38,iVar1);
      FUN_0064cd94();
      func_0x0064c1f8();
      lRam0000000000b6c6b0 = lVar2;
      ___cxa_guard_release(0xb6c6b8);
    }
  }
  return lRam0000000000b6c6b0;
}



/* Entry: 0064bac0; end: 0064bb47;  */

undefined8 FUN_0064bac0(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000000b24bc0 & 1) == 0) {
    iVar1 = 0xb24bc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0064c240();
      func_0x0064c248();
      func_0x0064c238();
      uRam0000000000b24bb8 = unaff_x20;
      ___cxa_guard_release(0xb24bc0);
    }
  }
  return uRam0000000000b24bb8;
}



/* Entry: 0064bb48; end: 0064bbc7;  */

undefined8 * FUN_0064bb48(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000000b6c6c8 & 1) == 0) {
    iVar1 = 0xb6c6c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)((long)&segment_command_00000020.vmaddr + 4);
      __Znwm();
      *(undefined8 *)((long)puVar2 + 0x34) = 0;
      *(undefined8 *)((long)puVar2 + 0x2c) = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puRam0000000000b6c6c0 = puVar2;
      ___cxa_guard_release(0xb6c6c8);
    }
  }
  return puRam0000000000b6c6c0;
}



/* Entry: 0064bbc8; end: 0064bc2f;  */

long FUN_0064bbc8(long param_1)

{
  int iVar1;
  int extraout_w8;
  undefined1 auStack_38 [24];
  
  func_0x0064c230(param_1,&UNK_009101d1);
  FUN_0064bb48();
  __ZNSt3__16thread20hardware_concurrencyEv();
  func_0x0064c254();
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x20) & 0 < iVar1) == 0) {
    iVar1 = extraout_w8;
  }
  FUN_0064bc30(auStack_38,iVar1);
  func_0x0064c1f8();
  return param_1;
}



/* Entry: 0064bc30; end: 0064bcb7;  */

undefined8 FUN_0064bc30(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000000b24bd0 & 1) == 0) {
    iVar1 = 0xb24bd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0064c240();
      func_0x0064c248();
      func_0x0064c238();
      uRam0000000000b24bc8 = unaff_x20;
      ___cxa_guard_release(0xb24bd0);
    }
  }
  return uRam0000000000b24bc8;
}



/* Entry: 0064bcb8; end: 0064bd13;  */

void FUN_0064bcb8(long param_1)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  func_0x0064c230(param_1,&UNK_009101e4);
  FUN_0064bb48();
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(byte *)(param_1 + 0x14) & 0 < iVar1) == 0) {
    iVar1 = 2;
  }
  FUN_0064bd14(auStack_38,iVar1);
  func_0x0064c1f8();
  return;
}



/* Entry: 0064bd14; end: 0064bd9b;  */

undefined8 FUN_0064bd14(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000000b24be0 & 1) == 0) {
    iVar1 = 0xb24be0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0064c240();
      func_0x0064c248();
      func_0x0064c238();
      uRam0000000000b24bd8 = unaff_x20;
      ___cxa_guard_release(0xb24be0);
    }
  }
  return uRam0000000000b24bd8;
}



/* Entry: 0064bd9c; end: 0064bdf7;  */

void FUN_0064bd9c(int *param_1)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  func_0x0064c230(param_1,&UNK_009101ef);
  FUN_0064bb48();
  iVar1 = *param_1;
  if ((*(byte *)(param_1 + 2) & 0 < iVar1) == 0) {
    iVar1 = 2;
  }
  FUN_0064bdf8(auStack_38,iVar1);
  func_0x0064c1f8();
  return;
}



/* Entry: 0064bdf8; end: 0064be7f;  */

undefined8 FUN_0064bdf8(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000000b24bf0 & 1) == 0) {
    iVar1 = 0xb24bf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0064c240();
      func_0x0064c248();
      func_0x0064c238();
      uRam0000000000b24be8 = unaff_x20;
      ___cxa_guard_release(0xb24bf0);
    }
  }
  return uRam0000000000b24be8;
}



/* Entry: 0064be80; end: 0064bed7;  */

void FUN_0064be80(long param_1)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  func_0x0064c230(param_1,&UNK_009101fb);
  FUN_0064bb48();
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x38) & 0 < iVar1) == 0) {
    iVar1 = 1;
  }
  FUN_0064bed8(auStack_38,iVar1);
  func_0x0064c1f8();
  return;
}



/* Entry: 0064bed8; end: 0064bf5f;  */

undefined8 FUN_0064bed8(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000000b24c00 & 1) == 0) {
    iVar1 = 0xb24c00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0064c240();
      func_0x0064c248();
      func_0x0064c238();
      uRam0000000000b24bf8 = unaff_x20;
      ___cxa_guard_release(0xb24c00);
    }
  }
  return uRam0000000000b24bf8;
}



/* Entry: 0064bf60; end: 0064bf97;  */

void FUN_0064bf60(int *param_1)

{
  int iVar1;
  long lVar2;
  int extraout_w8;
  int extraout_w8_00;
  undefined1 auStack_38 [24];
  
  switch((ulong)param_1 & 0xffffffff) {
  case 0:
    func_0x0064c230(param_1,&UNK_009101ef);
    FUN_0064bb48();
    iVar1 = *param_1;
    if ((*(byte *)(param_1 + 2) & 0 < iVar1) == 0) {
      iVar1 = 2;
    }
    FUN_0064bdf8(auStack_38,iVar1);
    func_0x0064c1f8();
    break;
  case 1:
    func_0x0064c230(param_1,&UNK_009101e4);
    FUN_0064bb48();
    iVar1 = param_1[3];
    if ((*(byte *)(param_1 + 5) & 0 < iVar1) == 0) {
      iVar1 = 2;
    }
    FUN_0064bd14(auStack_38,iVar1);
    func_0x0064c1f8();
    break;
  case 2:
    func_0x0064c230(param_1,&UNK_009101d1);
    FUN_0064bb48();
    __ZNSt3__16thread20hardware_concurrencyEv();
    func_0x0064c254();
    iVar1 = param_1[6];
    if ((*(byte *)(param_1 + 8) & 0 < iVar1) == 0) {
      iVar1 = extraout_w8_00;
    }
    FUN_0064bc30(auStack_38,iVar1);
    func_0x0064c1f8();
    break;
  default:
    if ((bRam0000000000b6c6b8 & 1) == 0) {
      lVar2 = 0xb6c6b8;
      ___cxa_guard_acquire();
      if ((int)lVar2 != 0) {
        func_0x0064c230();
        FUN_0064bb48();
        __ZNSt3__16thread20hardware_concurrencyEv();
        func_0x0064c254();
        iVar1 = *(int *)(lVar2 + 0x24);
        if ((*(byte *)(lVar2 + 0x2c) & 0 < iVar1) == 0) {
          iVar1 = extraout_w8;
        }
        FUN_0064bac0(auStack_38,iVar1);
        FUN_0064cd94();
        func_0x0064c1f8();
        lRam0000000000b6c6b0 = lVar2;
        ___cxa_guard_release(0xb6c6b8);
      }
    }
    break;
  case 5:
    func_0x0064c230(param_1,&UNK_009101fb);
    FUN_0064bb48();
    iVar1 = param_1[0xc];
    if ((*(byte *)(param_1 + 0xe) & 0 < iVar1) == 0) {
      iVar1 = 1;
    }
    FUN_0064bed8(auStack_38,iVar1);
    func_0x0064c1f8();
  }
  return;
}



/* Entry: 0064bf98; end: 0064c0db;  */

void FUN_0064bf98(qword *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  qword *pqVar3;
  qword qVar4;
  qword qVar5;
  qword qVar6;
  qword qVar7;
  qword qVar8;
  qword qVar9;
  undefined8 uVar10;
  qword *pqStack_30;
  undefined1 uStack_28;
  
  if ((bRam0000000000b6c6d8 & 1) == 0) {
    iVar2 = 0xb6c6d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      pqVar3 = &segment_command_00000020.vmsize;
      __Znwm();
      *pqVar3 = 0x32aaaba7;
      pqVar3[2] = 0;
      pqVar3[1] = 0;
      pqVar3[4] = 0;
      pqVar3[3] = 0;
      pqVar3[6] = 0;
      pqVar3[5] = 0;
      pqVar3[7] = 0;
      pqRam0000000000b6c6d0 = pqVar3;
      ___cxa_guard_release(0xb6c6d8);
    }
  }
  pqStack_30 = pqRam0000000000b6c6d0;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  if ((bRam0000000000b6c6e8 & 1) == 0) {
    iVar2 = 0xb6c6e8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      pqVar3 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined1 *)pqVar3 = 0;
      *(undefined1 *)((long)pqVar3 + 0x3c) = 0;
      pqRam0000000000b6c6e0 = pqVar3;
      ___cxa_guard_release(0xb6c6e8);
    }
  }
  pqVar3 = pqRam0000000000b6c6e0;
  if ((*(byte *)((long)pqRam0000000000b6c6e0 + 0x3c) & 1) == 0) {
    qVar5 = param_1[1];
    qVar4 = *param_1;
    qVar7 = param_1[3];
    qVar6 = param_1[2];
    qVar9 = param_1[5];
    qVar8 = param_1[4];
    uVar10 = *(undefined8 *)((long)param_1 + 0x2c);
    puVar1 = (undefined8 *)((long)pqRam0000000000b6c6e0 + 0x2c);
    *(undefined8 *)((long)pqRam0000000000b6c6e0 + 0x34) = *(undefined8 *)((long)param_1 + 0x34);
    *puVar1 = uVar10;
    pqVar3[3] = qVar7;
    pqVar3[2] = qVar6;
    pqVar3[5] = qVar9;
    pqVar3[4] = qVar8;
    pqVar3[1] = qVar5;
    *pqVar3 = qVar4;
    *(undefined1 *)((long)pqVar3 + 0x3c) = 1;
  }
  FUN_0040d514(&pqStack_30);
  return;
}



/* Entry: 0064c0dc; end: 0064c1f7;  */

void FUN_0064c0dc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 auStack_60 [2];
  undefined1 auStack_58 [24];
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    __ZNSt3__15mutex4lockEv(param_1 + 0xc0);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x18))();
    auStack_60[0] = SUB84(plVar1,0);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x10))(auStack_58,param_2);
    FUN_00716bc8();
    plVar2 = plVar1;
    FUN_00716c1c();
    (**(code **)(*param_2 + 0x28))(param_2);
    plVar3 = param_2;
    FUN_00716bc8();
    plVar4 = plVar3;
    FUN_00716c1c();
    FUN_0064c9d4(param_1 + 0xa8,auStack_60,param_2,(long)plVar3 - (long)plVar1,
                 (long)plVar4 - (long)plVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    __ZNSt3__15mutex6unlockEv(param_1 + 0xc0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0064c1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2);
  return;
}



/* Entry: 0064c1f8; end: 0064c267;  */

void FUN_0064c1f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (&stack0x00000008);
  return;
}



/* Entry: 0064c268; end: 0064c347;  */

void FUN_0064c268(void)

{
  undefined8 uVar1;
  undefined8 in_x4;
  long unaff_x19;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0064c9c0();
  func_0x0064f1e4(&uStack_50,in_x4);
  *(undefined8 *)(unaff_x19 + 0x10) = uStack_48;
  *(undefined8 *)(unaff_x19 + 8) = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_0064c6f0(&uStack_50);
  uVar1 = 0xc0;
  __Znwm();
  FUN_0064d784();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x59) = 0;
  *(undefined8 *)(unaff_x19 + 0x51) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0x64c6e0;
  *(undefined ***)(unaff_x19 + 0x70) = &PTR_FUN_009e3508;
  *(undefined1 *)(unaff_x19 + 0x98) = 0;
  return;
}



/* Entry: 0064c348; end: 0064c3af;  */

void FUN_0064c348(long param_1)

{
  long unaff_x19;
  
  func_0x0064c9c0();
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x40))();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x70))();
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x20);
  func_0x0064c718((undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 0064c3b0; end: 0064c3b3;  */

void FUN_0064c3b0(long param_1)

{
  long unaff_x19;
  
  func_0x0064c9c0();
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x40))();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x70))();
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x20);
  func_0x0064c718((undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 0064c3b4; end: 0064c3c7;  */

void FUN_0064c3b4(void)

{
  FUN_0064c348();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064c3c8; end: 0064c417;  */

void FUN_0064c3c8(long param_1,undefined8 param_2)

{
  if ((*(byte *)(*(long *)(param_1 + 0x70) + 8) & 1) == 0) {
    (**(code **)(param_1 + 0x68))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0064c414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
            (*(long **)(param_1 + 0x18),param_2,*(undefined1 *)(param_1 + 0x98));
  return;
}



/* Entry: 0064c418; end: 0064c54b;  */

void FUN_0064c418(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  section *psVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined1 *puVar5;
  undefined ****ppppuVar6;
  undefined ****ppppuVar7;
  undefined4 uVar8;
  code **ppcVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 *puStack_210;
  undefined ****ppppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined ***pppuStack_1d8;
  undefined1 uStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_168;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *apuStack_108 [11];
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  section *psStack_98;
  undefined8 uStack_48;
  
  lVar1 = param_2;
  func_0x0064c9a4();
  uStack_118 = param_4;
  uStack_48 = extraout_x8;
  FUN_0045cc3c();
  uStack_110 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_108,param_3 + 1);
  pcStack_a8 = FUN_0064c740;
  ppuStack_a0 = &PTR_FUN_00a0cd40;
  psVar2 = &section_00000068;
  lStack_b0 = lVar1;
  __Znwm();
  *(undefined8 *)psVar2->sectname = uStack_110;
  (*(code *)apuStack_108[0][2])(psVar2->sectname + 8,apuStack_108);
  *(long *)psVar2[1].segname = lStack_b0;
  psStack_98 = psVar2;
  (*(code *)*apuStack_108[0])(apuStack_108);
  ppcVar9 = &pcStack_a8;
  puVar11 = &uStack_118;
  (**(code **)(**(long **)(param_2 + 8) + 0x10))(param_1,*(long **)(param_2 + 8),ppcVar9,param_2);
  uVar8 = SUB84(ppcVar9,0);
  (*(code *)*ppuStack_a0)();
  func_0x0064c970(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar3 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  func_0x0064c984();
  pcStack_128 = FUN_0064c54c;
  pppuVar4 = pppuVar3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x0064c9a4();
  pppuStack_1d8 = pppuVar4 + 4;
  puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  uStack_1d0 = 1;
  uStack_168 = extraout_x8_00;
  __ZNSt3__15mutex4lockEv();
  uVar10 = SUB84(puVar11,0);
  if (((ulong)pppuVar3[0xc] & 1) == 0) {
    *(undefined1 *)(pppuVar3 + 0xc) = 1;
    do {
      FUN_0047bf20(auStack_1e0);
      FUN_0047beb4(auStack_1e8,auStack_1e0);
      pcStack_1c8 = FUN_0064c7f8;
      ppuStack_1c0 = &PTR_FUN_00a0cd58;
      uVar8 = SUB84(&pcStack_1c8,0);
      pppuStack_1b8 = pppuVar3;
      puStack_1b0 = auStack_1e0;
      (*(code *)(*pppuVar3)[2])(pppuVar3);
      func_0x0064c994();
      puVar5 = auStack_1e8;
      FUN_0047bed4();
      FUN_0047c274(auStack_1e8);
      FUN_0047bff0(auStack_1e0);
      uVar10 = SUB84(puVar11,0);
      in_ZR = (int)puVar5 == 1;
    } while (!(bool)in_ZR);
  }
  ppppuVar6 = &pppuStack_1d8;
  FUN_0040d514();
  func_0x0064c970(uStack_168);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppppuVar7 = &pppuStack_1d8;
  FUN_0040d514(ppppuVar7);
  func_0x0064c984();
  pcStack_1f8 = FUN_0064c66c;
  uStack_218 = uVar10;
  uStack_214 = uVar8;
  puStack_210 = puVar5;
  ppppuStack_208 = ppppuVar6;
  ppuStack_200 = &puStack_130;
  FUN_0064bf60(param_2);
  FUN_0064c6b0(extraout_x8_01,ppppuVar7,&uStack_214,param_2,&uStack_218);
  return;
}



/* Entry: 0064c54c; end: 0064c66b;  */

void FUN_0064c54c(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  long **pplVar3;
  long **pplVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 *puStack_f0;
  long **pplStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined1 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x0064c9a4();
  plStack_b8 = plVar1 + 4;
  puVar2 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  uStack_b0 = 1;
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  uVar5 = (undefined4)param_4;
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    do {
      FUN_0047bf20(auStack_c0);
      FUN_0047beb4(auStack_c8,auStack_c0);
      pcStack_a8 = FUN_0064c7f8;
      ppuStack_a0 = &PTR_FUN_00a0cd58;
      param_2 = SUB84(&pcStack_a8,0);
      plStack_98 = param_1;
      puStack_90 = auStack_c0;
      (**(code **)(*param_1 + 0x10))(param_1);
      func_0x0064c994();
      puVar2 = auStack_c8;
      FUN_0047bed4();
      FUN_0047c274(auStack_c8);
      FUN_0047bff0(auStack_c0);
      uVar5 = (undefined4)param_4;
      in_ZR = (int)puVar2 == 1;
    } while (!(bool)in_ZR);
  }
  pplVar3 = &plStack_b8;
  FUN_0040d514();
  func_0x0064c970(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pplVar4 = &plStack_b8;
  FUN_0040d514(pplVar4);
  func_0x0064c984();
  pcStack_d8 = FUN_0064c66c;
  uStack_f8 = uVar5;
  uStack_f4 = param_2;
  puStack_f0 = puVar2;
  pplStack_e8 = pplVar3;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_0064bf60(param_3);
  FUN_0064c6b0(extraout_x8_00,pplVar4,&uStack_f4,param_3,&uStack_f8);
  return;
}



/* Entry: 0064c66c; end: 0064c6af;  */

void FUN_0064c66c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_5;
  uStack_24 = param_3;
  FUN_0064bf60(param_4);
  FUN_0064c6b0(param_1,param_2,&uStack_24,param_4,&uStack_28);
  return;
}



/* Entry: 0064c6b0; end: 0064c6ef;  */

void FUN_0064c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_0064c86c(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 0064c6f0; end: 0064c73f;  */

long FUN_0064c6f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0064c740; end: 0064c79f;  */

void FUN_0064c740(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  FUN_006ad088(auStack_38,&UNK_00910200,5,puVar1[0xc]);
  (*(code *)*puVar1)(puVar1);
  FUN_006ad0cc(auStack_38);
  return;
}



/* Entry: 0064c7a0; end: 0064c7df;  */

void FUN_0064c7a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 0064c7e0; end: 0064c7f7;  */

void FUN_0064c7e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0064c7f8; end: 0064c84f;  */

void FUN_0064c7f8(long param_1)

{
  long *plVar1;
  long lVar2;
  int iStack_24;
  
  lVar2 = *(long *)(param_1 + 0x10);
  plVar1 = *(long **)(lVar2 + 0x18);
  (**(code **)(*plVar1 + 0x58))();
  iStack_24 = (int)plVar1;
  if (iStack_24 == 1) {
    (**(code **)(**(long **)(lVar2 + 0x18) + 0x38))();
  }
  FUN_0047c300(*(undefined8 *)(param_1 + 0x18),&iStack_24);
  return;
}



/* Entry: 0064c850; end: 0064c86b;  */

void FUN_0064c850(void)

{
  return;
}



/* Entry: 0064c86c; end: 0064c91b;  */

undefined8 *
FUN_0064c86c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_60 [2];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  puVar3 = auStack_60;
  func_0x0064c9a4();
  uStack_48 = extraout_x8;
  FUN_005c29ac(auStack_60,1);
  FUN_0064c91c(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x005c2a34();
  func_0x0064c970(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x005c2a34();
  func_0x0064c984();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00a04850;
  puVar3[1] = 0;
  func_0x0064c964(puVar3 + 3);
  return puVar3;
}



/* Entry: 0064c91c; end: 0064c963;  */

undefined8 * FUN_0064c91c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a04850;
  param_1[1] = 0;
  FUN_0064c964(param_1 + 3);
  return param_1;
}



/* Entry: 0064c964; end: 0064c9d3;  */

void FUN_0064c964(void)

{
  undefined8 uVar1;
  uint *in_x4;
  ulong uVar2;
  long unaff_x19;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = (ulong)*in_x4;
  func_0x0064c9c0();
  func_0x0064f1e4(&uStack_50,uVar2);
  *(undefined8 *)(unaff_x19 + 0x10) = uStack_48;
  *(undefined8 *)(unaff_x19 + 8) = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_0064c6f0(&uStack_50);
  uVar1 = 0xc0;
  __Znwm();
  FUN_0064d784();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x59) = 0;
  *(undefined8 *)(unaff_x19 + 0x51) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0x64c6e0;
  *(undefined ***)(unaff_x19 + 0x70) = &PTR_FUN_009e3508;
  *(undefined1 *)(unaff_x19 + 0x98) = 0;
  return;
}



/* Entry: 0064c9d4; end: 0064ca17;  */

void FUN_0064c9d4(int *param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  FUN_0064ca18();
  *param_1 = *param_1 + param_3;
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + param_4;
  *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + param_5;
  return;
}



/* Entry: 0064ca18; end: 0064ca4b;  */

long FUN_0064ca18(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_0064ca4c(param_1,param_2,&UNK_008000a0,&uStack_18,&uStack_19);
  return param_1 + 0x40;
}



/* Entry: 0064ca4c; end: 0064caef;  */

undefined1  [16]
FUN_0064ca4c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_0064caf0(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_0064cb74(alStack_60,param_1,param_3,param_4,param_5);
    FUN_0064cbd0(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x0064ccac(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 0064caf0; end: 0064cb73;  */

long * FUN_0064caf0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = (long *)(param_1 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_0064cc20(param_3,plVar4 + 4), (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      FUN_0064cc20(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_0064cb5c;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_0064cb5c;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_0064cb5c:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 0064cb74; end: 0064cbcf;  */

void FUN_0064cb74(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x58;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  func_0x0064cc64(lVar1 + 0x20,*param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 0064cbd0; end: 0064cc1f;  */

void FUN_0064cbd0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  FUN_0046691c(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 0064cc20; end: 0064cc7f;  */

bool FUN_0064cc20(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 == *param_2) {
    func_0x004278bc(piVar1,param_2 + 2);
    return (char)piVar1 < '\0';
  }
  return false;
}



/* Entry: 0064cc80; end: 0064ccd3;  */

undefined4 * FUN_0064cc80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 0064ccd4; end: 0064cceb;  */

void FUN_0064ccd4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 0064ccec; end: 0064cd33;  */

void FUN_0064ccec(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 0064cd34; end: 0064cd3f;  */

void FUN_0064cd34(void)

{
  return;
}



/* Entry: 0064cd40; end: 0064cd93;  */

void FUN_0064cd40(long param_1,undefined8 param_2,qword param_3)

{
  segment_command *psVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_DAT_00a0cdd0;
  *(long **)psVar1->segname = plVar2;
  *(undefined8 *)(psVar1->segname + 8) = param_2;
  psVar1->vmaddr = param_3;
                    /* WARNING: Could not recover jumptable at 0x0064cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,psVar1);
  return;
}



/* Entry: 0064cd94; end: 0064ceaf;  */

undefined8 FUN_0064cd94(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_0064ceb0(&uStack_38,&uStack_28,&uStack_50);
  FUN_00650a90(&uStack_50);
  uStack_60 = uStack_38;
  lStack_58 = lStack_30;
  if (lStack_30 == 0) {
    lStack_68 = 0;
  }
  else {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_68 = lStack_30;
    if (lStack_30 != 0) {
      plVar1 = (long *)(lStack_30 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lStack_78 = lStack_48;
  uStack_80 = uStack_50;
  if (lStack_48 != 0) {
    plVar1 = (long *)(lStack_48 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00651c9c(&uStack_60,auStack_70,&uStack_80);
  func_0x0064d0b8(&uStack_80);
  func_0x0064d0e0(auStack_70);
  func_0x0064d0e0(&uStack_60);
  uVar4 = uStack_28;
  func_0x0064d0b8(&uStack_50);
  func_0x0064d090(&uStack_38);
  return uVar4;
}



/* Entry: 0064ceb0; end: 0064ced7;  */

void FUN_0064ceb0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0064cf54(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 0064ced8; end: 0064cf07;  */

void FUN_0064ced8(void)

{
  return;
}



/* Entry: 0064cf08; end: 0064cf53;  */

undefined8 FUN_0064cf08(long *param_1)

{
  if ((code *)param_1[2] == (code *)0x0) {
    (**(code **)param_1[3])();
  }
  else {
    (*(code *)param_1[2])();
  }
  (**(code **)(*param_1 + 8))(param_1);
  return 1;
}



/* Entry: 0064cf54; end: 0064cff3;  */

undefined1 * FUN_0064cf54(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = 1;
  FUN_0064cff4(auStack_40);
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_00a0ce50;
  uVar5 = *param_3;
  puStack_30[3] = &PTR_FUN_00a0cd80;
  puStack_30[4] = uVar5;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x0064d080();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_0064d01c();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 0064cff4; end: 0064d01b;  */

long FUN_0064cff4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0064d01c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0064d01c; end: 0064d047;  */

void FUN_0064d01c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x28);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_00a0ce50;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0064d048; end: 0064d04b;  */

void FUN_0064d048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0ce50;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0064d04c; end: 0064d05f;  */

void FUN_0064d04c(void)

{
  func_0x0064d070();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064d060; end: 0064d08f;  */

void FUN_0064d060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0064d068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0064d090; end: 0064d107;  */

long FUN_0064d090(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0064d108; end: 0064d10f;  */

void FUN_0064d108(void)

{
  return;
}



/* Entry: 0064d110; end: 0064d193;  */

undefined8 * FUN_0064d110(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar1 = param_1;
  FUN_0064d194(param_1,param_2,param_4);
  *puVar1 = &PTR_FUN_00a0cea0;
  FUN_0064d208(param_3);
  puVar2 = PTR___dispatch_queue_attr_concurrent_00999fc8;
  _dispatch_queue_attr_make_with_qos_class(PTR___dispatch_queue_attr_concurrent_00999fc8,param_3,0);
  plVar3 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar3 = param_2;
  }
  _dispatch_queue_create(plVar3,puVar2);
  param_1[0x20] = plVar3;
  _dispatch_group_create();
  param_1[0x21] = plVar3;
  return param_1;
}



/* Entry: 0064d194; end: 0064d207;  */

undefined8 * FUN_0064d194(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00a0cf00;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1);
  FUN_0064d728(param_1 + 4,param_3,1000);
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  param_1[0x18] = 0x32aaaba7;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



/* Entry: 0064d208; end: 0064d22b;  */

undefined4 FUN_0064d208(int param_1)

{
  if (param_1 - 1U < 5) {
    return *(undefined4 *)(&UNK_00822a50 + (ulong)(param_1 - 1U) * 4);
  }
  return 0x21;
}



/* Entry: 0064d22c; end: 0064d2c7;  */

undefined8 * FUN_0064d22c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00a0cea0;
  _dispatch_group_wait(param_1[0x21],0xffffffffffffffff);
  _dispatch_release(param_1[0x20]);
  _dispatch_release(param_1[0x21]);
  *param_1 = &PTR_FUN_00a0cf00;
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  FUN_0064d32c(param_1[0x16]);
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  plVar1 = (long *)param_1[9];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = param_1[7];
  param_1[7] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 0064d2c8; end: 0064d2cb;  */

undefined8 * FUN_0064d2c8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00a0cea0;
  _dispatch_group_wait(param_1[0x21],0xffffffffffffffff);
  _dispatch_release(param_1[0x20]);
  _dispatch_release(param_1[0x21]);
  *param_1 = &PTR_FUN_00a0cf00;
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  FUN_0064d32c(param_1[0x16]);
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  plVar1 = (long *)param_1[9];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = param_1[7];
  param_1[7] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 0064d2cc; end: 0064d2df;  */

void FUN_0064d2cc(void)

{
  FUN_0064d22c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064d2e0; end: 0064d2f7;  */

void FUN_0064d2e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_async_f_0099a110)
            (*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x100),param_2,0x64d36c);
  return;
}



/* Entry: 0064d2f8; end: 0064d323;  */

bool FUN_0064d2f8(long param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = 0;
  _dispatch_queue_get_label();
  lVar4 = param_1 + 8;
  uVar3 = uVar5;
  _strlen();
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x1f);
  }
  if (uVar3 == uVar1) {
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm
              (lVar4,0,0xffffffffffffffff,uVar5,uVar3);
    bVar2 = (int)lVar4 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 0064d324; end: 0064d32b;  */

void FUN_0064d324(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x64d328);
  (*pcVar1)();
}



/* Entry: 0064d32c; end: 0064d4a3;  */

void FUN_0064d32c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0064d32c(*param_1);
    FUN_0064d32c(param_1[1]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 0064d4a4; end: 0064d4a7;  */

undefined8 FUN_0064d4a4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_00a0cf30;
  _dispatch_sync_f(param_1[0xc],param_1[0xc],FUN_0064d53c);
  _dispatch_release(param_1[0xc]);
  func_0x0064d714();
  *param_1 = extraout_x8;
  FUN_0064d550(param_1 + 9);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return unaff_x19;
}



/* Entry: 0064d4a8; end: 0064d4bb;  */

void FUN_0064d4a8(void)

{
  func_0x0064d428();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064d4bc; end: 0064d53b;  */

void FUN_0064d4bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar2 = 0;
  _dispatch_time(0,*param_5 - lVar1);
  FUN_0064f550(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x0077a39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_after_f_0099a0c8)(uVar2,*(undefined8 *)(param_2 + 0x60),0,FUN_0064d664);
  return;
}



/* Entry: 0064d53c; end: 0064d54f;  */

void FUN_0064d53c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_set_specific_0099a180)(param_1,0xb6c6f0,0,0);
  return;
}



/* Entry: 0064d550; end: 0064d5c3;  */

undefined8 FUN_0064d550(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0064d584(&uStack_28);
  return param_1;
}



/* Entry: 0064d5c4; end: 0064d5cb;  */

void FUN_0064d5c4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x80;
    func_0x0064d608();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 0064d5cc; end: 0064d663;  */

void FUN_0064d5cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x80;
    func_0x0064d608();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 0064d664; end: 0064d6db;  */

void FUN_0064d664(void)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = 0xb6c6f0;
  _dispatch_get_specific();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    uStack_28 = 1;
    lStack_30 = lVar2;
    __ZNSt3__115recursive_mutex4lockEv();
    __ZNSt3__16chrono12steady_clock3nowEv();
    lStack_38 = lVar2;
    FUN_0064f650(lVar1,&lStack_38);
    FUN_0064d6dc(&lStack_30);
  }
  return;
}



/* Entry: 0064d6dc; end: 0064d70b;  */

undefined8 * FUN_0064d6dc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    __ZNSt3__115recursive_mutex6unlockEv(*param_1);
  }
  return param_1;
}



/* Entry: 0064d70c; end: 0064d727;  */

void FUN_0064d70c(void)

{
  return;
}



/* Entry: 0064d728; end: 0064d783;  */

undefined8 * FUN_0064d728(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  puVar1 = param_1;
  FUN_00716c1c();
  param_1[2] = puVar1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[8] = 0x32aaaba7;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  return param_1;
}



/* Entry: 0064d784; end: 0064d80b;  */

undefined8 *
FUN_0064d784(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  *param_1 = &PTR_FUN_00a0cf78;
  param_1[1] = &PTR_DAT_00a0cfe8;
  param_1[2] = param_4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3);
  *(undefined4 *)(param_1 + 6) = param_3;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0x32aaaba7;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((long)param_1 + 0xa5) = 0;
  *(undefined8 *)((long)param_1 + 0x9d) = 0;
  *(undefined1 *)((long)param_1 + 0xad) = 1;
  param_1[0x16] = param_5;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



/* Entry: 0064d80c; end: 0064d92b;  */

undefined8 * FUN_0064d80c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_00a0cf78;
  param_1[1] = &PTR_DAT_00a0cfe8;
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  plVar1 = param_1 + 7;
  func_0x0064e4d8();
  lVar2 = param_2;
  func_0x0064e500(param_1 + 7);
  do {
    lVar7 = param_2 + -0xfd8;
    do {
      if (param_2 == lVar2) {
        param_1[0xc] = 0;
        puVar5 = (undefined8 *)param_1[8];
        while( true ) {
          puVar6 = (undefined8 *)param_1[9];
          uVar3 = (long)puVar6 - (long)puVar5 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar5);
          puVar5 = (undefined8 *)(param_1[8] + 8);
          param_1[8] = puVar5;
        }
        if (uVar3 == 1) {
          uVar4 = 0x13;
        }
        else {
          if (uVar3 != 2) goto LAB_0064d8ec;
          uVar4 = 0x27;
        }
        param_1[0xb] = uVar4;
LAB_0064d8ec:
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
          __ZdlPv(*puVar5);
        }
        func_0x0064e52c(param_1 + 7,param_1[8]);
        if (param_1[7] != 0) {
          __ZdlPv();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
        return param_1;
      }
      (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
      lVar7 = lVar7 + 0x68;
      param_2 = param_2 + 0x68;
    } while (*plVar1 != lVar7);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 0064d92c; end: 0064d937;  */

undefined8 * FUN_0064d92c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_00a0cf78;
  param_1[1] = &PTR_DAT_00a0cfe8;
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  plVar1 = param_1 + 7;
  func_0x0064e4d8();
  lVar2 = param_2;
  func_0x0064e500(param_1 + 7);
  do {
    lVar7 = param_2 + -0xfd8;
    do {
      if (param_2 == lVar2) {
        param_1[0xc] = 0;
        puVar5 = (undefined8 *)param_1[8];
        while( true ) {
          puVar6 = (undefined8 *)param_1[9];
          uVar3 = (long)puVar6 - (long)puVar5 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar5);
          puVar5 = (undefined8 *)(param_1[8] + 8);
          param_1[8] = puVar5;
        }
        if (uVar3 == 1) {
          uVar4 = 0x13;
        }
        else {
          if (uVar3 != 2) goto LAB_0064d8ec;
          uVar4 = 0x27;
        }
        param_1[0xb] = uVar4;
LAB_0064d8ec:
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
          __ZdlPv(*puVar5);
        }
        func_0x0064e52c(param_1 + 7,param_1[8]);
        if (param_1[7] != 0) {
          __ZdlPv();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
        return param_1;
      }
      (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
      lVar7 = lVar7 + 0x68;
      param_2 = param_2 + 0x68;
    } while (*plVar1 != lVar7);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 0064d938; end: 0064d94b;  */

void FUN_0064d938(void)

{
  FUN_0064d80c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064d94c; end: 0064d953;  */

void FUN_0064d94c(long param_1)

{
  FUN_0064d80c(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064d954; end: 0064dae7;  */

void FUN_0064d954(dword *param_1,qword *param_2,undefined8 param_3)

{
  int *piVar1;
  qword *pqVar2;
  int iVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  qword *pqVar8;
  qword *pqVar9;
  undefined1 uVar10;
  dword *pdVar11;
  dword *pdVar12;
  dword *pdVar13;
  qword qVar14;
  qword *pqVar15;
  long lVar16;
  undefined8 extraout_x8;
  qword *pqVar17;
  qword *pqVar18;
  ulong uVar19;
  dword *pdVar20;
  dword *unaff_x22;
  long *plVar21;
  undefined8 unaff_x23;
  long *plVar22;
  ulong uVar23;
  qword *pqVar24;
  long *plVar25;
  qword *pqVar26;
  qword *pqVar27;
  qword *pqVar28;
  qword qStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  qword *pqStack_178;
  qword *pqStack_170;
  qword *pqStack_168;
  qword *pqStack_160;
  dword *pdStack_158;
  qword *pqStack_150;
  qword *pqStack_148;
  qword *pqStack_140;
  qword *pqStack_138;
  dword *pdStack_130;
  qword qStack_c0;
  undefined1 auStack_b8 [88];
  dword *pdStack_60;
  undefined8 uStack_58;
  
  pqVar26 = &qStack_c0;
  pdVar12 = (dword *)&qStack_c0;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar10 = *(char *)((long)param_1 + 0xad) == '\x01';
  pdVar13 = param_1;
  if ((bool)uVar10) {
    unaff_x22 = (dword *)(param_2 + 1);
    pdVar11 = param_1;
    pqVar17 = param_2;
    if ((*(byte *)(*(long *)unaff_x22 + 8) & 1) == 0) {
      FUN_0045cc3c();
      pdVar20 = pdVar11;
    }
    else {
      pdVar20 = (dword *)0x0;
    }
    piVar1 = (int *)(param_1 + 0x2a);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((int)param_3 == 0) || (iVar3 != 0)) {
      qStack_c0 = *param_2;
      (**(code **)(param_2[1] + 0x10))(auStack_b8,unaff_x22);
      pdVar13 = param_1 + 0xe;
      pdStack_60 = pdVar20;
      FUN_0064dae8();
      func_0x0064eab8();
      param_2 = pqVar26;
      unaff_x23 = param_3;
      if (iVar3 == 0) goto LAB_0064da7c;
    }
    else {
      pdVar13 = pdVar11;
      if (*(char *)(*(long *)unaff_x22 + 8) != '\x01') {
        func_0x0064eaf4(*(undefined8 *)(param_1 + 0x2c));
        param_3 = *(undefined8 *)pdVar11;
        *(undefined8 *)pdVar11 = extraout_x8;
        lVar16 = (long)*(char *)((long)param_1 + 0x2f);
        if (lVar16 < 0) {
          pqVar17 = *(qword **)(param_1 + 6);
          lVar16 = *(long *)(param_1 + 8);
        }
        else {
          pqVar17 = (qword *)(param_1 + 6);
        }
        FUN_006ad088(&qStack_c0,pqVar17,lVar16,pdVar20);
        (*(code *)*param_2)(param_2);
        FUN_006ad0cc();
        *(undefined8 *)pdVar11 = param_3;
        pdVar13 = pdVar12;
        unaff_x22 = pdVar11;
      }
      do {
        iVar3 = *piVar1;
        iVar7 = iVar3 + -1;
        uVar10 = iVar7 == 0;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      param_2 = pqVar17;
      unaff_x23 = param_3;
      if (!(bool)uVar10 && 0 < iVar3) {
LAB_0064da7c:
        pdVar13 = *(dword **)(param_1 + 4);
        param_2 = (qword *)(param_1 + 2);
        (**(code **)(*(long *)pdVar13 + 0x18))();
        unaff_x23 = param_3;
      }
    }
  }
  func_0x0064ea84(uStack_58);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  FUN_006ad0cc(&qStack_c0);
  *(undefined8 *)unaff_x22 = unaff_x23;
  __Unwind_Resume();
  pqVar26 = param_2;
  __ZNSt3__15mutex4lockEv(pdVar13 + 0xc);
  pdVar12 = pdVar13;
  FUN_0064e594();
  if (pdVar12 != (dword *)0x0) goto LAB_0064dcfc;
  if (*(ulong *)(pdVar13 + 8) < 0x27) {
    plVar25 = *(long **)(pdVar13 + 2);
    plVar4 = *(long **)(pdVar13 + 4);
    plVar22 = *(long **)pdVar13;
    uVar23 = (long)plVar4 - (long)plVar25;
    pdVar12 = pdVar13 + 6;
    plVar21 = *(long **)pdVar12;
    if ((ulong)((long)plVar21 - (long)plVar22) <= uVar23) {
      pqVar17 = (qword *)((long)plVar21 - (long)plVar22 >> 2);
      if (plVar21 == plVar22) {
        pqVar17 = (qword *)((long)&MACH_HEADER.magic + 1);
      }
      pdStack_158 = pdVar12;
      FUN_0064e6dc();
      pqVar27 = (qword *)((long)pqVar17 + uVar23);
      pqVar28 = pqVar17 + (long)pqVar26;
      qVar14 = 0xfd8;
      pqVar15 = pqVar26;
      pqStack_178 = pqVar17;
      pqStack_170 = pqVar27;
      pqStack_168 = pqVar27;
      pqStack_160 = pqVar28;
      __Znwm();
      puStack_188 = (undefined8 *)(pdVar13 + 10);
      uVar19 = (long)pqVar26 * 8;
      uStack_180 = 0x27;
      pqVar26 = pqVar15;
      pqVar24 = pqVar27;
      if (uVar23 == uVar19) {
        if (plVar4 == plVar25) {
          pqVar24 = (qword *)((long)&MACH_HEADER.magic + 1);
          qStack_190 = qVar14;
          pdStack_130 = pdVar12;
          FUN_0064e6dc();
          pqStack_138 = pqVar24 + (long)pqVar15;
          pqVar26 = pqVar27;
          pqStack_150 = pqVar24;
          pqStack_148 = pqVar24;
          pqStack_140 = pqVar24;
          FUN_0064e6b4(&pqStack_150,pqVar27,pqVar27);
          pqVar2 = pqStack_138;
          pqVar24 = pqStack_140;
          pqVar18 = pqStack_148;
          pqVar15 = pqStack_150;
          pqStack_178 = pqStack_150;
          pqStack_170 = pqStack_148;
          pqStack_160 = pqStack_138;
          pqStack_150 = pqVar17;
          pqStack_148 = pqVar27;
          pqStack_140 = pqVar27;
          pqStack_138 = pqVar28;
          func_0x0064eb04();
          pqVar17 = pqVar15;
          pqVar27 = pqVar18;
          pqVar28 = pqVar2;
        }
        else {
          pqVar27 = pqVar27 + (((long)pqVar27 - (long)pqVar17 >> 3) + 1) / -2;
          pqVar24 = pqVar27;
          pqStack_170 = pqVar27;
        }
      }
      pqVar15 = pqVar24 + 1;
      *pqVar24 = qVar14;
      qStack_190 = 0;
      pqVar24 = *(qword **)(pdVar13 + 4);
      pqStack_168 = pqVar15;
      while (pqVar18 = *(qword **)(pdVar13 + 2), pqVar24 != pqVar18) {
        pqVar18 = pqVar27;
        if (pqVar27 == pqVar17) {
          if (pqVar15 < pqVar28) {
            lVar16 = (long)pqVar15 - (long)pqVar17;
            pqVar2 = pqVar15 + (((long)pqVar28 - (long)pqVar15 >> 3) + 1) / 2;
            pqVar18 = (qword *)((long)pqVar2 - ((long)pqVar15 - (long)pqVar17));
            pqVar15 = pqVar2;
            if (lVar16 != 0) {
              _memmove(pqVar18,pqVar27,lVar16);
              pqVar26 = pqVar27;
            }
          }
          else {
            lVar16 = (long)pqVar28 - (long)pqVar17 >> 2;
            if ((long)pqVar28 - (long)pqVar17 == 0) {
              lVar16 = 1;
            }
            pdStack_130 = pdVar12;
            FUN_0064e6dc(lVar16);
            func_0x0064eac8(lVar16 << 1);
            pqVar26 = pqVar17;
            FUN_0064e6b4(&pqStack_150,pqVar17,pqVar15);
            pqVar9 = pqStack_138;
            pqVar8 = pqStack_140;
            pqVar18 = pqStack_148;
            pqVar2 = pqStack_150;
            pqStack_150 = pqVar17;
            pqStack_148 = pqVar27;
            pqStack_140 = pqVar15;
            pqStack_138 = pqVar28;
            func_0x0064eb04();
            pqVar17 = pqVar2;
            pqVar15 = pqVar8;
            pqVar28 = pqVar9;
          }
        }
        pqVar24 = pqVar24 + -1;
        pqVar27 = pqVar18 + -1;
        *pqVar27 = *pqVar24;
      }
      pqStack_178 = *(qword **)pdVar13;
      *(qword **)pdVar13 = pqVar17;
      *(qword **)(pdVar13 + 2) = pqVar27;
      pqStack_160 = *(qword **)(pdVar13 + 6);
      pqStack_168 = *(qword **)(pdVar13 + 4);
      *(qword **)(pdVar13 + 4) = pqVar15;
      *(qword **)(pdVar13 + 6) = pqVar28;
      pqStack_170 = pqVar18;
      func_0x0064e710(&qStack_190);
      func_0x0064e73c(&pqStack_178);
      goto LAB_0064dcfc;
    }
    pqVar17 = (qword *)&section_00000fa8.offset;
    __Znwm();
    if (plVar21 != plVar4) {
      *plVar4 = (long)pqVar17;
      *(long **)(pdVar13 + 4) = plVar4 + 1;
      goto LAB_0064dcfc;
    }
    if (plVar25 == plVar22) {
      lVar16 = (long)plVar21 - (long)plVar25 >> 2;
      if (plVar4 == plVar25) {
        lVar16 = 1;
      }
      pdStack_130 = pdVar12;
      FUN_0064e6dc(lVar16);
      func_0x0064eac8(lVar16 << 1);
      FUN_0064e6b4(&pqStack_150,*(undefined8 *)(pdVar13 + 2),*(undefined8 *)(pdVar13 + 4));
      pqVar27 = *(qword **)(pdVar13 + 2);
      pqVar26 = *(qword **)pdVar13;
      pqVar24 = *(qword **)(pdVar13 + 6);
      pqVar28 = *(qword **)(pdVar13 + 4);
      *(qword **)(pdVar13 + 2) = pqStack_148;
      *(qword **)pdVar13 = pqStack_150;
      *(qword **)(pdVar13 + 6) = pqStack_138;
      *(qword **)(pdVar13 + 4) = pqStack_140;
      pqStack_150 = pqVar26;
      pqStack_148 = pqVar27;
      pqStack_140 = pqVar28;
      pqStack_138 = pqVar24;
      func_0x0064eb04();
      plVar25 = *(long **)(pdVar13 + 2);
    }
    plVar25[-1] = (long)pqVar17;
    pqVar26 = pqVar17;
  }
  else {
    *(ulong *)(pdVar13 + 8) = *(ulong *)(pdVar13 + 8) - 0x27;
    plVar25 = *(long **)(pdVar13 + 2) + 1;
    pqVar26 = (qword *)**(long **)(pdVar13 + 2);
  }
  *(long **)(pdVar13 + 2) = plVar25;
  FUN_0064e5c4(pdVar13);
LAB_0064dcfc:
  func_0x0064e500(pdVar13);
  *pqVar26 = *param_2;
  (**(code **)(param_2[1] + 0x10))(pqVar26 + 1,param_2 + 1);
  pqVar26[0xc] = param_2[0xc];
  *(long *)(pdVar13 + 10) = *(long *)(pdVar13 + 10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(pdVar13 + 0xc);
  return;
}



/* Entry: 0064dae8; end: 0064de53;  */

void FUN_0064dae8(undefined8 *param_1,qword *param_2)

{
  qword *pqVar1;
  long *plVar2;
  qword *pqVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  qword qVar6;
  qword *pqVar7;
  qword *pqVar8;
  qword *pqVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  qword *pqVar15;
  long *plVar16;
  qword *pqVar17;
  qword *pqVar18;
  qword *pqVar19;
  qword qStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  qword *pqStack_b8;
  qword *pqStack_b0;
  qword *pqStack_a8;
  qword *pqStack_a0;
  undefined8 *puStack_98;
  qword *pqStack_90;
  qword *pqStack_88;
  qword *pqStack_80;
  qword *pqStack_78;
  undefined8 *puStack_70;
  
  pqVar17 = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 6);
  puVar5 = param_1;
  FUN_0064e594();
  if (puVar5 != (undefined8 *)0x0) goto LAB_0064dcfc;
  if ((ulong)param_1[4] < 0x27) {
    plVar16 = (long *)param_1[1];
    plVar2 = (long *)param_1[2];
    plVar13 = (long *)*param_1;
    uVar14 = (long)plVar2 - (long)plVar16;
    puVar5 = param_1 + 3;
    plVar12 = (long *)*puVar5;
    if ((ulong)((long)plVar12 - (long)plVar13) <= uVar14) {
      pqVar8 = (qword *)((long)plVar12 - (long)plVar13 >> 2);
      if (plVar12 == plVar13) {
        pqVar8 = (qword *)((long)&MACH_HEADER.magic + 1);
      }
      puStack_98 = puVar5;
      FUN_0064e6dc();
      pqVar18 = (qword *)((long)pqVar8 + uVar14);
      pqVar19 = pqVar8 + (long)pqVar17;
      qVar6 = 0xfd8;
      pqVar7 = pqVar17;
      pqStack_b8 = pqVar8;
      pqStack_b0 = pqVar18;
      pqStack_a8 = pqVar18;
      pqStack_a0 = pqVar19;
      __Znwm();
      puStack_c8 = param_1 + 5;
      uVar11 = (long)pqVar17 * 8;
      uStack_c0 = 0x27;
      pqVar17 = pqVar7;
      pqVar15 = pqVar18;
      if (uVar14 == uVar11) {
        if (plVar2 == plVar16) {
          pqVar15 = (qword *)((long)&MACH_HEADER.magic + 1);
          qStack_d0 = qVar6;
          puStack_70 = puVar5;
          FUN_0064e6dc();
          pqStack_78 = pqVar15 + (long)pqVar7;
          pqVar17 = pqVar18;
          pqStack_90 = pqVar15;
          pqStack_88 = pqVar15;
          pqStack_80 = pqVar15;
          FUN_0064e6b4(&pqStack_90,pqVar18,pqVar18);
          pqVar1 = pqStack_78;
          pqVar15 = pqStack_80;
          pqVar9 = pqStack_88;
          pqVar7 = pqStack_90;
          pqStack_b8 = pqStack_90;
          pqStack_b0 = pqStack_88;
          pqStack_a0 = pqStack_78;
          pqStack_90 = pqVar8;
          pqStack_88 = pqVar18;
          pqStack_80 = pqVar18;
          pqStack_78 = pqVar19;
          func_0x0064eb04();
          pqVar8 = pqVar7;
          pqVar18 = pqVar9;
          pqVar19 = pqVar1;
        }
        else {
          pqVar18 = pqVar18 + (((long)pqVar18 - (long)pqVar8 >> 3) + 1) / -2;
          pqVar15 = pqVar18;
          pqStack_b0 = pqVar18;
        }
      }
      pqVar7 = pqVar15 + 1;
      *pqVar15 = qVar6;
      qStack_d0 = 0;
      pqVar15 = (qword *)param_1[2];
      pqStack_a8 = pqVar7;
      while (pqVar9 = (qword *)param_1[1], pqVar15 != pqVar9) {
        pqVar9 = pqVar18;
        if (pqVar18 == pqVar8) {
          if (pqVar7 < pqVar19) {
            lVar10 = (long)pqVar7 - (long)pqVar8;
            pqVar1 = pqVar7 + (((long)pqVar19 - (long)pqVar7 >> 3) + 1) / 2;
            pqVar9 = (qword *)((long)pqVar1 - ((long)pqVar7 - (long)pqVar8));
            pqVar7 = pqVar1;
            if (lVar10 != 0) {
              _memmove(pqVar9,pqVar18,lVar10);
              pqVar17 = pqVar18;
            }
          }
          else {
            lVar10 = (long)pqVar19 - (long)pqVar8 >> 2;
            if ((long)pqVar19 - (long)pqVar8 == 0) {
              lVar10 = 1;
            }
            puStack_70 = puVar5;
            FUN_0064e6dc(lVar10);
            func_0x0064eac8(lVar10 << 1);
            pqVar17 = pqVar8;
            FUN_0064e6b4(&pqStack_90,pqVar8,pqVar7);
            pqVar4 = pqStack_78;
            pqVar3 = pqStack_80;
            pqVar9 = pqStack_88;
            pqVar1 = pqStack_90;
            pqStack_90 = pqVar8;
            pqStack_88 = pqVar18;
            pqStack_80 = pqVar7;
            pqStack_78 = pqVar19;
            func_0x0064eb04();
            pqVar8 = pqVar1;
            pqVar7 = pqVar3;
            pqVar19 = pqVar4;
          }
        }
        pqVar15 = pqVar15 + -1;
        pqVar18 = pqVar9 + -1;
        *pqVar18 = *pqVar15;
      }
      pqStack_b8 = (qword *)*param_1;
      *param_1 = pqVar8;
      param_1[1] = pqVar18;
      pqStack_a0 = (qword *)param_1[3];
      pqStack_a8 = (qword *)param_1[2];
      param_1[2] = pqVar7;
      param_1[3] = pqVar19;
      pqStack_b0 = pqVar9;
      func_0x0064e710(&qStack_d0);
      func_0x0064e73c(&pqStack_b8);
      goto LAB_0064dcfc;
    }
    pqVar8 = (qword *)&section_00000fa8.offset;
    __Znwm();
    if (plVar12 != plVar2) {
      *plVar2 = (long)pqVar8;
      param_1[2] = plVar2 + 1;
      goto LAB_0064dcfc;
    }
    if (plVar16 == plVar13) {
      lVar10 = (long)plVar12 - (long)plVar16 >> 2;
      if (plVar2 == plVar16) {
        lVar10 = 1;
      }
      puStack_70 = puVar5;
      FUN_0064e6dc(lVar10);
      func_0x0064eac8(lVar10 << 1);
      FUN_0064e6b4(&pqStack_90,param_1[1],param_1[2]);
      pqVar18 = (qword *)param_1[1];
      pqVar17 = (qword *)*param_1;
      pqVar15 = (qword *)param_1[3];
      pqVar19 = (qword *)param_1[2];
      param_1[1] = pqStack_88;
      *param_1 = pqStack_90;
      param_1[3] = pqStack_78;
      param_1[2] = pqStack_80;
      pqStack_90 = pqVar17;
      pqStack_88 = pqVar18;
      pqStack_80 = pqVar19;
      pqStack_78 = pqVar15;
      func_0x0064eb04();
      plVar16 = (long *)param_1[1];
    }
    plVar16[-1] = (long)pqVar8;
    pqVar17 = pqVar8;
  }
  else {
    param_1[4] = param_1[4] - 0x27;
    plVar16 = (long *)param_1[1] + 1;
    pqVar17 = *(qword **)param_1[1];
  }
  param_1[1] = plVar16;
  FUN_0064e5c4(param_1);
LAB_0064dcfc:
  func_0x0064e500(param_1);
  *pqVar17 = *param_2;
  (**(code **)(param_2[1] + 0x10))(pqVar17 + 1,param_2 + 1);
  pqVar17[0xc] = param_2[0xc];
  param_1[5] = param_1[5] + 1;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_1 + 6);
  return;
}



/* Entry: 0064de54; end: 0064de5b;  */

void FUN_0064de54(long param_1)

{
  *(undefined1 *)(param_1 + 0xad) = 0;
  return;
}



/* Entry: 0064de5c; end: 0064df5f;  */

void FUN_0064de5c(undefined ***param_1,code *UNRECOVERED_JUMPTABLE)

{
  undefined ***pppuVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  code **ppcVar6;
  code *pcStack_90;
  undefined **ppuStack_88;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppcVar6 = &pcStack_90;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pppuVar1 = param_1 + 0x15;
  do {
    iVar2 = *(int *)pppuVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
    if (bVar4) {
      *(int *)pppuVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *(int *)pppuVar1 = *(int *)pppuVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_1 != (undefined ***)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)(*param_1)[1];
      FUN_0064ea84(uStack_28);
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0064df38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      goto LAB_0064df3c;
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0xac) = 1;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    pcStack_90 = FUN_0045e36c;
    ppuStack_88 = &PTR_DAT_00a0d068;
    uStack_30 = 0;
    FUN_0064dae8(param_1 + 7);
    param_1 = &ppuStack_88;
    (*(code *)*ppuStack_88)();
    UNRECOVERED_JUMPTABLE = (code *)ppcVar6;
  }
  FUN_0064ea84(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
LAB_0064df3c:
  uVar5 = SUB81(UNRECOVERED_JUMPTABLE,0);
  ___stack_chk_fail();
  (*(code *)*ppuStack_88)(&ppuStack_88);
  __Unwind_Resume();
  *(undefined1 *)(param_1 + 0x17) = uVar5;
  return;
}



/* Entry: 0064df60; end: 0064df67;  */

void FUN_0064df60(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb8) = param_2;
  return;
}



/* Entry: 0064df68; end: 0064e47f;  */

int FUN_0064df68(long *param_1,code *****param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code ****ppppcVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  code *****pppppcVar13;
  long ****pppplVar14;
  long lVar15;
  long extraout_x8;
  int iVar16;
  code *****pppppcVar17;
  code *****pppppcVar18;
  ulong uVar19;
  code *****pppppcVar20;
  code *****pppppcVar21;
  undefined8 auStack_788 [12];
  undefined8 auStack_728 [196];
  code ****ppppcStack_108;
  code ****ppppcStack_100;
  long ****pppplStack_f8;
  code ****ppppcStack_f0;
  long ****pppplStack_e8;
  code ****ppppcStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  code ****ppppcStack_c8;
  code ****ppppcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar15 = 0;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  do {
    *(code **)((long)auStack_788 + lVar15) = FUN_0045e36c;
    *(undefined ***)((long)auStack_788 + lVar15 + 8) = &PTR_DAT_00a0d068;
    *(undefined8 *)((long)auStack_728 + lVar15) = 0;
    lVar15 = lVar15 + 0x68;
  } while (lVar15 != 0x680);
  plVar9 = param_1;
  func_0x0064eaf4(param_1[0x16]);
  iVar16 = 0;
  *plVar9 = extraout_x8;
  puVar1 = (uint *)(param_1 + 0x15);
  do {
    __ZNSt3__15mutex4lockEv(param_1 + 0xd);
    uVar2 = 0x10U - iVar16;
    if ((int)*(uint *)(param_1 + 0xc) <= (int)(0x10U - iVar16)) {
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    pppppcVar18 = (code *****)(param_1 + 7);
    func_0x0064e4d8();
    pppppcVar13 = (code *****)(long)(int)uVar2;
    pppppcVar17 = &ppppcStack_108;
    ppppcStack_108 = (code ****)pppppcVar18;
    ppppcStack_100 = (code ****)param_2;
    FUN_0064e77c();
    puVar10 = auStack_788;
    pppppcVar20 = param_2;
    pppppcVar21 = pppppcVar18;
    while (pppppcVar20 != pppppcVar13) {
      FUN_0064e7fc(puVar10,pppppcVar20);
      pppppcVar20 = pppppcVar20 + 0xd;
      if ((long)pppppcVar20 - (long)*pppppcVar21 == 0xfd8) {
        pppppcVar21 = pppppcVar21 + 1;
        pppppcVar20 = (code *****)*pppppcVar21;
      }
      puVar10 = puVar10 + 0xd;
    }
    FUN_0064e890(pppppcVar17,pppppcVar13,pppppcVar18,param_2);
    ppppplVar11 = (long *****)(param_1 + 7);
    func_0x0064e4d8();
    pppplStack_e8 = (long ****)ppppplVar11;
    ppppcStack_e0 = (code ****)pppppcVar13;
    FUN_0064e890(pppppcVar18,param_2,ppppplVar11,pppppcVar13);
    ppppplVar12 = &pppplStack_e8;
    param_2 = pppppcVar18;
    FUN_0064e77c();
    pppppcVar20 = (code *****)(param_1 + 3);
    pppplStack_f8 = (long ****)ppppplVar12;
    ppppcStack_f0 = (code ****)param_2;
    if (0 < (long)pppppcVar17) {
      lVar15 = param_1[0xc];
      pppppcVar20 = (code *****)&pppplStack_f8;
      pppppcVar21 = pppppcVar17;
      FUN_0064e77c();
      if ((code *****)((ulong)(lVar15 - (long)pppppcVar17) >> 1) < pppppcVar18) {
        pppppcVar18 = (code *****)(param_1 + 7);
        pppppcVar13 = pppppcVar21;
        func_0x0064e500();
        pppplStack_d8 = (long ****)&pppplStack_d0;
        pppplStack_d0 = (long ****)ppppplVar12;
        ppppcStack_c8 = (code ****)param_2;
        if (pppppcVar20 != pppppcVar18) {
          pppppcVar17 = (code *****)*pppppcVar20;
          do {
            FUN_0064e9bc(&pppplStack_d8,pppppcVar21,pppppcVar17 + 0x1fb);
            pppppcVar20 = pppppcVar20 + 1;
            pppppcVar21 = (code *****)*pppppcVar20;
            pppppcVar17 = pppppcVar21;
          } while (pppppcVar20 != pppppcVar18);
        }
        FUN_0064e9bc(&pppplStack_d8,pppppcVar21,pppppcVar13);
        pppppcVar18 = (code *****)ppppcStack_c8;
        ppppplVar11 = (long *****)pppplStack_d0;
        func_0x0064e500(param_1 + 7);
        param_2 = pppppcVar21;
LAB_0064e174:
        pppppcVar20 = pppppcVar18 + -0x1fb;
LAB_0064e178:
        if (pppppcVar18 != pppppcVar21) goto code_r0x0064e180;
        func_0x0064eb0c();
        while( true ) {
          plVar9 = param_1 + 7;
          FUN_0064e594();
          if (plVar9 < (long *)((long)&segment_command_00000020.fileoff + 6)) break;
          __ZdlPv(*(undefined8 *)(param_1[9] + -8));
          param_2 = (code *****)(param_1[9] + -8);
          func_0x0064e52c(param_1 + 7);
        }
        goto LAB_0064e2bc;
      }
      pppppcVar18 = param_2;
      if (ppppplVar11 != ppppplVar12) {
        pppplVar14 = *ppppplVar12;
        while( true ) {
          ppppplVar12 = ppppplVar12 + -1;
          FUN_0064e8d8(&pppplStack_d0,pppplVar14,param_2,pppppcVar20,pppppcVar21);
          pppppcVar21 = (code *****)ppppcStack_c0;
          pppppcVar20 = (code *****)ppppcStack_c8;
          if (ppppplVar12 == ppppplVar11) break;
          pppplVar14 = *ppppplVar12;
          param_2 = (code *****)(pppplVar14 + 0x1fb);
        }
        pppppcVar18 = (code *****)(*ppppplVar12 + 0x1fb);
      }
      param_2 = pppppcVar13;
      FUN_0064e8d8(&pppplStack_d0,pppppcVar13,pppppcVar18,pppppcVar20,pppppcVar21);
      ppppcVar6 = ppppcStack_c0;
LAB_0064e24c:
      pppppcVar20 = pppppcVar13 + -0x1fb;
LAB_0064e250:
      if (pppppcVar13 != (code *****)ppppcVar6) goto code_r0x0064e258;
      func_0x0064eb0c();
      while (lVar15 = param_1[0xb], param_1[0xb] = lVar15 + (long)pppppcVar17,
            0x4d < (ulong)(lVar15 + (long)pppppcVar17)) {
        __ZdlPv(*(undefined8 *)param_1[8]);
        param_1[8] = param_1[8] + 8;
        pppppcVar17 = (code *****)0xffffffffffffffd9;
      }
    }
LAB_0064e2bc:
    __ZNSt3__15mutex6unlockEv(param_1 + 0xd);
    puVar10 = auStack_788;
    for (uVar19 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
        uVar19 = uVar19 - 1) {
      if (((*(byte *)(puVar10[1] + 8) & 1) == 0) && (*(char *)((long)param_1 + 0xad) == '\x01')) {
        lVar15 = (long)*(char *)((long)param_1 + 0x2f);
        pppppcVar18 = pppppcVar20;
        if (lVar15 < 0) {
          lVar15 = param_1[4];
          pppppcVar18 = (code *****)param_1[3];
        }
        FUN_006ad088(&pppplStack_d0,pppppcVar18,lVar15,puVar10[0xc]);
        (*(code *)*puVar10)(puVar10);
        FUN_006ad0cc(&pppplStack_d0);
      }
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      ppppcStack_c0 = (code ****)0x0;
      pppplStack_d0 = (long ****)FUN_0045e36c;
      ppppcStack_c8 = (code ****)&PTR_DAT_00a0d068;
      param_2 = (code *****)&pppplStack_d0;
      func_0x0064e828(puVar10);
      (*(code *)*ppppcStack_c8)(&ppppcStack_c8);
      puVar10 = puVar10 + 0xd;
    }
    iVar16 = uVar2 + iVar16;
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 - uVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  } while ((uVar3 - uVar2 != 0 && (int)uVar2 <= (int)uVar3) && iVar16 < 0x10);
  uVar8 = uVar3 == uVar2;
  if ((int)uVar2 < (int)uVar3) {
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],param_1 + 1);
  }
  else if (*(char *)((long)param_1 + 0xac) != '\0') {
    uVar8 = uVar3 == uVar2;
    if (!(bool)uVar8) goto LAB_0064e404;
    (**(code **)(*param_1 + 8))(param_1);
  }
  func_0x0064eae4();
  func_0x0064ea84(uStack_70);
  if ((bool)uVar8) {
    return iVar16;
  }
  ___stack_chk_fail();
LAB_0064e404:
  FUN_006ad134(&pppplStack_d0,&UNK_0091021b,0x21,"false");
  FUN_006ad208(&pppplStack_d0,"unknown",0x89);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x64e448);
  (*pcVar7)();
code_r0x0064e180:
  (*(code *)*pppppcVar18[1])(pppppcVar18 + 1);
  pppppcVar20 = pppppcVar20 + 0xd;
  pppppcVar18 = pppppcVar18 + 0xd;
  if ((code *****)*ppppplVar11 == pppppcVar20) goto code_r0x0064e1a4;
  goto LAB_0064e178;
code_r0x0064e1a4:
  ppppplVar11 = ppppplVar11 + 1;
  pppppcVar18 = (code *****)*ppppplVar11;
  goto LAB_0064e174;
code_r0x0064e258:
  (*(code *)*pppppcVar13[1])(pppppcVar13 + 1);
  pppppcVar20 = pppppcVar20 + 0xd;
  pppppcVar13 = pppppcVar13 + 0xd;
  if ((code *****)*ppppplVar11 == pppppcVar20) goto code_r0x0064e27c;
  goto LAB_0064e250;
code_r0x0064e27c:
  ppppplVar11 = ppppplVar11 + 1;
  pppppcVar13 = (code *****)*ppppplVar11;
  goto LAB_0064e24c;
}



/* Entry: 0064e480; end: 0064e557;  */

int FUN_0064e480(long param_1,code *****param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code ****ppppcVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *plVar13;
  code *****pppppcVar14;
  long ****pppplVar15;
  long lVar16;
  long extraout_x8;
  int iVar17;
  code *****pppppcVar18;
  code *****pppppcVar19;
  ulong uVar20;
  code *****pppppcVar21;
  code *****pppppcVar22;
  undefined8 auStack_788 [12];
  undefined8 auStack_728 [196];
  code ****ppppcStack_108;
  code ****ppppcStack_100;
  long ****pppplStack_f8;
  code ****ppppcStack_f0;
  long ****pppplStack_e8;
  code ****ppppcStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  code ****ppppcStack_c8;
  code ****ppppcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar13 = (long *)(param_1 + -8);
  lVar16 = 0;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  do {
    *(code **)((long)auStack_788 + lVar16) = FUN_0045e36c;
    *(undefined ***)((long)auStack_788 + lVar16 + 8) = &PTR_DAT_00a0d068;
    *(undefined8 *)((long)auStack_728 + lVar16) = 0;
    lVar16 = lVar16 + 0x68;
  } while (lVar16 != 0x680);
  plVar9 = plVar13;
  func_0x0064eaf4(*(undefined8 *)(param_1 + 0xa8));
  iVar17 = 0;
  *plVar9 = extraout_x8;
  puVar1 = (uint *)(param_1 + 0xa0);
  do {
    __ZNSt3__15mutex4lockEv(param_1 + 0x60);
    uVar2 = 0x10U - iVar17;
    if ((int)*(uint *)(param_1 + 0x58) <= (int)(0x10U - iVar17)) {
      uVar2 = *(uint *)(param_1 + 0x58);
    }
    pppppcVar19 = (code *****)(param_1 + 0x30);
    func_0x0064e4d8();
    pppppcVar14 = (code *****)(long)(int)uVar2;
    pppppcVar18 = &ppppcStack_108;
    ppppcStack_108 = (code ****)pppppcVar19;
    ppppcStack_100 = (code ****)param_2;
    FUN_0064e77c();
    puVar10 = auStack_788;
    pppppcVar21 = param_2;
    pppppcVar22 = pppppcVar19;
    while (pppppcVar21 != pppppcVar14) {
      FUN_0064e7fc(puVar10,pppppcVar21);
      pppppcVar21 = pppppcVar21 + 0xd;
      if ((long)pppppcVar21 - (long)*pppppcVar22 == 0xfd8) {
        pppppcVar22 = pppppcVar22 + 1;
        pppppcVar21 = (code *****)*pppppcVar22;
      }
      puVar10 = puVar10 + 0xd;
    }
    FUN_0064e890(pppppcVar18,pppppcVar14,pppppcVar19,param_2);
    ppppplVar11 = (long *****)(param_1 + 0x30);
    func_0x0064e4d8();
    pppplStack_e8 = (long ****)ppppplVar11;
    ppppcStack_e0 = (code ****)pppppcVar14;
    FUN_0064e890(pppppcVar19,param_2,ppppplVar11,pppppcVar14);
    ppppplVar12 = &pppplStack_e8;
    param_2 = pppppcVar19;
    FUN_0064e77c();
    pppppcVar21 = (code *****)(param_1 + 0x10);
    pppplStack_f8 = (long ****)ppppplVar12;
    ppppcStack_f0 = (code ****)param_2;
    if (0 < (long)pppppcVar18) {
      lVar16 = *(long *)(param_1 + 0x58);
      pppppcVar21 = (code *****)&pppplStack_f8;
      pppppcVar22 = pppppcVar18;
      FUN_0064e77c();
      if ((code *****)((ulong)(lVar16 - (long)pppppcVar18) >> 1) < pppppcVar19) {
        pppppcVar19 = (code *****)(param_1 + 0x30);
        pppppcVar14 = pppppcVar22;
        func_0x0064e500();
        pppplStack_d8 = (long ****)&pppplStack_d0;
        pppplStack_d0 = (long ****)ppppplVar12;
        ppppcStack_c8 = (code ****)param_2;
        if (pppppcVar21 != pppppcVar19) {
          pppppcVar18 = (code *****)*pppppcVar21;
          do {
            FUN_0064e9bc(&pppplStack_d8,pppppcVar22,pppppcVar18 + 0x1fb);
            pppppcVar21 = pppppcVar21 + 1;
            pppppcVar22 = (code *****)*pppppcVar21;
            pppppcVar18 = pppppcVar22;
          } while (pppppcVar21 != pppppcVar19);
        }
        FUN_0064e9bc(&pppplStack_d8,pppppcVar22,pppppcVar14);
        pppppcVar19 = (code *****)ppppcStack_c8;
        ppppplVar11 = (long *****)pppplStack_d0;
        func_0x0064e500(param_1 + 0x30);
        param_2 = pppppcVar22;
LAB_0064e174:
        pppppcVar21 = pppppcVar19 + -0x1fb;
LAB_0064e178:
        if (pppppcVar19 != pppppcVar22) goto code_r0x0064e180;
        func_0x0064eb0c();
        while( true ) {
          uVar20 = param_1 + 0x30;
          FUN_0064e594();
          if (uVar20 < 0x4e) break;
          __ZdlPv(*(undefined8 *)(*(long *)(param_1 + 0x40) + -8));
          param_2 = (code *****)(*(long *)(param_1 + 0x40) + -8);
          func_0x0064e52c(param_1 + 0x30);
        }
        goto LAB_0064e2bc;
      }
      pppppcVar19 = param_2;
      if (ppppplVar11 != ppppplVar12) {
        pppplVar15 = *ppppplVar12;
        while( true ) {
          ppppplVar12 = ppppplVar12 + -1;
          FUN_0064e8d8(&pppplStack_d0,pppplVar15,param_2,pppppcVar21,pppppcVar22);
          pppppcVar22 = (code *****)ppppcStack_c0;
          pppppcVar21 = (code *****)ppppcStack_c8;
          if (ppppplVar12 == ppppplVar11) break;
          pppplVar15 = *ppppplVar12;
          param_2 = (code *****)(pppplVar15 + 0x1fb);
        }
        pppppcVar19 = (code *****)(*ppppplVar12 + 0x1fb);
      }
      param_2 = pppppcVar14;
      FUN_0064e8d8(&pppplStack_d0,pppppcVar14,pppppcVar19,pppppcVar21,pppppcVar22);
      ppppcVar6 = ppppcStack_c0;
LAB_0064e24c:
      pppppcVar21 = pppppcVar14 + -0x1fb;
LAB_0064e250:
      if (pppppcVar14 != (code *****)ppppcVar6) goto code_r0x0064e258;
      func_0x0064eb0c();
      while (uVar20 = *(long *)(param_1 + 0x50) + (long)pppppcVar18,
            *(ulong *)(param_1 + 0x50) = uVar20, 0x4d < uVar20) {
        __ZdlPv(**(undefined8 **)(param_1 + 0x38));
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
        pppppcVar18 = (code *****)0xffffffffffffffd9;
      }
    }
LAB_0064e2bc:
    __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
    puVar10 = auStack_788;
    for (uVar20 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar20 != 0;
        uVar20 = uVar20 - 1) {
      if (((*(byte *)(puVar10[1] + 8) & 1) == 0) && (*(char *)(param_1 + 0xa5) == '\x01')) {
        lVar16 = (long)*(char *)(param_1 + 0x27);
        pppppcVar19 = pppppcVar21;
        if (lVar16 < 0) {
          lVar16 = *(long *)(param_1 + 0x18);
          pppppcVar19 = *(code ******)(param_1 + 0x10);
        }
        FUN_006ad088(&pppplStack_d0,pppppcVar19,lVar16,puVar10[0xc]);
        (*(code *)*puVar10)(puVar10);
        FUN_006ad0cc(&pppplStack_d0);
      }
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      ppppcStack_c0 = (code ****)0x0;
      pppplStack_d0 = (long ****)FUN_0045e36c;
      ppppcStack_c8 = (code ****)&PTR_DAT_00a0d068;
      param_2 = (code *****)&pppplStack_d0;
      func_0x0064e828(puVar10);
      (*(code *)*ppppcStack_c8)(&ppppcStack_c8);
      puVar10 = puVar10 + 0xd;
    }
    iVar17 = uVar2 + iVar17;
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 - uVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  } while ((uVar3 - uVar2 != 0 && (int)uVar2 <= (int)uVar3) && iVar17 < 0x10);
  uVar8 = uVar3 == uVar2;
  if ((int)uVar2 < (int)uVar3) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_1);
  }
  else if (*(char *)(param_1 + 0xa4) != '\0') {
    uVar8 = uVar3 == uVar2;
    if (!(bool)uVar8) goto LAB_0064e404;
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  func_0x0064eae4();
  func_0x0064ea84(uStack_70);
  if ((bool)uVar8) {
    return iVar17;
  }
  ___stack_chk_fail();
LAB_0064e404:
  FUN_006ad134(&pppplStack_d0,&UNK_0091021b,0x21,"false");
  FUN_006ad208(&pppplStack_d0,"unknown",0x89);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x64e448);
  (*pcVar7)();
code_r0x0064e180:
  (*(code *)*pppppcVar19[1])(pppppcVar19 + 1);
  pppppcVar21 = pppppcVar21 + 0xd;
  pppppcVar19 = pppppcVar19 + 0xd;
  if ((code *****)*ppppplVar11 == pppppcVar21) goto code_r0x0064e1a4;
  goto LAB_0064e178;
code_r0x0064e1a4:
  ppppplVar11 = ppppplVar11 + 1;
  pppppcVar19 = (code *****)*ppppplVar11;
  goto LAB_0064e174;
code_r0x0064e258:
  (*(code *)*pppppcVar14[1])(pppppcVar14 + 1);
  pppppcVar21 = pppppcVar21 + 0xd;
  pppppcVar14 = pppppcVar14 + 0xd;
  if ((code *****)*ppppplVar11 == pppppcVar21) goto code_r0x0064e27c;
  goto LAB_0064e250;
code_r0x0064e27c:
  ppppplVar11 = ppppplVar11 + 1;
  pppppcVar14 = (code *****)*ppppplVar11;
  goto LAB_0064e24c;
}



/* Entry: 0064e558; end: 0064e593;  */

long FUN_0064e558(long param_1)

{
  long lVar1;
  
  lVar1 = 0x620;
  do {
    (*(code *)**(undefined8 **)(param_1 + lVar1))(param_1 + lVar1);
    lVar1 = lVar1 + -0x68;
  } while (lVar1 != -0x60);
  return param_1;
}



/* Entry: 0064e594; end: 0064e5c3;  */

long FUN_0064e594(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x27 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}


