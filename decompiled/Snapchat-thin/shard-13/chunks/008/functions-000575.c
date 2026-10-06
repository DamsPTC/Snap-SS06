/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae150c4; end: 10ae150f3;  */

void FUN_10ae150c4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae150f4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae150f4; end: 10ae15103;  */

void FUN_10ae150f4(long *param_1,long param_2)

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



/* Entry: 10ae15104; end: 10ae1512b;  */

undefined8 FUN_10ae15104(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae1512c; end: 10ae1512f;  */

undefined8 FUN_10ae1512c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae15130; end: 10ae15143;  */

void FUN_10ae15130(void)

{
  FUN_10ae15104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae15144; end: 10ae1514f;  */

undefined ** FUN_10ae15144(void)

{
  return &PTR_DAT_110c7a9d8;
}



/* Entry: 10ae15150; end: 10ae1517b;  */

void FUN_10ae15150(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
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



/* Entry: 10ae1517c; end: 10ae15233;  */

long * FUN_10ae1517c(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x00010ae1c18c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 10ae15234; end: 10ae15283;  */

void FUN_10ae15234(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae15284; end: 10ae15287;  */

void FUN_10ae15284(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15288; end: 10ae152b3;  */

void FUN_10ae15288(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae152b4; end: 10ae152db;  */

undefined8 FUN_10ae152b4(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae152dc; end: 10ae152df;  */

undefined8 FUN_10ae152dc(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae152e0; end: 10ae152f3;  */

void FUN_10ae152e0(void)

{
  FUN_10ae152b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae152f4; end: 10ae152ff;  */

undefined ** FUN_10ae152f4(void)

{
  return &PTR_DAT_110c7aa20;
}



/* Entry: 10ae15300; end: 10ae1532b;  */

void FUN_10ae15300(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
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



/* Entry: 10ae1532c; end: 10ae153e3;  */

long * FUN_10ae1532c(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x00010ae1c18c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 10ae153e4; end: 10ae15433;  */

void FUN_10ae153e4(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae15434; end: 10ae15437;  */

void FUN_10ae15434(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15438; end: 10ae15463;  */

void FUN_10ae15438(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15464; end: 10ae1548b;  */

undefined8 FUN_10ae15464(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae1548c; end: 10ae1548f;  */

undefined8 FUN_10ae1548c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae15490; end: 10ae154a3;  */

void FUN_10ae15490(void)

{
  FUN_10ae15464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae154a4; end: 10ae154af;  */

undefined ** FUN_10ae154a4(void)

{
  return &PTR_DAT_110c7aa60;
}



/* Entry: 10ae154b0; end: 10ae154db;  */

void FUN_10ae154b0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
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



/* Entry: 10ae154dc; end: 10ae15593;  */

long * FUN_10ae154dc(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x00010ae1c18c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 10ae15594; end: 10ae155e3;  */

void FUN_10ae15594(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae155e4; end: 10ae155e7;  */

void FUN_10ae155e4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae155e8; end: 10ae15613;  */

void FUN_10ae155e8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15614; end: 10ae1563b;  */

undefined8 FUN_10ae15614(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae1563c; end: 10ae1563f;  */

undefined8 FUN_10ae1563c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae15640; end: 10ae15653;  */

void FUN_10ae15640(void)

{
  FUN_10ae15614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae15654; end: 10ae1565f;  */

undefined ** FUN_10ae15654(void)

{
  return &PTR_DAT_110c7aaa8;
}



/* Entry: 10ae15660; end: 10ae1568b;  */

void FUN_10ae15660(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
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



/* Entry: 10ae1568c; end: 10ae15743;  */

long * FUN_10ae1568c(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x00010ae1c18c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 10ae15744; end: 10ae15793;  */

void FUN_10ae15744(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae15794; end: 10ae15797;  */

void FUN_10ae15794(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15798; end: 10ae157c3;  */

void FUN_10ae15798(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae157c4; end: 10ae157f3;  */

undefined8 FUN_10ae157c4(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  func_0x00010ae1c21c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae157f4; end: 10ae157f7;  */

undefined8 FUN_10ae157f4(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  func_0x00010ae1c21c();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae157f8; end: 10ae1580b;  */

void FUN_10ae157f8(void)

{
  FUN_10ae157c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1580c; end: 10ae15817;  */

undefined ** FUN_10ae1580c(void)

{
  return &PTR_DAT_110c7aaf0;
}



/* Entry: 10ae15818; end: 10ae1584f;  */

void FUN_10ae15818(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
  func_0x00010ae1c1d0();
  func_0x00010ae1c290();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 10ae15850; end: 10ae159ab;  */

long * FUN_10ae15850(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar3;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar4;
  long unaff_x21;
  int iVar5;
  long *unaff_x23;
  int iVar6;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  plVar4 = (long *)&UNK_10f6c4110;
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x00010ae1c18c();
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    param_2 = 0x4f2e736563697672;
    plVar3 = (long *)0x65732e73656d6167;
LAB_10ae158f8:
    unaff_x30 = (long *)&UNK_10f6c4133;
    func_0x00010ae1bf84();
    func_0x00010ae1bbfc();
    param_1 = plVar3;
    unaff_x20 = plVar3;
  }
  else {
    plVar3 = plVar4;
    if ((int)param_2 != 0) goto LAB_10ae158f8;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    plVar4 = (long *)0x65732e73656d6167;
  }
  else if ((int)param_2 == 0) goto LAB_10ae1594c;
  unaff_x30 = (long *)&UNK_10f6c415b;
  func_0x00010ae1bf84(plVar4);
  func_0x00010ae1bd2c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae1594c:
  plVar4 = param_1;
  if (*(char *)(unaff_x21 + 0x38) == '\x01') {
    func_0x00010ae1c000();
    plVar4 = (long *)(ulong)*(byte *)(unaff_x21 + 0x38);
    func_0x00010ae1c380();
    func_0x000107c280a8(plVar4,param_1);
    unaff_x20 = plVar4;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae1c030();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010ae1c0dc();
    if (*plVar4 - (long)unaff_x30 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*plVar4 - (int)unaff_x30) + 0x10;
        iVar5 = (int)param_3;
        param_3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)unaff_x30 + (long)iVar6);
        unaff_x30 = plVar4;
        func_0x000107c303e4(plVar4,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x30 + (long)iVar5);
    }
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10ae159ac; end: 10ae15a37;  */

void FUN_10ae159ac(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  func_0x00010ae1bf5c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  iVar1 = unaff_w20 + (uint)*(byte *)(unaff_x19 + 0x38) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x3c) = iVar1;
  return;
}



/* Entry: 10ae15a38; end: 10ae15ab7;  */

void FUN_10ae15a38(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc10();
  func_0x00010ae1bf4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1c8();
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c304();
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15ab8; end: 10ae15aeb;  */

undefined8 FUN_10ae15ab8(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae15aec; end: 10ae15aef;  */

undefined8 FUN_10ae15aec(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae15af0; end: 10ae15b03;  */

void FUN_10ae15af0(void)

{
  FUN_10ae15ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae15b04; end: 10ae15b0f;  */

undefined ** FUN_10ae15b04(void)

{
  return &PTR_DAT_110c7ab30;
}



/* Entry: 10ae15b10; end: 10ae15b43;  */

void FUN_10ae15b10(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1c144();
  if (in_NG == in_OV) {
    func_0x00010ae1c288();
  }
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



/* Entry: 10ae15b44; end: 10ae15c03;  */

long * FUN_10ae15b44(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x00010ae1bc78();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae1bc94();
    param_3 = (ulong)*(uint *)(param_2 + 0x3c);
    func_0x00010ae1be7c();
    func_0x00010ae1c244();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae15c04; end: 10ae15c07;  */

void FUN_10ae15c04(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae15c38();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15c08; end: 10ae15c37;  */

void FUN_10ae15c08(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae15c38();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15c38; end: 10ae15c47;  */

void FUN_10ae15c38(long *param_1,long param_2)

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



/* Entry: 10ae15c48; end: 10ae15c6f;  */

undefined8 FUN_10ae15c48(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  return param_1;
}



/* Entry: 10ae15c70; end: 10ae15c73;  */

undefined8 FUN_10ae15c70(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  return param_1;
}



/* Entry: 10ae15c74; end: 10ae15c87;  */

void FUN_10ae15c74(void)

{
  FUN_10ae15c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae15c88; end: 10ae15c93;  */

undefined ** FUN_10ae15c88(void)

{
  return &PTR_DAT_110c7ab78;
}



/* Entry: 10ae15c94; end: 10ae15cc3;  */

void FUN_10ae15c94(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10ae15cc4; end: 10ae15d67;  */

long * FUN_10ae15cc4(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae1bdb8();
  plVar2 = param_1;
  if ((int)param_1[3] != 0) {
    func_0x00010ae1c000();
    plVar2 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010ae1c0e8();
    param_2 = param_1;
    unaff_x20 = plVar2;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x10));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae15d34;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae15d34;
  param_4 = (long *)&UNK_10f6c4188;
  func_0x00010ae1bf84();
  func_0x00010ae1bbfc();
  plVar2 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae15d34:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae15d68; end: 10ae15e37;  */

void FUN_10ae15d68(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010ae1bd38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10ae15e38; end: 10ae15e6b;  */

undefined8 FUN_10ae15e38(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae15e6c; end: 10ae15e6f;  */

undefined8 FUN_10ae15e6c(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x00010ae1bf6c();
  func_0x00010ae1c354();
  if (extraout_x8 != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10ae15e70; end: 10ae15e83;  */

void FUN_10ae15e70(void)

{
  FUN_10ae15e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae15e84; end: 10ae15e8f;  */

undefined ** FUN_10ae15e84(void)

{
  return &PTR_DAT_110c7abb8;
}



/* Entry: 10ae15e90; end: 10ae15ec3;  */

void FUN_10ae15e90(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1c144();
  if (in_NG == in_OV) {
    func_0x00010ae1c288();
  }
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



/* Entry: 10ae15ec4; end: 10ae15f83;  */

long * FUN_10ae15ec4(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x00010ae1bc78();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae1bc94();
    param_3 = (ulong)*(uint *)(param_2 + 0x1c);
    func_0x00010ae1be7c();
    func_0x00010ae1c244();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae15f84; end: 10ae15f87;  */

void FUN_10ae15f84(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae15fb8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15f88; end: 10ae15fb7;  */

void FUN_10ae15f88(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae15fb8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae15fb8; end: 10ae15ffb;  */

void FUN_10ae15fb8(long *param_1,long param_2)

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



/* Entry: 10ae15ffc; end: 10ae1601f;  */

undefined8 FUN_10ae15ffc(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  return param_1;
}



/* Entry: 10ae16020; end: 10ae16023;  */

undefined8 FUN_10ae16020(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  return param_1;
}



/* Entry: 10ae16024; end: 10ae16037;  */

void FUN_10ae16024(void)

{
  FUN_10ae15ffc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae16038; end: 10ae1605b;  */

undefined ** FUN_10ae16038(void)

{
  return &PTR_DAT_110c7abf8;
}



/* Entry: 10ae1605c; end: 10ae160db;  */

long * FUN_10ae1605c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010ae1be3c();
  if ((int)param_1[2] != 0) {
    func_0x00010ae1c1a4();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010ae1c1a4();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010ae1c1a4();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae160dc; end: 10ae1615b;  */

ulong FUN_10ae160dc(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  int iVar2;
  int extraout_w9;
  long lVar3;
  ulong uVar4;
  
  iVar2 = -9;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x00010ae1c3fc();
    uVar1 = extraout_x8;
    iVar2 = extraout_w9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * iVar2 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar1 = lVar3 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 10ae1615c; end: 10ae161a3;  */

long FUN_10ae1615c(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c16c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10ae15ffc();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10ae161bc(param_1);
  }
  return param_1;
}



/* Entry: 10ae161a4; end: 10ae161a7;  */

long FUN_10ae161a4(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c16c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10ae15ffc();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10ae161bc(param_1);
  }
  return param_1;
}



/* Entry: 10ae161a8; end: 10ae161bb;  */

void FUN_10ae161a8(void)

{
  FUN_10ae1615c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae161bc; end: 10ae161e7;  */

void FUN_10ae161bc(long param_1)

{
  if (*(int *)(param_1 + 0x38) == 100) {
    func_0x00010ae1c21c();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10ae161e8; end: 10ae161f3;  */

undefined ** FUN_10ae161e8(void)

{
  return &PTR_DAT_110c7ac40;
}



/* Entry: 10ae161f4; end: 10ae1623f;  */

void FUN_10ae161f4(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010ae1c3b4();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x00010ae16044(unaff_x19[4]);
  }
  *(undefined1 *)((long)unaff_x19 + 0x2c) = 0;
  *(undefined4 *)(unaff_x19 + 5) = 0;
  FUN_10ae161bc();
  func_0x00010ae1c3e4();
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



/* Entry: 10ae16240; end: 10ae16383;  */

long * FUN_10ae16240(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  plVar1 = param_2;
  plVar3 = param_3;
  func_0x00010ae1c03c(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae1629c;
  }
  else if ((int)plVar1 == 0) goto LAB_10ae1629c;
  func_0x00010ae1bf84();
  param_2 = param_3;
  func_0x00010ae1bfbc();
LAB_10ae1629c:
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010ae1bfe8();
    param_2 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010ae1c388();
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    func_0x00010ae1bfe8();
    param_2 = (long *)0x18;
    func_0x000107c280a8();
    func_0x00010ae1c210();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x1c);
    param_2 = (long *)0x4;
    func_0x000107c303cc();
  }
  if (*(int *)(param_1 + 0x38) == 100) {
    func_0x00010ae1c03c(*(undefined8 *)(param_1 + 0x30));
    func_0x00010ae1bf84();
    param_2 = param_3;
    func_0x00010ae1bfbc(param_3,100);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010ae1c030();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)plVar3 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar3);
  }
  while( true ) {
    iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar4 = (int)plVar3;
    plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
    if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
    func_0x00010b4d5738();
    lVar2 = (long)param_2 + (long)iVar5;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar2);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar4);
}



/* Entry: 10ae16384; end: 10ae16437;  */

long FUN_10ae16384(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010ae1c024(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar3 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10ae160dc(*(undefined8 *)(param_1 + 0x20));
    func_0x00010ae1bcb0();
    func_0x00010ae1c3cc();
    lVar3 = extraout_x8_00 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010ae1be1c();
  }
  lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x2c) * 2;
  if (*(int *)(param_1 + 0x38) == 100) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10ae16438; end: 10ae1643b;  */

void FUN_10ae16438(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010ae1c098();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar5 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010ae1bed4();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      uVar3 = uVar5;
      FUN_10ae1addc();
      *(ulong *)(unaff_x21 + 0x20) = uVar3;
    }
    else {
      func_0x00010ae15fc8();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2c) = 1;
  }
  func_0x00010ae1c30c();
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 == 0) goto LAB_10ae16534;
  if (*(int *)(unaff_x21 + 0x38) == iVar1) {
    if (iVar1 != 100) goto LAB_10ae16534;
LAB_10ae16520:
    puVar2 = (undefined *)(*(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc);
  }
  else {
    if (*(int *)(unaff_x21 + 0x38) != 0) {
      FUN_10ae161bc();
    }
    *(int *)(unaff_x21 + 0x38) = iVar1;
    if (iVar1 != 100) goto LAB_10ae16534;
    puVar2 = &DAT_11383d918;
    *(undefined **)(unaff_x21 + 0x30) = &DAT_11383d918;
    if (*(int *)(unaff_x20 + 0x38) == 100) goto LAB_10ae16520;
  }
  func_0x000107c30248(unaff_x21 + 0x30,puVar2,uVar5);
LAB_10ae16534:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c05c();
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10ae1643c; end: 10ae1655f;  */

void FUN_10ae1643c(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010ae1c098();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar5 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010ae1bed4();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      uVar3 = uVar5;
      FUN_10ae1addc();
      *(ulong *)(unaff_x21 + 0x20) = uVar3;
    }
    else {
      func_0x00010ae15fc8();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2c) = 1;
  }
  func_0x00010ae1c30c();
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 == 0) goto LAB_10ae16534;
  if (*(int *)(unaff_x21 + 0x38) == iVar1) {
    if (iVar1 != 100) goto LAB_10ae16534;
LAB_10ae16520:
    puVar2 = (undefined *)(*(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc);
  }
  else {
    if (*(int *)(unaff_x21 + 0x38) != 0) {
      FUN_10ae161bc();
    }
    *(int *)(unaff_x21 + 0x38) = iVar1;
    if (iVar1 != 100) goto LAB_10ae16534;
    puVar2 = &DAT_11383d918;
    *(undefined **)(unaff_x21 + 0x30) = &DAT_11383d918;
    if (*(int *)(unaff_x20 + 0x38) == 100) goto LAB_10ae16520;
  }
  func_0x000107c30248(unaff_x21 + 0x30,puVar2,uVar5);
LAB_10ae16534:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c05c();
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10ae16560; end: 10ae16587;  */

undefined8 FUN_10ae16560(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  return param_1;
}



/* Entry: 10ae16588; end: 10ae1658b;  */

undefined8 FUN_10ae16588(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  return param_1;
}



/* Entry: 10ae1658c; end: 10ae1659f;  */

void FUN_10ae1658c(void)

{
  FUN_10ae16560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae165a0; end: 10ae165ab;  */

undefined ** FUN_10ae165a0(void)

{
  return &PTR_DAT_110c7ac80;
}



/* Entry: 10ae165ac; end: 10ae165d7;  */

void FUN_10ae165ac(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
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



/* Entry: 10ae165d8; end: 10ae1665b;  */

long * FUN_10ae165d8(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010ae1bd98();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae16624;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10ae16624;
  func_0x00010ae1bf84();
  func_0x00010ae1bfc8();
  param_2 = unaff_x22;
LAB_10ae16624:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010ae1c030();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10ae1665c; end: 10ae166b3;  */

void FUN_10ae1665c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010ae1bd38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10ae166b4; end: 10ae166b7;  */

void FUN_10ae166b4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae166b8; end: 10ae166ff;  */

void FUN_10ae166b8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae16700; end: 10ae1672f;  */

undefined8 FUN_10ae16700(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  return param_1;
}



/* Entry: 10ae16730; end: 10ae16733;  */

undefined8 FUN_10ae16730(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  return param_1;
}



/* Entry: 10ae16734; end: 10ae16747;  */

void FUN_10ae16734(void)

{
  FUN_10ae16700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae16748; end: 10ae16753;  */

undefined ** FUN_10ae16748(void)

{
  return &PTR_DAT_110c7acc0;
}


