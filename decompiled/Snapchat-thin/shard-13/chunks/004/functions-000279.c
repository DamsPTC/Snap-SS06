/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a57d344; end: 10a57d3a7;  */

bool FUN_10a57d344(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x8d) {
    iVar1 = 0xe4ca77c;
    _memcmp(&UNK_10e4ca77c);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57d3a8; end: 10a57d4c7;  */

void FUN_10a57d3a8(long *param_1,long param_2)

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



/* Entry: 10a57d4c8; end: 10a57d4d7;  */

undefined1  [16] FUN_10a57d4c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8d;
  auVar1._0_8_ = &UNK_10e4ca77c;
  return auVar1;
}



/* Entry: 10a57d4d8; end: 10a57d4e7;  */

long * FUN_10a57d4d8(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57d520();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57d4e8; end: 10a57d51f;  */

long * FUN_10a57d4e8(long *param_1)

{
  long lVar1;
  
  FUN_10a57d520(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57d520; end: 10a57d587;  */

void FUN_10a57d520(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57d588);
  (*pcVar1)();
}



/* Entry: 10a57d588; end: 10a57d597;  */

void FUN_10a57d588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf1fc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57d598; end: 10a57d5b7;  */

void FUN_10a57d598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf1fc0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57d5b8; end: 10a57d5c7;  */

void FUN_10a57d5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57d5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57d5c8; end: 10a57d66f;  */

undefined8 * FUN_10a57d5c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2010;
  (**(code **)param_1[9])();
  FUN_10a57d814(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57d670; end: 10a57d6d3;  */

bool FUN_10a57d670(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x8b) {
    iVar1 = 0xe4ca87e;
    _memcmp(&UNK_10e4ca87e);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57d6d4; end: 10a57d7f3;  */

void FUN_10a57d6d4(long *param_1,long param_2)

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



/* Entry: 10a57d7f4; end: 10a57d803;  */

undefined1  [16] FUN_10a57d7f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8b;
  auVar1._0_8_ = &UNK_10e4ca87e;
  return auVar1;
}



/* Entry: 10a57d804; end: 10a57d813;  */

long * FUN_10a57d804(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57d84c();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57d814; end: 10a57d84b;  */

long * FUN_10a57d814(long *param_1)

{
  long lVar1;
  
  FUN_10a57d84c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57d84c; end: 10a57d8b3;  */

void FUN_10a57d84c(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57d8b4);
  (*pcVar1)();
}



/* Entry: 10a57d8b4; end: 10a57d8c3;  */

void FUN_10a57d8b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2068;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57d8c4; end: 10a57d8e3;  */

void FUN_10a57d8c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2068;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57d8e4; end: 10a57d8f3;  */

void FUN_10a57d8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57d8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57d8f4; end: 10a57d99b;  */

undefined8 * FUN_10a57d8f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf20b8;
  (**(code **)param_1[9])();
  FUN_10a57db40(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57d99c; end: 10a57d9ff;  */

bool FUN_10a57d99c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x87) {
    iVar1 = 0xe4ca97a;
    _memcmp(&UNK_10e4ca97a);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57da00; end: 10a57db1f;  */

void FUN_10a57da00(long *param_1,long param_2)

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



/* Entry: 10a57db20; end: 10a57db2f;  */

undefined1  [16] FUN_10a57db20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x87;
  auVar1._0_8_ = &UNK_10e4ca97a;
  return auVar1;
}



/* Entry: 10a57db30; end: 10a57db3f;  */

long * FUN_10a57db30(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57db78();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57db40; end: 10a57db77;  */

long * FUN_10a57db40(long *param_1)

{
  long lVar1;
  
  FUN_10a57db78(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57db78; end: 10a57dbdf;  */

void FUN_10a57db78(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57dbe0);
  (*pcVar1)();
}



/* Entry: 10a57dbe0; end: 10a57dbef;  */

void FUN_10a57dbe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2110;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57dbf0; end: 10a57dc0f;  */

void FUN_10a57dbf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2110;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57dc10; end: 10a57dc1f;  */

void FUN_10a57dc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57dc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57dc20; end: 10a57dcc7;  */

undefined8 * FUN_10a57dc20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2160;
  (**(code **)param_1[9])();
  FUN_10a57de6c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57dcc8; end: 10a57dd2b;  */

bool FUN_10a57dcc8(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x86) {
    iVar1 = 0xe4caa71;
    _memcmp(&UNK_10e4caa71);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57dd2c; end: 10a57de4b;  */

void FUN_10a57dd2c(long *param_1,long param_2)

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



/* Entry: 10a57de4c; end: 10a57de5b;  */

undefined1  [16] FUN_10a57de4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x86;
  auVar1._0_8_ = &UNK_10e4caa71;
  return auVar1;
}



/* Entry: 10a57de5c; end: 10a57de6b;  */

long * FUN_10a57de5c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57dea4();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57de6c; end: 10a57dea3;  */

long * FUN_10a57de6c(long *param_1)

{
  long lVar1;
  
  FUN_10a57dea4(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57dea4; end: 10a57df0b;  */

void FUN_10a57dea4(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57df0c);
  (*pcVar1)();
}



/* Entry: 10a57df0c; end: 10a57df1b;  */

void FUN_10a57df0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf21b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57df1c; end: 10a57df3b;  */

void FUN_10a57df1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf21b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57df3c; end: 10a57df4b;  */

void FUN_10a57df3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57df44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57df4c; end: 10a57dff3;  */

undefined8 * FUN_10a57df4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2208;
  (**(code **)param_1[9])();
  FUN_10a57e198(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57dff4; end: 10a57e057;  */

bool FUN_10a57dff4(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x85) {
    iVar1 = 0xe4cab66;
    _memcmp(&UNK_10e4cab66);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57e058; end: 10a57e177;  */

void FUN_10a57e058(long *param_1,long param_2)

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



/* Entry: 10a57e178; end: 10a57e187;  */

undefined1  [16] FUN_10a57e178(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x85;
  auVar1._0_8_ = &UNK_10e4cab66;
  return auVar1;
}



/* Entry: 10a57e188; end: 10a57e197;  */

long * FUN_10a57e188(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57e1d0();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57e198; end: 10a57e1cf;  */

long * FUN_10a57e198(long *param_1)

{
  long lVar1;
  
  FUN_10a57e1d0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57e1d0; end: 10a57e237;  */

void FUN_10a57e1d0(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57e238);
  (*pcVar1)();
}



/* Entry: 10a57e238; end: 10a57e247;  */

void FUN_10a57e238(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57e248; end: 10a57e267;  */

void FUN_10a57e248(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2260;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57e268; end: 10a57e277;  */

void FUN_10a57e268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57e278; end: 10a57e31f;  */

undefined8 * FUN_10a57e278(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf22b0;
  (**(code **)param_1[9])();
  FUN_10a57e4c4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57e320; end: 10a57e383;  */

bool FUN_10a57e320(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x89) {
    iVar1 = 0xe4cac5e;
    _memcmp(&UNK_10e4cac5e);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57e384; end: 10a57e4a3;  */

void FUN_10a57e384(long *param_1,long param_2)

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



/* Entry: 10a57e4a4; end: 10a57e4b3;  */

undefined1  [16] FUN_10a57e4a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x89;
  auVar1._0_8_ = &UNK_10e4cac5e;
  return auVar1;
}



/* Entry: 10a57e4b4; end: 10a57e4c3;  */

long * FUN_10a57e4b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57e4fc();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57e4c4; end: 10a57e4fb;  */

long * FUN_10a57e4c4(long *param_1)

{
  long lVar1;
  
  FUN_10a57e4fc(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57e4fc; end: 10a57e563;  */

void FUN_10a57e4fc(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57e564);
  (*pcVar1)();
}



/* Entry: 10a57e564; end: 10a57e573;  */

void FUN_10a57e564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2308;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57e574; end: 10a57e593;  */

void FUN_10a57e574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2308;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57e594; end: 10a57e5a3;  */

void FUN_10a57e594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57e59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57e5a4; end: 10a57e64b;  */

undefined8 * FUN_10a57e5a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2358;
  (**(code **)param_1[9])();
  FUN_10a57e7f0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57e64c; end: 10a57e6af;  */

bool FUN_10a57e64c(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x88) {
    iVar1 = 0xe4cad59;
    _memcmp(&UNK_10e4cad59);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57e6b0; end: 10a57e7cf;  */

void FUN_10a57e6b0(long *param_1,long param_2)

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



/* Entry: 10a57e7d0; end: 10a57e7df;  */

undefined1  [16] FUN_10a57e7d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x88;
  auVar1._0_8_ = &UNK_10e4cad59;
  return auVar1;
}



/* Entry: 10a57e7e0; end: 10a57e7ef;  */

long * FUN_10a57e7e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57e828();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57e7f0; end: 10a57e827;  */

long * FUN_10a57e7f0(long *param_1)

{
  long lVar1;
  
  FUN_10a57e828(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57e828; end: 10a57e88f;  */

void FUN_10a57e828(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57e890);
  (*pcVar1)();
}



/* Entry: 10a57e890; end: 10a57e89f;  */

void FUN_10a57e890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf23b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57e8a0; end: 10a57e8bf;  */

void FUN_10a57e8a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf23b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57e8c0; end: 10a57e8cf;  */

void FUN_10a57e8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57e8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57e8d0; end: 10a57e977;  */

undefined8 * FUN_10a57e8d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2400;
  (**(code **)param_1[9])();
  FUN_10a57eb1c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57e978; end: 10a57e9db;  */

bool FUN_10a57e978(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x87) {
    iVar1 = 0xe4cae52;
    _memcmp(&UNK_10e4cae52);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57e9dc; end: 10a57eafb;  */

void FUN_10a57e9dc(long *param_1,long param_2)

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



/* Entry: 10a57eafc; end: 10a57eb0b;  */

undefined1  [16] FUN_10a57eafc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x87;
  auVar1._0_8_ = &UNK_10e4cae52;
  return auVar1;
}



/* Entry: 10a57eb0c; end: 10a57eb1b;  */

long * FUN_10a57eb0c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57eb54();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57eb1c; end: 10a57eb53;  */

long * FUN_10a57eb1c(long *param_1)

{
  long lVar1;
  
  FUN_10a57eb54(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57eb54; end: 10a57ebbb;  */

void FUN_10a57eb54(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57ebbc);
  (*pcVar1)();
}



/* Entry: 10a57ebbc; end: 10a57ebcb;  */

void FUN_10a57ebbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57ebcc; end: 10a57ebeb;  */

void FUN_10a57ebcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2458;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57ebec; end: 10a57ebfb;  */

void FUN_10a57ebec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57ebf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57ebfc; end: 10a57eca3;  */

undefined8 * FUN_10a57ebfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf24a8;
  (**(code **)param_1[9])();
  FUN_10a57ee48(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57eca4; end: 10a57ed07;  */

bool FUN_10a57eca4(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x89) {
    iVar1 = 0xe4caf4c;
    _memcmp(&UNK_10e4caf4c);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57ed08; end: 10a57ee27;  */

void FUN_10a57ed08(long *param_1,long param_2)

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



/* Entry: 10a57ee28; end: 10a57ee37;  */

undefined1  [16] FUN_10a57ee28(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x89;
  auVar1._0_8_ = &UNK_10e4caf4c;
  return auVar1;
}



/* Entry: 10a57ee38; end: 10a57ee47;  */

long * FUN_10a57ee38(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57ee80();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57ee48; end: 10a57ee7f;  */

long * FUN_10a57ee48(long *param_1)

{
  long lVar1;
  
  FUN_10a57ee80(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57ee80; end: 10a57eee7;  */

void FUN_10a57ee80(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57eee8);
  (*pcVar1)();
}



/* Entry: 10a57eee8; end: 10a57eef7;  */

void FUN_10a57eee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57eef8; end: 10a57ef17;  */

void FUN_10a57eef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2500;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57ef18; end: 10a57ef27;  */

void FUN_10a57ef18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57ef20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57ef28; end: 10a57efcf;  */

undefined8 * FUN_10a57ef28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2550;
  (**(code **)param_1[9])();
  FUN_10a57f174(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a57efd0; end: 10a57f033;  */

bool FUN_10a57efd0(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x87) {
    iVar1 = 0xe4cb046;
    _memcmp(&UNK_10e4cb046);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a57f034; end: 10a57f153;  */

void FUN_10a57f034(long *param_1,long param_2)

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



/* Entry: 10a57f154; end: 10a57f163;  */

undefined1  [16] FUN_10a57f154(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x87;
  auVar1._0_8_ = &UNK_10e4cb046;
  return auVar1;
}



/* Entry: 10a57f164; end: 10a57f173;  */

long * FUN_10a57f164(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  func_0x000105277f8c();
  FUN_10a57f1ac();
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10a57f174; end: 10a57f1ab;  */

long * FUN_10a57f174(long *param_1)

{
  long lVar1;
  
  FUN_10a57f1ac(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a57f1ac; end: 10a57f213;  */

void FUN_10a57f1ac(undefined8 param_1,long *param_2)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a57f214);
  (*pcVar1)();
}



/* Entry: 10a57f214; end: 10a57f223;  */

void FUN_10a57f214(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf25a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57f224; end: 10a57f243;  */

void FUN_10a57f224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf25a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57f244; end: 10a57f253;  */

void FUN_10a57f244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a57f24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57f254; end: 10a57f2fb;  */

undefined8 * FUN_10a57f254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf25f8;
  (**(code **)param_1[9])();
  FUN_10a57f4a0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}


