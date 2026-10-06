/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a57f2fc; end: 10a57f35f;  */

bool FUN_10a57f2fc(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x8a) {
    iVar1 = 0xe4cb141;
    _memcmp(&UNK_10e4cb141);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57f360; end: 10a57f47f;  */

void FUN_10a57f360(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a57f480; end: 10a57f48f;  */

undefined1  [16] FUN_10a57f480(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8a;
  auVar1._0_8_ = &UNK_10e4cb141;
  return auVar1;
}



/* Entry: 10a57f490; end: 10a57f49f;  */

long * FUN_10a57f490(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57f4d8();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57f4a0; end: 10a57f4d7;  */

long * FUN_10a57f4a0(long *param_1)

{
  long lVar1;
  
  FUN_10a57f4d8(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57f4d8; end: 10a57f53f;  */

void FUN_10a57f4d8(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57f540);
  (*pcVar1)();
}



/* Entry: 10a57f540; end: 10a57f54f;  */

void FUN_10a57f540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57f550; end: 10a57f56f;  */

void FUN_10a57f550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2650;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57f570; end: 10a57f57f;  */

void FUN_10a57f570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57f578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57f580; end: 10a57f627;  */

undefined8 * FUN_10a57f580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf26a0;
  (**(code **)param_1[9])();
  FUN_10a57f7cc(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57f628; end: 10a57f68b;  */

bool FUN_10a57f628(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x88) {
    iVar1 = 0xe4cb23d;
    _memcmp(&UNK_10e4cb23d);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57f68c; end: 10a57f7ab;  */

void FUN_10a57f68c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a57f7ac; end: 10a57f7bb;  */

undefined1  [16] FUN_10a57f7ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x88;
  auVar1._0_8_ = &UNK_10e4cb23d;
  return auVar1;
}



/* Entry: 10a57f7bc; end: 10a57f7cb;  */

long * FUN_10a57f7bc(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57f804();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57f7cc; end: 10a57f803;  */

long * FUN_10a57f7cc(long *param_1)

{
  long lVar1;
  
  FUN_10a57f804(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57f804; end: 10a57f86b;  */

void FUN_10a57f804(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57f86c);
  (*pcVar1)();
}



/* Entry: 10a57f86c; end: 10a57f87b;  */

void FUN_10a57f86c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf26f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57f87c; end: 10a57f89b;  */

void FUN_10a57f87c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf26f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57f89c; end: 10a57f8ab;  */

void FUN_10a57f89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57f8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57f8ac; end: 10a57f953;  */

undefined8 * FUN_10a57f8ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2748;
  (**(code **)param_1[9])();
  FUN_10a57faf8(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57f954; end: 10a57f9b7;  */

bool FUN_10a57f954(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x8d) {
    iVar1 = 0xe4cb33c;
    _memcmp(&UNK_10e4cb33c);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57f9b8; end: 10a57fad7;  */

void FUN_10a57f9b8(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a57fad8; end: 10a57fae7;  */

undefined1  [16] FUN_10a57fad8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8d;
  auVar1._0_8_ = &UNK_10e4cb33c;
  return auVar1;
}



/* Entry: 10a57fae8; end: 10a57faf7;  */

long * FUN_10a57fae8(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57fb30();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57faf8; end: 10a57fb2f;  */

long * FUN_10a57faf8(long *param_1)

{
  long lVar1;
  
  FUN_10a57fb30(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57fb30; end: 10a57fb97;  */

void FUN_10a57fb30(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57fb98);
  (*pcVar1)();
}



/* Entry: 10a57fb98; end: 10a57fba7;  */

void FUN_10a57fb98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf27a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57fba8; end: 10a57fbc7;  */

void FUN_10a57fba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf27a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57fbc8; end: 10a57fbd7;  */

void FUN_10a57fbc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57fbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57fbd8; end: 10a57fc7f;  */

undefined8 * FUN_10a57fbd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf27f0;
  (**(code **)param_1[9])();
  FUN_10a57fe24(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57fc80; end: 10a57fce3;  */

bool FUN_10a57fc80(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x84) {
    iVar1 = 0xe4cb437;
    _memcmp(&UNK_10e4cb437);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57fce4; end: 10a57fe03;  */

void FUN_10a57fce4(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a57fe04; end: 10a57fe13;  */

undefined1  [16] FUN_10a57fe04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x84;
  auVar1._0_8_ = &UNK_10e4cb437;
  return auVar1;
}



/* Entry: 10a57fe14; end: 10a57fe23;  */

long * FUN_10a57fe14(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57fe5c();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57fe24; end: 10a57fe5b;  */

long * FUN_10a57fe24(long *param_1)

{
  long lVar1;
  
  FUN_10a57fe5c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57fe5c; end: 10a57fec3;  */

void FUN_10a57fe5c(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57fec4);
  (*pcVar1)();
}



/* Entry: 10a57fec4; end: 10a57fed3;  */

void FUN_10a57fec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2848;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57fed4; end: 10a57fef3;  */

void FUN_10a57fed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2848;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57fef4; end: 10a57ff03;  */

void FUN_10a57fef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57fefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57ff04; end: 10a57ffab;  */

undefined8 * FUN_10a57ff04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2898;
  (**(code **)param_1[9])();
  FUN_10a580150(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57ffac; end: 10a58000f;  */

bool FUN_10a57ffac(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x89) {
    iVar1 = 0xe4cb52e;
    _memcmp(&UNK_10e4cb52e);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a580010; end: 10a58012f;  */

void FUN_10a580010(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a580130; end: 10a58013f;  */

undefined1  [16] FUN_10a580130(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x89;
  auVar1._0_8_ = &UNK_10e4cb52e;
  return auVar1;
}



/* Entry: 10a580140; end: 10a58014f;  */

long * FUN_10a580140(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a580188();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a580150; end: 10a580187;  */

long * FUN_10a580150(long *param_1)

{
  long lVar1;
  
  FUN_10a580188(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a580188; end: 10a5801ef;  */

void FUN_10a580188(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5801f0);
  (*pcVar1)();
}



/* Entry: 10a5801f0; end: 10a5801ff;  */

void FUN_10a5801f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf28f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a580200; end: 10a58021f;  */

void FUN_10a580200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf28f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a580220; end: 10a58022f;  */

void FUN_10a580220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a580228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a580230; end: 10a5802d7;  */

undefined8 * FUN_10a580230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2940;
  (**(code **)param_1[9])();
  FUN_10a58047c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5802d8; end: 10a58033b;  */

bool FUN_10a5802d8(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x87) {
    iVar1 = 0xe4cb628;
    _memcmp(&UNK_10e4cb628);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a58033c; end: 10a58045b;  */

void FUN_10a58033c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a58045c; end: 10a58046b;  */

undefined1  [16] FUN_10a58045c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x87;
  auVar1._0_8_ = &UNK_10e4cb628;
  return auVar1;
}



/* Entry: 10a58046c; end: 10a58047b;  */

long * FUN_10a58046c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a5804b4();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a58047c; end: 10a5804b3;  */

long * FUN_10a58047c(long *param_1)

{
  long lVar1;
  
  FUN_10a5804b4(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5804b4; end: 10a58051b;  */

void FUN_10a5804b4(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a58051c);
  (*pcVar1)();
}



/* Entry: 10a58051c; end: 10a58052b;  */

void FUN_10a58051c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2998;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a58052c; end: 10a58054b;  */

void FUN_10a58052c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2998;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58054c; end: 10a58055b;  */

void FUN_10a58054c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a580554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a58055c; end: 10a580603;  */

undefined8 * FUN_10a58055c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf29e8;
  (**(code **)param_1[9])();
  FUN_10a5807a8(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a580604; end: 10a580667;  */

bool FUN_10a580604(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x85) {
    iVar1 = 0xe4cc4da;
    _memcmp(&UNK_10e4cc4da);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a580668; end: 10a580787;  */

void FUN_10a580668(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a580788; end: 10a580797;  */

undefined1  [16] FUN_10a580788(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x85;
  auVar1._0_8_ = &UNK_10e4cc4da;
  return auVar1;
}



/* Entry: 10a580798; end: 10a5807a7;  */

long * FUN_10a580798(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a5807e0();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a5807a8; end: 10a5807df;  */

long * FUN_10a5807a8(long *param_1)

{
  long lVar1;
  
  FUN_10a5807e0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5807e0; end: 10a580847;  */

void FUN_10a5807e0(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a580848);
  (*pcVar1)();
}



/* Entry: 10a580848; end: 10a580857;  */

void FUN_10a580848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2a58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a580858; end: 10a580877;  */

void FUN_10a580858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2a58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a580878; end: 10a580887;  */

void FUN_10a580878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a580880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a580888; end: 10a58092f;  */

undefined8 * FUN_10a580888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2aa8;
  (**(code **)param_1[9])();
  FUN_10a580ad4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a580930; end: 10a580993;  */

bool FUN_10a580930(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x8a) {
    iVar1 = 0xe4cc675;
    _memcmp(&UNK_10e4cc675);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a580994; end: 10a580ab3;  */

void FUN_10a580994(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a580ab4; end: 10a580ac3;  */

undefined1  [16] FUN_10a580ab4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8a;
  auVar1._0_8_ = &UNK_10e4cc675;
  return auVar1;
}



/* Entry: 10a580ac4; end: 10a580ad3;  */

long * FUN_10a580ac4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a580b0c();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a580ad4; end: 10a580b0b;  */

long * FUN_10a580ad4(long *param_1)

{
  long lVar1;
  
  FUN_10a580b0c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a580b0c; end: 10a580b73;  */

void FUN_10a580b0c(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a580b74);
  (*pcVar1)();
}



/* Entry: 10a580b74; end: 10a580b83;  */

void FUN_10a580b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2b18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a580b84; end: 10a580ba3;  */

void FUN_10a580b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2b18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a580ba4; end: 10a580bb3;  */

void FUN_10a580ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a580bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a580bb4; end: 10a580c5b;  */

undefined8 * FUN_10a580bb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2b68;
  (**(code **)param_1[9])();
  FUN_10a580e00(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a580c5c; end: 10a580cbf;  */

bool FUN_10a580c5c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x88) {
    iVar1 = 0xe4cc811;
    _memcmp(&UNK_10e4cc811);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a580cc0; end: 10a580ddf;  */

void FUN_10a580cc0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f661d4c);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a580de0; end: 10a580def;  */

undefined1  [16] FUN_10a580de0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x88;
  auVar1._0_8_ = &UNK_10e4cc811;
  return auVar1;
}



/* Entry: 10a580df0; end: 10a580dff;  */

long * FUN_10a580df0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a580e38();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a580e00; end: 10a580e37;  */

long * FUN_10a580e00(long *param_1)

{
  long lVar1;
  
  FUN_10a580e38(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a580e38; end: 10a580f0f;  */

void FUN_10a580e38(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a580ea0);
  (*pcVar1)();
}



/* Entry: 10a580f10; end: 10a580f67;  */

long FUN_10a580f10(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a580f68; end: 10a580fd7;  */

void FUN_10a580f68(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a580fd8();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a580fd8; end: 10a58102f;  */

long FUN_10a580fd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a581030; end: 10a58109f;  */

void FUN_10a581030(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a5810a0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a5810a0; end: 10a58117f;  */

long FUN_10a5810a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a581180; end: 10a5811c7;  */

void FUN_10a581180(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a5811c8; end: 10a581a07;  */

long FUN_10a5811c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a581a08; end: 10a581a1f;  */

undefined8 FUN_10a581a08(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x578;
  __Znwm(0x578);
  FUN_10a2ce6b8();
  return uVar1;
}



/* Entry: 10a581a20; end: 10a581a77;  */

undefined8 FUN_10a581a20(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x278;
  __Znwm(0x278);
  FUN_10a581a78();
  return uVar1;
}



/* Entry: 10a581a78; end: 10a581bb7;  */

undefined8 * FUN_10a581a78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x4b] = &PTR_FUN_110c383b8;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c31788,param_2,param_3);
  *puVar1 = &PTR_FUN_110c31498;
  puVar1[2] = &PTR_DAT_110c315b8;
  puVar1[7] = &PTR_DAT_110c31610;
  puVar1[0xd] = &PTR_DAT_110c31630;
  puVar1[0x4b] = &PTR_DAT_110c31748;
  puVar1[0x16] = &PTR_DAT_110c316a0;
  puVar1[0x17] = &PTR_DAT_110c316d0;
  puVar1[0x3e] = &PTR_FUN_110c31700;
  puVar1[0x40] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x42] = 0;
  puVar1[0x41] = 0;
  puVar1[0x44] = 0;
  puVar1[0x43] = 0;
  puVar1[0x45] = 0x3f80000000000000;
  puVar1[0x46] = puVar1 + 0x46;
  puVar1[0x47] = puVar1 + 0x46;
  puVar1[0x48] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x49] = puVar1 + 3;
  param_1[0x4a] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x49);
  return param_1;
}



/* Entry: 10a581bb8; end: 10a581c23;  */

void FUN_10a581bb8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a581c24(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a581c24; end: 10a581d53;  */

long FUN_10a581c24(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  plVar5 = *(long **)(param_1 + 0x40);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a581ca4(param_1 + 0x30);
  func_0x00010a581cfc(param_1 + 0x20);
  func_0x00010a042b54(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a581d54; end: 10a581d5f;  */

undefined8 FUN_10a581d54(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x278;
  __Znwm(0x278);
  FUN_10a2dc7e0();
  return uVar1;
}



/* Entry: 10a581d60; end: 10a581e27;  */

undefined8 * FUN_10a581d60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x510;
  __Znwm();
  puVar1[0x9e] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0xa1) = 0x100;
  puVar1[0xa0] = 0;
  puVar1[0x9f] = 0;
  FUN_10a2de284();
  *puVar1 = &PTR_FUN_110bfb0c0;
  puVar1[2] = &PTR_DAT_110bfb2f0;
  puVar1[7] = &PTR_FUN_110bfb348;
  puVar1[0xd] = &PTR_FUN_110bfb368;
  puVar1[0x9e] = &PTR_FUN_110bfb468;
  puVar1[0x16] = &PTR_FUN_110bfb3d8;
  puVar1[0x17] = &PTR_FUN_110bfb408;
  *(undefined1 *)((long)puVar1 + 0x20c) = 0;
  *(undefined4 *)(puVar1 + 0x42) = 0x7fffffff;
  return puVar1;
}


