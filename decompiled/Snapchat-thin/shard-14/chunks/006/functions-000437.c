/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5745dc; end: 10b574643;  */

long * FUN_10b5745dc(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b575a18();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b575a34();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x00010b575a68();
    func_0x00010b575c28();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b48();
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



/* Entry: 10b574644; end: 10b574693;  */

void FUN_10b574644(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5759f4();
  while (unaff_x22 != 0) {
    FUN_10b5744fc(*unaff_x21);
    func_0x00010b575c10();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b575b60();
  }
  func_0x00010b575c04();
  return;
}



/* Entry: 10b574694; end: 10b574697;  */

void FUN_10b574694(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b575ad0();
  FUN_10b574548();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b2c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b574698; end: 10b5746c7;  */

void FUN_10b574698(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b575ad0();
  FUN_10b574548();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b2c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5746c8; end: 10b5746ff;  */

long FUN_10b5746c8(long param_1)

{
  func_0x00010b575b08();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b574700; end: 10b574703;  */

long FUN_10b574700(long param_1)

{
  func_0x00010b575b08();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b574704; end: 10b574717;  */

void FUN_10b574704(void)

{
  FUN_10b5746c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b574718; end: 10b574723;  */

undefined ** FUN_10b574718(void)

{
  return &PTR_DAT_110d0c258;
}



/* Entry: 10b574724; end: 10b574763;  */

void FUN_10b574724(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b574764; end: 10b5747cb;  */

long * FUN_10b574764(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b575a18();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b575a34();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x00010b575a68();
    func_0x00010b575c28();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b48();
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



/* Entry: 10b5747cc; end: 10b57481b;  */

void FUN_10b5747cc(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5759f4();
  while (unaff_x22 != 0) {
    FUN_10b57481c(*unaff_x21);
    func_0x00010b575c10();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b575b60();
  }
  func_0x00010b575c04();
  return;
}



/* Entry: 10b57481c; end: 10b574833;  */

void FUN_10b57481c(void)

{
  FUN_10b574644();
  FUN_10b5759cc();
  return;
}



/* Entry: 10b574834; end: 10b574837;  */

void FUN_10b574834(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b575ad0();
  FUN_10b574868();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b2c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b574838; end: 10b574867;  */

void FUN_10b574838(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b575ad0();
  FUN_10b574868();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b2c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b574868; end: 10b574877;  */

void FUN_10b574868(long *param_1,long param_2)

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



/* Entry: 10b574878; end: 10b5748c3;  */

void FUN_10b574878(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x00010b575b18();
  *unaff_x19 = &PTR_FUN_110d0c120;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b575a5c();
  }
  FUN_10b5755bc(unaff_x19 + 2);
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return;
}



/* Entry: 10b5748c4; end: 10b5748ef;  */

long FUN_10b5748c4(long param_1)

{
  func_0x00010b575b08();
  FUN_10b5755dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5748f0; end: 10b5748f3;  */

long FUN_10b5748f0(long param_1)

{
  func_0x00010b575b08();
  FUN_10b5755dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5748f4; end: 10b574907;  */

void FUN_10b5748f4(void)

{
  FUN_10b5748c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b574908; end: 10b574913;  */

undefined ** FUN_10b574908(void)

{
  return &PTR_DAT_110d0c290;
}



/* Entry: 10b574914; end: 10b574953;  */

void FUN_10b574914(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b574954; end: 10b5749bb;  */

long * FUN_10b574954(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b575a18();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b575a34();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x00010b575a68();
    func_0x00010b575c28();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b48();
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



/* Entry: 10b5749bc; end: 10b574a0b;  */

void FUN_10b5749bc(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5759f4();
  while (unaff_x22 != 0) {
    FUN_10b574a0c(*unaff_x21);
    func_0x00010b575c10();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b575b60();
  }
  func_0x00010b575c04();
  return;
}



/* Entry: 10b574a0c; end: 10b574a23;  */

void FUN_10b574a0c(void)

{
  FUN_10b5747cc();
  FUN_10b5759cc();
  return;
}



/* Entry: 10b574a24; end: 10b574a27;  */

void FUN_10b574a24(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b575ad0();
  FUN_10b574a58();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b2c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b574a28; end: 10b574a57;  */

void FUN_10b574a28(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b575ad0();
  FUN_10b574a58();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b2c();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b574a58; end: 10b574a67;  */

void FUN_10b574a58(long *param_1,long param_2)

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



/* Entry: 10b574a68; end: 10b574adf;  */

void FUN_10b574a68(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b575b18();
  *unaff_x19 = &PTR_FUN_110d0bf90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b575a5c();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    FUN_10b575774();
  }
  unaff_x19[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10b575774();
  }
  unaff_x19[4] = unaff_x20;
  return;
}



/* Entry: 10b574ae0; end: 10b574b0b;  */

undefined8 FUN_10b574ae0(undefined8 param_1)

{
  func_0x00010b575b08();
  FUN_10b574b0c(param_1);
  return param_1;
}



/* Entry: 10b574b0c; end: 10b574b43;  */

void FUN_10b574b0c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b57423c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b57423c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b574b44; end: 10b574b47;  */

undefined8 FUN_10b574b44(undefined8 param_1)

{
  func_0x00010b575b08();
  FUN_10b574b0c(param_1);
  return param_1;
}



/* Entry: 10b574b48; end: 10b574b5b;  */

void FUN_10b574b48(void)

{
  FUN_10b574ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b574b5c; end: 10b574b67;  */

undefined ** FUN_10b574b5c(void)

{
  return &PTR_DAT_110d0c2d0;
}



/* Entry: 10b574b68; end: 10b574bbb;  */

void FUN_10b574b68(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5742d0(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5742d0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b574bbc; end: 10b574cbb;  */

long * FUN_10b574bbc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b575a74();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    func_0x00010b575a68();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_4 = (long *)0x2;
    func_0x000107c303cc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b48();
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



/* Entry: 10b574cbc; end: 10b574cbf;  */

void FUN_10b574cbc(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b575bb0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b575774();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b574200();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b575774();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b574200();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b575bc0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b574cc0; end: 10b574d67;  */

void FUN_10b574cc0(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b575bb0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b575774();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b574200();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b575774();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b574200();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b575bc0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b574d68; end: 10b574d9b;  */

long FUN_10b574d68(long param_1)

{
  func_0x00010b575b08();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b57423c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b574d9c; end: 10b574d9f;  */

long FUN_10b574d9c(long param_1)

{
  func_0x00010b575b08();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b57423c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b574da0; end: 10b574db3;  */

void FUN_10b574da0(void)

{
  FUN_10b574d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b574db4; end: 10b574dbf;  */

undefined ** FUN_10b574db4(void)

{
  return &PTR_DAT_110d0c308;
}



/* Entry: 10b574dc0; end: 10b574e07;  */

void FUN_10b574dc0(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5742d0(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b574e08; end: 10b574eb7;  */

long * FUN_10b574e08(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  int iVar5;
  int iVar6;
  
  func_0x00010b575a74();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    func_0x00010b575a68();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b575aec();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    plVar2 = (long *)0x11;
    func_0x000107c280a8(0x11,param_1);
    param_4 = plVar2 + 1;
    *plVar2 = lVar4;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b575aec();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280b8(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b48();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b574eb8; end: 10b574f3f;  */

void FUN_10b574eb8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b5744fc();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b575b60();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b574f40; end: 10b574f43;  */

void FUN_10b574f40(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b575bb0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b575774();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00010b574200();
      puVar2 = puVar3;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575bc0();
    if ((*puVar2 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b574f44; end: 10b574fe3;  */

void FUN_10b574f44(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b575bb0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b575774();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00010b574200();
      puVar2 = puVar3;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575bc0();
    if ((*puVar2 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b574fe4; end: 10b575133;  */

void FUN_10b574fe4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010b575bdc();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b57500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bf8a8)[extraout_x8] * 4 + 0x10b575010))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b575134; end: 10b57515f;  */

undefined8 FUN_10b575134(undefined8 param_1)

{
  func_0x00010b575b08();
  FUN_10b575160(param_1);
  return param_1;
}



/* Entry: 10b575160; end: 10b575173;  */

void FUN_10b575160(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010b575bdc();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b57500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bf8a8)[extraout_x8] * 4 + 0x10b575010))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b575174; end: 10b575187;  */

void FUN_10b575174(void)

{
  FUN_10b575134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b575188; end: 10b575193;  */

undefined ** FUN_10b575188(void)

{
  return &PTR_DAT_110d0c340;
}



/* Entry: 10b575194; end: 10b5752eb;  */

void FUN_10b575194(long param_1)

{
  ulong *puVar1;
  
  FUN_10b574fe4();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5752ec; end: 10b57534b;  */

void FUN_10b5752ec(void)

{
  FUN_10b5744ac();
  FUN_10b5759cc();
  return;
}



/* Entry: 10b57534c; end: 10b57534f;  */

void FUN_10b57534c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b575bb0();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b574fe4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        func_0x00010b574200();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      FUN_10b575774();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574518();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b5757ac();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574698();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b575808();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574838();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b575864();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574a28();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b5758d0();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574cc0();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b575908();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574f44();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      FUN_10b575940();
      break;
    default:
      goto LAB_10b575510;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10b575510:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575bc0();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b575350; end: 10b57552b;  */

void FUN_10b575350(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b575bb0();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b574fe4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        func_0x00010b574200();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      FUN_10b575774();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574518();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b5757ac();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574698();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b575808();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574838();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b575864();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574a28();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b5758d0();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574cc0();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      func_0x00010b575908();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010b575aa4();
        FUN_10b574f44();
        goto LAB_10b575510;
      }
      func_0x00010b575b54();
      FUN_10b575940();
      break;
    default:
      goto LAB_10b575510;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10b575510:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575bc0();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b57552c; end: 10b57556b;  */

void FUN_10b57552c(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x0001072f224c();
  }
  else {
    func_0x0001072f2014();
  }
  func_0x0001072f21b0(&UNK_110d0bf30);
  *(undefined4 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10b57556c; end: 10b57558b;  */

void FUN_10b57556c(void)

{
  func_0x00010b575bf0();
  FUN_10b574548();
  return;
}



/* Entry: 10b57558c; end: 10b5755bb;  */

long * FUN_10b57558c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5755bc; end: 10b5755db;  */

void FUN_10b5755bc(void)

{
  func_0x00010b575bf0();
  FUN_10b574a58();
  return;
}



/* Entry: 10b5755dc; end: 10b57560b;  */

long * FUN_10b5755dc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b57560c; end: 10b57575f;  */

void FUN_10b57560c(long param_1)

{
  if (param_1 == 0) {
    func_0x00010b575af8();
  }
  else {
    func_0x00010b575a50();
  }
  func_0x00010b575abc(&PTR_FUN_110d0bfe0);
  return;
}



/* Entry: 10b575760; end: 10b575773;  */

void FUN_10b575760(ulong *param_1)

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



/* Entry: 10b575774; end: 10b5757ab;  */

undefined8 * FUN_10b575774(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010b575c1c();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    func_0x00010b575bd0();
  }
  *param_1 = &PTR_FUN_110d0bf40;
  param_1[1] = unaff_x20;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b574200();
  return param_1;
}



/* Entry: 10b5757ac; end: 10b5758cf;  */

undefined8 * FUN_10b5757ac(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b575af8();
  }
  else {
    func_0x00010b575a50();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d0c030;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b575a5c();
  }
  func_0x00010b575b80();
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 10b5758d0; end: 10b57593f;  */

undefined8 * FUN_10b5758d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b575c1c();
  if (param_1 == 0) {
    func_0x00010b575af8();
  }
  else {
    func_0x00010b575b00();
  }
  puVar1 = unaff_x19;
  func_0x00010b575b18();
  *unaff_x19 = &PTR_FUN_110d0c120;
  if ((puVar1[1] & 1) != 0) {
    func_0x00010b575a5c();
  }
  FUN_10b5755bc(unaff_x19 + 2,unaff_x20,unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return unaff_x19;
}



/* Entry: 10b575940; end: 10b5759cb;  */

undefined8 * FUN_10b575940(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b575af8();
  }
  else {
    func_0x00010b575b00();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d0c080;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b575a5c();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b575774(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
  puVar2[4] = uVar3;
  return puVar2;
}



/* Entry: 10b5759cc; end: 10b575c33;  */

long FUN_10b5759cc(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b575c34; end: 10b575cbf;  */

undefined8 * FUN_10b575c34(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0c448;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b576018(param_1 + 2,param_2,param_3 + 0x10);
  lVar1 = param_3 + 0x28;
  func_0x000107c2809c(lVar1,param_2);
  param_1[5] = lVar1;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 10b575cc0; end: 10b575cef;  */

long FUN_10b575cc0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b575cf0(param_1);
  return param_1;
}



/* Entry: 10b575cf0; end: 10b575d17;  */

long * FUN_10b575cf0(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b575d18; end: 10b575d1b;  */

long FUN_10b575d18(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b575cf0(param_1);
  return param_1;
}



/* Entry: 10b575d1c; end: 10b575d2f;  */

void FUN_10b575d1c(void)

{
  FUN_10b575cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b575d30; end: 10b575d3b;  */

undefined ** FUN_10b575d30(void)

{
  return &PTR_DAT_110d0c488;
}



/* Entry: 10b575d3c; end: 10b575d8f;  */

void FUN_10b575d3c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c3025c(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b575d90; end: 10b575eb7;  */

long * FUN_10b575d90(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar2 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x30),param_2);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b575e18;
    puVar3 = (undefined8 *)*puVar9;
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b575e18;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f77b9b9);
  plVar4 = param_3;
  func_0x000107c280a0(param_3,2,puVar9,plVar2);
  plVar2 = plVar4;
LAB_10b575e18:
  iVar10 = *(int *)(param_1 + 0x18);
  for (iVar8 = 0; iVar10 != iVar8; iVar8 = iVar8 + 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar8 * 8 + 7);
    }
    plVar4 = (long *)0x3;
    func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar2,param_3);
    plVar2 = plVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar2 + (long)iVar10;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar8);
    }
    _memcpy(plVar2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar6);
  }
  return plVar2;
}



/* Entry: 10b575eb8; end: 10b575f73;  */

long FUN_10b575eb8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b51df80();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar2 + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x34) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b575f74; end: 10b575f77;  */

void FUN_10b575f74(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b576000(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b575f78; end: 10b575fff;  */

void FUN_10b575f78(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b576000(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b576000; end: 10b576017;  */

void FUN_10b576000(long *param_1,long param_2)

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
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    (*(code *)&UNK_1002a1270)(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b576018; end: 10b576097;  */

undefined8 * FUN_10b576018(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b576000(param_1,param_3);
  return param_1;
}



/* Entry: 10b576098; end: 10b5760f7;  */

void FUN_10b576098(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    (*(code *)&UNK_1002a1270)(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b5760f8; end: 10b57611f;  */

long FUN_10b5760f8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b576120; end: 10b576167;  */

undefined8 * FUN_10b576120(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d0c4e8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010b5760b8(param_1,param_3);
  return param_1;
}



/* Entry: 10b576168; end: 10b57616b;  */

long FUN_10b576168(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b57616c; end: 10b57617f;  */

void FUN_10b57616c(void)

{
  FUN_10b5760f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b576180; end: 10b5761a3;  */

undefined ** FUN_10b576180(void)

{
  return &PTR_DAT_110d0c528;
}



/* Entry: 10b5761a4; end: 10b57623f;  */

long * FUN_10b5761a4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar1);
  }
  plVar1 = plVar2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x18),plVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar7;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar6);
    }
    _memcpy(plVar1,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar4);
  }
  return plVar1;
}



/* Entry: 10b576240; end: 10b5762d3;  */

ulong FUN_10b576240(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5762d4; end: 10b576317;  */

void FUN_10b5762d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d0c4e8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b576318; end: 10b576353;  */

void FUN_10b576318(void)

{
  return;
}



/* Entry: 10b576354; end: 10b57637b;  */

long FUN_10b576354(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b57637c; end: 10b5763c7;  */

undefined8 * FUN_10b57637c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d0c588;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b576320(param_1,param_3);
  return param_1;
}



/* Entry: 10b5763c8; end: 10b5763cb;  */

long FUN_10b5763c8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5763cc; end: 10b5763df;  */

void FUN_10b5763cc(void)

{
  FUN_10b576354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5763e0; end: 10b5763ff;  */

undefined ** FUN_10b5763e0(void)

{
  return &PTR_DAT_110d0c5c8;
}



/* Entry: 10b576400; end: 10b5764ab;  */

long * FUN_10b576400(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b57656c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b576578();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b57656c();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b576578();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b5764ac; end: 10b57651b;  */

ulong FUN_10b5764ac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b57651c; end: 10b576563;  */

void FUN_10b57651c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d0c588;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b576564; end: 10b576583;  */

void FUN_10b576564(void)

{
  return;
}



/* Entry: 10b576584; end: 10b57662f;  */

undefined8 * FUN_10b576584(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0c630;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c2a448(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107c282d4(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)(param_1 + 7) = 0;
  func_0x000107c282d4(param_1 + 8,param_2,param_3 + 0x40);
  param_1[10] = 0;
  return param_1;
}


